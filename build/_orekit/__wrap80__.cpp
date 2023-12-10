#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/Oem.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemSegment.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemSatelliteEphemeris.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *Oem::class$ = NULL;
              jmethodID *Oem::mids$ = NULL;
              bool Oem::live$ = false;
              ::java::lang::String *Oem::FORMAT_VERSION_KEY = NULL;
              ::java::lang::String *Oem::ROOT = NULL;

              jclass Oem::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/Oem");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_c312acee610c8d08] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;D)V");
                  mids$[mid_checkTimeSystems_7ae3461a92a43152] = env->getMethodID(cls, "checkTimeSystems", "()V");
                  mids$[mid_getSatellites_d6753b7055940a54] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  FORMAT_VERSION_KEY = new ::java::lang::String(env->getStaticObjectField(cls, "FORMAT_VERSION_KEY", "Ljava/lang/String;"));
                  ROOT = new ::java::lang::String(env->getStaticObjectField(cls, "ROOT", "Ljava/lang/String;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Oem::Oem(const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3, jdouble a4) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_c312acee610c8d08, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

              void Oem::checkTimeSystems() const
              {
                env->callVoidMethod(this$, mids$[mid_checkTimeSystems_7ae3461a92a43152]);
              }

              ::java::util::Map Oem::getSatellites() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_d6753b7055940a54]));
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
            namespace oem {
              static PyObject *t_Oem_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Oem_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Oem_of_(t_Oem *self, PyObject *args);
              static int t_Oem_init_(t_Oem *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Oem_checkTimeSystems(t_Oem *self);
              static PyObject *t_Oem_getSatellites(t_Oem *self);
              static PyObject *t_Oem_get__satellites(t_Oem *self, void *data);
              static PyObject *t_Oem_get__parameters_(t_Oem *self, void *data);
              static PyGetSetDef t_Oem__fields_[] = {
                DECLARE_GET_FIELD(t_Oem, satellites),
                DECLARE_GET_FIELD(t_Oem, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Oem__methods_[] = {
                DECLARE_METHOD(t_Oem, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Oem, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Oem, of_, METH_VARARGS),
                DECLARE_METHOD(t_Oem, checkTimeSystems, METH_NOARGS),
                DECLARE_METHOD(t_Oem, getSatellites, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Oem)[] = {
                { Py_tp_methods, t_Oem__methods_ },
                { Py_tp_init, (void *) t_Oem_init_ },
                { Py_tp_getset, t_Oem__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Oem)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
                NULL
              };

              DEFINE_TYPE(Oem, t_Oem, Oem);
              PyObject *t_Oem::wrap_Object(const Oem& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Oem::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Oem *self = (t_Oem *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Oem::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Oem::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Oem *self = (t_Oem *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Oem::install(PyObject *module)
              {
                installType(&PY_TYPE(Oem), &PY_TYPE_DEF(Oem), module, "Oem", 0);
              }

              void t_Oem::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Oem), "class_", make_descriptor(Oem::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Oem), "wrapfn_", make_descriptor(t_Oem::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Oem), "boxfn_", make_descriptor(boxObject));
                env->getClass(Oem::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(Oem), "FORMAT_VERSION_KEY", make_descriptor(j2p(*Oem::FORMAT_VERSION_KEY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Oem), "ROOT", make_descriptor(j2p(*Oem::ROOT)));
              }

              static PyObject *t_Oem_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Oem::initializeClass, 1)))
                  return NULL;
                return t_Oem::wrap_Object(Oem(((t_Oem *) arg)->object.this$));
              }
              static PyObject *t_Oem_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Oem::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Oem_of_(t_Oem *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Oem_init_(t_Oem *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::utils::IERSConventions a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::data::DataContext a3((jobject) NULL);
                jdouble a4;
                Oem object((jobject) NULL);

                if (!parseArgs(args, "kKKkD", ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3, &a4))
                {
                  INT_CALL(object = Oem(a0, a1, a2, a3, a4));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::odm::PY_TYPE(OdmHeader);
                  self->parameters[1] = ::org::orekit::files::ccsds::ndm::odm::oem::PY_TYPE(OemSegment);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_Oem_checkTimeSystems(t_Oem *self)
              {
                OBJ_CALL(self->object.checkTimeSystems());
                Py_RETURN_NONE;
              }

              static PyObject *t_Oem_getSatellites(t_Oem *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSatellites());
                return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::ndm::odm::oem::PY_TYPE(OemSatelliteEphemeris));
              }
              static PyObject *t_Oem_get__parameters_(t_Oem *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_Oem_get__satellites(t_Oem *self, void *data)
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
#include "org/orekit/propagation/events/handlers/RecordAndContinue$Event.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *RecordAndContinue$Event::class$ = NULL;
          jmethodID *RecordAndContinue$Event::mids$ = NULL;
          bool RecordAndContinue$Event::live$ = false;

          jclass RecordAndContinue$Event::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/RecordAndContinue$Event");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDetector_27b528e7858202ed] = env->getMethodID(cls, "getDetector", "()Lorg/orekit/propagation/events/EventDetector;");
              mids$[mid_getState_dd3e4a8d51055f1f] = env->getMethodID(cls, "getState", "()Lorg/orekit/propagation/SpacecraftState;");
              mids$[mid_isIncreasing_e470b6d9e0d979db] = env->getMethodID(cls, "isIncreasing", "()Z");
              mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::propagation::events::EventDetector RecordAndContinue$Event::getDetector() const
          {
            return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_27b528e7858202ed]));
          }

          ::org::orekit::propagation::SpacecraftState RecordAndContinue$Event::getState() const
          {
            return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getState_dd3e4a8d51055f1f]));
          }

          jboolean RecordAndContinue$Event::isIncreasing() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isIncreasing_e470b6d9e0d979db]);
          }

          ::java::lang::String RecordAndContinue$Event::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
      namespace events {
        namespace handlers {
          static PyObject *t_RecordAndContinue$Event_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RecordAndContinue$Event_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RecordAndContinue$Event_getDetector(t_RecordAndContinue$Event *self);
          static PyObject *t_RecordAndContinue$Event_getState(t_RecordAndContinue$Event *self);
          static PyObject *t_RecordAndContinue$Event_isIncreasing(t_RecordAndContinue$Event *self);
          static PyObject *t_RecordAndContinue$Event_toString(t_RecordAndContinue$Event *self, PyObject *args);
          static PyObject *t_RecordAndContinue$Event_get__detector(t_RecordAndContinue$Event *self, void *data);
          static PyObject *t_RecordAndContinue$Event_get__increasing(t_RecordAndContinue$Event *self, void *data);
          static PyObject *t_RecordAndContinue$Event_get__state(t_RecordAndContinue$Event *self, void *data);
          static PyGetSetDef t_RecordAndContinue$Event__fields_[] = {
            DECLARE_GET_FIELD(t_RecordAndContinue$Event, detector),
            DECLARE_GET_FIELD(t_RecordAndContinue$Event, increasing),
            DECLARE_GET_FIELD(t_RecordAndContinue$Event, state),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RecordAndContinue$Event__methods_[] = {
            DECLARE_METHOD(t_RecordAndContinue$Event, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RecordAndContinue$Event, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RecordAndContinue$Event, getDetector, METH_NOARGS),
            DECLARE_METHOD(t_RecordAndContinue$Event, getState, METH_NOARGS),
            DECLARE_METHOD(t_RecordAndContinue$Event, isIncreasing, METH_NOARGS),
            DECLARE_METHOD(t_RecordAndContinue$Event, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RecordAndContinue$Event)[] = {
            { Py_tp_methods, t_RecordAndContinue$Event__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RecordAndContinue$Event__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RecordAndContinue$Event)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RecordAndContinue$Event, t_RecordAndContinue$Event, RecordAndContinue$Event);

          void t_RecordAndContinue$Event::install(PyObject *module)
          {
            installType(&PY_TYPE(RecordAndContinue$Event), &PY_TYPE_DEF(RecordAndContinue$Event), module, "RecordAndContinue$Event", 0);
          }

          void t_RecordAndContinue$Event::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordAndContinue$Event), "class_", make_descriptor(RecordAndContinue$Event::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordAndContinue$Event), "wrapfn_", make_descriptor(t_RecordAndContinue$Event::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordAndContinue$Event), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RecordAndContinue$Event_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RecordAndContinue$Event::initializeClass, 1)))
              return NULL;
            return t_RecordAndContinue$Event::wrap_Object(RecordAndContinue$Event(((t_RecordAndContinue$Event *) arg)->object.this$));
          }
          static PyObject *t_RecordAndContinue$Event_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RecordAndContinue$Event::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RecordAndContinue$Event_getDetector(t_RecordAndContinue$Event *self)
          {
            ::org::orekit::propagation::events::EventDetector result((jobject) NULL);
            OBJ_CALL(result = self->object.getDetector());
            return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
          }

          static PyObject *t_RecordAndContinue$Event_getState(t_RecordAndContinue$Event *self)
          {
            ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
            OBJ_CALL(result = self->object.getState());
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          static PyObject *t_RecordAndContinue$Event_isIncreasing(t_RecordAndContinue$Event *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isIncreasing());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_RecordAndContinue$Event_toString(t_RecordAndContinue$Event *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(RecordAndContinue$Event), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_RecordAndContinue$Event_get__detector(t_RecordAndContinue$Event *self, void *data)
          {
            ::org::orekit::propagation::events::EventDetector value((jobject) NULL);
            OBJ_CALL(value = self->object.getDetector());
            return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(value);
          }

          static PyObject *t_RecordAndContinue$Event_get__increasing(t_RecordAndContinue$Event *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isIncreasing());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_RecordAndContinue$Event_get__state(t_RecordAndContinue$Event *self, void *data)
          {
            ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
            OBJ_CALL(value = self->object.getState());
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmParser.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmHeader.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/cdm/Cdm.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmParser.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
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
                mids$[mid_build_5355e97662c6268b] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/cdm/Cdm;");
                mids$[mid_finalizeData_e470b6d9e0d979db] = env->getMethodID(cls, "finalizeData", "()Z");
                mids$[mid_finalizeHeader_e470b6d9e0d979db] = env->getMethodID(cls, "finalizeHeader", "()Z");
                mids$[mid_finalizeMetadata_e470b6d9e0d979db] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                mids$[mid_getHeader_ee1b1328c259513c] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/cdm/CdmHeader;");
                mids$[mid_inData_e470b6d9e0d979db] = env->getMethodID(cls, "inData", "()Z");
                mids$[mid_inHeader_e470b6d9e0d979db] = env->getMethodID(cls, "inHeader", "()Z");
                mids$[mid_inMetadata_e470b6d9e0d979db] = env->getMethodID(cls, "inMetadata", "()Z");
                mids$[mid_prepareData_e470b6d9e0d979db] = env->getMethodID(cls, "prepareData", "()Z");
                mids$[mid_prepareHeader_e470b6d9e0d979db] = env->getMethodID(cls, "prepareHeader", "()Z");
                mids$[mid_prepareMetadata_e470b6d9e0d979db] = env->getMethodID(cls, "prepareMetadata", "()Z");
                mids$[mid_reset_052c3a3464b50355] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::files::ccsds::ndm::cdm::Cdm CdmParser::build() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::Cdm(env->callObjectMethod(this$, mids$[mid_build_5355e97662c6268b]));
            }

            jboolean CdmParser::finalizeData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_finalizeData_e470b6d9e0d979db]);
            }

            jboolean CdmParser::finalizeHeader() const
            {
              return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_e470b6d9e0d979db]);
            }

            jboolean CdmParser::finalizeMetadata() const
            {
              return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_e470b6d9e0d979db]);
            }

            ::org::orekit::files::ccsds::ndm::cdm::CdmHeader CdmParser::getHeader() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::CdmHeader(env->callObjectMethod(this$, mids$[mid_getHeader_ee1b1328c259513c]));
            }

            jboolean CdmParser::inData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_inData_e470b6d9e0d979db]);
            }

            jboolean CdmParser::inHeader() const
            {
              return env->callBooleanMethod(this$, mids$[mid_inHeader_e470b6d9e0d979db]);
            }

            jboolean CdmParser::inMetadata() const
            {
              return env->callBooleanMethod(this$, mids$[mid_inMetadata_e470b6d9e0d979db]);
            }

            jboolean CdmParser::prepareData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_prepareData_e470b6d9e0d979db]);
            }

            jboolean CdmParser::prepareHeader() const
            {
              return env->callBooleanMethod(this$, mids$[mid_prepareHeader_e470b6d9e0d979db]);
            }

            jboolean CdmParser::prepareMetadata() const
            {
              return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_e470b6d9e0d979db]);
            }

            void CdmParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_reset_052c3a3464b50355], a0.this$);
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
#include "org/orekit/files/ccsds/ndm/cdm/CdmMessageWriter.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmHeader.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmSegment.h"
#include "org/orekit/files/ccsds/utils/generation/MessageWriter.h"
#include "org/orekit/files/ccsds/ndm/cdm/Cdm.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadata.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmData.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmMessageWriter::class$ = NULL;
            jmethodID *CdmMessageWriter::mids$ = NULL;
            bool CdmMessageWriter::live$ = false;
            ::java::lang::String *CdmMessageWriter::DEFAULT_ORIGINATOR = NULL;

            jclass CdmMessageWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmMessageWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_478a9a59660d41ab] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;DLorg/orekit/files/ccsds/utils/ContextBinding;)V");
                mids$[mid_getContext_21a51eed276d81e3] = env->getMethodID(cls, "getContext", "()Lorg/orekit/files/ccsds/utils/ContextBinding;");
                mids$[mid_getDefaultVersion_456d9a2f64d6b28d] = env->getMethodID(cls, "getDefaultVersion", "()D");
                mids$[mid_getFormatVersionKey_0090f7797e403f43] = env->getMethodID(cls, "getFormatVersionKey", "()Ljava/lang/String;");
                mids$[mid_getRoot_0090f7797e403f43] = env->getMethodID(cls, "getRoot", "()Ljava/lang/String;");
                mids$[mid_getTimeConverter_131aec6eeceff57f] = env->getMethodID(cls, "getTimeConverter", "()Lorg/orekit/files/ccsds/definitions/TimeConverter;");
                mids$[mid_getVersion_456d9a2f64d6b28d] = env->getMethodID(cls, "getVersion", "()D");
                mids$[mid_setContext_b23a8b8e76c44cd4] = env->getMethodID(cls, "setContext", "(Lorg/orekit/files/ccsds/utils/ContextBinding;)V");
                mids$[mid_writeFooter_fb36c2e4ae059ab9] = env->getMethodID(cls, "writeFooter", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");
                mids$[mid_writeHeader_325a769010976059] = env->getMethodID(cls, "writeHeader", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/cdm/CdmHeader;)V");
                mids$[mid_writeRelativeMetadataContent_6f7f8f4354c51157] = env->getMethodID(cls, "writeRelativeMetadataContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata;)V");
                mids$[mid_writeSegment_253a7e5bc06c891d] = env->getMethodID(cls, "writeSegment", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/cdm/CdmSegment;)V");
                mids$[mid_writeSegmentContent_17bd99da1e106002] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                DEFAULT_ORIGINATOR = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_ORIGINATOR", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CdmMessageWriter::CdmMessageWriter(const ::java::lang::String & a0, const ::java::lang::String & a1, jdouble a2, const ::org::orekit::files::ccsds::utils::ContextBinding & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_478a9a59660d41ab, a0.this$, a1.this$, a2, a3.this$)) {}

            ::org::orekit::files::ccsds::utils::ContextBinding CdmMessageWriter::getContext() const
            {
              return ::org::orekit::files::ccsds::utils::ContextBinding(env->callObjectMethod(this$, mids$[mid_getContext_21a51eed276d81e3]));
            }

            jdouble CdmMessageWriter::getDefaultVersion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDefaultVersion_456d9a2f64d6b28d]);
            }

            ::java::lang::String CdmMessageWriter::getFormatVersionKey() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFormatVersionKey_0090f7797e403f43]));
            }

            ::java::lang::String CdmMessageWriter::getRoot() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRoot_0090f7797e403f43]));
            }

            ::org::orekit::files::ccsds::definitions::TimeConverter CdmMessageWriter::getTimeConverter() const
            {
              return ::org::orekit::files::ccsds::definitions::TimeConverter(env->callObjectMethod(this$, mids$[mid_getTimeConverter_131aec6eeceff57f]));
            }

            jdouble CdmMessageWriter::getVersion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getVersion_456d9a2f64d6b28d]);
            }

            void CdmMessageWriter::setContext(const ::org::orekit::files::ccsds::utils::ContextBinding & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setContext_b23a8b8e76c44cd4], a0.this$);
            }

            void CdmMessageWriter::writeFooter(const ::org::orekit::files::ccsds::utils::generation::Generator & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeFooter_fb36c2e4ae059ab9], a0.this$);
            }

            void CdmMessageWriter::writeHeader(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::cdm::CdmHeader & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_writeHeader_325a769010976059], a0.this$, a1.this$);
            }

            void CdmMessageWriter::writeRelativeMetadataContent(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, jdouble a1, const ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata & a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeRelativeMetadataContent_6f7f8f4354c51157], a0.this$, a1, a2.this$);
            }

            void CdmMessageWriter::writeSegment(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::cdm::CdmSegment & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_writeSegment_253a7e5bc06c891d], a0.this$, a1.this$);
            }

            void CdmMessageWriter::writeSegmentContent(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, jdouble a1, const ::org::orekit::files::ccsds::section::Segment & a2) const
            {
              env->callVoidMethod(this$, mids$[mid_writeSegmentContent_17bd99da1e106002], a0.this$, a1, a2.this$);
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
            static PyObject *t_CdmMessageWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmMessageWriter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CdmMessageWriter_init_(t_CdmMessageWriter *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CdmMessageWriter_getContext(t_CdmMessageWriter *self);
            static PyObject *t_CdmMessageWriter_getDefaultVersion(t_CdmMessageWriter *self);
            static PyObject *t_CdmMessageWriter_getFormatVersionKey(t_CdmMessageWriter *self);
            static PyObject *t_CdmMessageWriter_getRoot(t_CdmMessageWriter *self);
            static PyObject *t_CdmMessageWriter_getTimeConverter(t_CdmMessageWriter *self);
            static PyObject *t_CdmMessageWriter_getVersion(t_CdmMessageWriter *self);
            static PyObject *t_CdmMessageWriter_setContext(t_CdmMessageWriter *self, PyObject *arg);
            static PyObject *t_CdmMessageWriter_writeFooter(t_CdmMessageWriter *self, PyObject *arg);
            static PyObject *t_CdmMessageWriter_writeHeader(t_CdmMessageWriter *self, PyObject *args);
            static PyObject *t_CdmMessageWriter_writeRelativeMetadataContent(t_CdmMessageWriter *self, PyObject *args);
            static PyObject *t_CdmMessageWriter_writeSegment(t_CdmMessageWriter *self, PyObject *args);
            static PyObject *t_CdmMessageWriter_writeSegmentContent(t_CdmMessageWriter *self, PyObject *args);
            static PyObject *t_CdmMessageWriter_get__context(t_CdmMessageWriter *self, void *data);
            static int t_CdmMessageWriter_set__context(t_CdmMessageWriter *self, PyObject *arg, void *data);
            static PyObject *t_CdmMessageWriter_get__defaultVersion(t_CdmMessageWriter *self, void *data);
            static PyObject *t_CdmMessageWriter_get__formatVersionKey(t_CdmMessageWriter *self, void *data);
            static PyObject *t_CdmMessageWriter_get__root(t_CdmMessageWriter *self, void *data);
            static PyObject *t_CdmMessageWriter_get__timeConverter(t_CdmMessageWriter *self, void *data);
            static PyObject *t_CdmMessageWriter_get__version(t_CdmMessageWriter *self, void *data);
            static PyGetSetDef t_CdmMessageWriter__fields_[] = {
              DECLARE_GETSET_FIELD(t_CdmMessageWriter, context),
              DECLARE_GET_FIELD(t_CdmMessageWriter, defaultVersion),
              DECLARE_GET_FIELD(t_CdmMessageWriter, formatVersionKey),
              DECLARE_GET_FIELD(t_CdmMessageWriter, root),
              DECLARE_GET_FIELD(t_CdmMessageWriter, timeConverter),
              DECLARE_GET_FIELD(t_CdmMessageWriter, version),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmMessageWriter__methods_[] = {
              DECLARE_METHOD(t_CdmMessageWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmMessageWriter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmMessageWriter, getContext, METH_NOARGS),
              DECLARE_METHOD(t_CdmMessageWriter, getDefaultVersion, METH_NOARGS),
              DECLARE_METHOD(t_CdmMessageWriter, getFormatVersionKey, METH_NOARGS),
              DECLARE_METHOD(t_CdmMessageWriter, getRoot, METH_NOARGS),
              DECLARE_METHOD(t_CdmMessageWriter, getTimeConverter, METH_NOARGS),
              DECLARE_METHOD(t_CdmMessageWriter, getVersion, METH_NOARGS),
              DECLARE_METHOD(t_CdmMessageWriter, setContext, METH_O),
              DECLARE_METHOD(t_CdmMessageWriter, writeFooter, METH_O),
              DECLARE_METHOD(t_CdmMessageWriter, writeHeader, METH_VARARGS),
              DECLARE_METHOD(t_CdmMessageWriter, writeRelativeMetadataContent, METH_VARARGS),
              DECLARE_METHOD(t_CdmMessageWriter, writeSegment, METH_VARARGS),
              DECLARE_METHOD(t_CdmMessageWriter, writeSegmentContent, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmMessageWriter)[] = {
              { Py_tp_methods, t_CdmMessageWriter__methods_ },
              { Py_tp_init, (void *) t_CdmMessageWriter_init_ },
              { Py_tp_getset, t_CdmMessageWriter__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmMessageWriter)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CdmMessageWriter, t_CdmMessageWriter, CdmMessageWriter);

            void t_CdmMessageWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmMessageWriter), &PY_TYPE_DEF(CdmMessageWriter), module, "CdmMessageWriter", 0);
            }

            void t_CdmMessageWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMessageWriter), "class_", make_descriptor(CdmMessageWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMessageWriter), "wrapfn_", make_descriptor(t_CdmMessageWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMessageWriter), "boxfn_", make_descriptor(boxObject));
              env->getClass(CdmMessageWriter::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMessageWriter), "DEFAULT_ORIGINATOR", make_descriptor(j2p(*CdmMessageWriter::DEFAULT_ORIGINATOR)));
            }

            static PyObject *t_CdmMessageWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmMessageWriter::initializeClass, 1)))
                return NULL;
              return t_CdmMessageWriter::wrap_Object(CdmMessageWriter(((t_CdmMessageWriter *) arg)->object.this$));
            }
            static PyObject *t_CdmMessageWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmMessageWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CdmMessageWriter_init_(t_CdmMessageWriter *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::files::ccsds::utils::ContextBinding a3((jobject) NULL);
              CdmMessageWriter object((jobject) NULL);

              if (!parseArgs(args, "ssDk", ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = CdmMessageWriter(a0, a1, a2, a3));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CdmMessageWriter_getContext(t_CdmMessageWriter *self)
            {
              ::org::orekit::files::ccsds::utils::ContextBinding result((jobject) NULL);
              OBJ_CALL(result = self->object.getContext());
              return ::org::orekit::files::ccsds::utils::t_ContextBinding::wrap_Object(result);
            }

            static PyObject *t_CdmMessageWriter_getDefaultVersion(t_CdmMessageWriter *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDefaultVersion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmMessageWriter_getFormatVersionKey(t_CdmMessageWriter *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getFormatVersionKey());
              return j2p(result);
            }

            static PyObject *t_CdmMessageWriter_getRoot(t_CdmMessageWriter *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getRoot());
              return j2p(result);
            }

            static PyObject *t_CdmMessageWriter_getTimeConverter(t_CdmMessageWriter *self)
            {
              ::org::orekit::files::ccsds::definitions::TimeConverter result((jobject) NULL);
              OBJ_CALL(result = self->object.getTimeConverter());
              return ::org::orekit::files::ccsds::definitions::t_TimeConverter::wrap_Object(result);
            }

            static PyObject *t_CdmMessageWriter_getVersion(t_CdmMessageWriter *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getVersion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmMessageWriter_setContext(t_CdmMessageWriter *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::ContextBinding a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setContext(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setContext", arg);
              return NULL;
            }

            static PyObject *t_CdmMessageWriter_writeFooter(t_CdmMessageWriter *self, PyObject *arg)
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

            static PyObject *t_CdmMessageWriter_writeHeader(t_CdmMessageWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::CdmHeader a1((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::CdmHeader::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.writeHeader(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeHeader", args);
              return NULL;
            }

            static PyObject *t_CdmMessageWriter_writeRelativeMetadataContent(t_CdmMessageWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata a2((jobject) NULL);

              if (!parseArgs(args, "kDk", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.writeRelativeMetadataContent(a0, a1, a2));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeRelativeMetadataContent", args);
              return NULL;
            }

            static PyObject *t_CdmMessageWriter_writeSegment(t_CdmMessageWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::CdmSegment a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::CdmSegment::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::cdm::t_CdmSegment::parameters_))
              {
                OBJ_CALL(self->object.writeSegment(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeSegment", args);
              return NULL;
            }

            static PyObject *t_CdmMessageWriter_writeSegmentContent(t_CdmMessageWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::files::ccsds::section::Segment a2((jobject) NULL);
              PyTypeObject **p2;

              if (!parseArgs(args, "kDK", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::section::Segment::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::files::ccsds::section::t_Segment::parameters_))
              {
                OBJ_CALL(self->object.writeSegmentContent(a0, a1, a2));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeSegmentContent", args);
              return NULL;
            }

            static PyObject *t_CdmMessageWriter_get__context(t_CdmMessageWriter *self, void *data)
            {
              ::org::orekit::files::ccsds::utils::ContextBinding value((jobject) NULL);
              OBJ_CALL(value = self->object.getContext());
              return ::org::orekit::files::ccsds::utils::t_ContextBinding::wrap_Object(value);
            }
            static int t_CdmMessageWriter_set__context(t_CdmMessageWriter *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::utils::ContextBinding value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &value))
                {
                  INT_CALL(self->object.setContext(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "context", arg);
              return -1;
            }

            static PyObject *t_CdmMessageWriter_get__defaultVersion(t_CdmMessageWriter *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDefaultVersion());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CdmMessageWriter_get__formatVersionKey(t_CdmMessageWriter *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getFormatVersionKey());
              return j2p(value);
            }

            static PyObject *t_CdmMessageWriter_get__root(t_CdmMessageWriter *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getRoot());
              return j2p(value);
            }

            static PyObject *t_CdmMessageWriter_get__timeConverter(t_CdmMessageWriter *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::TimeConverter value((jobject) NULL);
              OBJ_CALL(value = self->object.getTimeConverter());
              return ::org::orekit::files::ccsds::definitions::t_TimeConverter::wrap_Object(value);
            }

            static PyObject *t_CdmMessageWriter_get__version(t_CdmMessageWriter *self, void *data)
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
#include "org/hipparchus/stat/fitting/EmpiricalDistribution.h"
#include "java/io/IOException.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/util/List.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/stat/descriptive/StreamingStatistics.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/io/File.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/StatisticalSummary.h"
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
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
            mids$[mid_init$_bb31e8cbfaf41e63] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;)V");
            mids$[mid_init$_3838ea28c063a110] = env->getMethodID(cls, "<init>", "(ILorg/hipparchus/random/RandomGenerator;)V");
            mids$[mid_cumulativeProbability_0ba5fed9597b693e] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_0ba5fed9597b693e] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getBinCount_f2f64475e4580546] = env->getMethodID(cls, "getBinCount", "()I");
            mids$[mid_getBinStats_a6156df500549a58] = env->getMethodID(cls, "getBinStats", "()Ljava/util/List;");
            mids$[mid_getGeneratorUpperBounds_7cdc325af0834901] = env->getMethodID(cls, "getGeneratorUpperBounds", "()[D");
            mids$[mid_getNextValue_456d9a2f64d6b28d] = env->getMethodID(cls, "getNextValue", "()D");
            mids$[mid_getNumericalMean_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSampleStats_47e97143cdc53a1c] = env->getMethodID(cls, "getSampleStats", "()Lorg/hipparchus/stat/descriptive/StatisticalSummary;");
            mids$[mid_getSupportLowerBound_456d9a2f64d6b28d] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_456d9a2f64d6b28d] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_getUpperBounds_7cdc325af0834901] = env->getMethodID(cls, "getUpperBounds", "()[D");
            mids$[mid_inverseCumulativeProbability_0ba5fed9597b693e] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isLoaded_e470b6d9e0d979db] = env->getMethodID(cls, "isLoaded", "()Z");
            mids$[mid_isSupportConnected_e470b6d9e0d979db] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_load_ebc26dcaf4761286] = env->getMethodID(cls, "load", "([D)V");
            mids$[mid_load_46e66c77c82c9a6b] = env->getMethodID(cls, "load", "(Ljava/io/File;)V");
            mids$[mid_load_466101f788d70aca] = env->getMethodID(cls, "load", "(Ljava/net/URL;)V");
            mids$[mid_reSeed_fefb08975c10f0a1] = env->getMethodID(cls, "reSeed", "(J)V");
            mids$[mid_reseedRandomGenerator_fefb08975c10f0a1] = env->getMethodID(cls, "reseedRandomGenerator", "(J)V");
            mids$[mid_getKernel_f22f19290070a5b3] = env->getMethodID(cls, "getKernel", "(Lorg/hipparchus/stat/descriptive/StreamingStatistics;)Lorg/hipparchus/distribution/RealDistribution;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_BIN_COUNT = env->getStaticIntField(cls, "DEFAULT_BIN_COUNT");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EmpiricalDistribution::EmpiricalDistribution() : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        EmpiricalDistribution::EmpiricalDistribution(jint a0) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

        EmpiricalDistribution::EmpiricalDistribution(const ::org::hipparchus::random::RandomGenerator & a0) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_bb31e8cbfaf41e63, a0.this$)) {}

        EmpiricalDistribution::EmpiricalDistribution(jint a0, const ::org::hipparchus::random::RandomGenerator & a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_3838ea28c063a110, a0, a1.this$)) {}

        jdouble EmpiricalDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_0ba5fed9597b693e], a0);
        }

        jdouble EmpiricalDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_0ba5fed9597b693e], a0);
        }

        jint EmpiricalDistribution::getBinCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getBinCount_f2f64475e4580546]);
        }

        ::java::util::List EmpiricalDistribution::getBinStats() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getBinStats_a6156df500549a58]));
        }

        JArray< jdouble > EmpiricalDistribution::getGeneratorUpperBounds() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getGeneratorUpperBounds_7cdc325af0834901]));
        }

        jdouble EmpiricalDistribution::getNextValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNextValue_456d9a2f64d6b28d]);
        }

        jdouble EmpiricalDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_456d9a2f64d6b28d]);
        }

        jdouble EmpiricalDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_456d9a2f64d6b28d]);
        }

        ::org::hipparchus::stat::descriptive::StatisticalSummary EmpiricalDistribution::getSampleStats() const
        {
          return ::org::hipparchus::stat::descriptive::StatisticalSummary(env->callObjectMethod(this$, mids$[mid_getSampleStats_47e97143cdc53a1c]));
        }

        jdouble EmpiricalDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_456d9a2f64d6b28d]);
        }

        jdouble EmpiricalDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_456d9a2f64d6b28d]);
        }

        JArray< jdouble > EmpiricalDistribution::getUpperBounds() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getUpperBounds_7cdc325af0834901]));
        }

        jdouble EmpiricalDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_0ba5fed9597b693e], a0);
        }

        jboolean EmpiricalDistribution::isLoaded() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isLoaded_e470b6d9e0d979db]);
        }

        jboolean EmpiricalDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_e470b6d9e0d979db]);
        }

        void EmpiricalDistribution::load(const JArray< jdouble > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_load_ebc26dcaf4761286], a0.this$);
        }

        void EmpiricalDistribution::load(const ::java::io::File & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_load_46e66c77c82c9a6b], a0.this$);
        }

        void EmpiricalDistribution::load(const ::java::net::URL & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_load_466101f788d70aca], a0.this$);
        }

        void EmpiricalDistribution::reSeed(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_reSeed_fefb08975c10f0a1], a0);
        }

        void EmpiricalDistribution::reseedRandomGenerator(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_reseedRandomGenerator_fefb08975c10f0a1], a0);
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
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1064.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmClockCorrectionData.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *Rtcm1064::class$ = NULL;
              jmethodID *Rtcm1064::mids$ = NULL;
              bool Rtcm1064::live$ = false;

              jclass Rtcm1064::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1064");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_3e6a4f6a0e2f98dc] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader;Ljava/util/List;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1064::Rtcm1064(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(env->newObject(initializeClass, &mids$, mid_init$_3e6a4f6a0e2f98dc, a0, a1.this$, a2.this$)) {}
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
              static PyObject *t_Rtcm1064_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1064_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1064_of_(t_Rtcm1064 *self, PyObject *args);
              static int t_Rtcm1064_init_(t_Rtcm1064 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1064_get__parameters_(t_Rtcm1064 *self, void *data);
              static PyGetSetDef t_Rtcm1064__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1064, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1064__methods_[] = {
                DECLARE_METHOD(t_Rtcm1064, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1064, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1064, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1064)[] = {
                { Py_tp_methods, t_Rtcm1064__methods_ },
                { Py_tp_init, (void *) t_Rtcm1064_init_ },
                { Py_tp_getset, t_Rtcm1064__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1064)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1064, t_Rtcm1064, Rtcm1064);
              PyObject *t_Rtcm1064::wrap_Object(const Rtcm1064& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1064::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1064 *self = (t_Rtcm1064 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Rtcm1064::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1064::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1064 *self = (t_Rtcm1064 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Rtcm1064::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1064), &PY_TYPE_DEF(Rtcm1064), module, "Rtcm1064", 0);
              }

              void t_Rtcm1064::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1064), "class_", make_descriptor(Rtcm1064::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1064), "wrapfn_", make_descriptor(t_Rtcm1064::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1064), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1064_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1064::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1064::wrap_Object(Rtcm1064(((t_Rtcm1064 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1064_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1064::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1064_of_(t_Rtcm1064 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1064_init_(t_Rtcm1064 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                Rtcm1064 object((jobject) NULL);

                if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = Rtcm1064(a0, a1, a2));
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
              static PyObject *t_Rtcm1064_get__parameters_(t_Rtcm1064 *self, void *data)
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
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *SmoothStepFactory$SmoothStepFunction::class$ = NULL;
        jmethodID *SmoothStepFactory$SmoothStepFunction::mids$ = NULL;
        bool SmoothStepFactory$SmoothStepFunction::live$ = false;

        jclass SmoothStepFactory$SmoothStepFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_c564d6ace53a5934] = env->getMethodID(cls, "value", "(DDD)D");
            mids$[mid_checkInputEdges_1d715fa3b7b756e1] = env->getMethodID(cls, "checkInputEdges", "(DD)V");
            mids$[mid_clampInput_c564d6ace53a5934] = env->getMethodID(cls, "clampInput", "(DDD)D");
            mids$[mid_normalizeInput_c564d6ace53a5934] = env->getMethodID(cls, "normalizeInput", "(DDD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble SmoothStepFactory$SmoothStepFunction::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_0ba5fed9597b693e], a0);
        }

        jdouble SmoothStepFactory$SmoothStepFunction::value(jdouble a0, jdouble a1, jdouble a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_c564d6ace53a5934], a0, a1, a2);
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
        static PyObject *t_SmoothStepFactory$SmoothStepFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothStepFactory$SmoothStepFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothStepFactory$SmoothStepFunction_value(t_SmoothStepFactory$SmoothStepFunction *self, PyObject *args);

        static PyMethodDef t_SmoothStepFactory$SmoothStepFunction__methods_[] = {
          DECLARE_METHOD(t_SmoothStepFactory$SmoothStepFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory$SmoothStepFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory$SmoothStepFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SmoothStepFactory$SmoothStepFunction)[] = {
          { Py_tp_methods, t_SmoothStepFactory$SmoothStepFunction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SmoothStepFactory$SmoothStepFunction)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::polynomials::PolynomialFunction),
          NULL
        };

        DEFINE_TYPE(SmoothStepFactory$SmoothStepFunction, t_SmoothStepFactory$SmoothStepFunction, SmoothStepFactory$SmoothStepFunction);

        void t_SmoothStepFactory$SmoothStepFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(SmoothStepFactory$SmoothStepFunction), &PY_TYPE_DEF(SmoothStepFactory$SmoothStepFunction), module, "SmoothStepFactory$SmoothStepFunction", 0);
        }

        void t_SmoothStepFactory$SmoothStepFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory$SmoothStepFunction), "class_", make_descriptor(SmoothStepFactory$SmoothStepFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory$SmoothStepFunction), "wrapfn_", make_descriptor(t_SmoothStepFactory$SmoothStepFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory$SmoothStepFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SmoothStepFactory$SmoothStepFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SmoothStepFactory$SmoothStepFunction::initializeClass, 1)))
            return NULL;
          return t_SmoothStepFactory$SmoothStepFunction::wrap_Object(SmoothStepFactory$SmoothStepFunction(((t_SmoothStepFactory$SmoothStepFunction *) arg)->object.this$));
        }
        static PyObject *t_SmoothStepFactory$SmoothStepFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SmoothStepFactory$SmoothStepFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SmoothStepFactory$SmoothStepFunction_value(t_SmoothStepFactory$SmoothStepFunction *self, PyObject *args)
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
            break;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble result;

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.value(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          return callSuper(PY_TYPE(SmoothStepFactory$SmoothStepFunction), (PyObject *) self, "value", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/LnsCoefficients.h"
#include "java/util/SortedMap.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/CoefficientsFactory$NSKey.h"
#include "java/lang/Class.h"
#include "java/lang/Double.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *LnsCoefficients::class$ = NULL;
            jmethodID *LnsCoefficients::mids$ = NULL;
            bool LnsCoefficients::live$ = false;

            jclass LnsCoefficients::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/LnsCoefficients");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_3e3512f53e474a8c] = env->getMethodID(cls, "<init>", "(II[[DLjava/util/SortedMap;D)V");
                mids$[mid_getLns_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getLns", "(II)D");
                mids$[mid_getdLnsdGamma_a84e4ee1da3f1ab8] = env->getMethodID(cls, "getdLnsdGamma", "(II)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            LnsCoefficients::LnsCoefficients(jint a0, jint a1, const JArray< JArray< jdouble > > & a2, const ::java::util::SortedMap & a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3e3512f53e474a8c, a0, a1, a2.this$, a3.this$, a4)) {}

            jdouble LnsCoefficients::getLns(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getLns_a84e4ee1da3f1ab8], a0, a1);
            }

            jdouble LnsCoefficients::getdLnsdGamma(jint a0, jint a1) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdLnsdGamma_a84e4ee1da3f1ab8], a0, a1);
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
            static PyObject *t_LnsCoefficients_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LnsCoefficients_instance_(PyTypeObject *type, PyObject *arg);
            static int t_LnsCoefficients_init_(t_LnsCoefficients *self, PyObject *args, PyObject *kwds);
            static PyObject *t_LnsCoefficients_getLns(t_LnsCoefficients *self, PyObject *args);
            static PyObject *t_LnsCoefficients_getdLnsdGamma(t_LnsCoefficients *self, PyObject *args);

            static PyMethodDef t_LnsCoefficients__methods_[] = {
              DECLARE_METHOD(t_LnsCoefficients, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LnsCoefficients, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LnsCoefficients, getLns, METH_VARARGS),
              DECLARE_METHOD(t_LnsCoefficients, getdLnsdGamma, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LnsCoefficients)[] = {
              { Py_tp_methods, t_LnsCoefficients__methods_ },
              { Py_tp_init, (void *) t_LnsCoefficients_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LnsCoefficients)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LnsCoefficients, t_LnsCoefficients, LnsCoefficients);

            void t_LnsCoefficients::install(PyObject *module)
            {
              installType(&PY_TYPE(LnsCoefficients), &PY_TYPE_DEF(LnsCoefficients), module, "LnsCoefficients", 0);
            }

            void t_LnsCoefficients::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LnsCoefficients), "class_", make_descriptor(LnsCoefficients::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LnsCoefficients), "wrapfn_", make_descriptor(t_LnsCoefficients::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LnsCoefficients), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LnsCoefficients_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LnsCoefficients::initializeClass, 1)))
                return NULL;
              return t_LnsCoefficients::wrap_Object(LnsCoefficients(((t_LnsCoefficients *) arg)->object.this$));
            }
            static PyObject *t_LnsCoefficients_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LnsCoefficients::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_LnsCoefficients_init_(t_LnsCoefficients *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              jint a1;
              JArray< JArray< jdouble > > a2((jobject) NULL);
              ::java::util::SortedMap a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              LnsCoefficients object((jobject) NULL);

              if (!parseArgs(args, "II[[DKD", ::java::util::SortedMap::initializeClass, &a0, &a1, &a2, &a3, &p3, ::java::util::t_SortedMap::parameters_, &a4))
              {
                INT_CALL(object = LnsCoefficients(a0, a1, a2, a3, a4));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_LnsCoefficients_getLns(t_LnsCoefficients *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getLns(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getLns", args);
              return NULL;
            }

            static PyObject *t_LnsCoefficients_getdLnsdGamma(t_LnsCoefficients *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble result;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdLnsdGamma(a0, a1));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdLnsdGamma", args);
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
#include "org/orekit/estimation/leastsquares/DSSTBatchLSModel.h"
#include "java/util/List.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        ::java::lang::Class *DSSTBatchLSModel::class$ = NULL;
        jmethodID *DSSTBatchLSModel::mids$ = NULL;
        bool DSSTBatchLSModel::live$ = false;

        jclass DSSTBatchLSModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/leastsquares/DSSTBatchLSModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_873dd08fbb4d7de8] = env->getMethodID(cls, "<init>", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_configureHarvester_f80d2a02173b5959] = env->getMethodID(cls, "configureHarvester", "(Lorg/orekit/propagation/Propagator;)Lorg/orekit/propagation/MatricesHarvester;");
            mids$[mid_configureOrbits_9e53ad80ae898100] = env->getMethodID(cls, "configureOrbits", "(Lorg/orekit/propagation/MatricesHarvester;Lorg/orekit/propagation/Propagator;)Lorg/orekit/orbits/Orbit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DSSTBatchLSModel::DSSTBatchLSModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3, const ::org::orekit::propagation::PropagationType & a4) : ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(env->newObject(initializeClass, &mids$, mid_init$_873dd08fbb4d7de8, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}
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
        static PyObject *t_DSSTBatchLSModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DSSTBatchLSModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DSSTBatchLSModel_init_(t_DSSTBatchLSModel *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_DSSTBatchLSModel__methods_[] = {
          DECLARE_METHOD(t_DSSTBatchLSModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSSTBatchLSModel, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DSSTBatchLSModel)[] = {
          { Py_tp_methods, t_DSSTBatchLSModel__methods_ },
          { Py_tp_init, (void *) t_DSSTBatchLSModel_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DSSTBatchLSModel)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::leastsquares::AbstractBatchLSModel),
          NULL
        };

        DEFINE_TYPE(DSSTBatchLSModel, t_DSSTBatchLSModel, DSSTBatchLSModel);

        void t_DSSTBatchLSModel::install(PyObject *module)
        {
          installType(&PY_TYPE(DSSTBatchLSModel), &PY_TYPE_DEF(DSSTBatchLSModel), module, "DSSTBatchLSModel", 0);
        }

        void t_DSSTBatchLSModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTBatchLSModel), "class_", make_descriptor(DSSTBatchLSModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTBatchLSModel), "wrapfn_", make_descriptor(t_DSSTBatchLSModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTBatchLSModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DSSTBatchLSModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DSSTBatchLSModel::initializeClass, 1)))
            return NULL;
          return t_DSSTBatchLSModel::wrap_Object(DSSTBatchLSModel(((t_DSSTBatchLSModel *) arg)->object.this$));
        }
        static PyObject *t_DSSTBatchLSModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DSSTBatchLSModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DSSTBatchLSModel_init_(t_DSSTBatchLSModel *self, PyObject *args, PyObject *kwds)
        {
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          ::org::orekit::propagation::PropagationType a4((jobject) NULL);
          PyTypeObject **p4;
          DSSTBatchLSModel object((jobject) NULL);

          if (!parseArgs(args, "[kKkkK", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3, &a4, &p4, ::org::orekit::propagation::t_PropagationType::parameters_))
          {
            INT_CALL(object = DSSTBatchLSModel(a0, a1, a2, a3, a4));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sp3/SP3Header.h"
#include "java/util/List.h"
#include "org/orekit/gnss/TimeSystem.h"
#include "org/orekit/files/sp3/SP3OrbitType.h"
#include "org/orekit/files/sp3/DataUsed.h"
#include "org/orekit/files/sp3/SP3FileType.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3Header::class$ = NULL;
        jmethodID *SP3Header::mids$ = NULL;
        bool SP3Header::live$ = false;
        ::java::lang::String *SP3Header::SP3_FRAME_CENTER_STRING = NULL;

        jclass SP3Header::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3Header");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addComment_e939c6558ae8d313] = env->getMethodID(cls, "addComment", "(Ljava/lang/String;)V");
            mids$[mid_addSatId_e939c6558ae8d313] = env->getMethodID(cls, "addSatId", "(Ljava/lang/String;)V");
            mids$[mid_getAccuracy_531dcf669f2059aa] = env->getMethodID(cls, "getAccuracy", "(Ljava/lang/String;)D");
            mids$[mid_getAgency_0090f7797e403f43] = env->getMethodID(cls, "getAgency", "()Ljava/lang/String;");
            mids$[mid_getClockBase_456d9a2f64d6b28d] = env->getMethodID(cls, "getClockBase", "()D");
            mids$[mid_getComments_a6156df500549a58] = env->getMethodID(cls, "getComments", "()Ljava/util/List;");
            mids$[mid_getCoordinateSystem_0090f7797e403f43] = env->getMethodID(cls, "getCoordinateSystem", "()Ljava/lang/String;");
            mids$[mid_getDataUsed_a6156df500549a58] = env->getMethodID(cls, "getDataUsed", "()Ljava/util/List;");
            mids$[mid_getDayFraction_456d9a2f64d6b28d] = env->getMethodID(cls, "getDayFraction", "()D");
            mids$[mid_getEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getEpochInterval_456d9a2f64d6b28d] = env->getMethodID(cls, "getEpochInterval", "()D");
            mids$[mid_getFilter_237181d932324188] = env->getMethodID(cls, "getFilter", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
            mids$[mid_getGpsWeek_f2f64475e4580546] = env->getMethodID(cls, "getGpsWeek", "()I");
            mids$[mid_getModifiedJulianDay_f2f64475e4580546] = env->getMethodID(cls, "getModifiedJulianDay", "()I");
            mids$[mid_getNumberOfEpochs_f2f64475e4580546] = env->getMethodID(cls, "getNumberOfEpochs", "()I");
            mids$[mid_getOrbitType_081c0433fb9a4be2] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/files/sp3/SP3OrbitType;");
            mids$[mid_getOrbitTypeKey_0090f7797e403f43] = env->getMethodID(cls, "getOrbitTypeKey", "()Ljava/lang/String;");
            mids$[mid_getPosVelBase_456d9a2f64d6b28d] = env->getMethodID(cls, "getPosVelBase", "()D");
            mids$[mid_getSatIds_a6156df500549a58] = env->getMethodID(cls, "getSatIds", "()Ljava/util/List;");
            mids$[mid_getSecondsOfWeek_456d9a2f64d6b28d] = env->getMethodID(cls, "getSecondsOfWeek", "()D");
            mids$[mid_getTimeSystem_b58d3545739694ee] = env->getMethodID(cls, "getTimeSystem", "()Lorg/orekit/gnss/TimeSystem;");
            mids$[mid_getType_67cd54c93a5dcb88] = env->getMethodID(cls, "getType", "()Lorg/orekit/files/sp3/SP3FileType;");
            mids$[mid_getVersion_29e026b9d068f1c7] = env->getMethodID(cls, "getVersion", "()C");
            mids$[mid_setAccuracy_987a5fb872043b12] = env->getMethodID(cls, "setAccuracy", "(ID)V");
            mids$[mid_setAgency_e939c6558ae8d313] = env->getMethodID(cls, "setAgency", "(Ljava/lang/String;)V");
            mids$[mid_setClockBase_77e0f9a1f260e2e5] = env->getMethodID(cls, "setClockBase", "(D)V");
            mids$[mid_setCoordinateSystem_e939c6558ae8d313] = env->getMethodID(cls, "setCoordinateSystem", "(Ljava/lang/String;)V");
            mids$[mid_setDataUsed_65de9727799c5641] = env->getMethodID(cls, "setDataUsed", "(Ljava/util/List;)V");
            mids$[mid_setDayFraction_77e0f9a1f260e2e5] = env->getMethodID(cls, "setDayFraction", "(D)V");
            mids$[mid_setEpoch_e82d68cd9f886886] = env->getMethodID(cls, "setEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_setEpochInterval_77e0f9a1f260e2e5] = env->getMethodID(cls, "setEpochInterval", "(D)V");
            mids$[mid_setFilter_8aadfa247de709c5] = env->getMethodID(cls, "setFilter", "(Lorg/orekit/utils/CartesianDerivativesFilter;)V");
            mids$[mid_setGpsWeek_0a2a1ac2721c0336] = env->getMethodID(cls, "setGpsWeek", "(I)V");
            mids$[mid_setModifiedJulianDay_0a2a1ac2721c0336] = env->getMethodID(cls, "setModifiedJulianDay", "(I)V");
            mids$[mid_setNumberOfEpochs_0a2a1ac2721c0336] = env->getMethodID(cls, "setNumberOfEpochs", "(I)V");
            mids$[mid_setOrbitTypeKey_e939c6558ae8d313] = env->getMethodID(cls, "setOrbitTypeKey", "(Ljava/lang/String;)V");
            mids$[mid_setPosVelBase_77e0f9a1f260e2e5] = env->getMethodID(cls, "setPosVelBase", "(D)V");
            mids$[mid_setSecondsOfWeek_77e0f9a1f260e2e5] = env->getMethodID(cls, "setSecondsOfWeek", "(D)V");
            mids$[mid_setTimeSystem_4733fc8266dc541c] = env->getMethodID(cls, "setTimeSystem", "(Lorg/orekit/gnss/TimeSystem;)V");
            mids$[mid_setType_f761af605d43268b] = env->getMethodID(cls, "setType", "(Lorg/orekit/files/sp3/SP3FileType;)V");
            mids$[mid_setVersion_be0046d7f7239695] = env->getMethodID(cls, "setVersion", "(C)V");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            SP3_FRAME_CENTER_STRING = new ::java::lang::String(env->getStaticObjectField(cls, "SP3_FRAME_CENTER_STRING", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SP3Header::SP3Header() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void SP3Header::addComment(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addComment_e939c6558ae8d313], a0.this$);
        }

        void SP3Header::addSatId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addSatId_e939c6558ae8d313], a0.this$);
        }

        jdouble SP3Header::getAccuracy(const ::java::lang::String & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAccuracy_531dcf669f2059aa], a0.this$);
        }

        ::java::lang::String SP3Header::getAgency() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAgency_0090f7797e403f43]));
        }

        jdouble SP3Header::getClockBase() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getClockBase_456d9a2f64d6b28d]);
        }

        ::java::util::List SP3Header::getComments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComments_a6156df500549a58]));
        }

        ::java::lang::String SP3Header::getCoordinateSystem() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCoordinateSystem_0090f7797e403f43]));
        }

        ::java::util::List SP3Header::getDataUsed() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDataUsed_a6156df500549a58]));
        }

        jdouble SP3Header::getDayFraction() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDayFraction_456d9a2f64d6b28d]);
        }

        ::org::orekit::time::AbsoluteDate SP3Header::getEpoch() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_aaa854c403487cf3]));
        }

        jdouble SP3Header::getEpochInterval() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getEpochInterval_456d9a2f64d6b28d]);
        }

        ::org::orekit::utils::CartesianDerivativesFilter SP3Header::getFilter() const
        {
          return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getFilter_237181d932324188]));
        }

        jint SP3Header::getGpsWeek() const
        {
          return env->callIntMethod(this$, mids$[mid_getGpsWeek_f2f64475e4580546]);
        }

        jint SP3Header::getModifiedJulianDay() const
        {
          return env->callIntMethod(this$, mids$[mid_getModifiedJulianDay_f2f64475e4580546]);
        }

        jint SP3Header::getNumberOfEpochs() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberOfEpochs_f2f64475e4580546]);
        }

        ::org::orekit::files::sp3::SP3OrbitType SP3Header::getOrbitType() const
        {
          return ::org::orekit::files::sp3::SP3OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_081c0433fb9a4be2]));
        }

        ::java::lang::String SP3Header::getOrbitTypeKey() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOrbitTypeKey_0090f7797e403f43]));
        }

        jdouble SP3Header::getPosVelBase() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPosVelBase_456d9a2f64d6b28d]);
        }

        ::java::util::List SP3Header::getSatIds() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSatIds_a6156df500549a58]));
        }

        jdouble SP3Header::getSecondsOfWeek() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSecondsOfWeek_456d9a2f64d6b28d]);
        }

        ::org::orekit::gnss::TimeSystem SP3Header::getTimeSystem() const
        {
          return ::org::orekit::gnss::TimeSystem(env->callObjectMethod(this$, mids$[mid_getTimeSystem_b58d3545739694ee]));
        }

        ::org::orekit::files::sp3::SP3FileType SP3Header::getType() const
        {
          return ::org::orekit::files::sp3::SP3FileType(env->callObjectMethod(this$, mids$[mid_getType_67cd54c93a5dcb88]));
        }

        jchar SP3Header::getVersion() const
        {
          return env->callCharMethod(this$, mids$[mid_getVersion_29e026b9d068f1c7]);
        }

        void SP3Header::setAccuracy(jint a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_setAccuracy_987a5fb872043b12], a0, a1);
        }

        void SP3Header::setAgency(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAgency_e939c6558ae8d313], a0.this$);
        }

        void SP3Header::setClockBase(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setClockBase_77e0f9a1f260e2e5], a0);
        }

        void SP3Header::setCoordinateSystem(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setCoordinateSystem_e939c6558ae8d313], a0.this$);
        }

        void SP3Header::setDataUsed(const ::java::util::List & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDataUsed_65de9727799c5641], a0.this$);
        }

        void SP3Header::setDayFraction(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDayFraction_77e0f9a1f260e2e5], a0);
        }

        void SP3Header::setEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEpoch_e82d68cd9f886886], a0.this$);
        }

        void SP3Header::setEpochInterval(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEpochInterval_77e0f9a1f260e2e5], a0);
        }

        void SP3Header::setFilter(const ::org::orekit::utils::CartesianDerivativesFilter & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setFilter_8aadfa247de709c5], a0.this$);
        }

        void SP3Header::setGpsWeek(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setGpsWeek_0a2a1ac2721c0336], a0);
        }

        void SP3Header::setModifiedJulianDay(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setModifiedJulianDay_0a2a1ac2721c0336], a0);
        }

        void SP3Header::setNumberOfEpochs(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setNumberOfEpochs_0a2a1ac2721c0336], a0);
        }

        void SP3Header::setOrbitTypeKey(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setOrbitTypeKey_e939c6558ae8d313], a0.this$);
        }

        void SP3Header::setPosVelBase(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPosVelBase_77e0f9a1f260e2e5], a0);
        }

        void SP3Header::setSecondsOfWeek(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSecondsOfWeek_77e0f9a1f260e2e5], a0);
        }

        void SP3Header::setTimeSystem(const ::org::orekit::gnss::TimeSystem & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTimeSystem_4733fc8266dc541c], a0.this$);
        }

        void SP3Header::setType(const ::org::orekit::files::sp3::SP3FileType & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setType_f761af605d43268b], a0.this$);
        }

        void SP3Header::setVersion(jchar a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setVersion_be0046d7f7239695], a0);
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
        static PyObject *t_SP3Header_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3Header_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SP3Header_init_(t_SP3Header *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SP3Header_addComment(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_addSatId(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_getAccuracy(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_getAgency(t_SP3Header *self);
        static PyObject *t_SP3Header_getClockBase(t_SP3Header *self);
        static PyObject *t_SP3Header_getComments(t_SP3Header *self);
        static PyObject *t_SP3Header_getCoordinateSystem(t_SP3Header *self);
        static PyObject *t_SP3Header_getDataUsed(t_SP3Header *self);
        static PyObject *t_SP3Header_getDayFraction(t_SP3Header *self);
        static PyObject *t_SP3Header_getEpoch(t_SP3Header *self);
        static PyObject *t_SP3Header_getEpochInterval(t_SP3Header *self);
        static PyObject *t_SP3Header_getFilter(t_SP3Header *self);
        static PyObject *t_SP3Header_getGpsWeek(t_SP3Header *self);
        static PyObject *t_SP3Header_getModifiedJulianDay(t_SP3Header *self);
        static PyObject *t_SP3Header_getNumberOfEpochs(t_SP3Header *self);
        static PyObject *t_SP3Header_getOrbitType(t_SP3Header *self);
        static PyObject *t_SP3Header_getOrbitTypeKey(t_SP3Header *self);
        static PyObject *t_SP3Header_getPosVelBase(t_SP3Header *self);
        static PyObject *t_SP3Header_getSatIds(t_SP3Header *self);
        static PyObject *t_SP3Header_getSecondsOfWeek(t_SP3Header *self);
        static PyObject *t_SP3Header_getTimeSystem(t_SP3Header *self);
        static PyObject *t_SP3Header_getType(t_SP3Header *self);
        static PyObject *t_SP3Header_getVersion(t_SP3Header *self);
        static PyObject *t_SP3Header_setAccuracy(t_SP3Header *self, PyObject *args);
        static PyObject *t_SP3Header_setAgency(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setClockBase(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setCoordinateSystem(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setDataUsed(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setDayFraction(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setEpoch(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setEpochInterval(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setFilter(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setGpsWeek(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setModifiedJulianDay(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setNumberOfEpochs(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setOrbitTypeKey(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setPosVelBase(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setSecondsOfWeek(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setTimeSystem(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setType(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setVersion(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_get__agency(t_SP3Header *self, void *data);
        static int t_SP3Header_set__agency(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__clockBase(t_SP3Header *self, void *data);
        static int t_SP3Header_set__clockBase(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__comments(t_SP3Header *self, void *data);
        static PyObject *t_SP3Header_get__coordinateSystem(t_SP3Header *self, void *data);
        static int t_SP3Header_set__coordinateSystem(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__dataUsed(t_SP3Header *self, void *data);
        static int t_SP3Header_set__dataUsed(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__dayFraction(t_SP3Header *self, void *data);
        static int t_SP3Header_set__dayFraction(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__epoch(t_SP3Header *self, void *data);
        static int t_SP3Header_set__epoch(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__epochInterval(t_SP3Header *self, void *data);
        static int t_SP3Header_set__epochInterval(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__filter(t_SP3Header *self, void *data);
        static int t_SP3Header_set__filter(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__gpsWeek(t_SP3Header *self, void *data);
        static int t_SP3Header_set__gpsWeek(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__modifiedJulianDay(t_SP3Header *self, void *data);
        static int t_SP3Header_set__modifiedJulianDay(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__numberOfEpochs(t_SP3Header *self, void *data);
        static int t_SP3Header_set__numberOfEpochs(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__orbitType(t_SP3Header *self, void *data);
        static PyObject *t_SP3Header_get__orbitTypeKey(t_SP3Header *self, void *data);
        static int t_SP3Header_set__orbitTypeKey(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__posVelBase(t_SP3Header *self, void *data);
        static int t_SP3Header_set__posVelBase(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__satIds(t_SP3Header *self, void *data);
        static PyObject *t_SP3Header_get__secondsOfWeek(t_SP3Header *self, void *data);
        static int t_SP3Header_set__secondsOfWeek(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__timeSystem(t_SP3Header *self, void *data);
        static int t_SP3Header_set__timeSystem(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__type(t_SP3Header *self, void *data);
        static int t_SP3Header_set__type(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__version(t_SP3Header *self, void *data);
        static int t_SP3Header_set__version(t_SP3Header *self, PyObject *arg, void *data);
        static PyGetSetDef t_SP3Header__fields_[] = {
          DECLARE_GETSET_FIELD(t_SP3Header, agency),
          DECLARE_GETSET_FIELD(t_SP3Header, clockBase),
          DECLARE_GET_FIELD(t_SP3Header, comments),
          DECLARE_GETSET_FIELD(t_SP3Header, coordinateSystem),
          DECLARE_GETSET_FIELD(t_SP3Header, dataUsed),
          DECLARE_GETSET_FIELD(t_SP3Header, dayFraction),
          DECLARE_GETSET_FIELD(t_SP3Header, epoch),
          DECLARE_GETSET_FIELD(t_SP3Header, epochInterval),
          DECLARE_GETSET_FIELD(t_SP3Header, filter),
          DECLARE_GETSET_FIELD(t_SP3Header, gpsWeek),
          DECLARE_GETSET_FIELD(t_SP3Header, modifiedJulianDay),
          DECLARE_GETSET_FIELD(t_SP3Header, numberOfEpochs),
          DECLARE_GET_FIELD(t_SP3Header, orbitType),
          DECLARE_GETSET_FIELD(t_SP3Header, orbitTypeKey),
          DECLARE_GETSET_FIELD(t_SP3Header, posVelBase),
          DECLARE_GET_FIELD(t_SP3Header, satIds),
          DECLARE_GETSET_FIELD(t_SP3Header, secondsOfWeek),
          DECLARE_GETSET_FIELD(t_SP3Header, timeSystem),
          DECLARE_GETSET_FIELD(t_SP3Header, type),
          DECLARE_GETSET_FIELD(t_SP3Header, version),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SP3Header__methods_[] = {
          DECLARE_METHOD(t_SP3Header, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Header, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Header, addComment, METH_O),
          DECLARE_METHOD(t_SP3Header, addSatId, METH_O),
          DECLARE_METHOD(t_SP3Header, getAccuracy, METH_O),
          DECLARE_METHOD(t_SP3Header, getAgency, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getClockBase, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getComments, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getCoordinateSystem, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getDataUsed, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getDayFraction, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getEpoch, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getEpochInterval, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getFilter, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getGpsWeek, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getModifiedJulianDay, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getNumberOfEpochs, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getOrbitType, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getOrbitTypeKey, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getPosVelBase, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getSatIds, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getSecondsOfWeek, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getTimeSystem, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getType, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getVersion, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, setAccuracy, METH_VARARGS),
          DECLARE_METHOD(t_SP3Header, setAgency, METH_O),
          DECLARE_METHOD(t_SP3Header, setClockBase, METH_O),
          DECLARE_METHOD(t_SP3Header, setCoordinateSystem, METH_O),
          DECLARE_METHOD(t_SP3Header, setDataUsed, METH_O),
          DECLARE_METHOD(t_SP3Header, setDayFraction, METH_O),
          DECLARE_METHOD(t_SP3Header, setEpoch, METH_O),
          DECLARE_METHOD(t_SP3Header, setEpochInterval, METH_O),
          DECLARE_METHOD(t_SP3Header, setFilter, METH_O),
          DECLARE_METHOD(t_SP3Header, setGpsWeek, METH_O),
          DECLARE_METHOD(t_SP3Header, setModifiedJulianDay, METH_O),
          DECLARE_METHOD(t_SP3Header, setNumberOfEpochs, METH_O),
          DECLARE_METHOD(t_SP3Header, setOrbitTypeKey, METH_O),
          DECLARE_METHOD(t_SP3Header, setPosVelBase, METH_O),
          DECLARE_METHOD(t_SP3Header, setSecondsOfWeek, METH_O),
          DECLARE_METHOD(t_SP3Header, setTimeSystem, METH_O),
          DECLARE_METHOD(t_SP3Header, setType, METH_O),
          DECLARE_METHOD(t_SP3Header, setVersion, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3Header)[] = {
          { Py_tp_methods, t_SP3Header__methods_ },
          { Py_tp_init, (void *) t_SP3Header_init_ },
          { Py_tp_getset, t_SP3Header__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3Header)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SP3Header, t_SP3Header, SP3Header);

        void t_SP3Header::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3Header), &PY_TYPE_DEF(SP3Header), module, "SP3Header", 0);
        }

        void t_SP3Header::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Header), "class_", make_descriptor(SP3Header::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Header), "wrapfn_", make_descriptor(t_SP3Header::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Header), "boxfn_", make_descriptor(boxObject));
          env->getClass(SP3Header::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Header), "SP3_FRAME_CENTER_STRING", make_descriptor(j2p(*SP3Header::SP3_FRAME_CENTER_STRING)));
        }

        static PyObject *t_SP3Header_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3Header::initializeClass, 1)))
            return NULL;
          return t_SP3Header::wrap_Object(SP3Header(((t_SP3Header *) arg)->object.this$));
        }
        static PyObject *t_SP3Header_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3Header::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SP3Header_init_(t_SP3Header *self, PyObject *args, PyObject *kwds)
        {
          SP3Header object((jobject) NULL);

          INT_CALL(object = SP3Header());
          self->object = object;

          return 0;
        }

        static PyObject *t_SP3Header_addComment(t_SP3Header *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.addComment(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addComment", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_addSatId(t_SP3Header *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.addSatId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addSatId", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_getAccuracy(t_SP3Header *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.getAccuracy(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getAccuracy", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_getAgency(t_SP3Header *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getAgency());
          return j2p(result);
        }

        static PyObject *t_SP3Header_getClockBase(t_SP3Header *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getClockBase());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Header_getComments(t_SP3Header *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getComments());
          return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
        }

        static PyObject *t_SP3Header_getCoordinateSystem(t_SP3Header *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoordinateSystem());
          return j2p(result);
        }

        static PyObject *t_SP3Header_getDataUsed(t_SP3Header *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getDataUsed());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::sp3::PY_TYPE(DataUsed));
        }

        static PyObject *t_SP3Header_getDayFraction(t_SP3Header *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDayFraction());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Header_getEpoch(t_SP3Header *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEpoch());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SP3Header_getEpochInterval(t_SP3Header *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getEpochInterval());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Header_getFilter(t_SP3Header *self)
        {
          ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
          OBJ_CALL(result = self->object.getFilter());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
        }

        static PyObject *t_SP3Header_getGpsWeek(t_SP3Header *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getGpsWeek());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SP3Header_getModifiedJulianDay(t_SP3Header *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getModifiedJulianDay());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SP3Header_getNumberOfEpochs(t_SP3Header *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberOfEpochs());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SP3Header_getOrbitType(t_SP3Header *self)
        {
          ::org::orekit::files::sp3::SP3OrbitType result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitType());
          return ::org::orekit::files::sp3::t_SP3OrbitType::wrap_Object(result);
        }

        static PyObject *t_SP3Header_getOrbitTypeKey(t_SP3Header *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitTypeKey());
          return j2p(result);
        }

        static PyObject *t_SP3Header_getPosVelBase(t_SP3Header *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPosVelBase());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Header_getSatIds(t_SP3Header *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatIds());
          return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
        }

        static PyObject *t_SP3Header_getSecondsOfWeek(t_SP3Header *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSecondsOfWeek());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Header_getTimeSystem(t_SP3Header *self)
        {
          ::org::orekit::gnss::TimeSystem result((jobject) NULL);
          OBJ_CALL(result = self->object.getTimeSystem());
          return ::org::orekit::gnss::t_TimeSystem::wrap_Object(result);
        }

        static PyObject *t_SP3Header_getType(t_SP3Header *self)
        {
          ::org::orekit::files::sp3::SP3FileType result((jobject) NULL);
          OBJ_CALL(result = self->object.getType());
          return ::org::orekit::files::sp3::t_SP3FileType::wrap_Object(result);
        }

        static PyObject *t_SP3Header_getVersion(t_SP3Header *self)
        {
          jchar result;
          OBJ_CALL(result = self->object.getVersion());
          return c2p(result);
        }

        static PyObject *t_SP3Header_setAccuracy(t_SP3Header *self, PyObject *args)
        {
          jint a0;
          jdouble a1;

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            OBJ_CALL(self->object.setAccuracy(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setAccuracy", args);
          return NULL;
        }

        static PyObject *t_SP3Header_setAgency(t_SP3Header *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setAgency(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setAgency", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setClockBase(t_SP3Header *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setClockBase(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setClockBase", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setCoordinateSystem(t_SP3Header *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setCoordinateSystem(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setCoordinateSystem", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setDataUsed(t_SP3Header *self, PyObject *arg)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(self->object.setDataUsed(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDataUsed", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setDayFraction(t_SP3Header *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setDayFraction(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDayFraction", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setEpoch(t_SP3Header *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setEpoch(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEpoch", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setEpochInterval(t_SP3Header *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setEpochInterval(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEpochInterval", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setFilter(t_SP3Header *self, PyObject *arg)
        {
          ::org::orekit::utils::CartesianDerivativesFilter a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &p0, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
          {
            OBJ_CALL(self->object.setFilter(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setFilter", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setGpsWeek(t_SP3Header *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setGpsWeek(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setGpsWeek", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setModifiedJulianDay(t_SP3Header *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setModifiedJulianDay(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setModifiedJulianDay", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setNumberOfEpochs(t_SP3Header *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setNumberOfEpochs(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setNumberOfEpochs", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setOrbitTypeKey(t_SP3Header *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setOrbitTypeKey(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setOrbitTypeKey", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setPosVelBase(t_SP3Header *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setPosVelBase(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPosVelBase", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setSecondsOfWeek(t_SP3Header *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setSecondsOfWeek(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSecondsOfWeek", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setTimeSystem(t_SP3Header *self, PyObject *arg)
        {
          ::org::orekit::gnss::TimeSystem a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::gnss::TimeSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_TimeSystem::parameters_))
          {
            OBJ_CALL(self->object.setTimeSystem(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTimeSystem", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setType(t_SP3Header *self, PyObject *arg)
        {
          ::org::orekit::files::sp3::SP3FileType a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::files::sp3::SP3FileType::initializeClass, &a0, &p0, ::org::orekit::files::sp3::t_SP3FileType::parameters_))
          {
            OBJ_CALL(self->object.setType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setType", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setVersion(t_SP3Header *self, PyObject *arg)
        {
          jchar a0;

          if (!parseArg(arg, "C", &a0))
          {
            OBJ_CALL(self->object.setVersion(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setVersion", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_get__agency(t_SP3Header *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getAgency());
          return j2p(value);
        }
        static int t_SP3Header_set__agency(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setAgency(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "agency", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__clockBase(t_SP3Header *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getClockBase());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SP3Header_set__clockBase(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setClockBase(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "clockBase", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__comments(t_SP3Header *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getComments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_SP3Header_get__coordinateSystem(t_SP3Header *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoordinateSystem());
          return j2p(value);
        }
        static int t_SP3Header_set__coordinateSystem(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setCoordinateSystem(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "coordinateSystem", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__dataUsed(t_SP3Header *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getDataUsed());
          return ::java::util::t_List::wrap_Object(value);
        }
        static int t_SP3Header_set__dataUsed(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            ::java::util::List value((jobject) NULL);
            if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
            {
              INT_CALL(self->object.setDataUsed(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "dataUsed", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__dayFraction(t_SP3Header *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDayFraction());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SP3Header_set__dayFraction(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setDayFraction(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "dayFraction", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__epoch(t_SP3Header *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEpoch());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
        static int t_SP3Header_set__epoch(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              INT_CALL(self->object.setEpoch(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "epoch", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__epochInterval(t_SP3Header *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getEpochInterval());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SP3Header_set__epochInterval(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setEpochInterval(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "epochInterval", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__filter(t_SP3Header *self, void *data)
        {
          ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
          OBJ_CALL(value = self->object.getFilter());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
        }
        static int t_SP3Header_set__filter(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &value))
            {
              INT_CALL(self->object.setFilter(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "filter", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__gpsWeek(t_SP3Header *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getGpsWeek());
          return PyLong_FromLong((long) value);
        }
        static int t_SP3Header_set__gpsWeek(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setGpsWeek(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "gpsWeek", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__modifiedJulianDay(t_SP3Header *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getModifiedJulianDay());
          return PyLong_FromLong((long) value);
        }
        static int t_SP3Header_set__modifiedJulianDay(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setModifiedJulianDay(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "modifiedJulianDay", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__numberOfEpochs(t_SP3Header *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberOfEpochs());
          return PyLong_FromLong((long) value);
        }
        static int t_SP3Header_set__numberOfEpochs(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setNumberOfEpochs(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "numberOfEpochs", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__orbitType(t_SP3Header *self, void *data)
        {
          ::org::orekit::files::sp3::SP3OrbitType value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitType());
          return ::org::orekit::files::sp3::t_SP3OrbitType::wrap_Object(value);
        }

        static PyObject *t_SP3Header_get__orbitTypeKey(t_SP3Header *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitTypeKey());
          return j2p(value);
        }
        static int t_SP3Header_set__orbitTypeKey(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setOrbitTypeKey(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "orbitTypeKey", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__posVelBase(t_SP3Header *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPosVelBase());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SP3Header_set__posVelBase(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setPosVelBase(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "posVelBase", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__satIds(t_SP3Header *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatIds());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_SP3Header_get__secondsOfWeek(t_SP3Header *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSecondsOfWeek());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SP3Header_set__secondsOfWeek(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setSecondsOfWeek(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "secondsOfWeek", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__timeSystem(t_SP3Header *self, void *data)
        {
          ::org::orekit::gnss::TimeSystem value((jobject) NULL);
          OBJ_CALL(value = self->object.getTimeSystem());
          return ::org::orekit::gnss::t_TimeSystem::wrap_Object(value);
        }
        static int t_SP3Header_set__timeSystem(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::gnss::TimeSystem value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::gnss::TimeSystem::initializeClass, &value))
            {
              INT_CALL(self->object.setTimeSystem(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "timeSystem", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__type(t_SP3Header *self, void *data)
        {
          ::org::orekit::files::sp3::SP3FileType value((jobject) NULL);
          OBJ_CALL(value = self->object.getType());
          return ::org::orekit::files::sp3::t_SP3FileType::wrap_Object(value);
        }
        static int t_SP3Header_set__type(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::files::sp3::SP3FileType value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::files::sp3::SP3FileType::initializeClass, &value))
            {
              INT_CALL(self->object.setType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "type", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__version(t_SP3Header *self, void *data)
        {
          jchar value;
          OBJ_CALL(value = self->object.getVersion());
          return c2p(value);
        }
        static int t_SP3Header_set__version(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            jchar value;
            if (!parseArg(arg, "C", &value))
            {
              INT_CALL(self->object.setVersion(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "version", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/UTCTAIHistoryFilesLoader.h"
#include "java/util/List.h"
#include "org/orekit/time/OffsetModel.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/Class.h"
#include "org/orekit/time/UTCTAIOffsetsLoader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *UTCTAIHistoryFilesLoader::class$ = NULL;
      jmethodID *UTCTAIHistoryFilesLoader::mids$ = NULL;
      bool UTCTAIHistoryFilesLoader::live$ = false;

      jclass UTCTAIHistoryFilesLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/UTCTAIHistoryFilesLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_92cedf0c8913c23b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataProvidersManager;)V");
          mids$[mid_loadOffsets_a6156df500549a58] = env->getMethodID(cls, "loadOffsets", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UTCTAIHistoryFilesLoader::UTCTAIHistoryFilesLoader() : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      UTCTAIHistoryFilesLoader::UTCTAIHistoryFilesLoader(const ::org::orekit::data::DataProvidersManager & a0) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_92cedf0c8913c23b, a0.this$)) {}

      ::java::util::List UTCTAIHistoryFilesLoader::loadOffsets() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_loadOffsets_a6156df500549a58]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/time/UTCTAIHistoryFilesLoader$Parser.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_UTCTAIHistoryFilesLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCTAIHistoryFilesLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_UTCTAIHistoryFilesLoader_init_(t_UTCTAIHistoryFilesLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_UTCTAIHistoryFilesLoader_loadOffsets(t_UTCTAIHistoryFilesLoader *self);

      static PyMethodDef t_UTCTAIHistoryFilesLoader__methods_[] = {
        DECLARE_METHOD(t_UTCTAIHistoryFilesLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIHistoryFilesLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIHistoryFilesLoader, loadOffsets, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UTCTAIHistoryFilesLoader)[] = {
        { Py_tp_methods, t_UTCTAIHistoryFilesLoader__methods_ },
        { Py_tp_init, (void *) t_UTCTAIHistoryFilesLoader_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UTCTAIHistoryFilesLoader)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
        NULL
      };

      DEFINE_TYPE(UTCTAIHistoryFilesLoader, t_UTCTAIHistoryFilesLoader, UTCTAIHistoryFilesLoader);

      void t_UTCTAIHistoryFilesLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(UTCTAIHistoryFilesLoader), &PY_TYPE_DEF(UTCTAIHistoryFilesLoader), module, "UTCTAIHistoryFilesLoader", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIHistoryFilesLoader), "Parser", make_descriptor(&PY_TYPE_DEF(UTCTAIHistoryFilesLoader$Parser)));
      }

      void t_UTCTAIHistoryFilesLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIHistoryFilesLoader), "class_", make_descriptor(UTCTAIHistoryFilesLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIHistoryFilesLoader), "wrapfn_", make_descriptor(t_UTCTAIHistoryFilesLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIHistoryFilesLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UTCTAIHistoryFilesLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UTCTAIHistoryFilesLoader::initializeClass, 1)))
          return NULL;
        return t_UTCTAIHistoryFilesLoader::wrap_Object(UTCTAIHistoryFilesLoader(((t_UTCTAIHistoryFilesLoader *) arg)->object.this$));
      }
      static PyObject *t_UTCTAIHistoryFilesLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UTCTAIHistoryFilesLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_UTCTAIHistoryFilesLoader_init_(t_UTCTAIHistoryFilesLoader *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            UTCTAIHistoryFilesLoader object((jobject) NULL);

            INT_CALL(object = UTCTAIHistoryFilesLoader());
            self->object = object;
            break;
          }
         case 1:
          {
            ::org::orekit::data::DataProvidersManager a0((jobject) NULL);
            UTCTAIHistoryFilesLoader object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::data::DataProvidersManager::initializeClass, &a0))
            {
              INT_CALL(object = UTCTAIHistoryFilesLoader(a0));
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

      static PyObject *t_UTCTAIHistoryFilesLoader_loadOffsets(t_UTCTAIHistoryFilesLoader *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.loadOffsets());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(OffsetModel));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTTesseral.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/util/List.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTTesseral::class$ = NULL;
            jmethodID *DSSTTesseral::mids$ = NULL;
            bool DSSTTesseral::live$ = false;
            ::java::lang::String *DSSTTesseral::CM_COEFFICIENTS = NULL;
            ::java::lang::String *DSSTTesseral::SHORT_PERIOD_PREFIX = NULL;
            ::java::lang::String *DSSTTesseral::SM_COEFFICIENTS = NULL;

            jclass DSSTTesseral::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTTesseral");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_b7cabcdf5a365203] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
                mids$[mid_init$_f1427e30b4ce583f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;IIIIIII)V");
                mids$[mid_getMeanElementRate_3b4b4fe187ad73ff] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)[D");
                mids$[mid_getMeanElementRate_5265bce9e9da3506] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_74f227e9e3e51225] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/propagation/PropagationType;[D)Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_46b1d1d9daf3396d] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/propagation/PropagationType;[Lorg/hipparchus/CalculusFieldElement;)Ljava/util/List;");
                mids$[mid_registerAttitudeProvider_8109c1a27d4471d3] = env->getMethodID(cls, "registerAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
                mids$[mid_updateShortPeriodTerms_6839803ab3ef216d] = env->getMethodID(cls, "updateShortPeriodTerms", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/orekit/propagation/FieldSpacecraftState;)V");
                mids$[mid_updateShortPeriodTerms_8df221610d0cb785] = env->getMethodID(cls, "updateShortPeriodTerms", "([D[Lorg/orekit/propagation/SpacecraftState;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CM_COEFFICIENTS = new ::java::lang::String(env->getStaticObjectField(cls, "CM_COEFFICIENTS", "Ljava/lang/String;"));
                SHORT_PERIOD_PREFIX = new ::java::lang::String(env->getStaticObjectField(cls, "SHORT_PERIOD_PREFIX", "Ljava/lang/String;"));
                SM_COEFFICIENTS = new ::java::lang::String(env->getStaticObjectField(cls, "SM_COEFFICIENTS", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTTesseral::DSSTTesseral(const ::org::orekit::frames::Frame & a0, jdouble a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b7cabcdf5a365203, a0.this$, a1, a2.this$)) {}

            DSSTTesseral::DSSTTesseral(const ::org::orekit::frames::Frame & a0, jdouble a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2, jint a3, jint a4, jint a5, jint a6, jint a7, jint a8, jint a9) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f1427e30b4ce583f, a0.this$, a1, a2.this$, a3, a4, a5, a6, a7, a8, a9)) {}

            JArray< jdouble > DSSTTesseral::getMeanElementRate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a1, const JArray< jdouble > & a2) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_3b4b4fe187ad73ff], a0.this$, a1.this$, a2.this$));
            }

            JArray< ::org::hipparchus::CalculusFieldElement > DSSTTesseral::getMeanElementRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_5265bce9e9da3506], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTTesseral::getParametersDrivers() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
            }

            ::java::util::List DSSTTesseral::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< jdouble > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_74f227e9e3e51225], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTTesseral::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_46b1d1d9daf3396d], a0.this$, a1.this$, a2.this$));
            }

            void DSSTTesseral::registerAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_registerAttitudeProvider_8109c1a27d4471d3], a0.this$);
            }

            void DSSTTesseral::updateShortPeriodTerms(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::orekit::propagation::FieldSpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_6839803ab3ef216d], a0.this$, a1.this$);
            }

            void DSSTTesseral::updateShortPeriodTerms(const JArray< jdouble > & a0, const JArray< ::org::orekit::propagation::SpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_8df221610d0cb785], a0.this$, a1.this$);
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
            static PyObject *t_DSSTTesseral_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTTesseral_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTTesseral_init_(t_DSSTTesseral *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTTesseral_getMeanElementRate(t_DSSTTesseral *self, PyObject *args);
            static PyObject *t_DSSTTesseral_getParametersDrivers(t_DSSTTesseral *self);
            static PyObject *t_DSSTTesseral_initializeShortPeriodTerms(t_DSSTTesseral *self, PyObject *args);
            static PyObject *t_DSSTTesseral_registerAttitudeProvider(t_DSSTTesseral *self, PyObject *arg);
            static PyObject *t_DSSTTesseral_updateShortPeriodTerms(t_DSSTTesseral *self, PyObject *args);
            static PyObject *t_DSSTTesseral_get__parametersDrivers(t_DSSTTesseral *self, void *data);
            static PyGetSetDef t_DSSTTesseral__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTTesseral, parametersDrivers),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTTesseral__methods_[] = {
              DECLARE_METHOD(t_DSSTTesseral, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTTesseral, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTTesseral, getMeanElementRate, METH_VARARGS),
              DECLARE_METHOD(t_DSSTTesseral, getParametersDrivers, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseral, initializeShortPeriodTerms, METH_VARARGS),
              DECLARE_METHOD(t_DSSTTesseral, registerAttitudeProvider, METH_O),
              DECLARE_METHOD(t_DSSTTesseral, updateShortPeriodTerms, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTTesseral)[] = {
              { Py_tp_methods, t_DSSTTesseral__methods_ },
              { Py_tp_init, (void *) t_DSSTTesseral_init_ },
              { Py_tp_getset, t_DSSTTesseral__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTTesseral)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(DSSTTesseral, t_DSSTTesseral, DSSTTesseral);

            void t_DSSTTesseral::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTTesseral), &PY_TYPE_DEF(DSSTTesseral), module, "DSSTTesseral", 0);
            }

            void t_DSSTTesseral::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTTesseral), "class_", make_descriptor(DSSTTesseral::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTTesseral), "wrapfn_", make_descriptor(t_DSSTTesseral::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTTesseral), "boxfn_", make_descriptor(boxObject));
              env->getClass(DSSTTesseral::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTTesseral), "CM_COEFFICIENTS", make_descriptor(j2p(*DSSTTesseral::CM_COEFFICIENTS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTTesseral), "SHORT_PERIOD_PREFIX", make_descriptor(j2p(*DSSTTesseral::SHORT_PERIOD_PREFIX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTTesseral), "SM_COEFFICIENTS", make_descriptor(j2p(*DSSTTesseral::SM_COEFFICIENTS)));
            }

            static PyObject *t_DSSTTesseral_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTTesseral::initializeClass, 1)))
                return NULL;
              return t_DSSTTesseral::wrap_Object(DSSTTesseral(((t_DSSTTesseral *) arg)->object.this$));
            }
            static PyObject *t_DSSTTesseral_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTTesseral::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTTesseral_init_(t_DSSTTesseral *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::frames::Frame a0((jobject) NULL);
                  jdouble a1;
                  ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a2((jobject) NULL);
                  DSSTTesseral object((jobject) NULL);

                  if (!parseArgs(args, "kDk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2))
                  {
                    INT_CALL(object = DSSTTesseral(a0, a1, a2));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 10:
                {
                  ::org::orekit::frames::Frame a0((jobject) NULL);
                  jdouble a1;
                  ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a2((jobject) NULL);
                  jint a3;
                  jint a4;
                  jint a5;
                  jint a6;
                  jint a7;
                  jint a8;
                  jint a9;
                  DSSTTesseral object((jobject) NULL);

                  if (!parseArgs(args, "kDkIIIIIII", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
                  {
                    INT_CALL(object = DSSTTesseral(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
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

            static PyObject *t_DSSTTesseral_getMeanElementRate(t_DSSTTesseral *self, PyObject *args)
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

            static PyObject *t_DSSTTesseral_getParametersDrivers(t_DSSTTesseral *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            static PyObject *t_DSSTTesseral_initializeShortPeriodTerms(t_DSSTTesseral *self, PyObject *args)
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

            static PyObject *t_DSSTTesseral_registerAttitudeProvider(t_DSSTTesseral *self, PyObject *arg)
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

            static PyObject *t_DSSTTesseral_updateShortPeriodTerms(t_DSSTTesseral *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  JArray< jdouble > a0((jobject) NULL);
                  JArray< ::org::orekit::propagation::SpacecraftState > a1((jobject) NULL);

                  if (!parseArgs(args, "[D[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
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
              }

              PyErr_SetArgsError((PyObject *) self, "updateShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_DSSTTesseral_get__parametersDrivers(t_DSSTTesseral *self, void *data)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/IterativeLinearSolver.h"
#include "org/hipparchus/util/IterationManager.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealLinearOperator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *IterativeLinearSolver::class$ = NULL;
      jmethodID *IterativeLinearSolver::mids$ = NULL;
      bool IterativeLinearSolver::live$ = false;

      jclass IterativeLinearSolver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/IterativeLinearSolver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_96d20dd3d7b62ec2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/util/IterationManager;)V");
          mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_getIterationManager_78ef6bf5b7f544c8] = env->getMethodID(cls, "getIterationManager", "()Lorg/hipparchus/util/IterationManager;");
          mids$[mid_solve_2d301f1e49d9c390] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_52b5cc8d60bfdcba] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solveInPlace_52b5cc8d60bfdcba] = env->getMethodID(cls, "solveInPlace", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_checkParameters_741ee6016394481d] = env->getStaticMethodID(cls, "checkParameters", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      IterativeLinearSolver::IterativeLinearSolver(const ::org::hipparchus::util::IterationManager & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_96d20dd3d7b62ec2, a0.this$)) {}

      IterativeLinearSolver::IterativeLinearSolver(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

      ::org::hipparchus::util::IterationManager IterativeLinearSolver::getIterationManager() const
      {
        return ::org::hipparchus::util::IterationManager(env->callObjectMethod(this$, mids$[mid_getIterationManager_78ef6bf5b7f544c8]));
      }

      ::org::hipparchus::linear::RealVector IterativeLinearSolver::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_2d301f1e49d9c390], a0.this$, a1.this$));
      }

      ::org::hipparchus::linear::RealVector IterativeLinearSolver::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_52b5cc8d60bfdcba], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::linear::RealVector IterativeLinearSolver::solveInPlace(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solveInPlace_52b5cc8d60bfdcba], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_IterativeLinearSolver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IterativeLinearSolver_instance_(PyTypeObject *type, PyObject *arg);
      static int t_IterativeLinearSolver_init_(t_IterativeLinearSolver *self, PyObject *args, PyObject *kwds);
      static PyObject *t_IterativeLinearSolver_getIterationManager(t_IterativeLinearSolver *self);
      static PyObject *t_IterativeLinearSolver_solve(t_IterativeLinearSolver *self, PyObject *args);
      static PyObject *t_IterativeLinearSolver_solveInPlace(t_IterativeLinearSolver *self, PyObject *args);
      static PyObject *t_IterativeLinearSolver_get__iterationManager(t_IterativeLinearSolver *self, void *data);
      static PyGetSetDef t_IterativeLinearSolver__fields_[] = {
        DECLARE_GET_FIELD(t_IterativeLinearSolver, iterationManager),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_IterativeLinearSolver__methods_[] = {
        DECLARE_METHOD(t_IterativeLinearSolver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterativeLinearSolver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterativeLinearSolver, getIterationManager, METH_NOARGS),
        DECLARE_METHOD(t_IterativeLinearSolver, solve, METH_VARARGS),
        DECLARE_METHOD(t_IterativeLinearSolver, solveInPlace, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IterativeLinearSolver)[] = {
        { Py_tp_methods, t_IterativeLinearSolver__methods_ },
        { Py_tp_init, (void *) t_IterativeLinearSolver_init_ },
        { Py_tp_getset, t_IterativeLinearSolver__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IterativeLinearSolver)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(IterativeLinearSolver, t_IterativeLinearSolver, IterativeLinearSolver);

      void t_IterativeLinearSolver::install(PyObject *module)
      {
        installType(&PY_TYPE(IterativeLinearSolver), &PY_TYPE_DEF(IterativeLinearSolver), module, "IterativeLinearSolver", 0);
      }

      void t_IterativeLinearSolver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLinearSolver), "class_", make_descriptor(IterativeLinearSolver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLinearSolver), "wrapfn_", make_descriptor(t_IterativeLinearSolver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLinearSolver), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IterativeLinearSolver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IterativeLinearSolver::initializeClass, 1)))
          return NULL;
        return t_IterativeLinearSolver::wrap_Object(IterativeLinearSolver(((t_IterativeLinearSolver *) arg)->object.this$));
      }
      static PyObject *t_IterativeLinearSolver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IterativeLinearSolver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_IterativeLinearSolver_init_(t_IterativeLinearSolver *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::util::IterationManager a0((jobject) NULL);
            IterativeLinearSolver object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::util::IterationManager::initializeClass, &a0))
            {
              INT_CALL(object = IterativeLinearSolver(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            IterativeLinearSolver object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = IterativeLinearSolver(a0));
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

      static PyObject *t_IterativeLinearSolver_getIterationManager(t_IterativeLinearSolver *self)
      {
        ::org::hipparchus::util::IterationManager result((jobject) NULL);
        OBJ_CALL(result = self->object.getIterationManager());
        return ::org::hipparchus::util::t_IterationManager::wrap_Object(result);
      }

      static PyObject *t_IterativeLinearSolver_solve(t_IterativeLinearSolver *self, PyObject *args)
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
        }

        PyErr_SetArgsError((PyObject *) self, "solve", args);
        return NULL;
      }

      static PyObject *t_IterativeLinearSolver_solveInPlace(t_IterativeLinearSolver *self, PyObject *args)
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

        PyErr_SetArgsError((PyObject *) self, "solveInPlace", args);
        return NULL;
      }

      static PyObject *t_IterativeLinearSolver_get__iterationManager(t_IterativeLinearSolver *self, void *data)
      {
        ::org::hipparchus::util::IterationManager value((jobject) NULL);
        OBJ_CALL(value = self->object.getIterationManager());
        return ::org::hipparchus::util::t_IterationManager::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/PythonAbstractDetector.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/AdaptableInterval.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PythonAbstractDetector::class$ = NULL;
        jmethodID *PythonAbstractDetector::mids$ = NULL;
        bool PythonAbstractDetector::live$ = false;

        jclass PythonAbstractDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PythonAbstractDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d11bc165798938dc] = env->getMethodID(cls, "<init>", "(DDILorg/orekit/propagation/events/handlers/EventHandler;)V");
            mids$[mid_create_ccd729cfbbaff306] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/AbstractDetector;");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_g_66a2f071e6ed0c06] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractDetector::PythonAbstractDetector(jdouble a0, jdouble a1, jint a2, const ::org::orekit::propagation::events::handlers::EventHandler & a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_d11bc165798938dc, a0, a1, a2, a3.this$)) {}

        void PythonAbstractDetector::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonAbstractDetector::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonAbstractDetector::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
        static PyObject *t_PythonAbstractDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractDetector_of_(t_PythonAbstractDetector *self, PyObject *args);
        static int t_PythonAbstractDetector_init_(t_PythonAbstractDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractDetector_finalize(t_PythonAbstractDetector *self);
        static PyObject *t_PythonAbstractDetector_pythonExtension(t_PythonAbstractDetector *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractDetector_create0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jint a2, jobject a3);
        static jdouble JNICALL t_PythonAbstractDetector_g1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonAbstractDetector_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractDetector_get__self(t_PythonAbstractDetector *self, void *data);
        static PyObject *t_PythonAbstractDetector_get__parameters_(t_PythonAbstractDetector *self, void *data);
        static PyGetSetDef t_PythonAbstractDetector__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractDetector, self),
          DECLARE_GET_FIELD(t_PythonAbstractDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractDetector__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractDetector, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractDetector, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractDetector)[] = {
          { Py_tp_methods, t_PythonAbstractDetector__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractDetector_init_ },
          { Py_tp_getset, t_PythonAbstractDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(PythonAbstractDetector, t_PythonAbstractDetector, PythonAbstractDetector);
        PyObject *t_PythonAbstractDetector::wrap_Object(const PythonAbstractDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonAbstractDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonAbstractDetector *self = (t_PythonAbstractDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonAbstractDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonAbstractDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonAbstractDetector *self = (t_PythonAbstractDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonAbstractDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractDetector), &PY_TYPE_DEF(PythonAbstractDetector), module, "PythonAbstractDetector", 1);
        }

        void t_PythonAbstractDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractDetector), "class_", make_descriptor(PythonAbstractDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractDetector), "wrapfn_", make_descriptor(t_PythonAbstractDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractDetector), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractDetector::initializeClass);
          JNINativeMethod methods[] = {
            { "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/AbstractDetector;", (void *) t_PythonAbstractDetector_create0 },
            { "g", "(Lorg/orekit/propagation/SpacecraftState;)D", (void *) t_PythonAbstractDetector_g1 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractDetector_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonAbstractDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractDetector::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractDetector::wrap_Object(PythonAbstractDetector(((t_PythonAbstractDetector *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonAbstractDetector_of_(t_PythonAbstractDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonAbstractDetector_init_(t_PythonAbstractDetector *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jint a2;
          ::org::orekit::propagation::events::handlers::EventHandler a3((jobject) NULL);
          PythonAbstractDetector object((jobject) NULL);

          if (!parseArgs(args, "DDIk", ::org::orekit::propagation::events::handlers::EventHandler::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = PythonAbstractDetector(a0, a1, a2, a3));
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

        static PyObject *t_PythonAbstractDetector_finalize(t_PythonAbstractDetector *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractDetector_pythonExtension(t_PythonAbstractDetector *self, PyObject *args)
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

        static jobject JNICALL t_PythonAbstractDetector_create0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jint a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDetector::mids$[PythonAbstractDetector::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::events::AbstractDetector value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::events::t_AdaptableInterval::wrap_Object(::org::orekit::propagation::events::AdaptableInterval(a0));
          PyObject *o3 = ::org::orekit::propagation::events::handlers::t_EventHandler::wrap_Object(::org::orekit::propagation::events::handlers::EventHandler(a3));
          PyObject *result = PyObject_CallMethod(obj, "create", "OdiO", o0, (double) a1, (int) a2, o3);
          Py_DECREF(o0);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::events::AbstractDetector::initializeClass, &value))
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

        static jdouble JNICALL t_PythonAbstractDetector_g1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDetector::mids$[PythonAbstractDetector::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "g", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("g", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static void JNICALL t_PythonAbstractDetector_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDetector::mids$[PythonAbstractDetector::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractDetector::mids$[PythonAbstractDetector::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractDetector_get__self(t_PythonAbstractDetector *self, void *data)
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
        static PyObject *t_PythonAbstractDetector_get__parameters_(t_PythonAbstractDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Class.h"
#include "java/lang/InstantiationException.h"
#include "java/io/Serializable.h"
#include "java/io/InputStream.h"
#include "java/lang/IllegalAccessException.h"
#include "java/lang/ClassNotFoundException.h"
#include "java/lang/Module.h"
#include "java/lang/Class.h"
#include "java/lang/SecurityException.h"
#include "java/lang/Package.h"
#include "java/lang/String.h"
#include "java/net/URL.h"
#include "java/lang/ClassLoader.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Class::class$ = NULL;
    jmethodID *Class::mids$ = NULL;
    bool Class::live$ = false;

    jclass Class::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Class");

        mids$ = new jmethodID[max_mid];
        mids$[mid_asSubclass_1220bdeb5d2287e4] = env->getMethodID(cls, "asSubclass", "(Ljava/lang/Class;)Ljava/lang/Class;");
        mids$[mid_cast_ed50a8b49b8274dc] = env->getMethodID(cls, "cast", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_desiredAssertionStatus_e470b6d9e0d979db] = env->getMethodID(cls, "desiredAssertionStatus", "()Z");
        mids$[mid_forName_8cb3351ef7334fdc] = env->getStaticMethodID(cls, "forName", "(Ljava/lang/String;)Ljava/lang/Class;");
        mids$[mid_forName_8bff53c7fd504b40] = env->getStaticMethodID(cls, "forName", "(Ljava/lang/Module;Ljava/lang/String;)Ljava/lang/Class;");
        mids$[mid_forName_0d73bfe55a170e60] = env->getStaticMethodID(cls, "forName", "(Ljava/lang/String;ZLjava/lang/ClassLoader;)Ljava/lang/Class;");
        mids$[mid_getCanonicalName_0090f7797e403f43] = env->getMethodID(cls, "getCanonicalName", "()Ljava/lang/String;");
        mids$[mid_getClassLoader_9f59dd0605cf9d96] = env->getMethodID(cls, "getClassLoader", "()Ljava/lang/ClassLoader;");
        mids$[mid_getClasses_9fe3f453b1078a3c] = env->getMethodID(cls, "getClasses", "()[Ljava/lang/Class;");
        mids$[mid_getComponentType_8f66acc08d2a174c] = env->getMethodID(cls, "getComponentType", "()Ljava/lang/Class;");
        mids$[mid_getDeclaredClasses_9fe3f453b1078a3c] = env->getMethodID(cls, "getDeclaredClasses", "()[Ljava/lang/Class;");
        mids$[mid_getDeclaringClass_8f66acc08d2a174c] = env->getMethodID(cls, "getDeclaringClass", "()Ljava/lang/Class;");
        mids$[mid_getEnclosingClass_8f66acc08d2a174c] = env->getMethodID(cls, "getEnclosingClass", "()Ljava/lang/Class;");
        mids$[mid_getEnumConstants_e81d7907eea7e008] = env->getMethodID(cls, "getEnumConstants", "()[Ljava/lang/Object;");
        mids$[mid_getInterfaces_9fe3f453b1078a3c] = env->getMethodID(cls, "getInterfaces", "()[Ljava/lang/Class;");
        mids$[mid_getModifiers_f2f64475e4580546] = env->getMethodID(cls, "getModifiers", "()I");
        mids$[mid_getModule_c94272da82329f0f] = env->getMethodID(cls, "getModule", "()Ljava/lang/Module;");
        mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
        mids$[mid_getNestHost_8f66acc08d2a174c] = env->getMethodID(cls, "getNestHost", "()Ljava/lang/Class;");
        mids$[mid_getNestMembers_9fe3f453b1078a3c] = env->getMethodID(cls, "getNestMembers", "()[Ljava/lang/Class;");
        mids$[mid_getPackage_e1deee00c8c99811] = env->getMethodID(cls, "getPackage", "()Ljava/lang/Package;");
        mids$[mid_getPackageName_0090f7797e403f43] = env->getMethodID(cls, "getPackageName", "()Ljava/lang/String;");
        mids$[mid_getResource_4b560f872f3037b3] = env->getMethodID(cls, "getResource", "(Ljava/lang/String;)Ljava/net/URL;");
        mids$[mid_getResourceAsStream_e48d48998e90da79] = env->getMethodID(cls, "getResourceAsStream", "(Ljava/lang/String;)Ljava/io/InputStream;");
        mids$[mid_getSigners_e81d7907eea7e008] = env->getMethodID(cls, "getSigners", "()[Ljava/lang/Object;");
        mids$[mid_getSimpleName_0090f7797e403f43] = env->getMethodID(cls, "getSimpleName", "()Ljava/lang/String;");
        mids$[mid_getSuperclass_8f66acc08d2a174c] = env->getMethodID(cls, "getSuperclass", "()Ljava/lang/Class;");
        mids$[mid_getTypeName_0090f7797e403f43] = env->getMethodID(cls, "getTypeName", "()Ljava/lang/String;");
        mids$[mid_isAnnotation_e470b6d9e0d979db] = env->getMethodID(cls, "isAnnotation", "()Z");
        mids$[mid_isAnonymousClass_e470b6d9e0d979db] = env->getMethodID(cls, "isAnonymousClass", "()Z");
        mids$[mid_isArray_e470b6d9e0d979db] = env->getMethodID(cls, "isArray", "()Z");
        mids$[mid_isAssignableFrom_ddf0fdab108a07e2] = env->getMethodID(cls, "isAssignableFrom", "(Ljava/lang/Class;)Z");
        mids$[mid_isEnum_e470b6d9e0d979db] = env->getMethodID(cls, "isEnum", "()Z");
        mids$[mid_isInstance_229c87223f486349] = env->getMethodID(cls, "isInstance", "(Ljava/lang/Object;)Z");
        mids$[mid_isInterface_e470b6d9e0d979db] = env->getMethodID(cls, "isInterface", "()Z");
        mids$[mid_isLocalClass_e470b6d9e0d979db] = env->getMethodID(cls, "isLocalClass", "()Z");
        mids$[mid_isMemberClass_e470b6d9e0d979db] = env->getMethodID(cls, "isMemberClass", "()Z");
        mids$[mid_isNestmateOf_ddf0fdab108a07e2] = env->getMethodID(cls, "isNestmateOf", "(Ljava/lang/Class;)Z");
        mids$[mid_isPrimitive_e470b6d9e0d979db] = env->getMethodID(cls, "isPrimitive", "()Z");
        mids$[mid_isSynthetic_e470b6d9e0d979db] = env->getMethodID(cls, "isSynthetic", "()Z");
        mids$[mid_newInstance_dfd7647d9110ac9f] = env->getMethodID(cls, "newInstance", "()Ljava/lang/Object;");
        mids$[mid_toGenericString_0090f7797e403f43] = env->getMethodID(cls, "toGenericString", "()Ljava/lang/String;");
        mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Class Class::asSubclass(const Class & a0) const
    {
      return Class(env->callObjectMethod(this$, mids$[mid_asSubclass_1220bdeb5d2287e4], a0.this$));
    }

    ::java::lang::Object Class::cast(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_cast_ed50a8b49b8274dc], a0.this$));
    }

    jboolean Class::desiredAssertionStatus() const
    {
      return env->callBooleanMethod(this$, mids$[mid_desiredAssertionStatus_e470b6d9e0d979db]);
    }

    Class Class::forName(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Class(env->callStaticObjectMethod(cls, mids$[mid_forName_8cb3351ef7334fdc], a0.this$));
    }

    Class Class::forName(const ::java::lang::Module & a0, const ::java::lang::String & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Class(env->callStaticObjectMethod(cls, mids$[mid_forName_8bff53c7fd504b40], a0.this$, a1.this$));
    }

    Class Class::forName(const ::java::lang::String & a0, jboolean a1, const ::java::lang::ClassLoader & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return Class(env->callStaticObjectMethod(cls, mids$[mid_forName_0d73bfe55a170e60], a0.this$, a1, a2.this$));
    }

    ::java::lang::String Class::getCanonicalName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCanonicalName_0090f7797e403f43]));
    }

    ::java::lang::ClassLoader Class::getClassLoader() const
    {
      return ::java::lang::ClassLoader(env->callObjectMethod(this$, mids$[mid_getClassLoader_9f59dd0605cf9d96]));
    }

    JArray< Class > Class::getClasses() const
    {
      return JArray< Class >(env->callObjectMethod(this$, mids$[mid_getClasses_9fe3f453b1078a3c]));
    }

    Class Class::getComponentType() const
    {
      return Class(env->callObjectMethod(this$, mids$[mid_getComponentType_8f66acc08d2a174c]));
    }

    JArray< Class > Class::getDeclaredClasses() const
    {
      return JArray< Class >(env->callObjectMethod(this$, mids$[mid_getDeclaredClasses_9fe3f453b1078a3c]));
    }

    Class Class::getDeclaringClass() const
    {
      return Class(env->callObjectMethod(this$, mids$[mid_getDeclaringClass_8f66acc08d2a174c]));
    }

    Class Class::getEnclosingClass() const
    {
      return Class(env->callObjectMethod(this$, mids$[mid_getEnclosingClass_8f66acc08d2a174c]));
    }

    JArray< ::java::lang::Object > Class::getEnumConstants() const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getEnumConstants_e81d7907eea7e008]));
    }

    JArray< Class > Class::getInterfaces() const
    {
      return JArray< Class >(env->callObjectMethod(this$, mids$[mid_getInterfaces_9fe3f453b1078a3c]));
    }

    jint Class::getModifiers() const
    {
      return env->callIntMethod(this$, mids$[mid_getModifiers_f2f64475e4580546]);
    }

    ::java::lang::Module Class::getModule() const
    {
      return ::java::lang::Module(env->callObjectMethod(this$, mids$[mid_getModule_c94272da82329f0f]));
    }

    ::java::lang::String Class::getName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
    }

    Class Class::getNestHost() const
    {
      return Class(env->callObjectMethod(this$, mids$[mid_getNestHost_8f66acc08d2a174c]));
    }

    JArray< Class > Class::getNestMembers() const
    {
      return JArray< Class >(env->callObjectMethod(this$, mids$[mid_getNestMembers_9fe3f453b1078a3c]));
    }

    ::java::lang::Package Class::getPackage() const
    {
      return ::java::lang::Package(env->callObjectMethod(this$, mids$[mid_getPackage_e1deee00c8c99811]));
    }

    ::java::lang::String Class::getPackageName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPackageName_0090f7797e403f43]));
    }

    ::java::net::URL Class::getResource(const ::java::lang::String & a0) const
    {
      return ::java::net::URL(env->callObjectMethod(this$, mids$[mid_getResource_4b560f872f3037b3], a0.this$));
    }

    ::java::io::InputStream Class::getResourceAsStream(const ::java::lang::String & a0) const
    {
      return ::java::io::InputStream(env->callObjectMethod(this$, mids$[mid_getResourceAsStream_e48d48998e90da79], a0.this$));
    }

    JArray< ::java::lang::Object > Class::getSigners() const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getSigners_e81d7907eea7e008]));
    }

    ::java::lang::String Class::getSimpleName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSimpleName_0090f7797e403f43]));
    }

    Class Class::getSuperclass() const
    {
      return Class(env->callObjectMethod(this$, mids$[mid_getSuperclass_8f66acc08d2a174c]));
    }

    ::java::lang::String Class::getTypeName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTypeName_0090f7797e403f43]));
    }

    jboolean Class::isAnnotation() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isAnnotation_e470b6d9e0d979db]);
    }

    jboolean Class::isAnonymousClass() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isAnonymousClass_e470b6d9e0d979db]);
    }

    jboolean Class::isArray() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isArray_e470b6d9e0d979db]);
    }

    jboolean Class::isAssignableFrom(const Class & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isAssignableFrom_ddf0fdab108a07e2], a0.this$);
    }

    jboolean Class::isEnum() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEnum_e470b6d9e0d979db]);
    }

    jboolean Class::isInstance(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isInstance_229c87223f486349], a0.this$);
    }

    jboolean Class::isInterface() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isInterface_e470b6d9e0d979db]);
    }

    jboolean Class::isLocalClass() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isLocalClass_e470b6d9e0d979db]);
    }

    jboolean Class::isMemberClass() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isMemberClass_e470b6d9e0d979db]);
    }

    jboolean Class::isNestmateOf(const Class & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_isNestmateOf_ddf0fdab108a07e2], a0.this$);
    }

    jboolean Class::isPrimitive() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isPrimitive_e470b6d9e0d979db]);
    }

    jboolean Class::isSynthetic() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isSynthetic_e470b6d9e0d979db]);
    }

    ::java::lang::Object Class::newInstance() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_newInstance_dfd7647d9110ac9f]));
    }

    ::java::lang::String Class::toGenericString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toGenericString_0090f7797e403f43]));
    }

    ::java::lang::String Class::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Class_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Class_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Class_of_(t_Class *self, PyObject *args);
    static PyObject *t_Class_asSubclass(t_Class *self, PyObject *arg);
    static PyObject *t_Class_cast(t_Class *self, PyObject *arg);
    static PyObject *t_Class_desiredAssertionStatus(t_Class *self);
    static PyObject *t_Class_forName(PyTypeObject *type, PyObject *args);
    static PyObject *t_Class_getCanonicalName(t_Class *self);
    static PyObject *t_Class_getClassLoader(t_Class *self);
    static PyObject *t_Class_getClasses(t_Class *self);
    static PyObject *t_Class_getComponentType(t_Class *self);
    static PyObject *t_Class_getDeclaredClasses(t_Class *self);
    static PyObject *t_Class_getDeclaringClass(t_Class *self);
    static PyObject *t_Class_getEnclosingClass(t_Class *self);
    static PyObject *t_Class_getEnumConstants(t_Class *self);
    static PyObject *t_Class_getInterfaces(t_Class *self);
    static PyObject *t_Class_getModifiers(t_Class *self);
    static PyObject *t_Class_getModule(t_Class *self);
    static PyObject *t_Class_getName(t_Class *self);
    static PyObject *t_Class_getNestHost(t_Class *self);
    static PyObject *t_Class_getNestMembers(t_Class *self);
    static PyObject *t_Class_getPackage(t_Class *self);
    static PyObject *t_Class_getPackageName(t_Class *self);
    static PyObject *t_Class_getResource(t_Class *self, PyObject *arg);
    static PyObject *t_Class_getResourceAsStream(t_Class *self, PyObject *arg);
    static PyObject *t_Class_getSigners(t_Class *self);
    static PyObject *t_Class_getSimpleName(t_Class *self);
    static PyObject *t_Class_getSuperclass(t_Class *self);
    static PyObject *t_Class_getTypeName(t_Class *self);
    static PyObject *t_Class_isAnnotation(t_Class *self);
    static PyObject *t_Class_isAnonymousClass(t_Class *self);
    static PyObject *t_Class_isArray(t_Class *self);
    static PyObject *t_Class_isAssignableFrom(t_Class *self, PyObject *arg);
    static PyObject *t_Class_isEnum(t_Class *self);
    static PyObject *t_Class_isInstance(t_Class *self, PyObject *arg);
    static PyObject *t_Class_isInterface(t_Class *self);
    static PyObject *t_Class_isLocalClass(t_Class *self);
    static PyObject *t_Class_isMemberClass(t_Class *self);
    static PyObject *t_Class_isNestmateOf(t_Class *self, PyObject *arg);
    static PyObject *t_Class_isPrimitive(t_Class *self);
    static PyObject *t_Class_isSynthetic(t_Class *self);
    static PyObject *t_Class_newInstance(t_Class *self);
    static PyObject *t_Class_toGenericString(t_Class *self);
    static PyObject *t_Class_toString(t_Class *self, PyObject *args);
    static PyObject *t_Class_get__annotation(t_Class *self, void *data);
    static PyObject *t_Class_get__anonymousClass(t_Class *self, void *data);
    static PyObject *t_Class_get__array(t_Class *self, void *data);
    static PyObject *t_Class_get__canonicalName(t_Class *self, void *data);
    static PyObject *t_Class_get__classLoader(t_Class *self, void *data);
    static PyObject *t_Class_get__classes(t_Class *self, void *data);
    static PyObject *t_Class_get__componentType(t_Class *self, void *data);
    static PyObject *t_Class_get__declaredClasses(t_Class *self, void *data);
    static PyObject *t_Class_get__declaringClass(t_Class *self, void *data);
    static PyObject *t_Class_get__enclosingClass(t_Class *self, void *data);
    static PyObject *t_Class_get__enum(t_Class *self, void *data);
    static PyObject *t_Class_get__enumConstants(t_Class *self, void *data);
    static PyObject *t_Class_get__interface(t_Class *self, void *data);
    static PyObject *t_Class_get__interfaces(t_Class *self, void *data);
    static PyObject *t_Class_get__localClass(t_Class *self, void *data);
    static PyObject *t_Class_get__memberClass(t_Class *self, void *data);
    static PyObject *t_Class_get__modifiers(t_Class *self, void *data);
    static PyObject *t_Class_get__module(t_Class *self, void *data);
    static PyObject *t_Class_get__name(t_Class *self, void *data);
    static PyObject *t_Class_get__nestHost(t_Class *self, void *data);
    static PyObject *t_Class_get__nestMembers(t_Class *self, void *data);
    static PyObject *t_Class_get__package(t_Class *self, void *data);
    static PyObject *t_Class_get__packageName(t_Class *self, void *data);
    static PyObject *t_Class_get__primitive(t_Class *self, void *data);
    static PyObject *t_Class_get__signers(t_Class *self, void *data);
    static PyObject *t_Class_get__simpleName(t_Class *self, void *data);
    static PyObject *t_Class_get__superclass(t_Class *self, void *data);
    static PyObject *t_Class_get__synthetic(t_Class *self, void *data);
    static PyObject *t_Class_get__typeName(t_Class *self, void *data);
    static PyObject *t_Class_get__parameters_(t_Class *self, void *data);
    static PyGetSetDef t_Class__fields_[] = {
      DECLARE_GET_FIELD(t_Class, annotation),
      DECLARE_GET_FIELD(t_Class, anonymousClass),
      DECLARE_GET_FIELD(t_Class, array),
      DECLARE_GET_FIELD(t_Class, canonicalName),
      DECLARE_GET_FIELD(t_Class, classLoader),
      DECLARE_GET_FIELD(t_Class, classes),
      DECLARE_GET_FIELD(t_Class, componentType),
      DECLARE_GET_FIELD(t_Class, declaredClasses),
      DECLARE_GET_FIELD(t_Class, declaringClass),
      DECLARE_GET_FIELD(t_Class, enclosingClass),
      DECLARE_GET_FIELD(t_Class, enum),
      DECLARE_GET_FIELD(t_Class, enumConstants),
      DECLARE_GET_FIELD(t_Class, interface),
      DECLARE_GET_FIELD(t_Class, interfaces),
      DECLARE_GET_FIELD(t_Class, localClass),
      DECLARE_GET_FIELD(t_Class, memberClass),
      DECLARE_GET_FIELD(t_Class, modifiers),
      DECLARE_GET_FIELD(t_Class, module),
      DECLARE_GET_FIELD(t_Class, name),
      DECLARE_GET_FIELD(t_Class, nestHost),
      DECLARE_GET_FIELD(t_Class, nestMembers),
      DECLARE_GET_FIELD(t_Class, package),
      DECLARE_GET_FIELD(t_Class, packageName),
      DECLARE_GET_FIELD(t_Class, primitive),
      DECLARE_GET_FIELD(t_Class, signers),
      DECLARE_GET_FIELD(t_Class, simpleName),
      DECLARE_GET_FIELD(t_Class, superclass),
      DECLARE_GET_FIELD(t_Class, synthetic),
      DECLARE_GET_FIELD(t_Class, typeName),
      DECLARE_GET_FIELD(t_Class, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Class__methods_[] = {
      DECLARE_METHOD(t_Class, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Class, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Class, of_, METH_VARARGS),
      DECLARE_METHOD(t_Class, asSubclass, METH_O),
      DECLARE_METHOD(t_Class, cast, METH_O),
      DECLARE_METHOD(t_Class, desiredAssertionStatus, METH_NOARGS),
      DECLARE_METHOD(t_Class, forName, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Class, getCanonicalName, METH_NOARGS),
      DECLARE_METHOD(t_Class, getClassLoader, METH_NOARGS),
      DECLARE_METHOD(t_Class, getClasses, METH_NOARGS),
      DECLARE_METHOD(t_Class, getComponentType, METH_NOARGS),
      DECLARE_METHOD(t_Class, getDeclaredClasses, METH_NOARGS),
      DECLARE_METHOD(t_Class, getDeclaringClass, METH_NOARGS),
      DECLARE_METHOD(t_Class, getEnclosingClass, METH_NOARGS),
      DECLARE_METHOD(t_Class, getEnumConstants, METH_NOARGS),
      DECLARE_METHOD(t_Class, getInterfaces, METH_NOARGS),
      DECLARE_METHOD(t_Class, getModifiers, METH_NOARGS),
      DECLARE_METHOD(t_Class, getModule, METH_NOARGS),
      DECLARE_METHOD(t_Class, getName, METH_NOARGS),
      DECLARE_METHOD(t_Class, getNestHost, METH_NOARGS),
      DECLARE_METHOD(t_Class, getNestMembers, METH_NOARGS),
      DECLARE_METHOD(t_Class, getPackage, METH_NOARGS),
      DECLARE_METHOD(t_Class, getPackageName, METH_NOARGS),
      DECLARE_METHOD(t_Class, getResource, METH_O),
      DECLARE_METHOD(t_Class, getResourceAsStream, METH_O),
      DECLARE_METHOD(t_Class, getSigners, METH_NOARGS),
      DECLARE_METHOD(t_Class, getSimpleName, METH_NOARGS),
      DECLARE_METHOD(t_Class, getSuperclass, METH_NOARGS),
      DECLARE_METHOD(t_Class, getTypeName, METH_NOARGS),
      DECLARE_METHOD(t_Class, isAnnotation, METH_NOARGS),
      DECLARE_METHOD(t_Class, isAnonymousClass, METH_NOARGS),
      DECLARE_METHOD(t_Class, isArray, METH_NOARGS),
      DECLARE_METHOD(t_Class, isAssignableFrom, METH_O),
      DECLARE_METHOD(t_Class, isEnum, METH_NOARGS),
      DECLARE_METHOD(t_Class, isInstance, METH_O),
      DECLARE_METHOD(t_Class, isInterface, METH_NOARGS),
      DECLARE_METHOD(t_Class, isLocalClass, METH_NOARGS),
      DECLARE_METHOD(t_Class, isMemberClass, METH_NOARGS),
      DECLARE_METHOD(t_Class, isNestmateOf, METH_O),
      DECLARE_METHOD(t_Class, isPrimitive, METH_NOARGS),
      DECLARE_METHOD(t_Class, isSynthetic, METH_NOARGS),
      DECLARE_METHOD(t_Class, newInstance, METH_NOARGS),
      DECLARE_METHOD(t_Class, toGenericString, METH_NOARGS),
      DECLARE_METHOD(t_Class, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Class)[] = {
      { Py_tp_methods, t_Class__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Class__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Class)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Class, t_Class, Class);
    PyObject *t_Class::wrap_Object(const Class& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Class::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Class *self = (t_Class *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Class::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Class::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Class *self = (t_Class *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Class::install(PyObject *module)
    {
      installType(&PY_TYPE(Class), &PY_TYPE_DEF(Class), module, "Class", 0);
    }

    void t_Class::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Class), "class_", make_descriptor(Class::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Class), "wrapfn_", make_descriptor(t_Class::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Class), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Class_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Class::initializeClass, 1)))
        return NULL;
      return t_Class::wrap_Object(Class(((t_Class *) arg)->object.this$));
    }
    static PyObject *t_Class_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Class::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Class_of_(t_Class *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Class_asSubclass(t_Class *self, PyObject *arg)
    {
      Class a0((jobject) NULL);
      PyTypeObject **p0;
      Class result((jobject) NULL);

      if (!parseArg(arg, "K", Class::initializeClass, &a0, &p0, t_Class::parameters_))
      {
        OBJ_CALL(result = self->object.asSubclass(a0));
        return t_Class::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "asSubclass", arg);
      return NULL;
    }

    static PyObject *t_Class_cast(t_Class *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.cast(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "cast", arg);
      return NULL;
    }

    static PyObject *t_Class_desiredAssertionStatus(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.desiredAssertionStatus());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_forName(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Class result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Class::forName(a0));
            return t_Class::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Module a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          Class result((jobject) NULL);

          if (!parseArgs(args, "ks", ::java::lang::Module::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Class::forName(a0, a1));
            return t_Class::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::String a0((jobject) NULL);
          jboolean a1;
          ::java::lang::ClassLoader a2((jobject) NULL);
          Class result((jobject) NULL);

          if (!parseArgs(args, "sZk", ::java::lang::ClassLoader::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::Class::forName(a0, a1, a2));
            return t_Class::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "forName", args);
      return NULL;
    }

    static PyObject *t_Class_getCanonicalName(t_Class *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getCanonicalName());
      return j2p(result);
    }

    static PyObject *t_Class_getClassLoader(t_Class *self)
    {
      ::java::lang::ClassLoader result((jobject) NULL);
      OBJ_CALL(result = self->object.getClassLoader());
      return ::java::lang::t_ClassLoader::wrap_Object(result);
    }

    static PyObject *t_Class_getClasses(t_Class *self)
    {
      JArray< Class > result((jobject) NULL);
      OBJ_CALL(result = self->object.getClasses());
      return JArray<jobject>(result.this$).wrap(t_Class::wrap_jobject);
    }

    static PyObject *t_Class_getComponentType(t_Class *self)
    {
      Class result((jobject) NULL);
      OBJ_CALL(result = self->object.getComponentType());
      return t_Class::wrap_Object(result);
    }

    static PyObject *t_Class_getDeclaredClasses(t_Class *self)
    {
      JArray< Class > result((jobject) NULL);
      OBJ_CALL(result = self->object.getDeclaredClasses());
      return JArray<jobject>(result.this$).wrap(t_Class::wrap_jobject);
    }

    static PyObject *t_Class_getDeclaringClass(t_Class *self)
    {
      Class result((jobject) NULL);
      OBJ_CALL(result = self->object.getDeclaringClass());
      return t_Class::wrap_Object(result);
    }

    static PyObject *t_Class_getEnclosingClass(t_Class *self)
    {
      Class result((jobject) NULL);
      OBJ_CALL(result = self->object.getEnclosingClass());
      return t_Class::wrap_Object(result);
    }

    static PyObject *t_Class_getEnumConstants(t_Class *self)
    {
      JArray< ::java::lang::Object > result((jobject) NULL);
      OBJ_CALL(result = self->object.getEnumConstants());
      return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
    }

    static PyObject *t_Class_getInterfaces(t_Class *self)
    {
      JArray< Class > result((jobject) NULL);
      OBJ_CALL(result = self->object.getInterfaces());
      return JArray<jobject>(result.this$).wrap(t_Class::wrap_jobject);
    }

    static PyObject *t_Class_getModifiers(t_Class *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getModifiers());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Class_getModule(t_Class *self)
    {
      ::java::lang::Module result((jobject) NULL);
      OBJ_CALL(result = self->object.getModule());
      return ::java::lang::t_Module::wrap_Object(result);
    }

    static PyObject *t_Class_getName(t_Class *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getName());
      return j2p(result);
    }

    static PyObject *t_Class_getNestHost(t_Class *self)
    {
      Class result((jobject) NULL);
      OBJ_CALL(result = self->object.getNestHost());
      return t_Class::wrap_Object(result);
    }

    static PyObject *t_Class_getNestMembers(t_Class *self)
    {
      JArray< Class > result((jobject) NULL);
      OBJ_CALL(result = self->object.getNestMembers());
      return JArray<jobject>(result.this$).wrap(t_Class::wrap_jobject);
    }

    static PyObject *t_Class_getPackage(t_Class *self)
    {
      ::java::lang::Package result((jobject) NULL);
      OBJ_CALL(result = self->object.getPackage());
      return ::java::lang::t_Package::wrap_Object(result);
    }

    static PyObject *t_Class_getPackageName(t_Class *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getPackageName());
      return j2p(result);
    }

    static PyObject *t_Class_getResource(t_Class *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::net::URL result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.getResource(a0));
        return ::java::net::t_URL::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getResource", arg);
      return NULL;
    }

    static PyObject *t_Class_getResourceAsStream(t_Class *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::io::InputStream result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.getResourceAsStream(a0));
        return ::java::io::t_InputStream::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getResourceAsStream", arg);
      return NULL;
    }

    static PyObject *t_Class_getSigners(t_Class *self)
    {
      JArray< ::java::lang::Object > result((jobject) NULL);
      OBJ_CALL(result = self->object.getSigners());
      return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
    }

    static PyObject *t_Class_getSimpleName(t_Class *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getSimpleName());
      return j2p(result);
    }

    static PyObject *t_Class_getSuperclass(t_Class *self)
    {
      Class result((jobject) NULL);
      OBJ_CALL(result = self->object.getSuperclass());
      return t_Class::wrap_Object(result);
    }

    static PyObject *t_Class_getTypeName(t_Class *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getTypeName());
      return j2p(result);
    }

    static PyObject *t_Class_isAnnotation(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isAnnotation());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_isAnonymousClass(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isAnonymousClass());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_isArray(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isArray());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_isAssignableFrom(t_Class *self, PyObject *arg)
    {
      Class a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", Class::initializeClass, &a0, &p0, t_Class::parameters_))
      {
        OBJ_CALL(result = self->object.isAssignableFrom(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "isAssignableFrom", arg);
      return NULL;
    }

    static PyObject *t_Class_isEnum(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isEnum());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_isInstance(t_Class *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.isInstance(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "isInstance", arg);
      return NULL;
    }

    static PyObject *t_Class_isInterface(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isInterface());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_isLocalClass(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isLocalClass());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_isMemberClass(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isMemberClass());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_isNestmateOf(t_Class *self, PyObject *arg)
    {
      Class a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", Class::initializeClass, &a0, &p0, t_Class::parameters_))
      {
        OBJ_CALL(result = self->object.isNestmateOf(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "isNestmateOf", arg);
      return NULL;
    }

    static PyObject *t_Class_isPrimitive(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isPrimitive());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_isSynthetic(t_Class *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isSynthetic());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Class_newInstance(t_Class *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.newInstance());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Class_toGenericString(t_Class *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.toGenericString());
      return j2p(result);
    }

    static PyObject *t_Class_toString(t_Class *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Class), (PyObject *) self, "toString", args, 2);
    }
    static PyObject *t_Class_get__parameters_(t_Class *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_Class_get__annotation(t_Class *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isAnnotation());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Class_get__anonymousClass(t_Class *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isAnonymousClass());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Class_get__array(t_Class *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isArray());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Class_get__canonicalName(t_Class *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getCanonicalName());
      return j2p(value);
    }

    static PyObject *t_Class_get__classLoader(t_Class *self, void *data)
    {
      ::java::lang::ClassLoader value((jobject) NULL);
      OBJ_CALL(value = self->object.getClassLoader());
      return ::java::lang::t_ClassLoader::wrap_Object(value);
    }

    static PyObject *t_Class_get__classes(t_Class *self, void *data)
    {
      JArray< Class > value((jobject) NULL);
      OBJ_CALL(value = self->object.getClasses());
      return JArray<jobject>(value.this$).wrap(t_Class::wrap_jobject);
    }

    static PyObject *t_Class_get__componentType(t_Class *self, void *data)
    {
      Class value((jobject) NULL);
      OBJ_CALL(value = self->object.getComponentType());
      return t_Class::wrap_Object(value);
    }

    static PyObject *t_Class_get__declaredClasses(t_Class *self, void *data)
    {
      JArray< Class > value((jobject) NULL);
      OBJ_CALL(value = self->object.getDeclaredClasses());
      return JArray<jobject>(value.this$).wrap(t_Class::wrap_jobject);
    }

    static PyObject *t_Class_get__declaringClass(t_Class *self, void *data)
    {
      Class value((jobject) NULL);
      OBJ_CALL(value = self->object.getDeclaringClass());
      return t_Class::wrap_Object(value);
    }

    static PyObject *t_Class_get__enclosingClass(t_Class *self, void *data)
    {
      Class value((jobject) NULL);
      OBJ_CALL(value = self->object.getEnclosingClass());
      return t_Class::wrap_Object(value);
    }

    static PyObject *t_Class_get__enum(t_Class *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEnum());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Class_get__enumConstants(t_Class *self, void *data)
    {
      JArray< ::java::lang::Object > value((jobject) NULL);
      OBJ_CALL(value = self->object.getEnumConstants());
      return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
    }

    static PyObject *t_Class_get__interface(t_Class *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isInterface());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Class_get__interfaces(t_Class *self, void *data)
    {
      JArray< Class > value((jobject) NULL);
      OBJ_CALL(value = self->object.getInterfaces());
      return JArray<jobject>(value.this$).wrap(t_Class::wrap_jobject);
    }

    static PyObject *t_Class_get__localClass(t_Class *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isLocalClass());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Class_get__memberClass(t_Class *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isMemberClass());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Class_get__modifiers(t_Class *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getModifiers());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_Class_get__module(t_Class *self, void *data)
    {
      ::java::lang::Module value((jobject) NULL);
      OBJ_CALL(value = self->object.getModule());
      return ::java::lang::t_Module::wrap_Object(value);
    }

    static PyObject *t_Class_get__name(t_Class *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getName());
      return j2p(value);
    }

    static PyObject *t_Class_get__nestHost(t_Class *self, void *data)
    {
      Class value((jobject) NULL);
      OBJ_CALL(value = self->object.getNestHost());
      return t_Class::wrap_Object(value);
    }

    static PyObject *t_Class_get__nestMembers(t_Class *self, void *data)
    {
      JArray< Class > value((jobject) NULL);
      OBJ_CALL(value = self->object.getNestMembers());
      return JArray<jobject>(value.this$).wrap(t_Class::wrap_jobject);
    }

    static PyObject *t_Class_get__package(t_Class *self, void *data)
    {
      ::java::lang::Package value((jobject) NULL);
      OBJ_CALL(value = self->object.getPackage());
      return ::java::lang::t_Package::wrap_Object(value);
    }

    static PyObject *t_Class_get__packageName(t_Class *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getPackageName());
      return j2p(value);
    }

    static PyObject *t_Class_get__primitive(t_Class *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isPrimitive());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Class_get__signers(t_Class *self, void *data)
    {
      JArray< ::java::lang::Object > value((jobject) NULL);
      OBJ_CALL(value = self->object.getSigners());
      return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
    }

    static PyObject *t_Class_get__simpleName(t_Class *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getSimpleName());
      return j2p(value);
    }

    static PyObject *t_Class_get__superclass(t_Class *self, void *data)
    {
      Class value((jobject) NULL);
      OBJ_CALL(value = self->object.getSuperclass());
      return t_Class::wrap_Object(value);
    }

    static PyObject *t_Class_get__synthetic(t_Class *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isSynthetic());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Class_get__typeName(t_Class *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getTypeName());
      return j2p(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/leastsquares/SequentialBatchLSEstimator.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        ::java::lang::Class *SequentialBatchLSEstimator::class$ = NULL;
        jmethodID *SequentialBatchLSEstimator::mids$ = NULL;
        bool SequentialBatchLSEstimator::live$ = false;

        jclass SequentialBatchLSEstimator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/leastsquares/SequentialBatchLSEstimator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6ead81aeb676be96] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer;[Lorg/orekit/propagation/conversion/PropagatorBuilder;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SequentialBatchLSEstimator::SequentialBatchLSEstimator(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::SequentialGaussNewtonOptimizer & a0, const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a1) : ::org::orekit::estimation::leastsquares::BatchLSEstimator(env->newObject(initializeClass, &mids$, mid_init$_6ead81aeb676be96, a0.this$, a1.this$)) {}
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
        static PyObject *t_SequentialBatchLSEstimator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SequentialBatchLSEstimator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SequentialBatchLSEstimator_init_(t_SequentialBatchLSEstimator *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_SequentialBatchLSEstimator__methods_[] = {
          DECLARE_METHOD(t_SequentialBatchLSEstimator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SequentialBatchLSEstimator, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SequentialBatchLSEstimator)[] = {
          { Py_tp_methods, t_SequentialBatchLSEstimator__methods_ },
          { Py_tp_init, (void *) t_SequentialBatchLSEstimator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SequentialBatchLSEstimator)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::leastsquares::BatchLSEstimator),
          NULL
        };

        DEFINE_TYPE(SequentialBatchLSEstimator, t_SequentialBatchLSEstimator, SequentialBatchLSEstimator);

        void t_SequentialBatchLSEstimator::install(PyObject *module)
        {
          installType(&PY_TYPE(SequentialBatchLSEstimator), &PY_TYPE_DEF(SequentialBatchLSEstimator), module, "SequentialBatchLSEstimator", 0);
        }

        void t_SequentialBatchLSEstimator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SequentialBatchLSEstimator), "class_", make_descriptor(SequentialBatchLSEstimator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SequentialBatchLSEstimator), "wrapfn_", make_descriptor(t_SequentialBatchLSEstimator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SequentialBatchLSEstimator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SequentialBatchLSEstimator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SequentialBatchLSEstimator::initializeClass, 1)))
            return NULL;
          return t_SequentialBatchLSEstimator::wrap_Object(SequentialBatchLSEstimator(((t_SequentialBatchLSEstimator *) arg)->object.this$));
        }
        static PyObject *t_SequentialBatchLSEstimator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SequentialBatchLSEstimator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SequentialBatchLSEstimator_init_(t_SequentialBatchLSEstimator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::SequentialGaussNewtonOptimizer a0((jobject) NULL);
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a1((jobject) NULL);
          SequentialBatchLSEstimator object((jobject) NULL);

          if (!parseArgs(args, "k[k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::SequentialGaussNewtonOptimizer::initializeClass, ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, &a0, &a1))
          {
            INT_CALL(object = SequentialBatchLSEstimator(a0, a1));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/PythonOrekitStepHandler.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/sampling/OrekitStepHandler.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *PythonOrekitStepHandler::class$ = NULL;
        jmethodID *PythonOrekitStepHandler::mids$ = NULL;
        bool PythonOrekitStepHandler::live$ = false;

        jclass PythonOrekitStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/PythonOrekitStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_finish_2b88003f931f70a7] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_handleStep_eb797cf50ec4b2c4] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/sampling/OrekitStepInterpolator;)V");
            mids$[mid_init_3d13474d79f5e7bc] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonOrekitStepHandler::PythonOrekitStepHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonOrekitStepHandler::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonOrekitStepHandler::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonOrekitStepHandler::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
        static PyObject *t_PythonOrekitStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonOrekitStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonOrekitStepHandler_init_(t_PythonOrekitStepHandler *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonOrekitStepHandler_finalize(t_PythonOrekitStepHandler *self);
        static PyObject *t_PythonOrekitStepHandler_pythonExtension(t_PythonOrekitStepHandler *self, PyObject *args);
        static void JNICALL t_PythonOrekitStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonOrekitStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonOrekitStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonOrekitStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonOrekitStepHandler_get__self(t_PythonOrekitStepHandler *self, void *data);
        static PyGetSetDef t_PythonOrekitStepHandler__fields_[] = {
          DECLARE_GET_FIELD(t_PythonOrekitStepHandler, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonOrekitStepHandler__methods_[] = {
          DECLARE_METHOD(t_PythonOrekitStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonOrekitStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonOrekitStepHandler, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonOrekitStepHandler, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonOrekitStepHandler)[] = {
          { Py_tp_methods, t_PythonOrekitStepHandler__methods_ },
          { Py_tp_init, (void *) t_PythonOrekitStepHandler_init_ },
          { Py_tp_getset, t_PythonOrekitStepHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonOrekitStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonOrekitStepHandler, t_PythonOrekitStepHandler, PythonOrekitStepHandler);

        void t_PythonOrekitStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonOrekitStepHandler), &PY_TYPE_DEF(PythonOrekitStepHandler), module, "PythonOrekitStepHandler", 1);
        }

        void t_PythonOrekitStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrekitStepHandler), "class_", make_descriptor(PythonOrekitStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrekitStepHandler), "wrapfn_", make_descriptor(t_PythonOrekitStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrekitStepHandler), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonOrekitStepHandler::initializeClass);
          JNINativeMethod methods[] = {
            { "finish", "(Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonOrekitStepHandler_finish0 },
            { "handleStep", "(Lorg/orekit/propagation/sampling/OrekitStepInterpolator;)V", (void *) t_PythonOrekitStepHandler_handleStep1 },
            { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonOrekitStepHandler_init2 },
            { "pythonDecRef", "()V", (void *) t_PythonOrekitStepHandler_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonOrekitStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonOrekitStepHandler::initializeClass, 1)))
            return NULL;
          return t_PythonOrekitStepHandler::wrap_Object(PythonOrekitStepHandler(((t_PythonOrekitStepHandler *) arg)->object.this$));
        }
        static PyObject *t_PythonOrekitStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonOrekitStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonOrekitStepHandler_init_(t_PythonOrekitStepHandler *self, PyObject *args, PyObject *kwds)
        {
          PythonOrekitStepHandler object((jobject) NULL);

          INT_CALL(object = PythonOrekitStepHandler());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonOrekitStepHandler_finalize(t_PythonOrekitStepHandler *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonOrekitStepHandler_pythonExtension(t_PythonOrekitStepHandler *self, PyObject *args)
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

        static void JNICALL t_PythonOrekitStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepHandler::mids$[PythonOrekitStepHandler::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "finish", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonOrekitStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepHandler::mids$[PythonOrekitStepHandler::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::sampling::t_OrekitStepInterpolator::wrap_Object(::org::orekit::propagation::sampling::OrekitStepInterpolator(a0));
          PyObject *result = PyObject_CallMethod(obj, "handleStep", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonOrekitStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepHandler::mids$[PythonOrekitStepHandler::mid_pythonExtension_a27fc9afd27e559d]);
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

        static void JNICALL t_PythonOrekitStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepHandler::mids$[PythonOrekitStepHandler::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonOrekitStepHandler::mids$[PythonOrekitStepHandler::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonOrekitStepHandler_get__self(t_PythonOrekitStepHandler *self, void *data)
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
#include "org/hipparchus/util/FieldContinuedFraction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *FieldContinuedFraction::class$ = NULL;
      jmethodID *FieldContinuedFraction::mids$ = NULL;
      bool FieldContinuedFraction::live$ = false;

      jclass FieldContinuedFraction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/FieldContinuedFraction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_evaluate_d3398190482814dc] = env->getMethodID(cls, "evaluate", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_evaluate_e6afc264a8ab5469] = env->getMethodID(cls, "evaluate", "(Lorg/hipparchus/CalculusFieldElement;D)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_evaluate_fe52a10392d0b9c8] = env->getMethodID(cls, "evaluate", "(Lorg/hipparchus/CalculusFieldElement;I)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_evaluate_f287dd1a2b476f59] = env->getMethodID(cls, "evaluate", "(Lorg/hipparchus/CalculusFieldElement;DI)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getA_ee7db4b2ec7048ce] = env->getMethodID(cls, "getA", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getB_ee7db4b2ec7048ce] = env->getMethodID(cls, "getB", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::CalculusFieldElement FieldContinuedFraction::evaluate(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_evaluate_d3398190482814dc], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldContinuedFraction::evaluate(const ::org::hipparchus::CalculusFieldElement & a0, jdouble a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_evaluate_e6afc264a8ab5469], a0.this$, a1));
      }

      ::org::hipparchus::CalculusFieldElement FieldContinuedFraction::evaluate(const ::org::hipparchus::CalculusFieldElement & a0, jint a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_evaluate_fe52a10392d0b9c8], a0.this$, a1));
      }

      ::org::hipparchus::CalculusFieldElement FieldContinuedFraction::evaluate(const ::org::hipparchus::CalculusFieldElement & a0, jdouble a1, jint a2) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_evaluate_f287dd1a2b476f59], a0.this$, a1, a2));
      }

      ::org::hipparchus::CalculusFieldElement FieldContinuedFraction::getA(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_ee7db4b2ec7048ce], a0, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldContinuedFraction::getB(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getB_ee7db4b2ec7048ce], a0, a1.this$));
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
      static PyObject *t_FieldContinuedFraction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldContinuedFraction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldContinuedFraction_evaluate(t_FieldContinuedFraction *self, PyObject *args);
      static PyObject *t_FieldContinuedFraction_getA(t_FieldContinuedFraction *self, PyObject *args);
      static PyObject *t_FieldContinuedFraction_getB(t_FieldContinuedFraction *self, PyObject *args);

      static PyMethodDef t_FieldContinuedFraction__methods_[] = {
        DECLARE_METHOD(t_FieldContinuedFraction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldContinuedFraction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldContinuedFraction, evaluate, METH_VARARGS),
        DECLARE_METHOD(t_FieldContinuedFraction, getA, METH_VARARGS),
        DECLARE_METHOD(t_FieldContinuedFraction, getB, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldContinuedFraction)[] = {
        { Py_tp_methods, t_FieldContinuedFraction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldContinuedFraction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldContinuedFraction, t_FieldContinuedFraction, FieldContinuedFraction);

      void t_FieldContinuedFraction::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldContinuedFraction), &PY_TYPE_DEF(FieldContinuedFraction), module, "FieldContinuedFraction", 0);
      }

      void t_FieldContinuedFraction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldContinuedFraction), "class_", make_descriptor(FieldContinuedFraction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldContinuedFraction), "wrapfn_", make_descriptor(t_FieldContinuedFraction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldContinuedFraction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldContinuedFraction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldContinuedFraction::initializeClass, 1)))
          return NULL;
        return t_FieldContinuedFraction::wrap_Object(FieldContinuedFraction(((t_FieldContinuedFraction *) arg)->object.this$));
      }
      static PyObject *t_FieldContinuedFraction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldContinuedFraction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldContinuedFraction_evaluate(t_FieldContinuedFraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.evaluate(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KD", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KI", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            jint a2;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KDI", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "evaluate", args);
        return NULL;
      }

      static PyObject *t_FieldContinuedFraction_getA(t_FieldContinuedFraction *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.getA(a0, a1));
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getA", args);
        return NULL;
      }

      static PyObject *t_FieldContinuedFraction_getB(t_FieldContinuedFraction *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.getB(a0, a1));
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getB", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/filtering/kalman/AbstractKalmanFilter.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "org/hipparchus/filtering/kalman/KalmanFilter.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {

        ::java::lang::Class *AbstractKalmanFilter::class$ = NULL;
        jmethodID *AbstractKalmanFilter::mids$ = NULL;
        bool AbstractKalmanFilter::live$ = false;

        jclass AbstractKalmanFilter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/AbstractKalmanFilter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCorrected_3d891496bfc9091e] = env->getMethodID(cls, "getCorrected", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
            mids$[mid_getPredicted_3d891496bfc9091e] = env->getMethodID(cls, "getPredicted", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
            mids$[mid_predict_0a3b45a8b8900900] = env->getMethodID(cls, "predict", "(DLorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_computeInnovationCovarianceMatrix_d6b08b3593784d37] = env->getMethodID(cls, "computeInnovationCovarianceMatrix", "(Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_correct_c9fb7008b1b0c6f6] = env->getMethodID(cls, "correct", "(Lorg/hipparchus/filtering/kalman/Measurement;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::filtering::kalman::ProcessEstimate AbstractKalmanFilter::getCorrected() const
        {
          return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getCorrected_3d891496bfc9091e]));
        }

        ::org::hipparchus::filtering::kalman::ProcessEstimate AbstractKalmanFilter::getPredicted() const
        {
          return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getPredicted_3d891496bfc9091e]));
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
        static PyObject *t_AbstractKalmanFilter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractKalmanFilter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractKalmanFilter_of_(t_AbstractKalmanFilter *self, PyObject *args);
        static PyObject *t_AbstractKalmanFilter_getCorrected(t_AbstractKalmanFilter *self);
        static PyObject *t_AbstractKalmanFilter_getPredicted(t_AbstractKalmanFilter *self);
        static PyObject *t_AbstractKalmanFilter_get__corrected(t_AbstractKalmanFilter *self, void *data);
        static PyObject *t_AbstractKalmanFilter_get__predicted(t_AbstractKalmanFilter *self, void *data);
        static PyObject *t_AbstractKalmanFilter_get__parameters_(t_AbstractKalmanFilter *self, void *data);
        static PyGetSetDef t_AbstractKalmanFilter__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractKalmanFilter, corrected),
          DECLARE_GET_FIELD(t_AbstractKalmanFilter, predicted),
          DECLARE_GET_FIELD(t_AbstractKalmanFilter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractKalmanFilter__methods_[] = {
          DECLARE_METHOD(t_AbstractKalmanFilter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractKalmanFilter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractKalmanFilter, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractKalmanFilter, getCorrected, METH_NOARGS),
          DECLARE_METHOD(t_AbstractKalmanFilter, getPredicted, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractKalmanFilter)[] = {
          { Py_tp_methods, t_AbstractKalmanFilter__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractKalmanFilter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractKalmanFilter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractKalmanFilter, t_AbstractKalmanFilter, AbstractKalmanFilter);
        PyObject *t_AbstractKalmanFilter::wrap_Object(const AbstractKalmanFilter& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractKalmanFilter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractKalmanFilter *self = (t_AbstractKalmanFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractKalmanFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractKalmanFilter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractKalmanFilter *self = (t_AbstractKalmanFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractKalmanFilter::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractKalmanFilter), &PY_TYPE_DEF(AbstractKalmanFilter), module, "AbstractKalmanFilter", 0);
        }

        void t_AbstractKalmanFilter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractKalmanFilter), "class_", make_descriptor(AbstractKalmanFilter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractKalmanFilter), "wrapfn_", make_descriptor(t_AbstractKalmanFilter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractKalmanFilter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractKalmanFilter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractKalmanFilter::initializeClass, 1)))
            return NULL;
          return t_AbstractKalmanFilter::wrap_Object(AbstractKalmanFilter(((t_AbstractKalmanFilter *) arg)->object.this$));
        }
        static PyObject *t_AbstractKalmanFilter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractKalmanFilter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractKalmanFilter_of_(t_AbstractKalmanFilter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AbstractKalmanFilter_getCorrected(t_AbstractKalmanFilter *self)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrected());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
        }

        static PyObject *t_AbstractKalmanFilter_getPredicted(t_AbstractKalmanFilter *self)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredicted());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
        }
        static PyObject *t_AbstractKalmanFilter_get__parameters_(t_AbstractKalmanFilter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AbstractKalmanFilter_get__corrected(t_AbstractKalmanFilter *self, void *data)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrected());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(value);
        }

        static PyObject *t_AbstractKalmanFilter_get__predicted(t_AbstractKalmanFilter *self, void *data)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredicted());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/discrete/UniformIntegerDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        ::java::lang::Class *UniformIntegerDistribution::class$ = NULL;
        jmethodID *UniformIntegerDistribution::mids$ = NULL;
        bool UniformIntegerDistribution::live$ = false;

        jclass UniformIntegerDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/discrete/UniformIntegerDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8dbc1129a3c2557a] = env->getMethodID(cls, "<init>", "(II)V");
            mids$[mid_cumulativeProbability_b772323fc98b7293] = env->getMethodID(cls, "cumulativeProbability", "(I)D");
            mids$[mid_getNumericalMean_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_f2f64475e4580546] = env->getMethodID(cls, "getSupportLowerBound", "()I");
            mids$[mid_getSupportUpperBound_f2f64475e4580546] = env->getMethodID(cls, "getSupportUpperBound", "()I");
            mids$[mid_isSupportConnected_e470b6d9e0d979db] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_probability_b772323fc98b7293] = env->getMethodID(cls, "probability", "(I)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UniformIntegerDistribution::UniformIntegerDistribution(jint a0, jint a1) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_8dbc1129a3c2557a, a0, a1)) {}

        jdouble UniformIntegerDistribution::cumulativeProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_b772323fc98b7293], a0);
        }

        jdouble UniformIntegerDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_456d9a2f64d6b28d]);
        }

        jdouble UniformIntegerDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_456d9a2f64d6b28d]);
        }

        jint UniformIntegerDistribution::getSupportLowerBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportLowerBound_f2f64475e4580546]);
        }

        jint UniformIntegerDistribution::getSupportUpperBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportUpperBound_f2f64475e4580546]);
        }

        jboolean UniformIntegerDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_e470b6d9e0d979db]);
        }

        jdouble UniformIntegerDistribution::probability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_b772323fc98b7293], a0);
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
      namespace discrete {
        static PyObject *t_UniformIntegerDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UniformIntegerDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_UniformIntegerDistribution_init_(t_UniformIntegerDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UniformIntegerDistribution_cumulativeProbability(t_UniformIntegerDistribution *self, PyObject *args);
        static PyObject *t_UniformIntegerDistribution_getNumericalMean(t_UniformIntegerDistribution *self, PyObject *args);
        static PyObject *t_UniformIntegerDistribution_getNumericalVariance(t_UniformIntegerDistribution *self, PyObject *args);
        static PyObject *t_UniformIntegerDistribution_getSupportLowerBound(t_UniformIntegerDistribution *self, PyObject *args);
        static PyObject *t_UniformIntegerDistribution_getSupportUpperBound(t_UniformIntegerDistribution *self, PyObject *args);
        static PyObject *t_UniformIntegerDistribution_isSupportConnected(t_UniformIntegerDistribution *self, PyObject *args);
        static PyObject *t_UniformIntegerDistribution_probability(t_UniformIntegerDistribution *self, PyObject *args);
        static PyObject *t_UniformIntegerDistribution_get__numericalMean(t_UniformIntegerDistribution *self, void *data);
        static PyObject *t_UniformIntegerDistribution_get__numericalVariance(t_UniformIntegerDistribution *self, void *data);
        static PyObject *t_UniformIntegerDistribution_get__supportConnected(t_UniformIntegerDistribution *self, void *data);
        static PyObject *t_UniformIntegerDistribution_get__supportLowerBound(t_UniformIntegerDistribution *self, void *data);
        static PyObject *t_UniformIntegerDistribution_get__supportUpperBound(t_UniformIntegerDistribution *self, void *data);
        static PyGetSetDef t_UniformIntegerDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_UniformIntegerDistribution, numericalMean),
          DECLARE_GET_FIELD(t_UniformIntegerDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_UniformIntegerDistribution, supportConnected),
          DECLARE_GET_FIELD(t_UniformIntegerDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_UniformIntegerDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UniformIntegerDistribution__methods_[] = {
          DECLARE_METHOD(t_UniformIntegerDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UniformIntegerDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UniformIntegerDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_UniformIntegerDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_UniformIntegerDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_UniformIntegerDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_UniformIntegerDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_UniformIntegerDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_UniformIntegerDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UniformIntegerDistribution)[] = {
          { Py_tp_methods, t_UniformIntegerDistribution__methods_ },
          { Py_tp_init, (void *) t_UniformIntegerDistribution_init_ },
          { Py_tp_getset, t_UniformIntegerDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UniformIntegerDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::discrete::AbstractIntegerDistribution),
          NULL
        };

        DEFINE_TYPE(UniformIntegerDistribution, t_UniformIntegerDistribution, UniformIntegerDistribution);

        void t_UniformIntegerDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(UniformIntegerDistribution), &PY_TYPE_DEF(UniformIntegerDistribution), module, "UniformIntegerDistribution", 0);
        }

        void t_UniformIntegerDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UniformIntegerDistribution), "class_", make_descriptor(UniformIntegerDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UniformIntegerDistribution), "wrapfn_", make_descriptor(t_UniformIntegerDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UniformIntegerDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UniformIntegerDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UniformIntegerDistribution::initializeClass, 1)))
            return NULL;
          return t_UniformIntegerDistribution::wrap_Object(UniformIntegerDistribution(((t_UniformIntegerDistribution *) arg)->object.this$));
        }
        static PyObject *t_UniformIntegerDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UniformIntegerDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_UniformIntegerDistribution_init_(t_UniformIntegerDistribution *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jint a1;
          UniformIntegerDistribution object((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            INT_CALL(object = UniformIntegerDistribution(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_UniformIntegerDistribution_cumulativeProbability(t_UniformIntegerDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformIntegerDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_UniformIntegerDistribution_getNumericalMean(t_UniformIntegerDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformIntegerDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_UniformIntegerDistribution_getNumericalVariance(t_UniformIntegerDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformIntegerDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_UniformIntegerDistribution_getSupportLowerBound(t_UniformIntegerDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UniformIntegerDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_UniformIntegerDistribution_getSupportUpperBound(t_UniformIntegerDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UniformIntegerDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_UniformIntegerDistribution_isSupportConnected(t_UniformIntegerDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(UniformIntegerDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_UniformIntegerDistribution_probability(t_UniformIntegerDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.probability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformIntegerDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_UniformIntegerDistribution_get__numericalMean(t_UniformIntegerDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UniformIntegerDistribution_get__numericalVariance(t_UniformIntegerDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UniformIntegerDistribution_get__supportConnected(t_UniformIntegerDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_UniformIntegerDistribution_get__supportLowerBound(t_UniformIntegerDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_UniformIntegerDistribution_get__supportUpperBound(t_UniformIntegerDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/BrouwerLyddanePropagator.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics.h"
#include "java/util/List.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/orbits/KeplerianOrbit.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *BrouwerLyddanePropagator::class$ = NULL;
        jmethodID *BrouwerLyddanePropagator::mids$ = NULL;
        bool BrouwerLyddanePropagator::live$ = false;
        jdouble BrouwerLyddanePropagator::M2 = (jdouble) 0;
        ::java::lang::String *BrouwerLyddanePropagator::M2_NAME = NULL;

        jclass BrouwerLyddanePropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/BrouwerLyddanePropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_5eb36e8f2e4790b5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;D)V");
            mids$[mid_init$_fc8990643a59cc3a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/propagation/PropagationType;D)V");
            mids$[mid_init$_3ac8436b360cd5bb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;D)V");
            mids$[mid_init$_cdc9d14545e0c203] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;D)V");
            mids$[mid_init$_02247cd530832bbc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;D)V");
            mids$[mid_init$_4eba2846f9577fdc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/propagation/PropagationType;D)V");
            mids$[mid_init$_696d039b06e7b14b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;D)V");
            mids$[mid_init$_9ea270337f95ff4c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;Lorg/orekit/propagation/PropagationType;D)V");
            mids$[mid_init$_a214f2949187508c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;DDDDDDD)V");
            mids$[mid_init$_6fdccf30ac5ccd71] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;DDDDDDDD)V");
            mids$[mid_init$_e53f83b52f48b75e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DDDDDDD)V");
            mids$[mid_init$_016d2092114ea672] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DDDDDDDD)V");
            mids$[mid_init$_1445dac576226bc7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DDDDDDDLorg/orekit/propagation/PropagationType;D)V");
            mids$[mid_init$_844117abf3e4679d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DDDDDDDLorg/orekit/propagation/PropagationType;DDI)V");
            mids$[mid_computeMeanOrbit_0f0dcf93792b53ad] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;D)Lorg/orekit/orbits/KeplerianOrbit;");
            mids$[mid_computeMeanOrbit_ac9aeda78f0e5de3] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;DDI)Lorg/orekit/orbits/KeplerianOrbit;");
            mids$[mid_computeMeanOrbit_2364cc6d8503bfd9] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/Orbit;DDDDDDDDI)Lorg/orekit/orbits/KeplerianOrbit;");
            mids$[mid_getCk0_7cdc325af0834901] = env->getMethodID(cls, "getCk0", "()[D");
            mids$[mid_getM2_456d9a2f64d6b28d] = env->getMethodID(cls, "getM2", "()D");
            mids$[mid_getMu_456d9a2f64d6b28d] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_getReferenceRadius_456d9a2f64d6b28d] = env->getMethodID(cls, "getReferenceRadius", "()D");
            mids$[mid_propagateOrbit_99e79dca79eef30e] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/KeplerianOrbit;");
            mids$[mid_resetInitialState_2b88003f931f70a7] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_resetInitialState_dfbbbfbf78c55942] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_resetInitialState_8db5913253ef6ad3] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/PropagationType;DI)V");
            mids$[mid_getMass_e912d21057defe63] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_resetIntermediateState_83d0edaa13a56f81] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;ZDI)V");
            mids$[mid_resetIntermediateState_9658cf3eaef14ef5] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
            mids$[mid_createHarvester_d3d4ea925a699046] = env->getMethodID(cls, "createHarvester", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/AbstractMatricesHarvester;");
            mids$[mid_getJacobiansColumnsNames_a6156df500549a58] = env->getMethodID(cls, "getJacobiansColumnsNames", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            M2 = env->getStaticDoubleField(cls, "M2");
            M2_NAME = new ::java::lang::String(env->getStaticObjectField(cls, "M2_NAME", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, jdouble a2) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_5eb36e8f2e4790b5, a0.this$, a1.this$, a2)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::propagation::PropagationType & a2, jdouble a3) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_fc8990643a59cc3a, a0.this$, a1.this$, a2.this$, a3)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, jdouble a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2, jdouble a3) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_3ac8436b360cd5bb, a0.this$, a1, a2.this$, a3)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2, jdouble a3) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_cdc9d14545e0c203, a0.this$, a1.this$, a2.this$, a3)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, jdouble a4) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_02247cd530832bbc, a0.this$, a1.this$, a2, a3.this$, a4)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::propagation::PropagationType & a4, jdouble a5) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_4eba2846f9577fdc, a0.this$, a1.this$, a2, a3.this$, a4.this$, a5)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a4, jdouble a5) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_696d039b06e7b14b, a0.this$, a1.this$, a2, a3.this$, a4.this$, a5)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a4, const ::org::orekit::propagation::PropagationType & a5, jdouble a6) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_9ea270337f95ff4c, a0.this$, a1.this$, a2, a3.this$, a4.this$, a5.this$, a6)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_a214f2949187508c, a0.this$, a1, a2, a3, a4, a5, a6, a7)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_6fdccf30ac5ccd71, a0.this$, a1, a2, a3, a4, a5, a6, a7, a8)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_e53f83b52f48b75e, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_016d2092114ea672, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8, a9)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, const ::org::orekit::propagation::PropagationType & a9, jdouble a10) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_1445dac576226bc7, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8, a9.this$, a10)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, const ::org::orekit::propagation::PropagationType & a9, jdouble a10, jdouble a11, jint a12) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_844117abf3e4679d, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8, a9.this$, a10, a11, a12)) {}

        ::org::orekit::orbits::KeplerianOrbit BrouwerLyddanePropagator::computeMeanOrbit(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a2, jdouble a3)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::KeplerianOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_0f0dcf93792b53ad], a0.this$, a1.this$, a2.this$, a3));
        }

        ::org::orekit::orbits::KeplerianOrbit BrouwerLyddanePropagator::computeMeanOrbit(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a2, jdouble a3, jdouble a4, jint a5)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::KeplerianOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_ac9aeda78f0e5de3], a0.this$, a1.this$, a2.this$, a3, a4, a5));
        }

        ::org::orekit::orbits::KeplerianOrbit BrouwerLyddanePropagator::computeMeanOrbit(const ::org::orekit::orbits::Orbit & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jint a9)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::KeplerianOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_2364cc6d8503bfd9], a0.this$, a1, a2, a3, a4, a5, a6, a7, a8, a9));
        }

        JArray< jdouble > BrouwerLyddanePropagator::getCk0() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCk0_7cdc325af0834901]));
        }

        jdouble BrouwerLyddanePropagator::getM2() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getM2_456d9a2f64d6b28d]);
        }

        jdouble BrouwerLyddanePropagator::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_456d9a2f64d6b28d]);
        }

        ::java::util::List BrouwerLyddanePropagator::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
        }

        jdouble BrouwerLyddanePropagator::getReferenceRadius() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReferenceRadius_456d9a2f64d6b28d]);
        }

        ::org::orekit::orbits::KeplerianOrbit BrouwerLyddanePropagator::propagateOrbit(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::orbits::KeplerianOrbit(env->callObjectMethod(this$, mids$[mid_propagateOrbit_99e79dca79eef30e], a0.this$));
        }

        void BrouwerLyddanePropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_2b88003f931f70a7], a0.this$);
        }

        void BrouwerLyddanePropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_dfbbbfbf78c55942], a0.this$, a1.this$);
        }

        void BrouwerLyddanePropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1, jdouble a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_8db5913253ef6ad3], a0.this$, a1.this$, a2, a3);
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
        static PyObject *t_BrouwerLyddanePropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BrouwerLyddanePropagator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BrouwerLyddanePropagator_init_(t_BrouwerLyddanePropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BrouwerLyddanePropagator_computeMeanOrbit(PyTypeObject *type, PyObject *args);
        static PyObject *t_BrouwerLyddanePropagator_getCk0(t_BrouwerLyddanePropagator *self);
        static PyObject *t_BrouwerLyddanePropagator_getM2(t_BrouwerLyddanePropagator *self);
        static PyObject *t_BrouwerLyddanePropagator_getMu(t_BrouwerLyddanePropagator *self);
        static PyObject *t_BrouwerLyddanePropagator_getParametersDrivers(t_BrouwerLyddanePropagator *self);
        static PyObject *t_BrouwerLyddanePropagator_getReferenceRadius(t_BrouwerLyddanePropagator *self);
        static PyObject *t_BrouwerLyddanePropagator_propagateOrbit(t_BrouwerLyddanePropagator *self, PyObject *arg);
        static PyObject *t_BrouwerLyddanePropagator_resetInitialState(t_BrouwerLyddanePropagator *self, PyObject *args);
        static PyObject *t_BrouwerLyddanePropagator_get__ck0(t_BrouwerLyddanePropagator *self, void *data);
        static PyObject *t_BrouwerLyddanePropagator_get__m2(t_BrouwerLyddanePropagator *self, void *data);
        static PyObject *t_BrouwerLyddanePropagator_get__mu(t_BrouwerLyddanePropagator *self, void *data);
        static PyObject *t_BrouwerLyddanePropagator_get__parametersDrivers(t_BrouwerLyddanePropagator *self, void *data);
        static PyObject *t_BrouwerLyddanePropagator_get__referenceRadius(t_BrouwerLyddanePropagator *self, void *data);
        static PyGetSetDef t_BrouwerLyddanePropagator__fields_[] = {
          DECLARE_GET_FIELD(t_BrouwerLyddanePropagator, ck0),
          DECLARE_GET_FIELD(t_BrouwerLyddanePropagator, m2),
          DECLARE_GET_FIELD(t_BrouwerLyddanePropagator, mu),
          DECLARE_GET_FIELD(t_BrouwerLyddanePropagator, parametersDrivers),
          DECLARE_GET_FIELD(t_BrouwerLyddanePropagator, referenceRadius),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BrouwerLyddanePropagator__methods_[] = {
          DECLARE_METHOD(t_BrouwerLyddanePropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BrouwerLyddanePropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BrouwerLyddanePropagator, computeMeanOrbit, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_BrouwerLyddanePropagator, getCk0, METH_NOARGS),
          DECLARE_METHOD(t_BrouwerLyddanePropagator, getM2, METH_NOARGS),
          DECLARE_METHOD(t_BrouwerLyddanePropagator, getMu, METH_NOARGS),
          DECLARE_METHOD(t_BrouwerLyddanePropagator, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_BrouwerLyddanePropagator, getReferenceRadius, METH_NOARGS),
          DECLARE_METHOD(t_BrouwerLyddanePropagator, propagateOrbit, METH_O),
          DECLARE_METHOD(t_BrouwerLyddanePropagator, resetInitialState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BrouwerLyddanePropagator)[] = {
          { Py_tp_methods, t_BrouwerLyddanePropagator__methods_ },
          { Py_tp_init, (void *) t_BrouwerLyddanePropagator_init_ },
          { Py_tp_getset, t_BrouwerLyddanePropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BrouwerLyddanePropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(BrouwerLyddanePropagator, t_BrouwerLyddanePropagator, BrouwerLyddanePropagator);

        void t_BrouwerLyddanePropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(BrouwerLyddanePropagator), &PY_TYPE_DEF(BrouwerLyddanePropagator), module, "BrouwerLyddanePropagator", 0);
        }

        void t_BrouwerLyddanePropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrouwerLyddanePropagator), "class_", make_descriptor(BrouwerLyddanePropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrouwerLyddanePropagator), "wrapfn_", make_descriptor(t_BrouwerLyddanePropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrouwerLyddanePropagator), "boxfn_", make_descriptor(boxObject));
          env->getClass(BrouwerLyddanePropagator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrouwerLyddanePropagator), "M2", make_descriptor(BrouwerLyddanePropagator::M2));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrouwerLyddanePropagator), "M2_NAME", make_descriptor(j2p(*BrouwerLyddanePropagator::M2_NAME)));
        }

        static PyObject *t_BrouwerLyddanePropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BrouwerLyddanePropagator::initializeClass, 1)))
            return NULL;
          return t_BrouwerLyddanePropagator::wrap_Object(BrouwerLyddanePropagator(((t_BrouwerLyddanePropagator *) arg)->object.this$));
        }
        static PyObject *t_BrouwerLyddanePropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BrouwerLyddanePropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BrouwerLyddanePropagator_init_(t_BrouwerLyddanePropagator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              jdouble a2;
              BrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "kkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = BrouwerLyddanePropagator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::propagation::PropagationType a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              BrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "kkKD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::propagation::t_PropagationType::parameters_, &a3))
              {
                INT_CALL(object = BrouwerLyddanePropagator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a2((jobject) NULL);
              jdouble a3;
              BrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "kDkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = BrouwerLyddanePropagator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a2((jobject) NULL);
              jdouble a3;
              BrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "kkkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = BrouwerLyddanePropagator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              jdouble a4;
              BrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = BrouwerLyddanePropagator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              ::org::orekit::propagation::PropagationType a4((jobject) NULL);
              PyTypeObject **p4;
              jdouble a5;
              BrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDkKD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::orekit::propagation::t_PropagationType::parameters_, &a5))
              {
                INT_CALL(object = BrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a4((jobject) NULL);
              jdouble a5;
              BrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDkkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = BrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            goto err;
           case 7:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a4((jobject) NULL);
              ::org::orekit::propagation::PropagationType a5((jobject) NULL);
              PyTypeObject **p5;
              jdouble a6;
              BrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDkkKD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &p5, ::org::orekit::propagation::t_PropagationType::parameters_, &a6))
              {
                INT_CALL(object = BrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
                break;
              }
            }
            goto err;
           case 8:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              BrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "kDDDDDDD", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                INT_CALL(object = BrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6, a7));
                self->object = object;
                break;
              }
            }
            goto err;
           case 9:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              BrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "kDDDDDDDD", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
              {
                INT_CALL(object = BrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              BrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDDDDDDD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
              {
                INT_CALL(object = BrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                self->object = object;
                break;
              }
            }
            goto err;
           case 10:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              jdouble a9;
              BrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDDDDDDDD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
              {
                INT_CALL(object = BrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
                self->object = object;
                break;
              }
            }
            goto err;
           case 11:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              ::org::orekit::propagation::PropagationType a9((jobject) NULL);
              PyTypeObject **p9;
              jdouble a10;
              BrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDDDDDDDKD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &p9, ::org::orekit::propagation::t_PropagationType::parameters_, &a10))
              {
                INT_CALL(object = BrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10));
                self->object = object;
                break;
              }
            }
            goto err;
           case 13:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              ::org::orekit::propagation::PropagationType a9((jobject) NULL);
              PyTypeObject **p9;
              jdouble a10;
              jdouble a11;
              jint a12;
              BrouwerLyddanePropagator object((jobject) NULL);

              if (!parseArgs(args, "kkDDDDDDDKDDI", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &p9, ::org::orekit::propagation::t_PropagationType::parameters_, &a10, &a11, &a12))
              {
                INT_CALL(object = BrouwerLyddanePropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12));
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

        static PyObject *t_BrouwerLyddanePropagator_computeMeanOrbit(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a2((jobject) NULL);
              jdouble a3;
              ::org::orekit::orbits::KeplerianOrbit result((jobject) NULL);

              if (!parseArgs(args, "kkkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::BrouwerLyddanePropagator::computeMeanOrbit(a0, a1, a2, a3));
                return ::org::orekit::orbits::t_KeplerianOrbit::wrap_Object(result);
              }
            }
            break;
           case 6:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a2((jobject) NULL);
              jdouble a3;
              jdouble a4;
              jint a5;
              ::org::orekit::orbits::KeplerianOrbit result((jobject) NULL);

              if (!parseArgs(args, "kkkDDI", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::BrouwerLyddanePropagator::computeMeanOrbit(a0, a1, a2, a3, a4, a5));
                return ::org::orekit::orbits::t_KeplerianOrbit::wrap_Object(result);
              }
            }
            break;
           case 10:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              jint a9;
              ::org::orekit::orbits::KeplerianOrbit result((jobject) NULL);

              if (!parseArgs(args, "kDDDDDDDDI", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::BrouwerLyddanePropagator::computeMeanOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
                return ::org::orekit::orbits::t_KeplerianOrbit::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "computeMeanOrbit", args);
          return NULL;
        }

        static PyObject *t_BrouwerLyddanePropagator_getCk0(t_BrouwerLyddanePropagator *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCk0());
          return result.wrap();
        }

        static PyObject *t_BrouwerLyddanePropagator_getM2(t_BrouwerLyddanePropagator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getM2());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BrouwerLyddanePropagator_getMu(t_BrouwerLyddanePropagator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BrouwerLyddanePropagator_getParametersDrivers(t_BrouwerLyddanePropagator *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_BrouwerLyddanePropagator_getReferenceRadius(t_BrouwerLyddanePropagator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getReferenceRadius());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BrouwerLyddanePropagator_propagateOrbit(t_BrouwerLyddanePropagator *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::orbits::KeplerianOrbit result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.propagateOrbit(a0));
            return ::org::orekit::orbits::t_KeplerianOrbit::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "propagateOrbit", arg);
          return NULL;
        }

        static PyObject *t_BrouwerLyddanePropagator_resetInitialState(t_BrouwerLyddanePropagator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
              {
                OBJ_CALL(self->object.resetInitialState(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 2:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::PropagationType a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                OBJ_CALL(self->object.resetInitialState(a0, a1));
                Py_RETURN_NONE;
              }
            }
            break;
           case 4:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::PropagationType a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              jint a3;

              if (!parseArgs(args, "kKDI", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2, &a3))
              {
                OBJ_CALL(self->object.resetInitialState(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          return callSuper(PY_TYPE(BrouwerLyddanePropagator), (PyObject *) self, "resetInitialState", args, 2);
        }

        static PyObject *t_BrouwerLyddanePropagator_get__ck0(t_BrouwerLyddanePropagator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCk0());
          return value.wrap();
        }

        static PyObject *t_BrouwerLyddanePropagator_get__m2(t_BrouwerLyddanePropagator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getM2());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BrouwerLyddanePropagator_get__mu(t_BrouwerLyddanePropagator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BrouwerLyddanePropagator_get__parametersDrivers(t_BrouwerLyddanePropagator *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_BrouwerLyddanePropagator_get__referenceRadius(t_BrouwerLyddanePropagator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReferenceRadius());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonParser.h"
#include "java/io/IOException.h"
#include "java/util/List.h"
#include "org/orekit/time/OffsetModel.h"
#include "java/io/InputStream.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/UTCTAIOffsetsLoader$Parser.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonParser::class$ = NULL;
      jmethodID *PythonParser::mids$ = NULL;
      bool PythonParser::live$ = false;

      jclass PythonParser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonParser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_parse_90de289641581563] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/List;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonParser::PythonParser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonParser::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonParser::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonParser::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
      static PyObject *t_PythonParser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonParser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonParser_init_(t_PythonParser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonParser_finalize(t_PythonParser *self);
      static PyObject *t_PythonParser_pythonExtension(t_PythonParser *self, PyObject *args);
      static jobject JNICALL t_PythonParser_parse0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonParser_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonParser_get__self(t_PythonParser *self, void *data);
      static PyGetSetDef t_PythonParser__fields_[] = {
        DECLARE_GET_FIELD(t_PythonParser, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonParser__methods_[] = {
        DECLARE_METHOD(t_PythonParser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonParser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonParser, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonParser, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonParser)[] = {
        { Py_tp_methods, t_PythonParser__methods_ },
        { Py_tp_init, (void *) t_PythonParser_init_ },
        { Py_tp_getset, t_PythonParser__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonParser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonParser, t_PythonParser, PythonParser);

      void t_PythonParser::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonParser), &PY_TYPE_DEF(PythonParser), module, "PythonParser", 1);
      }

      void t_PythonParser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParser), "class_", make_descriptor(PythonParser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParser), "wrapfn_", make_descriptor(t_PythonParser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParser), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonParser::initializeClass);
        JNINativeMethod methods[] = {
          { "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/List;", (void *) t_PythonParser_parse0 },
          { "pythonDecRef", "()V", (void *) t_PythonParser_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonParser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonParser::initializeClass, 1)))
          return NULL;
        return t_PythonParser::wrap_Object(PythonParser(((t_PythonParser *) arg)->object.this$));
      }
      static PyObject *t_PythonParser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonParser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonParser_init_(t_PythonParser *self, PyObject *args, PyObject *kwds)
      {
        PythonParser object((jobject) NULL);

        INT_CALL(object = PythonParser());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonParser_finalize(t_PythonParser *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonParser_pythonExtension(t_PythonParser *self, PyObject *args)
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

      static jobject JNICALL t_PythonParser_parse0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonParser::mids$[PythonParser::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *o0 = ::java::io::t_InputStream::wrap_Object(::java::io::InputStream(a0));
        PyObject *o1 = env->fromJString((jstring) a1, 0);
        PyObject *result = PyObject_CallMethod(obj, "parse", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("parse", result);
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

      static void JNICALL t_PythonParser_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonParser::mids$[PythonParser::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonParser::mids$[PythonParser::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonParser_get__self(t_PythonParser *self, void *data)
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
#include "org/hipparchus/stat/correlation/SpearmansCorrelation.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/ranking/RankingAlgorithm.h"
#include "org/hipparchus/stat/correlation/PearsonsCorrelation.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace correlation {

        ::java::lang::Class *SpearmansCorrelation::class$ = NULL;
        jmethodID *SpearmansCorrelation::mids$ = NULL;
        bool SpearmansCorrelation::live$ = false;

        jclass SpearmansCorrelation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/correlation/SpearmansCorrelation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_30aa151fd03f3096] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_init$_11432da5a1f9916c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/ranking/RankingAlgorithm;)V");
            mids$[mid_init$_48a59056bb495241] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/stat/ranking/RankingAlgorithm;)V");
            mids$[mid_computeCorrelationMatrix_d983e368b64b23a3] = env->getMethodID(cls, "computeCorrelationMatrix", "([[D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_computeCorrelationMatrix_e00cd33aedcc5bd0] = env->getMethodID(cls, "computeCorrelationMatrix", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_correlation_1ce76fb6ff382da9] = env->getMethodID(cls, "correlation", "([D[D)D");
            mids$[mid_getCorrelationMatrix_7116bbecdd8ceb21] = env->getMethodID(cls, "getCorrelationMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getRankCorrelation_21aaef08a739a2a4] = env->getMethodID(cls, "getRankCorrelation", "()Lorg/hipparchus/stat/correlation/PearsonsCorrelation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SpearmansCorrelation::SpearmansCorrelation() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        SpearmansCorrelation::SpearmansCorrelation(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_30aa151fd03f3096, a0.this$)) {}

        SpearmansCorrelation::SpearmansCorrelation(const ::org::hipparchus::stat::ranking::RankingAlgorithm & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_11432da5a1f9916c, a0.this$)) {}

        SpearmansCorrelation::SpearmansCorrelation(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::hipparchus::stat::ranking::RankingAlgorithm & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_48a59056bb495241, a0.this$, a1.this$)) {}

        ::org::hipparchus::linear::RealMatrix SpearmansCorrelation::computeCorrelationMatrix(const JArray< JArray< jdouble > > & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeCorrelationMatrix_d983e368b64b23a3], a0.this$));
        }

        ::org::hipparchus::linear::RealMatrix SpearmansCorrelation::computeCorrelationMatrix(const ::org::hipparchus::linear::RealMatrix & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeCorrelationMatrix_e00cd33aedcc5bd0], a0.this$));
        }

        jdouble SpearmansCorrelation::correlation(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_correlation_1ce76fb6ff382da9], a0.this$, a1.this$);
        }

        ::org::hipparchus::linear::RealMatrix SpearmansCorrelation::getCorrelationMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCorrelationMatrix_7116bbecdd8ceb21]));
        }

        ::org::hipparchus::stat::correlation::PearsonsCorrelation SpearmansCorrelation::getRankCorrelation() const
        {
          return ::org::hipparchus::stat::correlation::PearsonsCorrelation(env->callObjectMethod(this$, mids$[mid_getRankCorrelation_21aaef08a739a2a4]));
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
      namespace correlation {
        static PyObject *t_SpearmansCorrelation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SpearmansCorrelation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SpearmansCorrelation_init_(t_SpearmansCorrelation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SpearmansCorrelation_computeCorrelationMatrix(t_SpearmansCorrelation *self, PyObject *args);
        static PyObject *t_SpearmansCorrelation_correlation(t_SpearmansCorrelation *self, PyObject *args);
        static PyObject *t_SpearmansCorrelation_getCorrelationMatrix(t_SpearmansCorrelation *self);
        static PyObject *t_SpearmansCorrelation_getRankCorrelation(t_SpearmansCorrelation *self);
        static PyObject *t_SpearmansCorrelation_get__correlationMatrix(t_SpearmansCorrelation *self, void *data);
        static PyObject *t_SpearmansCorrelation_get__rankCorrelation(t_SpearmansCorrelation *self, void *data);
        static PyGetSetDef t_SpearmansCorrelation__fields_[] = {
          DECLARE_GET_FIELD(t_SpearmansCorrelation, correlationMatrix),
          DECLARE_GET_FIELD(t_SpearmansCorrelation, rankCorrelation),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SpearmansCorrelation__methods_[] = {
          DECLARE_METHOD(t_SpearmansCorrelation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SpearmansCorrelation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SpearmansCorrelation, computeCorrelationMatrix, METH_VARARGS),
          DECLARE_METHOD(t_SpearmansCorrelation, correlation, METH_VARARGS),
          DECLARE_METHOD(t_SpearmansCorrelation, getCorrelationMatrix, METH_NOARGS),
          DECLARE_METHOD(t_SpearmansCorrelation, getRankCorrelation, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SpearmansCorrelation)[] = {
          { Py_tp_methods, t_SpearmansCorrelation__methods_ },
          { Py_tp_init, (void *) t_SpearmansCorrelation_init_ },
          { Py_tp_getset, t_SpearmansCorrelation__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SpearmansCorrelation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SpearmansCorrelation, t_SpearmansCorrelation, SpearmansCorrelation);

        void t_SpearmansCorrelation::install(PyObject *module)
        {
          installType(&PY_TYPE(SpearmansCorrelation), &PY_TYPE_DEF(SpearmansCorrelation), module, "SpearmansCorrelation", 0);
        }

        void t_SpearmansCorrelation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SpearmansCorrelation), "class_", make_descriptor(SpearmansCorrelation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SpearmansCorrelation), "wrapfn_", make_descriptor(t_SpearmansCorrelation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SpearmansCorrelation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SpearmansCorrelation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SpearmansCorrelation::initializeClass, 1)))
            return NULL;
          return t_SpearmansCorrelation::wrap_Object(SpearmansCorrelation(((t_SpearmansCorrelation *) arg)->object.this$));
        }
        static PyObject *t_SpearmansCorrelation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SpearmansCorrelation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SpearmansCorrelation_init_(t_SpearmansCorrelation *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              SpearmansCorrelation object((jobject) NULL);

              INT_CALL(object = SpearmansCorrelation());
              self->object = object;
              break;
            }
           case 1:
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              SpearmansCorrelation object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                INT_CALL(object = SpearmansCorrelation(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::stat::ranking::RankingAlgorithm a0((jobject) NULL);
              SpearmansCorrelation object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::stat::ranking::RankingAlgorithm::initializeClass, &a0))
              {
                INT_CALL(object = SpearmansCorrelation(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              ::org::hipparchus::stat::ranking::RankingAlgorithm a1((jobject) NULL);
              SpearmansCorrelation object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::stat::ranking::RankingAlgorithm::initializeClass, &a0, &a1))
              {
                INT_CALL(object = SpearmansCorrelation(a0, a1));
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

        static PyObject *t_SpearmansCorrelation_computeCorrelationMatrix(t_SpearmansCorrelation *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< JArray< jdouble > > a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

              if (!parseArgs(args, "[[D", &a0))
              {
                OBJ_CALL(result = self->object.computeCorrelationMatrix(a0));
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.computeCorrelationMatrix(a0));
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "computeCorrelationMatrix", args);
          return NULL;
        }

        static PyObject *t_SpearmansCorrelation_correlation(t_SpearmansCorrelation *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.correlation(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "correlation", args);
          return NULL;
        }

        static PyObject *t_SpearmansCorrelation_getCorrelationMatrix(t_SpearmansCorrelation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrelationMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SpearmansCorrelation_getRankCorrelation(t_SpearmansCorrelation *self)
        {
          ::org::hipparchus::stat::correlation::PearsonsCorrelation result((jobject) NULL);
          OBJ_CALL(result = self->object.getRankCorrelation());
          return ::org::hipparchus::stat::correlation::t_PearsonsCorrelation::wrap_Object(result);
        }

        static PyObject *t_SpearmansCorrelation_get__correlationMatrix(t_SpearmansCorrelation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrelationMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SpearmansCorrelation_get__rankCorrelation(t_SpearmansCorrelation *self, void *data)
        {
          ::org::hipparchus::stat::correlation::PearsonsCorrelation value((jobject) NULL);
          OBJ_CALL(value = self->object.getRankCorrelation());
          return ::org::hipparchus::stat::correlation::t_PearsonsCorrelation::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/CycleSlipDetectorResults.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/Frequency.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *CycleSlipDetectorResults::class$ = NULL;
          jmethodID *CycleSlipDetectorResults::mids$ = NULL;
          bool CycleSlipDetectorResults::live$ = false;

          jclass CycleSlipDetectorResults::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/CycleSlipDetectorResults");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getBeginDate_c60f2986f2919a19] = env->getMethodID(cls, "getBeginDate", "(Lorg/orekit/gnss/Frequency;)Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getCycleSlipMap_d6753b7055940a54] = env->getMethodID(cls, "getCycleSlipMap", "()Ljava/util/Map;");
              mids$[mid_getEndDate_c60f2986f2919a19] = env->getMethodID(cls, "getEndDate", "(Lorg/orekit/gnss/Frequency;)Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getSatelliteName_0090f7797e403f43] = env->getMethodID(cls, "getSatelliteName", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::time::AbsoluteDate CycleSlipDetectorResults::getBeginDate(const ::org::orekit::gnss::Frequency & a0) const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getBeginDate_c60f2986f2919a19], a0.this$));
          }

          ::java::util::Map CycleSlipDetectorResults::getCycleSlipMap() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getCycleSlipMap_d6753b7055940a54]));
          }

          ::org::orekit::time::AbsoluteDate CycleSlipDetectorResults::getEndDate(const ::org::orekit::gnss::Frequency & a0) const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEndDate_c60f2986f2919a19], a0.this$));
          }

          ::java::lang::String CycleSlipDetectorResults::getSatelliteName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSatelliteName_0090f7797e403f43]));
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
          static PyObject *t_CycleSlipDetectorResults_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CycleSlipDetectorResults_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CycleSlipDetectorResults_getBeginDate(t_CycleSlipDetectorResults *self, PyObject *arg);
          static PyObject *t_CycleSlipDetectorResults_getCycleSlipMap(t_CycleSlipDetectorResults *self);
          static PyObject *t_CycleSlipDetectorResults_getEndDate(t_CycleSlipDetectorResults *self, PyObject *arg);
          static PyObject *t_CycleSlipDetectorResults_getSatelliteName(t_CycleSlipDetectorResults *self);
          static PyObject *t_CycleSlipDetectorResults_get__cycleSlipMap(t_CycleSlipDetectorResults *self, void *data);
          static PyObject *t_CycleSlipDetectorResults_get__satelliteName(t_CycleSlipDetectorResults *self, void *data);
          static PyGetSetDef t_CycleSlipDetectorResults__fields_[] = {
            DECLARE_GET_FIELD(t_CycleSlipDetectorResults, cycleSlipMap),
            DECLARE_GET_FIELD(t_CycleSlipDetectorResults, satelliteName),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CycleSlipDetectorResults__methods_[] = {
            DECLARE_METHOD(t_CycleSlipDetectorResults, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CycleSlipDetectorResults, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CycleSlipDetectorResults, getBeginDate, METH_O),
            DECLARE_METHOD(t_CycleSlipDetectorResults, getCycleSlipMap, METH_NOARGS),
            DECLARE_METHOD(t_CycleSlipDetectorResults, getEndDate, METH_O),
            DECLARE_METHOD(t_CycleSlipDetectorResults, getSatelliteName, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CycleSlipDetectorResults)[] = {
            { Py_tp_methods, t_CycleSlipDetectorResults__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_CycleSlipDetectorResults__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CycleSlipDetectorResults)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CycleSlipDetectorResults, t_CycleSlipDetectorResults, CycleSlipDetectorResults);

          void t_CycleSlipDetectorResults::install(PyObject *module)
          {
            installType(&PY_TYPE(CycleSlipDetectorResults), &PY_TYPE_DEF(CycleSlipDetectorResults), module, "CycleSlipDetectorResults", 0);
          }

          void t_CycleSlipDetectorResults::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CycleSlipDetectorResults), "class_", make_descriptor(CycleSlipDetectorResults::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CycleSlipDetectorResults), "wrapfn_", make_descriptor(t_CycleSlipDetectorResults::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CycleSlipDetectorResults), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CycleSlipDetectorResults_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CycleSlipDetectorResults::initializeClass, 1)))
              return NULL;
            return t_CycleSlipDetectorResults::wrap_Object(CycleSlipDetectorResults(((t_CycleSlipDetectorResults *) arg)->object.this$));
          }
          static PyObject *t_CycleSlipDetectorResults_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CycleSlipDetectorResults::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CycleSlipDetectorResults_getBeginDate(t_CycleSlipDetectorResults *self, PyObject *arg)
          {
            ::org::orekit::gnss::Frequency a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::gnss::Frequency::initializeClass, &a0, &p0, ::org::orekit::gnss::t_Frequency::parameters_))
            {
              OBJ_CALL(result = self->object.getBeginDate(a0));
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getBeginDate", arg);
            return NULL;
          }

          static PyObject *t_CycleSlipDetectorResults_getCycleSlipMap(t_CycleSlipDetectorResults *self)
          {
            ::java::util::Map result((jobject) NULL);
            OBJ_CALL(result = self->object.getCycleSlipMap());
            return ::java::util::t_Map::wrap_Object(result);
          }

          static PyObject *t_CycleSlipDetectorResults_getEndDate(t_CycleSlipDetectorResults *self, PyObject *arg)
          {
            ::org::orekit::gnss::Frequency a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::gnss::Frequency::initializeClass, &a0, &p0, ::org::orekit::gnss::t_Frequency::parameters_))
            {
              OBJ_CALL(result = self->object.getEndDate(a0));
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getEndDate", arg);
            return NULL;
          }

          static PyObject *t_CycleSlipDetectorResults_getSatelliteName(t_CycleSlipDetectorResults *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatelliteName());
            return j2p(result);
          }

          static PyObject *t_CycleSlipDetectorResults_get__cycleSlipMap(t_CycleSlipDetectorResults *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getCycleSlipMap());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_CycleSlipDetectorResults_get__satelliteName(t_CycleSlipDetectorResults *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatelliteName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/ClockCorrectionsProvider.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSClockElements.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {

          ::java::lang::Class *ClockCorrectionsProvider::class$ = NULL;
          jmethodID *ClockCorrectionsProvider::mids$ = NULL;
          bool ClockCorrectionsProvider::live$ = false;
          ::java::lang::String *ClockCorrectionsProvider::CLOCK_CORRECTIONS = NULL;

          jclass ClockCorrectionsProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/ClockCorrectionsProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_9bcf2172212125cf] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/gnss/data/GNSSClockElements;)V");
              mids$[mid_getAdditionalState_137d7db4f3f987f7] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/SpacecraftState;)[D");
              mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              CLOCK_CORRECTIONS = new ::java::lang::String(env->getStaticObjectField(cls, "CLOCK_CORRECTIONS", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ClockCorrectionsProvider::ClockCorrectionsProvider(const ::org::orekit::propagation::analytical::gnss::data::GNSSClockElements & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9bcf2172212125cf, a0.this$)) {}

          JArray< jdouble > ClockCorrectionsProvider::getAdditionalState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_137d7db4f3f987f7], a0.this$));
          }

          ::java::lang::String ClockCorrectionsProvider::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
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
          static PyObject *t_ClockCorrectionsProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ClockCorrectionsProvider_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ClockCorrectionsProvider_init_(t_ClockCorrectionsProvider *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ClockCorrectionsProvider_getAdditionalState(t_ClockCorrectionsProvider *self, PyObject *arg);
          static PyObject *t_ClockCorrectionsProvider_getName(t_ClockCorrectionsProvider *self);
          static PyObject *t_ClockCorrectionsProvider_get__name(t_ClockCorrectionsProvider *self, void *data);
          static PyGetSetDef t_ClockCorrectionsProvider__fields_[] = {
            DECLARE_GET_FIELD(t_ClockCorrectionsProvider, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ClockCorrectionsProvider__methods_[] = {
            DECLARE_METHOD(t_ClockCorrectionsProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ClockCorrectionsProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ClockCorrectionsProvider, getAdditionalState, METH_O),
            DECLARE_METHOD(t_ClockCorrectionsProvider, getName, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ClockCorrectionsProvider)[] = {
            { Py_tp_methods, t_ClockCorrectionsProvider__methods_ },
            { Py_tp_init, (void *) t_ClockCorrectionsProvider_init_ },
            { Py_tp_getset, t_ClockCorrectionsProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ClockCorrectionsProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ClockCorrectionsProvider, t_ClockCorrectionsProvider, ClockCorrectionsProvider);

          void t_ClockCorrectionsProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(ClockCorrectionsProvider), &PY_TYPE_DEF(ClockCorrectionsProvider), module, "ClockCorrectionsProvider", 0);
          }

          void t_ClockCorrectionsProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ClockCorrectionsProvider), "class_", make_descriptor(ClockCorrectionsProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ClockCorrectionsProvider), "wrapfn_", make_descriptor(t_ClockCorrectionsProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ClockCorrectionsProvider), "boxfn_", make_descriptor(boxObject));
            env->getClass(ClockCorrectionsProvider::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(ClockCorrectionsProvider), "CLOCK_CORRECTIONS", make_descriptor(j2p(*ClockCorrectionsProvider::CLOCK_CORRECTIONS)));
          }

          static PyObject *t_ClockCorrectionsProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ClockCorrectionsProvider::initializeClass, 1)))
              return NULL;
            return t_ClockCorrectionsProvider::wrap_Object(ClockCorrectionsProvider(((t_ClockCorrectionsProvider *) arg)->object.this$));
          }
          static PyObject *t_ClockCorrectionsProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ClockCorrectionsProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ClockCorrectionsProvider_init_(t_ClockCorrectionsProvider *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::propagation::analytical::gnss::data::GNSSClockElements a0((jobject) NULL);
            ClockCorrectionsProvider object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::analytical::gnss::data::GNSSClockElements::initializeClass, &a0))
            {
              INT_CALL(object = ClockCorrectionsProvider(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ClockCorrectionsProvider_getAdditionalState(t_ClockCorrectionsProvider *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getAdditionalState(a0));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "getAdditionalState", arg);
            return NULL;
          }

          static PyObject *t_ClockCorrectionsProvider_getName(t_ClockCorrectionsProvider *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_ClockCorrectionsProvider_get__name(t_ClockCorrectionsProvider *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
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
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
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
              mids$[mid_init_acdd8180a5dc1a8d] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
              mids$[mid_maneuverTriggered_c76342d42407aa3d] = env->getMethodID(cls, "maneuverTriggered", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");
              mids$[mid_resetState_db7b9ef879f5b135] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void FieldManeuverTriggersResetter::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_acdd8180a5dc1a8d], a0.this$, a1.this$);
          }

          void FieldManeuverTriggersResetter::maneuverTriggered(const ::org::orekit::propagation::FieldSpacecraftState & a0, jboolean a1) const
          {
            env->callVoidMethod(this$, mids$[mid_maneuverTriggered_c76342d42407aa3d], a0.this$, a1);
          }

          ::org::orekit::propagation::FieldSpacecraftState FieldManeuverTriggersResetter::resetState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
          {
            return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_resetState_db7b9ef879f5b135], a0.this$));
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
#include "org/orekit/propagation/sampling/MultiSatFixedStepHandler.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
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
            mids$[mid_finish_65de9727799c5641] = env->getMethodID(cls, "finish", "(Ljava/util/List;)V");
            mids$[mid_handleStep_65de9727799c5641] = env->getMethodID(cls, "handleStep", "(Ljava/util/List;)V");
            mids$[mid_init_9519e3ce5d916ce8] = env->getMethodID(cls, "init", "(Ljava/util/List;Lorg/orekit/time/AbsoluteDate;D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void MultiSatFixedStepHandler::finish(const ::java::util::List & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_65de9727799c5641], a0.this$);
        }

        void MultiSatFixedStepHandler::handleStep(const ::java::util::List & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_65de9727799c5641], a0.this$);
        }

        void MultiSatFixedStepHandler::init(const ::java::util::List & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
        {
          env->callVoidMethod(this$, mids$[mid_init_9519e3ce5d916ce8], a0.this$, a1.this$, a2);
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
#include "java/lang/Double.h"
#include "java/lang/Double.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Double::class$ = NULL;
    jmethodID *Double::mids$ = NULL;
    bool Double::live$ = false;
    jint Double::BYTES = (jint) 0;
    jint Double::MAX_EXPONENT = (jint) 0;
    jdouble Double::MAX_VALUE = (jdouble) 0;
    jint Double::MIN_EXPONENT = (jint) 0;
    jdouble Double::MIN_NORMAL = (jdouble) 0;
    jdouble Double::MIN_VALUE = (jdouble) 0;
    jdouble Double::NEGATIVE_INFINITY = (jdouble) 0;
    jdouble Double::NaN = (jdouble) 0;
    jdouble Double::POSITIVE_INFINITY = (jdouble) 0;
    jint Double::SIZE = (jint) 0;
    ::java::lang::Class *Double::TYPE = NULL;

    jclass Double::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Double");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
        mids$[mid_byteValue_1d06dd1980a98d13] = env->getMethodID(cls, "byteValue", "()B");
        mids$[mid_compare_b458a19882af8e74] = env->getStaticMethodID(cls, "compare", "(DD)I");
        mids$[mid_compareTo_94169ab4e956aadb] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Double;)I");
        mids$[mid_doubleToLongBits_7920263ad8deab44] = env->getStaticMethodID(cls, "doubleToLongBits", "(D)J");
        mids$[mid_doubleToRawLongBits_7920263ad8deab44] = env->getStaticMethodID(cls, "doubleToRawLongBits", "(D)J");
        mids$[mid_doubleValue_456d9a2f64d6b28d] = env->getMethodID(cls, "doubleValue", "()D");
        mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_floatValue_966c782d3223854d] = env->getMethodID(cls, "floatValue", "()F");
        mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_hashCode_12ebab281ee35c98] = env->getStaticMethodID(cls, "hashCode", "(D)I");
        mids$[mid_intValue_f2f64475e4580546] = env->getMethodID(cls, "intValue", "()I");
        mids$[mid_isFinite_e18fb1101b70dcca] = env->getStaticMethodID(cls, "isFinite", "(D)Z");
        mids$[mid_isInfinite_e470b6d9e0d979db] = env->getMethodID(cls, "isInfinite", "()Z");
        mids$[mid_isInfinite_e18fb1101b70dcca] = env->getStaticMethodID(cls, "isInfinite", "(D)Z");
        mids$[mid_isNaN_e470b6d9e0d979db] = env->getMethodID(cls, "isNaN", "()Z");
        mids$[mid_isNaN_e18fb1101b70dcca] = env->getStaticMethodID(cls, "isNaN", "(D)Z");
        mids$[mid_longBitsToDouble_4b7bbbdca0346d42] = env->getStaticMethodID(cls, "longBitsToDouble", "(J)D");
        mids$[mid_longValue_a27fc9afd27e559d] = env->getMethodID(cls, "longValue", "()J");
        mids$[mid_max_824133ce4aec3505] = env->getStaticMethodID(cls, "max", "(DD)D");
        mids$[mid_min_824133ce4aec3505] = env->getStaticMethodID(cls, "min", "(DD)D");
        mids$[mid_parseDouble_531dcf669f2059aa] = env->getStaticMethodID(cls, "parseDouble", "(Ljava/lang/String;)D");
        mids$[mid_shortValue_f89720844d790ad7] = env->getMethodID(cls, "shortValue", "()S");
        mids$[mid_sum_824133ce4aec3505] = env->getStaticMethodID(cls, "sum", "(DD)D");
        mids$[mid_toHexString_085bbc49599fa163] = env->getStaticMethodID(cls, "toHexString", "(D)Ljava/lang/String;");
        mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toString_085bbc49599fa163] = env->getStaticMethodID(cls, "toString", "(D)Ljava/lang/String;");
        mids$[mid_valueOf_637389b3c9fb4ab6] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/lang/Double;");
        mids$[mid_valueOf_27ddbebbe82f07ae] = env->getStaticMethodID(cls, "valueOf", "(D)Ljava/lang/Double;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        BYTES = env->getStaticIntField(cls, "BYTES");
        MAX_EXPONENT = env->getStaticIntField(cls, "MAX_EXPONENT");
        MAX_VALUE = env->getStaticDoubleField(cls, "MAX_VALUE");
        MIN_EXPONENT = env->getStaticIntField(cls, "MIN_EXPONENT");
        MIN_NORMAL = env->getStaticDoubleField(cls, "MIN_NORMAL");
        MIN_VALUE = env->getStaticDoubleField(cls, "MIN_VALUE");
        NEGATIVE_INFINITY = env->getStaticDoubleField(cls, "NEGATIVE_INFINITY");
        NaN = env->getStaticDoubleField(cls, "NaN");
        POSITIVE_INFINITY = env->getStaticDoubleField(cls, "POSITIVE_INFINITY");
        SIZE = env->getStaticIntField(cls, "SIZE");
        TYPE = new ::java::lang::Class(env->getStaticObjectField(cls, "TYPE", "Ljava/lang/Class;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Double::Double(const ::java::lang::String & a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

    Double::Double(jdouble a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

    jbyte Double::byteValue() const
    {
      return env->callByteMethod(this$, mids$[mid_byteValue_1d06dd1980a98d13]);
    }

    jint Double::compare(jdouble a0, jdouble a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_b458a19882af8e74], a0, a1);
    }

    jint Double::compareTo(const Double & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_94169ab4e956aadb], a0.this$);
    }

    jlong Double::doubleToLongBits(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_doubleToLongBits_7920263ad8deab44], a0);
    }

    jlong Double::doubleToRawLongBits(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_doubleToRawLongBits_7920263ad8deab44], a0);
    }

    jdouble Double::doubleValue() const
    {
      return env->callDoubleMethod(this$, mids$[mid_doubleValue_456d9a2f64d6b28d]);
    }

    jboolean Double::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
    }

    jfloat Double::floatValue() const
    {
      return env->callFloatMethod(this$, mids$[mid_floatValue_966c782d3223854d]);
    }

    jint Double::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
    }

    jint Double::hashCode(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_12ebab281ee35c98], a0);
    }

    jint Double::intValue() const
    {
      return env->callIntMethod(this$, mids$[mid_intValue_f2f64475e4580546]);
    }

    jboolean Double::isFinite(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isFinite_e18fb1101b70dcca], a0);
    }

    jboolean Double::isInfinite() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isInfinite_e470b6d9e0d979db]);
    }

    jboolean Double::isInfinite(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isInfinite_e18fb1101b70dcca], a0);
    }

    jboolean Double::isNaN() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isNaN_e470b6d9e0d979db]);
    }

    jboolean Double::isNaN(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isNaN_e18fb1101b70dcca], a0);
    }

    jdouble Double::longBitsToDouble(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticDoubleMethod(cls, mids$[mid_longBitsToDouble_4b7bbbdca0346d42], a0);
    }

    jlong Double::longValue() const
    {
      return env->callLongMethod(this$, mids$[mid_longValue_a27fc9afd27e559d]);
    }

    jdouble Double::max$(jdouble a0, jdouble a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticDoubleMethod(cls, mids$[mid_max_824133ce4aec3505], a0, a1);
    }

    jdouble Double::min$(jdouble a0, jdouble a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticDoubleMethod(cls, mids$[mid_min_824133ce4aec3505], a0, a1);
    }

    jdouble Double::parseDouble(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticDoubleMethod(cls, mids$[mid_parseDouble_531dcf669f2059aa], a0.this$);
    }

    jshort Double::shortValue() const
    {
      return env->callShortMethod(this$, mids$[mid_shortValue_f89720844d790ad7]);
    }

    jdouble Double::sum(jdouble a0, jdouble a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticDoubleMethod(cls, mids$[mid_sum_824133ce4aec3505], a0, a1);
    }

    ::java::lang::String Double::toHexString(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toHexString_085bbc49599fa163], a0));
    }

    ::java::lang::String Double::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
    }

    ::java::lang::String Double::toString(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_085bbc49599fa163], a0));
    }

    Double Double::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Double(env->callStaticObjectMethod(cls, mids$[mid_valueOf_637389b3c9fb4ab6], a0.this$));
    }

    Double Double::valueOf(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Double(env->callStaticObjectMethod(cls, mids$[mid_valueOf_27ddbebbe82f07ae], a0));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Double_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Double_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Double_init_(t_Double *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Double_byteValue(t_Double *self, PyObject *args);
    static PyObject *t_Double_compare(PyTypeObject *type, PyObject *args);
    static PyObject *t_Double_compareTo(t_Double *self, PyObject *arg);
    static PyObject *t_Double_doubleToLongBits(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Double_doubleToRawLongBits(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Double_doubleValue(t_Double *self, PyObject *args);
    static PyObject *t_Double_equals(t_Double *self, PyObject *args);
    static PyObject *t_Double_floatValue(t_Double *self, PyObject *args);
    static PyObject *t_Double_hashCode(t_Double *self, PyObject *args);
    static PyObject *t_Double_hashCode_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Double_intValue(t_Double *self, PyObject *args);
    static PyObject *t_Double_isFinite(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Double_isInfinite(t_Double *self);
    static PyObject *t_Double_isInfinite_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Double_isNaN(t_Double *self);
    static PyObject *t_Double_isNaN_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Double_longBitsToDouble(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Double_longValue(t_Double *self, PyObject *args);
    static PyObject *t_Double_max(PyTypeObject *type, PyObject *args);
    static PyObject *t_Double_min(PyTypeObject *type, PyObject *args);
    static PyObject *t_Double_parseDouble(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Double_shortValue(t_Double *self, PyObject *args);
    static PyObject *t_Double_sum(PyTypeObject *type, PyObject *args);
    static PyObject *t_Double_toHexString(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Double_toString(t_Double *self, PyObject *args);
    static PyObject *t_Double_toString_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Double_valueOf(PyTypeObject *type, PyObject *args);
    static PyObject *t_Double_get__infinite(t_Double *self, void *data);
    static PyObject *t_Double_get__naN(t_Double *self, void *data);
    static PyGetSetDef t_Double__fields_[] = {
      DECLARE_GET_FIELD(t_Double, infinite),
      DECLARE_GET_FIELD(t_Double, naN),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Double__methods_[] = {
      DECLARE_METHOD(t_Double, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, byteValue, METH_VARARGS),
      DECLARE_METHOD(t_Double, compare, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Double, compareTo, METH_O),
      DECLARE_METHOD(t_Double, doubleToLongBits, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, doubleToRawLongBits, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, doubleValue, METH_VARARGS),
      DECLARE_METHOD(t_Double, equals, METH_VARARGS),
      DECLARE_METHOD(t_Double, floatValue, METH_VARARGS),
      DECLARE_METHOD(t_Double, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Double, hashCode_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, intValue, METH_VARARGS),
      DECLARE_METHOD(t_Double, isFinite, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, isInfinite, METH_NOARGS),
      DECLARE_METHOD(t_Double, isInfinite_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, isNaN, METH_NOARGS),
      DECLARE_METHOD(t_Double, isNaN_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, longBitsToDouble, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, longValue, METH_VARARGS),
      DECLARE_METHOD(t_Double, max, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Double, min, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Double, parseDouble, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, shortValue, METH_VARARGS),
      DECLARE_METHOD(t_Double, sum, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Double, toHexString, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, toString, METH_VARARGS),
      DECLARE_METHOD(t_Double, toString_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Double, valueOf, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Double)[] = {
      { Py_tp_methods, t_Double__methods_ },
      { Py_tp_init, (void *) t_Double_init_ },
      { Py_tp_getset, t_Double__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Double)[] = {
      &PY_TYPE_DEF(::java::lang::Number),
      NULL
    };

    DEFINE_TYPE(Double, t_Double, Double);

    void t_Double::install(PyObject *module)
    {
      installType(&PY_TYPE(Double), &PY_TYPE_DEF(Double), module, "Double", 0);
    }

    void t_Double::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "class_", make_descriptor(Double::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "wrapfn_", make_descriptor(unboxDouble));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "boxfn_", make_descriptor(boxDouble));
      env->getClass(Double::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "BYTES", make_descriptor(Double::BYTES));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "MAX_EXPONENT", make_descriptor(Double::MAX_EXPONENT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "MAX_VALUE", make_descriptor(Double::MAX_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "MIN_EXPONENT", make_descriptor(Double::MIN_EXPONENT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "MIN_NORMAL", make_descriptor(Double::MIN_NORMAL));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "MIN_VALUE", make_descriptor(Double::MIN_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "NEGATIVE_INFINITY", make_descriptor(Double::NEGATIVE_INFINITY));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "NaN", make_descriptor(Double::NaN));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "POSITIVE_INFINITY", make_descriptor(Double::POSITIVE_INFINITY));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "SIZE", make_descriptor(Double::SIZE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Double), "TYPE", make_descriptor(::java::lang::t_Class::wrap_Object(*Double::TYPE)));
    }

    static PyObject *t_Double_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Double::initializeClass, 1)))
        return NULL;
      return t_Double::wrap_Object(Double(((t_Double *) arg)->object.this$));
    }
    static PyObject *t_Double_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Double::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Double_init_(t_Double *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Double object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Double(a0));
            self->object = object;
            break;
          }
        }
        {
          jdouble a0;
          Double object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = Double(a0));
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

    static PyObject *t_Double_byteValue(t_Double *self, PyObject *args)
    {
      jbyte result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.byteValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Double), (PyObject *) self, "byteValue", args, 2);
    }

    static PyObject *t_Double_compare(PyTypeObject *type, PyObject *args)
    {
      jdouble a0;
      jdouble a1;
      jint result;

      if (!parseArgs(args, "DD", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Double::compare(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compare", args);
      return NULL;
    }

    static PyObject *t_Double_compareTo(t_Double *self, PyObject *arg)
    {
      Double a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "O", ::java::lang::PY_TYPE(Double), &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_Double_doubleToLongBits(PyTypeObject *type, PyObject *arg)
    {
      jdouble a0;
      jlong result;

      if (!parseArg(arg, "D", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::doubleToLongBits(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "doubleToLongBits", arg);
      return NULL;
    }

    static PyObject *t_Double_doubleToRawLongBits(PyTypeObject *type, PyObject *arg)
    {
      jdouble a0;
      jlong result;

      if (!parseArg(arg, "D", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::doubleToRawLongBits(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "doubleToRawLongBits", arg);
      return NULL;
    }

    static PyObject *t_Double_doubleValue(t_Double *self, PyObject *args)
    {
      jdouble result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.doubleValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Double), (PyObject *) self, "doubleValue", args, 2);
    }

    static PyObject *t_Double_equals(t_Double *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Double), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Double_floatValue(t_Double *self, PyObject *args)
    {
      jfloat result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.floatValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Double), (PyObject *) self, "floatValue", args, 2);
    }

    static PyObject *t_Double_hashCode(t_Double *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Double), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Double_hashCode_(PyTypeObject *type, PyObject *args)
    {
      jdouble a0;
      jint result;

      if (!parseArgs(args, "D", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::hashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "hashCode_", args);
      return NULL;
    }

    static PyObject *t_Double_intValue(t_Double *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.intValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Double), (PyObject *) self, "intValue", args, 2);
    }

    static PyObject *t_Double_isFinite(PyTypeObject *type, PyObject *arg)
    {
      jdouble a0;
      jboolean result;

      if (!parseArg(arg, "D", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::isFinite(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isFinite", arg);
      return NULL;
    }

    static PyObject *t_Double_isInfinite(t_Double *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isInfinite());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Double_isInfinite_(PyTypeObject *type, PyObject *arg)
    {
      jdouble a0;
      jboolean result;

      if (!parseArg(arg, "D", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::isInfinite(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isInfinite_", arg);
      return NULL;
    }

    static PyObject *t_Double_isNaN(t_Double *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isNaN());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Double_isNaN_(PyTypeObject *type, PyObject *arg)
    {
      jdouble a0;
      jboolean result;

      if (!parseArg(arg, "D", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::isNaN(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isNaN_", arg);
      return NULL;
    }

    static PyObject *t_Double_longBitsToDouble(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      jdouble result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::longBitsToDouble(a0));
        return PyFloat_FromDouble((double) result);
      }

      PyErr_SetArgsError(type, "longBitsToDouble", arg);
      return NULL;
    }

    static PyObject *t_Double_longValue(t_Double *self, PyObject *args)
    {
      jlong result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.longValue());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      return callSuper(PY_TYPE(Double), (PyObject *) self, "longValue", args, 2);
    }

    static PyObject *t_Double_max(PyTypeObject *type, PyObject *args)
    {
      jdouble a0;
      jdouble a1;
      jdouble result;

      if (!parseArgs(args, "DD", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Double::max$(a0, a1));
        return PyFloat_FromDouble((double) result);
      }

      PyErr_SetArgsError(type, "max", args);
      return NULL;
    }

    static PyObject *t_Double_min(PyTypeObject *type, PyObject *args)
    {
      jdouble a0;
      jdouble a1;
      jdouble result;

      if (!parseArgs(args, "DD", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Double::min$(a0, a1));
        return PyFloat_FromDouble((double) result);
      }

      PyErr_SetArgsError(type, "min", args);
      return NULL;
    }

    static PyObject *t_Double_parseDouble(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      jdouble result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::parseDouble(a0));
        return PyFloat_FromDouble((double) result);
      }

      PyErr_SetArgsError(type, "parseDouble", arg);
      return NULL;
    }

    static PyObject *t_Double_shortValue(t_Double *self, PyObject *args)
    {
      jshort result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.shortValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Double), (PyObject *) self, "shortValue", args, 2);
    }

    static PyObject *t_Double_sum(PyTypeObject *type, PyObject *args)
    {
      jdouble a0;
      jdouble a1;
      jdouble result;

      if (!parseArgs(args, "DD", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Double::sum(a0, a1));
        return PyFloat_FromDouble((double) result);
      }

      PyErr_SetArgsError(type, "sum", args);
      return NULL;
    }

    static PyObject *t_Double_toHexString(PyTypeObject *type, PyObject *arg)
    {
      jdouble a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "D", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::toHexString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toHexString", arg);
      return NULL;
    }

    static PyObject *t_Double_toString(t_Double *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Double), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Double_toString_(PyTypeObject *type, PyObject *args)
    {
      jdouble a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, "D", &a0))
      {
        OBJ_CALL(result = ::java::lang::Double::toString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toString_", args);
      return NULL;
    }

    static PyObject *t_Double_valueOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Double result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Double::valueOf(a0));
            return t_Double::wrap_Object(result);
          }
        }
        {
          jdouble a0;
          Double result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = ::java::lang::Double::valueOf(a0));
            return t_Double::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "valueOf", args);
      return NULL;
    }

    static PyObject *t_Double_get__infinite(t_Double *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isInfinite());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Double_get__naN(t_Double *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isNaN());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sinex/Dcb.h"
