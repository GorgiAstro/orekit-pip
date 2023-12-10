#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/KvnLexicalAnalyzer.h"
#include "org/orekit/files/ccsds/utils/lexical/MessageParser.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/files/ccsds/utils/lexical/LexicalAnalyzer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *KvnLexicalAnalyzer::class$ = NULL;
            jmethodID *KvnLexicalAnalyzer::mids$ = NULL;
            bool KvnLexicalAnalyzer::live$ = false;

            jclass KvnLexicalAnalyzer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/KvnLexicalAnalyzer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_178426610ec237d4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;)V");
                mids$[mid_accept_b8fbb626a8a68048] = env->getMethodID(cls, "accept", "(Lorg/orekit/files/ccsds/utils/lexical/MessageParser;)Ljava/lang/Object;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            KvnLexicalAnalyzer::KvnLexicalAnalyzer(const ::org::orekit::data::DataSource & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_178426610ec237d4, a0.this$)) {}

            ::java::lang::Object KvnLexicalAnalyzer::accept(const ::org::orekit::files::ccsds::utils::lexical::MessageParser & a0) const
            {
              return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_accept_b8fbb626a8a68048], a0.this$));
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
            static PyObject *t_KvnLexicalAnalyzer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_KvnLexicalAnalyzer_instance_(PyTypeObject *type, PyObject *arg);
            static int t_KvnLexicalAnalyzer_init_(t_KvnLexicalAnalyzer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_KvnLexicalAnalyzer_accept(t_KvnLexicalAnalyzer *self, PyObject *arg);

            static PyMethodDef t_KvnLexicalAnalyzer__methods_[] = {
              DECLARE_METHOD(t_KvnLexicalAnalyzer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_KvnLexicalAnalyzer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_KvnLexicalAnalyzer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(KvnLexicalAnalyzer)[] = {
              { Py_tp_methods, t_KvnLexicalAnalyzer__methods_ },
              { Py_tp_init, (void *) t_KvnLexicalAnalyzer_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(KvnLexicalAnalyzer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(KvnLexicalAnalyzer, t_KvnLexicalAnalyzer, KvnLexicalAnalyzer);

            void t_KvnLexicalAnalyzer::install(PyObject *module)
            {
              installType(&PY_TYPE(KvnLexicalAnalyzer), &PY_TYPE_DEF(KvnLexicalAnalyzer), module, "KvnLexicalAnalyzer", 0);
            }

            void t_KvnLexicalAnalyzer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(KvnLexicalAnalyzer), "class_", make_descriptor(KvnLexicalAnalyzer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KvnLexicalAnalyzer), "wrapfn_", make_descriptor(t_KvnLexicalAnalyzer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KvnLexicalAnalyzer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_KvnLexicalAnalyzer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, KvnLexicalAnalyzer::initializeClass, 1)))
                return NULL;
              return t_KvnLexicalAnalyzer::wrap_Object(KvnLexicalAnalyzer(((t_KvnLexicalAnalyzer *) arg)->object.this$));
            }
            static PyObject *t_KvnLexicalAnalyzer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, KvnLexicalAnalyzer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_KvnLexicalAnalyzer_init_(t_KvnLexicalAnalyzer *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::data::DataSource a0((jobject) NULL);
              KvnLexicalAnalyzer object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
              {
                INT_CALL(object = KvnLexicalAnalyzer(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_KvnLexicalAnalyzer_accept(t_KvnLexicalAnalyzer *self, PyObject *arg)
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
#include "org/orekit/files/sp3/DataUsed.h"
#include "org/orekit/files/sp3/DataUsed.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *DataUsed::class$ = NULL;
        jmethodID *DataUsed::mids$ = NULL;
        bool DataUsed::live$ = false;
        DataUsed *DataUsed::CHANGE_IN_TWO_RECEIVER_ONE_SATELLITE_CARRIER_PHASE = NULL;
        DataUsed *DataUsed::CHANGE_IN_TWO_RECEIVER_ONE_SATELLITE_CODE_PHASE = NULL;
        DataUsed *DataUsed::CHANGE_IN_TWO_RECEIVER_TWO_SATELLITE_CARRIER_PHASE = NULL;
        DataUsed *DataUsed::CHANGE_IN_TWO_RECEIVER_TWO_SATELLITE_CODE_PHASE = NULL;
        DataUsed *DataUsed::CHANGE_IN_UNDIFFERENTIATED_CARRIER_PHASE = NULL;
        DataUsed *DataUsed::CHANGE_IN_UNDIFFERENTIATED_CODE_PHASE = NULL;
        DataUsed *DataUsed::MIXED = NULL;
        DataUsed *DataUsed::ORBIT = NULL;
        DataUsed *DataUsed::SATELLITE_LASER_RANGING = NULL;
        DataUsed *DataUsed::TWO_RECEIVER_ONE_SATELLITE_CARRIER_PHASE = NULL;
        DataUsed *DataUsed::TWO_RECEIVER_ONE_SATELLITE_CODE_PHASE = NULL;
        DataUsed *DataUsed::TWO_RECEIVER_TWO_SATELLITE_CARRIER_PHASE = NULL;
        DataUsed *DataUsed::TWO_RECEIVER_TWO_SATELLITE_CODE_PHASE = NULL;
        DataUsed *DataUsed::UNDIFFERENTIATED_CARRIER_PHASE = NULL;
        DataUsed *DataUsed::UNDIFFERENTIATED_CODE_PHASE = NULL;

        jclass DataUsed::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/DataUsed");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getKey_0090f7797e403f43] = env->getMethodID(cls, "getKey", "()Ljava/lang/String;");
            mids$[mid_parse_98fea967950d5792] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;Ljava/lang/String;C)Lorg/orekit/files/sp3/DataUsed;");
            mids$[mid_valueOf_77c7cecd18cf70ed] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/sp3/DataUsed;");
            mids$[mid_values_2e0b34ad799220f7] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/sp3/DataUsed;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            CHANGE_IN_TWO_RECEIVER_ONE_SATELLITE_CARRIER_PHASE = new DataUsed(env->getStaticObjectField(cls, "CHANGE_IN_TWO_RECEIVER_ONE_SATELLITE_CARRIER_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            CHANGE_IN_TWO_RECEIVER_ONE_SATELLITE_CODE_PHASE = new DataUsed(env->getStaticObjectField(cls, "CHANGE_IN_TWO_RECEIVER_ONE_SATELLITE_CODE_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            CHANGE_IN_TWO_RECEIVER_TWO_SATELLITE_CARRIER_PHASE = new DataUsed(env->getStaticObjectField(cls, "CHANGE_IN_TWO_RECEIVER_TWO_SATELLITE_CARRIER_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            CHANGE_IN_TWO_RECEIVER_TWO_SATELLITE_CODE_PHASE = new DataUsed(env->getStaticObjectField(cls, "CHANGE_IN_TWO_RECEIVER_TWO_SATELLITE_CODE_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            CHANGE_IN_UNDIFFERENTIATED_CARRIER_PHASE = new DataUsed(env->getStaticObjectField(cls, "CHANGE_IN_UNDIFFERENTIATED_CARRIER_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            CHANGE_IN_UNDIFFERENTIATED_CODE_PHASE = new DataUsed(env->getStaticObjectField(cls, "CHANGE_IN_UNDIFFERENTIATED_CODE_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            MIXED = new DataUsed(env->getStaticObjectField(cls, "MIXED", "Lorg/orekit/files/sp3/DataUsed;"));
            ORBIT = new DataUsed(env->getStaticObjectField(cls, "ORBIT", "Lorg/orekit/files/sp3/DataUsed;"));
            SATELLITE_LASER_RANGING = new DataUsed(env->getStaticObjectField(cls, "SATELLITE_LASER_RANGING", "Lorg/orekit/files/sp3/DataUsed;"));
            TWO_RECEIVER_ONE_SATELLITE_CARRIER_PHASE = new DataUsed(env->getStaticObjectField(cls, "TWO_RECEIVER_ONE_SATELLITE_CARRIER_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            TWO_RECEIVER_ONE_SATELLITE_CODE_PHASE = new DataUsed(env->getStaticObjectField(cls, "TWO_RECEIVER_ONE_SATELLITE_CODE_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            TWO_RECEIVER_TWO_SATELLITE_CARRIER_PHASE = new DataUsed(env->getStaticObjectField(cls, "TWO_RECEIVER_TWO_SATELLITE_CARRIER_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            TWO_RECEIVER_TWO_SATELLITE_CODE_PHASE = new DataUsed(env->getStaticObjectField(cls, "TWO_RECEIVER_TWO_SATELLITE_CODE_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            UNDIFFERENTIATED_CARRIER_PHASE = new DataUsed(env->getStaticObjectField(cls, "UNDIFFERENTIATED_CARRIER_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            UNDIFFERENTIATED_CODE_PHASE = new DataUsed(env->getStaticObjectField(cls, "UNDIFFERENTIATED_CODE_PHASE", "Lorg/orekit/files/sp3/DataUsed;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::lang::String DataUsed::getKey() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getKey_0090f7797e403f43]));
        }

        DataUsed DataUsed::parse(const ::java::lang::String & a0, const ::java::lang::String & a1, jchar a2)
        {
          jclass cls = env->getClass(initializeClass);
          return DataUsed(env->callStaticObjectMethod(cls, mids$[mid_parse_98fea967950d5792], a0.this$, a1.this$, a2));
        }

        DataUsed DataUsed::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return DataUsed(env->callStaticObjectMethod(cls, mids$[mid_valueOf_77c7cecd18cf70ed], a0.this$));
        }

        JArray< DataUsed > DataUsed::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< DataUsed >(env->callStaticObjectMethod(cls, mids$[mid_values_2e0b34ad799220f7]));
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
        static PyObject *t_DataUsed_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DataUsed_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DataUsed_of_(t_DataUsed *self, PyObject *args);
        static PyObject *t_DataUsed_getKey(t_DataUsed *self);
        static PyObject *t_DataUsed_parse(PyTypeObject *type, PyObject *args);
        static PyObject *t_DataUsed_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_DataUsed_values(PyTypeObject *type);
        static PyObject *t_DataUsed_get__key(t_DataUsed *self, void *data);
        static PyObject *t_DataUsed_get__parameters_(t_DataUsed *self, void *data);
        static PyGetSetDef t_DataUsed__fields_[] = {
          DECLARE_GET_FIELD(t_DataUsed, key),
          DECLARE_GET_FIELD(t_DataUsed, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DataUsed__methods_[] = {
          DECLARE_METHOD(t_DataUsed, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DataUsed, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DataUsed, of_, METH_VARARGS),
          DECLARE_METHOD(t_DataUsed, getKey, METH_NOARGS),
          DECLARE_METHOD(t_DataUsed, parse, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DataUsed, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DataUsed, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DataUsed)[] = {
          { Py_tp_methods, t_DataUsed__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_DataUsed__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DataUsed)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(DataUsed, t_DataUsed, DataUsed);
        PyObject *t_DataUsed::wrap_Object(const DataUsed& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DataUsed::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DataUsed *self = (t_DataUsed *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_DataUsed::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DataUsed::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DataUsed *self = (t_DataUsed *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_DataUsed::install(PyObject *module)
        {
          installType(&PY_TYPE(DataUsed), &PY_TYPE_DEF(DataUsed), module, "DataUsed", 0);
        }

        void t_DataUsed::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "class_", make_descriptor(DataUsed::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "wrapfn_", make_descriptor(t_DataUsed::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "boxfn_", make_descriptor(boxObject));
          env->getClass(DataUsed::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "CHANGE_IN_TWO_RECEIVER_ONE_SATELLITE_CARRIER_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::CHANGE_IN_TWO_RECEIVER_ONE_SATELLITE_CARRIER_PHASE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "CHANGE_IN_TWO_RECEIVER_ONE_SATELLITE_CODE_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::CHANGE_IN_TWO_RECEIVER_ONE_SATELLITE_CODE_PHASE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "CHANGE_IN_TWO_RECEIVER_TWO_SATELLITE_CARRIER_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::CHANGE_IN_TWO_RECEIVER_TWO_SATELLITE_CARRIER_PHASE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "CHANGE_IN_TWO_RECEIVER_TWO_SATELLITE_CODE_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::CHANGE_IN_TWO_RECEIVER_TWO_SATELLITE_CODE_PHASE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "CHANGE_IN_UNDIFFERENTIATED_CARRIER_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::CHANGE_IN_UNDIFFERENTIATED_CARRIER_PHASE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "CHANGE_IN_UNDIFFERENTIATED_CODE_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::CHANGE_IN_UNDIFFERENTIATED_CODE_PHASE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "MIXED", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::MIXED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "ORBIT", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::ORBIT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "SATELLITE_LASER_RANGING", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::SATELLITE_LASER_RANGING)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "TWO_RECEIVER_ONE_SATELLITE_CARRIER_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::TWO_RECEIVER_ONE_SATELLITE_CARRIER_PHASE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "TWO_RECEIVER_ONE_SATELLITE_CODE_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::TWO_RECEIVER_ONE_SATELLITE_CODE_PHASE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "TWO_RECEIVER_TWO_SATELLITE_CARRIER_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::TWO_RECEIVER_TWO_SATELLITE_CARRIER_PHASE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "TWO_RECEIVER_TWO_SATELLITE_CODE_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::TWO_RECEIVER_TWO_SATELLITE_CODE_PHASE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "UNDIFFERENTIATED_CARRIER_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::UNDIFFERENTIATED_CARRIER_PHASE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DataUsed), "UNDIFFERENTIATED_CODE_PHASE", make_descriptor(t_DataUsed::wrap_Object(*DataUsed::UNDIFFERENTIATED_CODE_PHASE)));
        }

        static PyObject *t_DataUsed_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DataUsed::initializeClass, 1)))
            return NULL;
          return t_DataUsed::wrap_Object(DataUsed(((t_DataUsed *) arg)->object.this$));
        }
        static PyObject *t_DataUsed_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DataUsed::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DataUsed_of_(t_DataUsed *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_DataUsed_getKey(t_DataUsed *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getKey());
          return j2p(result);
        }

        static PyObject *t_DataUsed_parse(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          jchar a2;
          DataUsed result((jobject) NULL);

          if (!parseArgs(args, "ssC", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::orekit::files::sp3::DataUsed::parse(a0, a1, a2));
            return t_DataUsed::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "parse", args);
          return NULL;
        }

        static PyObject *t_DataUsed_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          DataUsed result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::sp3::DataUsed::valueOf(a0));
            return t_DataUsed::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_DataUsed_values(PyTypeObject *type)
        {
          JArray< DataUsed > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::files::sp3::DataUsed::values());
          return JArray<jobject>(result.this$).wrap(t_DataUsed::wrap_jobject);
        }
        static PyObject *t_DataUsed_get__parameters_(t_DataUsed *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_DataUsed_get__key(t_DataUsed *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getKey());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/TransformGenerator.h"
#include "java/util/List.h"
#include "org/orekit/utils/TimeStampedGenerator.h"
#include "org/orekit/frames/TransformProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Transform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *TransformGenerator::class$ = NULL;
      jmethodID *TransformGenerator::mids$ = NULL;
      bool TransformGenerator::live$ = false;

      jclass TransformGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/TransformGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7d82f57afcc5208d] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/TransformProvider;D)V");
          mids$[mid_generate_b7149ea6787a6f3c] = env->getMethodID(cls, "generate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TransformGenerator::TransformGenerator(jint a0, const ::org::orekit::frames::TransformProvider & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7d82f57afcc5208d, a0, a1.this$, a2)) {}

      ::java::util::List TransformGenerator::generate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_generate_b7149ea6787a6f3c], a0.this$, a1.this$));
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
      static PyObject *t_TransformGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TransformGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TransformGenerator_init_(t_TransformGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TransformGenerator_generate(t_TransformGenerator *self, PyObject *args);

      static PyMethodDef t_TransformGenerator__methods_[] = {
        DECLARE_METHOD(t_TransformGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TransformGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TransformGenerator, generate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TransformGenerator)[] = {
        { Py_tp_methods, t_TransformGenerator__methods_ },
        { Py_tp_init, (void *) t_TransformGenerator_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TransformGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TransformGenerator, t_TransformGenerator, TransformGenerator);

      void t_TransformGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(TransformGenerator), &PY_TYPE_DEF(TransformGenerator), module, "TransformGenerator", 0);
      }

      void t_TransformGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformGenerator), "class_", make_descriptor(TransformGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformGenerator), "wrapfn_", make_descriptor(t_TransformGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TransformGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TransformGenerator::initializeClass, 1)))
          return NULL;
        return t_TransformGenerator::wrap_Object(TransformGenerator(((t_TransformGenerator *) arg)->object.this$));
      }
      static PyObject *t_TransformGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TransformGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TransformGenerator_init_(t_TransformGenerator *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        ::org::orekit::frames::TransformProvider a1((jobject) NULL);
        jdouble a2;
        TransformGenerator object((jobject) NULL);

        if (!parseArgs(args, "IkD", ::org::orekit::frames::TransformProvider::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = TransformGenerator(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_TransformGenerator_generate(t_TransformGenerator *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.generate(a0, a1));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::frames::PY_TYPE(Transform));
        }

        PyErr_SetArgsError((PyObject *) self, "generate", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/FieldInertia.h"
#include "org/orekit/attitudes/FieldInertiaAxis.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/FieldInertia.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *FieldInertia::class$ = NULL;
      jmethodID *FieldInertia::mids$ = NULL;
      bool FieldInertia::live$ = false;

      jclass FieldInertia::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/FieldInertia");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getInertiaAxis1_ae6ac15c00e0e7cc] = env->getMethodID(cls, "getInertiaAxis1", "()Lorg/orekit/attitudes/FieldInertiaAxis;");
          mids$[mid_getInertiaAxis2_ae6ac15c00e0e7cc] = env->getMethodID(cls, "getInertiaAxis2", "()Lorg/orekit/attitudes/FieldInertiaAxis;");
          mids$[mid_getInertiaAxis3_ae6ac15c00e0e7cc] = env->getMethodID(cls, "getInertiaAxis3", "()Lorg/orekit/attitudes/FieldInertiaAxis;");
          mids$[mid_momentum_8ff2edc0ecba4b6e] = env->getMethodID(cls, "momentum", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_swap12_08e0e7fcb388926f] = env->getMethodID(cls, "swap12", "()Lorg/orekit/attitudes/FieldInertia;");
          mids$[mid_swap13_08e0e7fcb388926f] = env->getMethodID(cls, "swap13", "()Lorg/orekit/attitudes/FieldInertia;");
          mids$[mid_swap23_08e0e7fcb388926f] = env->getMethodID(cls, "swap23", "()Lorg/orekit/attitudes/FieldInertia;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::attitudes::FieldInertiaAxis FieldInertia::getInertiaAxis1() const
      {
        return ::org::orekit::attitudes::FieldInertiaAxis(env->callObjectMethod(this$, mids$[mid_getInertiaAxis1_ae6ac15c00e0e7cc]));
      }

      ::org::orekit::attitudes::FieldInertiaAxis FieldInertia::getInertiaAxis2() const
      {
        return ::org::orekit::attitudes::FieldInertiaAxis(env->callObjectMethod(this$, mids$[mid_getInertiaAxis2_ae6ac15c00e0e7cc]));
      }

      ::org::orekit::attitudes::FieldInertiaAxis FieldInertia::getInertiaAxis3() const
      {
        return ::org::orekit::attitudes::FieldInertiaAxis(env->callObjectMethod(this$, mids$[mid_getInertiaAxis3_ae6ac15c00e0e7cc]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldInertia::momentum(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_momentum_8ff2edc0ecba4b6e], a0.this$));
      }

      FieldInertia FieldInertia::swap12() const
      {
        return FieldInertia(env->callObjectMethod(this$, mids$[mid_swap12_08e0e7fcb388926f]));
      }

      FieldInertia FieldInertia::swap13() const
      {
        return FieldInertia(env->callObjectMethod(this$, mids$[mid_swap13_08e0e7fcb388926f]));
      }

      FieldInertia FieldInertia::swap23() const
      {
        return FieldInertia(env->callObjectMethod(this$, mids$[mid_swap23_08e0e7fcb388926f]));
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
      static PyObject *t_FieldInertia_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldInertia_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldInertia_of_(t_FieldInertia *self, PyObject *args);
      static PyObject *t_FieldInertia_getInertiaAxis1(t_FieldInertia *self);
      static PyObject *t_FieldInertia_getInertiaAxis2(t_FieldInertia *self);
      static PyObject *t_FieldInertia_getInertiaAxis3(t_FieldInertia *self);
      static PyObject *t_FieldInertia_momentum(t_FieldInertia *self, PyObject *arg);
      static PyObject *t_FieldInertia_swap12(t_FieldInertia *self);
      static PyObject *t_FieldInertia_swap13(t_FieldInertia *self);
      static PyObject *t_FieldInertia_swap23(t_FieldInertia *self);
      static PyObject *t_FieldInertia_get__inertiaAxis1(t_FieldInertia *self, void *data);
      static PyObject *t_FieldInertia_get__inertiaAxis2(t_FieldInertia *self, void *data);
      static PyObject *t_FieldInertia_get__inertiaAxis3(t_FieldInertia *self, void *data);
      static PyObject *t_FieldInertia_get__parameters_(t_FieldInertia *self, void *data);
      static PyGetSetDef t_FieldInertia__fields_[] = {
        DECLARE_GET_FIELD(t_FieldInertia, inertiaAxis1),
        DECLARE_GET_FIELD(t_FieldInertia, inertiaAxis2),
        DECLARE_GET_FIELD(t_FieldInertia, inertiaAxis3),
        DECLARE_GET_FIELD(t_FieldInertia, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldInertia__methods_[] = {
        DECLARE_METHOD(t_FieldInertia, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldInertia, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldInertia, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldInertia, getInertiaAxis1, METH_NOARGS),
        DECLARE_METHOD(t_FieldInertia, getInertiaAxis2, METH_NOARGS),
        DECLARE_METHOD(t_FieldInertia, getInertiaAxis3, METH_NOARGS),
        DECLARE_METHOD(t_FieldInertia, momentum, METH_O),
        DECLARE_METHOD(t_FieldInertia, swap12, METH_NOARGS),
        DECLARE_METHOD(t_FieldInertia, swap13, METH_NOARGS),
        DECLARE_METHOD(t_FieldInertia, swap23, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldInertia)[] = {
        { Py_tp_methods, t_FieldInertia__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldInertia__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldInertia)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldInertia, t_FieldInertia, FieldInertia);
      PyObject *t_FieldInertia::wrap_Object(const FieldInertia& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldInertia::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldInertia *self = (t_FieldInertia *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldInertia::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldInertia::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldInertia *self = (t_FieldInertia *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldInertia::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldInertia), &PY_TYPE_DEF(FieldInertia), module, "FieldInertia", 0);
      }

      void t_FieldInertia::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldInertia), "class_", make_descriptor(FieldInertia::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldInertia), "wrapfn_", make_descriptor(t_FieldInertia::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldInertia), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldInertia_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldInertia::initializeClass, 1)))
          return NULL;
        return t_FieldInertia::wrap_Object(FieldInertia(((t_FieldInertia *) arg)->object.this$));
      }
      static PyObject *t_FieldInertia_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldInertia::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldInertia_of_(t_FieldInertia *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldInertia_getInertiaAxis1(t_FieldInertia *self)
      {
        ::org::orekit::attitudes::FieldInertiaAxis result((jobject) NULL);
        OBJ_CALL(result = self->object.getInertiaAxis1());
        return ::org::orekit::attitudes::t_FieldInertiaAxis::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldInertia_getInertiaAxis2(t_FieldInertia *self)
      {
        ::org::orekit::attitudes::FieldInertiaAxis result((jobject) NULL);
        OBJ_CALL(result = self->object.getInertiaAxis2());
        return ::org::orekit::attitudes::t_FieldInertiaAxis::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldInertia_getInertiaAxis3(t_FieldInertia *self)
      {
        ::org::orekit::attitudes::FieldInertiaAxis result((jobject) NULL);
        OBJ_CALL(result = self->object.getInertiaAxis3());
        return ::org::orekit::attitudes::t_FieldInertiaAxis::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldInertia_momentum(t_FieldInertia *self, PyObject *arg)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
        {
          OBJ_CALL(result = self->object.momentum(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "momentum", arg);
        return NULL;
      }

      static PyObject *t_FieldInertia_swap12(t_FieldInertia *self)
      {
        FieldInertia result((jobject) NULL);
        OBJ_CALL(result = self->object.swap12());
        return t_FieldInertia::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldInertia_swap13(t_FieldInertia *self)
      {
        FieldInertia result((jobject) NULL);
        OBJ_CALL(result = self->object.swap13());
        return t_FieldInertia::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldInertia_swap23(t_FieldInertia *self)
      {
        FieldInertia result((jobject) NULL);
        OBJ_CALL(result = self->object.swap23());
        return t_FieldInertia::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldInertia_get__parameters_(t_FieldInertia *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldInertia_get__inertiaAxis1(t_FieldInertia *self, void *data)
      {
        ::org::orekit::attitudes::FieldInertiaAxis value((jobject) NULL);
        OBJ_CALL(value = self->object.getInertiaAxis1());
        return ::org::orekit::attitudes::t_FieldInertiaAxis::wrap_Object(value);
      }

      static PyObject *t_FieldInertia_get__inertiaAxis2(t_FieldInertia *self, void *data)
      {
        ::org::orekit::attitudes::FieldInertiaAxis value((jobject) NULL);
        OBJ_CALL(value = self->object.getInertiaAxis2());
        return ::org::orekit::attitudes::t_FieldInertiaAxis::wrap_Object(value);
      }

      static PyObject *t_FieldInertia_get__inertiaAxis3(t_FieldInertia *self, void *data)
      {
        ::org::orekit::attitudes::FieldInertiaAxis value((jobject) NULL);
        OBJ_CALL(value = self->object.getInertiaAxis3());
        return ::org::orekit::attitudes::t_FieldInertiaAxis::wrap_Object(value);
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
#include "org/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/XYZCovariance.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *XYZCovarianceKey::class$ = NULL;
            jmethodID *XYZCovarianceKey::mids$ = NULL;
            bool XYZCovarianceKey::live$ = false;
            XYZCovarianceKey *XYZCovarianceKey::CDRG_DRG = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CDRG_X = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CDRG_XDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CDRG_Y = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CDRG_YDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CDRG_Z = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CDRG_ZDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::COMMENT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CSRP_DRG = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CSRP_SRP = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CSRP_X = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CSRP_XDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CSRP_Y = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CSRP_YDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CSRP_Z = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CSRP_ZDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CTHR_DRG = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CTHR_SRP = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CTHR_THR = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CTHR_X = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CTHR_XDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CTHR_Y = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CTHR_YDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CTHR_Z = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CTHR_ZDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CXDOT_X = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CXDOT_XDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CXDOT_Y = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CXDOT_Z = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CX_X = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CYDOT_X = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CYDOT_XDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CYDOT_Y = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CYDOT_YDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CYDOT_Z = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CY_X = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CY_Y = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CZDOT_X = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CZDOT_XDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CZDOT_Y = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CZDOT_YDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CZDOT_Z = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CZDOT_ZDOT = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CZ_X = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CZ_Y = NULL;
            XYZCovarianceKey *XYZCovarianceKey::CZ_Z = NULL;

            jclass XYZCovarianceKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_9ddb3430030ce857] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/XYZCovariance;)Z");
                mids$[mid_valueOf_55300e18a2255910] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;");
                mids$[mid_values_14c11261ca940f0a] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CDRG_DRG = new XYZCovarianceKey(env->getStaticObjectField(cls, "CDRG_DRG", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CDRG_X = new XYZCovarianceKey(env->getStaticObjectField(cls, "CDRG_X", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CDRG_XDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CDRG_XDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CDRG_Y = new XYZCovarianceKey(env->getStaticObjectField(cls, "CDRG_Y", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CDRG_YDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CDRG_YDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CDRG_Z = new XYZCovarianceKey(env->getStaticObjectField(cls, "CDRG_Z", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CDRG_ZDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CDRG_ZDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                COMMENT = new XYZCovarianceKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CSRP_DRG = new XYZCovarianceKey(env->getStaticObjectField(cls, "CSRP_DRG", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CSRP_SRP = new XYZCovarianceKey(env->getStaticObjectField(cls, "CSRP_SRP", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CSRP_X = new XYZCovarianceKey(env->getStaticObjectField(cls, "CSRP_X", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CSRP_XDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CSRP_XDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CSRP_Y = new XYZCovarianceKey(env->getStaticObjectField(cls, "CSRP_Y", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CSRP_YDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CSRP_YDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CSRP_Z = new XYZCovarianceKey(env->getStaticObjectField(cls, "CSRP_Z", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CSRP_ZDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CSRP_ZDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CTHR_DRG = new XYZCovarianceKey(env->getStaticObjectField(cls, "CTHR_DRG", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CTHR_SRP = new XYZCovarianceKey(env->getStaticObjectField(cls, "CTHR_SRP", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CTHR_THR = new XYZCovarianceKey(env->getStaticObjectField(cls, "CTHR_THR", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CTHR_X = new XYZCovarianceKey(env->getStaticObjectField(cls, "CTHR_X", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CTHR_XDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CTHR_XDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CTHR_Y = new XYZCovarianceKey(env->getStaticObjectField(cls, "CTHR_Y", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CTHR_YDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CTHR_YDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CTHR_Z = new XYZCovarianceKey(env->getStaticObjectField(cls, "CTHR_Z", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CTHR_ZDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CTHR_ZDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CXDOT_X = new XYZCovarianceKey(env->getStaticObjectField(cls, "CXDOT_X", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CXDOT_XDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CXDOT_XDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CXDOT_Y = new XYZCovarianceKey(env->getStaticObjectField(cls, "CXDOT_Y", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CXDOT_Z = new XYZCovarianceKey(env->getStaticObjectField(cls, "CXDOT_Z", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CX_X = new XYZCovarianceKey(env->getStaticObjectField(cls, "CX_X", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CYDOT_X = new XYZCovarianceKey(env->getStaticObjectField(cls, "CYDOT_X", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CYDOT_XDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CYDOT_XDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CYDOT_Y = new XYZCovarianceKey(env->getStaticObjectField(cls, "CYDOT_Y", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CYDOT_YDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CYDOT_YDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CYDOT_Z = new XYZCovarianceKey(env->getStaticObjectField(cls, "CYDOT_Z", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CY_X = new XYZCovarianceKey(env->getStaticObjectField(cls, "CY_X", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CY_Y = new XYZCovarianceKey(env->getStaticObjectField(cls, "CY_Y", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CZDOT_X = new XYZCovarianceKey(env->getStaticObjectField(cls, "CZDOT_X", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CZDOT_XDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CZDOT_XDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CZDOT_Y = new XYZCovarianceKey(env->getStaticObjectField(cls, "CZDOT_Y", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CZDOT_YDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CZDOT_YDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CZDOT_Z = new XYZCovarianceKey(env->getStaticObjectField(cls, "CZDOT_Z", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CZDOT_ZDOT = new XYZCovarianceKey(env->getStaticObjectField(cls, "CZDOT_ZDOT", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CZ_X = new XYZCovarianceKey(env->getStaticObjectField(cls, "CZ_X", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CZ_Y = new XYZCovarianceKey(env->getStaticObjectField(cls, "CZ_Y", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                CZ_Z = new XYZCovarianceKey(env->getStaticObjectField(cls, "CZ_Z", "Lorg/orekit/files/ccsds/ndm/cdm/XYZCovarianceKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean XYZCovarianceKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_9ddb3430030ce857], a0.this$, a1.this$, a2.this$);
            }

            XYZCovarianceKey XYZCovarianceKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return XYZCovarianceKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_55300e18a2255910], a0.this$));
            }

            JArray< XYZCovarianceKey > XYZCovarianceKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< XYZCovarianceKey >(env->callStaticObjectMethod(cls, mids$[mid_values_14c11261ca940f0a]));
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
            static PyObject *t_XYZCovarianceKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_XYZCovarianceKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_XYZCovarianceKey_of_(t_XYZCovarianceKey *self, PyObject *args);
            static PyObject *t_XYZCovarianceKey_process(t_XYZCovarianceKey *self, PyObject *args);
            static PyObject *t_XYZCovarianceKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_XYZCovarianceKey_values(PyTypeObject *type);
            static PyObject *t_XYZCovarianceKey_get__parameters_(t_XYZCovarianceKey *self, void *data);
            static PyGetSetDef t_XYZCovarianceKey__fields_[] = {
              DECLARE_GET_FIELD(t_XYZCovarianceKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_XYZCovarianceKey__methods_[] = {
              DECLARE_METHOD(t_XYZCovarianceKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XYZCovarianceKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XYZCovarianceKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_XYZCovarianceKey, process, METH_VARARGS),
              DECLARE_METHOD(t_XYZCovarianceKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_XYZCovarianceKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(XYZCovarianceKey)[] = {
              { Py_tp_methods, t_XYZCovarianceKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_XYZCovarianceKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(XYZCovarianceKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(XYZCovarianceKey, t_XYZCovarianceKey, XYZCovarianceKey);
            PyObject *t_XYZCovarianceKey::wrap_Object(const XYZCovarianceKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_XYZCovarianceKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_XYZCovarianceKey *self = (t_XYZCovarianceKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_XYZCovarianceKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_XYZCovarianceKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_XYZCovarianceKey *self = (t_XYZCovarianceKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_XYZCovarianceKey::install(PyObject *module)
            {
              installType(&PY_TYPE(XYZCovarianceKey), &PY_TYPE_DEF(XYZCovarianceKey), module, "XYZCovarianceKey", 0);
            }

            void t_XYZCovarianceKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "class_", make_descriptor(XYZCovarianceKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "wrapfn_", make_descriptor(t_XYZCovarianceKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(XYZCovarianceKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CDRG_DRG", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CDRG_DRG)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CDRG_X", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CDRG_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CDRG_XDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CDRG_XDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CDRG_Y", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CDRG_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CDRG_YDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CDRG_YDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CDRG_Z", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CDRG_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CDRG_ZDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CDRG_ZDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "COMMENT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CSRP_DRG", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CSRP_DRG)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CSRP_SRP", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CSRP_SRP)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CSRP_X", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CSRP_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CSRP_XDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CSRP_XDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CSRP_Y", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CSRP_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CSRP_YDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CSRP_YDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CSRP_Z", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CSRP_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CSRP_ZDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CSRP_ZDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CTHR_DRG", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CTHR_DRG)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CTHR_SRP", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CTHR_SRP)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CTHR_THR", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CTHR_THR)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CTHR_X", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CTHR_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CTHR_XDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CTHR_XDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CTHR_Y", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CTHR_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CTHR_YDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CTHR_YDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CTHR_Z", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CTHR_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CTHR_ZDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CTHR_ZDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CXDOT_X", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CXDOT_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CXDOT_XDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CXDOT_XDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CXDOT_Y", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CXDOT_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CXDOT_Z", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CXDOT_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CX_X", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CX_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CYDOT_X", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CYDOT_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CYDOT_XDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CYDOT_XDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CYDOT_Y", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CYDOT_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CYDOT_YDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CYDOT_YDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CYDOT_Z", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CYDOT_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CY_X", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CY_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CY_Y", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CY_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CZDOT_X", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CZDOT_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CZDOT_XDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CZDOT_XDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CZDOT_Y", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CZDOT_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CZDOT_YDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CZDOT_YDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CZDOT_Z", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CZDOT_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CZDOT_ZDOT", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CZDOT_ZDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CZ_X", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CZ_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CZ_Y", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CZ_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XYZCovarianceKey), "CZ_Z", make_descriptor(t_XYZCovarianceKey::wrap_Object(*XYZCovarianceKey::CZ_Z)));
            }

            static PyObject *t_XYZCovarianceKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, XYZCovarianceKey::initializeClass, 1)))
                return NULL;
              return t_XYZCovarianceKey::wrap_Object(XYZCovarianceKey(((t_XYZCovarianceKey *) arg)->object.this$));
            }
            static PyObject *t_XYZCovarianceKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, XYZCovarianceKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_XYZCovarianceKey_of_(t_XYZCovarianceKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_XYZCovarianceKey_process(t_XYZCovarianceKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_XYZCovarianceKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              XYZCovarianceKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::XYZCovarianceKey::valueOf(a0));
                return t_XYZCovarianceKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_XYZCovarianceKey_values(PyTypeObject *type)
            {
              JArray< XYZCovarianceKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::XYZCovarianceKey::values());
              return JArray<jobject>(result.this$).wrap(t_XYZCovarianceKey::wrap_jobject);
            }
            static PyObject *t_XYZCovarianceKey_get__parameters_(t_XYZCovarianceKey *self, void *data)
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
#include "org/orekit/files/general/AttitudeEphemerisFile$AttitudeEphemerisSegment.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
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
            mids$[mid_getAngularCoordinates_a6156df500549a58] = env->getMethodID(cls, "getAngularCoordinates", "()Ljava/util/List;");
            mids$[mid_getAttitudeProvider_05a2839e8fecde67] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/BoundedAttitudeProvider;");
            mids$[mid_getAvailableDerivatives_c14c1c09874639c8] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/AngularDerivativesFilter;");
            mids$[mid_getInterpolationMethod_0090f7797e403f43] = env->getMethodID(cls, "getInterpolationMethod", "()Ljava/lang/String;");
            mids$[mid_getInterpolationSamples_f2f64475e4580546] = env->getMethodID(cls, "getInterpolationSamples", "()I");
            mids$[mid_getReferenceFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getStart_aaa854c403487cf3] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_aaa854c403487cf3] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::util::List AttitudeEphemerisFile$AttitudeEphemerisSegment::getAngularCoordinates() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAngularCoordinates_a6156df500549a58]));
        }

        ::org::orekit::attitudes::BoundedAttitudeProvider AttitudeEphemerisFile$AttitudeEphemerisSegment::getAttitudeProvider() const
        {
          return ::org::orekit::attitudes::BoundedAttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_05a2839e8fecde67]));
        }

        ::org::orekit::utils::AngularDerivativesFilter AttitudeEphemerisFile$AttitudeEphemerisSegment::getAvailableDerivatives() const
        {
          return ::org::orekit::utils::AngularDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_c14c1c09874639c8]));
        }

        ::java::lang::String AttitudeEphemerisFile$AttitudeEphemerisSegment::getInterpolationMethod() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInterpolationMethod_0090f7797e403f43]));
        }

        jint AttitudeEphemerisFile$AttitudeEphemerisSegment::getInterpolationSamples() const
        {
          return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_f2f64475e4580546]);
        }

        ::org::orekit::frames::Frame AttitudeEphemerisFile$AttitudeEphemerisSegment::getReferenceFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_c8fe21bcdac65bf6]));
        }

        ::org::orekit::time::AbsoluteDate AttitudeEphemerisFile$AttitudeEphemerisSegment::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_aaa854c403487cf3]));
        }

        ::org::orekit::time::AbsoluteDate AttitudeEphemerisFile$AttitudeEphemerisSegment::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_aaa854c403487cf3]));
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
#include "org/hipparchus/special/elliptic/jacobi/JacobiTheta.h"
#include "org/hipparchus/special/elliptic/jacobi/Theta.h"
#include "java/lang/Class.h"
#include "org/hipparchus/complex/Complex.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *JacobiTheta::class$ = NULL;
          jmethodID *JacobiTheta::mids$ = NULL;
          bool JacobiTheta::live$ = false;

          jclass JacobiTheta::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/JacobiTheta");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_getQ_456d9a2f64d6b28d] = env->getMethodID(cls, "getQ", "()D");
              mids$[mid_values_1ba12df528dd2e53] = env->getMethodID(cls, "values", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/special/elliptic/jacobi/Theta;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          JacobiTheta::JacobiTheta(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

          jdouble JacobiTheta::getQ() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getQ_456d9a2f64d6b28d]);
          }

          ::org::hipparchus::special::elliptic::jacobi::Theta JacobiTheta::values(const ::org::hipparchus::complex::Complex & a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::Theta(env->callObjectMethod(this$, mids$[mid_values_1ba12df528dd2e53], a0.this$));
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
          static PyObject *t_JacobiTheta_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_JacobiTheta_instance_(PyTypeObject *type, PyObject *arg);
          static int t_JacobiTheta_init_(t_JacobiTheta *self, PyObject *args, PyObject *kwds);
          static PyObject *t_JacobiTheta_getQ(t_JacobiTheta *self);
          static PyObject *t_JacobiTheta_values(t_JacobiTheta *self, PyObject *arg);
          static PyObject *t_JacobiTheta_get__q(t_JacobiTheta *self, void *data);
          static PyGetSetDef t_JacobiTheta__fields_[] = {
            DECLARE_GET_FIELD(t_JacobiTheta, q),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_JacobiTheta__methods_[] = {
            DECLARE_METHOD(t_JacobiTheta, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JacobiTheta, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JacobiTheta, getQ, METH_NOARGS),
            DECLARE_METHOD(t_JacobiTheta, values, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(JacobiTheta)[] = {
            { Py_tp_methods, t_JacobiTheta__methods_ },
            { Py_tp_init, (void *) t_JacobiTheta_init_ },
            { Py_tp_getset, t_JacobiTheta__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(JacobiTheta)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(JacobiTheta, t_JacobiTheta, JacobiTheta);

          void t_JacobiTheta::install(PyObject *module)
          {
            installType(&PY_TYPE(JacobiTheta), &PY_TYPE_DEF(JacobiTheta), module, "JacobiTheta", 0);
          }

          void t_JacobiTheta::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiTheta), "class_", make_descriptor(JacobiTheta::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiTheta), "wrapfn_", make_descriptor(t_JacobiTheta::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiTheta), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_JacobiTheta_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, JacobiTheta::initializeClass, 1)))
              return NULL;
            return t_JacobiTheta::wrap_Object(JacobiTheta(((t_JacobiTheta *) arg)->object.this$));
          }
          static PyObject *t_JacobiTheta_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, JacobiTheta::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_JacobiTheta_init_(t_JacobiTheta *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            JacobiTheta object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = JacobiTheta(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_JacobiTheta_getQ(t_JacobiTheta *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getQ());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_JacobiTheta_values(t_JacobiTheta *self, PyObject *arg)
          {
            ::org::hipparchus::complex::Complex a0((jobject) NULL);
            ::org::hipparchus::special::elliptic::jacobi::Theta result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::complex::Complex::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.values(a0));
              return ::org::hipparchus::special::elliptic::jacobi::t_Theta::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "values", arg);
            return NULL;
          }

          static PyObject *t_JacobiTheta_get__q(t_JacobiTheta *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getQ());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/MidPointIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *MidPointIntegrator::class$ = NULL;
        jmethodID *MidPointIntegrator::mids$ = NULL;
        bool MidPointIntegrator::live$ = false;
        jint MidPointIntegrator::MIDPOINT_MAX_ITERATIONS_COUNT = (jint) 0;

        jclass MidPointIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/MidPointIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_8dbc1129a3c2557a] = env->getMethodID(cls, "<init>", "(II)V");
            mids$[mid_init$_b5a15021085cabdb] = env->getMethodID(cls, "<init>", "(DDII)V");
            mids$[mid_doIntegrate_456d9a2f64d6b28d] = env->getMethodID(cls, "doIntegrate", "()D");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MIDPOINT_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "MIDPOINT_MAX_ITERATIONS_COUNT");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MidPointIntegrator::MidPointIntegrator() : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        MidPointIntegrator::MidPointIntegrator(jint a0, jint a1) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_8dbc1129a3c2557a, a0, a1)) {}

        MidPointIntegrator::MidPointIntegrator(jdouble a0, jdouble a1, jint a2, jint a3) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_b5a15021085cabdb, a0, a1, a2, a3)) {}
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
        static PyObject *t_MidPointIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MidPointIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MidPointIntegrator_init_(t_MidPointIntegrator *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_MidPointIntegrator__methods_[] = {
          DECLARE_METHOD(t_MidPointIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MidPointIntegrator, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MidPointIntegrator)[] = {
          { Py_tp_methods, t_MidPointIntegrator__methods_ },
          { Py_tp_init, (void *) t_MidPointIntegrator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MidPointIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(MidPointIntegrator, t_MidPointIntegrator, MidPointIntegrator);

        void t_MidPointIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(MidPointIntegrator), &PY_TYPE_DEF(MidPointIntegrator), module, "MidPointIntegrator", 0);
        }

        void t_MidPointIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidPointIntegrator), "class_", make_descriptor(MidPointIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidPointIntegrator), "wrapfn_", make_descriptor(t_MidPointIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidPointIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(MidPointIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidPointIntegrator), "MIDPOINT_MAX_ITERATIONS_COUNT", make_descriptor(MidPointIntegrator::MIDPOINT_MAX_ITERATIONS_COUNT));
        }

        static PyObject *t_MidPointIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MidPointIntegrator::initializeClass, 1)))
            return NULL;
          return t_MidPointIntegrator::wrap_Object(MidPointIntegrator(((t_MidPointIntegrator *) arg)->object.this$));
        }
        static PyObject *t_MidPointIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MidPointIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MidPointIntegrator_init_(t_MidPointIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              MidPointIntegrator object((jobject) NULL);

              INT_CALL(object = MidPointIntegrator());
              self->object = object;
              break;
            }
           case 2:
            {
              jint a0;
              jint a1;
              MidPointIntegrator object((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                INT_CALL(object = MidPointIntegrator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              jdouble a1;
              jint a2;
              jint a3;
              MidPointIntegrator object((jobject) NULL);

              if (!parseArgs(args, "DDII", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = MidPointIntegrator(a0, a1, a2, a3));
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
#include "org/orekit/files/ccsds/ndm/cdm/ODParametersWriter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *ODParametersWriter::class$ = NULL;
            jmethodID *ODParametersWriter::mids$ = NULL;
            bool ODParametersWriter::live$ = false;

            jclass ODParametersWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/ODParametersWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_writeContent_fb36c2e4ae059ab9] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

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
            static PyObject *t_ODParametersWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ODParametersWriter_instance_(PyTypeObject *type, PyObject *arg);

            static PyMethodDef t_ODParametersWriter__methods_[] = {
              DECLARE_METHOD(t_ODParametersWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ODParametersWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ODParametersWriter)[] = {
              { Py_tp_methods, t_ODParametersWriter__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ODParametersWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(ODParametersWriter, t_ODParametersWriter, ODParametersWriter);

            void t_ODParametersWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(ODParametersWriter), &PY_TYPE_DEF(ODParametersWriter), module, "ODParametersWriter", 0);
            }

            void t_ODParametersWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersWriter), "class_", make_descriptor(ODParametersWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersWriter), "wrapfn_", make_descriptor(t_ODParametersWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ODParametersWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ODParametersWriter::initializeClass, 1)))
                return NULL;
              return t_ODParametersWriter::wrap_Object(ODParametersWriter(((t_ODParametersWriter *) arg)->object.this$));
            }
            static PyObject *t_ODParametersWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ODParametersWriter::initializeClass, 0))
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
#include "org/orekit/propagation/semianalytical/dsst/forces/PythonDSSTForceModel.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
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
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getMeanElementRate_3b4b4fe187ad73ff] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)[D");
                mids$[mid_getMeanElementRate_5265bce9e9da3506] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_74f227e9e3e51225] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/propagation/PropagationType;[D)Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_46b1d1d9daf3396d] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/propagation/PropagationType;[Lorg/hipparchus/CalculusFieldElement;)Ljava/util/List;");
                mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_registerAttitudeProvider_8109c1a27d4471d3] = env->getMethodID(cls, "registerAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
                mids$[mid_updateShortPeriodTerms_6839803ab3ef216d] = env->getMethodID(cls, "updateShortPeriodTerms", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/orekit/propagation/FieldSpacecraftState;)V");
                mids$[mid_updateShortPeriodTerms_8df221610d0cb785] = env->getMethodID(cls, "updateShortPeriodTerms", "([D[Lorg/orekit/propagation/SpacecraftState;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonDSSTForceModel::PythonDSSTForceModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            void PythonDSSTForceModel::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
            }

            jlong PythonDSSTForceModel::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
            }

            void PythonDSSTForceModel::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
              jlong ptr = jenv->CallLongMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_a27fc9afd27e559d]);
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
              jlong ptr = jenv->CallLongMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_a27fc9afd27e559d]);
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
              jlong ptr = jenv->CallLongMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_a27fc9afd27e559d]);
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
              jlong ptr = jenv->CallLongMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_a27fc9afd27e559d]);
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
              jlong ptr = jenv->CallLongMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_a27fc9afd27e559d]);
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
              jlong ptr = jenv->CallLongMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static void JNICALL t_PythonDSSTForceModel_registerAttitudeProvider6(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_a27fc9afd27e559d]);
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
              jlong ptr = jenv->CallLongMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_a27fc9afd27e559d]);
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
              jlong ptr = jenv->CallLongMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_a27fc9afd27e559d]);
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
#include "org/orekit/time/UTCScale.h"
#include "java/util/List.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/time/OffsetModel.h"
#include "java/util/Collection.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/TimeComponents.h"
#include "org/orekit/time/UTCTAIOffset.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/DateComponents.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *UTCScale::class$ = NULL;
      jmethodID *UTCScale::mids$ = NULL;
      bool UTCScale::live$ = false;

      jclass UTCScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/UTCScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getBaseOffsets_cfcfd130f9013e3e] = env->getMethodID(cls, "getBaseOffsets", "()Ljava/util/Collection;");
          mids$[mid_getFirstKnownLeapSecond_aaa854c403487cf3] = env->getMethodID(cls, "getFirstKnownLeapSecond", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getLastKnownLeapSecond_aaa854c403487cf3] = env->getMethodID(cls, "getLastKnownLeapSecond", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getLeap_e912d21057defe63] = env->getMethodID(cls, "getLeap", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getLeap_7bc0fd76ee915b72] = env->getMethodID(cls, "getLeap", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getUTCTAIOffsets_a6156df500549a58] = env->getMethodID(cls, "getUTCTAIOffsets", "()Ljava/util/List;");
          mids$[mid_insideLeap_ee2067c5768b6768] = env->getMethodID(cls, "insideLeap", "(Lorg/orekit/time/AbsoluteDate;)Z");
          mids$[mid_insideLeap_5997cf1e9de74766] = env->getMethodID(cls, "insideLeap", "(Lorg/orekit/time/FieldAbsoluteDate;)Z");
          mids$[mid_minuteDuration_982c9f163875e1c9] = env->getMethodID(cls, "minuteDuration", "(Lorg/orekit/time/AbsoluteDate;)I");
          mids$[mid_minuteDuration_90583a249f651dc5] = env->getMethodID(cls, "minuteDuration", "(Lorg/orekit/time/FieldAbsoluteDate;)I");
          mids$[mid_offsetFromTAI_e912d21057defe63] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_7bc0fd76ee915b72] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_ceb6ee9e1c4bbdb1] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::Collection UTCScale::getBaseOffsets() const
      {
        return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getBaseOffsets_cfcfd130f9013e3e]));
      }

      ::org::orekit::time::AbsoluteDate UTCScale::getFirstKnownLeapSecond() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getFirstKnownLeapSecond_aaa854c403487cf3]));
      }

      ::org::orekit::time::AbsoluteDate UTCScale::getLastKnownLeapSecond() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getLastKnownLeapSecond_aaa854c403487cf3]));
      }

      jdouble UTCScale::getLeap(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLeap_e912d21057defe63], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement UTCScale::getLeap(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLeap_7bc0fd76ee915b72], a0.this$));
      }

      ::java::lang::String UTCScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
      }

      ::java::util::List UTCScale::getUTCTAIOffsets() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getUTCTAIOffsets_a6156df500549a58]));
      }

      jboolean UTCScale::insideLeap(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_insideLeap_ee2067c5768b6768], a0.this$);
      }

      jboolean UTCScale::insideLeap(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_insideLeap_5997cf1e9de74766], a0.this$);
      }

      jint UTCScale::minuteDuration(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_minuteDuration_982c9f163875e1c9], a0.this$);
      }

      jint UTCScale::minuteDuration(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_minuteDuration_90583a249f651dc5], a0.this$);
      }

      jdouble UTCScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_e912d21057defe63], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement UTCScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_7bc0fd76ee915b72], a0.this$));
      }

      jdouble UTCScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_ceb6ee9e1c4bbdb1], a0.this$, a1.this$);
      }

      ::java::lang::String UTCScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
      static PyObject *t_UTCScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCScale_getBaseOffsets(t_UTCScale *self);
      static PyObject *t_UTCScale_getFirstKnownLeapSecond(t_UTCScale *self);
      static PyObject *t_UTCScale_getLastKnownLeapSecond(t_UTCScale *self);
      static PyObject *t_UTCScale_getLeap(t_UTCScale *self, PyObject *args);
      static PyObject *t_UTCScale_getName(t_UTCScale *self);
      static PyObject *t_UTCScale_getUTCTAIOffsets(t_UTCScale *self);
      static PyObject *t_UTCScale_insideLeap(t_UTCScale *self, PyObject *args);
      static PyObject *t_UTCScale_minuteDuration(t_UTCScale *self, PyObject *args);
      static PyObject *t_UTCScale_offsetFromTAI(t_UTCScale *self, PyObject *args);
      static PyObject *t_UTCScale_offsetToTAI(t_UTCScale *self, PyObject *args);
      static PyObject *t_UTCScale_toString(t_UTCScale *self, PyObject *args);
      static PyObject *t_UTCScale_get__baseOffsets(t_UTCScale *self, void *data);
      static PyObject *t_UTCScale_get__firstKnownLeapSecond(t_UTCScale *self, void *data);
      static PyObject *t_UTCScale_get__lastKnownLeapSecond(t_UTCScale *self, void *data);
      static PyObject *t_UTCScale_get__name(t_UTCScale *self, void *data);
      static PyObject *t_UTCScale_get__uTCTAIOffsets(t_UTCScale *self, void *data);
      static PyGetSetDef t_UTCScale__fields_[] = {
        DECLARE_GET_FIELD(t_UTCScale, baseOffsets),
        DECLARE_GET_FIELD(t_UTCScale, firstKnownLeapSecond),
        DECLARE_GET_FIELD(t_UTCScale, lastKnownLeapSecond),
        DECLARE_GET_FIELD(t_UTCScale, name),
        DECLARE_GET_FIELD(t_UTCScale, uTCTAIOffsets),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_UTCScale__methods_[] = {
        DECLARE_METHOD(t_UTCScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCScale, getBaseOffsets, METH_NOARGS),
        DECLARE_METHOD(t_UTCScale, getFirstKnownLeapSecond, METH_NOARGS),
        DECLARE_METHOD(t_UTCScale, getLastKnownLeapSecond, METH_NOARGS),
        DECLARE_METHOD(t_UTCScale, getLeap, METH_VARARGS),
        DECLARE_METHOD(t_UTCScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_UTCScale, getUTCTAIOffsets, METH_NOARGS),
        DECLARE_METHOD(t_UTCScale, insideLeap, METH_VARARGS),
        DECLARE_METHOD(t_UTCScale, minuteDuration, METH_VARARGS),
        DECLARE_METHOD(t_UTCScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_UTCScale, offsetToTAI, METH_VARARGS),
        DECLARE_METHOD(t_UTCScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UTCScale)[] = {
        { Py_tp_methods, t_UTCScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_UTCScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UTCScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UTCScale, t_UTCScale, UTCScale);

      void t_UTCScale::install(PyObject *module)
      {
        installType(&PY_TYPE(UTCScale), &PY_TYPE_DEF(UTCScale), module, "UTCScale", 0);
      }

      void t_UTCScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCScale), "class_", make_descriptor(UTCScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCScale), "wrapfn_", make_descriptor(t_UTCScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UTCScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UTCScale::initializeClass, 1)))
          return NULL;
        return t_UTCScale::wrap_Object(UTCScale(((t_UTCScale *) arg)->object.this$));
      }
      static PyObject *t_UTCScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UTCScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_UTCScale_getBaseOffsets(t_UTCScale *self)
      {
        ::java::util::Collection result((jobject) NULL);
        OBJ_CALL(result = self->object.getBaseOffsets());
        return ::java::util::t_Collection::wrap_Object(result);
      }

      static PyObject *t_UTCScale_getFirstKnownLeapSecond(t_UTCScale *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getFirstKnownLeapSecond());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_UTCScale_getLastKnownLeapSecond(t_UTCScale *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getLastKnownLeapSecond());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_UTCScale_getLeap(t_UTCScale *self, PyObject *args)
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

      static PyObject *t_UTCScale_getName(t_UTCScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_UTCScale_getUTCTAIOffsets(t_UTCScale *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getUTCTAIOffsets());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(UTCTAIOffset));
      }

      static PyObject *t_UTCScale_insideLeap(t_UTCScale *self, PyObject *args)
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

      static PyObject *t_UTCScale_minuteDuration(t_UTCScale *self, PyObject *args)
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

      static PyObject *t_UTCScale_offsetFromTAI(t_UTCScale *self, PyObject *args)
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

      static PyObject *t_UTCScale_offsetToTAI(t_UTCScale *self, PyObject *args)
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

      static PyObject *t_UTCScale_toString(t_UTCScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(UTCScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_UTCScale_get__baseOffsets(t_UTCScale *self, void *data)
      {
        ::java::util::Collection value((jobject) NULL);
        OBJ_CALL(value = self->object.getBaseOffsets());
        return ::java::util::t_Collection::wrap_Object(value);
      }

      static PyObject *t_UTCScale_get__firstKnownLeapSecond(t_UTCScale *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getFirstKnownLeapSecond());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_UTCScale_get__lastKnownLeapSecond(t_UTCScale *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getLastKnownLeapSecond());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_UTCScale_get__name(t_UTCScale *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_UTCScale_get__uTCTAIOffsets(t_UTCScale *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getUTCTAIOffsets());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/FieldBivariateFunction.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/analysis/CalculusFieldBivariateFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *FieldBivariateFunction::class$ = NULL;
      jmethodID *FieldBivariateFunction::mids$ = NULL;
      bool FieldBivariateFunction::live$ = false;

      jclass FieldBivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/FieldBivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_toCalculusFieldBivariateFunction_a69d25616f9485b8] = env->getMethodID(cls, "toCalculusFieldBivariateFunction", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/CalculusFieldBivariateFunction;");
          mids$[mid_value_75c7ce7d33e7324b] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::analysis::CalculusFieldBivariateFunction FieldBivariateFunction::toCalculusFieldBivariateFunction(const ::org::hipparchus::Field & a0) const
      {
        return ::org::hipparchus::analysis::CalculusFieldBivariateFunction(env->callObjectMethod(this$, mids$[mid_toCalculusFieldBivariateFunction_a69d25616f9485b8], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldBivariateFunction::value(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_75c7ce7d33e7324b], a0.this$, a1.this$));
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
      static PyObject *t_FieldBivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldBivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldBivariateFunction_toCalculusFieldBivariateFunction(t_FieldBivariateFunction *self, PyObject *arg);
      static PyObject *t_FieldBivariateFunction_value(t_FieldBivariateFunction *self, PyObject *args);

      static PyMethodDef t_FieldBivariateFunction__methods_[] = {
        DECLARE_METHOD(t_FieldBivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldBivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldBivariateFunction, toCalculusFieldBivariateFunction, METH_O),
        DECLARE_METHOD(t_FieldBivariateFunction, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldBivariateFunction)[] = {
        { Py_tp_methods, t_FieldBivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldBivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldBivariateFunction, t_FieldBivariateFunction, FieldBivariateFunction);

      void t_FieldBivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldBivariateFunction), &PY_TYPE_DEF(FieldBivariateFunction), module, "FieldBivariateFunction", 0);
      }

      void t_FieldBivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBivariateFunction), "class_", make_descriptor(FieldBivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBivariateFunction), "wrapfn_", make_descriptor(t_FieldBivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldBivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldBivariateFunction::initializeClass, 1)))
          return NULL;
        return t_FieldBivariateFunction::wrap_Object(FieldBivariateFunction(((t_FieldBivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_FieldBivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldBivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldBivariateFunction_toCalculusFieldBivariateFunction(t_FieldBivariateFunction *self, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::analysis::CalculusFieldBivariateFunction result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = self->object.toCalculusFieldBivariateFunction(a0));
          return ::org::hipparchus::analysis::t_CalculusFieldBivariateFunction::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toCalculusFieldBivariateFunction", arg);
        return NULL;
      }

      static PyObject *t_FieldBivariateFunction_value(t_FieldBivariateFunction *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "value", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$TimeSystemConsumer.h"
#include "org/orekit/files/ccsds/definitions/TimeSystem.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$TimeSystemConsumer::class$ = NULL;
            jmethodID *ParseToken$TimeSystemConsumer::mids$ = NULL;
            bool ParseToken$TimeSystemConsumer::live$ = false;

            jclass ParseToken$TimeSystemConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$TimeSystemConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_3dd15fb182523a58] = env->getMethodID(cls, "accept", "(Lorg/orekit/files/ccsds/definitions/TimeSystem;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$TimeSystemConsumer::accept(const ::org::orekit::files::ccsds::definitions::TimeSystem & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_3dd15fb182523a58], a0.this$);
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
            static PyObject *t_ParseToken$TimeSystemConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$TimeSystemConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$TimeSystemConsumer_accept(t_ParseToken$TimeSystemConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$TimeSystemConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$TimeSystemConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$TimeSystemConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$TimeSystemConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$TimeSystemConsumer)[] = {
              { Py_tp_methods, t_ParseToken$TimeSystemConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$TimeSystemConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$TimeSystemConsumer, t_ParseToken$TimeSystemConsumer, ParseToken$TimeSystemConsumer);

            void t_ParseToken$TimeSystemConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$TimeSystemConsumer), &PY_TYPE_DEF(ParseToken$TimeSystemConsumer), module, "ParseToken$TimeSystemConsumer", 0);
            }

            void t_ParseToken$TimeSystemConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$TimeSystemConsumer), "class_", make_descriptor(ParseToken$TimeSystemConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$TimeSystemConsumer), "wrapfn_", make_descriptor(t_ParseToken$TimeSystemConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$TimeSystemConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$TimeSystemConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$TimeSystemConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$TimeSystemConsumer::wrap_Object(ParseToken$TimeSystemConsumer(((t_ParseToken$TimeSystemConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$TimeSystemConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$TimeSystemConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$TimeSystemConsumer_accept(t_ParseToken$TimeSystemConsumer *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::TimeSystem a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::TimeSystem::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_TimeSystem::parameters_))
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
#include "org/orekit/data/PythonAbstractListCrawler.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "org/orekit/data/ZipJarCrawler.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PythonAbstractListCrawler::class$ = NULL;
      jmethodID *PythonAbstractListCrawler::mids$ = NULL;
      bool PythonAbstractListCrawler::live$ = false;

      jclass PythonAbstractListCrawler::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PythonAbstractListCrawler");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getBaseName_d5950e748b97110b] = env->getMethodID(cls, "getBaseName", "(Ljava/lang/Object;)Ljava/lang/String;");
          mids$[mid_getCompleteName_d5950e748b97110b] = env->getMethodID(cls, "getCompleteName", "(Ljava/lang/Object;)Ljava/lang/String;");
          mids$[mid_getStream_25301161b6e4daa9] = env->getMethodID(cls, "getStream", "(Ljava/lang/Object;)Ljava/io/InputStream;");
          mids$[mid_getZipJarCrawler_5aeaff72b829467a] = env->getMethodID(cls, "getZipJarCrawler", "(Ljava/lang/Object;)Lorg/orekit/data/ZipJarCrawler;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAbstractListCrawler::PythonAbstractListCrawler() : ::org::orekit::data::AbstractListCrawler(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonAbstractListCrawler::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonAbstractListCrawler::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonAbstractListCrawler::pythonExtension(jlong a0) const
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
    namespace data {
      static PyObject *t_PythonAbstractListCrawler_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAbstractListCrawler_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAbstractListCrawler_of_(t_PythonAbstractListCrawler *self, PyObject *args);
      static int t_PythonAbstractListCrawler_init_(t_PythonAbstractListCrawler *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAbstractListCrawler_finalize(t_PythonAbstractListCrawler *self);
      static PyObject *t_PythonAbstractListCrawler_pythonExtension(t_PythonAbstractListCrawler *self, PyObject *args);
      static jobject JNICALL t_PythonAbstractListCrawler_getBaseName0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonAbstractListCrawler_getCompleteName1(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonAbstractListCrawler_getStream2(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonAbstractListCrawler_getZipJarCrawler3(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonAbstractListCrawler_pythonDecRef4(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAbstractListCrawler_get__self(t_PythonAbstractListCrawler *self, void *data);
      static PyObject *t_PythonAbstractListCrawler_get__parameters_(t_PythonAbstractListCrawler *self, void *data);
      static PyGetSetDef t_PythonAbstractListCrawler__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAbstractListCrawler, self),
        DECLARE_GET_FIELD(t_PythonAbstractListCrawler, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAbstractListCrawler__methods_[] = {
        DECLARE_METHOD(t_PythonAbstractListCrawler, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractListCrawler, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractListCrawler, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonAbstractListCrawler, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAbstractListCrawler, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAbstractListCrawler)[] = {
        { Py_tp_methods, t_PythonAbstractListCrawler__methods_ },
        { Py_tp_init, (void *) t_PythonAbstractListCrawler_init_ },
        { Py_tp_getset, t_PythonAbstractListCrawler__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAbstractListCrawler)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractListCrawler),
        NULL
      };

      DEFINE_TYPE(PythonAbstractListCrawler, t_PythonAbstractListCrawler, PythonAbstractListCrawler);
      PyObject *t_PythonAbstractListCrawler::wrap_Object(const PythonAbstractListCrawler& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonAbstractListCrawler::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonAbstractListCrawler *self = (t_PythonAbstractListCrawler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonAbstractListCrawler::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonAbstractListCrawler::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonAbstractListCrawler *self = (t_PythonAbstractListCrawler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonAbstractListCrawler::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAbstractListCrawler), &PY_TYPE_DEF(PythonAbstractListCrawler), module, "PythonAbstractListCrawler", 1);
      }

      void t_PythonAbstractListCrawler::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractListCrawler), "class_", make_descriptor(PythonAbstractListCrawler::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractListCrawler), "wrapfn_", make_descriptor(t_PythonAbstractListCrawler::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractListCrawler), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAbstractListCrawler::initializeClass);
        JNINativeMethod methods[] = {
          { "getBaseName", "(Ljava/lang/Object;)Ljava/lang/String;", (void *) t_PythonAbstractListCrawler_getBaseName0 },
          { "getCompleteName", "(Ljava/lang/Object;)Ljava/lang/String;", (void *) t_PythonAbstractListCrawler_getCompleteName1 },
          { "getStream", "(Ljava/lang/Object;)Ljava/io/InputStream;", (void *) t_PythonAbstractListCrawler_getStream2 },
          { "getZipJarCrawler", "(Ljava/lang/Object;)Lorg/orekit/data/ZipJarCrawler;", (void *) t_PythonAbstractListCrawler_getZipJarCrawler3 },
          { "pythonDecRef", "()V", (void *) t_PythonAbstractListCrawler_pythonDecRef4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonAbstractListCrawler_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAbstractListCrawler::initializeClass, 1)))
          return NULL;
        return t_PythonAbstractListCrawler::wrap_Object(PythonAbstractListCrawler(((t_PythonAbstractListCrawler *) arg)->object.this$));
      }
      static PyObject *t_PythonAbstractListCrawler_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAbstractListCrawler::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonAbstractListCrawler_of_(t_PythonAbstractListCrawler *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonAbstractListCrawler_init_(t_PythonAbstractListCrawler *self, PyObject *args, PyObject *kwds)
      {
        PythonAbstractListCrawler object((jobject) NULL);

        INT_CALL(object = PythonAbstractListCrawler());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonAbstractListCrawler_finalize(t_PythonAbstractListCrawler *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAbstractListCrawler_pythonExtension(t_PythonAbstractListCrawler *self, PyObject *args)
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

      static jobject JNICALL t_PythonAbstractListCrawler_getBaseName0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractListCrawler::mids$[PythonAbstractListCrawler::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::lang::String value((jobject) NULL);
        PyObject *o0 = ::java::lang::t_Object::wrap_Object(::java::lang::Object(a0));
        PyObject *result = PyObject_CallMethod(obj, "getBaseName", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "s", &value))
        {
          throwTypeError("getBaseName", result);
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

      static jobject JNICALL t_PythonAbstractListCrawler_getCompleteName1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractListCrawler::mids$[PythonAbstractListCrawler::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::lang::String value((jobject) NULL);
        PyObject *o0 = ::java::lang::t_Object::wrap_Object(::java::lang::Object(a0));
        PyObject *result = PyObject_CallMethod(obj, "getCompleteName", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "s", &value))
        {
          throwTypeError("getCompleteName", result);
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

      static jobject JNICALL t_PythonAbstractListCrawler_getStream2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractListCrawler::mids$[PythonAbstractListCrawler::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::io::InputStream value((jobject) NULL);
        PyObject *o0 = ::java::lang::t_Object::wrap_Object(::java::lang::Object(a0));
        PyObject *result = PyObject_CallMethod(obj, "getStream", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::io::InputStream::initializeClass, &value))
        {
          throwTypeError("getStream", result);
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

      static jobject JNICALL t_PythonAbstractListCrawler_getZipJarCrawler3(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractListCrawler::mids$[PythonAbstractListCrawler::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::data::ZipJarCrawler value((jobject) NULL);
        PyObject *o0 = ::java::lang::t_Object::wrap_Object(::java::lang::Object(a0));
        PyObject *result = PyObject_CallMethod(obj, "getZipJarCrawler", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::data::ZipJarCrawler::initializeClass, &value))
        {
          throwTypeError("getZipJarCrawler", result);
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

      static void JNICALL t_PythonAbstractListCrawler_pythonDecRef4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractListCrawler::mids$[PythonAbstractListCrawler::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAbstractListCrawler::mids$[PythonAbstractListCrawler::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAbstractListCrawler_get__self(t_PythonAbstractListCrawler *self, void *data)
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
      static PyObject *t_PythonAbstractListCrawler_get__parameters_(t_PythonAbstractListCrawler *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Sin.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Sin::class$ = NULL;
        jmethodID *Sin::mids$ = NULL;
        bool Sin::live$ = false;

        jclass Sin::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Sin");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_1f22c1881e72229d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Sin::Sin() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble Sin::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_0ba5fed9597b693e], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Sin::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_1f22c1881e72229d], a0.this$));
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
        static PyObject *t_Sin_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Sin_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Sin_init_(t_Sin *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Sin_value(t_Sin *self, PyObject *args);

        static PyMethodDef t_Sin__methods_[] = {
          DECLARE_METHOD(t_Sin, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sin, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sin, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Sin)[] = {
          { Py_tp_methods, t_Sin__methods_ },
          { Py_tp_init, (void *) t_Sin_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Sin)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Sin, t_Sin, Sin);

        void t_Sin::install(PyObject *module)
        {
          installType(&PY_TYPE(Sin), &PY_TYPE_DEF(Sin), module, "Sin", 0);
        }

        void t_Sin::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sin), "class_", make_descriptor(Sin::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sin), "wrapfn_", make_descriptor(t_Sin::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sin), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Sin_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Sin::initializeClass, 1)))
            return NULL;
          return t_Sin::wrap_Object(Sin(((t_Sin *) arg)->object.this$));
        }
        static PyObject *t_Sin_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Sin::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Sin_init_(t_Sin *self, PyObject *args, PyObject *kwds)
        {
          Sin object((jobject) NULL);

          INT_CALL(object = Sin());
          self->object = object;

          return 0;
        }

        static PyObject *t_Sin_value(t_Sin *self, PyObject *args)
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
#include "java/util/AbstractList.h"
#include "java/util/Iterator.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "java/util/ListIterator.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *AbstractList::class$ = NULL;
    jmethodID *AbstractList::mids$ = NULL;
    bool AbstractList::live$ = false;

    jclass AbstractList::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/AbstractList");

        mids$ = new jmethodID[max_mid];
        mids$[mid_add_229c87223f486349] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_add_92e02b8dd38af23a] = env->getMethodID(cls, "add", "(ILjava/lang/Object;)V");
        mids$[mid_addAll_17269709aac5e427] = env->getMethodID(cls, "addAll", "(ILjava/util/Collection;)Z");
        mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_get_2db0f6e4b8d9201f] = env->getMethodID(cls, "get", "(I)Ljava/lang/Object;");
        mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_indexOf_ac8c1b6f384391ef] = env->getMethodID(cls, "indexOf", "(Ljava/lang/Object;)I");
        mids$[mid_iterator_035c6167e6569aac] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_lastIndexOf_ac8c1b6f384391ef] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/Object;)I");
        mids$[mid_listIterator_4e1a823c948bf3a6] = env->getMethodID(cls, "listIterator", "()Ljava/util/ListIterator;");
        mids$[mid_listIterator_cada45a770b36785] = env->getMethodID(cls, "listIterator", "(I)Ljava/util/ListIterator;");
        mids$[mid_remove_2db0f6e4b8d9201f] = env->getMethodID(cls, "remove", "(I)Ljava/lang/Object;");
        mids$[mid_set_fbb048a414c33f9c] = env->getMethodID(cls, "set", "(ILjava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_subList_4a0f7788a82593c4] = env->getMethodID(cls, "subList", "(II)Ljava/util/List;");
        mids$[mid_removeRange_8dbc1129a3c2557a] = env->getMethodID(cls, "removeRange", "(II)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean AbstractList::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_229c87223f486349], a0.this$);
    }

    void AbstractList::add(jint a0, const ::java::lang::Object & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_add_92e02b8dd38af23a], a0, a1.this$);
    }

    jboolean AbstractList::addAll(jint a0, const ::java::util::Collection & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_17269709aac5e427], a0, a1.this$);
    }

    void AbstractList::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
    }

    jboolean AbstractList::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
    }

    ::java::lang::Object AbstractList::get$(jint a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_2db0f6e4b8d9201f], a0));
    }

    jint AbstractList::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
    }

    jint AbstractList::indexOf(const ::java::lang::Object & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_ac8c1b6f384391ef], a0.this$);
    }

    ::java::util::Iterator AbstractList::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_035c6167e6569aac]));
    }

    jint AbstractList::lastIndexOf(const ::java::lang::Object & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_ac8c1b6f384391ef], a0.this$);
    }

    ::java::util::ListIterator AbstractList::listIterator() const
    {
      return ::java::util::ListIterator(env->callObjectMethod(this$, mids$[mid_listIterator_4e1a823c948bf3a6]));
    }

    ::java::util::ListIterator AbstractList::listIterator(jint a0) const
    {
      return ::java::util::ListIterator(env->callObjectMethod(this$, mids$[mid_listIterator_cada45a770b36785], a0));
    }

    ::java::lang::Object AbstractList::remove(jint a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_2db0f6e4b8d9201f], a0));
    }

    ::java::lang::Object AbstractList::set(jint a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_set_fbb048a414c33f9c], a0, a1.this$));
    }

    ::java::util::List AbstractList::subList(jint a0, jint a1) const
    {
      return ::java::util::List(env->callObjectMethod(this$, mids$[mid_subList_4a0f7788a82593c4], a0, a1));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_AbstractList_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AbstractList_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AbstractList_of_(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_add(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_addAll(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_clear(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_equals(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_get(t_AbstractList *self, PyObject *arg);
    static PyObject *t_AbstractList_hashCode(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_indexOf(t_AbstractList *self, PyObject *arg);
    static PyObject *t_AbstractList_iterator(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_lastIndexOf(t_AbstractList *self, PyObject *arg);
    static PyObject *t_AbstractList_listIterator(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_remove(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_set(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_subList(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_get__parameters_(t_AbstractList *self, void *data);
    static PyGetSetDef t_AbstractList__fields_[] = {
      DECLARE_GET_FIELD(t_AbstractList, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_AbstractList__methods_[] = {
      DECLARE_METHOD(t_AbstractList, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AbstractList, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AbstractList, of_, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, add, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, addAll, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, clear, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, equals, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, get, METH_O),
      DECLARE_METHOD(t_AbstractList, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, indexOf, METH_O),
      DECLARE_METHOD(t_AbstractList, iterator, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, lastIndexOf, METH_O),
      DECLARE_METHOD(t_AbstractList, listIterator, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, remove, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, set, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, subList, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(AbstractList)[] = {
      { Py_tp_methods, t_AbstractList__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_AbstractList__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_AbstractList *)) get_generic_iterator< t_AbstractList >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(AbstractList)[] = {
      &PY_TYPE_DEF(::java::util::AbstractCollection),
      NULL
    };

    DEFINE_TYPE(AbstractList, t_AbstractList, AbstractList);
    PyObject *t_AbstractList::wrap_Object(const AbstractList& object, PyTypeObject *p0)
    {
      PyObject *obj = t_AbstractList::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_AbstractList *self = (t_AbstractList *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_AbstractList::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_AbstractList::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_AbstractList *self = (t_AbstractList *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_AbstractList::install(PyObject *module)
    {
      installType(&PY_TYPE(AbstractList), &PY_TYPE_DEF(AbstractList), module, "AbstractList", 0);
    }

    void t_AbstractList::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractList), "class_", make_descriptor(AbstractList::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractList), "wrapfn_", make_descriptor(t_AbstractList::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractList), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_AbstractList_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, AbstractList::initializeClass, 1)))
        return NULL;
      return t_AbstractList::wrap_Object(AbstractList(((t_AbstractList *) arg)->object.this$));
    }
    static PyObject *t_AbstractList_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, AbstractList::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_AbstractList_of_(t_AbstractList *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_AbstractList_add(t_AbstractList *self, PyObject *args)
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

      return callSuper(PY_TYPE(AbstractList), (PyObject *) self, "add", args, 2);
    }

    static PyObject *t_AbstractList_addAll(t_AbstractList *self, PyObject *args)
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

      return callSuper(PY_TYPE(AbstractList), (PyObject *) self, "addAll", args, 2);
    }

    static PyObject *t_AbstractList_clear(t_AbstractList *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(AbstractList), (PyObject *) self, "clear", args, 2);
    }

    static PyObject *t_AbstractList_equals(t_AbstractList *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(AbstractList), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_AbstractList_get(t_AbstractList *self, PyObject *arg)
    {
      jint a0;
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.get$(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "get", arg);
      return NULL;
    }

    static PyObject *t_AbstractList_hashCode(t_AbstractList *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(AbstractList), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_AbstractList_indexOf(t_AbstractList *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.indexOf(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "indexOf", arg);
      return NULL;
    }

    static PyObject *t_AbstractList_iterator(t_AbstractList *self, PyObject *args)
    {
      ::java::util::Iterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(AbstractList), (PyObject *) self, "iterator", args, 2);
    }

    static PyObject *t_AbstractList_lastIndexOf(t_AbstractList *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.lastIndexOf(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "lastIndexOf", arg);
      return NULL;
    }

    static PyObject *t_AbstractList_listIterator(t_AbstractList *self, PyObject *args)
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

      PyErr_SetArgsError((PyObject *) self, "listIterator", args);
      return NULL;
    }

    static PyObject *t_AbstractList_remove(t_AbstractList *self, PyObject *args)
    {
      jint a0;
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(result = self->object.remove(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(AbstractList), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_AbstractList_set(t_AbstractList *self, PyObject *args)
    {
      jint a0;
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "IO", self->parameters[0], &a0, &a1))
      {
        OBJ_CALL(result = self->object.set(a0, a1));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "set", args);
      return NULL;
    }

    static PyObject *t_AbstractList_subList(t_AbstractList *self, PyObject *args)
    {
      jint a0;
      jint a1;
      ::java::util::List result((jobject) NULL);

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = self->object.subList(a0, a1));
        return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
      }

      PyErr_SetArgsError((PyObject *) self, "subList", args);
      return NULL;
    }
    static PyObject *t_AbstractList_get__parameters_(t_AbstractList *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/MultiplexedMeasurementBuilder.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "org/orekit/estimation/measurements/MultiplexedMeasurement.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *MultiplexedMeasurementBuilder::class$ = NULL;
          jmethodID *MultiplexedMeasurementBuilder::mids$ = NULL;
          bool MultiplexedMeasurementBuilder::live$ = false;

          jclass MultiplexedMeasurementBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/MultiplexedMeasurementBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_65de9727799c5641] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
              mids$[mid_addModifier_fc816f44bfa3d437] = env->getMethodID(cls, "addModifier", "(Lorg/orekit/estimation/measurements/EstimationModifier;)V");
              mids$[mid_build_4d6c52b99d90c222] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/MultiplexedMeasurement;");
              mids$[mid_getModifiers_a6156df500549a58] = env->getMethodID(cls, "getModifiers", "()Ljava/util/List;");
              mids$[mid_getSatellites_ff20f279f9ba9f9e] = env->getMethodID(cls, "getSatellites", "()[Lorg/orekit/estimation/measurements/ObservableSatellite;");
              mids$[mid_init_d958a9bfde45c759] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MultiplexedMeasurementBuilder::MultiplexedMeasurementBuilder(const ::java::util::List & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_65de9727799c5641, a0.this$)) {}

          void MultiplexedMeasurementBuilder::addModifier(const ::org::orekit::estimation::measurements::EstimationModifier & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addModifier_fc816f44bfa3d437], a0.this$);
          }

          ::org::orekit::estimation::measurements::MultiplexedMeasurement MultiplexedMeasurementBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::MultiplexedMeasurement(env->callObjectMethod(this$, mids$[mid_build_4d6c52b99d90c222], a0.this$, a1.this$));
          }

          ::java::util::List MultiplexedMeasurementBuilder::getModifiers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getModifiers_a6156df500549a58]));
          }

          JArray< ::org::orekit::estimation::measurements::ObservableSatellite > MultiplexedMeasurementBuilder::getSatellites() const
          {
            return JArray< ::org::orekit::estimation::measurements::ObservableSatellite >(env->callObjectMethod(this$, mids$[mid_getSatellites_ff20f279f9ba9f9e]));
          }

          void MultiplexedMeasurementBuilder::init(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_d958a9bfde45c759], a0.this$, a1.this$);
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
          static PyObject *t_MultiplexedMeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MultiplexedMeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static int t_MultiplexedMeasurementBuilder_init_(t_MultiplexedMeasurementBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MultiplexedMeasurementBuilder_addModifier(t_MultiplexedMeasurementBuilder *self, PyObject *arg);
          static PyObject *t_MultiplexedMeasurementBuilder_build(t_MultiplexedMeasurementBuilder *self, PyObject *args);
          static PyObject *t_MultiplexedMeasurementBuilder_getModifiers(t_MultiplexedMeasurementBuilder *self);
          static PyObject *t_MultiplexedMeasurementBuilder_getSatellites(t_MultiplexedMeasurementBuilder *self);
          static PyObject *t_MultiplexedMeasurementBuilder_init(t_MultiplexedMeasurementBuilder *self, PyObject *args);
          static PyObject *t_MultiplexedMeasurementBuilder_get__modifiers(t_MultiplexedMeasurementBuilder *self, void *data);
          static PyObject *t_MultiplexedMeasurementBuilder_get__satellites(t_MultiplexedMeasurementBuilder *self, void *data);
          static PyGetSetDef t_MultiplexedMeasurementBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_MultiplexedMeasurementBuilder, modifiers),
            DECLARE_GET_FIELD(t_MultiplexedMeasurementBuilder, satellites),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MultiplexedMeasurementBuilder__methods_[] = {
            DECLARE_METHOD(t_MultiplexedMeasurementBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MultiplexedMeasurementBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MultiplexedMeasurementBuilder, addModifier, METH_O),
            DECLARE_METHOD(t_MultiplexedMeasurementBuilder, build, METH_VARARGS),
            DECLARE_METHOD(t_MultiplexedMeasurementBuilder, getModifiers, METH_NOARGS),
            DECLARE_METHOD(t_MultiplexedMeasurementBuilder, getSatellites, METH_NOARGS),
            DECLARE_METHOD(t_MultiplexedMeasurementBuilder, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MultiplexedMeasurementBuilder)[] = {
            { Py_tp_methods, t_MultiplexedMeasurementBuilder__methods_ },
            { Py_tp_init, (void *) t_MultiplexedMeasurementBuilder_init_ },
            { Py_tp_getset, t_MultiplexedMeasurementBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MultiplexedMeasurementBuilder)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MultiplexedMeasurementBuilder, t_MultiplexedMeasurementBuilder, MultiplexedMeasurementBuilder);

          void t_MultiplexedMeasurementBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(MultiplexedMeasurementBuilder), &PY_TYPE_DEF(MultiplexedMeasurementBuilder), module, "MultiplexedMeasurementBuilder", 0);
          }

          void t_MultiplexedMeasurementBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultiplexedMeasurementBuilder), "class_", make_descriptor(MultiplexedMeasurementBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultiplexedMeasurementBuilder), "wrapfn_", make_descriptor(t_MultiplexedMeasurementBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultiplexedMeasurementBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MultiplexedMeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MultiplexedMeasurementBuilder::initializeClass, 1)))
              return NULL;
            return t_MultiplexedMeasurementBuilder::wrap_Object(MultiplexedMeasurementBuilder(((t_MultiplexedMeasurementBuilder *) arg)->object.this$));
          }
          static PyObject *t_MultiplexedMeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MultiplexedMeasurementBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_MultiplexedMeasurementBuilder_init_(t_MultiplexedMeasurementBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            MultiplexedMeasurementBuilder object((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = MultiplexedMeasurementBuilder(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_MultiplexedMeasurementBuilder_addModifier(t_MultiplexedMeasurementBuilder *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimationModifier a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimationModifier::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimationModifier::parameters_))
            {
              OBJ_CALL(self->object.addModifier(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addModifier", arg);
            return NULL;
          }

          static PyObject *t_MultiplexedMeasurementBuilder_build(t_MultiplexedMeasurementBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::MultiplexedMeasurement result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_MultiplexedMeasurement::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "build", args);
            return NULL;
          }

          static PyObject *t_MultiplexedMeasurementBuilder_getModifiers(t_MultiplexedMeasurementBuilder *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getModifiers());
            return ::java::util::t_List::wrap_Object(result);
          }

          static PyObject *t_MultiplexedMeasurementBuilder_getSatellites(t_MultiplexedMeasurementBuilder *self)
          {
            JArray< ::org::orekit::estimation::measurements::ObservableSatellite > result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatellites());
            return JArray<jobject>(result.this$).wrap(::org::orekit::estimation::measurements::t_ObservableSatellite::wrap_jobject);
          }

          static PyObject *t_MultiplexedMeasurementBuilder_init(t_MultiplexedMeasurementBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.init(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }

          static PyObject *t_MultiplexedMeasurementBuilder_get__modifiers(t_MultiplexedMeasurementBuilder *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getModifiers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_MultiplexedMeasurementBuilder_get__satellites(t_MultiplexedMeasurementBuilder *self, void *data)
          {
            JArray< ::org::orekit::estimation::measurements::ObservableSatellite > value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatellites());
            return JArray<jobject>(value.this$).wrap(::org::orekit::estimation::measurements::t_ObservableSatellite::wrap_jobject);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSClockElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GNSSClockElements::class$ = NULL;
            jmethodID *GNSSClockElements::mids$ = NULL;
            bool GNSSClockElements::live$ = false;

            jclass GNSSClockElements::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GNSSClockElements");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getAf0_456d9a2f64d6b28d] = env->getMethodID(cls, "getAf0", "()D");
                mids$[mid_getAf1_456d9a2f64d6b28d] = env->getMethodID(cls, "getAf1", "()D");
                mids$[mid_getAf2_456d9a2f64d6b28d] = env->getMethodID(cls, "getAf2", "()D");
                mids$[mid_getCycleDuration_456d9a2f64d6b28d] = env->getMethodID(cls, "getCycleDuration", "()D");
                mids$[mid_getTGD_456d9a2f64d6b28d] = env->getMethodID(cls, "getTGD", "()D");
                mids$[mid_getToc_456d9a2f64d6b28d] = env->getMethodID(cls, "getToc", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble GNSSClockElements::getAf0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAf0_456d9a2f64d6b28d]);
            }

            jdouble GNSSClockElements::getAf1() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAf1_456d9a2f64d6b28d]);
            }

            jdouble GNSSClockElements::getAf2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAf2_456d9a2f64d6b28d]);
            }

            jdouble GNSSClockElements::getCycleDuration() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCycleDuration_456d9a2f64d6b28d]);
            }

            jdouble GNSSClockElements::getTGD() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTGD_456d9a2f64d6b28d]);
            }

            jdouble GNSSClockElements::getToc() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getToc_456d9a2f64d6b28d]);
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
            static PyObject *t_GNSSClockElements_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GNSSClockElements_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GNSSClockElements_getAf0(t_GNSSClockElements *self);
            static PyObject *t_GNSSClockElements_getAf1(t_GNSSClockElements *self);
            static PyObject *t_GNSSClockElements_getAf2(t_GNSSClockElements *self);
            static PyObject *t_GNSSClockElements_getCycleDuration(t_GNSSClockElements *self);
            static PyObject *t_GNSSClockElements_getTGD(t_GNSSClockElements *self);
            static PyObject *t_GNSSClockElements_getToc(t_GNSSClockElements *self);
            static PyObject *t_GNSSClockElements_get__af0(t_GNSSClockElements *self, void *data);
            static PyObject *t_GNSSClockElements_get__af1(t_GNSSClockElements *self, void *data);
            static PyObject *t_GNSSClockElements_get__af2(t_GNSSClockElements *self, void *data);
            static PyObject *t_GNSSClockElements_get__cycleDuration(t_GNSSClockElements *self, void *data);
            static PyObject *t_GNSSClockElements_get__tGD(t_GNSSClockElements *self, void *data);
            static PyObject *t_GNSSClockElements_get__toc(t_GNSSClockElements *self, void *data);
            static PyGetSetDef t_GNSSClockElements__fields_[] = {
              DECLARE_GET_FIELD(t_GNSSClockElements, af0),
              DECLARE_GET_FIELD(t_GNSSClockElements, af1),
              DECLARE_GET_FIELD(t_GNSSClockElements, af2),
              DECLARE_GET_FIELD(t_GNSSClockElements, cycleDuration),
              DECLARE_GET_FIELD(t_GNSSClockElements, tGD),
              DECLARE_GET_FIELD(t_GNSSClockElements, toc),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GNSSClockElements__methods_[] = {
              DECLARE_METHOD(t_GNSSClockElements, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GNSSClockElements, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GNSSClockElements, getAf0, METH_NOARGS),
              DECLARE_METHOD(t_GNSSClockElements, getAf1, METH_NOARGS),
              DECLARE_METHOD(t_GNSSClockElements, getAf2, METH_NOARGS),
              DECLARE_METHOD(t_GNSSClockElements, getCycleDuration, METH_NOARGS),
              DECLARE_METHOD(t_GNSSClockElements, getTGD, METH_NOARGS),
              DECLARE_METHOD(t_GNSSClockElements, getToc, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GNSSClockElements)[] = {
              { Py_tp_methods, t_GNSSClockElements__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_GNSSClockElements__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GNSSClockElements)[] = {
              &PY_TYPE_DEF(::org::orekit::time::TimeStamped),
              NULL
            };

            DEFINE_TYPE(GNSSClockElements, t_GNSSClockElements, GNSSClockElements);

            void t_GNSSClockElements::install(PyObject *module)
            {
              installType(&PY_TYPE(GNSSClockElements), &PY_TYPE_DEF(GNSSClockElements), module, "GNSSClockElements", 0);
            }

            void t_GNSSClockElements::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSClockElements), "class_", make_descriptor(GNSSClockElements::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSClockElements), "wrapfn_", make_descriptor(t_GNSSClockElements::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSClockElements), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GNSSClockElements_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GNSSClockElements::initializeClass, 1)))
                return NULL;
              return t_GNSSClockElements::wrap_Object(GNSSClockElements(((t_GNSSClockElements *) arg)->object.this$));
            }
            static PyObject *t_GNSSClockElements_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GNSSClockElements::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_GNSSClockElements_getAf0(t_GNSSClockElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAf0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSClockElements_getAf1(t_GNSSClockElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAf1());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSClockElements_getAf2(t_GNSSClockElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAf2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSClockElements_getCycleDuration(t_GNSSClockElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCycleDuration());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSClockElements_getTGD(t_GNSSClockElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTGD());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSClockElements_getToc(t_GNSSClockElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getToc());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GNSSClockElements_get__af0(t_GNSSClockElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAf0());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSClockElements_get__af1(t_GNSSClockElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAf1());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSClockElements_get__af2(t_GNSSClockElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAf2());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSClockElements_get__cycleDuration(t_GNSSClockElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCycleDuration());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSClockElements_get__tGD(t_GNSSClockElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTGD());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GNSSClockElements_get__toc(t_GNSSClockElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getToc());
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
#include "org/orekit/propagation/SpacecraftStateInterpolator.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/util/List.h"
#include "org/orekit/frames/Frame.h"
#include "java/util/Collection.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/attitudes/Attitude.h"
#include "java/util/Optional.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/AbsolutePVCoordinates.h"
#include "org/orekit/time/TimeStampedDouble.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *SpacecraftStateInterpolator::class$ = NULL;
      jmethodID *SpacecraftStateInterpolator::mids$ = NULL;
      bool SpacecraftStateInterpolator::live$ = false;

      jclass SpacecraftStateInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/SpacecraftStateInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b1992bd1bb70f476] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_2ec8e00deddf59e8] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;)V");
          mids$[mid_init$_4806cf42a7c4464d] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_c113313c707bf3d9] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_8874babef770dcb7] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/utils/AngularDerivativesFilter;)V");
          mids$[mid_init$_5293467a3d24372c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/time/TimeInterpolator;)V");
          mids$[mid_checkSampleAndInterpolatorConsistency_fc226f4fb89ebce1] = env->getStaticMethodID(cls, "checkSampleAndInterpolatorConsistency", "(Ljava/util/List;ZZ)V");
          mids$[mid_checkStatesDefinitionsConsistency_65de9727799c5641] = env->getStaticMethodID(cls, "checkStatesDefinitionsConsistency", "(Ljava/util/List;)V");
          mids$[mid_getAbsPVAInterpolator_c56b7edc0c3c7d86] = env->getMethodID(cls, "getAbsPVAInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getAdditionalStateInterpolator_c56b7edc0c3c7d86] = env->getMethodID(cls, "getAdditionalStateInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getAttitudeInterpolator_c56b7edc0c3c7d86] = env->getMethodID(cls, "getAttitudeInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getMassInterpolator_c56b7edc0c3c7d86] = env->getMethodID(cls, "getMassInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getNbInterpolationPoints_f2f64475e4580546] = env->getMethodID(cls, "getNbInterpolationPoints", "()I");
          mids$[mid_getOrbitInterpolator_c56b7edc0c3c7d86] = env->getMethodID(cls, "getOrbitInterpolator", "()Ljava/util/Optional;");
          mids$[mid_getOutputFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getOutputFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getSubInterpolators_a6156df500549a58] = env->getMethodID(cls, "getSubInterpolators", "()Ljava/util/List;");
          mids$[mid_interpolate_20ba144eae918f32] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Collection;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_interpolate_2f2d20a5ea5a277a] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/propagation/SpacecraftState;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SpacecraftStateInterpolator::SpacecraftStateInterpolator(const ::org::orekit::frames::Frame & a0) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_b1992bd1bb70f476, a0.this$)) {}

      SpacecraftStateInterpolator::SpacecraftStateInterpolator(jint a0, const ::org::orekit::frames::Frame & a1) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_2ec8e00deddf59e8, a0, a1.this$)) {}

      SpacecraftStateInterpolator::SpacecraftStateInterpolator(jint a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_4806cf42a7c4464d, a0, a1.this$, a2.this$)) {}

      SpacecraftStateInterpolator::SpacecraftStateInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_c113313c707bf3d9, a0, a1, a2.this$, a3.this$)) {}

      SpacecraftStateInterpolator::SpacecraftStateInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::frames::Frame & a3, const ::org::orekit::utils::CartesianDerivativesFilter & a4, const ::org::orekit::utils::AngularDerivativesFilter & a5) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_8874babef770dcb7, a0, a1, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      SpacecraftStateInterpolator::SpacecraftStateInterpolator(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::org::orekit::time::TimeInterpolator & a2, const ::org::orekit::time::TimeInterpolator & a3, const ::org::orekit::time::TimeInterpolator & a4, const ::org::orekit::time::TimeInterpolator & a5) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_5293467a3d24372c, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      void SpacecraftStateInterpolator::checkSampleAndInterpolatorConsistency(const ::java::util::List & a0, jboolean a1, jboolean a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkSampleAndInterpolatorConsistency_fc226f4fb89ebce1], a0.this$, a1, a2);
      }

      void SpacecraftStateInterpolator::checkStatesDefinitionsConsistency(const ::java::util::List & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkStatesDefinitionsConsistency_65de9727799c5641], a0.this$);
      }

      ::java::util::Optional SpacecraftStateInterpolator::getAbsPVAInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getAbsPVAInterpolator_c56b7edc0c3c7d86]));
      }

      ::java::util::Optional SpacecraftStateInterpolator::getAdditionalStateInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getAdditionalStateInterpolator_c56b7edc0c3c7d86]));
      }

      ::java::util::Optional SpacecraftStateInterpolator::getAttitudeInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getAttitudeInterpolator_c56b7edc0c3c7d86]));
      }

      ::java::util::Optional SpacecraftStateInterpolator::getMassInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getMassInterpolator_c56b7edc0c3c7d86]));
      }

      jint SpacecraftStateInterpolator::getNbInterpolationPoints() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbInterpolationPoints_f2f64475e4580546]);
      }

      ::java::util::Optional SpacecraftStateInterpolator::getOrbitInterpolator() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getOrbitInterpolator_c56b7edc0c3c7d86]));
      }

      ::org::orekit::frames::Frame SpacecraftStateInterpolator::getOutputFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getOutputFrame_c8fe21bcdac65bf6]));
      }

      ::java::util::List SpacecraftStateInterpolator::getSubInterpolators() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSubInterpolators_a6156df500549a58]));
      }

      ::org::orekit::propagation::SpacecraftState SpacecraftStateInterpolator::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Collection & a1) const
      {
        return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_interpolate_20ba144eae918f32], a0.this$, a1.this$));
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
      static PyObject *t_SpacecraftStateInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SpacecraftStateInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SpacecraftStateInterpolator_of_(t_SpacecraftStateInterpolator *self, PyObject *args);
      static int t_SpacecraftStateInterpolator_init_(t_SpacecraftStateInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SpacecraftStateInterpolator_checkSampleAndInterpolatorConsistency(PyTypeObject *type, PyObject *args);
      static PyObject *t_SpacecraftStateInterpolator_checkStatesDefinitionsConsistency(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SpacecraftStateInterpolator_getAbsPVAInterpolator(t_SpacecraftStateInterpolator *self);
      static PyObject *t_SpacecraftStateInterpolator_getAdditionalStateInterpolator(t_SpacecraftStateInterpolator *self);
      static PyObject *t_SpacecraftStateInterpolator_getAttitudeInterpolator(t_SpacecraftStateInterpolator *self);
      static PyObject *t_SpacecraftStateInterpolator_getMassInterpolator(t_SpacecraftStateInterpolator *self);
      static PyObject *t_SpacecraftStateInterpolator_getNbInterpolationPoints(t_SpacecraftStateInterpolator *self, PyObject *args);
      static PyObject *t_SpacecraftStateInterpolator_getOrbitInterpolator(t_SpacecraftStateInterpolator *self);
      static PyObject *t_SpacecraftStateInterpolator_getOutputFrame(t_SpacecraftStateInterpolator *self);
      static PyObject *t_SpacecraftStateInterpolator_getSubInterpolators(t_SpacecraftStateInterpolator *self, PyObject *args);
      static PyObject *t_SpacecraftStateInterpolator_interpolate(t_SpacecraftStateInterpolator *self, PyObject *args);
      static PyObject *t_SpacecraftStateInterpolator_get__absPVAInterpolator(t_SpacecraftStateInterpolator *self, void *data);
      static PyObject *t_SpacecraftStateInterpolator_get__additionalStateInterpolator(t_SpacecraftStateInterpolator *self, void *data);
      static PyObject *t_SpacecraftStateInterpolator_get__attitudeInterpolator(t_SpacecraftStateInterpolator *self, void *data);
      static PyObject *t_SpacecraftStateInterpolator_get__massInterpolator(t_SpacecraftStateInterpolator *self, void *data);
      static PyObject *t_SpacecraftStateInterpolator_get__nbInterpolationPoints(t_SpacecraftStateInterpolator *self, void *data);
      static PyObject *t_SpacecraftStateInterpolator_get__orbitInterpolator(t_SpacecraftStateInterpolator *self, void *data);
      static PyObject *t_SpacecraftStateInterpolator_get__outputFrame(t_SpacecraftStateInterpolator *self, void *data);
      static PyObject *t_SpacecraftStateInterpolator_get__subInterpolators(t_SpacecraftStateInterpolator *self, void *data);
      static PyObject *t_SpacecraftStateInterpolator_get__parameters_(t_SpacecraftStateInterpolator *self, void *data);
      static PyGetSetDef t_SpacecraftStateInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_SpacecraftStateInterpolator, absPVAInterpolator),
        DECLARE_GET_FIELD(t_SpacecraftStateInterpolator, additionalStateInterpolator),
        DECLARE_GET_FIELD(t_SpacecraftStateInterpolator, attitudeInterpolator),
        DECLARE_GET_FIELD(t_SpacecraftStateInterpolator, massInterpolator),
        DECLARE_GET_FIELD(t_SpacecraftStateInterpolator, nbInterpolationPoints),
        DECLARE_GET_FIELD(t_SpacecraftStateInterpolator, orbitInterpolator),
        DECLARE_GET_FIELD(t_SpacecraftStateInterpolator, outputFrame),
        DECLARE_GET_FIELD(t_SpacecraftStateInterpolator, subInterpolators),
        DECLARE_GET_FIELD(t_SpacecraftStateInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SpacecraftStateInterpolator__methods_[] = {
        DECLARE_METHOD(t_SpacecraftStateInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, checkSampleAndInterpolatorConsistency, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, checkStatesDefinitionsConsistency, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, getAbsPVAInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, getAdditionalStateInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, getAttitudeInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, getMassInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, getNbInterpolationPoints, METH_VARARGS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, getOrbitInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, getOutputFrame, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, getSubInterpolators, METH_VARARGS),
        DECLARE_METHOD(t_SpacecraftStateInterpolator, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SpacecraftStateInterpolator)[] = {
        { Py_tp_methods, t_SpacecraftStateInterpolator__methods_ },
        { Py_tp_init, (void *) t_SpacecraftStateInterpolator_init_ },
        { Py_tp_getset, t_SpacecraftStateInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SpacecraftStateInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(SpacecraftStateInterpolator, t_SpacecraftStateInterpolator, SpacecraftStateInterpolator);
      PyObject *t_SpacecraftStateInterpolator::wrap_Object(const SpacecraftStateInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SpacecraftStateInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SpacecraftStateInterpolator *self = (t_SpacecraftStateInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SpacecraftStateInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SpacecraftStateInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SpacecraftStateInterpolator *self = (t_SpacecraftStateInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SpacecraftStateInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(SpacecraftStateInterpolator), &PY_TYPE_DEF(SpacecraftStateInterpolator), module, "SpacecraftStateInterpolator", 0);
      }

      void t_SpacecraftStateInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftStateInterpolator), "class_", make_descriptor(SpacecraftStateInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftStateInterpolator), "wrapfn_", make_descriptor(t_SpacecraftStateInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftStateInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SpacecraftStateInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SpacecraftStateInterpolator::initializeClass, 1)))
          return NULL;
        return t_SpacecraftStateInterpolator::wrap_Object(SpacecraftStateInterpolator(((t_SpacecraftStateInterpolator *) arg)->object.this$));
      }
      static PyObject *t_SpacecraftStateInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SpacecraftStateInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SpacecraftStateInterpolator_of_(t_SpacecraftStateInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_SpacecraftStateInterpolator_init_(t_SpacecraftStateInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            SpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              INT_CALL(object = SpacecraftStateInterpolator(a0));
              self->object = object;
              self->parameters[0] = ::org::orekit::propagation::PY_TYPE(SpacecraftState);
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            SpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SpacecraftStateInterpolator(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::orekit::propagation::PY_TYPE(SpacecraftState);
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            SpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "Ikk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = SpacecraftStateInterpolator(a0, a1, a2));
              self->object = object;
              self->parameters[0] = ::org::orekit::propagation::PY_TYPE(SpacecraftState);
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::frames::Frame a3((jobject) NULL);
            SpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = SpacecraftStateInterpolator(a0, a1, a2, a3));
              self->object = object;
              self->parameters[0] = ::org::orekit::propagation::PY_TYPE(SpacecraftState);
              break;
            }
          }
          goto err;
         case 6:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::frames::Frame a3((jobject) NULL);
            ::org::orekit::utils::CartesianDerivativesFilter a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::utils::AngularDerivativesFilter a5((jobject) NULL);
            PyTypeObject **p5;
            SpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDkkKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a5, &p5, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
            {
              INT_CALL(object = SpacecraftStateInterpolator(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::propagation::PY_TYPE(SpacecraftState);
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::TimeInterpolator a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::time::TimeInterpolator a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::time::TimeInterpolator a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::time::TimeInterpolator a5((jobject) NULL);
            PyTypeObject **p5;
            SpacecraftStateInterpolator object((jobject) NULL);

            if (!parseArgs(args, "kKKKKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::org::orekit::time::t_TimeInterpolator::parameters_, &a3, &p3, ::org::orekit::time::t_TimeInterpolator::parameters_, &a4, &p4, ::org::orekit::time::t_TimeInterpolator::parameters_, &a5, &p5, ::org::orekit::time::t_TimeInterpolator::parameters_))
            {
              INT_CALL(object = SpacecraftStateInterpolator(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::propagation::PY_TYPE(SpacecraftState);
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

      static PyObject *t_SpacecraftStateInterpolator_checkSampleAndInterpolatorConsistency(PyTypeObject *type, PyObject *args)
      {
        ::java::util::List a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        jboolean a2;

        if (!parseArgs(args, "KZZ", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2))
        {
          OBJ_CALL(::org::orekit::propagation::SpacecraftStateInterpolator::checkSampleAndInterpolatorConsistency(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkSampleAndInterpolatorConsistency", args);
        return NULL;
      }

      static PyObject *t_SpacecraftStateInterpolator_checkStatesDefinitionsConsistency(PyTypeObject *type, PyObject *arg)
      {
        ::java::util::List a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
        {
          OBJ_CALL(::org::orekit::propagation::SpacecraftStateInterpolator::checkStatesDefinitionsConsistency(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkStatesDefinitionsConsistency", arg);
        return NULL;
      }

      static PyObject *t_SpacecraftStateInterpolator_getAbsPVAInterpolator(t_SpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getAbsPVAInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_SpacecraftStateInterpolator_getAdditionalStateInterpolator(t_SpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStateInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_SpacecraftStateInterpolator_getAttitudeInterpolator(t_SpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getAttitudeInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_SpacecraftStateInterpolator_getMassInterpolator(t_SpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getMassInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_SpacecraftStateInterpolator_getNbInterpolationPoints(t_SpacecraftStateInterpolator *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getNbInterpolationPoints());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(SpacecraftStateInterpolator), (PyObject *) self, "getNbInterpolationPoints", args, 2);
      }

      static PyObject *t_SpacecraftStateInterpolator_getOrbitInterpolator(t_SpacecraftStateInterpolator *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrbitInterpolator());
        return ::java::util::t_Optional::wrap_Object(result);
      }

      static PyObject *t_SpacecraftStateInterpolator_getOutputFrame(t_SpacecraftStateInterpolator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutputFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_SpacecraftStateInterpolator_getSubInterpolators(t_SpacecraftStateInterpolator *self, PyObject *args)
      {
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getSubInterpolators());
          return ::java::util::t_List::wrap_Object(result);
        }

        return callSuper(PY_TYPE(SpacecraftStateInterpolator), (PyObject *) self, "getSubInterpolators", args, 2);
      }

      static PyObject *t_SpacecraftStateInterpolator_interpolate(t_SpacecraftStateInterpolator *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::java::util::Collection a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

        if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
        {
          OBJ_CALL(result = self->object.interpolate(a0, a1));
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }

        return callSuper(PY_TYPE(SpacecraftStateInterpolator), (PyObject *) self, "interpolate", args, 2);
      }
      static PyObject *t_SpacecraftStateInterpolator_get__parameters_(t_SpacecraftStateInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_SpacecraftStateInterpolator_get__absPVAInterpolator(t_SpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getAbsPVAInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_SpacecraftStateInterpolator_get__additionalStateInterpolator(t_SpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStateInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_SpacecraftStateInterpolator_get__attitudeInterpolator(t_SpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getAttitudeInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_SpacecraftStateInterpolator_get__massInterpolator(t_SpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getMassInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_SpacecraftStateInterpolator_get__nbInterpolationPoints(t_SpacecraftStateInterpolator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNbInterpolationPoints());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_SpacecraftStateInterpolator_get__orbitInterpolator(t_SpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::Optional value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrbitInterpolator());
        return ::java::util::t_Optional::wrap_Object(value);
      }

      static PyObject *t_SpacecraftStateInterpolator_get__outputFrame(t_SpacecraftStateInterpolator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutputFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_SpacecraftStateInterpolator_get__subInterpolators(t_SpacecraftStateInterpolator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getSubInterpolators());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimator.h"
#include "java/util/List.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/propagation/semianalytical/dsst/DSSTPropagator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *SemiAnalyticalUnscentedKalmanEstimator::class$ = NULL;
        jmethodID *SemiAnalyticalUnscentedKalmanEstimator::mids$ = NULL;
        bool SemiAnalyticalUnscentedKalmanEstimator::live$ = false;

        jclass SemiAnalyticalUnscentedKalmanEstimator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanEstimator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_processMeasurements_aed7f600bccde355] = env->getMethodID(cls, "processMeasurements", "(Ljava/util/List;)Lorg/orekit/propagation/semianalytical/dsst/DSSTPropagator;");
            mids$[mid_setObserver_fe6775fb802fa129] = env->getMethodID(cls, "setObserver", "(Lorg/orekit/estimation/sequential/KalmanObserver;)V");
            mids$[mid_getKalmanEstimation_69a0a486b7aaf0c0] = env->getMethodID(cls, "getKalmanEstimation", "()Lorg/orekit/estimation/sequential/KalmanEstimation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator SemiAnalyticalUnscentedKalmanEstimator::processMeasurements(const ::java::util::List & a0) const
        {
          return ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator(env->callObjectMethod(this$, mids$[mid_processMeasurements_aed7f600bccde355], a0.this$));
        }

        void SemiAnalyticalUnscentedKalmanEstimator::setObserver(const ::org::orekit::estimation::sequential::KalmanObserver & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setObserver_fe6775fb802fa129], a0.this$);
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
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimator_processMeasurements(t_SemiAnalyticalUnscentedKalmanEstimator *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimator_setObserver(t_SemiAnalyticalUnscentedKalmanEstimator *self, PyObject *arg);
        static int t_SemiAnalyticalUnscentedKalmanEstimator_set__observer(t_SemiAnalyticalUnscentedKalmanEstimator *self, PyObject *arg, void *data);
        static PyGetSetDef t_SemiAnalyticalUnscentedKalmanEstimator__fields_[] = {
          DECLARE_SET_FIELD(t_SemiAnalyticalUnscentedKalmanEstimator, observer),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SemiAnalyticalUnscentedKalmanEstimator__methods_[] = {
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimator, processMeasurements, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanEstimator, setObserver, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SemiAnalyticalUnscentedKalmanEstimator)[] = {
          { Py_tp_methods, t_SemiAnalyticalUnscentedKalmanEstimator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SemiAnalyticalUnscentedKalmanEstimator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SemiAnalyticalUnscentedKalmanEstimator)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::sequential::AbstractKalmanEstimator),
          NULL
        };

        DEFINE_TYPE(SemiAnalyticalUnscentedKalmanEstimator, t_SemiAnalyticalUnscentedKalmanEstimator, SemiAnalyticalUnscentedKalmanEstimator);

        void t_SemiAnalyticalUnscentedKalmanEstimator::install(PyObject *module)
        {
          installType(&PY_TYPE(SemiAnalyticalUnscentedKalmanEstimator), &PY_TYPE_DEF(SemiAnalyticalUnscentedKalmanEstimator), module, "SemiAnalyticalUnscentedKalmanEstimator", 0);
        }

        void t_SemiAnalyticalUnscentedKalmanEstimator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalUnscentedKalmanEstimator), "class_", make_descriptor(SemiAnalyticalUnscentedKalmanEstimator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalUnscentedKalmanEstimator), "wrapfn_", make_descriptor(t_SemiAnalyticalUnscentedKalmanEstimator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalUnscentedKalmanEstimator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SemiAnalyticalUnscentedKalmanEstimator::initializeClass, 1)))
            return NULL;
          return t_SemiAnalyticalUnscentedKalmanEstimator::wrap_Object(SemiAnalyticalUnscentedKalmanEstimator(((t_SemiAnalyticalUnscentedKalmanEstimator *) arg)->object.this$));
        }
        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SemiAnalyticalUnscentedKalmanEstimator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimator_processMeasurements(t_SemiAnalyticalUnscentedKalmanEstimator *self, PyObject *arg)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator result((jobject) NULL);

          if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(result = self->object.processMeasurements(a0));
            return ::org::orekit::propagation::semianalytical::dsst::t_DSSTPropagator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "processMeasurements", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanEstimator_setObserver(t_SemiAnalyticalUnscentedKalmanEstimator *self, PyObject *arg)
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

        static int t_SemiAnalyticalUnscentedKalmanEstimator_set__observer(t_SemiAnalyticalUnscentedKalmanEstimator *self, PyObject *arg, void *data)
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
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/EnumeratedRealDistribution.h"
#include "java/util/List.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Double.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/Pair.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *EnumeratedRealDistribution::class$ = NULL;
        jmethodID *EnumeratedRealDistribution::mids$ = NULL;
        bool EnumeratedRealDistribution::live$ = false;

        jclass EnumeratedRealDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/EnumeratedRealDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ebc26dcaf4761286] = env->getMethodID(cls, "<init>", "([D)V");
            mids$[mid_init$_0d03c8a1d7f56f02] = env->getMethodID(cls, "<init>", "([D[D)V");
            mids$[mid_cumulativeProbability_0ba5fed9597b693e] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_0ba5fed9597b693e] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getNumericalMean_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getPmf_a6156df500549a58] = env->getMethodID(cls, "getPmf", "()Ljava/util/List;");
            mids$[mid_getSupportLowerBound_456d9a2f64d6b28d] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_456d9a2f64d6b28d] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_0ba5fed9597b693e] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_e470b6d9e0d979db] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_probability_0ba5fed9597b693e] = env->getMethodID(cls, "probability", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EnumeratedRealDistribution::EnumeratedRealDistribution(const JArray< jdouble > & a0) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_ebc26dcaf4761286, a0.this$)) {}

        EnumeratedRealDistribution::EnumeratedRealDistribution(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_0d03c8a1d7f56f02, a0.this$, a1.this$)) {}

        jdouble EnumeratedRealDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_0ba5fed9597b693e], a0);
        }

        jdouble EnumeratedRealDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_0ba5fed9597b693e], a0);
        }

        jdouble EnumeratedRealDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_456d9a2f64d6b28d]);
        }

        jdouble EnumeratedRealDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_456d9a2f64d6b28d]);
        }

        ::java::util::List EnumeratedRealDistribution::getPmf() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getPmf_a6156df500549a58]));
        }

        jdouble EnumeratedRealDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_456d9a2f64d6b28d]);
        }

        jdouble EnumeratedRealDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_456d9a2f64d6b28d]);
        }

        jdouble EnumeratedRealDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_0ba5fed9597b693e], a0);
        }

        jboolean EnumeratedRealDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_e470b6d9e0d979db]);
        }

        jdouble EnumeratedRealDistribution::probability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_0ba5fed9597b693e], a0);
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
        static PyObject *t_EnumeratedRealDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EnumeratedRealDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EnumeratedRealDistribution_init_(t_EnumeratedRealDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EnumeratedRealDistribution_cumulativeProbability(t_EnumeratedRealDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedRealDistribution_density(t_EnumeratedRealDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedRealDistribution_getNumericalMean(t_EnumeratedRealDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedRealDistribution_getNumericalVariance(t_EnumeratedRealDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedRealDistribution_getPmf(t_EnumeratedRealDistribution *self);
        static PyObject *t_EnumeratedRealDistribution_getSupportLowerBound(t_EnumeratedRealDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedRealDistribution_getSupportUpperBound(t_EnumeratedRealDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedRealDistribution_inverseCumulativeProbability(t_EnumeratedRealDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedRealDistribution_isSupportConnected(t_EnumeratedRealDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedRealDistribution_probability(t_EnumeratedRealDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedRealDistribution_get__numericalMean(t_EnumeratedRealDistribution *self, void *data);
        static PyObject *t_EnumeratedRealDistribution_get__numericalVariance(t_EnumeratedRealDistribution *self, void *data);
        static PyObject *t_EnumeratedRealDistribution_get__pmf(t_EnumeratedRealDistribution *self, void *data);
        static PyObject *t_EnumeratedRealDistribution_get__supportConnected(t_EnumeratedRealDistribution *self, void *data);
        static PyObject *t_EnumeratedRealDistribution_get__supportLowerBound(t_EnumeratedRealDistribution *self, void *data);
        static PyObject *t_EnumeratedRealDistribution_get__supportUpperBound(t_EnumeratedRealDistribution *self, void *data);
        static PyGetSetDef t_EnumeratedRealDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_EnumeratedRealDistribution, numericalMean),
          DECLARE_GET_FIELD(t_EnumeratedRealDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_EnumeratedRealDistribution, pmf),
          DECLARE_GET_FIELD(t_EnumeratedRealDistribution, supportConnected),
          DECLARE_GET_FIELD(t_EnumeratedRealDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_EnumeratedRealDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EnumeratedRealDistribution__methods_[] = {
          DECLARE_METHOD(t_EnumeratedRealDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EnumeratedRealDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EnumeratedRealDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedRealDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedRealDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedRealDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedRealDistribution, getPmf, METH_NOARGS),
          DECLARE_METHOD(t_EnumeratedRealDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedRealDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedRealDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedRealDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedRealDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EnumeratedRealDistribution)[] = {
          { Py_tp_methods, t_EnumeratedRealDistribution__methods_ },
          { Py_tp_init, (void *) t_EnumeratedRealDistribution_init_ },
          { Py_tp_getset, t_EnumeratedRealDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EnumeratedRealDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(EnumeratedRealDistribution, t_EnumeratedRealDistribution, EnumeratedRealDistribution);

        void t_EnumeratedRealDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(EnumeratedRealDistribution), &PY_TYPE_DEF(EnumeratedRealDistribution), module, "EnumeratedRealDistribution", 0);
        }

        void t_EnumeratedRealDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnumeratedRealDistribution), "class_", make_descriptor(EnumeratedRealDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnumeratedRealDistribution), "wrapfn_", make_descriptor(t_EnumeratedRealDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnumeratedRealDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EnumeratedRealDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EnumeratedRealDistribution::initializeClass, 1)))
            return NULL;
          return t_EnumeratedRealDistribution::wrap_Object(EnumeratedRealDistribution(((t_EnumeratedRealDistribution *) arg)->object.this$));
        }
        static PyObject *t_EnumeratedRealDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EnumeratedRealDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EnumeratedRealDistribution_init_(t_EnumeratedRealDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);
              EnumeratedRealDistribution object((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                INT_CALL(object = EnumeratedRealDistribution(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              EnumeratedRealDistribution object((jobject) NULL);

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                INT_CALL(object = EnumeratedRealDistribution(a0, a1));
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

        static PyObject *t_EnumeratedRealDistribution_cumulativeProbability(t_EnumeratedRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedRealDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_EnumeratedRealDistribution_density(t_EnumeratedRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedRealDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_EnumeratedRealDistribution_getNumericalMean(t_EnumeratedRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedRealDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_EnumeratedRealDistribution_getNumericalVariance(t_EnumeratedRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedRealDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_EnumeratedRealDistribution_getPmf(t_EnumeratedRealDistribution *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getPmf());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_EnumeratedRealDistribution_getSupportLowerBound(t_EnumeratedRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedRealDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_EnumeratedRealDistribution_getSupportUpperBound(t_EnumeratedRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedRealDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_EnumeratedRealDistribution_inverseCumulativeProbability(t_EnumeratedRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedRealDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_EnumeratedRealDistribution_isSupportConnected(t_EnumeratedRealDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(EnumeratedRealDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_EnumeratedRealDistribution_probability(t_EnumeratedRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.probability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedRealDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_EnumeratedRealDistribution_get__numericalMean(t_EnumeratedRealDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EnumeratedRealDistribution_get__numericalVariance(t_EnumeratedRealDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EnumeratedRealDistribution_get__pmf(t_EnumeratedRealDistribution *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getPmf());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_EnumeratedRealDistribution_get__supportConnected(t_EnumeratedRealDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_EnumeratedRealDistribution_get__supportLowerBound(t_EnumeratedRealDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EnumeratedRealDistribution_get__supportUpperBound(t_EnumeratedRealDistribution *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/ShapiroInterSatellitePhaseModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesPhase.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *ShapiroInterSatellitePhaseModifier::class$ = NULL;
          jmethodID *ShapiroInterSatellitePhaseModifier::mids$ = NULL;
          bool ShapiroInterSatellitePhaseModifier::live$ = false;

          jclass ShapiroInterSatellitePhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/ShapiroInterSatellitePhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ShapiroInterSatellitePhaseModifier::ShapiroInterSatellitePhaseModifier(jdouble a0) : ::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

          ::java::util::List ShapiroInterSatellitePhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          void ShapiroInterSatellitePhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_811f96960c94c1de], a0.this$);
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
          static PyObject *t_ShapiroInterSatellitePhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ShapiroInterSatellitePhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ShapiroInterSatellitePhaseModifier_init_(t_ShapiroInterSatellitePhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ShapiroInterSatellitePhaseModifier_getParametersDrivers(t_ShapiroInterSatellitePhaseModifier *self);
          static PyObject *t_ShapiroInterSatellitePhaseModifier_modifyWithoutDerivatives(t_ShapiroInterSatellitePhaseModifier *self, PyObject *arg);
          static PyObject *t_ShapiroInterSatellitePhaseModifier_get__parametersDrivers(t_ShapiroInterSatellitePhaseModifier *self, void *data);
          static PyGetSetDef t_ShapiroInterSatellitePhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_ShapiroInterSatellitePhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ShapiroInterSatellitePhaseModifier__methods_[] = {
            DECLARE_METHOD(t_ShapiroInterSatellitePhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroInterSatellitePhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroInterSatellitePhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_ShapiroInterSatellitePhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ShapiroInterSatellitePhaseModifier)[] = {
            { Py_tp_methods, t_ShapiroInterSatellitePhaseModifier__methods_ },
            { Py_tp_init, (void *) t_ShapiroInterSatellitePhaseModifier_init_ },
            { Py_tp_getset, t_ShapiroInterSatellitePhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ShapiroInterSatellitePhaseModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier),
            NULL
          };

          DEFINE_TYPE(ShapiroInterSatellitePhaseModifier, t_ShapiroInterSatellitePhaseModifier, ShapiroInterSatellitePhaseModifier);

          void t_ShapiroInterSatellitePhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(ShapiroInterSatellitePhaseModifier), &PY_TYPE_DEF(ShapiroInterSatellitePhaseModifier), module, "ShapiroInterSatellitePhaseModifier", 0);
          }

          void t_ShapiroInterSatellitePhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroInterSatellitePhaseModifier), "class_", make_descriptor(ShapiroInterSatellitePhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroInterSatellitePhaseModifier), "wrapfn_", make_descriptor(t_ShapiroInterSatellitePhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroInterSatellitePhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ShapiroInterSatellitePhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ShapiroInterSatellitePhaseModifier::initializeClass, 1)))
              return NULL;
            return t_ShapiroInterSatellitePhaseModifier::wrap_Object(ShapiroInterSatellitePhaseModifier(((t_ShapiroInterSatellitePhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_ShapiroInterSatellitePhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ShapiroInterSatellitePhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ShapiroInterSatellitePhaseModifier_init_(t_ShapiroInterSatellitePhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            ShapiroInterSatellitePhaseModifier object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = ShapiroInterSatellitePhaseModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ShapiroInterSatellitePhaseModifier_getParametersDrivers(t_ShapiroInterSatellitePhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_ShapiroInterSatellitePhaseModifier_modifyWithoutDerivatives(t_ShapiroInterSatellitePhaseModifier *self, PyObject *arg)
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

          static PyObject *t_ShapiroInterSatellitePhaseModifier_get__parametersDrivers(t_ShapiroInterSatellitePhaseModifier *self, void *data)
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
#include "org/hipparchus/ode/sampling/AbstractODEStateInterpolator.h"
#include "org/hipparchus/ode/sampling/ODEStateInterpolator.h"
#include "org/hipparchus/ode/sampling/AbstractODEStateInterpolator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *AbstractODEStateInterpolator::class$ = NULL;
        jmethodID *AbstractODEStateInterpolator::mids$ = NULL;
        bool AbstractODEStateInterpolator::live$ = false;

        jclass AbstractODEStateInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/AbstractODEStateInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCurrentState_ced1effea9e5e5d4] = env->getMethodID(cls, "getCurrentState", "()Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_getGlobalCurrentState_ced1effea9e5e5d4] = env->getMethodID(cls, "getGlobalCurrentState", "()Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_getGlobalPreviousState_ced1effea9e5e5d4] = env->getMethodID(cls, "getGlobalPreviousState", "()Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_getInterpolatedState_05e60c2c1f1796ae] = env->getMethodID(cls, "getInterpolatedState", "(D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_getPreviousState_ced1effea9e5e5d4] = env->getMethodID(cls, "getPreviousState", "()Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_isCurrentStateInterpolated_e470b6d9e0d979db] = env->getMethodID(cls, "isCurrentStateInterpolated", "()Z");
            mids$[mid_isForward_e470b6d9e0d979db] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_isPreviousStateInterpolated_e470b6d9e0d979db] = env->getMethodID(cls, "isPreviousStateInterpolated", "()Z");
            mids$[mid_restrictStep_8d50e0f2e9084026] = env->getMethodID(cls, "restrictStep", "(Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;)Lorg/hipparchus/ode/sampling/AbstractODEStateInterpolator;");
            mids$[mid_getMapper_c85ebb7ac50d94ef] = env->getMethodID(cls, "getMapper", "()Lorg/hipparchus/ode/EquationsMapper;");
            mids$[mid_computeInterpolatedStateAndDerivatives_6016dab239580c85] = env->getMethodID(cls, "computeInterpolatedStateAndDerivatives", "(Lorg/hipparchus/ode/EquationsMapper;DDDD)Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_create_5812ee4c35ceca71] = env->getMethodID(cls, "create", "(ZLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/sampling/AbstractODEStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::ODEStateAndDerivative AbstractODEStateInterpolator::getCurrentState() const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getCurrentState_ced1effea9e5e5d4]));
        }

        ::org::hipparchus::ode::ODEStateAndDerivative AbstractODEStateInterpolator::getGlobalCurrentState() const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getGlobalCurrentState_ced1effea9e5e5d4]));
        }

        ::org::hipparchus::ode::ODEStateAndDerivative AbstractODEStateInterpolator::getGlobalPreviousState() const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getGlobalPreviousState_ced1effea9e5e5d4]));
        }

        ::org::hipparchus::ode::ODEStateAndDerivative AbstractODEStateInterpolator::getInterpolatedState(jdouble a0) const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getInterpolatedState_05e60c2c1f1796ae], a0));
        }

        ::org::hipparchus::ode::ODEStateAndDerivative AbstractODEStateInterpolator::getPreviousState() const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getPreviousState_ced1effea9e5e5d4]));
        }

        jboolean AbstractODEStateInterpolator::isCurrentStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isCurrentStateInterpolated_e470b6d9e0d979db]);
        }

        jboolean AbstractODEStateInterpolator::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_e470b6d9e0d979db]);
        }

        jboolean AbstractODEStateInterpolator::isPreviousStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isPreviousStateInterpolated_e470b6d9e0d979db]);
        }

        AbstractODEStateInterpolator AbstractODEStateInterpolator::restrictStep(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, const ::org::hipparchus::ode::ODEStateAndDerivative & a1) const
        {
          return AbstractODEStateInterpolator(env->callObjectMethod(this$, mids$[mid_restrictStep_8d50e0f2e9084026], a0.this$, a1.this$));
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
        static PyObject *t_AbstractODEStateInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractODEStateInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractODEStateInterpolator_getCurrentState(t_AbstractODEStateInterpolator *self);
        static PyObject *t_AbstractODEStateInterpolator_getGlobalCurrentState(t_AbstractODEStateInterpolator *self);
        static PyObject *t_AbstractODEStateInterpolator_getGlobalPreviousState(t_AbstractODEStateInterpolator *self);
        static PyObject *t_AbstractODEStateInterpolator_getInterpolatedState(t_AbstractODEStateInterpolator *self, PyObject *arg);
        static PyObject *t_AbstractODEStateInterpolator_getPreviousState(t_AbstractODEStateInterpolator *self);
        static PyObject *t_AbstractODEStateInterpolator_isCurrentStateInterpolated(t_AbstractODEStateInterpolator *self);
        static PyObject *t_AbstractODEStateInterpolator_isForward(t_AbstractODEStateInterpolator *self);
        static PyObject *t_AbstractODEStateInterpolator_isPreviousStateInterpolated(t_AbstractODEStateInterpolator *self);
        static PyObject *t_AbstractODEStateInterpolator_restrictStep(t_AbstractODEStateInterpolator *self, PyObject *args);
        static PyObject *t_AbstractODEStateInterpolator_get__currentState(t_AbstractODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractODEStateInterpolator_get__currentStateInterpolated(t_AbstractODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractODEStateInterpolator_get__forward(t_AbstractODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractODEStateInterpolator_get__globalCurrentState(t_AbstractODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractODEStateInterpolator_get__globalPreviousState(t_AbstractODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractODEStateInterpolator_get__previousState(t_AbstractODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractODEStateInterpolator_get__previousStateInterpolated(t_AbstractODEStateInterpolator *self, void *data);
        static PyGetSetDef t_AbstractODEStateInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractODEStateInterpolator, currentState),
          DECLARE_GET_FIELD(t_AbstractODEStateInterpolator, currentStateInterpolated),
          DECLARE_GET_FIELD(t_AbstractODEStateInterpolator, forward),
          DECLARE_GET_FIELD(t_AbstractODEStateInterpolator, globalCurrentState),
          DECLARE_GET_FIELD(t_AbstractODEStateInterpolator, globalPreviousState),
          DECLARE_GET_FIELD(t_AbstractODEStateInterpolator, previousState),
          DECLARE_GET_FIELD(t_AbstractODEStateInterpolator, previousStateInterpolated),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractODEStateInterpolator__methods_[] = {
          DECLARE_METHOD(t_AbstractODEStateInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, getCurrentState, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, getGlobalCurrentState, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, getGlobalPreviousState, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, getInterpolatedState, METH_O),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, getPreviousState, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, isCurrentStateInterpolated, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, isForward, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, isPreviousStateInterpolated, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, restrictStep, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractODEStateInterpolator)[] = {
          { Py_tp_methods, t_AbstractODEStateInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractODEStateInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractODEStateInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractODEStateInterpolator, t_AbstractODEStateInterpolator, AbstractODEStateInterpolator);

        void t_AbstractODEStateInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractODEStateInterpolator), &PY_TYPE_DEF(AbstractODEStateInterpolator), module, "AbstractODEStateInterpolator", 0);
        }

        void t_AbstractODEStateInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractODEStateInterpolator), "class_", make_descriptor(AbstractODEStateInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractODEStateInterpolator), "wrapfn_", make_descriptor(t_AbstractODEStateInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractODEStateInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractODEStateInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractODEStateInterpolator::initializeClass, 1)))
            return NULL;
          return t_AbstractODEStateInterpolator::wrap_Object(AbstractODEStateInterpolator(((t_AbstractODEStateInterpolator *) arg)->object.this$));
        }
        static PyObject *t_AbstractODEStateInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractODEStateInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractODEStateInterpolator_getCurrentState(t_AbstractODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
        }

        static PyObject *t_AbstractODEStateInterpolator_getGlobalCurrentState(t_AbstractODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getGlobalCurrentState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
        }

        static PyObject *t_AbstractODEStateInterpolator_getGlobalPreviousState(t_AbstractODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getGlobalPreviousState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
        }

        static PyObject *t_AbstractODEStateInterpolator_getInterpolatedState(t_AbstractODEStateInterpolator *self, PyObject *arg)
        {
          jdouble a0;
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getInterpolatedState(a0));
            return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInterpolatedState", arg);
          return NULL;
        }

        static PyObject *t_AbstractODEStateInterpolator_getPreviousState(t_AbstractODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getPreviousState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
        }

        static PyObject *t_AbstractODEStateInterpolator_isCurrentStateInterpolated(t_AbstractODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractODEStateInterpolator_isForward(t_AbstractODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractODEStateInterpolator_isPreviousStateInterpolated(t_AbstractODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractODEStateInterpolator_restrictStep(t_AbstractODEStateInterpolator *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          ::org::hipparchus::ode::ODEStateAndDerivative a1((jobject) NULL);
          AbstractODEStateInterpolator result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.restrictStep(a0, a1));
            return t_AbstractODEStateInterpolator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "restrictStep", args);
          return NULL;
        }

        static PyObject *t_AbstractODEStateInterpolator_get__currentState(t_AbstractODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_AbstractODEStateInterpolator_get__currentStateInterpolated(t_AbstractODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractODEStateInterpolator_get__forward(t_AbstractODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractODEStateInterpolator_get__globalCurrentState(t_AbstractODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getGlobalCurrentState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_AbstractODEStateInterpolator_get__globalPreviousState(t_AbstractODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getGlobalPreviousState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_AbstractODEStateInterpolator_get__previousState(t_AbstractODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getPreviousState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_AbstractODEStateInterpolator_get__previousStateInterpolated(t_AbstractODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldEventsLogger.h"
#include "org/orekit/propagation/events/FieldEventsLogger$FieldLoggedEvent.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/FieldAbstractDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldEventsLogger::class$ = NULL;
        jmethodID *FieldEventsLogger::mids$ = NULL;
        bool FieldEventsLogger::live$ = false;

        jclass FieldEventsLogger::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldEventsLogger");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_clearLoggedEvents_7ae3461a92a43152] = env->getMethodID(cls, "clearLoggedEvents", "()V");
            mids$[mid_getLoggedEvents_a6156df500549a58] = env->getMethodID(cls, "getLoggedEvents", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldEventsLogger::FieldEventsLogger() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void FieldEventsLogger::clearLoggedEvents() const
        {
          env->callVoidMethod(this$, mids$[mid_clearLoggedEvents_7ae3461a92a43152]);
        }

        ::java::util::List FieldEventsLogger::getLoggedEvents() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getLoggedEvents_a6156df500549a58]));
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
        static PyObject *t_FieldEventsLogger_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventsLogger_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventsLogger_of_(t_FieldEventsLogger *self, PyObject *args);
        static int t_FieldEventsLogger_init_(t_FieldEventsLogger *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldEventsLogger_clearLoggedEvents(t_FieldEventsLogger *self);
        static PyObject *t_FieldEventsLogger_getLoggedEvents(t_FieldEventsLogger *self);
        static PyObject *t_FieldEventsLogger_get__loggedEvents(t_FieldEventsLogger *self, void *data);
        static PyObject *t_FieldEventsLogger_get__parameters_(t_FieldEventsLogger *self, void *data);
        static PyGetSetDef t_FieldEventsLogger__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventsLogger, loggedEvents),
          DECLARE_GET_FIELD(t_FieldEventsLogger, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventsLogger__methods_[] = {
          DECLARE_METHOD(t_FieldEventsLogger, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventsLogger, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventsLogger, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventsLogger, clearLoggedEvents, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventsLogger, getLoggedEvents, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventsLogger)[] = {
          { Py_tp_methods, t_FieldEventsLogger__methods_ },
          { Py_tp_init, (void *) t_FieldEventsLogger_init_ },
          { Py_tp_getset, t_FieldEventsLogger__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventsLogger)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldEventsLogger, t_FieldEventsLogger, FieldEventsLogger);
        PyObject *t_FieldEventsLogger::wrap_Object(const FieldEventsLogger& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventsLogger::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventsLogger *self = (t_FieldEventsLogger *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEventsLogger::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventsLogger::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventsLogger *self = (t_FieldEventsLogger *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEventsLogger::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventsLogger), &PY_TYPE_DEF(FieldEventsLogger), module, "FieldEventsLogger", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventsLogger), "FieldLoggedEvent", make_descriptor(&PY_TYPE_DEF(FieldEventsLogger$FieldLoggedEvent)));
        }

        void t_FieldEventsLogger::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventsLogger), "class_", make_descriptor(FieldEventsLogger::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventsLogger), "wrapfn_", make_descriptor(t_FieldEventsLogger::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventsLogger), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventsLogger_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventsLogger::initializeClass, 1)))
            return NULL;
          return t_FieldEventsLogger::wrap_Object(FieldEventsLogger(((t_FieldEventsLogger *) arg)->object.this$));
        }
        static PyObject *t_FieldEventsLogger_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventsLogger::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventsLogger_of_(t_FieldEventsLogger *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldEventsLogger_init_(t_FieldEventsLogger *self, PyObject *args, PyObject *kwds)
        {
          FieldEventsLogger object((jobject) NULL);

          INT_CALL(object = FieldEventsLogger());
          self->object = object;

          return 0;
        }

        static PyObject *t_FieldEventsLogger_clearLoggedEvents(t_FieldEventsLogger *self)
        {
          OBJ_CALL(self->object.clearLoggedEvents());
          Py_RETURN_NONE;
        }

        static PyObject *t_FieldEventsLogger_getLoggedEvents(t_FieldEventsLogger *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getLoggedEvents());
          return ::java::util::t_List::wrap_Object(result);
        }
        static PyObject *t_FieldEventsLogger_get__parameters_(t_FieldEventsLogger *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventsLogger_get__loggedEvents(t_FieldEventsLogger *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getLoggedEvents());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonTimeVectorFunction.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeVectorFunction.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonTimeVectorFunction::class$ = NULL;
      jmethodID *PythonTimeVectorFunction::mids$ = NULL;
      bool PythonTimeVectorFunction::live$ = false;

      jclass PythonTimeVectorFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonTimeVectorFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_value_e586dea4c0bad69b] = env->getMethodID(cls, "value", "(Lorg/orekit/time/AbsoluteDate;)[D");
          mids$[mid_value_263b2fd0cf81fe4d] = env->getMethodID(cls, "value", "(Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTimeVectorFunction::PythonTimeVectorFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonTimeVectorFunction::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonTimeVectorFunction::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonTimeVectorFunction::pythonExtension(jlong a0) const
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
      static PyObject *t_PythonTimeVectorFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeVectorFunction_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonTimeVectorFunction_init_(t_PythonTimeVectorFunction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTimeVectorFunction_finalize(t_PythonTimeVectorFunction *self);
      static PyObject *t_PythonTimeVectorFunction_pythonExtension(t_PythonTimeVectorFunction *self, PyObject *args);
      static void JNICALL t_PythonTimeVectorFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeVectorFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonTimeVectorFunction_value2(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonTimeVectorFunction_get__self(t_PythonTimeVectorFunction *self, void *data);
      static PyGetSetDef t_PythonTimeVectorFunction__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTimeVectorFunction, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTimeVectorFunction__methods_[] = {
        DECLARE_METHOD(t_PythonTimeVectorFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeVectorFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeVectorFunction, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTimeVectorFunction, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTimeVectorFunction)[] = {
        { Py_tp_methods, t_PythonTimeVectorFunction__methods_ },
        { Py_tp_init, (void *) t_PythonTimeVectorFunction_init_ },
        { Py_tp_getset, t_PythonTimeVectorFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTimeVectorFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTimeVectorFunction, t_PythonTimeVectorFunction, PythonTimeVectorFunction);

      void t_PythonTimeVectorFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTimeVectorFunction), &PY_TYPE_DEF(PythonTimeVectorFunction), module, "PythonTimeVectorFunction", 1);
      }

      void t_PythonTimeVectorFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeVectorFunction), "class_", make_descriptor(PythonTimeVectorFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeVectorFunction), "wrapfn_", make_descriptor(t_PythonTimeVectorFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeVectorFunction), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTimeVectorFunction::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonTimeVectorFunction_pythonDecRef0 },
          { "value", "(Lorg/orekit/time/AbsoluteDate;)[D", (void *) t_PythonTimeVectorFunction_value1 },
          { "value", "(Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonTimeVectorFunction_value2 },
        };
        env->registerNatives(cls, methods, 3);
      }

      static PyObject *t_PythonTimeVectorFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTimeVectorFunction::initializeClass, 1)))
          return NULL;
        return t_PythonTimeVectorFunction::wrap_Object(PythonTimeVectorFunction(((t_PythonTimeVectorFunction *) arg)->object.this$));
      }
      static PyObject *t_PythonTimeVectorFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTimeVectorFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonTimeVectorFunction_init_(t_PythonTimeVectorFunction *self, PyObject *args, PyObject *kwds)
      {
        PythonTimeVectorFunction object((jobject) NULL);

        INT_CALL(object = PythonTimeVectorFunction());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTimeVectorFunction_finalize(t_PythonTimeVectorFunction *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTimeVectorFunction_pythonExtension(t_PythonTimeVectorFunction *self, PyObject *args)
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

      static void JNICALL t_PythonTimeVectorFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeVectorFunction::mids$[PythonTimeVectorFunction::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTimeVectorFunction::mids$[PythonTimeVectorFunction::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonTimeVectorFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeVectorFunction::mids$[PythonTimeVectorFunction::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< jdouble > value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[D", &value))
        {
          throwTypeError("value", result);
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

      static jobject JNICALL t_PythonTimeVectorFunction_value2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeVectorFunction::mids$[PythonTimeVectorFunction::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
        {
          throwTypeError("value", result);
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

      static PyObject *t_PythonTimeVectorFunction_get__self(t_PythonTimeVectorFunction *self, void *data)
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
#include "org/hipparchus/analysis/integration/FieldMidPointIntegrator.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *FieldMidPointIntegrator::class$ = NULL;
        jmethodID *FieldMidPointIntegrator::mids$ = NULL;
        bool FieldMidPointIntegrator::live$ = false;
        jint FieldMidPointIntegrator::MIDPOINT_MAX_ITERATIONS_COUNT = (jint) 0;

        jclass FieldMidPointIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/FieldMidPointIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_205c34b8e33cf33f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
            mids$[mid_init$_11914f5932256658] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;II)V");
            mids$[mid_init$_84b3e2e5209296cd] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DDII)V");
            mids$[mid_doIntegrate_e6d4d3215c30992a] = env->getMethodID(cls, "doIntegrate", "()Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MIDPOINT_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "MIDPOINT_MAX_ITERATIONS_COUNT");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldMidPointIntegrator::FieldMidPointIntegrator(const ::org::hipparchus::Field & a0) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_205c34b8e33cf33f, a0.this$)) {}

        FieldMidPointIntegrator::FieldMidPointIntegrator(const ::org::hipparchus::Field & a0, jint a1, jint a2) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_11914f5932256658, a0.this$, a1, a2)) {}

        FieldMidPointIntegrator::FieldMidPointIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, jint a3, jint a4) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_84b3e2e5209296cd, a0.this$, a1, a2, a3, a4)) {}
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
        static PyObject *t_FieldMidPointIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldMidPointIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldMidPointIntegrator_of_(t_FieldMidPointIntegrator *self, PyObject *args);
        static int t_FieldMidPointIntegrator_init_(t_FieldMidPointIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldMidPointIntegrator_get__parameters_(t_FieldMidPointIntegrator *self, void *data);
        static PyGetSetDef t_FieldMidPointIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldMidPointIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldMidPointIntegrator__methods_[] = {
          DECLARE_METHOD(t_FieldMidPointIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldMidPointIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldMidPointIntegrator, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldMidPointIntegrator)[] = {
          { Py_tp_methods, t_FieldMidPointIntegrator__methods_ },
          { Py_tp_init, (void *) t_FieldMidPointIntegrator_init_ },
          { Py_tp_getset, t_FieldMidPointIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldMidPointIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(FieldMidPointIntegrator, t_FieldMidPointIntegrator, FieldMidPointIntegrator);
        PyObject *t_FieldMidPointIntegrator::wrap_Object(const FieldMidPointIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldMidPointIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldMidPointIntegrator *self = (t_FieldMidPointIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldMidPointIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldMidPointIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldMidPointIntegrator *self = (t_FieldMidPointIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldMidPointIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldMidPointIntegrator), &PY_TYPE_DEF(FieldMidPointIntegrator), module, "FieldMidPointIntegrator", 0);
        }

        void t_FieldMidPointIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMidPointIntegrator), "class_", make_descriptor(FieldMidPointIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMidPointIntegrator), "wrapfn_", make_descriptor(t_FieldMidPointIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMidPointIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(FieldMidPointIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMidPointIntegrator), "MIDPOINT_MAX_ITERATIONS_COUNT", make_descriptor(FieldMidPointIntegrator::MIDPOINT_MAX_ITERATIONS_COUNT));
        }

        static PyObject *t_FieldMidPointIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldMidPointIntegrator::initializeClass, 1)))
            return NULL;
          return t_FieldMidPointIntegrator::wrap_Object(FieldMidPointIntegrator(((t_FieldMidPointIntegrator *) arg)->object.this$));
        }
        static PyObject *t_FieldMidPointIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldMidPointIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldMidPointIntegrator_of_(t_FieldMidPointIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldMidPointIntegrator_init_(t_FieldMidPointIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              FieldMidPointIntegrator object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                INT_CALL(object = FieldMidPointIntegrator(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jint a2;
              FieldMidPointIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
              {
                INT_CALL(object = FieldMidPointIntegrator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jdouble a2;
              jint a3;
              jint a4;
              FieldMidPointIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KDDII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = FieldMidPointIntegrator(a0, a1, a2, a3, a4));
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
        static PyObject *t_FieldMidPointIntegrator_get__parameters_(t_FieldMidPointIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *ScreenVolumeFrame::class$ = NULL;
            jmethodID *ScreenVolumeFrame::mids$ = NULL;
            bool ScreenVolumeFrame::live$ = false;
            ScreenVolumeFrame *ScreenVolumeFrame::RTN = NULL;
            ScreenVolumeFrame *ScreenVolumeFrame::TVN = NULL;

            jclass ScreenVolumeFrame::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_5c61183aa051f5bc] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame;");
                mids$[mid_values_4f22185cf81d116e] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                RTN = new ScreenVolumeFrame(env->getStaticObjectField(cls, "RTN", "Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame;"));
                TVN = new ScreenVolumeFrame(env->getStaticObjectField(cls, "TVN", "Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ScreenVolumeFrame ScreenVolumeFrame::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ScreenVolumeFrame(env->callStaticObjectMethod(cls, mids$[mid_valueOf_5c61183aa051f5bc], a0.this$));
            }

            JArray< ScreenVolumeFrame > ScreenVolumeFrame::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< ScreenVolumeFrame >(env->callStaticObjectMethod(cls, mids$[mid_values_4f22185cf81d116e]));
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
            static PyObject *t_ScreenVolumeFrame_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ScreenVolumeFrame_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ScreenVolumeFrame_of_(t_ScreenVolumeFrame *self, PyObject *args);
            static PyObject *t_ScreenVolumeFrame_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_ScreenVolumeFrame_values(PyTypeObject *type);
            static PyObject *t_ScreenVolumeFrame_get__parameters_(t_ScreenVolumeFrame *self, void *data);
            static PyGetSetDef t_ScreenVolumeFrame__fields_[] = {
              DECLARE_GET_FIELD(t_ScreenVolumeFrame, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ScreenVolumeFrame__methods_[] = {
              DECLARE_METHOD(t_ScreenVolumeFrame, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ScreenVolumeFrame, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ScreenVolumeFrame, of_, METH_VARARGS),
              DECLARE_METHOD(t_ScreenVolumeFrame, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_ScreenVolumeFrame, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ScreenVolumeFrame)[] = {
              { Py_tp_methods, t_ScreenVolumeFrame__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_ScreenVolumeFrame__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ScreenVolumeFrame)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(ScreenVolumeFrame, t_ScreenVolumeFrame, ScreenVolumeFrame);
            PyObject *t_ScreenVolumeFrame::wrap_Object(const ScreenVolumeFrame& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ScreenVolumeFrame::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ScreenVolumeFrame *self = (t_ScreenVolumeFrame *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_ScreenVolumeFrame::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ScreenVolumeFrame::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ScreenVolumeFrame *self = (t_ScreenVolumeFrame *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_ScreenVolumeFrame::install(PyObject *module)
            {
              installType(&PY_TYPE(ScreenVolumeFrame), &PY_TYPE_DEF(ScreenVolumeFrame), module, "ScreenVolumeFrame", 0);
            }

            void t_ScreenVolumeFrame::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeFrame), "class_", make_descriptor(ScreenVolumeFrame::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeFrame), "wrapfn_", make_descriptor(t_ScreenVolumeFrame::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeFrame), "boxfn_", make_descriptor(boxObject));
              env->getClass(ScreenVolumeFrame::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeFrame), "RTN", make_descriptor(t_ScreenVolumeFrame::wrap_Object(*ScreenVolumeFrame::RTN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeFrame), "TVN", make_descriptor(t_ScreenVolumeFrame::wrap_Object(*ScreenVolumeFrame::TVN)));
            }

            static PyObject *t_ScreenVolumeFrame_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ScreenVolumeFrame::initializeClass, 1)))
                return NULL;
              return t_ScreenVolumeFrame::wrap_Object(ScreenVolumeFrame(((t_ScreenVolumeFrame *) arg)->object.this$));
            }
            static PyObject *t_ScreenVolumeFrame_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ScreenVolumeFrame::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ScreenVolumeFrame_of_(t_ScreenVolumeFrame *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_ScreenVolumeFrame_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ScreenVolumeFrame result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame::valueOf(a0));
                return t_ScreenVolumeFrame::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_ScreenVolumeFrame_values(PyTypeObject *type)
            {
              JArray< ScreenVolumeFrame > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame::values());
              return JArray<jobject>(result.this$).wrap(t_ScreenVolumeFrame::wrap_jobject);
            }
            static PyObject *t_ScreenVolumeFrame_get__parameters_(t_ScreenVolumeFrame *self, void *data)
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
#include "org/orekit/models/earth/displacement/Tide.h"
#include "org/orekit/data/BodiesElements.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/displacement/Tide.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {

          ::java::lang::Class *Tide::class$ = NULL;
          jmethodID *Tide::mids$ = NULL;
          bool Tide::live$ = false;
          Tide *Tide::K1 = NULL;
          Tide *Tide::K2 = NULL;
          Tide *Tide::M2 = NULL;
          Tide *Tide::MF = NULL;
          Tide *Tide::MM = NULL;
          Tide *Tide::N2 = NULL;
          Tide *Tide::O1 = NULL;
          Tide *Tide::P1 = NULL;
          Tide *Tide::Q1 = NULL;
          Tide *Tide::S2 = NULL;
          Tide *Tide::SSA = NULL;

          jclass Tide::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/displacement/Tide");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
              mids$[mid_init$_47d591670cfcc314] = env->getMethodID(cls, "<init>", "(IIIIII)V");
              mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_getDelaunayMultipliers_d8ead0d90ce828b0] = env->getMethodID(cls, "getDelaunayMultipliers", "()[I");
              mids$[mid_getDoodsonMultipliers_d8ead0d90ce828b0] = env->getMethodID(cls, "getDoodsonMultipliers", "()[I");
              mids$[mid_getDoodsonNumber_f2f64475e4580546] = env->getMethodID(cls, "getDoodsonNumber", "()I");
              mids$[mid_getPhase_68f0627d4a947675] = env->getMethodID(cls, "getPhase", "(Lorg/orekit/data/BodiesElements;)D");
              mids$[mid_getRate_68f0627d4a947675] = env->getMethodID(cls, "getRate", "(Lorg/orekit/data/BodiesElements;)D");
              mids$[mid_getTauMultiplier_f2f64475e4580546] = env->getMethodID(cls, "getTauMultiplier", "()I");
              mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              K1 = new Tide(env->getStaticObjectField(cls, "K1", "Lorg/orekit/models/earth/displacement/Tide;"));
              K2 = new Tide(env->getStaticObjectField(cls, "K2", "Lorg/orekit/models/earth/displacement/Tide;"));
              M2 = new Tide(env->getStaticObjectField(cls, "M2", "Lorg/orekit/models/earth/displacement/Tide;"));
              MF = new Tide(env->getStaticObjectField(cls, "MF", "Lorg/orekit/models/earth/displacement/Tide;"));
              MM = new Tide(env->getStaticObjectField(cls, "MM", "Lorg/orekit/models/earth/displacement/Tide;"));
              N2 = new Tide(env->getStaticObjectField(cls, "N2", "Lorg/orekit/models/earth/displacement/Tide;"));
              O1 = new Tide(env->getStaticObjectField(cls, "O1", "Lorg/orekit/models/earth/displacement/Tide;"));
              P1 = new Tide(env->getStaticObjectField(cls, "P1", "Lorg/orekit/models/earth/displacement/Tide;"));
              Q1 = new Tide(env->getStaticObjectField(cls, "Q1", "Lorg/orekit/models/earth/displacement/Tide;"));
              S2 = new Tide(env->getStaticObjectField(cls, "S2", "Lorg/orekit/models/earth/displacement/Tide;"));
              SSA = new Tide(env->getStaticObjectField(cls, "SSA", "Lorg/orekit/models/earth/displacement/Tide;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Tide::Tide(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

          Tide::Tide(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_47d591670cfcc314, a0, a1, a2, a3, a4, a5)) {}

          jboolean Tide::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
          }

          JArray< jint > Tide::getDelaunayMultipliers() const
          {
            return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getDelaunayMultipliers_d8ead0d90ce828b0]));
          }

          JArray< jint > Tide::getDoodsonMultipliers() const
          {
            return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getDoodsonMultipliers_d8ead0d90ce828b0]));
          }

          jint Tide::getDoodsonNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getDoodsonNumber_f2f64475e4580546]);
          }

          jdouble Tide::getPhase(const ::org::orekit::data::BodiesElements & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getPhase_68f0627d4a947675], a0.this$);
          }

          jdouble Tide::getRate(const ::org::orekit::data::BodiesElements & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getRate_68f0627d4a947675], a0.this$);
          }

          jint Tide::getTauMultiplier() const
          {
            return env->callIntMethod(this$, mids$[mid_getTauMultiplier_f2f64475e4580546]);
          }

          jint Tide::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
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
        namespace displacement {
          static PyObject *t_Tide_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Tide_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Tide_init_(t_Tide *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Tide_equals(t_Tide *self, PyObject *args);
          static PyObject *t_Tide_getDelaunayMultipliers(t_Tide *self);
          static PyObject *t_Tide_getDoodsonMultipliers(t_Tide *self);
          static PyObject *t_Tide_getDoodsonNumber(t_Tide *self);
          static PyObject *t_Tide_getPhase(t_Tide *self, PyObject *arg);
          static PyObject *t_Tide_getRate(t_Tide *self, PyObject *arg);
          static PyObject *t_Tide_getTauMultiplier(t_Tide *self);
          static PyObject *t_Tide_hashCode(t_Tide *self, PyObject *args);
          static PyObject *t_Tide_get__delaunayMultipliers(t_Tide *self, void *data);
          static PyObject *t_Tide_get__doodsonMultipliers(t_Tide *self, void *data);
          static PyObject *t_Tide_get__doodsonNumber(t_Tide *self, void *data);
          static PyObject *t_Tide_get__tauMultiplier(t_Tide *self, void *data);
          static PyGetSetDef t_Tide__fields_[] = {
            DECLARE_GET_FIELD(t_Tide, delaunayMultipliers),
            DECLARE_GET_FIELD(t_Tide, doodsonMultipliers),
            DECLARE_GET_FIELD(t_Tide, doodsonNumber),
            DECLARE_GET_FIELD(t_Tide, tauMultiplier),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Tide__methods_[] = {
            DECLARE_METHOD(t_Tide, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Tide, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Tide, equals, METH_VARARGS),
            DECLARE_METHOD(t_Tide, getDelaunayMultipliers, METH_NOARGS),
            DECLARE_METHOD(t_Tide, getDoodsonMultipliers, METH_NOARGS),
            DECLARE_METHOD(t_Tide, getDoodsonNumber, METH_NOARGS),
            DECLARE_METHOD(t_Tide, getPhase, METH_O),
            DECLARE_METHOD(t_Tide, getRate, METH_O),
            DECLARE_METHOD(t_Tide, getTauMultiplier, METH_NOARGS),
            DECLARE_METHOD(t_Tide, hashCode, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Tide)[] = {
            { Py_tp_methods, t_Tide__methods_ },
            { Py_tp_init, (void *) t_Tide_init_ },
            { Py_tp_getset, t_Tide__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Tide)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Tide, t_Tide, Tide);

          void t_Tide::install(PyObject *module)
          {
            installType(&PY_TYPE(Tide), &PY_TYPE_DEF(Tide), module, "Tide", 0);
          }

          void t_Tide::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "class_", make_descriptor(Tide::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "wrapfn_", make_descriptor(t_Tide::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "boxfn_", make_descriptor(boxObject));
            env->getClass(Tide::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "K1", make_descriptor(t_Tide::wrap_Object(*Tide::K1)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "K2", make_descriptor(t_Tide::wrap_Object(*Tide::K2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "M2", make_descriptor(t_Tide::wrap_Object(*Tide::M2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "MF", make_descriptor(t_Tide::wrap_Object(*Tide::MF)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "MM", make_descriptor(t_Tide::wrap_Object(*Tide::MM)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "N2", make_descriptor(t_Tide::wrap_Object(*Tide::N2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "O1", make_descriptor(t_Tide::wrap_Object(*Tide::O1)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "P1", make_descriptor(t_Tide::wrap_Object(*Tide::P1)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "Q1", make_descriptor(t_Tide::wrap_Object(*Tide::Q1)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "S2", make_descriptor(t_Tide::wrap_Object(*Tide::S2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Tide), "SSA", make_descriptor(t_Tide::wrap_Object(*Tide::SSA)));
          }

          static PyObject *t_Tide_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Tide::initializeClass, 1)))
              return NULL;
            return t_Tide::wrap_Object(Tide(((t_Tide *) arg)->object.this$));
          }
          static PyObject *t_Tide_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Tide::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Tide_init_(t_Tide *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jint a0;
                Tide object((jobject) NULL);

                if (!parseArgs(args, "I", &a0))
                {
                  INT_CALL(object = Tide(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 6:
              {
                jint a0;
                jint a1;
                jint a2;
                jint a3;
                jint a4;
                jint a5;
                Tide object((jobject) NULL);

                if (!parseArgs(args, "IIIIII", &a0, &a1, &a2, &a3, &a4, &a5))
                {
                  INT_CALL(object = Tide(a0, a1, a2, a3, a4, a5));
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

          static PyObject *t_Tide_equals(t_Tide *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(Tide), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_Tide_getDelaunayMultipliers(t_Tide *self)
          {
            JArray< jint > result((jobject) NULL);
            OBJ_CALL(result = self->object.getDelaunayMultipliers());
            return result.wrap();
          }

          static PyObject *t_Tide_getDoodsonMultipliers(t_Tide *self)
          {
            JArray< jint > result((jobject) NULL);
            OBJ_CALL(result = self->object.getDoodsonMultipliers());
            return result.wrap();
          }

          static PyObject *t_Tide_getDoodsonNumber(t_Tide *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDoodsonNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Tide_getPhase(t_Tide *self, PyObject *arg)
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::data::BodiesElements::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPhase(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getPhase", arg);
            return NULL;
          }

          static PyObject *t_Tide_getRate(t_Tide *self, PyObject *arg)
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::data::BodiesElements::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getRate(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getRate", arg);
            return NULL;
          }

          static PyObject *t_Tide_getTauMultiplier(t_Tide *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getTauMultiplier());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Tide_hashCode(t_Tide *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(Tide), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_Tide_get__delaunayMultipliers(t_Tide *self, void *data)
          {
            JArray< jint > value((jobject) NULL);
            OBJ_CALL(value = self->object.getDelaunayMultipliers());
            return value.wrap();
          }

          static PyObject *t_Tide_get__doodsonMultipliers(t_Tide *self, void *data)
          {
            JArray< jint > value((jobject) NULL);
            OBJ_CALL(value = self->object.getDoodsonMultipliers());
            return value.wrap();
          }

          static PyObject *t_Tide_get__doodsonNumber(t_Tide *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDoodsonNumber());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_Tide_get__tauMultiplier(t_Tide *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getTauMultiplier());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
