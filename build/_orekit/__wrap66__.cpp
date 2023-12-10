#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgmMessage.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgmHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgmMessage::class$ = NULL;
              jmethodID *SsrIgmMessage::mids$ = NULL;
              bool SsrIgmMessage::live$ = false;

              jclass SsrIgmMessage::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgmMessage");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_f739b616ad00309d] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/metric/messages/ssr/igm/SsrIgmHeader;Ljava/util/List;)V");
                  mids$[mid_getSatelliteSystem_01acae5c1a253b8e] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgmMessage::SsrIgmMessage(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader & a2, const ::java::util::List & a3) : ::org::orekit::gnss::metric::messages::ssr::SsrMessage(env->newObject(initializeClass, &mids$, mid_init$_f739b616ad00309d, a0, a1.this$, a2.this$, a3.this$)) {}

              ::org::orekit::gnss::SatelliteSystem SsrIgmMessage::getSatelliteSystem() const
              {
                return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_01acae5c1a253b8e]));
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
              static PyObject *t_SsrIgmMessage_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgmMessage_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgmMessage_of_(t_SsrIgmMessage *self, PyObject *args);
              static int t_SsrIgmMessage_init_(t_SsrIgmMessage *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgmMessage_getSatelliteSystem(t_SsrIgmMessage *self);
              static PyObject *t_SsrIgmMessage_get__satelliteSystem(t_SsrIgmMessage *self, void *data);
              static PyObject *t_SsrIgmMessage_get__parameters_(t_SsrIgmMessage *self, void *data);
              static PyGetSetDef t_SsrIgmMessage__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIgmMessage, satelliteSystem),
                DECLARE_GET_FIELD(t_SsrIgmMessage, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgmMessage__methods_[] = {
                DECLARE_METHOD(t_SsrIgmMessage, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgmMessage, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgmMessage, of_, METH_VARARGS),
                DECLARE_METHOD(t_SsrIgmMessage, getSatelliteSystem, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgmMessage)[] = {
                { Py_tp_methods, t_SsrIgmMessage__methods_ },
                { Py_tp_init, (void *) t_SsrIgmMessage_init_ },
                { Py_tp_getset, t_SsrIgmMessage__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgmMessage)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::SsrMessage),
                NULL
              };

              DEFINE_TYPE(SsrIgmMessage, t_SsrIgmMessage, SsrIgmMessage);
              PyObject *t_SsrIgmMessage::wrap_Object(const SsrIgmMessage& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgmMessage::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgmMessage *self = (t_SsrIgmMessage *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_SsrIgmMessage::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgmMessage::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgmMessage *self = (t_SsrIgmMessage *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_SsrIgmMessage::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgmMessage), &PY_TYPE_DEF(SsrIgmMessage), module, "SsrIgmMessage", 0);
              }

              void t_SsrIgmMessage::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgmMessage), "class_", make_descriptor(SsrIgmMessage::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgmMessage), "wrapfn_", make_descriptor(t_SsrIgmMessage::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgmMessage), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgmMessage_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgmMessage::initializeClass, 1)))
                  return NULL;
                return t_SsrIgmMessage::wrap_Object(SsrIgmMessage(((t_SsrIgmMessage *) arg)->object.this$));
              }
              static PyObject *t_SsrIgmMessage_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgmMessage::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_SsrIgmMessage_of_(t_SsrIgmMessage *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_SsrIgmMessage_init_(t_SsrIgmMessage *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader a2((jobject) NULL);
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                SsrIgmMessage object((jobject) NULL);

                if (!parseArgs(args, "IKkK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = SsrIgmMessage(a0, a1, a2, a3));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_SsrIgmMessage_getSatelliteSystem(t_SsrIgmMessage *self)
              {
                ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
                OBJ_CALL(result = self->object.getSatelliteSystem());
                return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
              }
              static PyObject *t_SsrIgmMessage_get__parameters_(t_SsrIgmMessage *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_SsrIgmMessage_get__satelliteSystem(t_SsrIgmMessage *self, void *data)
              {
                ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
                OBJ_CALL(value = self->object.getSatelliteSystem());
                return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
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
#include "org/orekit/files/ccsds/ndm/odm/UserDefined.h"
#include "java/util/Map.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *UserDefined::class$ = NULL;
            jmethodID *UserDefined::mids$ = NULL;
            bool UserDefined::live$ = false;
            ::java::lang::String *UserDefined::USER_DEFINED_PREFIX = NULL;
            ::java::lang::String *UserDefined::USER_DEFINED_XML_ATTRIBUTE = NULL;
            ::java::lang::String *UserDefined::USER_DEFINED_XML_TAG = NULL;

            jclass UserDefined::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/UserDefined");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_addEntry_6a2001eff0605f71] = env->getMethodID(cls, "addEntry", "(Ljava/lang/String;Ljava/lang/String;)V");
                mids$[mid_getParameters_6f5a75ccd8c04465] = env->getMethodID(cls, "getParameters", "()Ljava/util/Map;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                USER_DEFINED_PREFIX = new ::java::lang::String(env->getStaticObjectField(cls, "USER_DEFINED_PREFIX", "Ljava/lang/String;"));
                USER_DEFINED_XML_ATTRIBUTE = new ::java::lang::String(env->getStaticObjectField(cls, "USER_DEFINED_XML_ATTRIBUTE", "Ljava/lang/String;"));
                USER_DEFINED_XML_TAG = new ::java::lang::String(env->getStaticObjectField(cls, "USER_DEFINED_XML_TAG", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            UserDefined::UserDefined() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            void UserDefined::addEntry(const ::java::lang::String & a0, const ::java::lang::String & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_addEntry_6a2001eff0605f71], a0.this$, a1.this$);
            }

            ::java::util::Map UserDefined::getParameters() const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getParameters_6f5a75ccd8c04465]));
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
            static PyObject *t_UserDefined_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_UserDefined_instance_(PyTypeObject *type, PyObject *arg);
            static int t_UserDefined_init_(t_UserDefined *self, PyObject *args, PyObject *kwds);
            static PyObject *t_UserDefined_addEntry(t_UserDefined *self, PyObject *args);
            static PyObject *t_UserDefined_getParameters(t_UserDefined *self);
            static PyObject *t_UserDefined_get__parameters(t_UserDefined *self, void *data);
            static PyGetSetDef t_UserDefined__fields_[] = {
              DECLARE_GET_FIELD(t_UserDefined, parameters),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_UserDefined__methods_[] = {
              DECLARE_METHOD(t_UserDefined, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_UserDefined, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_UserDefined, addEntry, METH_VARARGS),
              DECLARE_METHOD(t_UserDefined, getParameters, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(UserDefined)[] = {
              { Py_tp_methods, t_UserDefined__methods_ },
              { Py_tp_init, (void *) t_UserDefined_init_ },
              { Py_tp_getset, t_UserDefined__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(UserDefined)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(UserDefined, t_UserDefined, UserDefined);

            void t_UserDefined::install(PyObject *module)
            {
              installType(&PY_TYPE(UserDefined), &PY_TYPE_DEF(UserDefined), module, "UserDefined", 0);
            }

            void t_UserDefined::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefined), "class_", make_descriptor(UserDefined::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefined), "wrapfn_", make_descriptor(t_UserDefined::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefined), "boxfn_", make_descriptor(boxObject));
              env->getClass(UserDefined::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefined), "USER_DEFINED_PREFIX", make_descriptor(j2p(*UserDefined::USER_DEFINED_PREFIX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefined), "USER_DEFINED_XML_ATTRIBUTE", make_descriptor(j2p(*UserDefined::USER_DEFINED_XML_ATTRIBUTE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefined), "USER_DEFINED_XML_TAG", make_descriptor(j2p(*UserDefined::USER_DEFINED_XML_TAG)));
            }

            static PyObject *t_UserDefined_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, UserDefined::initializeClass, 1)))
                return NULL;
              return t_UserDefined::wrap_Object(UserDefined(((t_UserDefined *) arg)->object.this$));
            }
            static PyObject *t_UserDefined_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, UserDefined::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_UserDefined_init_(t_UserDefined *self, PyObject *args, PyObject *kwds)
            {
              UserDefined object((jobject) NULL);

              INT_CALL(object = UserDefined());
              self->object = object;

              return 0;
            }

            static PyObject *t_UserDefined_addEntry(t_UserDefined *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);

              if (!parseArgs(args, "ss", &a0, &a1))
              {
                OBJ_CALL(self->object.addEntry(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "addEntry", args);
              return NULL;
            }

            static PyObject *t_UserDefined_getParameters(t_UserDefined *self)
            {
              ::java::util::Map result((jobject) NULL);
              OBJ_CALL(result = self->object.getParameters());
              return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::java::lang::PY_TYPE(String));
            }

            static PyObject *t_UserDefined_get__parameters(t_UserDefined *self, void *data)
            {
              ::java::util::Map value((jobject) NULL);
              OBJ_CALL(value = self->object.getParameters());
              return ::java::util::t_Map::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/vector/VectorialStorelessStatistic.h"
#include "org/hipparchus/stat/descriptive/StorelessMultivariateStatistic.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/descriptive/StorelessUnivariateStatistic.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace vector {

          ::java::lang::Class *VectorialStorelessStatistic::class$ = NULL;
          jmethodID *VectorialStorelessStatistic::mids$ = NULL;
          bool VectorialStorelessStatistic::live$ = false;

          jclass VectorialStorelessStatistic::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/vector/VectorialStorelessStatistic");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_9e70572d4f37e6cf] = env->getMethodID(cls, "<init>", "(ILorg/hipparchus/stat/descriptive/StorelessUnivariateStatistic;)V");
              mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_getDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getDimension", "()I");
              mids$[mid_getN_492808a339bfa35f] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_60c7040667a7dc5c] = env->getMethodID(cls, "getResult", "()[D");
              mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_increment_fa9d415d19f69361] = env->getMethodID(cls, "increment", "([D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          VectorialStorelessStatistic::VectorialStorelessStatistic(jint a0, const ::org::hipparchus::stat::descriptive::StorelessUnivariateStatistic & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9e70572d4f37e6cf, a0, a1.this$)) {}

          void VectorialStorelessStatistic::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
          }

          jboolean VectorialStorelessStatistic::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
          }

          jint VectorialStorelessStatistic::getDimension() const
          {
            return env->callIntMethod(this$, mids$[mid_getDimension_570ce0828f81a2c1]);
          }

          jlong VectorialStorelessStatistic::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_492808a339bfa35f]);
          }

          JArray< jdouble > VectorialStorelessStatistic::getResult() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getResult_60c7040667a7dc5c]));
          }

          jint VectorialStorelessStatistic::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
          }

          void VectorialStorelessStatistic::increment(const JArray< jdouble > & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_fa9d415d19f69361], a0.this$);
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
        namespace vector {
          static PyObject *t_VectorialStorelessStatistic_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_VectorialStorelessStatistic_instance_(PyTypeObject *type, PyObject *arg);
          static int t_VectorialStorelessStatistic_init_(t_VectorialStorelessStatistic *self, PyObject *args, PyObject *kwds);
          static PyObject *t_VectorialStorelessStatistic_clear(t_VectorialStorelessStatistic *self);
          static PyObject *t_VectorialStorelessStatistic_equals(t_VectorialStorelessStatistic *self, PyObject *args);
          static PyObject *t_VectorialStorelessStatistic_getDimension(t_VectorialStorelessStatistic *self);
          static PyObject *t_VectorialStorelessStatistic_getN(t_VectorialStorelessStatistic *self);
          static PyObject *t_VectorialStorelessStatistic_getResult(t_VectorialStorelessStatistic *self);
          static PyObject *t_VectorialStorelessStatistic_hashCode(t_VectorialStorelessStatistic *self, PyObject *args);
          static PyObject *t_VectorialStorelessStatistic_increment(t_VectorialStorelessStatistic *self, PyObject *arg);
          static PyObject *t_VectorialStorelessStatistic_get__dimension(t_VectorialStorelessStatistic *self, void *data);
          static PyObject *t_VectorialStorelessStatistic_get__n(t_VectorialStorelessStatistic *self, void *data);
          static PyObject *t_VectorialStorelessStatistic_get__result(t_VectorialStorelessStatistic *self, void *data);
          static PyGetSetDef t_VectorialStorelessStatistic__fields_[] = {
            DECLARE_GET_FIELD(t_VectorialStorelessStatistic, dimension),
            DECLARE_GET_FIELD(t_VectorialStorelessStatistic, n),
            DECLARE_GET_FIELD(t_VectorialStorelessStatistic, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_VectorialStorelessStatistic__methods_[] = {
            DECLARE_METHOD(t_VectorialStorelessStatistic, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_VectorialStorelessStatistic, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_VectorialStorelessStatistic, clear, METH_NOARGS),
            DECLARE_METHOD(t_VectorialStorelessStatistic, equals, METH_VARARGS),
            DECLARE_METHOD(t_VectorialStorelessStatistic, getDimension, METH_NOARGS),
            DECLARE_METHOD(t_VectorialStorelessStatistic, getN, METH_NOARGS),
            DECLARE_METHOD(t_VectorialStorelessStatistic, getResult, METH_NOARGS),
            DECLARE_METHOD(t_VectorialStorelessStatistic, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_VectorialStorelessStatistic, increment, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(VectorialStorelessStatistic)[] = {
            { Py_tp_methods, t_VectorialStorelessStatistic__methods_ },
            { Py_tp_init, (void *) t_VectorialStorelessStatistic_init_ },
            { Py_tp_getset, t_VectorialStorelessStatistic__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(VectorialStorelessStatistic)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(VectorialStorelessStatistic, t_VectorialStorelessStatistic, VectorialStorelessStatistic);

          void t_VectorialStorelessStatistic::install(PyObject *module)
          {
            installType(&PY_TYPE(VectorialStorelessStatistic), &PY_TYPE_DEF(VectorialStorelessStatistic), module, "VectorialStorelessStatistic", 0);
          }

          void t_VectorialStorelessStatistic::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(VectorialStorelessStatistic), "class_", make_descriptor(VectorialStorelessStatistic::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(VectorialStorelessStatistic), "wrapfn_", make_descriptor(t_VectorialStorelessStatistic::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(VectorialStorelessStatistic), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_VectorialStorelessStatistic_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, VectorialStorelessStatistic::initializeClass, 1)))
              return NULL;
            return t_VectorialStorelessStatistic::wrap_Object(VectorialStorelessStatistic(((t_VectorialStorelessStatistic *) arg)->object.this$));
          }
          static PyObject *t_VectorialStorelessStatistic_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, VectorialStorelessStatistic::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_VectorialStorelessStatistic_init_(t_VectorialStorelessStatistic *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            ::org::hipparchus::stat::descriptive::StorelessUnivariateStatistic a1((jobject) NULL);
            VectorialStorelessStatistic object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::hipparchus::stat::descriptive::StorelessUnivariateStatistic::initializeClass, &a0, &a1))
            {
              INT_CALL(object = VectorialStorelessStatistic(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_VectorialStorelessStatistic_clear(t_VectorialStorelessStatistic *self)
          {
            OBJ_CALL(self->object.clear());
            Py_RETURN_NONE;
          }

          static PyObject *t_VectorialStorelessStatistic_equals(t_VectorialStorelessStatistic *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(VectorialStorelessStatistic), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_VectorialStorelessStatistic_getDimension(t_VectorialStorelessStatistic *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDimension());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_VectorialStorelessStatistic_getN(t_VectorialStorelessStatistic *self)
          {
            jlong result;
            OBJ_CALL(result = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }

          static PyObject *t_VectorialStorelessStatistic_getResult(t_VectorialStorelessStatistic *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getResult());
            return result.wrap();
          }

          static PyObject *t_VectorialStorelessStatistic_hashCode(t_VectorialStorelessStatistic *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(VectorialStorelessStatistic), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_VectorialStorelessStatistic_increment(t_VectorialStorelessStatistic *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "increment", arg);
            return NULL;
          }

          static PyObject *t_VectorialStorelessStatistic_get__dimension(t_VectorialStorelessStatistic *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDimension());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_VectorialStorelessStatistic_get__n(t_VectorialStorelessStatistic *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_VectorialStorelessStatistic_get__result(t_VectorialStorelessStatistic *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getResult());
            return value.wrap();
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmHeader.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *TdmHeader::class$ = NULL;
            jmethodID *TdmHeader::mids$ = NULL;
            bool TdmHeader::live$ = false;

            jclass TdmHeader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/TdmHeader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            TdmHeader::TdmHeader() : ::org::orekit::files::ccsds::section::Header(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}
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
            static PyObject *t_TdmHeader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmHeader_instance_(PyTypeObject *type, PyObject *arg);
            static int t_TdmHeader_init_(t_TdmHeader *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_TdmHeader__methods_[] = {
              DECLARE_METHOD(t_TdmHeader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmHeader, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TdmHeader)[] = {
              { Py_tp_methods, t_TdmHeader__methods_ },
              { Py_tp_init, (void *) t_TdmHeader_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TdmHeader)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Header),
              NULL
            };

            DEFINE_TYPE(TdmHeader, t_TdmHeader, TdmHeader);

            void t_TdmHeader::install(PyObject *module)
            {
              installType(&PY_TYPE(TdmHeader), &PY_TYPE_DEF(TdmHeader), module, "TdmHeader", 0);
            }

            void t_TdmHeader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmHeader), "class_", make_descriptor(TdmHeader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmHeader), "wrapfn_", make_descriptor(t_TdmHeader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmHeader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_TdmHeader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TdmHeader::initializeClass, 1)))
                return NULL;
              return t_TdmHeader::wrap_Object(TdmHeader(((t_TdmHeader *) arg)->object.this$));
            }
            static PyObject *t_TdmHeader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TdmHeader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_TdmHeader_init_(t_TdmHeader *self, PyObject *args, PyObject *kwds)
            {
              TdmHeader object((jobject) NULL);

              INT_CALL(object = TdmHeader());
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
#include "org/orekit/forces/maneuvers/propulsion/ConstantThrustDirectionProvider.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustDirectionProvider.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *ConstantThrustDirectionProvider::class$ = NULL;
          jmethodID *ConstantThrustDirectionProvider::mids$ = NULL;
          bool ConstantThrustDirectionProvider::live$ = false;

          jclass ConstantThrustDirectionProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/ConstantThrustDirectionProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_029ff0cbf68ea054] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_computeThrustDirection_35628cd92ea82231] = env->getMethodID(cls, "computeThrustDirection", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ConstantThrustDirectionProvider::ConstantThrustDirectionProvider(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_029ff0cbf68ea054, a0.this$)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ConstantThrustDirectionProvider::computeThrustDirection(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_computeThrustDirection_35628cd92ea82231], a0.this$, a1.this$, a2.this$));
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
          static PyObject *t_ConstantThrustDirectionProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ConstantThrustDirectionProvider_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ConstantThrustDirectionProvider_init_(t_ConstantThrustDirectionProvider *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ConstantThrustDirectionProvider_computeThrustDirection(t_ConstantThrustDirectionProvider *self, PyObject *args);

          static PyMethodDef t_ConstantThrustDirectionProvider__methods_[] = {
            DECLARE_METHOD(t_ConstantThrustDirectionProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ConstantThrustDirectionProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ConstantThrustDirectionProvider, computeThrustDirection, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ConstantThrustDirectionProvider)[] = {
            { Py_tp_methods, t_ConstantThrustDirectionProvider__methods_ },
            { Py_tp_init, (void *) t_ConstantThrustDirectionProvider_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ConstantThrustDirectionProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ConstantThrustDirectionProvider, t_ConstantThrustDirectionProvider, ConstantThrustDirectionProvider);

          void t_ConstantThrustDirectionProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(ConstantThrustDirectionProvider), &PY_TYPE_DEF(ConstantThrustDirectionProvider), module, "ConstantThrustDirectionProvider", 0);
          }

          void t_ConstantThrustDirectionProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantThrustDirectionProvider), "class_", make_descriptor(ConstantThrustDirectionProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantThrustDirectionProvider), "wrapfn_", make_descriptor(t_ConstantThrustDirectionProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantThrustDirectionProvider), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ConstantThrustDirectionProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ConstantThrustDirectionProvider::initializeClass, 1)))
              return NULL;
            return t_ConstantThrustDirectionProvider::wrap_Object(ConstantThrustDirectionProvider(((t_ConstantThrustDirectionProvider *) arg)->object.this$));
          }
          static PyObject *t_ConstantThrustDirectionProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ConstantThrustDirectionProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ConstantThrustDirectionProvider_init_(t_ConstantThrustDirectionProvider *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ConstantThrustDirectionProvider object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              INT_CALL(object = ConstantThrustDirectionProvider(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ConstantThrustDirectionProvider_computeThrustDirection(t_ConstantThrustDirectionProvider *self, PyObject *args)
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
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$EnumListConsumer.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$EnumListConsumer::class$ = NULL;
            jmethodID *ParseToken$EnumListConsumer::mids$ = NULL;
            bool ParseToken$EnumListConsumer::live$ = false;

            jclass ParseToken$EnumListConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$EnumListConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_de3e021e7266b71e] = env->getMethodID(cls, "accept", "(Ljava/util/List;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$EnumListConsumer::accept(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_de3e021e7266b71e], a0.this$);
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
            static PyObject *t_ParseToken$EnumListConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$EnumListConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$EnumListConsumer_of_(t_ParseToken$EnumListConsumer *self, PyObject *args);
            static PyObject *t_ParseToken$EnumListConsumer_accept(t_ParseToken$EnumListConsumer *self, PyObject *arg);
            static PyObject *t_ParseToken$EnumListConsumer_get__parameters_(t_ParseToken$EnumListConsumer *self, void *data);
            static PyGetSetDef t_ParseToken$EnumListConsumer__fields_[] = {
              DECLARE_GET_FIELD(t_ParseToken$EnumListConsumer, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ParseToken$EnumListConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$EnumListConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$EnumListConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$EnumListConsumer, of_, METH_VARARGS),
              DECLARE_METHOD(t_ParseToken$EnumListConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$EnumListConsumer)[] = {
              { Py_tp_methods, t_ParseToken$EnumListConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_ParseToken$EnumListConsumer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$EnumListConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$EnumListConsumer, t_ParseToken$EnumListConsumer, ParseToken$EnumListConsumer);
            PyObject *t_ParseToken$EnumListConsumer::wrap_Object(const ParseToken$EnumListConsumer& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ParseToken$EnumListConsumer::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ParseToken$EnumListConsumer *self = (t_ParseToken$EnumListConsumer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_ParseToken$EnumListConsumer::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ParseToken$EnumListConsumer::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ParseToken$EnumListConsumer *self = (t_ParseToken$EnumListConsumer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_ParseToken$EnumListConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$EnumListConsumer), &PY_TYPE_DEF(ParseToken$EnumListConsumer), module, "ParseToken$EnumListConsumer", 0);
            }

            void t_ParseToken$EnumListConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$EnumListConsumer), "class_", make_descriptor(ParseToken$EnumListConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$EnumListConsumer), "wrapfn_", make_descriptor(t_ParseToken$EnumListConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$EnumListConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$EnumListConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$EnumListConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$EnumListConsumer::wrap_Object(ParseToken$EnumListConsumer(((t_ParseToken$EnumListConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$EnumListConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$EnumListConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$EnumListConsumer_of_(t_ParseToken$EnumListConsumer *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_ParseToken$EnumListConsumer_accept(t_ParseToken$EnumListConsumer *self, PyObject *arg)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(self->object.accept(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", arg);
              return NULL;
            }
            static PyObject *t_ParseToken$EnumListConsumer_get__parameters_(t_ParseToken$EnumListConsumer *self, void *data)
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
#include "org/hipparchus/filtering/kalman/extended/ExtendedKalmanFilter.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/filtering/kalman/extended/NonLinearProcess.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace extended {

          ::java::lang::Class *ExtendedKalmanFilter::class$ = NULL;
          jmethodID *ExtendedKalmanFilter::mids$ = NULL;
          bool ExtendedKalmanFilter::live$ = false;

          jclass ExtendedKalmanFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/extended/ExtendedKalmanFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_22ee6678af0e8dd1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/MatrixDecomposer;Lorg/hipparchus/filtering/kalman/extended/NonLinearProcess;Lorg/hipparchus/filtering/kalman/ProcessEstimate;)V");
              mids$[mid_estimationStep_ba157b27aa6224ec] = env->getMethodID(cls, "estimationStep", "(Lorg/hipparchus/filtering/kalman/Measurement;)Lorg/hipparchus/filtering/kalman/ProcessEstimate;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ExtendedKalmanFilter::ExtendedKalmanFilter(const ::org::hipparchus::linear::MatrixDecomposer & a0, const ::org::hipparchus::filtering::kalman::extended::NonLinearProcess & a1, const ::org::hipparchus::filtering::kalman::ProcessEstimate & a2) : ::org::hipparchus::filtering::kalman::AbstractKalmanFilter(env->newObject(initializeClass, &mids$, mid_init$_22ee6678af0e8dd1, a0.this$, a1.this$, a2.this$)) {}

          ::org::hipparchus::filtering::kalman::ProcessEstimate ExtendedKalmanFilter::estimationStep(const ::org::hipparchus::filtering::kalman::Measurement & a0) const
          {
            return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_estimationStep_ba157b27aa6224ec], a0.this$));
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
        namespace extended {
          static PyObject *t_ExtendedKalmanFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ExtendedKalmanFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ExtendedKalmanFilter_of_(t_ExtendedKalmanFilter *self, PyObject *args);
          static int t_ExtendedKalmanFilter_init_(t_ExtendedKalmanFilter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ExtendedKalmanFilter_estimationStep(t_ExtendedKalmanFilter *self, PyObject *args);
          static PyObject *t_ExtendedKalmanFilter_get__parameters_(t_ExtendedKalmanFilter *self, void *data);
          static PyGetSetDef t_ExtendedKalmanFilter__fields_[] = {
            DECLARE_GET_FIELD(t_ExtendedKalmanFilter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ExtendedKalmanFilter__methods_[] = {
            DECLARE_METHOD(t_ExtendedKalmanFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ExtendedKalmanFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ExtendedKalmanFilter, of_, METH_VARARGS),
            DECLARE_METHOD(t_ExtendedKalmanFilter, estimationStep, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ExtendedKalmanFilter)[] = {
            { Py_tp_methods, t_ExtendedKalmanFilter__methods_ },
            { Py_tp_init, (void *) t_ExtendedKalmanFilter_init_ },
            { Py_tp_getset, t_ExtendedKalmanFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ExtendedKalmanFilter)[] = {
            &PY_TYPE_DEF(::org::hipparchus::filtering::kalman::AbstractKalmanFilter),
            NULL
          };

          DEFINE_TYPE(ExtendedKalmanFilter, t_ExtendedKalmanFilter, ExtendedKalmanFilter);
          PyObject *t_ExtendedKalmanFilter::wrap_Object(const ExtendedKalmanFilter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ExtendedKalmanFilter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ExtendedKalmanFilter *self = (t_ExtendedKalmanFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_ExtendedKalmanFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ExtendedKalmanFilter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ExtendedKalmanFilter *self = (t_ExtendedKalmanFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_ExtendedKalmanFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(ExtendedKalmanFilter), &PY_TYPE_DEF(ExtendedKalmanFilter), module, "ExtendedKalmanFilter", 0);
          }

          void t_ExtendedKalmanFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedKalmanFilter), "class_", make_descriptor(ExtendedKalmanFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedKalmanFilter), "wrapfn_", make_descriptor(t_ExtendedKalmanFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedKalmanFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ExtendedKalmanFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ExtendedKalmanFilter::initializeClass, 1)))
              return NULL;
            return t_ExtendedKalmanFilter::wrap_Object(ExtendedKalmanFilter(((t_ExtendedKalmanFilter *) arg)->object.this$));
          }
          static PyObject *t_ExtendedKalmanFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ExtendedKalmanFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ExtendedKalmanFilter_of_(t_ExtendedKalmanFilter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_ExtendedKalmanFilter_init_(t_ExtendedKalmanFilter *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
            ::org::hipparchus::filtering::kalman::extended::NonLinearProcess a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::filtering::kalman::ProcessEstimate a2((jobject) NULL);
            ExtendedKalmanFilter object((jobject) NULL);

            if (!parseArgs(args, "kKk", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, ::org::hipparchus::filtering::kalman::extended::NonLinearProcess::initializeClass, ::org::hipparchus::filtering::kalman::ProcessEstimate::initializeClass, &a0, &a1, &p1, ::org::hipparchus::filtering::kalman::extended::t_NonLinearProcess::parameters_, &a2))
            {
              INT_CALL(object = ExtendedKalmanFilter(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ExtendedKalmanFilter_estimationStep(t_ExtendedKalmanFilter *self, PyObject *args)
          {
            ::org::hipparchus::filtering::kalman::Measurement a0((jobject) NULL);
            ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::filtering::kalman::Measurement::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.estimationStep(a0));
              return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
            }

            return callSuper(PY_TYPE(ExtendedKalmanFilter), (PyObject *) self, "estimationStep", args, 2);
          }
          static PyObject *t_ExtendedKalmanFilter_get__parameters_(t_ExtendedKalmanFilter *self, void *data)
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
#include "org/orekit/time/PythonTimeScales.h"
#include "org/orekit/time/TCBScale.h"
#include "org/orekit/time/GMSTScale.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/TAIScale.h"
#include "org/orekit/time/TDBScale.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/GalileoScale.h"
#include "org/orekit/time/QZSSScale.h"
#include "org/orekit/time/TTScale.h"
#include "org/orekit/time/UTCScale.h"
#include "org/orekit/time/IRNSSScale.h"
#include "java/lang/Class.h"
#include "org/orekit/time/BDTScale.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/time/GLONASSScale.h"
#include "org/orekit/time/GPSScale.h"
#include "org/orekit/time/TCGScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonTimeScales::class$ = NULL;
      jmethodID *PythonTimeScales::mids$ = NULL;
      bool PythonTimeScales::live$ = false;

      jclass PythonTimeScales::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonTimeScales");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_createBesselianEpoch_149a9211a037d799] = env->getMethodID(cls, "createBesselianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_createJulianEpoch_149a9211a037d799] = env->getMethodID(cls, "createJulianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getBDT_fc0e10255fdb9359] = env->getMethodID(cls, "getBDT", "()Lorg/orekit/time/BDTScale;");
          mids$[mid_getBeidouEpoch_85703d13e302437e] = env->getMethodID(cls, "getBeidouEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getCcsdsEpoch_85703d13e302437e] = env->getMethodID(cls, "getCcsdsEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getFiftiesEpoch_85703d13e302437e] = env->getMethodID(cls, "getFiftiesEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getFutureInfinity_85703d13e302437e] = env->getMethodID(cls, "getFutureInfinity", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGLONASS_2b4079449103a541] = env->getMethodID(cls, "getGLONASS", "()Lorg/orekit/time/GLONASSScale;");
          mids$[mid_getGMST_17da19434c6eaf77] = env->getMethodID(cls, "getGMST", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/GMSTScale;");
          mids$[mid_getGPS_9e1c13089038a5fa] = env->getMethodID(cls, "getGPS", "()Lorg/orekit/time/GPSScale;");
          mids$[mid_getGST_0569916ae20da9e6] = env->getMethodID(cls, "getGST", "()Lorg/orekit/time/GalileoScale;");
          mids$[mid_getGalileoEpoch_85703d13e302437e] = env->getMethodID(cls, "getGalileoEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGlonassEpoch_85703d13e302437e] = env->getMethodID(cls, "getGlonassEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGpsEpoch_85703d13e302437e] = env->getMethodID(cls, "getGpsEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getIRNSS_acc0c9657c1b3fab] = env->getMethodID(cls, "getIRNSS", "()Lorg/orekit/time/IRNSSScale;");
          mids$[mid_getIrnssEpoch_85703d13e302437e] = env->getMethodID(cls, "getIrnssEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getJ2000Epoch_85703d13e302437e] = env->getMethodID(cls, "getJ2000Epoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getJavaEpoch_85703d13e302437e] = env->getMethodID(cls, "getJavaEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getJulianEpoch_85703d13e302437e] = env->getMethodID(cls, "getJulianEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getModifiedJulianEpoch_85703d13e302437e] = env->getMethodID(cls, "getModifiedJulianEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getPastInfinity_85703d13e302437e] = env->getMethodID(cls, "getPastInfinity", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getQZSS_b61358961d42527b] = env->getMethodID(cls, "getQZSS", "()Lorg/orekit/time/QZSSScale;");
          mids$[mid_getQzssEpoch_85703d13e302437e] = env->getMethodID(cls, "getQzssEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getTAI_542013db907f5b2d] = env->getMethodID(cls, "getTAI", "()Lorg/orekit/time/TAIScale;");
          mids$[mid_getTCB_a36a736c24a84bc8] = env->getMethodID(cls, "getTCB", "()Lorg/orekit/time/TCBScale;");
          mids$[mid_getTCG_bc03267fa6cc0068] = env->getMethodID(cls, "getTCG", "()Lorg/orekit/time/TCGScale;");
          mids$[mid_getTDB_01a9b50b4c9899e0] = env->getMethodID(cls, "getTDB", "()Lorg/orekit/time/TDBScale;");
          mids$[mid_getTT_1cee2d27f65b3e44] = env->getMethodID(cls, "getTT", "()Lorg/orekit/time/TTScale;");
          mids$[mid_getUT1_03564ba2f50e6e3b] = env->getMethodID(cls, "getUT1", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/UT1Scale;");
          mids$[mid_getUTC_4611f4f4ac7b3711] = env->getMethodID(cls, "getUTC", "()Lorg/orekit/time/UTCScale;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTimeScales::PythonTimeScales() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonTimeScales::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonTimeScales::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonTimeScales::pythonExtension(jlong a0) const
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
      static PyObject *t_PythonTimeScales_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeScales_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonTimeScales_init_(t_PythonTimeScales *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTimeScales_finalize(t_PythonTimeScales *self);
      static PyObject *t_PythonTimeScales_pythonExtension(t_PythonTimeScales *self, PyObject *args);
      static jobject JNICALL t_PythonTimeScales_createBesselianEpoch0(JNIEnv *jenv, jobject jobj, jdouble a0);
      static jobject JNICALL t_PythonTimeScales_createJulianEpoch1(JNIEnv *jenv, jobject jobj, jdouble a0);
      static jobject JNICALL t_PythonTimeScales_getBDT2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getBeidouEpoch3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getCcsdsEpoch4(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getFiftiesEpoch5(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getFutureInfinity6(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getGLONASS7(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getGMST8(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static jobject JNICALL t_PythonTimeScales_getGPS9(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getGST10(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getGalileoEpoch11(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getGlonassEpoch12(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getGpsEpoch13(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getIRNSS14(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getIrnssEpoch15(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getJ2000Epoch16(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getJavaEpoch17(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getJulianEpoch18(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getModifiedJulianEpoch19(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getPastInfinity20(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getQZSS21(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getQzssEpoch22(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getTAI23(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getTCB24(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getTCG25(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getTDB26(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getTT27(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeScales_getUT128(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static jobject JNICALL t_PythonTimeScales_getUTC29(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonTimeScales_pythonDecRef30(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonTimeScales_get__self(t_PythonTimeScales *self, void *data);
      static PyGetSetDef t_PythonTimeScales__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTimeScales, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTimeScales__methods_[] = {
        DECLARE_METHOD(t_PythonTimeScales, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeScales, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeScales, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTimeScales, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTimeScales)[] = {
        { Py_tp_methods, t_PythonTimeScales__methods_ },
        { Py_tp_init, (void *) t_PythonTimeScales_init_ },
        { Py_tp_getset, t_PythonTimeScales__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTimeScales)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTimeScales, t_PythonTimeScales, PythonTimeScales);

      void t_PythonTimeScales::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTimeScales), &PY_TYPE_DEF(PythonTimeScales), module, "PythonTimeScales", 1);
      }

      void t_PythonTimeScales::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeScales), "class_", make_descriptor(PythonTimeScales::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeScales), "wrapfn_", make_descriptor(t_PythonTimeScales::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeScales), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTimeScales::initializeClass);
        JNINativeMethod methods[] = {
          { "createBesselianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_createBesselianEpoch0 },
          { "createJulianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_createJulianEpoch1 },
          { "getBDT", "()Lorg/orekit/time/BDTScale;", (void *) t_PythonTimeScales_getBDT2 },
          { "getBeidouEpoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getBeidouEpoch3 },
          { "getCcsdsEpoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getCcsdsEpoch4 },
          { "getFiftiesEpoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getFiftiesEpoch5 },
          { "getFutureInfinity", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getFutureInfinity6 },
          { "getGLONASS", "()Lorg/orekit/time/GLONASSScale;", (void *) t_PythonTimeScales_getGLONASS7 },
          { "getGMST", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/GMSTScale;", (void *) t_PythonTimeScales_getGMST8 },
          { "getGPS", "()Lorg/orekit/time/GPSScale;", (void *) t_PythonTimeScales_getGPS9 },
          { "getGST", "()Lorg/orekit/time/GalileoScale;", (void *) t_PythonTimeScales_getGST10 },
          { "getGalileoEpoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getGalileoEpoch11 },
          { "getGlonassEpoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getGlonassEpoch12 },
          { "getGpsEpoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getGpsEpoch13 },
          { "getIRNSS", "()Lorg/orekit/time/IRNSSScale;", (void *) t_PythonTimeScales_getIRNSS14 },
          { "getIrnssEpoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getIrnssEpoch15 },
          { "getJ2000Epoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getJ2000Epoch16 },
          { "getJavaEpoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getJavaEpoch17 },
          { "getJulianEpoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getJulianEpoch18 },
          { "getModifiedJulianEpoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getModifiedJulianEpoch19 },
          { "getPastInfinity", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getPastInfinity20 },
          { "getQZSS", "()Lorg/orekit/time/QZSSScale;", (void *) t_PythonTimeScales_getQZSS21 },
          { "getQzssEpoch", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeScales_getQzssEpoch22 },
          { "getTAI", "()Lorg/orekit/time/TAIScale;", (void *) t_PythonTimeScales_getTAI23 },
          { "getTCB", "()Lorg/orekit/time/TCBScale;", (void *) t_PythonTimeScales_getTCB24 },
          { "getTCG", "()Lorg/orekit/time/TCGScale;", (void *) t_PythonTimeScales_getTCG25 },
          { "getTDB", "()Lorg/orekit/time/TDBScale;", (void *) t_PythonTimeScales_getTDB26 },
          { "getTT", "()Lorg/orekit/time/TTScale;", (void *) t_PythonTimeScales_getTT27 },
          { "getUT1", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/UT1Scale;", (void *) t_PythonTimeScales_getUT128 },
          { "getUTC", "()Lorg/orekit/time/UTCScale;", (void *) t_PythonTimeScales_getUTC29 },
          { "pythonDecRef", "()V", (void *) t_PythonTimeScales_pythonDecRef30 },
        };
        env->registerNatives(cls, methods, 31);
      }

      static PyObject *t_PythonTimeScales_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTimeScales::initializeClass, 1)))
          return NULL;
        return t_PythonTimeScales::wrap_Object(PythonTimeScales(((t_PythonTimeScales *) arg)->object.this$));
      }
      static PyObject *t_PythonTimeScales_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTimeScales::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonTimeScales_init_(t_PythonTimeScales *self, PyObject *args, PyObject *kwds)
      {
        PythonTimeScales object((jobject) NULL);

        INT_CALL(object = PythonTimeScales());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTimeScales_finalize(t_PythonTimeScales *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTimeScales_pythonExtension(t_PythonTimeScales *self, PyObject *args)
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

      static jobject JNICALL t_PythonTimeScales_createBesselianEpoch0(JNIEnv *jenv, jobject jobj, jdouble a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "createBesselianEpoch", "d", (double) a0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("createBesselianEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_createJulianEpoch1(JNIEnv *jenv, jobject jobj, jdouble a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "createJulianEpoch", "d", (double) a0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("createJulianEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getBDT2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::BDTScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getBDT", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::BDTScale::initializeClass, &value))
        {
          throwTypeError("getBDT", result);
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

      static jobject JNICALL t_PythonTimeScales_getBeidouEpoch3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getBeidouEpoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getBeidouEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getCcsdsEpoch4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getCcsdsEpoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getCcsdsEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getFiftiesEpoch5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getFiftiesEpoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getFiftiesEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getFutureInfinity6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getFutureInfinity", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getFutureInfinity", result);
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

      static jobject JNICALL t_PythonTimeScales_getGLONASS7(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::GLONASSScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGLONASS", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::GLONASSScale::initializeClass, &value))
        {
          throwTypeError("getGLONASS", result);
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

      static jobject JNICALL t_PythonTimeScales_getGMST8(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::GMSTScale value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getGMST", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::GMSTScale::initializeClass, &value))
        {
          throwTypeError("getGMST", result);
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

      static jobject JNICALL t_PythonTimeScales_getGPS9(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::GPSScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGPS", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::GPSScale::initializeClass, &value))
        {
          throwTypeError("getGPS", result);
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

      static jobject JNICALL t_PythonTimeScales_getGST10(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::GalileoScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGST", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::GalileoScale::initializeClass, &value))
        {
          throwTypeError("getGST", result);
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

      static jobject JNICALL t_PythonTimeScales_getGalileoEpoch11(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGalileoEpoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getGalileoEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getGlonassEpoch12(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGlonassEpoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getGlonassEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getGpsEpoch13(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGpsEpoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getGpsEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getIRNSS14(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::IRNSSScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getIRNSS", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::IRNSSScale::initializeClass, &value))
        {
          throwTypeError("getIRNSS", result);
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

      static jobject JNICALL t_PythonTimeScales_getIrnssEpoch15(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getIrnssEpoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getIrnssEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getJ2000Epoch16(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getJ2000Epoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getJ2000Epoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getJavaEpoch17(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getJavaEpoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getJavaEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getJulianEpoch18(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getJulianEpoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getJulianEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getModifiedJulianEpoch19(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getModifiedJulianEpoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getModifiedJulianEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getPastInfinity20(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getPastInfinity", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getPastInfinity", result);
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

      static jobject JNICALL t_PythonTimeScales_getQZSS21(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::QZSSScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getQZSS", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::QZSSScale::initializeClass, &value))
        {
          throwTypeError("getQZSS", result);
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

      static jobject JNICALL t_PythonTimeScales_getQzssEpoch22(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getQzssEpoch", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getQzssEpoch", result);
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

      static jobject JNICALL t_PythonTimeScales_getTAI23(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TAIScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTAI", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TAIScale::initializeClass, &value))
        {
          throwTypeError("getTAI", result);
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

      static jobject JNICALL t_PythonTimeScales_getTCB24(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TCBScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTCB", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TCBScale::initializeClass, &value))
        {
          throwTypeError("getTCB", result);
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

      static jobject JNICALL t_PythonTimeScales_getTCG25(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TCGScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTCG", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TCGScale::initializeClass, &value))
        {
          throwTypeError("getTCG", result);
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

      static jobject JNICALL t_PythonTimeScales_getTDB26(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TDBScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTDB", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TDBScale::initializeClass, &value))
        {
          throwTypeError("getTDB", result);
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

      static jobject JNICALL t_PythonTimeScales_getTT27(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TTScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTT", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TTScale::initializeClass, &value))
        {
          throwTypeError("getTT", result);
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

      static jobject JNICALL t_PythonTimeScales_getUT128(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::UT1Scale value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getUT1", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::UT1Scale::initializeClass, &value))
        {
          throwTypeError("getUT1", result);
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

      static jobject JNICALL t_PythonTimeScales_getUTC29(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::UTCScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getUTC", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::UTCScale::initializeClass, &value))
        {
          throwTypeError("getUTC", result);
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

      static void JNICALL t_PythonTimeScales_pythonDecRef30(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonTimeScales_get__self(t_PythonTimeScales *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/oem/StreamingOemWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/StreamingOemWriter$SegmentWriter.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/io/IOException.h"
#include "java/lang/AutoCloseable.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemMetadata.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *StreamingOemWriter::class$ = NULL;
              jmethodID *StreamingOemWriter::mids$ = NULL;
              bool StreamingOemWriter::live$ = false;

              jclass StreamingOemWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/StreamingOemWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a2ae4acdbb2a1ace] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/odm/oem/OemWriter;Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadata;)V");
                  mids$[mid_init$_31126342ab987ed6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/odm/oem/OemWriter;Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadata;Z)V");
                  mids$[mid_init$_c297c56ee9a12ddd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/odm/oem/OemWriter;Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadata;ZZ)V");
                  mids$[mid_close_0fa09c18fee449d5] = env->getMethodID(cls, "close", "()V");
                  mids$[mid_newSegment_f219119970ffa746] = env->getMethodID(cls, "newSegment", "()Lorg/orekit/files/ccsds/ndm/odm/oem/StreamingOemWriter$SegmentWriter;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              StreamingOemWriter::StreamingOemWriter(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter & a1, const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a2, const ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a2ae4acdbb2a1ace, a0.this$, a1.this$, a2.this$, a3.this$)) {}

              StreamingOemWriter::StreamingOemWriter(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter & a1, const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a2, const ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata & a3, jboolean a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_31126342ab987ed6, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

              StreamingOemWriter::StreamingOemWriter(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter & a1, const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a2, const ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata & a3, jboolean a4, jboolean a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c297c56ee9a12ddd, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5)) {}

              void StreamingOemWriter::close() const
              {
                env->callVoidMethod(this$, mids$[mid_close_0fa09c18fee449d5]);
              }

              ::org::orekit::files::ccsds::ndm::odm::oem::StreamingOemWriter$SegmentWriter StreamingOemWriter::newSegment() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::oem::StreamingOemWriter$SegmentWriter(env->callObjectMethod(this$, mids$[mid_newSegment_f219119970ffa746]));
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
              static PyObject *t_StreamingOemWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_StreamingOemWriter_instance_(PyTypeObject *type, PyObject *arg);
              static int t_StreamingOemWriter_init_(t_StreamingOemWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_StreamingOemWriter_close(t_StreamingOemWriter *self);
              static PyObject *t_StreamingOemWriter_newSegment(t_StreamingOemWriter *self);

              static PyMethodDef t_StreamingOemWriter__methods_[] = {
                DECLARE_METHOD(t_StreamingOemWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingOemWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingOemWriter, close, METH_NOARGS),
                DECLARE_METHOD(t_StreamingOemWriter, newSegment, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(StreamingOemWriter)[] = {
                { Py_tp_methods, t_StreamingOemWriter__methods_ },
                { Py_tp_init, (void *) t_StreamingOemWriter_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(StreamingOemWriter)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(StreamingOemWriter, t_StreamingOemWriter, StreamingOemWriter);

              void t_StreamingOemWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(StreamingOemWriter), &PY_TYPE_DEF(StreamingOemWriter), module, "StreamingOemWriter", 0);
              }

              void t_StreamingOemWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOemWriter), "class_", make_descriptor(StreamingOemWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOemWriter), "wrapfn_", make_descriptor(t_StreamingOemWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingOemWriter), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_StreamingOemWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, StreamingOemWriter::initializeClass, 1)))
                  return NULL;
                return t_StreamingOemWriter::wrap_Object(StreamingOemWriter(((t_StreamingOemWriter *) arg)->object.this$));
              }
              static PyObject *t_StreamingOemWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, StreamingOemWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_StreamingOemWriter_init_(t_StreamingOemWriter *self, PyObject *args, PyObject *kwds)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 4:
                  {
                    ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::files::ccsds::ndm::odm::OdmHeader a2((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata a3((jobject) NULL);
                    StreamingOemWriter object((jobject) NULL);

                    if (!parseArgs(args, "kKkk", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter::initializeClass, ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::odm::oem::t_OemWriter::parameters_, &a2, &a3))
                    {
                      INT_CALL(object = StreamingOemWriter(a0, a1, a2, a3));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 5:
                  {
                    ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::files::ccsds::ndm::odm::OdmHeader a2((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata a3((jobject) NULL);
                    jboolean a4;
                    StreamingOemWriter object((jobject) NULL);

                    if (!parseArgs(args, "kKkkZ", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter::initializeClass, ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::odm::oem::t_OemWriter::parameters_, &a2, &a3, &a4))
                    {
                      INT_CALL(object = StreamingOemWriter(a0, a1, a2, a3, a4));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 6:
                  {
                    ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::files::ccsds::ndm::odm::OdmHeader a2((jobject) NULL);
                    ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata a3((jobject) NULL);
                    jboolean a4;
                    jboolean a5;
                    StreamingOemWriter object((jobject) NULL);

                    if (!parseArgs(args, "kKkkZZ", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter::initializeClass, ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::odm::oem::t_OemWriter::parameters_, &a2, &a3, &a4, &a5))
                    {
                      INT_CALL(object = StreamingOemWriter(a0, a1, a2, a3, a4, a5));
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

              static PyObject *t_StreamingOemWriter_close(t_StreamingOemWriter *self)
              {
                OBJ_CALL(self->object.close());
                Py_RETURN_NONE;
              }

              static PyObject *t_StreamingOemWriter_newSegment(t_StreamingOemWriter *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::StreamingOemWriter$SegmentWriter result((jobject) NULL);
                OBJ_CALL(result = self->object.newSegment());
                return ::org::orekit::files::ccsds::ndm::odm::oem::t_StreamingOemWriter$SegmentWriter::wrap_Object(result);
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
#include "org/orekit/files/ccsds/ndm/adm/apm/InertiaKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Inertia.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/InertiaKey.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *InertiaKey::class$ = NULL;
              jmethodID *InertiaKey::mids$ = NULL;
              bool InertiaKey::live$ = false;
              InertiaKey *InertiaKey::COMMENT = NULL;
              InertiaKey *InertiaKey::I11 = NULL;
              InertiaKey *InertiaKey::I12 = NULL;
              InertiaKey *InertiaKey::I13 = NULL;
              InertiaKey *InertiaKey::I22 = NULL;
              InertiaKey *InertiaKey::I23 = NULL;
              InertiaKey *InertiaKey::I33 = NULL;
              InertiaKey *InertiaKey::INERTIA_REF_FRAME = NULL;
              InertiaKey *InertiaKey::IXX = NULL;
              InertiaKey *InertiaKey::IXY = NULL;
              InertiaKey *InertiaKey::IXZ = NULL;
              InertiaKey *InertiaKey::IYY = NULL;
              InertiaKey *InertiaKey::IYZ = NULL;
              InertiaKey *InertiaKey::IZZ = NULL;

              jclass InertiaKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/InertiaKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_e94a9c57de0fd4de] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/apm/Inertia;)Z");
                  mids$[mid_valueOf_5c57e3ad27f6c5ac] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;");
                  mids$[mid_values_0b26b1e20416f420] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COMMENT = new InertiaKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  I11 = new InertiaKey(env->getStaticObjectField(cls, "I11", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  I12 = new InertiaKey(env->getStaticObjectField(cls, "I12", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  I13 = new InertiaKey(env->getStaticObjectField(cls, "I13", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  I22 = new InertiaKey(env->getStaticObjectField(cls, "I22", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  I23 = new InertiaKey(env->getStaticObjectField(cls, "I23", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  I33 = new InertiaKey(env->getStaticObjectField(cls, "I33", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  INERTIA_REF_FRAME = new InertiaKey(env->getStaticObjectField(cls, "INERTIA_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  IXX = new InertiaKey(env->getStaticObjectField(cls, "IXX", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  IXY = new InertiaKey(env->getStaticObjectField(cls, "IXY", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  IXZ = new InertiaKey(env->getStaticObjectField(cls, "IXZ", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  IYY = new InertiaKey(env->getStaticObjectField(cls, "IYY", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  IYZ = new InertiaKey(env->getStaticObjectField(cls, "IYZ", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  IZZ = new InertiaKey(env->getStaticObjectField(cls, "IZZ", "Lorg/orekit/files/ccsds/ndm/adm/apm/InertiaKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean InertiaKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::apm::Inertia & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_e94a9c57de0fd4de], a0.this$, a1.this$, a2.this$);
              }

              InertiaKey InertiaKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return InertiaKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_5c57e3ad27f6c5ac], a0.this$));
              }

              JArray< InertiaKey > InertiaKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< InertiaKey >(env->callStaticObjectMethod(cls, mids$[mid_values_0b26b1e20416f420]));
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
            namespace apm {
              static PyObject *t_InertiaKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_InertiaKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_InertiaKey_of_(t_InertiaKey *self, PyObject *args);
              static PyObject *t_InertiaKey_process(t_InertiaKey *self, PyObject *args);
              static PyObject *t_InertiaKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_InertiaKey_values(PyTypeObject *type);
              static PyObject *t_InertiaKey_get__parameters_(t_InertiaKey *self, void *data);
              static PyGetSetDef t_InertiaKey__fields_[] = {
                DECLARE_GET_FIELD(t_InertiaKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_InertiaKey__methods_[] = {
                DECLARE_METHOD(t_InertiaKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_InertiaKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_InertiaKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_InertiaKey, process, METH_VARARGS),
                DECLARE_METHOD(t_InertiaKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_InertiaKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(InertiaKey)[] = {
                { Py_tp_methods, t_InertiaKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_InertiaKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(InertiaKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(InertiaKey, t_InertiaKey, InertiaKey);
              PyObject *t_InertiaKey::wrap_Object(const InertiaKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_InertiaKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_InertiaKey *self = (t_InertiaKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_InertiaKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_InertiaKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_InertiaKey *self = (t_InertiaKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_InertiaKey::install(PyObject *module)
              {
                installType(&PY_TYPE(InertiaKey), &PY_TYPE_DEF(InertiaKey), module, "InertiaKey", 0);
              }

              void t_InertiaKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "class_", make_descriptor(InertiaKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "wrapfn_", make_descriptor(t_InertiaKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(InertiaKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "COMMENT", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "I11", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::I11)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "I12", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::I12)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "I13", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::I13)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "I22", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::I22)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "I23", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::I23)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "I33", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::I33)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "INERTIA_REF_FRAME", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::INERTIA_REF_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "IXX", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::IXX)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "IXY", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::IXY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "IXZ", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::IXZ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "IYY", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::IYY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "IYZ", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::IYZ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaKey), "IZZ", make_descriptor(t_InertiaKey::wrap_Object(*InertiaKey::IZZ)));
              }

              static PyObject *t_InertiaKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, InertiaKey::initializeClass, 1)))
                  return NULL;
                return t_InertiaKey::wrap_Object(InertiaKey(((t_InertiaKey *) arg)->object.this$));
              }
              static PyObject *t_InertiaKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, InertiaKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_InertiaKey_of_(t_InertiaKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_InertiaKey_process(t_InertiaKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::Inertia a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::Inertia::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_InertiaKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                InertiaKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::InertiaKey::valueOf(a0));
                  return t_InertiaKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_InertiaKey_values(PyTypeObject *type)
              {
                JArray< InertiaKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::InertiaKey::values());
                return JArray<jobject>(result.this$).wrap(t_InertiaKey::wrap_jobject);
              }
              static PyObject *t_InertiaKey_get__parameters_(t_InertiaKey *self, void *data)
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
#include "org/orekit/files/ilrs/CRDHeader$DataType.h"
#include "java/lang/String.h"
#include "org/orekit/files/ilrs/CRDHeader$DataType.h"
#include "java/lang/Class.h"
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
            mids$[mid_getDataType_d4ca159a62d0a9dd] = env->getStaticMethodID(cls, "getDataType", "(I)Lorg/orekit/files/ilrs/CRDHeader$DataType;");
            mids$[mid_getIndicator_570ce0828f81a2c1] = env->getMethodID(cls, "getIndicator", "()I");
            mids$[mid_valueOf_32590fa72c2bdd21] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ilrs/CRDHeader$DataType;");
            mids$[mid_values_8bf53859985515b4] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ilrs/CRDHeader$DataType;");

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
          return CRDHeader$DataType(env->callStaticObjectMethod(cls, mids$[mid_getDataType_d4ca159a62d0a9dd], a0));
        }

        jint CRDHeader$DataType::getIndicator() const
        {
          return env->callIntMethod(this$, mids$[mid_getIndicator_570ce0828f81a2c1]);
        }

        CRDHeader$DataType CRDHeader$DataType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return CRDHeader$DataType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_32590fa72c2bdd21], a0.this$));
        }

        JArray< CRDHeader$DataType > CRDHeader$DataType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< CRDHeader$DataType >(env->callStaticObjectMethod(cls, mids$[mid_values_8bf53859985515b4]));
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
#include "org/hipparchus/optim/nonlinear/scalar/MultivariateFunctionMappingAdapter.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          ::java::lang::Class *MultivariateFunctionMappingAdapter::class$ = NULL;
          jmethodID *MultivariateFunctionMappingAdapter::mids$ = NULL;
          bool MultivariateFunctionMappingAdapter::live$ = false;

          jclass MultivariateFunctionMappingAdapter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/MultivariateFunctionMappingAdapter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_895e8ed7d2e6e8f8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/MultivariateFunction;[D[D)V");
              mids$[mid_boundedToUnbounded_ac3d742ccc742f22] = env->getMethodID(cls, "boundedToUnbounded", "([D)[D");
              mids$[mid_unboundedToBounded_ac3d742ccc742f22] = env->getMethodID(cls, "unboundedToBounded", "([D)[D");
              mids$[mid_value_9dc1ec0bcc0a9a29] = env->getMethodID(cls, "value", "([D)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MultivariateFunctionMappingAdapter::MultivariateFunctionMappingAdapter(const ::org::hipparchus::analysis::MultivariateFunction & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_895e8ed7d2e6e8f8, a0.this$, a1.this$, a2.this$)) {}

          JArray< jdouble > MultivariateFunctionMappingAdapter::boundedToUnbounded(const JArray< jdouble > & a0) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_boundedToUnbounded_ac3d742ccc742f22], a0.this$));
          }

          JArray< jdouble > MultivariateFunctionMappingAdapter::unboundedToBounded(const JArray< jdouble > & a0) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_unboundedToBounded_ac3d742ccc742f22], a0.this$));
          }

          jdouble MultivariateFunctionMappingAdapter::value(const JArray< jdouble > & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_value_9dc1ec0bcc0a9a29], a0.this$);
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
          static PyObject *t_MultivariateFunctionMappingAdapter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MultivariateFunctionMappingAdapter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_MultivariateFunctionMappingAdapter_init_(t_MultivariateFunctionMappingAdapter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MultivariateFunctionMappingAdapter_boundedToUnbounded(t_MultivariateFunctionMappingAdapter *self, PyObject *arg);
          static PyObject *t_MultivariateFunctionMappingAdapter_unboundedToBounded(t_MultivariateFunctionMappingAdapter *self, PyObject *arg);
          static PyObject *t_MultivariateFunctionMappingAdapter_value(t_MultivariateFunctionMappingAdapter *self, PyObject *arg);

          static PyMethodDef t_MultivariateFunctionMappingAdapter__methods_[] = {
            DECLARE_METHOD(t_MultivariateFunctionMappingAdapter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MultivariateFunctionMappingAdapter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MultivariateFunctionMappingAdapter, boundedToUnbounded, METH_O),
            DECLARE_METHOD(t_MultivariateFunctionMappingAdapter, unboundedToBounded, METH_O),
            DECLARE_METHOD(t_MultivariateFunctionMappingAdapter, value, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MultivariateFunctionMappingAdapter)[] = {
            { Py_tp_methods, t_MultivariateFunctionMappingAdapter__methods_ },
            { Py_tp_init, (void *) t_MultivariateFunctionMappingAdapter_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MultivariateFunctionMappingAdapter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MultivariateFunctionMappingAdapter, t_MultivariateFunctionMappingAdapter, MultivariateFunctionMappingAdapter);

          void t_MultivariateFunctionMappingAdapter::install(PyObject *module)
          {
            installType(&PY_TYPE(MultivariateFunctionMappingAdapter), &PY_TYPE_DEF(MultivariateFunctionMappingAdapter), module, "MultivariateFunctionMappingAdapter", 0);
          }

          void t_MultivariateFunctionMappingAdapter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateFunctionMappingAdapter), "class_", make_descriptor(MultivariateFunctionMappingAdapter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateFunctionMappingAdapter), "wrapfn_", make_descriptor(t_MultivariateFunctionMappingAdapter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateFunctionMappingAdapter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MultivariateFunctionMappingAdapter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MultivariateFunctionMappingAdapter::initializeClass, 1)))
              return NULL;
            return t_MultivariateFunctionMappingAdapter::wrap_Object(MultivariateFunctionMappingAdapter(((t_MultivariateFunctionMappingAdapter *) arg)->object.this$));
          }
          static PyObject *t_MultivariateFunctionMappingAdapter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MultivariateFunctionMappingAdapter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_MultivariateFunctionMappingAdapter_init_(t_MultivariateFunctionMappingAdapter *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::analysis::MultivariateFunction a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            JArray< jdouble > a2((jobject) NULL);
            MultivariateFunctionMappingAdapter object((jobject) NULL);

            if (!parseArgs(args, "k[D[D", ::org::hipparchus::analysis::MultivariateFunction::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = MultivariateFunctionMappingAdapter(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_MultivariateFunctionMappingAdapter_boundedToUnbounded(t_MultivariateFunctionMappingAdapter *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(result = self->object.boundedToUnbounded(a0));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "boundedToUnbounded", arg);
            return NULL;
          }

          static PyObject *t_MultivariateFunctionMappingAdapter_unboundedToBounded(t_MultivariateFunctionMappingAdapter *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(result = self->object.unboundedToBounded(a0));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "unboundedToBounded", arg);
            return NULL;
          }

          static PyObject *t_MultivariateFunctionMappingAdapter_value(t_MultivariateFunctionMappingAdapter *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "[D", &a0))
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/TypeSvMessage.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *TypeSvMessage::class$ = NULL;
          jmethodID *TypeSvMessage::mids$ = NULL;
          bool TypeSvMessage::live$ = false;

          jclass TypeSvMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/TypeSvMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getNavigationMessageType_11b109bd155ca898] = env->getMethodID(cls, "getNavigationMessageType", "()Ljava/lang/String;");
              mids$[mid_getPrn_570ce0828f81a2c1] = env->getMethodID(cls, "getPrn", "()I");
              mids$[mid_getSystem_01acae5c1a253b8e] = env->getMethodID(cls, "getSystem", "()Lorg/orekit/gnss/SatelliteSystem;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::lang::String TypeSvMessage::getNavigationMessageType() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNavigationMessageType_11b109bd155ca898]));
          }

          jint TypeSvMessage::getPrn() const
          {
            return env->callIntMethod(this$, mids$[mid_getPrn_570ce0828f81a2c1]);
          }

          ::org::orekit::gnss::SatelliteSystem TypeSvMessage::getSystem() const
          {
            return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSystem_01acae5c1a253b8e]));
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
        namespace navigation {
          static PyObject *t_TypeSvMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TypeSvMessage_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TypeSvMessage_getNavigationMessageType(t_TypeSvMessage *self);
          static PyObject *t_TypeSvMessage_getPrn(t_TypeSvMessage *self);
          static PyObject *t_TypeSvMessage_getSystem(t_TypeSvMessage *self);
          static PyObject *t_TypeSvMessage_get__navigationMessageType(t_TypeSvMessage *self, void *data);
          static PyObject *t_TypeSvMessage_get__prn(t_TypeSvMessage *self, void *data);
          static PyObject *t_TypeSvMessage_get__system(t_TypeSvMessage *self, void *data);
          static PyGetSetDef t_TypeSvMessage__fields_[] = {
            DECLARE_GET_FIELD(t_TypeSvMessage, navigationMessageType),
            DECLARE_GET_FIELD(t_TypeSvMessage, prn),
            DECLARE_GET_FIELD(t_TypeSvMessage, system),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TypeSvMessage__methods_[] = {
            DECLARE_METHOD(t_TypeSvMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TypeSvMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TypeSvMessage, getNavigationMessageType, METH_NOARGS),
            DECLARE_METHOD(t_TypeSvMessage, getPrn, METH_NOARGS),
            DECLARE_METHOD(t_TypeSvMessage, getSystem, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TypeSvMessage)[] = {
            { Py_tp_methods, t_TypeSvMessage__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_TypeSvMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TypeSvMessage)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TypeSvMessage, t_TypeSvMessage, TypeSvMessage);

          void t_TypeSvMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(TypeSvMessage), &PY_TYPE_DEF(TypeSvMessage), module, "TypeSvMessage", 0);
          }

          void t_TypeSvMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TypeSvMessage), "class_", make_descriptor(TypeSvMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TypeSvMessage), "wrapfn_", make_descriptor(t_TypeSvMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TypeSvMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TypeSvMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TypeSvMessage::initializeClass, 1)))
              return NULL;
            return t_TypeSvMessage::wrap_Object(TypeSvMessage(((t_TypeSvMessage *) arg)->object.this$));
          }
          static PyObject *t_TypeSvMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TypeSvMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_TypeSvMessage_getNavigationMessageType(t_TypeSvMessage *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getNavigationMessageType());
            return j2p(result);
          }

          static PyObject *t_TypeSvMessage_getPrn(t_TypeSvMessage *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getPrn());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_TypeSvMessage_getSystem(t_TypeSvMessage *self)
          {
            ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
          }

          static PyObject *t_TypeSvMessage_get__navigationMessageType(t_TypeSvMessage *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getNavigationMessageType());
            return j2p(value);
          }

          static PyObject *t_TypeSvMessage_get__prn(t_TypeSvMessage *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getPrn());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_TypeSvMessage_get__system(t_TypeSvMessage *self, void *data)
          {
            ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/BrentSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BrentSolver::class$ = NULL;
        jmethodID *BrentSolver::mids$ = NULL;
        bool BrentSolver::live$ = false;

        jclass BrentSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BrentSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_2c56b6dd4d4b1dec] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_doSolve_dff5885c2c873297] = env->getMethodID(cls, "doSolve", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BrentSolver::BrentSolver() : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        BrentSolver::BrentSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        BrentSolver::BrentSolver(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

        BrentSolver::BrentSolver(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_2c56b6dd4d4b1dec, a0, a1, a2)) {}
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
        static PyObject *t_BrentSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BrentSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BrentSolver_of_(t_BrentSolver *self, PyObject *args);
        static int t_BrentSolver_init_(t_BrentSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BrentSolver_get__parameters_(t_BrentSolver *self, void *data);
        static PyGetSetDef t_BrentSolver__fields_[] = {
          DECLARE_GET_FIELD(t_BrentSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BrentSolver__methods_[] = {
          DECLARE_METHOD(t_BrentSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BrentSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BrentSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BrentSolver)[] = {
          { Py_tp_methods, t_BrentSolver__methods_ },
          { Py_tp_init, (void *) t_BrentSolver_init_ },
          { Py_tp_getset, t_BrentSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BrentSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(BrentSolver, t_BrentSolver, BrentSolver);
        PyObject *t_BrentSolver::wrap_Object(const BrentSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BrentSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BrentSolver *self = (t_BrentSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BrentSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BrentSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BrentSolver *self = (t_BrentSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BrentSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(BrentSolver), &PY_TYPE_DEF(BrentSolver), module, "BrentSolver", 0);
        }

        void t_BrentSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrentSolver), "class_", make_descriptor(BrentSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrentSolver), "wrapfn_", make_descriptor(t_BrentSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BrentSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BrentSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BrentSolver::initializeClass, 1)))
            return NULL;
          return t_BrentSolver::wrap_Object(BrentSolver(((t_BrentSolver *) arg)->object.this$));
        }
        static PyObject *t_BrentSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BrentSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BrentSolver_of_(t_BrentSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BrentSolver_init_(t_BrentSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              BrentSolver object((jobject) NULL);

              INT_CALL(object = BrentSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              BrentSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = BrentSolver(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              BrentSolver object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = BrentSolver(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              BrentSolver object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = BrentSolver(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
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
        static PyObject *t_BrentSolver_get__parameters_(t_BrentSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
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
#include "org/hipparchus/ode/ComplexSecondaryODE.h"
#include "org/hipparchus/complex/Complex.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ComplexSecondaryODE::class$ = NULL;
      jmethodID *ComplexSecondaryODE::mids$ = NULL;
      bool ComplexSecondaryODE::live$ = false;

      jclass ComplexSecondaryODE::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ComplexSecondaryODE");

          mids$ = new jmethodID[max_mid];
          mids$[mid_computeDerivatives_46564e87b38bcc21] = env->getMethodID(cls, "computeDerivatives", "(D[Lorg/hipparchus/complex/Complex;[Lorg/hipparchus/complex/Complex;[Lorg/hipparchus/complex/Complex;)[Lorg/hipparchus/complex/Complex;");
          mids$[mid_getDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_init_f97bebf0df07d222] = env->getMethodID(cls, "init", "(D[Lorg/hipparchus/complex/Complex;[Lorg/hipparchus/complex/Complex;D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::complex::Complex > ComplexSecondaryODE::computeDerivatives(jdouble a0, const JArray< ::org::hipparchus::complex::Complex > & a1, const JArray< ::org::hipparchus::complex::Complex > & a2, const JArray< ::org::hipparchus::complex::Complex > & a3) const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_46564e87b38bcc21], a0, a1.this$, a2.this$, a3.this$));
      }

      jint ComplexSecondaryODE::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_570ce0828f81a2c1]);
      }

      void ComplexSecondaryODE::init(jdouble a0, const JArray< ::org::hipparchus::complex::Complex > & a1, const JArray< ::org::hipparchus::complex::Complex > & a2, jdouble a3) const
      {
        env->callVoidMethod(this$, mids$[mid_init_f97bebf0df07d222], a0, a1.this$, a2.this$, a3);
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
      static PyObject *t_ComplexSecondaryODE_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexSecondaryODE_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexSecondaryODE_computeDerivatives(t_ComplexSecondaryODE *self, PyObject *args);
      static PyObject *t_ComplexSecondaryODE_getDimension(t_ComplexSecondaryODE *self);
      static PyObject *t_ComplexSecondaryODE_init(t_ComplexSecondaryODE *self, PyObject *args);
      static PyObject *t_ComplexSecondaryODE_get__dimension(t_ComplexSecondaryODE *self, void *data);
      static PyGetSetDef t_ComplexSecondaryODE__fields_[] = {
        DECLARE_GET_FIELD(t_ComplexSecondaryODE, dimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ComplexSecondaryODE__methods_[] = {
        DECLARE_METHOD(t_ComplexSecondaryODE, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexSecondaryODE, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexSecondaryODE, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_ComplexSecondaryODE, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_ComplexSecondaryODE, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexSecondaryODE)[] = {
        { Py_tp_methods, t_ComplexSecondaryODE__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ComplexSecondaryODE__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexSecondaryODE)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexSecondaryODE, t_ComplexSecondaryODE, ComplexSecondaryODE);

      void t_ComplexSecondaryODE::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexSecondaryODE), &PY_TYPE_DEF(ComplexSecondaryODE), module, "ComplexSecondaryODE", 0);
      }

      void t_ComplexSecondaryODE::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexSecondaryODE), "class_", make_descriptor(ComplexSecondaryODE::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexSecondaryODE), "wrapfn_", make_descriptor(t_ComplexSecondaryODE::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexSecondaryODE), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexSecondaryODE_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexSecondaryODE::initializeClass, 1)))
          return NULL;
        return t_ComplexSecondaryODE::wrap_Object(ComplexSecondaryODE(((t_ComplexSecondaryODE *) arg)->object.this$));
      }
      static PyObject *t_ComplexSecondaryODE_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexSecondaryODE::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ComplexSecondaryODE_computeDerivatives(t_ComplexSecondaryODE *self, PyObject *args)
      {
        jdouble a0;
        JArray< ::org::hipparchus::complex::Complex > a1((jobject) NULL);
        JArray< ::org::hipparchus::complex::Complex > a2((jobject) NULL);
        JArray< ::org::hipparchus::complex::Complex > a3((jobject) NULL);
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);

        if (!parseArgs(args, "D[k[k[k", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = self->object.computeDerivatives(a0, a1, a2, a3));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "computeDerivatives", args);
        return NULL;
      }

      static PyObject *t_ComplexSecondaryODE_getDimension(t_ComplexSecondaryODE *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ComplexSecondaryODE_init(t_ComplexSecondaryODE *self, PyObject *args)
      {
        jdouble a0;
        JArray< ::org::hipparchus::complex::Complex > a1((jobject) NULL);
        JArray< ::org::hipparchus::complex::Complex > a2((jobject) NULL);
        jdouble a3;

        if (!parseArgs(args, "D[k[kD", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(self->object.init(a0, a1, a2, a3));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }

      static PyObject *t_ComplexSecondaryODE_get__dimension(t_ComplexSecondaryODE *self, void *data)
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
#include "org/hipparchus/linear/JacobiPreconditioner.h"
#include "org/hipparchus/linear/RealLinearOperator.h"
#include "org/hipparchus/linear/JacobiPreconditioner.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *JacobiPreconditioner::class$ = NULL;
      jmethodID *JacobiPreconditioner::mids$ = NULL;
      bool JacobiPreconditioner::live$ = false;

      jclass JacobiPreconditioner::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/JacobiPreconditioner");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a47a33f7938e1575] = env->getMethodID(cls, "<init>", "([DZ)V");
          mids$[mid_create_97555e988033af61] = env->getStaticMethodID(cls, "create", "(Lorg/hipparchus/linear/RealLinearOperator;)Lorg/hipparchus/linear/JacobiPreconditioner;");
          mids$[mid_getColumnDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getRowDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_operate_613347e28dd909cd] = env->getMethodID(cls, "operate", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_sqrt_8483a5986a503e8c] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/linear/RealLinearOperator;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JacobiPreconditioner::JacobiPreconditioner(const JArray< jdouble > & a0, jboolean a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a47a33f7938e1575, a0.this$, a1)) {}

      JacobiPreconditioner JacobiPreconditioner::create(const ::org::hipparchus::linear::RealLinearOperator & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JacobiPreconditioner(env->callStaticObjectMethod(cls, mids$[mid_create_97555e988033af61], a0.this$));
      }

      jint JacobiPreconditioner::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_570ce0828f81a2c1]);
      }

      jint JacobiPreconditioner::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_570ce0828f81a2c1]);
      }

      ::org::hipparchus::linear::RealVector JacobiPreconditioner::operate(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_operate_613347e28dd909cd], a0.this$));
      }

      ::org::hipparchus::linear::RealLinearOperator JacobiPreconditioner::sqrt() const
      {
        return ::org::hipparchus::linear::RealLinearOperator(env->callObjectMethod(this$, mids$[mid_sqrt_8483a5986a503e8c]));
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
      static PyObject *t_JacobiPreconditioner_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_JacobiPreconditioner_instance_(PyTypeObject *type, PyObject *arg);
      static int t_JacobiPreconditioner_init_(t_JacobiPreconditioner *self, PyObject *args, PyObject *kwds);
      static PyObject *t_JacobiPreconditioner_create(PyTypeObject *type, PyObject *arg);
      static PyObject *t_JacobiPreconditioner_getColumnDimension(t_JacobiPreconditioner *self);
      static PyObject *t_JacobiPreconditioner_getRowDimension(t_JacobiPreconditioner *self);
      static PyObject *t_JacobiPreconditioner_operate(t_JacobiPreconditioner *self, PyObject *arg);
      static PyObject *t_JacobiPreconditioner_sqrt(t_JacobiPreconditioner *self);
      static PyObject *t_JacobiPreconditioner_get__columnDimension(t_JacobiPreconditioner *self, void *data);
      static PyObject *t_JacobiPreconditioner_get__rowDimension(t_JacobiPreconditioner *self, void *data);
      static PyGetSetDef t_JacobiPreconditioner__fields_[] = {
        DECLARE_GET_FIELD(t_JacobiPreconditioner, columnDimension),
        DECLARE_GET_FIELD(t_JacobiPreconditioner, rowDimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_JacobiPreconditioner__methods_[] = {
        DECLARE_METHOD(t_JacobiPreconditioner, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JacobiPreconditioner, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JacobiPreconditioner, create, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JacobiPreconditioner, getColumnDimension, METH_NOARGS),
        DECLARE_METHOD(t_JacobiPreconditioner, getRowDimension, METH_NOARGS),
        DECLARE_METHOD(t_JacobiPreconditioner, operate, METH_O),
        DECLARE_METHOD(t_JacobiPreconditioner, sqrt, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(JacobiPreconditioner)[] = {
        { Py_tp_methods, t_JacobiPreconditioner__methods_ },
        { Py_tp_init, (void *) t_JacobiPreconditioner_init_ },
        { Py_tp_getset, t_JacobiPreconditioner__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(JacobiPreconditioner)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(JacobiPreconditioner, t_JacobiPreconditioner, JacobiPreconditioner);

      void t_JacobiPreconditioner::install(PyObject *module)
      {
        installType(&PY_TYPE(JacobiPreconditioner), &PY_TYPE_DEF(JacobiPreconditioner), module, "JacobiPreconditioner", 0);
      }

      void t_JacobiPreconditioner::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiPreconditioner), "class_", make_descriptor(JacobiPreconditioner::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiPreconditioner), "wrapfn_", make_descriptor(t_JacobiPreconditioner::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiPreconditioner), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_JacobiPreconditioner_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, JacobiPreconditioner::initializeClass, 1)))
          return NULL;
        return t_JacobiPreconditioner::wrap_Object(JacobiPreconditioner(((t_JacobiPreconditioner *) arg)->object.this$));
      }
      static PyObject *t_JacobiPreconditioner_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, JacobiPreconditioner::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_JacobiPreconditioner_init_(t_JacobiPreconditioner *self, PyObject *args, PyObject *kwds)
      {
        JArray< jdouble > a0((jobject) NULL);
        jboolean a1;
        JacobiPreconditioner object((jobject) NULL);

        if (!parseArgs(args, "[DZ", &a0, &a1))
        {
          INT_CALL(object = JacobiPreconditioner(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_JacobiPreconditioner_create(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
        JacobiPreconditioner result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealLinearOperator::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::JacobiPreconditioner::create(a0));
          return t_JacobiPreconditioner::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "create", arg);
        return NULL;
      }

      static PyObject *t_JacobiPreconditioner_getColumnDimension(t_JacobiPreconditioner *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getColumnDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_JacobiPreconditioner_getRowDimension(t_JacobiPreconditioner *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRowDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_JacobiPreconditioner_operate(t_JacobiPreconditioner *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.operate(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "operate", arg);
        return NULL;
      }

      static PyObject *t_JacobiPreconditioner_sqrt(t_JacobiPreconditioner *self)
      {
        ::org::hipparchus::linear::RealLinearOperator result((jobject) NULL);
        OBJ_CALL(result = self->object.sqrt());
        return ::org::hipparchus::linear::t_RealLinearOperator::wrap_Object(result);
      }

      static PyObject *t_JacobiPreconditioner_get__columnDimension(t_JacobiPreconditioner *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_JacobiPreconditioner_get__rowDimension(t_JacobiPreconditioner *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm07.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm07Header.h"
#include "java/util/List.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm07Data.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm07::class$ = NULL;
              jmethodID *SsrIgm07::mids$ = NULL;
              bool SsrIgm07::live$ = false;

              jclass SsrIgm07::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm07");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ae68b2a2eff23f87] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/metric/messages/ssr/igm/SsrIgm07Header;Ljava/util/List;)V");
                  mids$[mid_getSsrIgm07Data_6f5a75ccd8c04465] = env->getMethodID(cls, "getSsrIgm07Data", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm07::SsrIgm07(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm07Header & a2, const ::java::util::List & a3) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage(env->newObject(initializeClass, &mids$, mid_init$_ae68b2a2eff23f87, a0, a1.this$, a2.this$, a3.this$)) {}

              ::java::util::Map SsrIgm07::getSsrIgm07Data() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSsrIgm07Data_6f5a75ccd8c04465]));
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
              static PyObject *t_SsrIgm07_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm07_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm07_of_(t_SsrIgm07 *self, PyObject *args);
              static int t_SsrIgm07_init_(t_SsrIgm07 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm07_getSsrIgm07Data(t_SsrIgm07 *self);
              static PyObject *t_SsrIgm07_get__ssrIgm07Data(t_SsrIgm07 *self, void *data);
              static PyObject *t_SsrIgm07_get__parameters_(t_SsrIgm07 *self, void *data);
              static PyGetSetDef t_SsrIgm07__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIgm07, ssrIgm07Data),
                DECLARE_GET_FIELD(t_SsrIgm07, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm07__methods_[] = {
                DECLARE_METHOD(t_SsrIgm07, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm07, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm07, of_, METH_VARARGS),
                DECLARE_METHOD(t_SsrIgm07, getSsrIgm07Data, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm07)[] = {
                { Py_tp_methods, t_SsrIgm07__methods_ },
                { Py_tp_init, (void *) t_SsrIgm07_init_ },
                { Py_tp_getset, t_SsrIgm07__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm07)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage),
                NULL
              };

              DEFINE_TYPE(SsrIgm07, t_SsrIgm07, SsrIgm07);
              PyObject *t_SsrIgm07::wrap_Object(const SsrIgm07& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm07::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm07 *self = (t_SsrIgm07 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_SsrIgm07::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm07::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm07 *self = (t_SsrIgm07 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_SsrIgm07::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm07), &PY_TYPE_DEF(SsrIgm07), module, "SsrIgm07", 0);
              }

              void t_SsrIgm07::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm07), "class_", make_descriptor(SsrIgm07::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm07), "wrapfn_", make_descriptor(t_SsrIgm07::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm07), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm07_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm07::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm07::wrap_Object(SsrIgm07(((t_SsrIgm07 *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm07_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm07::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_SsrIgm07_of_(t_SsrIgm07 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_SsrIgm07_init_(t_SsrIgm07 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm07Header a2((jobject) NULL);
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                SsrIgm07 object((jobject) NULL);

                if (!parseArgs(args, "IKkK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm07Header::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = SsrIgm07(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm07Header);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm07Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_SsrIgm07_getSsrIgm07Data(t_SsrIgm07 *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSsrIgm07Data());
                return ::java::util::t_Map::wrap_Object(result);
              }
              static PyObject *t_SsrIgm07_get__parameters_(t_SsrIgm07 *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_SsrIgm07_get__ssrIgm07Data(t_SsrIgm07 *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSsrIgm07Data());
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
#include "org/orekit/files/ccsds/section/AbstractWriter.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
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
              mids$[mid_enterSection_6d745cf7b26e9f5d] = env->getMethodID(cls, "enterSection", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");
              mids$[mid_exitSection_6d745cf7b26e9f5d] = env->getMethodID(cls, "exitSection", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");
              mids$[mid_write_6d745cf7b26e9f5d] = env->getMethodID(cls, "write", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");
              mids$[mid_writeContent_6d745cf7b26e9f5d] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");
              mids$[mid_intArrayToString_73683ad393ccda19] = env->getMethodID(cls, "intArrayToString", "([I)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void AbstractWriter::enterSection(const ::org::orekit::files::ccsds::utils::generation::Generator & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_enterSection_6d745cf7b26e9f5d], a0.this$);
          }

          void AbstractWriter::exitSection(const ::org::orekit::files::ccsds::utils::generation::Generator & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_exitSection_6d745cf7b26e9f5d], a0.this$);
          }

          void AbstractWriter::write(const ::org::orekit::files::ccsds::utils::generation::Generator & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_write_6d745cf7b26e9f5d], a0.this$);
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
#include "org/orekit/rugged/intersection/duvenhage/MinMaxTreeTileFactory.h"
#include "org/orekit/rugged/intersection/duvenhage/MinMaxTreeTile.h"
#include "org/orekit/rugged/raster/TileFactory.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {
        namespace duvenhage {

          ::java::lang::Class *MinMaxTreeTileFactory::class$ = NULL;
          jmethodID *MinMaxTreeTileFactory::mids$ = NULL;
          bool MinMaxTreeTileFactory::live$ = false;

          jclass MinMaxTreeTileFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/rugged/intersection/duvenhage/MinMaxTreeTileFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_createTile_ce69f237ff82efce] = env->getMethodID(cls, "createTile", "()Lorg/orekit/rugged/intersection/duvenhage/MinMaxTreeTile;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MinMaxTreeTileFactory::MinMaxTreeTileFactory() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          ::org::orekit::rugged::intersection::duvenhage::MinMaxTreeTile MinMaxTreeTileFactory::createTile() const
          {
            return ::org::orekit::rugged::intersection::duvenhage::MinMaxTreeTile(env->callObjectMethod(this$, mids$[mid_createTile_ce69f237ff82efce]));
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
    namespace rugged {
      namespace intersection {
        namespace duvenhage {
          static PyObject *t_MinMaxTreeTileFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MinMaxTreeTileFactory_instance_(PyTypeObject *type, PyObject *arg);
          static int t_MinMaxTreeTileFactory_init_(t_MinMaxTreeTileFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MinMaxTreeTileFactory_createTile(t_MinMaxTreeTileFactory *self);

          static PyMethodDef t_MinMaxTreeTileFactory__methods_[] = {
            DECLARE_METHOD(t_MinMaxTreeTileFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MinMaxTreeTileFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MinMaxTreeTileFactory, createTile, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MinMaxTreeTileFactory)[] = {
            { Py_tp_methods, t_MinMaxTreeTileFactory__methods_ },
            { Py_tp_init, (void *) t_MinMaxTreeTileFactory_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MinMaxTreeTileFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MinMaxTreeTileFactory, t_MinMaxTreeTileFactory, MinMaxTreeTileFactory);

          void t_MinMaxTreeTileFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(MinMaxTreeTileFactory), &PY_TYPE_DEF(MinMaxTreeTileFactory), module, "MinMaxTreeTileFactory", 0);
          }

          void t_MinMaxTreeTileFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MinMaxTreeTileFactory), "class_", make_descriptor(MinMaxTreeTileFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MinMaxTreeTileFactory), "wrapfn_", make_descriptor(t_MinMaxTreeTileFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MinMaxTreeTileFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MinMaxTreeTileFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MinMaxTreeTileFactory::initializeClass, 1)))
              return NULL;
            return t_MinMaxTreeTileFactory::wrap_Object(MinMaxTreeTileFactory(((t_MinMaxTreeTileFactory *) arg)->object.this$));
          }
          static PyObject *t_MinMaxTreeTileFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MinMaxTreeTileFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_MinMaxTreeTileFactory_init_(t_MinMaxTreeTileFactory *self, PyObject *args, PyObject *kwds)
          {
            MinMaxTreeTileFactory object((jobject) NULL);

            INT_CALL(object = MinMaxTreeTileFactory());
            self->object = object;

            return 0;
          }

          static PyObject *t_MinMaxTreeTileFactory_createTile(t_MinMaxTreeTileFactory *self)
          {
            ::org::orekit::rugged::intersection::duvenhage::MinMaxTreeTile result((jobject) NULL);
            OBJ_CALL(result = self->object.createTile());
            return ::org::orekit::rugged::intersection::duvenhage::t_MinMaxTreeTile::wrap_Object(result);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/PythonOrekitFixedStepHandler.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/sampling/OrekitFixedStepHandler.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *PythonOrekitFixedStepHandler::class$ = NULL;
        jmethodID *PythonOrekitFixedStepHandler::mids$ = NULL;
        bool PythonOrekitFixedStepHandler::live$ = false;

        jclass PythonOrekitFixedStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/PythonOrekitFixedStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_finish_0ee5c56004643a2e] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_handleStep_0ee5c56004643a2e] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_init_eb5e26882ba2d9b9] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;D)V");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonOrekitFixedStepHandler::PythonOrekitFixedStepHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonOrekitFixedStepHandler::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonOrekitFixedStepHandler::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonOrekitFixedStepHandler::pythonExtension(jlong a0) const
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
    namespace propagation {
      namespace sampling {
        static PyObject *t_PythonOrekitFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonOrekitFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonOrekitFixedStepHandler_init_(t_PythonOrekitFixedStepHandler *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonOrekitFixedStepHandler_finalize(t_PythonOrekitFixedStepHandler *self);
        static PyObject *t_PythonOrekitFixedStepHandler_pythonExtension(t_PythonOrekitFixedStepHandler *self, PyObject *args);
        static void JNICALL t_PythonOrekitFixedStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonOrekitFixedStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonOrekitFixedStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
        static void JNICALL t_PythonOrekitFixedStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonOrekitFixedStepHandler_get__self(t_PythonOrekitFixedStepHandler *self, void *data);
        static PyGetSetDef t_PythonOrekitFixedStepHandler__fields_[] = {
          DECLARE_GET_FIELD(t_PythonOrekitFixedStepHandler, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonOrekitFixedStepHandler__methods_[] = {
          DECLARE_METHOD(t_PythonOrekitFixedStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonOrekitFixedStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonOrekitFixedStepHandler, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonOrekitFixedStepHandler, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonOrekitFixedStepHandler)[] = {
          { Py_tp_methods, t_PythonOrekitFixedStepHandler__methods_ },
          { Py_tp_init, (void *) t_PythonOrekitFixedStepHandler_init_ },
          { Py_tp_getset, t_PythonOrekitFixedStepHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonOrekitFixedStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonOrekitFixedStepHandler, t_PythonOrekitFixedStepHandler, PythonOrekitFixedStepHandler);

        void t_PythonOrekitFixedStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonOrekitFixedStepHandler), &PY_TYPE_DEF(PythonOrekitFixedStepHandler), module, "PythonOrekitFixedStepHandler", 1);
        }

        void t_PythonOrekitFixedStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrekitFixedStepHandler), "class_", make_descriptor(PythonOrekitFixedStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrekitFixedStepHandler), "wrapfn_", make_descriptor(t_PythonOrekitFixedStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrekitFixedStepHandler), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonOrekitFixedStepHandler::initializeClass);
          JNINativeMethod methods[] = {
            { "finish", "(Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonOrekitFixedStepHandler_finish0 },
            { "handleStep", "(Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonOrekitFixedStepHandler_handleStep1 },
            { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;D)V", (void *) t_PythonOrekitFixedStepHandler_init2 },
            { "pythonDecRef", "()V", (void *) t_PythonOrekitFixedStepHandler_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonOrekitFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonOrekitFixedStepHandler::initializeClass, 1)))
            return NULL;
          return t_PythonOrekitFixedStepHandler::wrap_Object(PythonOrekitFixedStepHandler(((t_PythonOrekitFixedStepHandler *) arg)->object.this$));
        }
        static PyObject *t_PythonOrekitFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonOrekitFixedStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonOrekitFixedStepHandler_init_(t_PythonOrekitFixedStepHandler *self, PyObject *args, PyObject *kwds)
        {
          PythonOrekitFixedStepHandler object((jobject) NULL);

          INT_CALL(object = PythonOrekitFixedStepHandler());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonOrekitFixedStepHandler_finalize(t_PythonOrekitFixedStepHandler *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonOrekitFixedStepHandler_pythonExtension(t_PythonOrekitFixedStepHandler *self, PyObject *args)
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

        static void JNICALL t_PythonOrekitFixedStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitFixedStepHandler::mids$[PythonOrekitFixedStepHandler::mid_pythonExtension_492808a339bfa35f]);
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

        static void JNICALL t_PythonOrekitFixedStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitFixedStepHandler::mids$[PythonOrekitFixedStepHandler::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "handleStep", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonOrekitFixedStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitFixedStepHandler::mids$[PythonOrekitFixedStepHandler::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
          PyObject *result = PyObject_CallMethod(obj, "init", "OOd", o0, o1, (double) a2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonOrekitFixedStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitFixedStepHandler::mids$[PythonOrekitFixedStepHandler::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonOrekitFixedStepHandler::mids$[PythonOrekitFixedStepHandler::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonOrekitFixedStepHandler_get__self(t_PythonOrekitFixedStepHandler *self, void *data)
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
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PVCoordinatesProvider::class$ = NULL;
      jmethodID *PVCoordinatesProvider::mids$ = NULL;
      bool PVCoordinatesProvider::live$ = false;

      jclass PVCoordinatesProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PVCoordinatesProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getPVCoordinates_cfeec55f7c63ec64] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPosition_41a826780212dfea] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::utils::TimeStampedPVCoordinates PVCoordinatesProvider::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_cfeec55f7c63ec64], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D PVCoordinatesProvider::getPosition(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_41a826780212dfea], a0.this$, a1.this$));
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
      static PyObject *t_PVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PVCoordinatesProvider_getPVCoordinates(t_PVCoordinatesProvider *self, PyObject *args);
      static PyObject *t_PVCoordinatesProvider_getPosition(t_PVCoordinatesProvider *self, PyObject *args);

      static PyMethodDef t_PVCoordinatesProvider__methods_[] = {
        DECLARE_METHOD(t_PVCoordinatesProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PVCoordinatesProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PVCoordinatesProvider, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_PVCoordinatesProvider, getPosition, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PVCoordinatesProvider)[] = {
        { Py_tp_methods, t_PVCoordinatesProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PVCoordinatesProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PVCoordinatesProvider, t_PVCoordinatesProvider, PVCoordinatesProvider);

      void t_PVCoordinatesProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PVCoordinatesProvider), &PY_TYPE_DEF(PVCoordinatesProvider), module, "PVCoordinatesProvider", 0);
      }

      void t_PVCoordinatesProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PVCoordinatesProvider), "class_", make_descriptor(PVCoordinatesProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PVCoordinatesProvider), "wrapfn_", make_descriptor(t_PVCoordinatesProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PVCoordinatesProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PVCoordinatesProvider::initializeClass, 1)))
          return NULL;
        return t_PVCoordinatesProvider::wrap_Object(PVCoordinatesProvider(((t_PVCoordinatesProvider *) arg)->object.this$));
      }
      static PyObject *t_PVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PVCoordinatesProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PVCoordinatesProvider_getPVCoordinates(t_PVCoordinatesProvider *self, PyObject *args)
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

      static PyObject *t_PVCoordinatesProvider_getPosition(t_PVCoordinatesProvider *self, PyObject *args)
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
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/TurnAroundRangeTroposphericDelayModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/util/List.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/TurnAroundRange.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *TurnAroundRangeTroposphericDelayModifier::class$ = NULL;
          jmethodID *TurnAroundRangeTroposphericDelayModifier::mids$ = NULL;
          bool TurnAroundRangeTroposphericDelayModifier::live$ = false;

          jclass TurnAroundRangeTroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/TurnAroundRangeTroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_3e4962f34ea61659] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;)V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_e4935e9a55e01fd8] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TurnAroundRangeTroposphericDelayModifier::TurnAroundRangeTroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3e4962f34ea61659, a0.this$)) {}

          ::java::util::List TurnAroundRangeTroposphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          void TurnAroundRangeTroposphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_e4935e9a55e01fd8], a0.this$);
          }

          void TurnAroundRangeTroposphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TurnAroundRangeTroposphericDelayModifier_init_(t_TurnAroundRangeTroposphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_getParametersDrivers(t_TurnAroundRangeTroposphericDelayModifier *self);
          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_modify(t_TurnAroundRangeTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_modifyWithoutDerivatives(t_TurnAroundRangeTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_get__parametersDrivers(t_TurnAroundRangeTroposphericDelayModifier *self, void *data);
          static PyGetSetDef t_TurnAroundRangeTroposphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_TurnAroundRangeTroposphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TurnAroundRangeTroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_TurnAroundRangeTroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TurnAroundRangeTroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TurnAroundRangeTroposphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_TurnAroundRangeTroposphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_TurnAroundRangeTroposphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TurnAroundRangeTroposphericDelayModifier)[] = {
            { Py_tp_methods, t_TurnAroundRangeTroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_TurnAroundRangeTroposphericDelayModifier_init_ },
            { Py_tp_getset, t_TurnAroundRangeTroposphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TurnAroundRangeTroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TurnAroundRangeTroposphericDelayModifier, t_TurnAroundRangeTroposphericDelayModifier, TurnAroundRangeTroposphericDelayModifier);

          void t_TurnAroundRangeTroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(TurnAroundRangeTroposphericDelayModifier), &PY_TYPE_DEF(TurnAroundRangeTroposphericDelayModifier), module, "TurnAroundRangeTroposphericDelayModifier", 0);
          }

          void t_TurnAroundRangeTroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRangeTroposphericDelayModifier), "class_", make_descriptor(TurnAroundRangeTroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRangeTroposphericDelayModifier), "wrapfn_", make_descriptor(t_TurnAroundRangeTroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRangeTroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TurnAroundRangeTroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_TurnAroundRangeTroposphericDelayModifier::wrap_Object(TurnAroundRangeTroposphericDelayModifier(((t_TurnAroundRangeTroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TurnAroundRangeTroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TurnAroundRangeTroposphericDelayModifier_init_(t_TurnAroundRangeTroposphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel a0((jobject) NULL);
            TurnAroundRangeTroposphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel::initializeClass, &a0))
            {
              INT_CALL(object = TurnAroundRangeTroposphericDelayModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_getParametersDrivers(t_TurnAroundRangeTroposphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_modify(t_TurnAroundRangeTroposphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_modifyWithoutDerivatives(t_TurnAroundRangeTroposphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_TurnAroundRangeTroposphericDelayModifier_get__parametersDrivers(t_TurnAroundRangeTroposphericDelayModifier *self, void *data)
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
#include "org/orekit/estimation/sequential/SemiAnalyticalKalmanModel.h"
#include "org/orekit/propagation/semianalytical/dsst/DSSTPropagator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/filtering/kalman/extended/NonLinearProcess.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalProcess.h"
#include "org/hipparchus/filtering/kalman/extended/NonLinearEvolution.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/estimation/sequential/KalmanEstimation.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/hipparchus/filtering/kalman/extended/ExtendedKalmanFilter.h"
#include "java/util/List.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "org/orekit/estimation/sequential/MeasurementDecorator.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *SemiAnalyticalKalmanModel::class$ = NULL;
        jmethodID *SemiAnalyticalKalmanModel::mids$ = NULL;
        bool SemiAnalyticalKalmanModel::live$ = false;

        jclass SemiAnalyticalKalmanModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/SemiAnalyticalKalmanModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finalizeEstimation_da0919b7ae9816a3] = env->getMethodID(cls, "finalizeEstimation", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/hipparchus/filtering/kalman/ProcessEstimate;)V");
            mids$[mid_finalizeOperationsObservationGrid_0fa09c18fee449d5] = env->getMethodID(cls, "finalizeOperationsObservationGrid", "()V");
            mids$[mid_getCorrectedMeasurement_5a90ceef60f482f1] = env->getMethodID(cls, "getCorrectedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getCorrectedSpacecraftStates_fa9cea0faefb9a31] = env->getMethodID(cls, "getCorrectedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getCurrentDate_85703d13e302437e] = env->getMethodID(cls, "getCurrentDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getCurrentMeasurementNumber_570ce0828f81a2c1] = env->getMethodID(cls, "getCurrentMeasurementNumber", "()I");
            mids$[mid_getEstimate_c93ddc26f3b3eef4] = env->getMethodID(cls, "getEstimate", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
            mids$[mid_getEstimatedMeasurementsParameters_bd51074bfd9d41da] = env->getMethodID(cls, "getEstimatedMeasurementsParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedOrbitalParameters_bd51074bfd9d41da] = env->getMethodID(cls, "getEstimatedOrbitalParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagationParameters_bd51074bfd9d41da] = env->getMethodID(cls, "getEstimatedPropagationParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagator_58b33e4b5f875168] = env->getMethodID(cls, "getEstimatedPropagator", "()Lorg/orekit/propagation/semianalytical/dsst/DSSTPropagator;");
            mids$[mid_getEvolution_8baf140085ffa2b7] = env->getMethodID(cls, "getEvolution", "(DLorg/hipparchus/linear/RealVector;Lorg/orekit/estimation/sequential/MeasurementDecorator;)Lorg/hipparchus/filtering/kalman/extended/NonLinearEvolution;");
            mids$[mid_getInnovation_c1adcb03cc15012a] = env->getMethodID(cls, "getInnovation", "(Lorg/orekit/estimation/sequential/MeasurementDecorator;Lorg/hipparchus/filtering/kalman/extended/NonLinearEvolution;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getObserver_fc89aee73878aefd] = env->getMethodID(cls, "getObserver", "()Lorg/orekit/estimation/sequential/KalmanObserver;");
            mids$[mid_getPhysicalEstimatedCovarianceMatrix_688b496048ff947b] = env->getMethodID(cls, "getPhysicalEstimatedCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalEstimatedState_aab4fbf77867daa8] = env->getMethodID(cls, "getPhysicalEstimatedState", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPhysicalInnovationCovarianceMatrix_688b496048ff947b] = env->getMethodID(cls, "getPhysicalInnovationCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalKalmanGain_688b496048ff947b] = env->getMethodID(cls, "getPhysicalKalmanGain", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalMeasurementJacobian_688b496048ff947b] = env->getMethodID(cls, "getPhysicalMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalStateTransitionMatrix_688b496048ff947b] = env->getMethodID(cls, "getPhysicalStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPredictedMeasurement_5a90ceef60f482f1] = env->getMethodID(cls, "getPredictedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getPredictedSpacecraftStates_fa9cea0faefb9a31] = env->getMethodID(cls, "getPredictedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_initializeShortPeriodicTerms_0ee5c56004643a2e] = env->getMethodID(cls, "initializeShortPeriodicTerms", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_processMeasurements_0d49551f8b25626b] = env->getMethodID(cls, "processMeasurements", "(Ljava/util/List;Lorg/hipparchus/filtering/kalman/extended/ExtendedKalmanFilter;)Lorg/orekit/propagation/semianalytical/dsst/DSSTPropagator;");
            mids$[mid_setObserver_3b3c487cb3322691] = env->getMethodID(cls, "setObserver", "(Lorg/orekit/estimation/sequential/KalmanObserver;)V");
            mids$[mid_updateNominalSpacecraftState_0ee5c56004643a2e] = env->getMethodID(cls, "updateNominalSpacecraftState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_updateReferenceTrajectory_6dd5e3e05e92502e] = env->getMethodID(cls, "updateReferenceTrajectory", "(Lorg/orekit/propagation/semianalytical/dsst/DSSTPropagator;)V");
            mids$[mid_updateShortPeriods_0ee5c56004643a2e] = env->getMethodID(cls, "updateShortPeriods", "(Lorg/orekit/propagation/SpacecraftState;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void SemiAnalyticalKalmanModel::finalizeEstimation(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::hipparchus::filtering::kalman::ProcessEstimate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_finalizeEstimation_da0919b7ae9816a3], a0.this$, a1.this$);
        }

        void SemiAnalyticalKalmanModel::finalizeOperationsObservationGrid() const
        {
          env->callVoidMethod(this$, mids$[mid_finalizeOperationsObservationGrid_0fa09c18fee449d5]);
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement SemiAnalyticalKalmanModel::getCorrectedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getCorrectedMeasurement_5a90ceef60f482f1]));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > SemiAnalyticalKalmanModel::getCorrectedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getCorrectedSpacecraftStates_fa9cea0faefb9a31]));
        }

        ::org::orekit::time::AbsoluteDate SemiAnalyticalKalmanModel::getCurrentDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCurrentDate_85703d13e302437e]));
        }

        jint SemiAnalyticalKalmanModel::getCurrentMeasurementNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getCurrentMeasurementNumber_570ce0828f81a2c1]);
        }

        ::org::hipparchus::filtering::kalman::ProcessEstimate SemiAnalyticalKalmanModel::getEstimate() const
        {
          return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getEstimate_c93ddc26f3b3eef4]));
        }

        ::org::orekit::utils::ParameterDriversList SemiAnalyticalKalmanModel::getEstimatedMeasurementsParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedMeasurementsParameters_bd51074bfd9d41da]));
        }

        ::org::orekit::utils::ParameterDriversList SemiAnalyticalKalmanModel::getEstimatedOrbitalParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedOrbitalParameters_bd51074bfd9d41da]));
        }

        ::org::orekit::utils::ParameterDriversList SemiAnalyticalKalmanModel::getEstimatedPropagationParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedPropagationParameters_bd51074bfd9d41da]));
        }

        ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator SemiAnalyticalKalmanModel::getEstimatedPropagator() const
        {
          return ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator(env->callObjectMethod(this$, mids$[mid_getEstimatedPropagator_58b33e4b5f875168]));
        }

        ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution SemiAnalyticalKalmanModel::getEvolution(jdouble a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::orekit::estimation::sequential::MeasurementDecorator & a2) const
        {
          return ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution(env->callObjectMethod(this$, mids$[mid_getEvolution_8baf140085ffa2b7], a0, a1.this$, a2.this$));
        }

        ::org::hipparchus::linear::RealVector SemiAnalyticalKalmanModel::getInnovation(const ::org::orekit::estimation::sequential::MeasurementDecorator & a0, const ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution & a1, const ::org::hipparchus::linear::RealMatrix & a2) const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getInnovation_c1adcb03cc15012a], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::estimation::sequential::KalmanObserver SemiAnalyticalKalmanModel::getObserver() const
        {
          return ::org::orekit::estimation::sequential::KalmanObserver(env->callObjectMethod(this$, mids$[mid_getObserver_fc89aee73878aefd]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalKalmanModel::getPhysicalEstimatedCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedCovarianceMatrix_688b496048ff947b]));
        }

        ::org::hipparchus::linear::RealVector SemiAnalyticalKalmanModel::getPhysicalEstimatedState() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedState_aab4fbf77867daa8]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalKalmanModel::getPhysicalInnovationCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalInnovationCovarianceMatrix_688b496048ff947b]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalKalmanModel::getPhysicalKalmanGain() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalKalmanGain_688b496048ff947b]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalKalmanModel::getPhysicalMeasurementJacobian() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalMeasurementJacobian_688b496048ff947b]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalKalmanModel::getPhysicalStateTransitionMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalStateTransitionMatrix_688b496048ff947b]));
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement SemiAnalyticalKalmanModel::getPredictedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getPredictedMeasurement_5a90ceef60f482f1]));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > SemiAnalyticalKalmanModel::getPredictedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getPredictedSpacecraftStates_fa9cea0faefb9a31]));
        }

        void SemiAnalyticalKalmanModel::initializeShortPeriodicTerms(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_initializeShortPeriodicTerms_0ee5c56004643a2e], a0.this$);
        }

        ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator SemiAnalyticalKalmanModel::processMeasurements(const ::java::util::List & a0, const ::org::hipparchus::filtering::kalman::extended::ExtendedKalmanFilter & a1) const
        {
          return ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator(env->callObjectMethod(this$, mids$[mid_processMeasurements_0d49551f8b25626b], a0.this$, a1.this$));
        }

        void SemiAnalyticalKalmanModel::setObserver(const ::org::orekit::estimation::sequential::KalmanObserver & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setObserver_3b3c487cb3322691], a0.this$);
        }

        void SemiAnalyticalKalmanModel::updateNominalSpacecraftState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_updateNominalSpacecraftState_0ee5c56004643a2e], a0.this$);
        }

        void SemiAnalyticalKalmanModel::updateReferenceTrajectory(const ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_updateReferenceTrajectory_6dd5e3e05e92502e], a0.this$);
        }

        void SemiAnalyticalKalmanModel::updateShortPeriods(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_updateShortPeriods_0ee5c56004643a2e], a0.this$);
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
        static PyObject *t_SemiAnalyticalKalmanModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalKalmanModel_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalKalmanModel_finalizeEstimation(t_SemiAnalyticalKalmanModel *self, PyObject *args);
        static PyObject *t_SemiAnalyticalKalmanModel_finalizeOperationsObservationGrid(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getCorrectedMeasurement(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getCorrectedSpacecraftStates(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getCurrentDate(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getCurrentMeasurementNumber(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getEstimate(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getEstimatedMeasurementsParameters(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getEstimatedOrbitalParameters(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getEstimatedPropagationParameters(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getEstimatedPropagator(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getEvolution(t_SemiAnalyticalKalmanModel *self, PyObject *args);
        static PyObject *t_SemiAnalyticalKalmanModel_getInnovation(t_SemiAnalyticalKalmanModel *self, PyObject *args);
        static PyObject *t_SemiAnalyticalKalmanModel_getObserver(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalEstimatedCovarianceMatrix(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalEstimatedState(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalInnovationCovarianceMatrix(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalKalmanGain(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalMeasurementJacobian(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalStateTransitionMatrix(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getPredictedMeasurement(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_getPredictedSpacecraftStates(t_SemiAnalyticalKalmanModel *self);
        static PyObject *t_SemiAnalyticalKalmanModel_initializeShortPeriodicTerms(t_SemiAnalyticalKalmanModel *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalKalmanModel_processMeasurements(t_SemiAnalyticalKalmanModel *self, PyObject *args);
        static PyObject *t_SemiAnalyticalKalmanModel_setObserver(t_SemiAnalyticalKalmanModel *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalKalmanModel_updateNominalSpacecraftState(t_SemiAnalyticalKalmanModel *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalKalmanModel_updateReferenceTrajectory(t_SemiAnalyticalKalmanModel *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalKalmanModel_updateShortPeriods(t_SemiAnalyticalKalmanModel *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalKalmanModel_get__correctedMeasurement(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__correctedSpacecraftStates(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__currentDate(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__currentMeasurementNumber(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__estimate(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__estimatedMeasurementsParameters(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__estimatedOrbitalParameters(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__estimatedPropagationParameters(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__estimatedPropagator(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__observer(t_SemiAnalyticalKalmanModel *self, void *data);
        static int t_SemiAnalyticalKalmanModel_set__observer(t_SemiAnalyticalKalmanModel *self, PyObject *arg, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalEstimatedCovarianceMatrix(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalEstimatedState(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalInnovationCovarianceMatrix(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalKalmanGain(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalMeasurementJacobian(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalStateTransitionMatrix(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__predictedMeasurement(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalKalmanModel_get__predictedSpacecraftStates(t_SemiAnalyticalKalmanModel *self, void *data);
        static PyGetSetDef t_SemiAnalyticalKalmanModel__fields_[] = {
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, correctedMeasurement),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, correctedSpacecraftStates),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, currentDate),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, currentMeasurementNumber),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, estimate),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, estimatedMeasurementsParameters),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, estimatedOrbitalParameters),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, estimatedPropagationParameters),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, estimatedPropagator),
          DECLARE_GETSET_FIELD(t_SemiAnalyticalKalmanModel, observer),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, physicalEstimatedCovarianceMatrix),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, physicalEstimatedState),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, physicalInnovationCovarianceMatrix),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, physicalKalmanGain),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, physicalMeasurementJacobian),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, physicalStateTransitionMatrix),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, predictedMeasurement),
          DECLARE_GET_FIELD(t_SemiAnalyticalKalmanModel, predictedSpacecraftStates),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SemiAnalyticalKalmanModel__methods_[] = {
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, finalizeEstimation, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, finalizeOperationsObservationGrid, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getCorrectedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getCorrectedSpacecraftStates, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getCurrentDate, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getCurrentMeasurementNumber, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getEstimate, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getEstimatedMeasurementsParameters, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getEstimatedOrbitalParameters, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getEstimatedPropagationParameters, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getEstimatedPropagator, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getEvolution, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getInnovation, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getObserver, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getPhysicalEstimatedCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getPhysicalEstimatedState, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getPhysicalInnovationCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getPhysicalKalmanGain, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getPhysicalMeasurementJacobian, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getPhysicalStateTransitionMatrix, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getPredictedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, getPredictedSpacecraftStates, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, initializeShortPeriodicTerms, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, processMeasurements, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, setObserver, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, updateNominalSpacecraftState, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, updateReferenceTrajectory, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalKalmanModel, updateShortPeriods, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SemiAnalyticalKalmanModel)[] = {
          { Py_tp_methods, t_SemiAnalyticalKalmanModel__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SemiAnalyticalKalmanModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SemiAnalyticalKalmanModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SemiAnalyticalKalmanModel, t_SemiAnalyticalKalmanModel, SemiAnalyticalKalmanModel);

        void t_SemiAnalyticalKalmanModel::install(PyObject *module)
        {
          installType(&PY_TYPE(SemiAnalyticalKalmanModel), &PY_TYPE_DEF(SemiAnalyticalKalmanModel), module, "SemiAnalyticalKalmanModel", 0);
        }

        void t_SemiAnalyticalKalmanModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalKalmanModel), "class_", make_descriptor(SemiAnalyticalKalmanModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalKalmanModel), "wrapfn_", make_descriptor(t_SemiAnalyticalKalmanModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalKalmanModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SemiAnalyticalKalmanModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SemiAnalyticalKalmanModel::initializeClass, 1)))
            return NULL;
          return t_SemiAnalyticalKalmanModel::wrap_Object(SemiAnalyticalKalmanModel(((t_SemiAnalyticalKalmanModel *) arg)->object.this$));
        }
        static PyObject *t_SemiAnalyticalKalmanModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SemiAnalyticalKalmanModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SemiAnalyticalKalmanModel_finalizeEstimation(t_SemiAnalyticalKalmanModel *self, PyObject *args)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::filtering::kalman::ProcessEstimate a1((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::hipparchus::filtering::kalman::ProcessEstimate::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1))
          {
            OBJ_CALL(self->object.finalizeEstimation(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finalizeEstimation", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalKalmanModel_finalizeOperationsObservationGrid(t_SemiAnalyticalKalmanModel *self)
        {
          OBJ_CALL(self->object.finalizeOperationsObservationGrid());
          Py_RETURN_NONE;
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getCorrectedMeasurement(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getCorrectedSpacecraftStates(t_SemiAnalyticalKalmanModel *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getCurrentDate(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getCurrentMeasurementNumber(t_SemiAnalyticalKalmanModel *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getEstimate(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimate());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getEstimatedMeasurementsParameters(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getEstimatedOrbitalParameters(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getEstimatedPropagationParameters(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getEstimatedPropagator(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedPropagator());
          return ::org::orekit::propagation::semianalytical::dsst::t_DSSTPropagator::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getEvolution(t_SemiAnalyticalKalmanModel *self, PyObject *args)
        {
          jdouble a0;
          ::org::hipparchus::linear::RealVector a1((jobject) NULL);
          ::org::orekit::estimation::sequential::MeasurementDecorator a2((jobject) NULL);
          ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution result((jobject) NULL);

          if (!parseArgs(args, "Dkk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::orekit::estimation::sequential::MeasurementDecorator::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.getEvolution(a0, a1, a2));
            return ::org::hipparchus::filtering::kalman::extended::t_NonLinearEvolution::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getEvolution", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getInnovation(t_SemiAnalyticalKalmanModel *self, PyObject *args)
        {
          ::org::orekit::estimation::sequential::MeasurementDecorator a0((jobject) NULL);
          ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution a1((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
          ::org::hipparchus::linear::RealVector result((jobject) NULL);

          if (!parseArgs(args, "kkk", ::org::orekit::estimation::sequential::MeasurementDecorator::initializeClass, ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.getInnovation(a0, a1, a2));
            return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInnovation", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getObserver(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::orekit::estimation::sequential::KalmanObserver result((jobject) NULL);
          OBJ_CALL(result = self->object.getObserver());
          return ::org::orekit::estimation::sequential::t_KalmanObserver::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalEstimatedCovarianceMatrix(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalEstimatedState(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalInnovationCovarianceMatrix(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalKalmanGain(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalMeasurementJacobian(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getPhysicalStateTransitionMatrix(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getPredictedMeasurement(t_SemiAnalyticalKalmanModel *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_getPredictedSpacecraftStates(t_SemiAnalyticalKalmanModel *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_initializeShortPeriodicTerms(t_SemiAnalyticalKalmanModel *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.initializeShortPeriodicTerms(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "initializeShortPeriodicTerms", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalKalmanModel_processMeasurements(t_SemiAnalyticalKalmanModel *self, PyObject *args)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::filtering::kalman::extended::ExtendedKalmanFilter a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator result((jobject) NULL);

          if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::org::hipparchus::filtering::kalman::extended::ExtendedKalmanFilter::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::hipparchus::filtering::kalman::extended::t_ExtendedKalmanFilter::parameters_))
          {
            OBJ_CALL(result = self->object.processMeasurements(a0, a1));
            return ::org::orekit::propagation::semianalytical::dsst::t_DSSTPropagator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "processMeasurements", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalKalmanModel_setObserver(t_SemiAnalyticalKalmanModel *self, PyObject *arg)
        {
          ::org::orekit::estimation::sequential::KalmanObserver a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setObserver(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setObserver", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalKalmanModel_updateNominalSpacecraftState(t_SemiAnalyticalKalmanModel *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.updateNominalSpacecraftState(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateNominalSpacecraftState", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalKalmanModel_updateReferenceTrajectory(t_SemiAnalyticalKalmanModel *self, PyObject *arg)
        {
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator::initializeClass, &a0))
          {
            OBJ_CALL(self->object.updateReferenceTrajectory(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateReferenceTrajectory", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalKalmanModel_updateShortPeriods(t_SemiAnalyticalKalmanModel *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.updateShortPeriods(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateShortPeriods", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__correctedMeasurement(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__correctedSpacecraftStates(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__currentDate(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__currentMeasurementNumber(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__estimate(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimate());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__estimatedMeasurementsParameters(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__estimatedOrbitalParameters(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__estimatedPropagationParameters(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__estimatedPropagator(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedPropagator());
          return ::org::orekit::propagation::semianalytical::dsst::t_DSSTPropagator::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__observer(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::orekit::estimation::sequential::KalmanObserver value((jobject) NULL);
          OBJ_CALL(value = self->object.getObserver());
          return ::org::orekit::estimation::sequential::t_KalmanObserver::wrap_Object(value);
        }
        static int t_SemiAnalyticalKalmanModel_set__observer(t_SemiAnalyticalKalmanModel *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::estimation::sequential::KalmanObserver value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &value))
            {
              INT_CALL(self->object.setObserver(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "observer", arg);
          return -1;
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalEstimatedCovarianceMatrix(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalEstimatedState(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalInnovationCovarianceMatrix(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalKalmanGain(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalMeasurementJacobian(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__physicalStateTransitionMatrix(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__predictedMeasurement(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalKalmanModel_get__predictedSpacecraftStates(t_SemiAnalyticalKalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictedSpacecraftStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/intersection/duvenhage/MinMaxTreeTile.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {
        namespace duvenhage {

          ::java::lang::Class *MinMaxTreeTile::class$ = NULL;
          jmethodID *MinMaxTreeTile::mids$ = NULL;
          bool MinMaxTreeTile::live$ = false;

          jclass MinMaxTreeTile::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/rugged/intersection/duvenhage/MinMaxTreeTile");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCrossedBoundaryColumns_4cce8278046f494a] = env->getMethodID(cls, "getCrossedBoundaryColumns", "(III)[I");
              mids$[mid_getCrossedBoundaryRows_4cce8278046f494a] = env->getMethodID(cls, "getCrossedBoundaryRows", "(III)[I");
              mids$[mid_getLevels_570ce0828f81a2c1] = env->getMethodID(cls, "getLevels", "()I");
              mids$[mid_getMaxElevation_3d407e6a8cf9e8ca] = env->getMethodID(cls, "getMaxElevation", "(III)D");
              mids$[mid_getMergeLevel_0e188a513e3e1b15] = env->getMethodID(cls, "getMergeLevel", "(IIII)I");
              mids$[mid_getMinElevation_3d407e6a8cf9e8ca] = env->getMethodID(cls, "getMinElevation", "(III)D");
              mids$[mid_isColumnMerging_b6e9be1df30aebaf] = env->getMethodID(cls, "isColumnMerging", "(I)Z");
              mids$[mid_locateMax_4cce8278046f494a] = env->getMethodID(cls, "locateMax", "(III)[I");
              mids$[mid_locateMin_4cce8278046f494a] = env->getMethodID(cls, "locateMin", "(III)[I");
              mids$[mid_processUpdatedElevation_fa9d415d19f69361] = env->getMethodID(cls, "processUpdatedElevation", "([D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          JArray< jint > MinMaxTreeTile::getCrossedBoundaryColumns(jint a0, jint a1, jint a2) const
          {
            return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getCrossedBoundaryColumns_4cce8278046f494a], a0, a1, a2));
          }

          JArray< jint > MinMaxTreeTile::getCrossedBoundaryRows(jint a0, jint a1, jint a2) const
          {
            return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getCrossedBoundaryRows_4cce8278046f494a], a0, a1, a2));
          }

          jint MinMaxTreeTile::getLevels() const
          {
            return env->callIntMethod(this$, mids$[mid_getLevels_570ce0828f81a2c1]);
          }

          jdouble MinMaxTreeTile::getMaxElevation(jint a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMaxElevation_3d407e6a8cf9e8ca], a0, a1, a2);
          }

          jint MinMaxTreeTile::getMergeLevel(jint a0, jint a1, jint a2, jint a3) const
          {
            return env->callIntMethod(this$, mids$[mid_getMergeLevel_0e188a513e3e1b15], a0, a1, a2, a3);
          }

          jdouble MinMaxTreeTile::getMinElevation(jint a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMinElevation_3d407e6a8cf9e8ca], a0, a1, a2);
          }

          jboolean MinMaxTreeTile::isColumnMerging(jint a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_isColumnMerging_b6e9be1df30aebaf], a0);
          }

          JArray< jint > MinMaxTreeTile::locateMax(jint a0, jint a1, jint a2) const
          {
            return JArray< jint >(env->callObjectMethod(this$, mids$[mid_locateMax_4cce8278046f494a], a0, a1, a2));
          }

          JArray< jint > MinMaxTreeTile::locateMin(jint a0, jint a1, jint a2) const
          {
            return JArray< jint >(env->callObjectMethod(this$, mids$[mid_locateMin_4cce8278046f494a], a0, a1, a2));
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
    namespace rugged {
      namespace intersection {
        namespace duvenhage {
          static PyObject *t_MinMaxTreeTile_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MinMaxTreeTile_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MinMaxTreeTile_getCrossedBoundaryColumns(t_MinMaxTreeTile *self, PyObject *args);
          static PyObject *t_MinMaxTreeTile_getCrossedBoundaryRows(t_MinMaxTreeTile *self, PyObject *args);
          static PyObject *t_MinMaxTreeTile_getLevels(t_MinMaxTreeTile *self);
          static PyObject *t_MinMaxTreeTile_getMaxElevation(t_MinMaxTreeTile *self, PyObject *args);
          static PyObject *t_MinMaxTreeTile_getMergeLevel(t_MinMaxTreeTile *self, PyObject *args);
          static PyObject *t_MinMaxTreeTile_getMinElevation(t_MinMaxTreeTile *self, PyObject *args);
          static PyObject *t_MinMaxTreeTile_isColumnMerging(t_MinMaxTreeTile *self, PyObject *arg);
          static PyObject *t_MinMaxTreeTile_locateMax(t_MinMaxTreeTile *self, PyObject *args);
          static PyObject *t_MinMaxTreeTile_locateMin(t_MinMaxTreeTile *self, PyObject *args);
          static PyObject *t_MinMaxTreeTile_get__levels(t_MinMaxTreeTile *self, void *data);
          static PyGetSetDef t_MinMaxTreeTile__fields_[] = {
            DECLARE_GET_FIELD(t_MinMaxTreeTile, levels),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MinMaxTreeTile__methods_[] = {
            DECLARE_METHOD(t_MinMaxTreeTile, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MinMaxTreeTile, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MinMaxTreeTile, getCrossedBoundaryColumns, METH_VARARGS),
            DECLARE_METHOD(t_MinMaxTreeTile, getCrossedBoundaryRows, METH_VARARGS),
            DECLARE_METHOD(t_MinMaxTreeTile, getLevels, METH_NOARGS),
            DECLARE_METHOD(t_MinMaxTreeTile, getMaxElevation, METH_VARARGS),
            DECLARE_METHOD(t_MinMaxTreeTile, getMergeLevel, METH_VARARGS),
            DECLARE_METHOD(t_MinMaxTreeTile, getMinElevation, METH_VARARGS),
            DECLARE_METHOD(t_MinMaxTreeTile, isColumnMerging, METH_O),
            DECLARE_METHOD(t_MinMaxTreeTile, locateMax, METH_VARARGS),
            DECLARE_METHOD(t_MinMaxTreeTile, locateMin, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MinMaxTreeTile)[] = {
            { Py_tp_methods, t_MinMaxTreeTile__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_MinMaxTreeTile__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MinMaxTreeTile)[] = {
            &PY_TYPE_DEF(::org::orekit::rugged::raster::SimpleTile),
            NULL
          };

          DEFINE_TYPE(MinMaxTreeTile, t_MinMaxTreeTile, MinMaxTreeTile);

          void t_MinMaxTreeTile::install(PyObject *module)
          {
            installType(&PY_TYPE(MinMaxTreeTile), &PY_TYPE_DEF(MinMaxTreeTile), module, "MinMaxTreeTile", 0);
          }

          void t_MinMaxTreeTile::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MinMaxTreeTile), "class_", make_descriptor(MinMaxTreeTile::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MinMaxTreeTile), "wrapfn_", make_descriptor(t_MinMaxTreeTile::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MinMaxTreeTile), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MinMaxTreeTile_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MinMaxTreeTile::initializeClass, 1)))
              return NULL;
            return t_MinMaxTreeTile::wrap_Object(MinMaxTreeTile(((t_MinMaxTreeTile *) arg)->object.this$));
          }
          static PyObject *t_MinMaxTreeTile_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MinMaxTreeTile::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MinMaxTreeTile_getCrossedBoundaryColumns(t_MinMaxTreeTile *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jint a2;
            JArray< jint > result((jobject) NULL);

            if (!parseArgs(args, "III", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getCrossedBoundaryColumns(a0, a1, a2));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "getCrossedBoundaryColumns", args);
            return NULL;
          }

          static PyObject *t_MinMaxTreeTile_getCrossedBoundaryRows(t_MinMaxTreeTile *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jint a2;
            JArray< jint > result((jobject) NULL);

            if (!parseArgs(args, "III", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getCrossedBoundaryRows(a0, a1, a2));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "getCrossedBoundaryRows", args);
            return NULL;
          }

          static PyObject *t_MinMaxTreeTile_getLevels(t_MinMaxTreeTile *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLevels());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_MinMaxTreeTile_getMaxElevation(t_MinMaxTreeTile *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "III", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getMaxElevation(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(MinMaxTreeTile), (PyObject *) self, "getMaxElevation", args, 2);
          }

          static PyObject *t_MinMaxTreeTile_getMergeLevel(t_MinMaxTreeTile *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            jint result;

            if (!parseArgs(args, "IIII", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getMergeLevel(a0, a1, a2, a3));
              return PyLong_FromLong((long) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getMergeLevel", args);
            return NULL;
          }

          static PyObject *t_MinMaxTreeTile_getMinElevation(t_MinMaxTreeTile *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "III", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getMinElevation(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(MinMaxTreeTile), (PyObject *) self, "getMinElevation", args, 2);
          }

          static PyObject *t_MinMaxTreeTile_isColumnMerging(t_MinMaxTreeTile *self, PyObject *arg)
          {
            jint a0;
            jboolean result;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.isColumnMerging(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "isColumnMerging", arg);
            return NULL;
          }

          static PyObject *t_MinMaxTreeTile_locateMax(t_MinMaxTreeTile *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jint a2;
            JArray< jint > result((jobject) NULL);

            if (!parseArgs(args, "III", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.locateMax(a0, a1, a2));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "locateMax", args);
            return NULL;
          }

          static PyObject *t_MinMaxTreeTile_locateMin(t_MinMaxTreeTile *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jint a2;
            JArray< jint > result((jobject) NULL);

            if (!parseArgs(args, "III", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.locateMin(a0, a1, a2));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "locateMin", args);
            return NULL;
          }

          static PyObject *t_MinMaxTreeTile_get__levels(t_MinMaxTreeTile *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLevels());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/PythonOrekitStepHandler.h"
#include "org/orekit/propagation/sampling/OrekitStepHandler.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/propagation/SpacecraftState.h"
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
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_finish_0ee5c56004643a2e] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_handleStep_aa75aa80a734fb3b] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/sampling/OrekitStepInterpolator;)V");
            mids$[mid_init_826b4eda94da4e78] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonOrekitStepHandler::PythonOrekitStepHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonOrekitStepHandler::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonOrekitStepHandler::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonOrekitStepHandler::pythonExtension(jlong a0) const
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepHandler::mids$[PythonOrekitStepHandler::mid_pythonExtension_492808a339bfa35f]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepHandler::mids$[PythonOrekitStepHandler::mid_pythonExtension_492808a339bfa35f]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepHandler::mids$[PythonOrekitStepHandler::mid_pythonExtension_492808a339bfa35f]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitStepHandler::mids$[PythonOrekitStepHandler::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonOrekitStepHandler::mids$[PythonOrekitStepHandler::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
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
#include "org/hipparchus/ode/nonstiff/DormandPrince853Integrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *DormandPrince853Integrator::class$ = NULL;
        jmethodID *DormandPrince853Integrator::mids$ = NULL;
        bool DormandPrince853Integrator::live$ = false;

        jclass DormandPrince853Integrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/DormandPrince853Integrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_36e977212374ff6b] = env->getMethodID(cls, "<init>", "(DD[D[D)V");
            mids$[mid_init$_b0a935b68e41d65a] = env->getMethodID(cls, "<init>", "(DDDD)V");
            mids$[mid_getA_0358d8ea02f2cdb1] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_60c7040667a7dc5c] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_60c7040667a7dc5c] = env->getMethodID(cls, "getC", "()[D");
            mids$[mid_getOrder_570ce0828f81a2c1] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_createInterpolator_29f454a8317a13f8] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/DormandPrince853StateInterpolator;");
            mids$[mid_estimateError_c892cfaf07a4634f] = env->getMethodID(cls, "estimateError", "([[D[D[DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DormandPrince853Integrator::DormandPrince853Integrator(jdouble a0, jdouble a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_36e977212374ff6b, a0, a1, a2.this$, a3.this$)) {}

        DormandPrince853Integrator::DormandPrince853Integrator(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_b0a935b68e41d65a, a0, a1, a2, a3)) {}

        JArray< JArray< jdouble > > DormandPrince853Integrator::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_0358d8ea02f2cdb1]));
        }

        JArray< jdouble > DormandPrince853Integrator::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_60c7040667a7dc5c]));
        }

        JArray< jdouble > DormandPrince853Integrator::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_60c7040667a7dc5c]));
        }

        jint DormandPrince853Integrator::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_570ce0828f81a2c1]);
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
        static PyObject *t_DormandPrince853Integrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince853Integrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DormandPrince853Integrator_init_(t_DormandPrince853Integrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DormandPrince853Integrator_getA(t_DormandPrince853Integrator *self, PyObject *args);
        static PyObject *t_DormandPrince853Integrator_getB(t_DormandPrince853Integrator *self, PyObject *args);
        static PyObject *t_DormandPrince853Integrator_getC(t_DormandPrince853Integrator *self, PyObject *args);
        static PyObject *t_DormandPrince853Integrator_getOrder(t_DormandPrince853Integrator *self, PyObject *args);
        static PyObject *t_DormandPrince853Integrator_get__a(t_DormandPrince853Integrator *self, void *data);
        static PyObject *t_DormandPrince853Integrator_get__b(t_DormandPrince853Integrator *self, void *data);
        static PyObject *t_DormandPrince853Integrator_get__c(t_DormandPrince853Integrator *self, void *data);
        static PyObject *t_DormandPrince853Integrator_get__order(t_DormandPrince853Integrator *self, void *data);
        static PyGetSetDef t_DormandPrince853Integrator__fields_[] = {
          DECLARE_GET_FIELD(t_DormandPrince853Integrator, a),
          DECLARE_GET_FIELD(t_DormandPrince853Integrator, b),
          DECLARE_GET_FIELD(t_DormandPrince853Integrator, c),
          DECLARE_GET_FIELD(t_DormandPrince853Integrator, order),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DormandPrince853Integrator__methods_[] = {
          DECLARE_METHOD(t_DormandPrince853Integrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince853Integrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince853Integrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince853Integrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince853Integrator, getC, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince853Integrator, getOrder, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DormandPrince853Integrator)[] = {
          { Py_tp_methods, t_DormandPrince853Integrator__methods_ },
          { Py_tp_init, (void *) t_DormandPrince853Integrator_init_ },
          { Py_tp_getset, t_DormandPrince853Integrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DormandPrince853Integrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator),
          NULL
        };

        DEFINE_TYPE(DormandPrince853Integrator, t_DormandPrince853Integrator, DormandPrince853Integrator);

        void t_DormandPrince853Integrator::install(PyObject *module)
        {
          installType(&PY_TYPE(DormandPrince853Integrator), &PY_TYPE_DEF(DormandPrince853Integrator), module, "DormandPrince853Integrator", 0);
        }

        void t_DormandPrince853Integrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853Integrator), "class_", make_descriptor(DormandPrince853Integrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853Integrator), "wrapfn_", make_descriptor(t_DormandPrince853Integrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853Integrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DormandPrince853Integrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DormandPrince853Integrator::initializeClass, 1)))
            return NULL;
          return t_DormandPrince853Integrator::wrap_Object(DormandPrince853Integrator(((t_DormandPrince853Integrator *) arg)->object.this$));
        }
        static PyObject *t_DormandPrince853Integrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DormandPrince853Integrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DormandPrince853Integrator_init_(t_DormandPrince853Integrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jdouble a0;
              jdouble a1;
              JArray< jdouble > a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              DormandPrince853Integrator object((jobject) NULL);

              if (!parseArgs(args, "DD[D[D", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = DormandPrince853Integrator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              DormandPrince853Integrator object((jobject) NULL);

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = DormandPrince853Integrator(a0, a1, a2, a3));
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

        static PyObject *t_DormandPrince853Integrator_getA(t_DormandPrince853Integrator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(DormandPrince853Integrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_DormandPrince853Integrator_getB(t_DormandPrince853Integrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return result.wrap();
          }

          return callSuper(PY_TYPE(DormandPrince853Integrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_DormandPrince853Integrator_getC(t_DormandPrince853Integrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return result.wrap();
          }

          return callSuper(PY_TYPE(DormandPrince853Integrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_DormandPrince853Integrator_getOrder(t_DormandPrince853Integrator *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrder());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(DormandPrince853Integrator), (PyObject *) self, "getOrder", args, 2);
        }

        static PyObject *t_DormandPrince853Integrator_get__a(t_DormandPrince853Integrator *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_DormandPrince853Integrator_get__b(t_DormandPrince853Integrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_DormandPrince853Integrator_get__c(t_DormandPrince853Integrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return value.wrap();
        }

        static PyObject *t_DormandPrince853Integrator_get__order(t_DormandPrince853Integrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/StopOnIncreasing.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "org/hipparchus/ode/events/Action.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *StopOnIncreasing::class$ = NULL;
          jmethodID *StopOnIncreasing::mids$ = NULL;
          bool StopOnIncreasing::live$ = false;

          jclass StopOnIncreasing::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/StopOnIncreasing");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_abc543fa9701720f] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;Z)Lorg/hipparchus/ode/events/Action;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          StopOnIncreasing::StopOnIncreasing() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          ::org::hipparchus::ode::events::Action StopOnIncreasing::eventOccurred(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::events::EventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_abc543fa9701720f], a0.this$, a1.this$, a2));
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
          static PyObject *t_StopOnIncreasing_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StopOnIncreasing_instance_(PyTypeObject *type, PyObject *arg);
          static int t_StopOnIncreasing_init_(t_StopOnIncreasing *self, PyObject *args, PyObject *kwds);
          static PyObject *t_StopOnIncreasing_eventOccurred(t_StopOnIncreasing *self, PyObject *args);

          static PyMethodDef t_StopOnIncreasing__methods_[] = {
            DECLARE_METHOD(t_StopOnIncreasing, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StopOnIncreasing, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StopOnIncreasing, eventOccurred, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(StopOnIncreasing)[] = {
            { Py_tp_methods, t_StopOnIncreasing__methods_ },
            { Py_tp_init, (void *) t_StopOnIncreasing_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(StopOnIncreasing)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(StopOnIncreasing, t_StopOnIncreasing, StopOnIncreasing);

          void t_StopOnIncreasing::install(PyObject *module)
          {
            installType(&PY_TYPE(StopOnIncreasing), &PY_TYPE_DEF(StopOnIncreasing), module, "StopOnIncreasing", 0);
          }

          void t_StopOnIncreasing::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(StopOnIncreasing), "class_", make_descriptor(StopOnIncreasing::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StopOnIncreasing), "wrapfn_", make_descriptor(t_StopOnIncreasing::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StopOnIncreasing), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_StopOnIncreasing_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, StopOnIncreasing::initializeClass, 1)))
              return NULL;
            return t_StopOnIncreasing::wrap_Object(StopOnIncreasing(((t_StopOnIncreasing *) arg)->object.this$));
          }
          static PyObject *t_StopOnIncreasing_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, StopOnIncreasing::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_StopOnIncreasing_init_(t_StopOnIncreasing *self, PyObject *args, PyObject *kwds)
          {
            StopOnIncreasing object((jobject) NULL);

            INT_CALL(object = StopOnIncreasing());
            self->object = object;

            return 0;
          }

          static PyObject *t_StopOnIncreasing_eventOccurred(t_StopOnIncreasing *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::events::EventDetector a1((jobject) NULL);
            jboolean a2;
            ::org::hipparchus::ode::events::Action result((jobject) NULL);

            if (!parseArgs(args, "kkZ", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::events::EventDetector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.eventOccurred(a0, a1, a2));
              return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eventOccurred", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/PythonMessageParser.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/util/Map.h"
#include "java/lang/Throwable.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/MessageParser.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *PythonMessageParser::class$ = NULL;
            jmethodID *PythonMessageParser::mids$ = NULL;
            bool PythonMessageParser::live$ = false;

            jclass PythonMessageParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/PythonMessageParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_build_4d26fd885228c716] = env->getMethodID(cls, "build", "()Ljava/lang/Object;");
                mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getFileFormat_66298c6188053be6] = env->getMethodID(cls, "getFileFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;");
                mids$[mid_getFormatVersionKey_11b109bd155ca898] = env->getMethodID(cls, "getFormatVersionKey", "()Ljava/lang/String;");
                mids$[mid_getSpecialXmlElementsBuilders_6f5a75ccd8c04465] = env->getMethodID(cls, "getSpecialXmlElementsBuilders", "()Ljava/util/Map;");
                mids$[mid_parseMessage_455adfd4ae4ab630] = env->getMethodID(cls, "parseMessage", "(Lorg/orekit/data/DataSource;)Ljava/lang/Object;");
                mids$[mid_process_60c6e06c33a7585b] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)V");
                mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_reset_e250621f009e45db] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonMessageParser::PythonMessageParser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            void PythonMessageParser::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
            }

            jlong PythonMessageParser::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
            }

            void PythonMessageParser::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
            static PyObject *t_PythonMessageParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonMessageParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonMessageParser_of_(t_PythonMessageParser *self, PyObject *args);
            static int t_PythonMessageParser_init_(t_PythonMessageParser *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonMessageParser_finalize(t_PythonMessageParser *self);
            static PyObject *t_PythonMessageParser_pythonExtension(t_PythonMessageParser *self, PyObject *args);
            static jobject JNICALL t_PythonMessageParser_build0(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonMessageParser_getFileFormat1(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonMessageParser_getFormatVersionKey2(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonMessageParser_getSpecialXmlElementsBuilders3(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonMessageParser_parseMessage4(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonMessageParser_process5(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonMessageParser_pythonDecRef6(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonMessageParser_reset7(JNIEnv *jenv, jobject jobj, jobject a0);
            static PyObject *t_PythonMessageParser_get__self(t_PythonMessageParser *self, void *data);
            static PyObject *t_PythonMessageParser_get__parameters_(t_PythonMessageParser *self, void *data);
            static PyGetSetDef t_PythonMessageParser__fields_[] = {
              DECLARE_GET_FIELD(t_PythonMessageParser, self),
              DECLARE_GET_FIELD(t_PythonMessageParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonMessageParser__methods_[] = {
              DECLARE_METHOD(t_PythonMessageParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonMessageParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonMessageParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_PythonMessageParser, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonMessageParser, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonMessageParser)[] = {
              { Py_tp_methods, t_PythonMessageParser__methods_ },
              { Py_tp_init, (void *) t_PythonMessageParser_init_ },
              { Py_tp_getset, t_PythonMessageParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonMessageParser)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonMessageParser, t_PythonMessageParser, PythonMessageParser);
            PyObject *t_PythonMessageParser::wrap_Object(const PythonMessageParser& object, PyTypeObject *p0)
            {
              PyObject *obj = t_PythonMessageParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonMessageParser *self = (t_PythonMessageParser *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_PythonMessageParser::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_PythonMessageParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonMessageParser *self = (t_PythonMessageParser *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_PythonMessageParser::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonMessageParser), &PY_TYPE_DEF(PythonMessageParser), module, "PythonMessageParser", 1);
            }

            void t_PythonMessageParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageParser), "class_", make_descriptor(PythonMessageParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageParser), "wrapfn_", make_descriptor(t_PythonMessageParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageParser), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonMessageParser::initializeClass);
              JNINativeMethod methods[] = {
                { "build", "()Ljava/lang/Object;", (void *) t_PythonMessageParser_build0 },
                { "getFileFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;", (void *) t_PythonMessageParser_getFileFormat1 },
                { "getFormatVersionKey", "()Ljava/lang/String;", (void *) t_PythonMessageParser_getFormatVersionKey2 },
                { "getSpecialXmlElementsBuilders", "()Ljava/util/Map;", (void *) t_PythonMessageParser_getSpecialXmlElementsBuilders3 },
                { "parseMessage", "(Lorg/orekit/data/DataSource;)Ljava/lang/Object;", (void *) t_PythonMessageParser_parseMessage4 },
                { "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)V", (void *) t_PythonMessageParser_process5 },
                { "pythonDecRef", "()V", (void *) t_PythonMessageParser_pythonDecRef6 },
                { "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V", (void *) t_PythonMessageParser_reset7 },
              };
              env->registerNatives(cls, methods, 8);
            }

            static PyObject *t_PythonMessageParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonMessageParser::initializeClass, 1)))
                return NULL;
              return t_PythonMessageParser::wrap_Object(PythonMessageParser(((t_PythonMessageParser *) arg)->object.this$));
            }
            static PyObject *t_PythonMessageParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonMessageParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PythonMessageParser_of_(t_PythonMessageParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_PythonMessageParser_init_(t_PythonMessageParser *self, PyObject *args, PyObject *kwds)
            {
              PythonMessageParser object((jobject) NULL);

              INT_CALL(object = PythonMessageParser());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonMessageParser_finalize(t_PythonMessageParser *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonMessageParser_pythonExtension(t_PythonMessageParser *self, PyObject *args)
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

            static jobject JNICALL t_PythonMessageParser_build0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageParser::mids$[PythonMessageParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::Object value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "build", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "o", &value))
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

            static jobject JNICALL t_PythonMessageParser_getFileFormat1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageParser::mids$[PythonMessageParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::files::ccsds::utils::FileFormat value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getFileFormat", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &value))
              {
                throwTypeError("getFileFormat", result);
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

            static jobject JNICALL t_PythonMessageParser_getFormatVersionKey2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageParser::mids$[PythonMessageParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getFormatVersionKey", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("getFormatVersionKey", result);
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

            static jobject JNICALL t_PythonMessageParser_getSpecialXmlElementsBuilders3(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageParser::mids$[PythonMessageParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::util::Map value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getSpecialXmlElementsBuilders", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::java::util::Map::initializeClass, &value))
              {
                throwTypeError("getSpecialXmlElementsBuilders", result);
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

            static jobject JNICALL t_PythonMessageParser_parseMessage4(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageParser::mids$[PythonMessageParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::Object value((jobject) NULL);
              PyObject *o0 = ::org::orekit::data::t_DataSource::wrap_Object(::org::orekit::data::DataSource(a0));
              PyObject *result = PyObject_CallMethod(obj, "parseMessage", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "o", &value))
              {
                throwTypeError("parseMessage", result);
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

            static void JNICALL t_PythonMessageParser_process5(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageParser::mids$[PythonMessageParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::org::orekit::files::ccsds::utils::lexical::t_ParseToken::wrap_Object(::org::orekit::files::ccsds::utils::lexical::ParseToken(a0));
              PyObject *result = PyObject_CallMethod(obj, "process", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonMessageParser_pythonDecRef6(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageParser::mids$[PythonMessageParser::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonMessageParser::mids$[PythonMessageParser::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static void JNICALL t_PythonMessageParser_reset7(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageParser::mids$[PythonMessageParser::mid_pythonExtension_492808a339bfa35f]);
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

            static PyObject *t_PythonMessageParser_get__self(t_PythonMessageParser *self, void *data)
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
            static PyObject *t_PythonMessageParser_get__parameters_(t_PythonMessageParser *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