#include "org/orekit/gnss/ObservationType.h"
#include "java/util/HashSet.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/util/Pair.h"
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
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addDcbLine_0c5b45c2d14b8033] = env->getMethodID(cls, "addDcbLine", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;D)V");
            mids$[mid_getAvailableObservationPairs_22daa3e0ba65a6b7] = env->getMethodID(cls, "getAvailableObservationPairs", "()Ljava/util/HashSet;");
            mids$[mid_getDcb_17a39db9f850590b] = env->getMethodID(cls, "getDcb", "(Lorg/orekit/gnss/ObservationType;Lorg/orekit/gnss/ObservationType;Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getDcb_81cde50cf4f9dfd5] = env->getMethodID(cls, "getDcb", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getMaximumValidDateForObservationPair_26e5de0fefb7beed] = env->getMethodID(cls, "getMaximumValidDateForObservationPair", "(Lorg/orekit/gnss/ObservationType;Lorg/orekit/gnss/ObservationType;)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMaximumValidDateForObservationPair_011c5e51b9c14cac] = env->getMethodID(cls, "getMaximumValidDateForObservationPair", "(Ljava/lang/String;Ljava/lang/String;)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMinimumValidDateForObservationPair_26e5de0fefb7beed] = env->getMethodID(cls, "getMinimumValidDateForObservationPair", "(Lorg/orekit/gnss/ObservationType;Lorg/orekit/gnss/ObservationType;)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMinimumValidDateForObservationPair_011c5e51b9c14cac] = env->getMethodID(cls, "getMinimumValidDateForObservationPair", "(Ljava/lang/String;Ljava/lang/String;)Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Dcb::Dcb() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void Dcb::addDcbLine(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::time::AbsoluteDate & a3, jdouble a4) const
        {
          env->callVoidMethod(this$, mids$[mid_addDcbLine_0c5b45c2d14b8033], a0.this$, a1.this$, a2.this$, a3.this$, a4);
        }

        ::java::util::HashSet Dcb::getAvailableObservationPairs() const
        {
          return ::java::util::HashSet(env->callObjectMethod(this$, mids$[mid_getAvailableObservationPairs_22daa3e0ba65a6b7]));
        }

        jdouble Dcb::getDcb(const ::org::orekit::gnss::ObservationType & a0, const ::org::orekit::gnss::ObservationType & a1, const ::org::orekit::time::AbsoluteDate & a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDcb_17a39db9f850590b], a0.this$, a1.this$, a2.this$);
        }

        jdouble Dcb::getDcb(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::time::AbsoluteDate & a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDcb_81cde50cf4f9dfd5], a0.this$, a1.this$, a2.this$);
        }

        ::org::orekit::time::AbsoluteDate Dcb::getMaximumValidDateForObservationPair(const ::org::orekit::gnss::ObservationType & a0, const ::org::orekit::gnss::ObservationType & a1) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaximumValidDateForObservationPair_26e5de0fefb7beed], a0.this$, a1.this$));
        }

        ::org::orekit::time::AbsoluteDate Dcb::getMaximumValidDateForObservationPair(const ::java::lang::String & a0, const ::java::lang::String & a1) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaximumValidDateForObservationPair_011c5e51b9c14cac], a0.this$, a1.this$));
        }

        ::org::orekit::time::AbsoluteDate Dcb::getMinimumValidDateForObservationPair(const ::org::orekit::gnss::ObservationType & a0, const ::org::orekit::gnss::ObservationType & a1) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinimumValidDateForObservationPair_26e5de0fefb7beed], a0.this$, a1.this$));
        }

        ::org::orekit::time::AbsoluteDate Dcb::getMinimumValidDateForObservationPair(const ::java::lang::String & a0, const ::java::lang::String & a1) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinimumValidDateForObservationPair_011c5e51b9c14cac], a0.this$, a1.this$));
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
