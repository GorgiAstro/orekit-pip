#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *NormalizedGeodeticPoint::class$ = NULL;
        jmethodID *NormalizedGeodeticPoint::mids$ = NULL;
        bool NormalizedGeodeticPoint::live$ = false;

        jclass NormalizedGeodeticPoint::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/NormalizedGeodeticPoint");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_49f4b5153d696ea5] = env->getMethodID(cls, "<init>", "(DDDD)V");
            mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getLongitude_b74f83833fdad017] = env->getMethodID(cls, "getLongitude", "()D");
            mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NormalizedGeodeticPoint::NormalizedGeodeticPoint(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::org::orekit::bodies::GeodeticPoint(env->newObject(initializeClass, &mids$, mid_init$_49f4b5153d696ea5, a0, a1, a2, a3)) {}

        jboolean NormalizedGeodeticPoint::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
        }

        jdouble NormalizedGeodeticPoint::getLongitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLongitude_b74f83833fdad017]);
        }

        jint NormalizedGeodeticPoint::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
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
        static PyObject *t_NormalizedGeodeticPoint_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NormalizedGeodeticPoint_instance_(PyTypeObject *type, PyObject *arg);
        static int t_NormalizedGeodeticPoint_init_(t_NormalizedGeodeticPoint *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NormalizedGeodeticPoint_equals(t_NormalizedGeodeticPoint *self, PyObject *args);
        static PyObject *t_NormalizedGeodeticPoint_getLongitude(t_NormalizedGeodeticPoint *self, PyObject *args);
        static PyObject *t_NormalizedGeodeticPoint_hashCode(t_NormalizedGeodeticPoint *self, PyObject *args);
        static PyObject *t_NormalizedGeodeticPoint_get__longitude(t_NormalizedGeodeticPoint *self, void *data);
        static PyGetSetDef t_NormalizedGeodeticPoint__fields_[] = {
          DECLARE_GET_FIELD(t_NormalizedGeodeticPoint, longitude),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NormalizedGeodeticPoint__methods_[] = {
          DECLARE_METHOD(t_NormalizedGeodeticPoint, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NormalizedGeodeticPoint, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NormalizedGeodeticPoint, equals, METH_VARARGS),
          DECLARE_METHOD(t_NormalizedGeodeticPoint, getLongitude, METH_VARARGS),
          DECLARE_METHOD(t_NormalizedGeodeticPoint, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NormalizedGeodeticPoint)[] = {
          { Py_tp_methods, t_NormalizedGeodeticPoint__methods_ },
          { Py_tp_init, (void *) t_NormalizedGeodeticPoint_init_ },
          { Py_tp_getset, t_NormalizedGeodeticPoint__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NormalizedGeodeticPoint)[] = {
          &PY_TYPE_DEF(::org::orekit::bodies::GeodeticPoint),
          NULL
        };

        DEFINE_TYPE(NormalizedGeodeticPoint, t_NormalizedGeodeticPoint, NormalizedGeodeticPoint);

        void t_NormalizedGeodeticPoint::install(PyObject *module)
        {
          installType(&PY_TYPE(NormalizedGeodeticPoint), &PY_TYPE_DEF(NormalizedGeodeticPoint), module, "NormalizedGeodeticPoint", 0);
        }

        void t_NormalizedGeodeticPoint::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedGeodeticPoint), "class_", make_descriptor(NormalizedGeodeticPoint::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedGeodeticPoint), "wrapfn_", make_descriptor(t_NormalizedGeodeticPoint::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedGeodeticPoint), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NormalizedGeodeticPoint_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NormalizedGeodeticPoint::initializeClass, 1)))
            return NULL;
          return t_NormalizedGeodeticPoint::wrap_Object(NormalizedGeodeticPoint(((t_NormalizedGeodeticPoint *) arg)->object.this$));
        }
        static PyObject *t_NormalizedGeodeticPoint_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NormalizedGeodeticPoint::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_NormalizedGeodeticPoint_init_(t_NormalizedGeodeticPoint *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          NormalizedGeodeticPoint object((jobject) NULL);

          if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = NormalizedGeodeticPoint(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_NormalizedGeodeticPoint_equals(t_NormalizedGeodeticPoint *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(NormalizedGeodeticPoint), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_NormalizedGeodeticPoint_getLongitude(t_NormalizedGeodeticPoint *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getLongitude());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalizedGeodeticPoint), (PyObject *) self, "getLongitude", args, 2);
        }

        static PyObject *t_NormalizedGeodeticPoint_hashCode(t_NormalizedGeodeticPoint *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(NormalizedGeodeticPoint), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_NormalizedGeodeticPoint_get__longitude(t_NormalizedGeodeticPoint *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLongitude());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/RtcmMessageType.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/metric/parser/RtcmMessageType.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/parser/MessageType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *RtcmMessageType::class$ = NULL;
          jmethodID *RtcmMessageType::mids$ = NULL;
          bool RtcmMessageType::live$ = false;
          RtcmMessageType *RtcmMessageType::RTCM_1019 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1020 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1042 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1044 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1045 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1057 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1058 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1060 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1063 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1064 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1066 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1240 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1241 = NULL;
          RtcmMessageType *RtcmMessageType::RTCM_1243 = NULL;

          jclass RtcmMessageType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/RtcmMessageType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getMessageType_8b512a2b046ef221] = env->getStaticMethodID(cls, "getMessageType", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/RtcmMessageType;");
              mids$[mid_valueOf_8b512a2b046ef221] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/RtcmMessageType;");
              mids$[mid_values_1e2db6a966d14617] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/parser/RtcmMessageType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              RTCM_1019 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1019", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1020 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1020", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1042 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1042", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1044 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1044", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1045 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1045", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1057 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1057", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1058 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1058", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1060 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1060", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1063 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1063", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1064 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1064", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1066 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1066", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1240 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1240", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1241 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1241", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              RTCM_1243 = new RtcmMessageType(env->getStaticObjectField(cls, "RTCM_1243", "Lorg/orekit/gnss/metric/parser/RtcmMessageType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RtcmMessageType RtcmMessageType::getMessageType(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RtcmMessageType(env->callStaticObjectMethod(cls, mids$[mid_getMessageType_8b512a2b046ef221], a0.this$));
          }

          RtcmMessageType RtcmMessageType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RtcmMessageType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_8b512a2b046ef221], a0.this$));
          }

          JArray< RtcmMessageType > RtcmMessageType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< RtcmMessageType >(env->callStaticObjectMethod(cls, mids$[mid_values_1e2db6a966d14617]));
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
          static PyObject *t_RtcmMessageType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RtcmMessageType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RtcmMessageType_of_(t_RtcmMessageType *self, PyObject *args);
          static PyObject *t_RtcmMessageType_getMessageType(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RtcmMessageType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_RtcmMessageType_values(PyTypeObject *type);
          static PyObject *t_RtcmMessageType_get__parameters_(t_RtcmMessageType *self, void *data);
          static PyGetSetDef t_RtcmMessageType__fields_[] = {
            DECLARE_GET_FIELD(t_RtcmMessageType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RtcmMessageType__methods_[] = {
            DECLARE_METHOD(t_RtcmMessageType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RtcmMessageType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RtcmMessageType, of_, METH_VARARGS),
            DECLARE_METHOD(t_RtcmMessageType, getMessageType, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RtcmMessageType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_RtcmMessageType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RtcmMessageType)[] = {
            { Py_tp_methods, t_RtcmMessageType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RtcmMessageType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RtcmMessageType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(RtcmMessageType, t_RtcmMessageType, RtcmMessageType);
          PyObject *t_RtcmMessageType::wrap_Object(const RtcmMessageType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RtcmMessageType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RtcmMessageType *self = (t_RtcmMessageType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RtcmMessageType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RtcmMessageType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RtcmMessageType *self = (t_RtcmMessageType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RtcmMessageType::install(PyObject *module)
          {
            installType(&PY_TYPE(RtcmMessageType), &PY_TYPE_DEF(RtcmMessageType), module, "RtcmMessageType", 0);
          }

          void t_RtcmMessageType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "class_", make_descriptor(RtcmMessageType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "wrapfn_", make_descriptor(t_RtcmMessageType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "boxfn_", make_descriptor(boxObject));
            env->getClass(RtcmMessageType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1019", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1019)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1020", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1020)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1042", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1042)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1044", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1044)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1045", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1045)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1057", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1057)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1058", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1058)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1060", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1060)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1063", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1063)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1064", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1064)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1066", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1066)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1240", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1240)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1241", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1241)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessageType), "RTCM_1243", make_descriptor(t_RtcmMessageType::wrap_Object(*RtcmMessageType::RTCM_1243)));
          }

          static PyObject *t_RtcmMessageType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RtcmMessageType::initializeClass, 1)))
              return NULL;
            return t_RtcmMessageType::wrap_Object(RtcmMessageType(((t_RtcmMessageType *) arg)->object.this$));
          }
          static PyObject *t_RtcmMessageType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RtcmMessageType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RtcmMessageType_of_(t_RtcmMessageType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_RtcmMessageType_getMessageType(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            RtcmMessageType result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::parser::RtcmMessageType::getMessageType(a0));
              return t_RtcmMessageType::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getMessageType", arg);
            return NULL;
          }

          static PyObject *t_RtcmMessageType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            RtcmMessageType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::parser::RtcmMessageType::valueOf(a0));
              return t_RtcmMessageType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_RtcmMessageType_values(PyTypeObject *type)
          {
            JArray< RtcmMessageType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::parser::RtcmMessageType::values());
            return JArray<jobject>(result.this$).wrap(t_RtcmMessageType::wrap_jobject);
          }
          static PyObject *t_RtcmMessageType_get__parameters_(t_RtcmMessageType *self, void *data)
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
#include "org/hipparchus/util/OpenIntToDoubleHashMap$Iterator.h"
#include "java/util/NoSuchElementException.h"
#include "java/lang/Class.h"
#include "java/util/ConcurrentModificationException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *OpenIntToDoubleHashMap$Iterator::class$ = NULL;
      jmethodID *OpenIntToDoubleHashMap$Iterator::mids$ = NULL;
      bool OpenIntToDoubleHashMap$Iterator::live$ = false;

      jclass OpenIntToDoubleHashMap$Iterator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/OpenIntToDoubleHashMap$Iterator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_advance_a1fa5dae97ea5ed2] = env->getMethodID(cls, "advance", "()V");
          mids$[mid_hasNext_9ab94ac1dc23b105] = env->getMethodID(cls, "hasNext", "()Z");
          mids$[mid_key_55546ef6a647f39b] = env->getMethodID(cls, "key", "()I");
          mids$[mid_value_b74f83833fdad017] = env->getMethodID(cls, "value", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void OpenIntToDoubleHashMap$Iterator::advance() const
      {
        env->callVoidMethod(this$, mids$[mid_advance_a1fa5dae97ea5ed2]);
      }

      jboolean OpenIntToDoubleHashMap$Iterator::hasNext() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasNext_9ab94ac1dc23b105]);
      }

      jint OpenIntToDoubleHashMap$Iterator::key() const
      {
        return env->callIntMethod(this$, mids$[mid_key_55546ef6a647f39b]);
      }

      jdouble OpenIntToDoubleHashMap$Iterator::value() const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_b74f83833fdad017]);
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
      static PyObject *t_OpenIntToDoubleHashMap$Iterator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OpenIntToDoubleHashMap$Iterator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OpenIntToDoubleHashMap$Iterator_advance(t_OpenIntToDoubleHashMap$Iterator *self);
      static PyObject *t_OpenIntToDoubleHashMap$Iterator_hasNext(t_OpenIntToDoubleHashMap$Iterator *self);
      static PyObject *t_OpenIntToDoubleHashMap$Iterator_key(t_OpenIntToDoubleHashMap$Iterator *self);
      static PyObject *t_OpenIntToDoubleHashMap$Iterator_value(t_OpenIntToDoubleHashMap$Iterator *self);

      static PyMethodDef t_OpenIntToDoubleHashMap$Iterator__methods_[] = {
        DECLARE_METHOD(t_OpenIntToDoubleHashMap$Iterator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap$Iterator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap$Iterator, advance, METH_NOARGS),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap$Iterator, hasNext, METH_NOARGS),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap$Iterator, key, METH_NOARGS),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap$Iterator, value, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OpenIntToDoubleHashMap$Iterator)[] = {
        { Py_tp_methods, t_OpenIntToDoubleHashMap$Iterator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OpenIntToDoubleHashMap$Iterator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OpenIntToDoubleHashMap$Iterator, t_OpenIntToDoubleHashMap$Iterator, OpenIntToDoubleHashMap$Iterator);

      void t_OpenIntToDoubleHashMap$Iterator::install(PyObject *module)
      {
        installType(&PY_TYPE(OpenIntToDoubleHashMap$Iterator), &PY_TYPE_DEF(OpenIntToDoubleHashMap$Iterator), module, "OpenIntToDoubleHashMap$Iterator", 0);
      }

      void t_OpenIntToDoubleHashMap$Iterator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToDoubleHashMap$Iterator), "class_", make_descriptor(OpenIntToDoubleHashMap$Iterator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToDoubleHashMap$Iterator), "wrapfn_", make_descriptor(t_OpenIntToDoubleHashMap$Iterator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToDoubleHashMap$Iterator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OpenIntToDoubleHashMap$Iterator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OpenIntToDoubleHashMap$Iterator::initializeClass, 1)))
          return NULL;
        return t_OpenIntToDoubleHashMap$Iterator::wrap_Object(OpenIntToDoubleHashMap$Iterator(((t_OpenIntToDoubleHashMap$Iterator *) arg)->object.this$));
      }
      static PyObject *t_OpenIntToDoubleHashMap$Iterator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OpenIntToDoubleHashMap$Iterator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OpenIntToDoubleHashMap$Iterator_advance(t_OpenIntToDoubleHashMap$Iterator *self)
      {
        OBJ_CALL(self->object.advance());
        Py_RETURN_NONE;
      }

      static PyObject *t_OpenIntToDoubleHashMap$Iterator_hasNext(t_OpenIntToDoubleHashMap$Iterator *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasNext());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_OpenIntToDoubleHashMap$Iterator_key(t_OpenIntToDoubleHashMap$Iterator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.key());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_OpenIntToDoubleHashMap$Iterator_value(t_OpenIntToDoubleHashMap$Iterator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.value());
        return PyFloat_FromDouble((double) result);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/errors/DumpReplayer$Result.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {

        ::java::lang::Class *DumpReplayer$Result::class$ = NULL;
        jmethodID *DumpReplayer$Result::mids$ = NULL;
        bool DumpReplayer$Result::live$ = false;

        jclass DumpReplayer$Result::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/errors/DumpReplayer$Result");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getExpected_541690f9ee81d3ad] = env->getMethodID(cls, "getExpected", "()Ljava/lang/Object;");
            mids$[mid_getReplayed_541690f9ee81d3ad] = env->getMethodID(cls, "getReplayed", "()Ljava/lang/Object;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::lang::Object DumpReplayer$Result::getExpected() const
        {
          return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getExpected_541690f9ee81d3ad]));
        }

        ::java::lang::Object DumpReplayer$Result::getReplayed() const
        {
          return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getReplayed_541690f9ee81d3ad]));
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
        static PyObject *t_DumpReplayer$Result_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpReplayer$Result_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpReplayer$Result_getExpected(t_DumpReplayer$Result *self);
        static PyObject *t_DumpReplayer$Result_getReplayed(t_DumpReplayer$Result *self);
        static PyObject *t_DumpReplayer$Result_get__expected(t_DumpReplayer$Result *self, void *data);
        static PyObject *t_DumpReplayer$Result_get__replayed(t_DumpReplayer$Result *self, void *data);
        static PyGetSetDef t_DumpReplayer$Result__fields_[] = {
          DECLARE_GET_FIELD(t_DumpReplayer$Result, expected),
          DECLARE_GET_FIELD(t_DumpReplayer$Result, replayed),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DumpReplayer$Result__methods_[] = {
          DECLARE_METHOD(t_DumpReplayer$Result, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpReplayer$Result, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpReplayer$Result, getExpected, METH_NOARGS),
          DECLARE_METHOD(t_DumpReplayer$Result, getReplayed, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DumpReplayer$Result)[] = {
          { Py_tp_methods, t_DumpReplayer$Result__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_DumpReplayer$Result__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DumpReplayer$Result)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DumpReplayer$Result, t_DumpReplayer$Result, DumpReplayer$Result);

        void t_DumpReplayer$Result::install(PyObject *module)
        {
          installType(&PY_TYPE(DumpReplayer$Result), &PY_TYPE_DEF(DumpReplayer$Result), module, "DumpReplayer$Result", 0);
        }

        void t_DumpReplayer$Result::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DumpReplayer$Result), "class_", make_descriptor(DumpReplayer$Result::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DumpReplayer$Result), "wrapfn_", make_descriptor(t_DumpReplayer$Result::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DumpReplayer$Result), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DumpReplayer$Result_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DumpReplayer$Result::initializeClass, 1)))
            return NULL;
          return t_DumpReplayer$Result::wrap_Object(DumpReplayer$Result(((t_DumpReplayer$Result *) arg)->object.this$));
        }
        static PyObject *t_DumpReplayer$Result_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DumpReplayer$Result::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DumpReplayer$Result_getExpected(t_DumpReplayer$Result *self)
        {
          ::java::lang::Object result((jobject) NULL);
          OBJ_CALL(result = self->object.getExpected());
          return ::java::lang::t_Object::wrap_Object(result);
        }

        static PyObject *t_DumpReplayer$Result_getReplayed(t_DumpReplayer$Result *self)
        {
          ::java::lang::Object result((jobject) NULL);
          OBJ_CALL(result = self->object.getReplayed());
          return ::java::lang::t_Object::wrap_Object(result);
        }

        static PyObject *t_DumpReplayer$Result_get__expected(t_DumpReplayer$Result *self, void *data)
        {
          ::java::lang::Object value((jobject) NULL);
          OBJ_CALL(value = self->object.getExpected());
          return ::java::lang::t_Object::wrap_Object(value);
        }

        static PyObject *t_DumpReplayer$Result_get__replayed(t_DumpReplayer$Result *self, void *data)
        {
          ::java::lang::Object value((jobject) NULL);
          OBJ_CALL(value = self->object.getReplayed());
          return ::java::lang::t_Object::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/time/DateComponents.h"
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimationLoader.h"
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimationLoader$LineParameters.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *MarshallSolarActivityFutureEstimation::class$ = NULL;
            jmethodID *MarshallSolarActivityFutureEstimation::mids$ = NULL;
            bool MarshallSolarActivityFutureEstimation::live$ = false;
            ::java::lang::String *MarshallSolarActivityFutureEstimation::DEFAULT_SUPPORTED_NAMES = NULL;

            jclass MarshallSolarActivityFutureEstimation::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7e72ad6eafa6d582] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;)V");
                mids$[mid_init$_ef802e0c23b66f0d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;)V");
                mids$[mid_init$_e66f71105553a75f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;Lorg/orekit/time/TimeScale;)V");
                mids$[mid_init$_61bbdd830b8c197a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;)V");
                mids$[mid_init$_73226d27f976c826] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;Lorg/orekit/time/TimeScale;IDDD)V");
                mids$[mid_init$_1b3a268b601b1d33] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;IDDD)V");
                mids$[mid_get24HoursKp_fd347811007a6ba3] = env->getMethodID(cls, "get24HoursKp", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getAp_27b701db396ade01] = env->getMethodID(cls, "getAp", "(Lorg/orekit/time/AbsoluteDate;)[D");
                mids$[mid_getAverageFlux_fd347811007a6ba3] = env->getMethodID(cls, "getAverageFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getDailyFlux_fd347811007a6ba3] = env->getMethodID(cls, "getDailyFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getFileDate_5f414e4f345d9daa] = env->getMethodID(cls, "getFileDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/time/DateComponents;");
                mids$[mid_getInstantFlux_fd347811007a6ba3] = env->getMethodID(cls, "getInstantFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getMeanFlux_fd347811007a6ba3] = env->getMethodID(cls, "getMeanFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getStrengthLevel_f490cf9edac89aac] = env->getMethodID(cls, "getStrengthLevel", "()Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;");
                mids$[mid_getThreeHourlyKP_fd347811007a6ba3] = env->getMethodID(cls, "getThreeHourlyKP", "(Lorg/orekit/time/AbsoluteDate;)D");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                DEFAULT_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUPPORTED_NAMES", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            MarshallSolarActivityFutureEstimation::MarshallSolarActivityFutureEstimation(const ::java::lang::String & a0, const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel & a1) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_7e72ad6eafa6d582, a0.this$, a1.this$)) {}

            MarshallSolarActivityFutureEstimation::MarshallSolarActivityFutureEstimation(const ::org::orekit::data::DataSource & a0, const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel & a1) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_ef802e0c23b66f0d, a0.this$, a1.this$)) {}

            MarshallSolarActivityFutureEstimation::MarshallSolarActivityFutureEstimation(const ::org::orekit::data::DataSource & a0, const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel & a1, const ::org::orekit::time::TimeScale & a2) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_e66f71105553a75f, a0.this$, a1.this$, a2.this$)) {}

            MarshallSolarActivityFutureEstimation::MarshallSolarActivityFutureEstimation(const ::java::lang::String & a0, const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel & a1, const ::org::orekit::data::DataProvidersManager & a2, const ::org::orekit::time::TimeScale & a3) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_61bbdd830b8c197a, a0.this$, a1.this$, a2.this$, a3.this$)) {}

            MarshallSolarActivityFutureEstimation::MarshallSolarActivityFutureEstimation(const ::org::orekit::data::DataSource & a0, const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel & a1, const ::org::orekit::time::TimeScale & a2, jint a3, jdouble a4, jdouble a5, jdouble a6) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_73226d27f976c826, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6)) {}

            MarshallSolarActivityFutureEstimation::MarshallSolarActivityFutureEstimation(const ::java::lang::String & a0, const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel & a1, const ::org::orekit::data::DataProvidersManager & a2, const ::org::orekit::time::TimeScale & a3, jint a4, jdouble a5, jdouble a6, jdouble a7) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_1b3a268b601b1d33, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5, a6, a7)) {}

            jdouble MarshallSolarActivityFutureEstimation::get24HoursKp(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_get24HoursKp_fd347811007a6ba3], a0.this$);
            }

            JArray< jdouble > MarshallSolarActivityFutureEstimation::getAp(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAp_27b701db396ade01], a0.this$));
            }

            jdouble MarshallSolarActivityFutureEstimation::getAverageFlux(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAverageFlux_fd347811007a6ba3], a0.this$);
            }

            jdouble MarshallSolarActivityFutureEstimation::getDailyFlux(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDailyFlux_fd347811007a6ba3], a0.this$);
            }

            ::org::orekit::time::DateComponents MarshallSolarActivityFutureEstimation::getFileDate(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return ::org::orekit::time::DateComponents(env->callObjectMethod(this$, mids$[mid_getFileDate_5f414e4f345d9daa], a0.this$));
            }

            jdouble MarshallSolarActivityFutureEstimation::getInstantFlux(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getInstantFlux_fd347811007a6ba3], a0.this$);
            }

            jdouble MarshallSolarActivityFutureEstimation::getMeanFlux(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanFlux_fd347811007a6ba3], a0.this$);
            }

            ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel MarshallSolarActivityFutureEstimation::getStrengthLevel() const
            {
              return ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel(env->callObjectMethod(this$, mids$[mid_getStrengthLevel_f490cf9edac89aac]));
            }

            jdouble MarshallSolarActivityFutureEstimation::getThreeHourlyKP(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getThreeHourlyKP_fd347811007a6ba3], a0.this$);
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
            static PyObject *t_MarshallSolarActivityFutureEstimation_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MarshallSolarActivityFutureEstimation_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MarshallSolarActivityFutureEstimation_of_(t_MarshallSolarActivityFutureEstimation *self, PyObject *args);
            static int t_MarshallSolarActivityFutureEstimation_init_(t_MarshallSolarActivityFutureEstimation *self, PyObject *args, PyObject *kwds);
            static PyObject *t_MarshallSolarActivityFutureEstimation_get24HoursKp(t_MarshallSolarActivityFutureEstimation *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimation_getAp(t_MarshallSolarActivityFutureEstimation *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimation_getAverageFlux(t_MarshallSolarActivityFutureEstimation *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimation_getDailyFlux(t_MarshallSolarActivityFutureEstimation *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimation_getFileDate(t_MarshallSolarActivityFutureEstimation *self, PyObject *arg);
            static PyObject *t_MarshallSolarActivityFutureEstimation_getInstantFlux(t_MarshallSolarActivityFutureEstimation *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimation_getMeanFlux(t_MarshallSolarActivityFutureEstimation *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimation_getStrengthLevel(t_MarshallSolarActivityFutureEstimation *self);
            static PyObject *t_MarshallSolarActivityFutureEstimation_getThreeHourlyKP(t_MarshallSolarActivityFutureEstimation *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimation_get__strengthLevel(t_MarshallSolarActivityFutureEstimation *self, void *data);
            static PyObject *t_MarshallSolarActivityFutureEstimation_get__parameters_(t_MarshallSolarActivityFutureEstimation *self, void *data);
            static PyGetSetDef t_MarshallSolarActivityFutureEstimation__fields_[] = {
              DECLARE_GET_FIELD(t_MarshallSolarActivityFutureEstimation, strengthLevel),
              DECLARE_GET_FIELD(t_MarshallSolarActivityFutureEstimation, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_MarshallSolarActivityFutureEstimation__methods_[] = {
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, of_, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, get24HoursKp, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, getAp, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, getAverageFlux, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, getDailyFlux, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, getFileDate, METH_O),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, getInstantFlux, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, getMeanFlux, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, getStrengthLevel, METH_NOARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, getThreeHourlyKP, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MarshallSolarActivityFutureEstimation)[] = {
              { Py_tp_methods, t_MarshallSolarActivityFutureEstimation__methods_ },
              { Py_tp_init, (void *) t_MarshallSolarActivityFutureEstimation_init_ },
              { Py_tp_getset, t_MarshallSolarActivityFutureEstimation__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MarshallSolarActivityFutureEstimation)[] = {
              &PY_TYPE_DEF(::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData),
              NULL
            };

            DEFINE_TYPE(MarshallSolarActivityFutureEstimation, t_MarshallSolarActivityFutureEstimation, MarshallSolarActivityFutureEstimation);
            PyObject *t_MarshallSolarActivityFutureEstimation::wrap_Object(const MarshallSolarActivityFutureEstimation& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_MarshallSolarActivityFutureEstimation::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MarshallSolarActivityFutureEstimation *self = (t_MarshallSolarActivityFutureEstimation *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_MarshallSolarActivityFutureEstimation::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_MarshallSolarActivityFutureEstimation::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MarshallSolarActivityFutureEstimation *self = (t_MarshallSolarActivityFutureEstimation *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_MarshallSolarActivityFutureEstimation::install(PyObject *module)
            {
              installType(&PY_TYPE(MarshallSolarActivityFutureEstimation), &PY_TYPE_DEF(MarshallSolarActivityFutureEstimation), module, "MarshallSolarActivityFutureEstimation", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation), "StrengthLevel", make_descriptor(&PY_TYPE_DEF(MarshallSolarActivityFutureEstimation$StrengthLevel)));
            }

            void t_MarshallSolarActivityFutureEstimation::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation), "class_", make_descriptor(MarshallSolarActivityFutureEstimation::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation), "wrapfn_", make_descriptor(t_MarshallSolarActivityFutureEstimation::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation), "boxfn_", make_descriptor(boxObject));
              env->getClass(MarshallSolarActivityFutureEstimation::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation), "DEFAULT_SUPPORTED_NAMES", make_descriptor(j2p(*MarshallSolarActivityFutureEstimation::DEFAULT_SUPPORTED_NAMES)));
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MarshallSolarActivityFutureEstimation::initializeClass, 1)))
                return NULL;
              return t_MarshallSolarActivityFutureEstimation::wrap_Object(MarshallSolarActivityFutureEstimation(((t_MarshallSolarActivityFutureEstimation *) arg)->object.this$));
            }
            static PyObject *t_MarshallSolarActivityFutureEstimation_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MarshallSolarActivityFutureEstimation::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_of_(t_MarshallSolarActivityFutureEstimation *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_MarshallSolarActivityFutureEstimation_init_(t_MarshallSolarActivityFutureEstimation *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel a1((jobject) NULL);
                  PyTypeObject **p1;
                  MarshallSolarActivityFutureEstimation object((jobject) NULL);

                  if (!parseArgs(args, "sK", ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::parameters_))
                  {
                    INT_CALL(object = MarshallSolarActivityFutureEstimation(a0, a1));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader);
                    break;
                  }
                }
                {
                  ::org::orekit::data::DataSource a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel a1((jobject) NULL);
                  PyTypeObject **p1;
                  MarshallSolarActivityFutureEstimation object((jobject) NULL);

                  if (!parseArgs(args, "kK", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::parameters_))
                  {
                    INT_CALL(object = MarshallSolarActivityFutureEstimation(a0, a1));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader);
                    break;
                  }
                }
                goto err;
               case 3:
                {
                  ::org::orekit::data::DataSource a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::time::TimeScale a2((jobject) NULL);
                  MarshallSolarActivityFutureEstimation object((jobject) NULL);

                  if (!parseArgs(args, "kKk", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::parameters_, &a2))
                  {
                    INT_CALL(object = MarshallSolarActivityFutureEstimation(a0, a1, a2));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader);
                    break;
                  }
                }
                goto err;
               case 4:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::data::DataProvidersManager a2((jobject) NULL);
                  ::org::orekit::time::TimeScale a3((jobject) NULL);
                  MarshallSolarActivityFutureEstimation object((jobject) NULL);

                  if (!parseArgs(args, "sKkk", ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::parameters_, &a2, &a3))
                  {
                    INT_CALL(object = MarshallSolarActivityFutureEstimation(a0, a1, a2, a3));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader);
                    break;
                  }
                }
                goto err;
               case 7:
                {
                  ::org::orekit::data::DataSource a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::time::TimeScale a2((jobject) NULL);
                  jint a3;
                  jdouble a4;
                  jdouble a5;
                  jdouble a6;
                  MarshallSolarActivityFutureEstimation object((jobject) NULL);

                  if (!parseArgs(args, "kKkIDDD", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::parameters_, &a2, &a3, &a4, &a5, &a6))
                  {
                    INT_CALL(object = MarshallSolarActivityFutureEstimation(a0, a1, a2, a3, a4, a5, a6));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader);
                    break;
                  }
                }
                goto err;
               case 8:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::data::DataProvidersManager a2((jobject) NULL);
                  ::org::orekit::time::TimeScale a3((jobject) NULL);
                  jint a4;
                  jdouble a5;
                  jdouble a6;
                  jdouble a7;
                  MarshallSolarActivityFutureEstimation object((jobject) NULL);

                  if (!parseArgs(args, "sKkkIDDD", ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::parameters_, &a2, &a3, &a4, &a5, &a6, &a7))
                  {
                    INT_CALL(object = MarshallSolarActivityFutureEstimation(a0, a1, a2, a3, a4, a5, a6, a7));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader);
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

            static PyObject *t_MarshallSolarActivityFutureEstimation_get24HoursKp(t_MarshallSolarActivityFutureEstimation *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.get24HoursKp(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimation), (PyObject *) self, "get24HoursKp", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_getAp(t_MarshallSolarActivityFutureEstimation *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getAp(a0));
                return result.wrap();
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimation), (PyObject *) self, "getAp", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_getAverageFlux(t_MarshallSolarActivityFutureEstimation *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getAverageFlux(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimation), (PyObject *) self, "getAverageFlux", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_getDailyFlux(t_MarshallSolarActivityFutureEstimation *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getDailyFlux(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimation), (PyObject *) self, "getDailyFlux", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_getFileDate(t_MarshallSolarActivityFutureEstimation *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::orekit::time::DateComponents result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getFileDate(a0));
                return ::org::orekit::time::t_DateComponents::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getFileDate", arg);
              return NULL;
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_getInstantFlux(t_MarshallSolarActivityFutureEstimation *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getInstantFlux(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimation), (PyObject *) self, "getInstantFlux", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_getMeanFlux(t_MarshallSolarActivityFutureEstimation *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getMeanFlux(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimation), (PyObject *) self, "getMeanFlux", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_getStrengthLevel(t_MarshallSolarActivityFutureEstimation *self)
            {
              ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel result((jobject) NULL);
              OBJ_CALL(result = self->object.getStrengthLevel());
              return ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_Object(result);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_getThreeHourlyKP(t_MarshallSolarActivityFutureEstimation *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getThreeHourlyKP(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimation), (PyObject *) self, "getThreeHourlyKP", args, 2);
            }
            static PyObject *t_MarshallSolarActivityFutureEstimation_get__parameters_(t_MarshallSolarActivityFutureEstimation *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_get__strengthLevel(t_MarshallSolarActivityFutureEstimation *self, void *data)
            {
              ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel value((jobject) NULL);
              OBJ_CALL(value = self->object.getStrengthLevel());
              return ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/DeepSDP4.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *DeepSDP4::class$ = NULL;
          jmethodID *DeepSDP4::mids$ = NULL;
          bool DeepSDP4::live$ = false;

          jclass DeepSDP4::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/DeepSDP4");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7a5e69c032c7e921] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/attitudes/AttitudeProvider;D)V");
              mids$[mid_init$_3b79aaf1b59208bb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/frames/Frame;)V");
              mids$[mid_luniSolarTermsComputation_a1fa5dae97ea5ed2] = env->getMethodID(cls, "luniSolarTermsComputation", "()V");
              mids$[mid_deepSecularEffects_8ba9fe7a847cecad] = env->getMethodID(cls, "deepSecularEffects", "(D)V");
              mids$[mid_deepPeriodicEffects_8ba9fe7a847cecad] = env->getMethodID(cls, "deepPeriodicEffects", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DeepSDP4::DeepSDP4(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2) : ::org::orekit::propagation::analytical::tle::SDP4(env->newObject(initializeClass, &mids$, mid_init$_7a5e69c032c7e921, a0.this$, a1.this$, a2)) {}

          DeepSDP4::DeepSDP4(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::propagation::analytical::tle::SDP4(env->newObject(initializeClass, &mids$, mid_init$_3b79aaf1b59208bb, a0.this$, a1.this$, a2, a3.this$)) {}
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
          static PyObject *t_DeepSDP4_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DeepSDP4_instance_(PyTypeObject *type, PyObject *arg);
          static int t_DeepSDP4_init_(t_DeepSDP4 *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_DeepSDP4__methods_[] = {
            DECLARE_METHOD(t_DeepSDP4, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DeepSDP4, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DeepSDP4)[] = {
            { Py_tp_methods, t_DeepSDP4__methods_ },
            { Py_tp_init, (void *) t_DeepSDP4_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DeepSDP4)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::tle::SDP4),
            NULL
          };

          DEFINE_TYPE(DeepSDP4, t_DeepSDP4, DeepSDP4);

          void t_DeepSDP4::install(PyObject *module)
          {
            installType(&PY_TYPE(DeepSDP4), &PY_TYPE_DEF(DeepSDP4), module, "DeepSDP4", 0);
          }

          void t_DeepSDP4::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DeepSDP4), "class_", make_descriptor(DeepSDP4::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DeepSDP4), "wrapfn_", make_descriptor(t_DeepSDP4::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DeepSDP4), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DeepSDP4_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DeepSDP4::initializeClass, 1)))
              return NULL;
            return t_DeepSDP4::wrap_Object(DeepSDP4(((t_DeepSDP4 *) arg)->object.this$));
          }
          static PyObject *t_DeepSDP4_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DeepSDP4::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_DeepSDP4_init_(t_DeepSDP4 *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                jdouble a2;
                DeepSDP4 object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = DeepSDP4(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                jdouble a2;
                ::org::orekit::frames::Frame a3((jobject) NULL);
                DeepSDP4 object((jobject) NULL);

                if (!parseArgs(args, "kkDk", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = DeepSDP4(a0, a1, a2, a3));
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PoissonSeriesParser.h"
#include "org/orekit/data/PoissonSeries.h"
#include "org/orekit/data/PolynomialParser$Unit.h"
#include "java/io/InputStream.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/data/PoissonSeriesParser.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PoissonSeriesParser::class$ = NULL;
      jmethodID *PoissonSeriesParser::mids$ = NULL;
      bool PoissonSeriesParser::live$ = false;

      jclass PoissonSeriesParser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PoissonSeriesParser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_parse_d3d2c20e86656cb1] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Lorg/orekit/data/PoissonSeries;");
          mids$[mid_withDoodson_71e486f1e2a3f81a] = env->getMethodID(cls, "withDoodson", "(II)Lorg/orekit/data/PoissonSeriesParser;");
          mids$[mid_withFirstDelaunay_23a9dcacefe9d395] = env->getMethodID(cls, "withFirstDelaunay", "(I)Lorg/orekit/data/PoissonSeriesParser;");
          mids$[mid_withFirstPlanetary_23a9dcacefe9d395] = env->getMethodID(cls, "withFirstPlanetary", "(I)Lorg/orekit/data/PoissonSeriesParser;");
          mids$[mid_withGamma_23a9dcacefe9d395] = env->getMethodID(cls, "withGamma", "(I)Lorg/orekit/data/PoissonSeriesParser;");
          mids$[mid_withOptionalColumn_23a9dcacefe9d395] = env->getMethodID(cls, "withOptionalColumn", "(I)Lorg/orekit/data/PoissonSeriesParser;");
          mids$[mid_withPolynomialPart_87e4a7d7691b030f] = env->getMethodID(cls, "withPolynomialPart", "(CLorg/orekit/data/PolynomialParser$Unit;)Lorg/orekit/data/PoissonSeriesParser;");
          mids$[mid_withSinCos_8d1ffe23bafb05dc] = env->getMethodID(cls, "withSinCos", "(IIDID)Lorg/orekit/data/PoissonSeriesParser;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PoissonSeriesParser::PoissonSeriesParser(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

      ::org::orekit::data::PoissonSeries PoissonSeriesParser::parse(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        return ::org::orekit::data::PoissonSeries(env->callObjectMethod(this$, mids$[mid_parse_d3d2c20e86656cb1], a0.this$, a1.this$));
      }

      PoissonSeriesParser PoissonSeriesParser::withDoodson(jint a0, jint a1) const
      {
        return PoissonSeriesParser(env->callObjectMethod(this$, mids$[mid_withDoodson_71e486f1e2a3f81a], a0, a1));
      }

      PoissonSeriesParser PoissonSeriesParser::withFirstDelaunay(jint a0) const
      {
        return PoissonSeriesParser(env->callObjectMethod(this$, mids$[mid_withFirstDelaunay_23a9dcacefe9d395], a0));
      }

      PoissonSeriesParser PoissonSeriesParser::withFirstPlanetary(jint a0) const
      {
        return PoissonSeriesParser(env->callObjectMethod(this$, mids$[mid_withFirstPlanetary_23a9dcacefe9d395], a0));
      }

      PoissonSeriesParser PoissonSeriesParser::withGamma(jint a0) const
      {
        return PoissonSeriesParser(env->callObjectMethod(this$, mids$[mid_withGamma_23a9dcacefe9d395], a0));
      }

      PoissonSeriesParser PoissonSeriesParser::withOptionalColumn(jint a0) const
      {
        return PoissonSeriesParser(env->callObjectMethod(this$, mids$[mid_withOptionalColumn_23a9dcacefe9d395], a0));
      }

      PoissonSeriesParser PoissonSeriesParser::withPolynomialPart(jchar a0, const ::org::orekit::data::PolynomialParser$Unit & a1) const
      {
        return PoissonSeriesParser(env->callObjectMethod(this$, mids$[mid_withPolynomialPart_87e4a7d7691b030f], a0, a1.this$));
      }

      PoissonSeriesParser PoissonSeriesParser::withSinCos(jint a0, jint a1, jdouble a2, jint a3, jdouble a4) const
      {
        return PoissonSeriesParser(env->callObjectMethod(this$, mids$[mid_withSinCos_8d1ffe23bafb05dc], a0, a1, a2, a3, a4));
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
      static PyObject *t_PoissonSeriesParser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PoissonSeriesParser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PoissonSeriesParser_init_(t_PoissonSeriesParser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PoissonSeriesParser_parse(t_PoissonSeriesParser *self, PyObject *args);
      static PyObject *t_PoissonSeriesParser_withDoodson(t_PoissonSeriesParser *self, PyObject *args);
      static PyObject *t_PoissonSeriesParser_withFirstDelaunay(t_PoissonSeriesParser *self, PyObject *arg);
      static PyObject *t_PoissonSeriesParser_withFirstPlanetary(t_PoissonSeriesParser *self, PyObject *arg);
      static PyObject *t_PoissonSeriesParser_withGamma(t_PoissonSeriesParser *self, PyObject *arg);
      static PyObject *t_PoissonSeriesParser_withOptionalColumn(t_PoissonSeriesParser *self, PyObject *arg);
      static PyObject *t_PoissonSeriesParser_withPolynomialPart(t_PoissonSeriesParser *self, PyObject *args);
      static PyObject *t_PoissonSeriesParser_withSinCos(t_PoissonSeriesParser *self, PyObject *args);

      static PyMethodDef t_PoissonSeriesParser__methods_[] = {
        DECLARE_METHOD(t_PoissonSeriesParser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PoissonSeriesParser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PoissonSeriesParser, parse, METH_VARARGS),
        DECLARE_METHOD(t_PoissonSeriesParser, withDoodson, METH_VARARGS),
        DECLARE_METHOD(t_PoissonSeriesParser, withFirstDelaunay, METH_O),
        DECLARE_METHOD(t_PoissonSeriesParser, withFirstPlanetary, METH_O),
        DECLARE_METHOD(t_PoissonSeriesParser, withGamma, METH_O),
        DECLARE_METHOD(t_PoissonSeriesParser, withOptionalColumn, METH_O),
        DECLARE_METHOD(t_PoissonSeriesParser, withPolynomialPart, METH_VARARGS),
        DECLARE_METHOD(t_PoissonSeriesParser, withSinCos, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PoissonSeriesParser)[] = {
        { Py_tp_methods, t_PoissonSeriesParser__methods_ },
        { Py_tp_init, (void *) t_PoissonSeriesParser_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PoissonSeriesParser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PoissonSeriesParser, t_PoissonSeriesParser, PoissonSeriesParser);

      void t_PoissonSeriesParser::install(PyObject *module)
      {
        installType(&PY_TYPE(PoissonSeriesParser), &PY_TYPE_DEF(PoissonSeriesParser), module, "PoissonSeriesParser", 0);
      }

      void t_PoissonSeriesParser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonSeriesParser), "class_", make_descriptor(PoissonSeriesParser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonSeriesParser), "wrapfn_", make_descriptor(t_PoissonSeriesParser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonSeriesParser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PoissonSeriesParser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PoissonSeriesParser::initializeClass, 1)))
          return NULL;
        return t_PoissonSeriesParser::wrap_Object(PoissonSeriesParser(((t_PoissonSeriesParser *) arg)->object.this$));
      }
      static PyObject *t_PoissonSeriesParser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PoissonSeriesParser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PoissonSeriesParser_init_(t_PoissonSeriesParser *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        PoissonSeriesParser object((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          INT_CALL(object = PoissonSeriesParser(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_PoissonSeriesParser_parse(t_PoissonSeriesParser *self, PyObject *args)
      {
        ::java::io::InputStream a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::org::orekit::data::PoissonSeries result((jobject) NULL);

        if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.parse(a0, a1));
          return ::org::orekit::data::t_PoissonSeries::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }

      static PyObject *t_PoissonSeriesParser_withDoodson(t_PoissonSeriesParser *self, PyObject *args)
      {
        jint a0;
        jint a1;
        PoissonSeriesParser result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.withDoodson(a0, a1));
          return t_PoissonSeriesParser::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withDoodson", args);
        return NULL;
      }

      static PyObject *t_PoissonSeriesParser_withFirstDelaunay(t_PoissonSeriesParser *self, PyObject *arg)
      {
        jint a0;
        PoissonSeriesParser result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withFirstDelaunay(a0));
          return t_PoissonSeriesParser::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withFirstDelaunay", arg);
        return NULL;
      }

      static PyObject *t_PoissonSeriesParser_withFirstPlanetary(t_PoissonSeriesParser *self, PyObject *arg)
      {
        jint a0;
        PoissonSeriesParser result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withFirstPlanetary(a0));
          return t_PoissonSeriesParser::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withFirstPlanetary", arg);
        return NULL;
      }

      static PyObject *t_PoissonSeriesParser_withGamma(t_PoissonSeriesParser *self, PyObject *arg)
      {
        jint a0;
        PoissonSeriesParser result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withGamma(a0));
          return t_PoissonSeriesParser::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withGamma", arg);
        return NULL;
      }

      static PyObject *t_PoissonSeriesParser_withOptionalColumn(t_PoissonSeriesParser *self, PyObject *arg)
      {
        jint a0;
        PoissonSeriesParser result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withOptionalColumn(a0));
          return t_PoissonSeriesParser::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withOptionalColumn", arg);
        return NULL;
      }

      static PyObject *t_PoissonSeriesParser_withPolynomialPart(t_PoissonSeriesParser *self, PyObject *args)
      {
        jchar a0;
        ::org::orekit::data::PolynomialParser$Unit a1((jobject) NULL);
        PyTypeObject **p1;
        PoissonSeriesParser result((jobject) NULL);

        if (!parseArgs(args, "CK", ::org::orekit::data::PolynomialParser$Unit::initializeClass, &a0, &a1, &p1, ::org::orekit::data::t_PolynomialParser$Unit::parameters_))
        {
          OBJ_CALL(result = self->object.withPolynomialPart(a0, a1));
          return t_PoissonSeriesParser::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withPolynomialPart", args);
        return NULL;
      }

      static PyObject *t_PoissonSeriesParser_withSinCos(t_PoissonSeriesParser *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;
        jint a3;
        jdouble a4;
        PoissonSeriesParser result((jobject) NULL);

        if (!parseArgs(args, "IIDID", &a0, &a1, &a2, &a3, &a4))
        {
          OBJ_CALL(result = self->object.withSinCos(a0, a1, a2, a3, a4));
          return t_PoissonSeriesParser::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withSinCos", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/radiation/ECOM2.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        ::java::lang::Class *ECOM2::class$ = NULL;
        jmethodID *ECOM2::mids$ = NULL;
        bool ECOM2::live$ = false;
        ::java::lang::String *ECOM2::ECOM_COEFFICIENT = NULL;

        jclass ECOM2::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/ECOM2");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_691cd6306e23a01e] = env->getMethodID(cls, "<init>", "(IIDLorg/orekit/utils/ExtendedPVCoordinatesProvider;D)V");
            mids$[mid_acceleration_0ce449c67b5ffd9c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_20bded0292328743] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ECOM_COEFFICIENT = new ::java::lang::String(env->getStaticObjectField(cls, "ECOM_COEFFICIENT", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ECOM2::ECOM2(jint a0, jint a1, jdouble a2, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a3, jdouble a4) : ::org::orekit::forces::radiation::AbstractRadiationForceModel(env->newObject(initializeClass, &mids$, mid_init$_691cd6306e23a01e, a0, a1, a2, a3.this$, a4)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ECOM2::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_0ce449c67b5ffd9c], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ECOM2::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_20bded0292328743], a0.this$, a1.this$));
        }

        ::java::util::List ECOM2::getParametersDrivers() const
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
      namespace radiation {
        static PyObject *t_ECOM2_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ECOM2_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ECOM2_init_(t_ECOM2 *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ECOM2_acceleration(t_ECOM2 *self, PyObject *args);
        static PyObject *t_ECOM2_getParametersDrivers(t_ECOM2 *self, PyObject *args);
        static PyObject *t_ECOM2_get__parametersDrivers(t_ECOM2 *self, void *data);
        static PyGetSetDef t_ECOM2__fields_[] = {
          DECLARE_GET_FIELD(t_ECOM2, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ECOM2__methods_[] = {
          DECLARE_METHOD(t_ECOM2, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ECOM2, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ECOM2, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_ECOM2, getParametersDrivers, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ECOM2)[] = {
          { Py_tp_methods, t_ECOM2__methods_ },
          { Py_tp_init, (void *) t_ECOM2_init_ },
          { Py_tp_getset, t_ECOM2__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ECOM2)[] = {
          &PY_TYPE_DEF(::org::orekit::forces::radiation::AbstractRadiationForceModel),
          NULL
        };

        DEFINE_TYPE(ECOM2, t_ECOM2, ECOM2);

        void t_ECOM2::install(PyObject *module)
        {
          installType(&PY_TYPE(ECOM2), &PY_TYPE_DEF(ECOM2), module, "ECOM2", 0);
        }

        void t_ECOM2::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ECOM2), "class_", make_descriptor(ECOM2::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ECOM2), "wrapfn_", make_descriptor(t_ECOM2::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ECOM2), "boxfn_", make_descriptor(boxObject));
          env->getClass(ECOM2::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(ECOM2), "ECOM_COEFFICIENT", make_descriptor(j2p(*ECOM2::ECOM_COEFFICIENT)));
        }

        static PyObject *t_ECOM2_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ECOM2::initializeClass, 1)))
            return NULL;
          return t_ECOM2::wrap_Object(ECOM2(((t_ECOM2 *) arg)->object.this$));
        }
        static PyObject *t_ECOM2_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ECOM2::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ECOM2_init_(t_ECOM2 *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jint a1;
          jdouble a2;
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a3((jobject) NULL);
          jdouble a4;
          ECOM2 object((jobject) NULL);

          if (!parseArgs(args, "IIDkD", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = ECOM2(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ECOM2_acceleration(t_ECOM2 *self, PyObject *args)
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

          return callSuper(PY_TYPE(ECOM2), (PyObject *) self, "acceleration", args, 2);
        }

        static PyObject *t_ECOM2_getParametersDrivers(t_ECOM2 *self, PyObject *args)
        {
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          return callSuper(PY_TYPE(ECOM2), (PyObject *) self, "getParametersDrivers", args, 2);
        }

        static PyObject *t_ECOM2_get__parametersDrivers(t_ECOM2 *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/ClassicalRungeKuttaFieldIntegratorBuilder.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *ClassicalRungeKuttaFieldIntegratorBuilder::class$ = NULL;
        jmethodID *ClassicalRungeKuttaFieldIntegratorBuilder::mids$ = NULL;
        bool ClassicalRungeKuttaFieldIntegratorBuilder::live$ = false;

        jclass ClassicalRungeKuttaFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/ClassicalRungeKuttaFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_f2b4bfa0af1007e8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_buildIntegrator_ce58c6ef4cfb23c4] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ClassicalRungeKuttaFieldIntegratorBuilder::ClassicalRungeKuttaFieldIntegratorBuilder(jdouble a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        ClassicalRungeKuttaFieldIntegratorBuilder::ClassicalRungeKuttaFieldIntegratorBuilder(const ::org::hipparchus::CalculusFieldElement & a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_f2b4bfa0af1007e8, a0.this$)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator ClassicalRungeKuttaFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_ce58c6ef4cfb23c4], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_of_(t_ClassicalRungeKuttaFieldIntegratorBuilder *self, PyObject *args);
        static int t_ClassicalRungeKuttaFieldIntegratorBuilder_init_(t_ClassicalRungeKuttaFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_buildIntegrator(t_ClassicalRungeKuttaFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_get__parameters_(t_ClassicalRungeKuttaFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_ClassicalRungeKuttaFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_ClassicalRungeKuttaFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ClassicalRungeKuttaFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_ClassicalRungeKuttaFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ClassicalRungeKuttaFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_ClassicalRungeKuttaFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_ClassicalRungeKuttaFieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_ClassicalRungeKuttaFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ClassicalRungeKuttaFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(ClassicalRungeKuttaFieldIntegratorBuilder, t_ClassicalRungeKuttaFieldIntegratorBuilder, ClassicalRungeKuttaFieldIntegratorBuilder);
        PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder::wrap_Object(const ClassicalRungeKuttaFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ClassicalRungeKuttaFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ClassicalRungeKuttaFieldIntegratorBuilder *self = (t_ClassicalRungeKuttaFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ClassicalRungeKuttaFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ClassicalRungeKuttaFieldIntegratorBuilder *self = (t_ClassicalRungeKuttaFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ClassicalRungeKuttaFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(ClassicalRungeKuttaFieldIntegratorBuilder), &PY_TYPE_DEF(ClassicalRungeKuttaFieldIntegratorBuilder), module, "ClassicalRungeKuttaFieldIntegratorBuilder", 0);
        }

        void t_ClassicalRungeKuttaFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaFieldIntegratorBuilder), "class_", make_descriptor(ClassicalRungeKuttaFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_ClassicalRungeKuttaFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ClassicalRungeKuttaFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ClassicalRungeKuttaFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_ClassicalRungeKuttaFieldIntegratorBuilder::wrap_Object(ClassicalRungeKuttaFieldIntegratorBuilder(((t_ClassicalRungeKuttaFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ClassicalRungeKuttaFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_of_(t_ClassicalRungeKuttaFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ClassicalRungeKuttaFieldIntegratorBuilder_init_(t_ClassicalRungeKuttaFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              ClassicalRungeKuttaFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = ClassicalRungeKuttaFieldIntegratorBuilder(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ClassicalRungeKuttaFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = ClassicalRungeKuttaFieldIntegratorBuilder(a0));
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

        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_buildIntegrator(t_ClassicalRungeKuttaFieldIntegratorBuilder *self, PyObject *args)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::orbits::Orbit a1((jobject) NULL);
          ::org::orekit::orbits::OrbitType a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::ode::AbstractFieldIntegrator result((jobject) NULL);

          if (!parseArgs(args, "KkK", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1, a2));
            return ::org::hipparchus::ode::t_AbstractFieldIntegrator::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(ClassicalRungeKuttaFieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_ClassicalRungeKuttaFieldIntegratorBuilder_get__parameters_(t_ClassicalRungeKuttaFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$StringConsumer.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$StringConsumer::class$ = NULL;
            jmethodID *ParseToken$StringConsumer::mids$ = NULL;
            bool ParseToken$StringConsumer::live$ = false;

            jclass ParseToken$StringConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$StringConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_734b91ac30d5f9b4] = env->getMethodID(cls, "accept", "(Ljava/lang/String;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$StringConsumer::accept(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_734b91ac30d5f9b4], a0.this$);
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
            static PyObject *t_ParseToken$StringConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$StringConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$StringConsumer_accept(t_ParseToken$StringConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$StringConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$StringConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$StringConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$StringConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$StringConsumer)[] = {
              { Py_tp_methods, t_ParseToken$StringConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$StringConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$StringConsumer, t_ParseToken$StringConsumer, ParseToken$StringConsumer);

            void t_ParseToken$StringConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$StringConsumer), &PY_TYPE_DEF(ParseToken$StringConsumer), module, "ParseToken$StringConsumer", 0);
            }

            void t_ParseToken$StringConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$StringConsumer), "class_", make_descriptor(ParseToken$StringConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$StringConsumer), "wrapfn_", make_descriptor(t_ParseToken$StringConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$StringConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$StringConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$StringConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$StringConsumer::wrap_Object(ParseToken$StringConsumer(((t_ParseToken$StringConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$StringConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$StringConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$StringConsumer_accept(t_ParseToken$StringConsumer *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
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
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm06Data.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/metric/messages/common/PhaseBias.h"
#include "java/lang/Class.h"
#include "java/lang/Integer.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm06Data::class$ = NULL;
              jmethodID *SsrIgm06Data::mids$ = NULL;
              bool SsrIgm06Data::live$ = false;

              jclass SsrIgm06Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm06Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_addPhaseBias_85312602917c68b3] = env->getMethodID(cls, "addPhaseBias", "(Lorg/orekit/gnss/metric/messages/common/PhaseBias;)V");
                  mids$[mid_getNumberOfBiasesProcessed_55546ef6a647f39b] = env->getMethodID(cls, "getNumberOfBiasesProcessed", "()I");
                  mids$[mid_getPhaseBias_cd2696e26f8ba219] = env->getMethodID(cls, "getPhaseBias", "(I)Lorg/orekit/gnss/metric/messages/common/PhaseBias;");
                  mids$[mid_getPhaseBiases_810bed48fafb0b9a] = env->getMethodID(cls, "getPhaseBiases", "()Ljava/util/Map;");
                  mids$[mid_getYawAngle_b74f83833fdad017] = env->getMethodID(cls, "getYawAngle", "()D");
                  mids$[mid_getYawRate_b74f83833fdad017] = env->getMethodID(cls, "getYawRate", "()D");
                  mids$[mid_setNumberOfBiasesProcessed_44ed599e93e8a30c] = env->getMethodID(cls, "setNumberOfBiasesProcessed", "(I)V");
                  mids$[mid_setYawAngle_8ba9fe7a847cecad] = env->getMethodID(cls, "setYawAngle", "(D)V");
                  mids$[mid_setYawRate_8ba9fe7a847cecad] = env->getMethodID(cls, "setYawRate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm06Data::SsrIgm06Data() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              void SsrIgm06Data::addPhaseBias(const ::org::orekit::gnss::metric::messages::common::PhaseBias & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_addPhaseBias_85312602917c68b3], a0.this$);
              }

              jint SsrIgm06Data::getNumberOfBiasesProcessed() const
              {
                return env->callIntMethod(this$, mids$[mid_getNumberOfBiasesProcessed_55546ef6a647f39b]);
              }

              ::org::orekit::gnss::metric::messages::common::PhaseBias SsrIgm06Data::getPhaseBias(jint a0) const
              {
                return ::org::orekit::gnss::metric::messages::common::PhaseBias(env->callObjectMethod(this$, mids$[mid_getPhaseBias_cd2696e26f8ba219], a0));
              }

              ::java::util::Map SsrIgm06Data::getPhaseBiases() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getPhaseBiases_810bed48fafb0b9a]));
              }

              jdouble SsrIgm06Data::getYawAngle() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getYawAngle_b74f83833fdad017]);
              }

              jdouble SsrIgm06Data::getYawRate() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getYawRate_b74f83833fdad017]);
              }

              void SsrIgm06Data::setNumberOfBiasesProcessed(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNumberOfBiasesProcessed_44ed599e93e8a30c], a0);
              }

              void SsrIgm06Data::setYawAngle(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setYawAngle_8ba9fe7a847cecad], a0);
              }

              void SsrIgm06Data::setYawRate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setYawRate_8ba9fe7a847cecad], a0);
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
              static PyObject *t_SsrIgm06Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm06Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm06Data_init_(t_SsrIgm06Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm06Data_addPhaseBias(t_SsrIgm06Data *self, PyObject *arg);
              static PyObject *t_SsrIgm06Data_getNumberOfBiasesProcessed(t_SsrIgm06Data *self);
              static PyObject *t_SsrIgm06Data_getPhaseBias(t_SsrIgm06Data *self, PyObject *arg);
              static PyObject *t_SsrIgm06Data_getPhaseBiases(t_SsrIgm06Data *self);
              static PyObject *t_SsrIgm06Data_getYawAngle(t_SsrIgm06Data *self);
              static PyObject *t_SsrIgm06Data_getYawRate(t_SsrIgm06Data *self);
              static PyObject *t_SsrIgm06Data_setNumberOfBiasesProcessed(t_SsrIgm06Data *self, PyObject *arg);
              static PyObject *t_SsrIgm06Data_setYawAngle(t_SsrIgm06Data *self, PyObject *arg);
              static PyObject *t_SsrIgm06Data_setYawRate(t_SsrIgm06Data *self, PyObject *arg);
              static PyObject *t_SsrIgm06Data_get__numberOfBiasesProcessed(t_SsrIgm06Data *self, void *data);
              static int t_SsrIgm06Data_set__numberOfBiasesProcessed(t_SsrIgm06Data *self, PyObject *arg, void *data);
              static PyObject *t_SsrIgm06Data_get__phaseBiases(t_SsrIgm06Data *self, void *data);
              static PyObject *t_SsrIgm06Data_get__yawAngle(t_SsrIgm06Data *self, void *data);
              static int t_SsrIgm06Data_set__yawAngle(t_SsrIgm06Data *self, PyObject *arg, void *data);
              static PyObject *t_SsrIgm06Data_get__yawRate(t_SsrIgm06Data *self, void *data);
              static int t_SsrIgm06Data_set__yawRate(t_SsrIgm06Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgm06Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgm06Data, numberOfBiasesProcessed),
                DECLARE_GET_FIELD(t_SsrIgm06Data, phaseBiases),
                DECLARE_GETSET_FIELD(t_SsrIgm06Data, yawAngle),
                DECLARE_GETSET_FIELD(t_SsrIgm06Data, yawRate),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm06Data__methods_[] = {
                DECLARE_METHOD(t_SsrIgm06Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm06Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm06Data, addPhaseBias, METH_O),
                DECLARE_METHOD(t_SsrIgm06Data, getNumberOfBiasesProcessed, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm06Data, getPhaseBias, METH_O),
                DECLARE_METHOD(t_SsrIgm06Data, getPhaseBiases, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm06Data, getYawAngle, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm06Data, getYawRate, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm06Data, setNumberOfBiasesProcessed, METH_O),
                DECLARE_METHOD(t_SsrIgm06Data, setYawAngle, METH_O),
                DECLARE_METHOD(t_SsrIgm06Data, setYawRate, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm06Data)[] = {
                { Py_tp_methods, t_SsrIgm06Data__methods_ },
                { Py_tp_init, (void *) t_SsrIgm06Data_init_ },
                { Py_tp_getset, t_SsrIgm06Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm06Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData),
                NULL
              };

              DEFINE_TYPE(SsrIgm06Data, t_SsrIgm06Data, SsrIgm06Data);

              void t_SsrIgm06Data::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm06Data), &PY_TYPE_DEF(SsrIgm06Data), module, "SsrIgm06Data", 0);
              }

              void t_SsrIgm06Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm06Data), "class_", make_descriptor(SsrIgm06Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm06Data), "wrapfn_", make_descriptor(t_SsrIgm06Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm06Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm06Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm06Data::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm06Data::wrap_Object(SsrIgm06Data(((t_SsrIgm06Data *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm06Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm06Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm06Data_init_(t_SsrIgm06Data *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm06Data object((jobject) NULL);

                INT_CALL(object = SsrIgm06Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm06Data_addPhaseBias(t_SsrIgm06Data *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::PhaseBias a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::PhaseBias::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.addPhaseBias(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "addPhaseBias", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm06Data_getNumberOfBiasesProcessed(t_SsrIgm06Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNumberOfBiasesProcessed());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIgm06Data_getPhaseBias(t_SsrIgm06Data *self, PyObject *arg)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::common::PhaseBias result((jobject) NULL);

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(result = self->object.getPhaseBias(a0));
                  return ::org::orekit::gnss::metric::messages::common::t_PhaseBias::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getPhaseBias", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm06Data_getPhaseBiases(t_SsrIgm06Data *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getPhaseBiases());
                return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(Integer), ::org::orekit::gnss::metric::messages::common::PY_TYPE(PhaseBias));
              }

              static PyObject *t_SsrIgm06Data_getYawAngle(t_SsrIgm06Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getYawAngle());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SsrIgm06Data_getYawRate(t_SsrIgm06Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getYawRate());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SsrIgm06Data_setNumberOfBiasesProcessed(t_SsrIgm06Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNumberOfBiasesProcessed(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNumberOfBiasesProcessed", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm06Data_setYawAngle(t_SsrIgm06Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setYawAngle(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setYawAngle", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm06Data_setYawRate(t_SsrIgm06Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setYawRate(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setYawRate", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm06Data_get__numberOfBiasesProcessed(t_SsrIgm06Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNumberOfBiasesProcessed());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIgm06Data_set__numberOfBiasesProcessed(t_SsrIgm06Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNumberOfBiasesProcessed(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "numberOfBiasesProcessed", arg);
                return -1;
              }

              static PyObject *t_SsrIgm06Data_get__phaseBiases(t_SsrIgm06Data *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getPhaseBiases());
                return ::java::util::t_Map::wrap_Object(value);
              }

              static PyObject *t_SsrIgm06Data_get__yawAngle(t_SsrIgm06Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getYawAngle());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SsrIgm06Data_set__yawAngle(t_SsrIgm06Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setYawAngle(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "yawAngle", arg);
                return -1;
              }

              static PyObject *t_SsrIgm06Data_get__yawRate(t_SsrIgm06Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getYawRate());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SsrIgm06Data_set__yawRate(t_SsrIgm06Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setYawRate(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "yawRate", arg);
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
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "java/util/Map.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *FieldShortPeriodTerms::class$ = NULL;
            jmethodID *FieldShortPeriodTerms::mids$ = NULL;
            bool FieldShortPeriodTerms::live$ = false;

            jclass FieldShortPeriodTerms::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getCoefficients_ba34939e32c530ba] = env->getMethodID(cls, "getCoefficients", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Set;)Ljava/util/Map;");
                mids$[mid_getCoefficientsKeyPrefix_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getCoefficientsKeyPrefix", "()Ljava/lang/String;");
                mids$[mid_value_738d63f4c1fff02e] = env->getMethodID(cls, "value", "(Lorg/orekit/orbits/FieldOrbit;)[Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::java::util::Map FieldShortPeriodTerms::getCoefficients(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::java::util::Set & a1) const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getCoefficients_ba34939e32c530ba], a0.this$, a1.this$));
            }

            ::java::lang::String FieldShortPeriodTerms::getCoefficientsKeyPrefix() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCoefficientsKeyPrefix_1c1fa1e935d6cdcf]));
            }

            JArray< ::org::hipparchus::CalculusFieldElement > FieldShortPeriodTerms::value(const ::org::orekit::orbits::FieldOrbit & a0) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_738d63f4c1fff02e], a0.this$));
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
            static PyObject *t_FieldShortPeriodTerms_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldShortPeriodTerms_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldShortPeriodTerms_of_(t_FieldShortPeriodTerms *self, PyObject *args);
            static PyObject *t_FieldShortPeriodTerms_getCoefficients(t_FieldShortPeriodTerms *self, PyObject *args);
            static PyObject *t_FieldShortPeriodTerms_getCoefficientsKeyPrefix(t_FieldShortPeriodTerms *self);
            static PyObject *t_FieldShortPeriodTerms_value(t_FieldShortPeriodTerms *self, PyObject *arg);
            static PyObject *t_FieldShortPeriodTerms_get__coefficientsKeyPrefix(t_FieldShortPeriodTerms *self, void *data);
            static PyObject *t_FieldShortPeriodTerms_get__parameters_(t_FieldShortPeriodTerms *self, void *data);
            static PyGetSetDef t_FieldShortPeriodTerms__fields_[] = {
              DECLARE_GET_FIELD(t_FieldShortPeriodTerms, coefficientsKeyPrefix),
              DECLARE_GET_FIELD(t_FieldShortPeriodTerms, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldShortPeriodTerms__methods_[] = {
              DECLARE_METHOD(t_FieldShortPeriodTerms, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldShortPeriodTerms, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldShortPeriodTerms, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldShortPeriodTerms, getCoefficients, METH_VARARGS),
              DECLARE_METHOD(t_FieldShortPeriodTerms, getCoefficientsKeyPrefix, METH_NOARGS),
              DECLARE_METHOD(t_FieldShortPeriodTerms, value, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldShortPeriodTerms)[] = {
              { Py_tp_methods, t_FieldShortPeriodTerms__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_FieldShortPeriodTerms__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldShortPeriodTerms)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldShortPeriodTerms, t_FieldShortPeriodTerms, FieldShortPeriodTerms);
            PyObject *t_FieldShortPeriodTerms::wrap_Object(const FieldShortPeriodTerms& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldShortPeriodTerms::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldShortPeriodTerms *self = (t_FieldShortPeriodTerms *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldShortPeriodTerms::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldShortPeriodTerms::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldShortPeriodTerms *self = (t_FieldShortPeriodTerms *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldShortPeriodTerms::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldShortPeriodTerms), &PY_TYPE_DEF(FieldShortPeriodTerms), module, "FieldShortPeriodTerms", 0);
            }

            void t_FieldShortPeriodTerms::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldShortPeriodTerms), "class_", make_descriptor(FieldShortPeriodTerms::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldShortPeriodTerms), "wrapfn_", make_descriptor(t_FieldShortPeriodTerms::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldShortPeriodTerms), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldShortPeriodTerms_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldShortPeriodTerms::initializeClass, 1)))
                return NULL;
              return t_FieldShortPeriodTerms::wrap_Object(FieldShortPeriodTerms(((t_FieldShortPeriodTerms *) arg)->object.this$));
            }
            static PyObject *t_FieldShortPeriodTerms_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldShortPeriodTerms::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldShortPeriodTerms_of_(t_FieldShortPeriodTerms *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_FieldShortPeriodTerms_getCoefficients(t_FieldShortPeriodTerms *self, PyObject *args)
            {
              ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::util::Set a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::util::Map result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::Set::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::java::util::t_Set::parameters_))
              {
                OBJ_CALL(result = self->object.getCoefficients(a0, a1));
                return ::java::util::t_Map::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getCoefficients", args);
              return NULL;
            }

            static PyObject *t_FieldShortPeriodTerms_getCoefficientsKeyPrefix(t_FieldShortPeriodTerms *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getCoefficientsKeyPrefix());
              return j2p(result);
            }

            static PyObject *t_FieldShortPeriodTerms_value(t_FieldShortPeriodTerms *self, PyObject *arg)
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArg(arg, "K", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }

              PyErr_SetArgsError((PyObject *) self, "value", arg);
              return NULL;
            }
            static PyObject *t_FieldShortPeriodTerms_get__parameters_(t_FieldShortPeriodTerms *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_FieldShortPeriodTerms_get__coefficientsKeyPrefix(t_FieldShortPeriodTerms *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getCoefficientsKeyPrefix());
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
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/AbstractAlfriend1999.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *AbstractAlfriend1999::class$ = NULL;
              jmethodID *AbstractAlfriend1999::mids$ = NULL;
              bool AbstractAlfriend1999::live$ = false;

              jclass AbstractAlfriend1999::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/AbstractAlfriend1999");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_compute_a73e6347f5238a63] = env->getMethodID(cls, "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_11689cd07cf55453] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractAlfriend1999::compute(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_a73e6347f5238a63], a0, a1, a2, a3, a4));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractAlfriend1999::compute(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_11689cd07cf55453], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
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
              static PyObject *t_AbstractAlfriend1999_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AbstractAlfriend1999_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AbstractAlfriend1999_compute(t_AbstractAlfriend1999 *self, PyObject *args);

              static PyMethodDef t_AbstractAlfriend1999__methods_[] = {
                DECLARE_METHOD(t_AbstractAlfriend1999, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AbstractAlfriend1999, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AbstractAlfriend1999, compute, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AbstractAlfriend1999)[] = {
                { Py_tp_methods, t_AbstractAlfriend1999__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AbstractAlfriend1999)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod),
                NULL
              };

              DEFINE_TYPE(AbstractAlfriend1999, t_AbstractAlfriend1999, AbstractAlfriend1999);

              void t_AbstractAlfriend1999::install(PyObject *module)
              {
                installType(&PY_TYPE(AbstractAlfriend1999), &PY_TYPE_DEF(AbstractAlfriend1999), module, "AbstractAlfriend1999", 0);
              }

              void t_AbstractAlfriend1999::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAlfriend1999), "class_", make_descriptor(AbstractAlfriend1999::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAlfriend1999), "wrapfn_", make_descriptor(t_AbstractAlfriend1999::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAlfriend1999), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AbstractAlfriend1999_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AbstractAlfriend1999::initializeClass, 1)))
                  return NULL;
                return t_AbstractAlfriend1999::wrap_Object(AbstractAlfriend1999(((t_AbstractAlfriend1999 *) arg)->object.this$));
              }
              static PyObject *t_AbstractAlfriend1999_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AbstractAlfriend1999::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AbstractAlfriend1999_compute(t_AbstractAlfriend1999 *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 5:
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
                }

                return callSuper(PY_TYPE(AbstractAlfriend1999), (PyObject *) self, "compute", args, 2);
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
#include "org/orekit/rugged/linesensor/SensorPixel.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {

        ::java::lang::Class *SensorPixel::class$ = NULL;
        jmethodID *SensorPixel::mids$ = NULL;
        bool SensorPixel::live$ = false;

        jclass SensorPixel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/linesensor/SensorPixel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_getLineNumber_b74f83833fdad017] = env->getMethodID(cls, "getLineNumber", "()D");
            mids$[mid_getPixelNumber_b74f83833fdad017] = env->getMethodID(cls, "getPixelNumber", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SensorPixel::SensorPixel(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

        jdouble SensorPixel::getLineNumber() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLineNumber_b74f83833fdad017]);
        }

        jdouble SensorPixel::getPixelNumber() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPixelNumber_b74f83833fdad017]);
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
        static PyObject *t_SensorPixel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SensorPixel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SensorPixel_init_(t_SensorPixel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SensorPixel_getLineNumber(t_SensorPixel *self);
        static PyObject *t_SensorPixel_getPixelNumber(t_SensorPixel *self);
        static PyObject *t_SensorPixel_get__lineNumber(t_SensorPixel *self, void *data);
        static PyObject *t_SensorPixel_get__pixelNumber(t_SensorPixel *self, void *data);
        static PyGetSetDef t_SensorPixel__fields_[] = {
          DECLARE_GET_FIELD(t_SensorPixel, lineNumber),
          DECLARE_GET_FIELD(t_SensorPixel, pixelNumber),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SensorPixel__methods_[] = {
          DECLARE_METHOD(t_SensorPixel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SensorPixel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SensorPixel, getLineNumber, METH_NOARGS),
          DECLARE_METHOD(t_SensorPixel, getPixelNumber, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SensorPixel)[] = {
          { Py_tp_methods, t_SensorPixel__methods_ },
          { Py_tp_init, (void *) t_SensorPixel_init_ },
          { Py_tp_getset, t_SensorPixel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SensorPixel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SensorPixel, t_SensorPixel, SensorPixel);

        void t_SensorPixel::install(PyObject *module)
        {
          installType(&PY_TYPE(SensorPixel), &PY_TYPE_DEF(SensorPixel), module, "SensorPixel", 0);
        }

        void t_SensorPixel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorPixel), "class_", make_descriptor(SensorPixel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorPixel), "wrapfn_", make_descriptor(t_SensorPixel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorPixel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SensorPixel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SensorPixel::initializeClass, 1)))
            return NULL;
          return t_SensorPixel::wrap_Object(SensorPixel(((t_SensorPixel *) arg)->object.this$));
        }
        static PyObject *t_SensorPixel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SensorPixel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SensorPixel_init_(t_SensorPixel *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          SensorPixel object((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            INT_CALL(object = SensorPixel(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SensorPixel_getLineNumber(t_SensorPixel *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLineNumber());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SensorPixel_getPixelNumber(t_SensorPixel *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPixelNumber());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SensorPixel_get__lineNumber(t_SensorPixel *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLineNumber());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SensorPixel_get__pixelNumber(t_SensorPixel *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPixelNumber());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/LogisticDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *LogisticDistribution::class$ = NULL;
        jmethodID *LogisticDistribution::mids$ = NULL;
        bool LogisticDistribution::live$ = false;

        jclass LogisticDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/LogisticDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_04fd0666b613d2ab] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_04fd0666b613d2ab] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getLocation_b74f83833fdad017] = env->getMethodID(cls, "getLocation", "()D");
            mids$[mid_getNumericalMean_b74f83833fdad017] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_b74f83833fdad017] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getScale_b74f83833fdad017] = env->getMethodID(cls, "getScale", "()D");
            mids$[mid_getSupportLowerBound_b74f83833fdad017] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_b74f83833fdad017] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_04fd0666b613d2ab] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_9ab94ac1dc23b105] = env->getMethodID(cls, "isSupportConnected", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LogisticDistribution::LogisticDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

        jdouble LogisticDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_04fd0666b613d2ab], a0);
        }

        jdouble LogisticDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_04fd0666b613d2ab], a0);
        }

        jdouble LogisticDistribution::getLocation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLocation_b74f83833fdad017]);
        }

        jdouble LogisticDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_b74f83833fdad017]);
        }

        jdouble LogisticDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_b74f83833fdad017]);
        }

        jdouble LogisticDistribution::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_b74f83833fdad017]);
        }

        jdouble LogisticDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_b74f83833fdad017]);
        }

        jdouble LogisticDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_b74f83833fdad017]);
        }

        jdouble LogisticDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_04fd0666b613d2ab], a0);
        }

        jboolean LogisticDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_9ab94ac1dc23b105]);
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
        static PyObject *t_LogisticDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LogisticDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LogisticDistribution_init_(t_LogisticDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LogisticDistribution_cumulativeProbability(t_LogisticDistribution *self, PyObject *args);
        static PyObject *t_LogisticDistribution_density(t_LogisticDistribution *self, PyObject *args);
        static PyObject *t_LogisticDistribution_getLocation(t_LogisticDistribution *self);
        static PyObject *t_LogisticDistribution_getNumericalMean(t_LogisticDistribution *self, PyObject *args);
        static PyObject *t_LogisticDistribution_getNumericalVariance(t_LogisticDistribution *self, PyObject *args);
        static PyObject *t_LogisticDistribution_getScale(t_LogisticDistribution *self);
        static PyObject *t_LogisticDistribution_getSupportLowerBound(t_LogisticDistribution *self, PyObject *args);
        static PyObject *t_LogisticDistribution_getSupportUpperBound(t_LogisticDistribution *self, PyObject *args);
        static PyObject *t_LogisticDistribution_inverseCumulativeProbability(t_LogisticDistribution *self, PyObject *args);
        static PyObject *t_LogisticDistribution_isSupportConnected(t_LogisticDistribution *self, PyObject *args);
        static PyObject *t_LogisticDistribution_get__location(t_LogisticDistribution *self, void *data);
        static PyObject *t_LogisticDistribution_get__numericalMean(t_LogisticDistribution *self, void *data);
        static PyObject *t_LogisticDistribution_get__numericalVariance(t_LogisticDistribution *self, void *data);
        static PyObject *t_LogisticDistribution_get__scale(t_LogisticDistribution *self, void *data);
        static PyObject *t_LogisticDistribution_get__supportConnected(t_LogisticDistribution *self, void *data);
        static PyObject *t_LogisticDistribution_get__supportLowerBound(t_LogisticDistribution *self, void *data);
        static PyObject *t_LogisticDistribution_get__supportUpperBound(t_LogisticDistribution *self, void *data);
        static PyGetSetDef t_LogisticDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_LogisticDistribution, location),
          DECLARE_GET_FIELD(t_LogisticDistribution, numericalMean),
          DECLARE_GET_FIELD(t_LogisticDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_LogisticDistribution, scale),
          DECLARE_GET_FIELD(t_LogisticDistribution, supportConnected),
          DECLARE_GET_FIELD(t_LogisticDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_LogisticDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LogisticDistribution__methods_[] = {
          DECLARE_METHOD(t_LogisticDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LogisticDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LogisticDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_LogisticDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_LogisticDistribution, getLocation, METH_NOARGS),
          DECLARE_METHOD(t_LogisticDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_LogisticDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_LogisticDistribution, getScale, METH_NOARGS),
          DECLARE_METHOD(t_LogisticDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_LogisticDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_LogisticDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_LogisticDistribution, isSupportConnected, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LogisticDistribution)[] = {
          { Py_tp_methods, t_LogisticDistribution__methods_ },
          { Py_tp_init, (void *) t_LogisticDistribution_init_ },
          { Py_tp_getset, t_LogisticDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LogisticDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(LogisticDistribution, t_LogisticDistribution, LogisticDistribution);

        void t_LogisticDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(LogisticDistribution), &PY_TYPE_DEF(LogisticDistribution), module, "LogisticDistribution", 0);
        }

        void t_LogisticDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LogisticDistribution), "class_", make_descriptor(LogisticDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LogisticDistribution), "wrapfn_", make_descriptor(t_LogisticDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LogisticDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LogisticDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LogisticDistribution::initializeClass, 1)))
            return NULL;
          return t_LogisticDistribution::wrap_Object(LogisticDistribution(((t_LogisticDistribution *) arg)->object.this$));
        }
        static PyObject *t_LogisticDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LogisticDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LogisticDistribution_init_(t_LogisticDistribution *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          LogisticDistribution object((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            INT_CALL(object = LogisticDistribution(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LogisticDistribution_cumulativeProbability(t_LogisticDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogisticDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_LogisticDistribution_density(t_LogisticDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogisticDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_LogisticDistribution_getLocation(t_LogisticDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLocation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LogisticDistribution_getNumericalMean(t_LogisticDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogisticDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_LogisticDistribution_getNumericalVariance(t_LogisticDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogisticDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_LogisticDistribution_getScale(t_LogisticDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LogisticDistribution_getSupportLowerBound(t_LogisticDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogisticDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_LogisticDistribution_getSupportUpperBound(t_LogisticDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogisticDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_LogisticDistribution_inverseCumulativeProbability(t_LogisticDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogisticDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_LogisticDistribution_isSupportConnected(t_LogisticDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(LogisticDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_LogisticDistribution_get__location(t_LogisticDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLocation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LogisticDistribution_get__numericalMean(t_LogisticDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LogisticDistribution_get__numericalVariance(t_LogisticDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LogisticDistribution_get__scale(t_LogisticDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LogisticDistribution_get__supportConnected(t_LogisticDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_LogisticDistribution_get__supportLowerBound(t_LogisticDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LogisticDistribution_get__supportUpperBound(t_LogisticDistribution *self, void *data)
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
#include "org/orekit/propagation/integration/FieldAdditionalDerivativesProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/integration/FieldCombinedDerivatives.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *FieldAdditionalDerivativesProvider::class$ = NULL;
        jmethodID *FieldAdditionalDerivativesProvider::mids$ = NULL;
        bool FieldAdditionalDerivativesProvider::live$ = false;

        jclass FieldAdditionalDerivativesProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/FieldAdditionalDerivativesProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_combinedDerivatives_65b59abf328f3f4b] = env->getMethodID(cls, "combinedDerivatives", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/integration/FieldCombinedDerivatives;");
            mids$[mid_getDimension_55546ef6a647f39b] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_init_96d019f392abf918] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_yields_e6d9e841ca2e035c] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::integration::FieldCombinedDerivatives FieldAdditionalDerivativesProvider::combinedDerivatives(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::orekit::propagation::integration::FieldCombinedDerivatives(env->callObjectMethod(this$, mids$[mid_combinedDerivatives_65b59abf328f3f4b], a0.this$));
        }

        jint FieldAdditionalDerivativesProvider::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_55546ef6a647f39b]);
        }

        ::java::lang::String FieldAdditionalDerivativesProvider::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
        }

        void FieldAdditionalDerivativesProvider::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_96d019f392abf918], a0.this$, a1.this$);
        }

        jboolean FieldAdditionalDerivativesProvider::yields(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_yields_e6d9e841ca2e035c], a0.this$);
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
      namespace integration {
        static PyObject *t_FieldAdditionalDerivativesProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAdditionalDerivativesProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAdditionalDerivativesProvider_of_(t_FieldAdditionalDerivativesProvider *self, PyObject *args);
        static PyObject *t_FieldAdditionalDerivativesProvider_combinedDerivatives(t_FieldAdditionalDerivativesProvider *self, PyObject *arg);
        static PyObject *t_FieldAdditionalDerivativesProvider_getDimension(t_FieldAdditionalDerivativesProvider *self);
        static PyObject *t_FieldAdditionalDerivativesProvider_getName(t_FieldAdditionalDerivativesProvider *self);
        static PyObject *t_FieldAdditionalDerivativesProvider_init(t_FieldAdditionalDerivativesProvider *self, PyObject *args);
        static PyObject *t_FieldAdditionalDerivativesProvider_yields(t_FieldAdditionalDerivativesProvider *self, PyObject *arg);
        static PyObject *t_FieldAdditionalDerivativesProvider_get__dimension(t_FieldAdditionalDerivativesProvider *self, void *data);
        static PyObject *t_FieldAdditionalDerivativesProvider_get__name(t_FieldAdditionalDerivativesProvider *self, void *data);
        static PyObject *t_FieldAdditionalDerivativesProvider_get__parameters_(t_FieldAdditionalDerivativesProvider *self, void *data);
        static PyGetSetDef t_FieldAdditionalDerivativesProvider__fields_[] = {
          DECLARE_GET_FIELD(t_FieldAdditionalDerivativesProvider, dimension),
          DECLARE_GET_FIELD(t_FieldAdditionalDerivativesProvider, name),
          DECLARE_GET_FIELD(t_FieldAdditionalDerivativesProvider, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldAdditionalDerivativesProvider__methods_[] = {
          DECLARE_METHOD(t_FieldAdditionalDerivativesProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAdditionalDerivativesProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAdditionalDerivativesProvider, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldAdditionalDerivativesProvider, combinedDerivatives, METH_O),
          DECLARE_METHOD(t_FieldAdditionalDerivativesProvider, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_FieldAdditionalDerivativesProvider, getName, METH_NOARGS),
          DECLARE_METHOD(t_FieldAdditionalDerivativesProvider, init, METH_VARARGS),
          DECLARE_METHOD(t_FieldAdditionalDerivativesProvider, yields, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldAdditionalDerivativesProvider)[] = {
          { Py_tp_methods, t_FieldAdditionalDerivativesProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldAdditionalDerivativesProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldAdditionalDerivativesProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldAdditionalDerivativesProvider, t_FieldAdditionalDerivativesProvider, FieldAdditionalDerivativesProvider);
        PyObject *t_FieldAdditionalDerivativesProvider::wrap_Object(const FieldAdditionalDerivativesProvider& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAdditionalDerivativesProvider::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAdditionalDerivativesProvider *self = (t_FieldAdditionalDerivativesProvider *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldAdditionalDerivativesProvider::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAdditionalDerivativesProvider::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAdditionalDerivativesProvider *self = (t_FieldAdditionalDerivativesProvider *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldAdditionalDerivativesProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldAdditionalDerivativesProvider), &PY_TYPE_DEF(FieldAdditionalDerivativesProvider), module, "FieldAdditionalDerivativesProvider", 0);
        }

        void t_FieldAdditionalDerivativesProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdditionalDerivativesProvider), "class_", make_descriptor(FieldAdditionalDerivativesProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdditionalDerivativesProvider), "wrapfn_", make_descriptor(t_FieldAdditionalDerivativesProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdditionalDerivativesProvider), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldAdditionalDerivativesProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldAdditionalDerivativesProvider::initializeClass, 1)))
            return NULL;
          return t_FieldAdditionalDerivativesProvider::wrap_Object(FieldAdditionalDerivativesProvider(((t_FieldAdditionalDerivativesProvider *) arg)->object.this$));
        }
        static PyObject *t_FieldAdditionalDerivativesProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldAdditionalDerivativesProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldAdditionalDerivativesProvider_of_(t_FieldAdditionalDerivativesProvider *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldAdditionalDerivativesProvider_combinedDerivatives(t_FieldAdditionalDerivativesProvider *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::integration::FieldCombinedDerivatives result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.combinedDerivatives(a0));
            return ::org::orekit::propagation::integration::t_FieldCombinedDerivatives::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "combinedDerivatives", arg);
          return NULL;
        }

        static PyObject *t_FieldAdditionalDerivativesProvider_getDimension(t_FieldAdditionalDerivativesProvider *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldAdditionalDerivativesProvider_getName(t_FieldAdditionalDerivativesProvider *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_FieldAdditionalDerivativesProvider_init(t_FieldAdditionalDerivativesProvider *self, PyObject *args)
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

        static PyObject *t_FieldAdditionalDerivativesProvider_yields(t_FieldAdditionalDerivativesProvider *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.yields(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "yields", arg);
          return NULL;
        }
        static PyObject *t_FieldAdditionalDerivativesProvider_get__parameters_(t_FieldAdditionalDerivativesProvider *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldAdditionalDerivativesProvider_get__dimension(t_FieldAdditionalDerivativesProvider *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldAdditionalDerivativesProvider_get__name(t_FieldAdditionalDerivativesProvider *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/discrete/EnumeratedIntegerDistribution.h"
#include "org/hipparchus/util/Pair.h"
#include "java/util/List.h"
#include "java/lang/Integer.h"
#include "java/lang/Double.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        ::java::lang::Class *EnumeratedIntegerDistribution::class$ = NULL;
        jmethodID *EnumeratedIntegerDistribution::mids$ = NULL;
        bool EnumeratedIntegerDistribution::live$ = false;

        jclass EnumeratedIntegerDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/discrete/EnumeratedIntegerDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_86a2769cb881d388] = env->getMethodID(cls, "<init>", "([I)V");
            mids$[mid_init$_37d92a29080bb9ce] = env->getMethodID(cls, "<init>", "([I[D)V");
            mids$[mid_cumulativeProbability_2afcbc21f4e57ab2] = env->getMethodID(cls, "cumulativeProbability", "(I)D");
            mids$[mid_getNumericalMean_b74f83833fdad017] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_b74f83833fdad017] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getPmf_e62d3bb06d56d7e3] = env->getMethodID(cls, "getPmf", "()Ljava/util/List;");
            mids$[mid_getSupportLowerBound_55546ef6a647f39b] = env->getMethodID(cls, "getSupportLowerBound", "()I");
            mids$[mid_getSupportUpperBound_55546ef6a647f39b] = env->getMethodID(cls, "getSupportUpperBound", "()I");
            mids$[mid_isSupportConnected_9ab94ac1dc23b105] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_probability_2afcbc21f4e57ab2] = env->getMethodID(cls, "probability", "(I)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EnumeratedIntegerDistribution::EnumeratedIntegerDistribution(const JArray< jint > & a0) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_86a2769cb881d388, a0.this$)) {}

        EnumeratedIntegerDistribution::EnumeratedIntegerDistribution(const JArray< jint > & a0, const JArray< jdouble > & a1) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_37d92a29080bb9ce, a0.this$, a1.this$)) {}

        jdouble EnumeratedIntegerDistribution::cumulativeProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_2afcbc21f4e57ab2], a0);
        }

        jdouble EnumeratedIntegerDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_b74f83833fdad017]);
        }

        jdouble EnumeratedIntegerDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_b74f83833fdad017]);
        }

        ::java::util::List EnumeratedIntegerDistribution::getPmf() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getPmf_e62d3bb06d56d7e3]));
        }

        jint EnumeratedIntegerDistribution::getSupportLowerBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportLowerBound_55546ef6a647f39b]);
        }

        jint EnumeratedIntegerDistribution::getSupportUpperBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportUpperBound_55546ef6a647f39b]);
        }

        jboolean EnumeratedIntegerDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_9ab94ac1dc23b105]);
        }

        jdouble EnumeratedIntegerDistribution::probability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_2afcbc21f4e57ab2], a0);
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
        static PyObject *t_EnumeratedIntegerDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EnumeratedIntegerDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EnumeratedIntegerDistribution_init_(t_EnumeratedIntegerDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EnumeratedIntegerDistribution_cumulativeProbability(t_EnumeratedIntegerDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedIntegerDistribution_getNumericalMean(t_EnumeratedIntegerDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedIntegerDistribution_getNumericalVariance(t_EnumeratedIntegerDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedIntegerDistribution_getPmf(t_EnumeratedIntegerDistribution *self);
        static PyObject *t_EnumeratedIntegerDistribution_getSupportLowerBound(t_EnumeratedIntegerDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedIntegerDistribution_getSupportUpperBound(t_EnumeratedIntegerDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedIntegerDistribution_isSupportConnected(t_EnumeratedIntegerDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedIntegerDistribution_probability(t_EnumeratedIntegerDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedIntegerDistribution_get__numericalMean(t_EnumeratedIntegerDistribution *self, void *data);
        static PyObject *t_EnumeratedIntegerDistribution_get__numericalVariance(t_EnumeratedIntegerDistribution *self, void *data);
        static PyObject *t_EnumeratedIntegerDistribution_get__pmf(t_EnumeratedIntegerDistribution *self, void *data);
        static PyObject *t_EnumeratedIntegerDistribution_get__supportConnected(t_EnumeratedIntegerDistribution *self, void *data);
        static PyObject *t_EnumeratedIntegerDistribution_get__supportLowerBound(t_EnumeratedIntegerDistribution *self, void *data);
        static PyObject *t_EnumeratedIntegerDistribution_get__supportUpperBound(t_EnumeratedIntegerDistribution *self, void *data);
        static PyGetSetDef t_EnumeratedIntegerDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_EnumeratedIntegerDistribution, numericalMean),
          DECLARE_GET_FIELD(t_EnumeratedIntegerDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_EnumeratedIntegerDistribution, pmf),
          DECLARE_GET_FIELD(t_EnumeratedIntegerDistribution, supportConnected),
          DECLARE_GET_FIELD(t_EnumeratedIntegerDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_EnumeratedIntegerDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EnumeratedIntegerDistribution__methods_[] = {
          DECLARE_METHOD(t_EnumeratedIntegerDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EnumeratedIntegerDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EnumeratedIntegerDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedIntegerDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedIntegerDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedIntegerDistribution, getPmf, METH_NOARGS),
          DECLARE_METHOD(t_EnumeratedIntegerDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedIntegerDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedIntegerDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedIntegerDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EnumeratedIntegerDistribution)[] = {
          { Py_tp_methods, t_EnumeratedIntegerDistribution__methods_ },
          { Py_tp_init, (void *) t_EnumeratedIntegerDistribution_init_ },
          { Py_tp_getset, t_EnumeratedIntegerDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EnumeratedIntegerDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::discrete::AbstractIntegerDistribution),
          NULL
        };

        DEFINE_TYPE(EnumeratedIntegerDistribution, t_EnumeratedIntegerDistribution, EnumeratedIntegerDistribution);

        void t_EnumeratedIntegerDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(EnumeratedIntegerDistribution), &PY_TYPE_DEF(EnumeratedIntegerDistribution), module, "EnumeratedIntegerDistribution", 0);
        }

        void t_EnumeratedIntegerDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnumeratedIntegerDistribution), "class_", make_descriptor(EnumeratedIntegerDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnumeratedIntegerDistribution), "wrapfn_", make_descriptor(t_EnumeratedIntegerDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnumeratedIntegerDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EnumeratedIntegerDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EnumeratedIntegerDistribution::initializeClass, 1)))
            return NULL;
          return t_EnumeratedIntegerDistribution::wrap_Object(EnumeratedIntegerDistribution(((t_EnumeratedIntegerDistribution *) arg)->object.this$));
        }
        static PyObject *t_EnumeratedIntegerDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EnumeratedIntegerDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EnumeratedIntegerDistribution_init_(t_EnumeratedIntegerDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jint > a0((jobject) NULL);
              EnumeratedIntegerDistribution object((jobject) NULL);

              if (!parseArgs(args, "[I", &a0))
              {
                INT_CALL(object = EnumeratedIntegerDistribution(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              JArray< jint > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              EnumeratedIntegerDistribution object((jobject) NULL);

              if (!parseArgs(args, "[I[D", &a0, &a1))
              {
                INT_CALL(object = EnumeratedIntegerDistribution(a0, a1));
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

        static PyObject *t_EnumeratedIntegerDistribution_cumulativeProbability(t_EnumeratedIntegerDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedIntegerDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_EnumeratedIntegerDistribution_getNumericalMean(t_EnumeratedIntegerDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedIntegerDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_EnumeratedIntegerDistribution_getNumericalVariance(t_EnumeratedIntegerDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedIntegerDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_EnumeratedIntegerDistribution_getPmf(t_EnumeratedIntegerDistribution *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getPmf());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_EnumeratedIntegerDistribution_getSupportLowerBound(t_EnumeratedIntegerDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(EnumeratedIntegerDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_EnumeratedIntegerDistribution_getSupportUpperBound(t_EnumeratedIntegerDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(EnumeratedIntegerDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_EnumeratedIntegerDistribution_isSupportConnected(t_EnumeratedIntegerDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(EnumeratedIntegerDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_EnumeratedIntegerDistribution_probability(t_EnumeratedIntegerDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.probability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedIntegerDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_EnumeratedIntegerDistribution_get__numericalMean(t_EnumeratedIntegerDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EnumeratedIntegerDistribution_get__numericalVariance(t_EnumeratedIntegerDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EnumeratedIntegerDistribution_get__pmf(t_EnumeratedIntegerDistribution *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getPmf());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_EnumeratedIntegerDistribution_get__supportConnected(t_EnumeratedIntegerDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_EnumeratedIntegerDistribution_get__supportLowerBound(t_EnumeratedIntegerDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_EnumeratedIntegerDistribution_get__supportUpperBound(t_EnumeratedIntegerDistribution *self, void *data)
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
#include "java/util/Locale.h"
#include "java/util/Locale.h"
#include "java/util/List.h"
#include "java/io/Serializable.h"
#include "java/util/Collection.h"
#include "java/util/Locale$FilteringMode.h"
#include "java/util/Locale$Category.h"
#include "java/lang/Character.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/util/Locale$IsoCountryCode.h"
#include "java/util/Locale$LanguageRange.h"
#include "java/lang/Cloneable.h"
#include "java/lang/String.h"
#include "java/util/MissingResourceException.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Locale::class$ = NULL;
    jmethodID *Locale::mids$ = NULL;
    bool Locale::live$ = false;
    Locale *Locale::CANADA = NULL;
    Locale *Locale::CANADA_FRENCH = NULL;
    Locale *Locale::CHINA = NULL;
    Locale *Locale::CHINESE = NULL;
    Locale *Locale::ENGLISH = NULL;
    Locale *Locale::FRANCE = NULL;
    Locale *Locale::FRENCH = NULL;
    Locale *Locale::GERMAN = NULL;
    Locale *Locale::GERMANY = NULL;
    Locale *Locale::ITALIAN = NULL;
    Locale *Locale::ITALY = NULL;
    Locale *Locale::JAPAN = NULL;
    Locale *Locale::JAPANESE = NULL;
    Locale *Locale::KOREA = NULL;
    Locale *Locale::KOREAN = NULL;
    Locale *Locale::PRC = NULL;
    jchar Locale::PRIVATE_USE_EXTENSION = (jchar) 0;
    Locale *Locale::ROOT = NULL;
    Locale *Locale::SIMPLIFIED_CHINESE = NULL;
    Locale *Locale::TAIWAN = NULL;
    Locale *Locale::TRADITIONAL_CHINESE = NULL;
    Locale *Locale::UK = NULL;
    jchar Locale::UNICODE_LOCALE_EXTENSION = (jchar) 0;
    Locale *Locale::US = NULL;

    jclass Locale::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Locale");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_a627ad9c5959309d] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
        mids$[mid_init$_ee9345b4af8c40df] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
        mids$[mid_clone_541690f9ee81d3ad] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_filter_1915ec30f0862566] = env->getStaticMethodID(cls, "filter", "(Ljava/util/List;Ljava/util/Collection;)Ljava/util/List;");
        mids$[mid_filter_3b3f98365f51562d] = env->getStaticMethodID(cls, "filter", "(Ljava/util/List;Ljava/util/Collection;Ljava/util/Locale$FilteringMode;)Ljava/util/List;");
        mids$[mid_filterTags_1915ec30f0862566] = env->getStaticMethodID(cls, "filterTags", "(Ljava/util/List;Ljava/util/Collection;)Ljava/util/List;");
        mids$[mid_filterTags_3b3f98365f51562d] = env->getStaticMethodID(cls, "filterTags", "(Ljava/util/List;Ljava/util/Collection;Ljava/util/Locale$FilteringMode;)Ljava/util/List;");
        mids$[mid_forLanguageTag_33ee00791c8367dc] = env->getStaticMethodID(cls, "forLanguageTag", "(Ljava/lang/String;)Ljava/util/Locale;");
        mids$[mid_getAvailableLocales_8d2cd0b971cc7b85] = env->getStaticMethodID(cls, "getAvailableLocales", "()[Ljava/util/Locale;");
        mids$[mid_getCountry_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getCountry", "()Ljava/lang/String;");
        mids$[mid_getDefault_179409cdd40bde08] = env->getStaticMethodID(cls, "getDefault", "()Ljava/util/Locale;");
        mids$[mid_getDefault_4e0b35e2ea6f264f] = env->getStaticMethodID(cls, "getDefault", "(Ljava/util/Locale$Category;)Ljava/util/Locale;");
        mids$[mid_getDisplayCountry_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getDisplayCountry", "()Ljava/lang/String;");
        mids$[mid_getDisplayCountry_26070c28e6ea354d] = env->getMethodID(cls, "getDisplayCountry", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_getDisplayLanguage_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getDisplayLanguage", "()Ljava/lang/String;");
        mids$[mid_getDisplayLanguage_26070c28e6ea354d] = env->getMethodID(cls, "getDisplayLanguage", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_getDisplayName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getDisplayName", "()Ljava/lang/String;");
        mids$[mid_getDisplayName_26070c28e6ea354d] = env->getMethodID(cls, "getDisplayName", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_getDisplayScript_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getDisplayScript", "()Ljava/lang/String;");
        mids$[mid_getDisplayScript_26070c28e6ea354d] = env->getMethodID(cls, "getDisplayScript", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_getDisplayVariant_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getDisplayVariant", "()Ljava/lang/String;");
        mids$[mid_getDisplayVariant_26070c28e6ea354d] = env->getMethodID(cls, "getDisplayVariant", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_getExtension_935421dbce990c9c] = env->getMethodID(cls, "getExtension", "(C)Ljava/lang/String;");
        mids$[mid_getExtensionKeys_7e8f11dd23d1142c] = env->getMethodID(cls, "getExtensionKeys", "()Ljava/util/Set;");
        mids$[mid_getISO3Country_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getISO3Country", "()Ljava/lang/String;");
        mids$[mid_getISO3Language_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getISO3Language", "()Ljava/lang/String;");
        mids$[mid_getISOCountries_0f94e41879ab7062] = env->getStaticMethodID(cls, "getISOCountries", "()[Ljava/lang/String;");
        mids$[mid_getISOCountries_44bdd6d01a477236] = env->getStaticMethodID(cls, "getISOCountries", "(Ljava/util/Locale$IsoCountryCode;)Ljava/util/Set;");
        mids$[mid_getISOLanguages_0f94e41879ab7062] = env->getStaticMethodID(cls, "getISOLanguages", "()[Ljava/lang/String;");
        mids$[mid_getLanguage_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getLanguage", "()Ljava/lang/String;");
        mids$[mid_getScript_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getScript", "()Ljava/lang/String;");
        mids$[mid_getUnicodeLocaleAttributes_7e8f11dd23d1142c] = env->getMethodID(cls, "getUnicodeLocaleAttributes", "()Ljava/util/Set;");
        mids$[mid_getUnicodeLocaleKeys_7e8f11dd23d1142c] = env->getMethodID(cls, "getUnicodeLocaleKeys", "()Ljava/util/Set;");
        mids$[mid_getUnicodeLocaleType_6f0f3576df9f75ee] = env->getMethodID(cls, "getUnicodeLocaleType", "(Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_getVariant_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getVariant", "()Ljava/lang/String;");
        mids$[mid_hasExtensions_9ab94ac1dc23b105] = env->getMethodID(cls, "hasExtensions", "()Z");
        mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_lookup_67d6e04b0528b226] = env->getStaticMethodID(cls, "lookup", "(Ljava/util/List;Ljava/util/Collection;)Ljava/util/Locale;");
        mids$[mid_lookupTag_9ebbf9f7118c2a86] = env->getStaticMethodID(cls, "lookupTag", "(Ljava/util/List;Ljava/util/Collection;)Ljava/lang/String;");
        mids$[mid_setDefault_ae952945a283d1a5] = env->getStaticMethodID(cls, "setDefault", "(Ljava/util/Locale;)V");
        mids$[mid_setDefault_3dc719733eff2849] = env->getStaticMethodID(cls, "setDefault", "(Ljava/util/Locale$Category;Ljava/util/Locale;)V");
        mids$[mid_stripExtensions_179409cdd40bde08] = env->getMethodID(cls, "stripExtensions", "()Ljava/util/Locale;");
        mids$[mid_toLanguageTag_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toLanguageTag", "()Ljava/lang/String;");
        mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        CANADA = new Locale(env->getStaticObjectField(cls, "CANADA", "Ljava/util/Locale;"));
        CANADA_FRENCH = new Locale(env->getStaticObjectField(cls, "CANADA_FRENCH", "Ljava/util/Locale;"));
        CHINA = new Locale(env->getStaticObjectField(cls, "CHINA", "Ljava/util/Locale;"));
        CHINESE = new Locale(env->getStaticObjectField(cls, "CHINESE", "Ljava/util/Locale;"));
        ENGLISH = new Locale(env->getStaticObjectField(cls, "ENGLISH", "Ljava/util/Locale;"));
        FRANCE = new Locale(env->getStaticObjectField(cls, "FRANCE", "Ljava/util/Locale;"));
        FRENCH = new Locale(env->getStaticObjectField(cls, "FRENCH", "Ljava/util/Locale;"));
        GERMAN = new Locale(env->getStaticObjectField(cls, "GERMAN", "Ljava/util/Locale;"));
        GERMANY = new Locale(env->getStaticObjectField(cls, "GERMANY", "Ljava/util/Locale;"));
        ITALIAN = new Locale(env->getStaticObjectField(cls, "ITALIAN", "Ljava/util/Locale;"));
        ITALY = new Locale(env->getStaticObjectField(cls, "ITALY", "Ljava/util/Locale;"));
        JAPAN = new Locale(env->getStaticObjectField(cls, "JAPAN", "Ljava/util/Locale;"));
        JAPANESE = new Locale(env->getStaticObjectField(cls, "JAPANESE", "Ljava/util/Locale;"));
        KOREA = new Locale(env->getStaticObjectField(cls, "KOREA", "Ljava/util/Locale;"));
        KOREAN = new Locale(env->getStaticObjectField(cls, "KOREAN", "Ljava/util/Locale;"));
        PRC = new Locale(env->getStaticObjectField(cls, "PRC", "Ljava/util/Locale;"));
        PRIVATE_USE_EXTENSION = env->getStaticCharField(cls, "PRIVATE_USE_EXTENSION");
        ROOT = new Locale(env->getStaticObjectField(cls, "ROOT", "Ljava/util/Locale;"));
        SIMPLIFIED_CHINESE = new Locale(env->getStaticObjectField(cls, "SIMPLIFIED_CHINESE", "Ljava/util/Locale;"));
        TAIWAN = new Locale(env->getStaticObjectField(cls, "TAIWAN", "Ljava/util/Locale;"));
        TRADITIONAL_CHINESE = new Locale(env->getStaticObjectField(cls, "TRADITIONAL_CHINESE", "Ljava/util/Locale;"));
        UK = new Locale(env->getStaticObjectField(cls, "UK", "Ljava/util/Locale;"));
        UNICODE_LOCALE_EXTENSION = env->getStaticCharField(cls, "UNICODE_LOCALE_EXTENSION");
        US = new Locale(env->getStaticObjectField(cls, "US", "Ljava/util/Locale;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Locale::Locale(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

    Locale::Locale(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a627ad9c5959309d, a0.this$, a1.this$)) {}

    Locale::Locale(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ee9345b4af8c40df, a0.this$, a1.this$, a2.this$)) {}

    ::java::lang::Object Locale::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_541690f9ee81d3ad]));
    }

    jboolean Locale::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
    }

    ::java::util::List Locale::filter(const ::java::util::List & a0, const ::java::util::Collection & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_filter_1915ec30f0862566], a0.this$, a1.this$));
    }

    ::java::util::List Locale::filter(const ::java::util::List & a0, const ::java::util::Collection & a1, const ::java::util::Locale$FilteringMode & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_filter_3b3f98365f51562d], a0.this$, a1.this$, a2.this$));
    }

    ::java::util::List Locale::filterTags(const ::java::util::List & a0, const ::java::util::Collection & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_filterTags_1915ec30f0862566], a0.this$, a1.this$));
    }

    ::java::util::List Locale::filterTags(const ::java::util::List & a0, const ::java::util::Collection & a1, const ::java::util::Locale$FilteringMode & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_filterTags_3b3f98365f51562d], a0.this$, a1.this$, a2.this$));
    }

    Locale Locale::forLanguageTag(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Locale(env->callStaticObjectMethod(cls, mids$[mid_forLanguageTag_33ee00791c8367dc], a0.this$));
    }

    JArray< Locale > Locale::getAvailableLocales()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< Locale >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableLocales_8d2cd0b971cc7b85]));
    }

    ::java::lang::String Locale::getCountry() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCountry_1c1fa1e935d6cdcf]));
    }

    Locale Locale::getDefault()
    {
      jclass cls = env->getClass(initializeClass);
      return Locale(env->callStaticObjectMethod(cls, mids$[mid_getDefault_179409cdd40bde08]));
    }

    Locale Locale::getDefault(const ::java::util::Locale$Category & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Locale(env->callStaticObjectMethod(cls, mids$[mid_getDefault_4e0b35e2ea6f264f], a0.this$));
    }

    ::java::lang::String Locale::getDisplayCountry() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayCountry_1c1fa1e935d6cdcf]));
    }

    ::java::lang::String Locale::getDisplayCountry(const Locale & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayCountry_26070c28e6ea354d], a0.this$));
    }

    ::java::lang::String Locale::getDisplayLanguage() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayLanguage_1c1fa1e935d6cdcf]));
    }

    ::java::lang::String Locale::getDisplayLanguage(const Locale & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayLanguage_26070c28e6ea354d], a0.this$));
    }

    ::java::lang::String Locale::getDisplayName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayName_1c1fa1e935d6cdcf]));
    }

    ::java::lang::String Locale::getDisplayName(const Locale & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayName_26070c28e6ea354d], a0.this$));
    }

    ::java::lang::String Locale::getDisplayScript() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayScript_1c1fa1e935d6cdcf]));
    }

    ::java::lang::String Locale::getDisplayScript(const Locale & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayScript_26070c28e6ea354d], a0.this$));
    }

    ::java::lang::String Locale::getDisplayVariant() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayVariant_1c1fa1e935d6cdcf]));
    }

    ::java::lang::String Locale::getDisplayVariant(const Locale & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayVariant_26070c28e6ea354d], a0.this$));
    }

    ::java::lang::String Locale::getExtension(jchar a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getExtension_935421dbce990c9c], a0));
    }

    ::java::util::Set Locale::getExtensionKeys() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getExtensionKeys_7e8f11dd23d1142c]));
    }

    ::java::lang::String Locale::getISO3Country() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getISO3Country_1c1fa1e935d6cdcf]));
    }

    ::java::lang::String Locale::getISO3Language() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getISO3Language_1c1fa1e935d6cdcf]));
    }

    JArray< ::java::lang::String > Locale::getISOCountries()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::lang::String >(env->callStaticObjectMethod(cls, mids$[mid_getISOCountries_0f94e41879ab7062]));
    }

    ::java::util::Set Locale::getISOCountries(const ::java::util::Locale$IsoCountryCode & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Set(env->callStaticObjectMethod(cls, mids$[mid_getISOCountries_44bdd6d01a477236], a0.this$));
    }

    JArray< ::java::lang::String > Locale::getISOLanguages()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::lang::String >(env->callStaticObjectMethod(cls, mids$[mid_getISOLanguages_0f94e41879ab7062]));
    }

    ::java::lang::String Locale::getLanguage() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLanguage_1c1fa1e935d6cdcf]));
    }

    ::java::lang::String Locale::getScript() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getScript_1c1fa1e935d6cdcf]));
    }

    ::java::util::Set Locale::getUnicodeLocaleAttributes() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getUnicodeLocaleAttributes_7e8f11dd23d1142c]));
    }

    ::java::util::Set Locale::getUnicodeLocaleKeys() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getUnicodeLocaleKeys_7e8f11dd23d1142c]));
    }

    ::java::lang::String Locale::getUnicodeLocaleType(const ::java::lang::String & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getUnicodeLocaleType_6f0f3576df9f75ee], a0.this$));
    }

    ::java::lang::String Locale::getVariant() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getVariant_1c1fa1e935d6cdcf]));
    }

    jboolean Locale::hasExtensions() const
    {
      return env->callBooleanMethod(this$, mids$[mid_hasExtensions_9ab94ac1dc23b105]);
    }

    jint Locale::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
    }

    Locale Locale::lookup(const ::java::util::List & a0, const ::java::util::Collection & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Locale(env->callStaticObjectMethod(cls, mids$[mid_lookup_67d6e04b0528b226], a0.this$, a1.this$));
    }

    ::java::lang::String Locale::lookupTag(const ::java::util::List & a0, const ::java::util::Collection & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_lookupTag_9ebbf9f7118c2a86], a0.this$, a1.this$));
    }

    void Locale::setDefault(const Locale & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_setDefault_ae952945a283d1a5], a0.this$);
    }

    void Locale::setDefault(const ::java::util::Locale$Category & a0, const Locale & a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_setDefault_3dc719733eff2849], a0.this$, a1.this$);
    }

    Locale Locale::stripExtensions() const
    {
      return Locale(env->callObjectMethod(this$, mids$[mid_stripExtensions_179409cdd40bde08]));
    }

    ::java::lang::String Locale::toLanguageTag() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toLanguageTag_1c1fa1e935d6cdcf]));
    }

    ::java::lang::String Locale::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Locale_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Locale_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Locale_init_(t_Locale *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Locale_clone(t_Locale *self);
    static PyObject *t_Locale_equals(t_Locale *self, PyObject *args);
    static PyObject *t_Locale_filter(PyTypeObject *type, PyObject *args);
    static PyObject *t_Locale_filterTags(PyTypeObject *type, PyObject *args);
    static PyObject *t_Locale_forLanguageTag(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Locale_getAvailableLocales(PyTypeObject *type);
    static PyObject *t_Locale_getCountry(t_Locale *self);
    static PyObject *t_Locale_getDefault(PyTypeObject *type, PyObject *args);
    static PyObject *t_Locale_getDisplayCountry(t_Locale *self, PyObject *args);
    static PyObject *t_Locale_getDisplayLanguage(t_Locale *self, PyObject *args);
    static PyObject *t_Locale_getDisplayName(t_Locale *self, PyObject *args);
    static PyObject *t_Locale_getDisplayScript(t_Locale *self, PyObject *args);
    static PyObject *t_Locale_getDisplayVariant(t_Locale *self, PyObject *args);
    static PyObject *t_Locale_getExtension(t_Locale *self, PyObject *arg);
    static PyObject *t_Locale_getExtensionKeys(t_Locale *self);
    static PyObject *t_Locale_getISO3Country(t_Locale *self);
    static PyObject *t_Locale_getISO3Language(t_Locale *self);
    static PyObject *t_Locale_getISOCountries(PyTypeObject *type, PyObject *args);
    static PyObject *t_Locale_getISOLanguages(PyTypeObject *type);
    static PyObject *t_Locale_getLanguage(t_Locale *self);
    static PyObject *t_Locale_getScript(t_Locale *self);
    static PyObject *t_Locale_getUnicodeLocaleAttributes(t_Locale *self);
    static PyObject *t_Locale_getUnicodeLocaleKeys(t_Locale *self);
    static PyObject *t_Locale_getUnicodeLocaleType(t_Locale *self, PyObject *arg);
    static PyObject *t_Locale_getVariant(t_Locale *self);
    static PyObject *t_Locale_hasExtensions(t_Locale *self);
    static PyObject *t_Locale_hashCode(t_Locale *self, PyObject *args);
    static PyObject *t_Locale_lookup(PyTypeObject *type, PyObject *args);
    static PyObject *t_Locale_lookupTag(PyTypeObject *type, PyObject *args);
    static PyObject *t_Locale_setDefault(PyTypeObject *type, PyObject *args);
    static PyObject *t_Locale_stripExtensions(t_Locale *self);
    static PyObject *t_Locale_toLanguageTag(t_Locale *self);
    static PyObject *t_Locale_toString(t_Locale *self, PyObject *args);
    static PyObject *t_Locale_get__availableLocales(t_Locale *self, void *data);
    static PyObject *t_Locale_get__country(t_Locale *self, void *data);
    static PyObject *t_Locale_get__default(t_Locale *self, void *data);
    static int t_Locale_set__default(t_Locale *self, PyObject *arg, void *data);
    static PyObject *t_Locale_get__displayCountry(t_Locale *self, void *data);
    static PyObject *t_Locale_get__displayLanguage(t_Locale *self, void *data);
    static PyObject *t_Locale_get__displayName(t_Locale *self, void *data);
    static PyObject *t_Locale_get__displayScript(t_Locale *self, void *data);
    static PyObject *t_Locale_get__displayVariant(t_Locale *self, void *data);
    static PyObject *t_Locale_get__extensionKeys(t_Locale *self, void *data);
    static PyObject *t_Locale_get__iSO3Country(t_Locale *self, void *data);
    static PyObject *t_Locale_get__iSO3Language(t_Locale *self, void *data);
    static PyObject *t_Locale_get__iSOCountries(t_Locale *self, void *data);
    static PyObject *t_Locale_get__iSOLanguages(t_Locale *self, void *data);
    static PyObject *t_Locale_get__language(t_Locale *self, void *data);
    static PyObject *t_Locale_get__script(t_Locale *self, void *data);
    static PyObject *t_Locale_get__unicodeLocaleAttributes(t_Locale *self, void *data);
    static PyObject *t_Locale_get__unicodeLocaleKeys(t_Locale *self, void *data);
    static PyObject *t_Locale_get__variant(t_Locale *self, void *data);
    static PyGetSetDef t_Locale__fields_[] = {
      DECLARE_GET_FIELD(t_Locale, availableLocales),
      DECLARE_GET_FIELD(t_Locale, country),
      DECLARE_GETSET_FIELD(t_Locale, default),
      DECLARE_GET_FIELD(t_Locale, displayCountry),
      DECLARE_GET_FIELD(t_Locale, displayLanguage),
      DECLARE_GET_FIELD(t_Locale, displayName),
      DECLARE_GET_FIELD(t_Locale, displayScript),
      DECLARE_GET_FIELD(t_Locale, displayVariant),
      DECLARE_GET_FIELD(t_Locale, extensionKeys),
      DECLARE_GET_FIELD(t_Locale, iSO3Country),
      DECLARE_GET_FIELD(t_Locale, iSO3Language),
      DECLARE_GET_FIELD(t_Locale, iSOCountries),
      DECLARE_GET_FIELD(t_Locale, iSOLanguages),
      DECLARE_GET_FIELD(t_Locale, language),
      DECLARE_GET_FIELD(t_Locale, script),
      DECLARE_GET_FIELD(t_Locale, unicodeLocaleAttributes),
      DECLARE_GET_FIELD(t_Locale, unicodeLocaleKeys),
      DECLARE_GET_FIELD(t_Locale, variant),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Locale__methods_[] = {
      DECLARE_METHOD(t_Locale, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Locale, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Locale, clone, METH_NOARGS),
      DECLARE_METHOD(t_Locale, equals, METH_VARARGS),
      DECLARE_METHOD(t_Locale, filter, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale, filterTags, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale, forLanguageTag, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Locale, getAvailableLocales, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale, getCountry, METH_NOARGS),
      DECLARE_METHOD(t_Locale, getDefault, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale, getDisplayCountry, METH_VARARGS),
      DECLARE_METHOD(t_Locale, getDisplayLanguage, METH_VARARGS),
      DECLARE_METHOD(t_Locale, getDisplayName, METH_VARARGS),
      DECLARE_METHOD(t_Locale, getDisplayScript, METH_VARARGS),
      DECLARE_METHOD(t_Locale, getDisplayVariant, METH_VARARGS),
      DECLARE_METHOD(t_Locale, getExtension, METH_O),
      DECLARE_METHOD(t_Locale, getExtensionKeys, METH_NOARGS),
      DECLARE_METHOD(t_Locale, getISO3Country, METH_NOARGS),
      DECLARE_METHOD(t_Locale, getISO3Language, METH_NOARGS),
      DECLARE_METHOD(t_Locale, getISOCountries, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale, getISOLanguages, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale, getLanguage, METH_NOARGS),
      DECLARE_METHOD(t_Locale, getScript, METH_NOARGS),
      DECLARE_METHOD(t_Locale, getUnicodeLocaleAttributes, METH_NOARGS),
      DECLARE_METHOD(t_Locale, getUnicodeLocaleKeys, METH_NOARGS),
      DECLARE_METHOD(t_Locale, getUnicodeLocaleType, METH_O),
      DECLARE_METHOD(t_Locale, getVariant, METH_NOARGS),
      DECLARE_METHOD(t_Locale, hasExtensions, METH_NOARGS),
      DECLARE_METHOD(t_Locale, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Locale, lookup, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale, lookupTag, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale, setDefault, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale, stripExtensions, METH_NOARGS),
      DECLARE_METHOD(t_Locale, toLanguageTag, METH_NOARGS),
      DECLARE_METHOD(t_Locale, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Locale)[] = {
      { Py_tp_methods, t_Locale__methods_ },
      { Py_tp_init, (void *) t_Locale_init_ },
      { Py_tp_getset, t_Locale__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Locale)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Locale, t_Locale, Locale);

    void t_Locale::install(PyObject *module)
    {
      installType(&PY_TYPE(Locale), &PY_TYPE_DEF(Locale), module, "Locale", 0);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "LanguageRange", make_descriptor(&PY_TYPE_DEF(Locale$LanguageRange)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "FilteringMode", make_descriptor(&PY_TYPE_DEF(Locale$FilteringMode)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "Category", make_descriptor(&PY_TYPE_DEF(Locale$Category)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "IsoCountryCode", make_descriptor(&PY_TYPE_DEF(Locale$IsoCountryCode)));
    }

    void t_Locale::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "class_", make_descriptor(Locale::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "wrapfn_", make_descriptor(t_Locale::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "boxfn_", make_descriptor(boxObject));
      env->getClass(Locale::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "CANADA", make_descriptor(t_Locale::wrap_Object(*Locale::CANADA)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "CANADA_FRENCH", make_descriptor(t_Locale::wrap_Object(*Locale::CANADA_FRENCH)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "CHINA", make_descriptor(t_Locale::wrap_Object(*Locale::CHINA)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "CHINESE", make_descriptor(t_Locale::wrap_Object(*Locale::CHINESE)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "ENGLISH", make_descriptor(t_Locale::wrap_Object(*Locale::ENGLISH)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "FRANCE", make_descriptor(t_Locale::wrap_Object(*Locale::FRANCE)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "FRENCH", make_descriptor(t_Locale::wrap_Object(*Locale::FRENCH)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "GERMAN", make_descriptor(t_Locale::wrap_Object(*Locale::GERMAN)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "GERMANY", make_descriptor(t_Locale::wrap_Object(*Locale::GERMANY)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "ITALIAN", make_descriptor(t_Locale::wrap_Object(*Locale::ITALIAN)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "ITALY", make_descriptor(t_Locale::wrap_Object(*Locale::ITALY)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "JAPAN", make_descriptor(t_Locale::wrap_Object(*Locale::JAPAN)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "JAPANESE", make_descriptor(t_Locale::wrap_Object(*Locale::JAPANESE)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "KOREA", make_descriptor(t_Locale::wrap_Object(*Locale::KOREA)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "KOREAN", make_descriptor(t_Locale::wrap_Object(*Locale::KOREAN)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "PRC", make_descriptor(t_Locale::wrap_Object(*Locale::PRC)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "PRIVATE_USE_EXTENSION", make_descriptor(Locale::PRIVATE_USE_EXTENSION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "ROOT", make_descriptor(t_Locale::wrap_Object(*Locale::ROOT)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "SIMPLIFIED_CHINESE", make_descriptor(t_Locale::wrap_Object(*Locale::SIMPLIFIED_CHINESE)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "TAIWAN", make_descriptor(t_Locale::wrap_Object(*Locale::TAIWAN)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "TRADITIONAL_CHINESE", make_descriptor(t_Locale::wrap_Object(*Locale::TRADITIONAL_CHINESE)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "UK", make_descriptor(t_Locale::wrap_Object(*Locale::UK)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "UNICODE_LOCALE_EXTENSION", make_descriptor(Locale::UNICODE_LOCALE_EXTENSION));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale), "US", make_descriptor(t_Locale::wrap_Object(*Locale::US)));
    }

    static PyObject *t_Locale_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Locale::initializeClass, 1)))
        return NULL;
      return t_Locale::wrap_Object(Locale(((t_Locale *) arg)->object.this$));
    }
    static PyObject *t_Locale_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Locale::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Locale_init_(t_Locale *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Locale object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Locale(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          Locale object((jobject) NULL);

          if (!parseArgs(args, "ss", &a0, &a1))
          {
            INT_CALL(object = Locale(a0, a1));
            self->object = object;
            break;
          }
        }
        goto err;
       case 3:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::java::lang::String a2((jobject) NULL);
          Locale object((jobject) NULL);

          if (!parseArgs(args, "sss", &a0, &a1, &a2))
          {
            INT_CALL(object = Locale(a0, a1, a2));
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

    static PyObject *t_Locale_clone(t_Locale *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_Locale_equals(t_Locale *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Locale), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Locale_filter(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Collection a1((jobject) NULL);
          PyTypeObject **p1;
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = ::java::util::Locale::filter(a0, a1));
            return ::java::util::t_List::wrap_Object(result, ::java::util::PY_TYPE(Locale));
          }
        }
        break;
       case 3:
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Collection a1((jobject) NULL);
          PyTypeObject **p1;
          ::java::util::Locale$FilteringMode a2((jobject) NULL);
          PyTypeObject **p2;
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, "KKK", ::java::util::List::initializeClass, ::java::util::Collection::initializeClass, ::java::util::Locale$FilteringMode::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_, &a2, &p2, ::java::util::t_Locale$FilteringMode::parameters_))
          {
            OBJ_CALL(result = ::java::util::Locale::filter(a0, a1, a2));
            return ::java::util::t_List::wrap_Object(result, ::java::util::PY_TYPE(Locale));
          }
        }
      }

      PyErr_SetArgsError(type, "filter", args);
      return NULL;
    }

    static PyObject *t_Locale_filterTags(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Collection a1((jobject) NULL);
          PyTypeObject **p1;
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = ::java::util::Locale::filterTags(a0, a1));
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
          }
        }
        break;
       case 3:
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Collection a1((jobject) NULL);
          PyTypeObject **p1;
          ::java::util::Locale$FilteringMode a2((jobject) NULL);
          PyTypeObject **p2;
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, "KKK", ::java::util::List::initializeClass, ::java::util::Collection::initializeClass, ::java::util::Locale$FilteringMode::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_, &a2, &p2, ::java::util::t_Locale$FilteringMode::parameters_))
          {
            OBJ_CALL(result = ::java::util::Locale::filterTags(a0, a1, a2));
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
          }
        }
      }

      PyErr_SetArgsError(type, "filterTags", args);
      return NULL;
    }

    static PyObject *t_Locale_forLanguageTag(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      Locale result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::util::Locale::forLanguageTag(a0));
        return t_Locale::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "forLanguageTag", arg);
      return NULL;
    }

    static PyObject *t_Locale_getAvailableLocales(PyTypeObject *type)
    {
      JArray< Locale > result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Locale::getAvailableLocales());
      return JArray<jobject>(result.this$).wrap(t_Locale::wrap_jobject);
    }

    static PyObject *t_Locale_getCountry(t_Locale *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getCountry());
      return j2p(result);
    }

    static PyObject *t_Locale_getDefault(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          Locale result((jobject) NULL);
          OBJ_CALL(result = ::java::util::Locale::getDefault());
          return t_Locale::wrap_Object(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale$Category a0((jobject) NULL);
          PyTypeObject **p0;
          Locale result((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Locale$Category::initializeClass, &a0, &p0, ::java::util::t_Locale$Category::parameters_))
          {
            OBJ_CALL(result = ::java::util::Locale::getDefault(a0));
            return t_Locale::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getDefault", args);
      return NULL;
    }

    static PyObject *t_Locale_getDisplayCountry(t_Locale *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDisplayCountry());
          return j2p(result);
        }
        break;
       case 1:
        {
          Locale a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "k", Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getDisplayCountry(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getDisplayCountry", args);
      return NULL;
    }

    static PyObject *t_Locale_getDisplayLanguage(t_Locale *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDisplayLanguage());
          return j2p(result);
        }
        break;
       case 1:
        {
          Locale a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "k", Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getDisplayLanguage(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getDisplayLanguage", args);
      return NULL;
    }

    static PyObject *t_Locale_getDisplayName(t_Locale *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDisplayName());
          return j2p(result);
        }
        break;
       case 1:
        {
          Locale a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "k", Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getDisplayName(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getDisplayName", args);
      return NULL;
    }

    static PyObject *t_Locale_getDisplayScript(t_Locale *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDisplayScript());
          return j2p(result);
        }
        break;
       case 1:
        {
          Locale a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "k", Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getDisplayScript(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getDisplayScript", args);
      return NULL;
    }

    static PyObject *t_Locale_getDisplayVariant(t_Locale *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDisplayVariant());
          return j2p(result);
        }
        break;
       case 1:
        {
          Locale a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "k", Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getDisplayVariant(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getDisplayVariant", args);
      return NULL;
    }

    static PyObject *t_Locale_getExtension(t_Locale *self, PyObject *arg)
    {
      jchar a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(result = self->object.getExtension(a0));
        return j2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getExtension", arg);
      return NULL;
    }

    static PyObject *t_Locale_getExtensionKeys(t_Locale *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.getExtensionKeys());
      return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(Character));
    }

    static PyObject *t_Locale_getISO3Country(t_Locale *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getISO3Country());
      return j2p(result);
    }

    static PyObject *t_Locale_getISO3Language(t_Locale *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getISO3Language());
      return j2p(result);
    }

    static PyObject *t_Locale_getISOCountries(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          JArray< ::java::lang::String > result((jobject) NULL);
          OBJ_CALL(result = ::java::util::Locale::getISOCountries());
          return JArray<jstring>(result.this$).wrap();
        }
        break;
       case 1:
        {
          ::java::util::Locale$IsoCountryCode a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Set result((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Locale$IsoCountryCode::initializeClass, &a0, &p0, ::java::util::t_Locale$IsoCountryCode::parameters_))
          {
            OBJ_CALL(result = ::java::util::Locale::getISOCountries(a0));
            return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(String));
          }
        }
      }

      PyErr_SetArgsError(type, "getISOCountries", args);
      return NULL;
    }

    static PyObject *t_Locale_getISOLanguages(PyTypeObject *type)
    {
      JArray< ::java::lang::String > result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Locale::getISOLanguages());
      return JArray<jstring>(result.this$).wrap();
    }

    static PyObject *t_Locale_getLanguage(t_Locale *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getLanguage());
      return j2p(result);
    }

    static PyObject *t_Locale_getScript(t_Locale *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getScript());
      return j2p(result);
    }

    static PyObject *t_Locale_getUnicodeLocaleAttributes(t_Locale *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.getUnicodeLocaleAttributes());
      return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(String));
    }

    static PyObject *t_Locale_getUnicodeLocaleKeys(t_Locale *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.getUnicodeLocaleKeys());
      return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(String));
    }

    static PyObject *t_Locale_getUnicodeLocaleType(t_Locale *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.getUnicodeLocaleType(a0));
        return j2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getUnicodeLocaleType", arg);
      return NULL;
    }

    static PyObject *t_Locale_getVariant(t_Locale *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getVariant());
      return j2p(result);
    }

    static PyObject *t_Locale_hasExtensions(t_Locale *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.hasExtensions());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Locale_hashCode(t_Locale *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Locale), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Locale_lookup(PyTypeObject *type, PyObject *args)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Collection a1((jobject) NULL);
      PyTypeObject **p1;
      Locale result((jobject) NULL);

      if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = ::java::util::Locale::lookup(a0, a1));
        return t_Locale::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "lookup", args);
      return NULL;
    }

    static PyObject *t_Locale_lookupTag(PyTypeObject *type, PyObject *args)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Collection a1((jobject) NULL);
      PyTypeObject **p1;
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = ::java::util::Locale::lookupTag(a0, a1));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "lookupTag", args);
      return NULL;
    }

    static PyObject *t_Locale_setDefault(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          Locale a0((jobject) NULL);

          if (!parseArgs(args, "k", Locale::initializeClass, &a0))
          {
            OBJ_CALL(::java::util::Locale::setDefault(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 2:
        {
          ::java::util::Locale$Category a0((jobject) NULL);
          PyTypeObject **p0;
          Locale a1((jobject) NULL);

          if (!parseArgs(args, "Kk", ::java::util::Locale$Category::initializeClass, Locale::initializeClass, &a0, &p0, ::java::util::t_Locale$Category::parameters_, &a1))
          {
            OBJ_CALL(::java::util::Locale::setDefault(a0, a1));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError(type, "setDefault", args);
      return NULL;
    }

    static PyObject *t_Locale_stripExtensions(t_Locale *self)
    {
      Locale result((jobject) NULL);
      OBJ_CALL(result = self->object.stripExtensions());
      return t_Locale::wrap_Object(result);
    }

    static PyObject *t_Locale_toLanguageTag(t_Locale *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.toLanguageTag());
      return j2p(result);
    }

    static PyObject *t_Locale_toString(t_Locale *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Locale), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Locale_get__availableLocales(t_Locale *self, void *data)
    {
      JArray< Locale > value((jobject) NULL);
      OBJ_CALL(value = self->object.getAvailableLocales());
      return JArray<jobject>(value.this$).wrap(t_Locale::wrap_jobject);
    }

    static PyObject *t_Locale_get__country(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getCountry());
      return j2p(value);
    }

    static PyObject *t_Locale_get__default(t_Locale *self, void *data)
    {
      Locale value((jobject) NULL);
      OBJ_CALL(value = self->object.getDefault());
      return t_Locale::wrap_Object(value);
    }
    static int t_Locale_set__default(t_Locale *self, PyObject *arg, void *data)
    {
      {
        Locale value((jobject) NULL);
        if (!parseArg(arg, "k", Locale::initializeClass, &value))
        {
          INT_CALL(self->object.setDefault(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "default", arg);
      return -1;
    }

    static PyObject *t_Locale_get__displayCountry(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getDisplayCountry());
      return j2p(value);
    }

    static PyObject *t_Locale_get__displayLanguage(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getDisplayLanguage());
      return j2p(value);
    }

    static PyObject *t_Locale_get__displayName(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getDisplayName());
      return j2p(value);
    }

    static PyObject *t_Locale_get__displayScript(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getDisplayScript());
      return j2p(value);
    }

    static PyObject *t_Locale_get__displayVariant(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getDisplayVariant());
      return j2p(value);
    }

    static PyObject *t_Locale_get__extensionKeys(t_Locale *self, void *data)
    {
      ::java::util::Set value((jobject) NULL);
      OBJ_CALL(value = self->object.getExtensionKeys());
      return ::java::util::t_Set::wrap_Object(value);
    }

    static PyObject *t_Locale_get__iSO3Country(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getISO3Country());
      return j2p(value);
    }

    static PyObject *t_Locale_get__iSO3Language(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getISO3Language());
      return j2p(value);
    }

    static PyObject *t_Locale_get__iSOCountries(t_Locale *self, void *data)
    {
      JArray< ::java::lang::String > value((jobject) NULL);
      OBJ_CALL(value = self->object.getISOCountries());
      return JArray<jstring>(value.this$).wrap();
    }

    static PyObject *t_Locale_get__iSOLanguages(t_Locale *self, void *data)
    {
      JArray< ::java::lang::String > value((jobject) NULL);
      OBJ_CALL(value = self->object.getISOLanguages());
      return JArray<jstring>(value.this$).wrap();
    }

    static PyObject *t_Locale_get__language(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getLanguage());
      return j2p(value);
    }

    static PyObject *t_Locale_get__script(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getScript());
      return j2p(value);
    }

    static PyObject *t_Locale_get__unicodeLocaleAttributes(t_Locale *self, void *data)
    {
      ::java::util::Set value((jobject) NULL);
      OBJ_CALL(value = self->object.getUnicodeLocaleAttributes());
      return ::java::util::t_Set::wrap_Object(value);
    }

    static PyObject *t_Locale_get__unicodeLocaleKeys(t_Locale *self, void *data)
    {
      ::java::util::Set value((jobject) NULL);
      OBJ_CALL(value = self->object.getUnicodeLocaleKeys());
      return ::java::util::t_Set::wrap_Object(value);
    }

    static PyObject *t_Locale_get__variant(t_Locale *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getVariant());
      return j2p(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/CopolarD.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *CopolarD::class$ = NULL;
          jmethodID *CopolarD::mids$ = NULL;
          bool CopolarD::live$ = false;

          jclass CopolarD::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/CopolarD");

              mids$ = new jmethodID[max_mid];
              mids$[mid_cd_b74f83833fdad017] = env->getMethodID(cls, "cd", "()D");
              mids$[mid_nd_b74f83833fdad017] = env->getMethodID(cls, "nd", "()D");
              mids$[mid_sd_b74f83833fdad017] = env->getMethodID(cls, "sd", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble CopolarD::cd() const
          {
            return env->callDoubleMethod(this$, mids$[mid_cd_b74f83833fdad017]);
          }

          jdouble CopolarD::nd() const
          {
            return env->callDoubleMethod(this$, mids$[mid_nd_b74f83833fdad017]);
          }

          jdouble CopolarD::sd() const
          {
            return env->callDoubleMethod(this$, mids$[mid_sd_b74f83833fdad017]);
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
          static PyObject *t_CopolarD_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CopolarD_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CopolarD_cd(t_CopolarD *self);
          static PyObject *t_CopolarD_nd(t_CopolarD *self);
          static PyObject *t_CopolarD_sd(t_CopolarD *self);

          static PyMethodDef t_CopolarD__methods_[] = {
            DECLARE_METHOD(t_CopolarD, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CopolarD, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CopolarD, cd, METH_NOARGS),
            DECLARE_METHOD(t_CopolarD, nd, METH_NOARGS),
            DECLARE_METHOD(t_CopolarD, sd, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CopolarD)[] = {
            { Py_tp_methods, t_CopolarD__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CopolarD)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CopolarD, t_CopolarD, CopolarD);

          void t_CopolarD::install(PyObject *module)
          {
            installType(&PY_TYPE(CopolarD), &PY_TYPE_DEF(CopolarD), module, "CopolarD", 0);
          }

          void t_CopolarD::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarD), "class_", make_descriptor(CopolarD::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarD), "wrapfn_", make_descriptor(t_CopolarD::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarD), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CopolarD_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CopolarD::initializeClass, 1)))
              return NULL;
            return t_CopolarD::wrap_Object(CopolarD(((t_CopolarD *) arg)->object.this$));
          }
          static PyObject *t_CopolarD_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CopolarD::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CopolarD_cd(t_CopolarD *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.cd());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CopolarD_nd(t_CopolarD *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.nd());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CopolarD_sd(t_CopolarD *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.sd());
            return PyFloat_FromDouble((double) result);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1020Data.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSNavigationMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *Rtcm1020Data::class$ = NULL;
              jmethodID *Rtcm1020Data::mids$ = NULL;
              bool Rtcm1020Data::live$ = false;

              jclass Rtcm1020Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1020Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_areAdditionalDataAvailable_9ab94ac1dc23b105] = env->getMethodID(cls, "areAdditionalDataAvailable", "()Z");
                  mids$[mid_getBN_55546ef6a647f39b] = env->getMethodID(cls, "getBN", "()I");
                  mids$[mid_getDeltaTN_b74f83833fdad017] = env->getMethodID(cls, "getDeltaTN", "()D");
                  mids$[mid_getEn_55546ef6a647f39b] = env->getMethodID(cls, "getEn", "()I");
                  mids$[mid_getFT_55546ef6a647f39b] = env->getMethodID(cls, "getFT", "()I");
                  mids$[mid_getGlonassNavigationMessage_c12b34246a5b4f75] = env->getMethodID(cls, "getGlonassNavigationMessage", "()Lorg/orekit/propagation/analytical/gnss/data/GLONASSNavigationMessage;");
                  mids$[mid_getGlonassNavigationMessage_61b6937e41eaa40d] = env->getMethodID(cls, "getGlonassNavigationMessage", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/propagation/analytical/gnss/data/GLONASSNavigationMessage;");
                  mids$[mid_getLNFifthString_55546ef6a647f39b] = env->getMethodID(cls, "getLNFifthString", "()I");
                  mids$[mid_getLNThirdString_55546ef6a647f39b] = env->getMethodID(cls, "getLNThirdString", "()I");
                  mids$[mid_getM_55546ef6a647f39b] = env->getMethodID(cls, "getM", "()I");
                  mids$[mid_getN4_55546ef6a647f39b] = env->getMethodID(cls, "getN4", "()I");
                  mids$[mid_getNA_55546ef6a647f39b] = env->getMethodID(cls, "getNA", "()I");
                  mids$[mid_getNt_55546ef6a647f39b] = env->getMethodID(cls, "getNt", "()I");
                  mids$[mid_getP_55546ef6a647f39b] = env->getMethodID(cls, "getP", "()I");
                  mids$[mid_getP1_55546ef6a647f39b] = env->getMethodID(cls, "getP1", "()I");
                  mids$[mid_getP2_55546ef6a647f39b] = env->getMethodID(cls, "getP2", "()I");
                  mids$[mid_getP3_55546ef6a647f39b] = env->getMethodID(cls, "getP3", "()I");
                  mids$[mid_getP4_55546ef6a647f39b] = env->getMethodID(cls, "getP4", "()I");
                  mids$[mid_getTauC_b74f83833fdad017] = env->getMethodID(cls, "getTauC", "()D");
                  mids$[mid_getTauGps_b74f83833fdad017] = env->getMethodID(cls, "getTauGps", "()D");
                  mids$[mid_getTk_b74f83833fdad017] = env->getMethodID(cls, "getTk", "()D");
                  mids$[mid_isHealthAvailable_9ab94ac1dc23b105] = env->getMethodID(cls, "isHealthAvailable", "()Z");
                  mids$[mid_setAreAdditionalDataAvailable_fcb96c98de6fad04] = env->getMethodID(cls, "setAreAdditionalDataAvailable", "(Z)V");
                  mids$[mid_setBN_44ed599e93e8a30c] = env->getMethodID(cls, "setBN", "(I)V");
                  mids$[mid_setDeltaTN_8ba9fe7a847cecad] = env->getMethodID(cls, "setDeltaTN", "(D)V");
                  mids$[mid_setEn_44ed599e93e8a30c] = env->getMethodID(cls, "setEn", "(I)V");
                  mids$[mid_setFT_44ed599e93e8a30c] = env->getMethodID(cls, "setFT", "(I)V");
                  mids$[mid_setGlonassNavigationMessage_1538465e20a8ec53] = env->getMethodID(cls, "setGlonassNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/GLONASSNavigationMessage;)V");
                  mids$[mid_setHealthAvailabilityIndicator_fcb96c98de6fad04] = env->getMethodID(cls, "setHealthAvailabilityIndicator", "(Z)V");
                  mids$[mid_setLNFifthString_44ed599e93e8a30c] = env->getMethodID(cls, "setLNFifthString", "(I)V");
                  mids$[mid_setLNThirdString_44ed599e93e8a30c] = env->getMethodID(cls, "setLNThirdString", "(I)V");
                  mids$[mid_setM_44ed599e93e8a30c] = env->getMethodID(cls, "setM", "(I)V");
                  mids$[mid_setN4_44ed599e93e8a30c] = env->getMethodID(cls, "setN4", "(I)V");
                  mids$[mid_setNA_44ed599e93e8a30c] = env->getMethodID(cls, "setNA", "(I)V");
                  mids$[mid_setNt_44ed599e93e8a30c] = env->getMethodID(cls, "setNt", "(I)V");
                  mids$[mid_setP_44ed599e93e8a30c] = env->getMethodID(cls, "setP", "(I)V");
                  mids$[mid_setP1_44ed599e93e8a30c] = env->getMethodID(cls, "setP1", "(I)V");
                  mids$[mid_setP2_44ed599e93e8a30c] = env->getMethodID(cls, "setP2", "(I)V");
                  mids$[mid_setP3_44ed599e93e8a30c] = env->getMethodID(cls, "setP3", "(I)V");
                  mids$[mid_setP4_44ed599e93e8a30c] = env->getMethodID(cls, "setP4", "(I)V");
                  mids$[mid_setTauC_8ba9fe7a847cecad] = env->getMethodID(cls, "setTauC", "(D)V");
                  mids$[mid_setTauGps_8ba9fe7a847cecad] = env->getMethodID(cls, "setTauGps", "(D)V");
                  mids$[mid_setTk_8ba9fe7a847cecad] = env->getMethodID(cls, "setTk", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1020Data::Rtcm1020Data() : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              jboolean Rtcm1020Data::areAdditionalDataAvailable() const
              {
                return env->callBooleanMethod(this$, mids$[mid_areAdditionalDataAvailable_9ab94ac1dc23b105]);
              }

              jint Rtcm1020Data::getBN() const
              {
                return env->callIntMethod(this$, mids$[mid_getBN_55546ef6a647f39b]);
              }

              jdouble Rtcm1020Data::getDeltaTN() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDeltaTN_b74f83833fdad017]);
              }

              jint Rtcm1020Data::getEn() const
              {
                return env->callIntMethod(this$, mids$[mid_getEn_55546ef6a647f39b]);
              }

              jint Rtcm1020Data::getFT() const
              {
                return env->callIntMethod(this$, mids$[mid_getFT_55546ef6a647f39b]);
              }

              ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage Rtcm1020Data::getGlonassNavigationMessage() const
              {
                return ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage(env->callObjectMethod(this$, mids$[mid_getGlonassNavigationMessage_c12b34246a5b4f75]));
              }

              ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage Rtcm1020Data::getGlonassNavigationMessage(const ::org::orekit::time::TimeScales & a0) const
              {
                return ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage(env->callObjectMethod(this$, mids$[mid_getGlonassNavigationMessage_61b6937e41eaa40d], a0.this$));
              }

              jint Rtcm1020Data::getLNFifthString() const
              {
                return env->callIntMethod(this$, mids$[mid_getLNFifthString_55546ef6a647f39b]);
              }

              jint Rtcm1020Data::getLNThirdString() const
              {
                return env->callIntMethod(this$, mids$[mid_getLNThirdString_55546ef6a647f39b]);
              }

              jint Rtcm1020Data::getM() const
              {
                return env->callIntMethod(this$, mids$[mid_getM_55546ef6a647f39b]);
              }

              jint Rtcm1020Data::getN4() const
              {
                return env->callIntMethod(this$, mids$[mid_getN4_55546ef6a647f39b]);
              }

              jint Rtcm1020Data::getNA() const
              {
                return env->callIntMethod(this$, mids$[mid_getNA_55546ef6a647f39b]);
              }

              jint Rtcm1020Data::getNt() const
              {
                return env->callIntMethod(this$, mids$[mid_getNt_55546ef6a647f39b]);
              }

              jint Rtcm1020Data::getP() const
              {
                return env->callIntMethod(this$, mids$[mid_getP_55546ef6a647f39b]);
              }

              jint Rtcm1020Data::getP1() const
              {
                return env->callIntMethod(this$, mids$[mid_getP1_55546ef6a647f39b]);
              }

              jint Rtcm1020Data::getP2() const
              {
                return env->callIntMethod(this$, mids$[mid_getP2_55546ef6a647f39b]);
              }

              jint Rtcm1020Data::getP3() const
              {
                return env->callIntMethod(this$, mids$[mid_getP3_55546ef6a647f39b]);
              }

              jint Rtcm1020Data::getP4() const
              {
                return env->callIntMethod(this$, mids$[mid_getP4_55546ef6a647f39b]);
              }

              jdouble Rtcm1020Data::getTauC() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTauC_b74f83833fdad017]);
              }

              jdouble Rtcm1020Data::getTauGps() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTauGps_b74f83833fdad017]);
              }

              jdouble Rtcm1020Data::getTk() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTk_b74f83833fdad017]);
              }

              jboolean Rtcm1020Data::isHealthAvailable() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isHealthAvailable_9ab94ac1dc23b105]);
              }

              void Rtcm1020Data::setAreAdditionalDataAvailable(jboolean a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAreAdditionalDataAvailable_fcb96c98de6fad04], a0);
              }

              void Rtcm1020Data::setBN(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setBN_44ed599e93e8a30c], a0);
              }

              void Rtcm1020Data::setDeltaTN(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeltaTN_8ba9fe7a847cecad], a0);
              }

              void Rtcm1020Data::setEn(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEn_44ed599e93e8a30c], a0);
              }

              void Rtcm1020Data::setFT(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFT_44ed599e93e8a30c], a0);
              }

              void Rtcm1020Data::setGlonassNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGlonassNavigationMessage_1538465e20a8ec53], a0.this$);
              }

              void Rtcm1020Data::setHealthAvailabilityIndicator(jboolean a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setHealthAvailabilityIndicator_fcb96c98de6fad04], a0);
              }

              void Rtcm1020Data::setLNFifthString(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setLNFifthString_44ed599e93e8a30c], a0);
              }

              void Rtcm1020Data::setLNThirdString(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setLNThirdString_44ed599e93e8a30c], a0);
              }

              void Rtcm1020Data::setM(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setM_44ed599e93e8a30c], a0);
              }

              void Rtcm1020Data::setN4(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setN4_44ed599e93e8a30c], a0);
              }

              void Rtcm1020Data::setNA(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNA_44ed599e93e8a30c], a0);
              }

              void Rtcm1020Data::setNt(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNt_44ed599e93e8a30c], a0);
              }

              void Rtcm1020Data::setP(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setP_44ed599e93e8a30c], a0);
              }

              void Rtcm1020Data::setP1(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setP1_44ed599e93e8a30c], a0);
              }

              void Rtcm1020Data::setP2(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setP2_44ed599e93e8a30c], a0);
              }

              void Rtcm1020Data::setP3(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setP3_44ed599e93e8a30c], a0);
              }

              void Rtcm1020Data::setP4(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setP4_44ed599e93e8a30c], a0);
              }

              void Rtcm1020Data::setTauC(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTauC_8ba9fe7a847cecad], a0);
              }

              void Rtcm1020Data::setTauGps(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTauGps_8ba9fe7a847cecad], a0);
              }

              void Rtcm1020Data::setTk(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTk_8ba9fe7a847cecad], a0);
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
          namespace rtcm {
            namespace ephemeris {
              static PyObject *t_Rtcm1020Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1020Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Rtcm1020Data_init_(t_Rtcm1020Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1020Data_areAdditionalDataAvailable(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getBN(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getDeltaTN(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getEn(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getFT(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getGlonassNavigationMessage(t_Rtcm1020Data *self, PyObject *args);
              static PyObject *t_Rtcm1020Data_getLNFifthString(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getLNThirdString(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getM(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getN4(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getNA(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getNt(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getP(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getP1(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getP2(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getP3(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getP4(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getTauC(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getTauGps(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getTk(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_isHealthAvailable(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_setAreAdditionalDataAvailable(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setBN(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setDeltaTN(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setEn(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setFT(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setGlonassNavigationMessage(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setHealthAvailabilityIndicator(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setLNFifthString(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setLNThirdString(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setM(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setN4(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setNA(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setNt(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setP(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setP1(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setP2(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setP3(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setP4(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setTauC(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setTauGps(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setTk(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_get__bN(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__bN(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__deltaTN(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__deltaTN(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__en(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__en(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__fT(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__fT(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__glonassNavigationMessage(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__glonassNavigationMessage(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static int t_Rtcm1020Data_set__healthAvailabilityIndicator(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__healthAvailable(t_Rtcm1020Data *self, void *data);
              static PyObject *t_Rtcm1020Data_get__lNFifthString(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__lNFifthString(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__lNThirdString(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__lNThirdString(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__m(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__m(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__n4(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__n4(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__nA(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__nA(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__nt(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__nt(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__p(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__p(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__p1(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__p1(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__p2(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__p2(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__p3(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__p3(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__p4(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__p4(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__tauC(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__tauC(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__tauGps(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__tauGps(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__tk(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__tk(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_Rtcm1020Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, bN),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, deltaTN),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, en),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, fT),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, glonassNavigationMessage),
                DECLARE_SET_FIELD(t_Rtcm1020Data, healthAvailabilityIndicator),
                DECLARE_GET_FIELD(t_Rtcm1020Data, healthAvailable),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, lNFifthString),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, lNThirdString),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, m),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, n4),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, nA),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, nt),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, p),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, p1),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, p2),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, p3),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, p4),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, tauC),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, tauGps),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, tk),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1020Data__methods_[] = {
                DECLARE_METHOD(t_Rtcm1020Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1020Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1020Data, areAdditionalDataAvailable, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getBN, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getDeltaTN, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getEn, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getFT, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getGlonassNavigationMessage, METH_VARARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getLNFifthString, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getLNThirdString, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getM, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getN4, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getNA, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getNt, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getP, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getP1, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getP2, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getP3, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getP4, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getTauC, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getTauGps, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getTk, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, isHealthAvailable, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, setAreAdditionalDataAvailable, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setBN, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setDeltaTN, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setEn, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setFT, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setGlonassNavigationMessage, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setHealthAvailabilityIndicator, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setLNFifthString, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setLNThirdString, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setM, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setN4, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setNA, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setNt, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setP, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setP1, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setP2, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setP3, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setP4, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setTauC, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setTauGps, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setTk, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1020Data)[] = {
                { Py_tp_methods, t_Rtcm1020Data__methods_ },
                { Py_tp_init, (void *) t_Rtcm1020Data_init_ },
                { Py_tp_getset, t_Rtcm1020Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1020Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData),
                NULL
              };

              DEFINE_TYPE(Rtcm1020Data, t_Rtcm1020Data, Rtcm1020Data);

              void t_Rtcm1020Data::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1020Data), &PY_TYPE_DEF(Rtcm1020Data), module, "Rtcm1020Data", 0);
              }

              void t_Rtcm1020Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1020Data), "class_", make_descriptor(Rtcm1020Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1020Data), "wrapfn_", make_descriptor(t_Rtcm1020Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1020Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1020Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1020Data::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1020Data::wrap_Object(Rtcm1020Data(((t_Rtcm1020Data *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1020Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1020Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Rtcm1020Data_init_(t_Rtcm1020Data *self, PyObject *args, PyObject *kwds)
              {
                Rtcm1020Data object((jobject) NULL);

                INT_CALL(object = Rtcm1020Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_Rtcm1020Data_areAdditionalDataAvailable(t_Rtcm1020Data *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.areAdditionalDataAvailable());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_Rtcm1020Data_getBN(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getBN());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getDeltaTN(t_Rtcm1020Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDeltaTN());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Rtcm1020Data_getEn(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getEn());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getFT(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getFT());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getGlonassNavigationMessage(t_Rtcm1020Data *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage result((jobject) NULL);
                    OBJ_CALL(result = self->object.getGlonassNavigationMessage());
                    return ::org::orekit::propagation::analytical::gnss::data::t_GLONASSNavigationMessage::wrap_Object(result);
                  }
                  break;
                 case 1:
                  {
                    ::org::orekit::time::TimeScales a0((jobject) NULL);
                    ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage result((jobject) NULL);

                    if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
                    {
                      OBJ_CALL(result = self->object.getGlonassNavigationMessage(a0));
                      return ::org::orekit::propagation::analytical::gnss::data::t_GLONASSNavigationMessage::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "getGlonassNavigationMessage", args);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_getLNFifthString(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getLNFifthString());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getLNThirdString(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getLNThirdString());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getM(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getM());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getN4(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getN4());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getNA(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNA());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getNt(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNt());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getP(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getP());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getP1(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getP1());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getP2(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getP2());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getP3(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getP3());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getP4(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getP4());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getTauC(t_Rtcm1020Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getTauC());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Rtcm1020Data_getTauGps(t_Rtcm1020Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getTauGps());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Rtcm1020Data_getTk(t_Rtcm1020Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getTk());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Rtcm1020Data_isHealthAvailable(t_Rtcm1020Data *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.isHealthAvailable());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_Rtcm1020Data_setAreAdditionalDataAvailable(t_Rtcm1020Data *self, PyObject *arg)
              {
                jboolean a0;

                if (!parseArg(arg, "Z", &a0))
                {
                  OBJ_CALL(self->object.setAreAdditionalDataAvailable(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAreAdditionalDataAvailable", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setBN(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setBN(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setBN", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setDeltaTN(t_Rtcm1020Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDeltaTN(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeltaTN", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setEn(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setEn(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEn", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setFT(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setFT(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFT", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setGlonassNavigationMessage(t_Rtcm1020Data *self, PyObject *arg)
              {
                ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setGlonassNavigationMessage(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGlonassNavigationMessage", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setHealthAvailabilityIndicator(t_Rtcm1020Data *self, PyObject *arg)
              {
                jboolean a0;

                if (!parseArg(arg, "Z", &a0))
                {
                  OBJ_CALL(self->object.setHealthAvailabilityIndicator(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setHealthAvailabilityIndicator", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setLNFifthString(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setLNFifthString(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setLNFifthString", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setLNThirdString(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setLNThirdString(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setLNThirdString", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setM(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setM(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setM", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setN4(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setN4(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setN4", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setNA(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNA(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNA", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setNt(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNt(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNt", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setP(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setP(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setP", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setP1(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setP1(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setP1", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setP2(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setP2(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setP2", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setP3(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setP3(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setP3", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setP4(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setP4(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setP4", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setTauC(t_Rtcm1020Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setTauC(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTauC", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setTauGps(t_Rtcm1020Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setTauGps(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTauGps", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setTk(t_Rtcm1020Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setTk(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTk", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_get__bN(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getBN());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__bN(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setBN(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "bN", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__deltaTN(t_Rtcm1020Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDeltaTN());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Rtcm1020Data_set__deltaTN(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDeltaTN(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "deltaTN", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__en(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getEn());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__en(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setEn(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "en", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__fT(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getFT());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__fT(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setFT(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fT", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__glonassNavigationMessage(t_Rtcm1020Data *self, void *data)
              {
                ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage value((jobject) NULL);
                OBJ_CALL(value = self->object.getGlonassNavigationMessage());
                return ::org::orekit::propagation::analytical::gnss::data::t_GLONASSNavigationMessage::wrap_Object(value);
              }
              static int t_Rtcm1020Data_set__glonassNavigationMessage(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage::initializeClass, &value))
                  {
                    INT_CALL(self->object.setGlonassNavigationMessage(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "glonassNavigationMessage", arg);
                return -1;
              }

              static int t_Rtcm1020Data_set__healthAvailabilityIndicator(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jboolean value;
                  if (!parseArg(arg, "Z", &value))
                  {
                    INT_CALL(self->object.setHealthAvailabilityIndicator(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "healthAvailabilityIndicator", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__healthAvailable(t_Rtcm1020Data *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.isHealthAvailable());
                Py_RETURN_BOOL(value);
              }

              static PyObject *t_Rtcm1020Data_get__lNFifthString(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getLNFifthString());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__lNFifthString(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setLNFifthString(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "lNFifthString", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__lNThirdString(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getLNThirdString());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__lNThirdString(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setLNThirdString(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "lNThirdString", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__m(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getM());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__m(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setM(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "m", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__n4(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getN4());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__n4(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setN4(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "n4", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__nA(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNA());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__nA(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNA(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nA", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__nt(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNt());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__nt(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNt(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nt", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__p(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getP());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__p(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setP(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "p", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__p1(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getP1());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__p1(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setP1(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "p1", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__p2(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getP2());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__p2(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setP2(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "p2", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__p3(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getP3());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__p3(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setP3(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "p3", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__p4(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getP4());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__p4(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setP4(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "p4", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__tauC(t_Rtcm1020Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getTauC());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Rtcm1020Data_set__tauC(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setTauC(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "tauC", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__tauGps(t_Rtcm1020Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getTauGps());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Rtcm1020Data_set__tauGps(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setTauGps(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "tauGps", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__tk(t_Rtcm1020Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getTk());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Rtcm1020Data_set__tk(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setTk(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "tk", arg);
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
#include "org/hipparchus/analysis/integration/BaseAbstractUnivariateIntegrator.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/integration/UnivariateIntegrator.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *BaseAbstractUnivariateIntegrator::class$ = NULL;
        jmethodID *BaseAbstractUnivariateIntegrator::mids$ = NULL;
        bool BaseAbstractUnivariateIntegrator::live$ = false;
        jdouble BaseAbstractUnivariateIntegrator::DEFAULT_ABSOLUTE_ACCURACY = (jdouble) 0;
        jint BaseAbstractUnivariateIntegrator::DEFAULT_MAX_ITERATIONS_COUNT = (jint) 0;
        jint BaseAbstractUnivariateIntegrator::DEFAULT_MIN_ITERATIONS_COUNT = (jint) 0;
        jdouble BaseAbstractUnivariateIntegrator::DEFAULT_RELATIVE_ACCURACY = (jdouble) 0;

        jclass BaseAbstractUnivariateIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/BaseAbstractUnivariateIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAbsoluteAccuracy_b74f83833fdad017] = env->getMethodID(cls, "getAbsoluteAccuracy", "()D");
            mids$[mid_getEvaluations_55546ef6a647f39b] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getIterations_55546ef6a647f39b] = env->getMethodID(cls, "getIterations", "()I");
            mids$[mid_getMaximalIterationCount_55546ef6a647f39b] = env->getMethodID(cls, "getMaximalIterationCount", "()I");
            mids$[mid_getMinimalIterationCount_55546ef6a647f39b] = env->getMethodID(cls, "getMinimalIterationCount", "()I");
            mids$[mid_getRelativeAccuracy_b74f83833fdad017] = env->getMethodID(cls, "getRelativeAccuracy", "()D");
            mids$[mid_integrate_076ce9f904fe1577] = env->getMethodID(cls, "integrate", "(ILorg/hipparchus/analysis/UnivariateFunction;DD)D");
            mids$[mid_doIntegrate_b74f83833fdad017] = env->getMethodID(cls, "doIntegrate", "()D");
            mids$[mid_getMin_b74f83833fdad017] = env->getMethodID(cls, "getMin", "()D");
            mids$[mid_getMax_b74f83833fdad017] = env->getMethodID(cls, "getMax", "()D");
            mids$[mid_computeObjectiveValue_04fd0666b613d2ab] = env->getMethodID(cls, "computeObjectiveValue", "(D)D");
            mids$[mid_setup_c0740661ca309f10] = env->getMethodID(cls, "setup", "(ILorg/hipparchus/analysis/UnivariateFunction;DD)V");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_ABSOLUTE_ACCURACY = env->getStaticDoubleField(cls, "DEFAULT_ABSOLUTE_ACCURACY");
            DEFAULT_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "DEFAULT_MAX_ITERATIONS_COUNT");
            DEFAULT_MIN_ITERATIONS_COUNT = env->getStaticIntField(cls, "DEFAULT_MIN_ITERATIONS_COUNT");
            DEFAULT_RELATIVE_ACCURACY = env->getStaticDoubleField(cls, "DEFAULT_RELATIVE_ACCURACY");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble BaseAbstractUnivariateIntegrator::getAbsoluteAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAbsoluteAccuracy_b74f83833fdad017]);
        }

        jint BaseAbstractUnivariateIntegrator::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_55546ef6a647f39b]);
        }

        jint BaseAbstractUnivariateIntegrator::getIterations() const
        {
          return env->callIntMethod(this$, mids$[mid_getIterations_55546ef6a647f39b]);
        }

        jint BaseAbstractUnivariateIntegrator::getMaximalIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaximalIterationCount_55546ef6a647f39b]);
        }

        jint BaseAbstractUnivariateIntegrator::getMinimalIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMinimalIterationCount_55546ef6a647f39b]);
        }

        jdouble BaseAbstractUnivariateIntegrator::getRelativeAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRelativeAccuracy_b74f83833fdad017]);
        }

        jdouble BaseAbstractUnivariateIntegrator::integrate(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_integrate_076ce9f904fe1577], a0, a1.this$, a2, a3);
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
        static PyObject *t_BaseAbstractUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseAbstractUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseAbstractUnivariateIntegrator_getAbsoluteAccuracy(t_BaseAbstractUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractUnivariateIntegrator_getEvaluations(t_BaseAbstractUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractUnivariateIntegrator_getIterations(t_BaseAbstractUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractUnivariateIntegrator_getMaximalIterationCount(t_BaseAbstractUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractUnivariateIntegrator_getMinimalIterationCount(t_BaseAbstractUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractUnivariateIntegrator_getRelativeAccuracy(t_BaseAbstractUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractUnivariateIntegrator_integrate(t_BaseAbstractUnivariateIntegrator *self, PyObject *args);
        static PyObject *t_BaseAbstractUnivariateIntegrator_get__absoluteAccuracy(t_BaseAbstractUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractUnivariateIntegrator_get__evaluations(t_BaseAbstractUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractUnivariateIntegrator_get__iterations(t_BaseAbstractUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractUnivariateIntegrator_get__maximalIterationCount(t_BaseAbstractUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractUnivariateIntegrator_get__minimalIterationCount(t_BaseAbstractUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractUnivariateIntegrator_get__relativeAccuracy(t_BaseAbstractUnivariateIntegrator *self, void *data);
        static PyGetSetDef t_BaseAbstractUnivariateIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateIntegrator, absoluteAccuracy),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateIntegrator, evaluations),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateIntegrator, iterations),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateIntegrator, maximalIterationCount),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateIntegrator, minimalIterationCount),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateIntegrator, relativeAccuracy),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BaseAbstractUnivariateIntegrator__methods_[] = {
          DECLARE_METHOD(t_BaseAbstractUnivariateIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseAbstractUnivariateIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseAbstractUnivariateIntegrator, getAbsoluteAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateIntegrator, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateIntegrator, getIterations, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateIntegrator, getMaximalIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateIntegrator, getMinimalIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateIntegrator, getRelativeAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateIntegrator, integrate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BaseAbstractUnivariateIntegrator)[] = {
          { Py_tp_methods, t_BaseAbstractUnivariateIntegrator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BaseAbstractUnivariateIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BaseAbstractUnivariateIntegrator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BaseAbstractUnivariateIntegrator, t_BaseAbstractUnivariateIntegrator, BaseAbstractUnivariateIntegrator);

        void t_BaseAbstractUnivariateIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(BaseAbstractUnivariateIntegrator), &PY_TYPE_DEF(BaseAbstractUnivariateIntegrator), module, "BaseAbstractUnivariateIntegrator", 0);
        }

        void t_BaseAbstractUnivariateIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateIntegrator), "class_", make_descriptor(BaseAbstractUnivariateIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateIntegrator), "wrapfn_", make_descriptor(t_BaseAbstractUnivariateIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(BaseAbstractUnivariateIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateIntegrator), "DEFAULT_ABSOLUTE_ACCURACY", make_descriptor(BaseAbstractUnivariateIntegrator::DEFAULT_ABSOLUTE_ACCURACY));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateIntegrator), "DEFAULT_MAX_ITERATIONS_COUNT", make_descriptor(BaseAbstractUnivariateIntegrator::DEFAULT_MAX_ITERATIONS_COUNT));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateIntegrator), "DEFAULT_MIN_ITERATIONS_COUNT", make_descriptor(BaseAbstractUnivariateIntegrator::DEFAULT_MIN_ITERATIONS_COUNT));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateIntegrator), "DEFAULT_RELATIVE_ACCURACY", make_descriptor(BaseAbstractUnivariateIntegrator::DEFAULT_RELATIVE_ACCURACY));
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BaseAbstractUnivariateIntegrator::initializeClass, 1)))
            return NULL;
          return t_BaseAbstractUnivariateIntegrator::wrap_Object(BaseAbstractUnivariateIntegrator(((t_BaseAbstractUnivariateIntegrator *) arg)->object.this$));
        }
        static PyObject *t_BaseAbstractUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BaseAbstractUnivariateIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_getAbsoluteAccuracy(t_BaseAbstractUnivariateIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_getEvaluations(t_BaseAbstractUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_getIterations(t_BaseAbstractUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getIterations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_getMaximalIterationCount(t_BaseAbstractUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaximalIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_getMinimalIterationCount(t_BaseAbstractUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMinimalIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_getRelativeAccuracy(t_BaseAbstractUnivariateIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_integrate(t_BaseAbstractUnivariateIntegrator *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
          jdouble a2;
          jdouble a3;
          jdouble result;

          if (!parseArgs(args, "IkDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2, a3));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "integrate", args);
          return NULL;
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_get__absoluteAccuracy(t_BaseAbstractUnivariateIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_get__evaluations(t_BaseAbstractUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_get__iterations(t_BaseAbstractUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getIterations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_get__maximalIterationCount(t_BaseAbstractUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaximalIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_get__minimalIterationCount(t_BaseAbstractUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMinimalIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_get__relativeAccuracy(t_BaseAbstractUnivariateIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/geometry/fov/EllipticalFieldOfView.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *EllipticalFieldOfView::class$ = NULL;
        jmethodID *EllipticalFieldOfView::mids$ = NULL;
        bool EllipticalFieldOfView::live$ = false;

        jclass EllipticalFieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/EllipticalFieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_87a117b93c3ff7ca] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DDD)V");
            mids$[mid_getFocus1_8b724f8b4fdad1a2] = env->getMethodID(cls, "getFocus1", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getFocus2_8b724f8b4fdad1a2] = env->getMethodID(cls, "getFocus2", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getHalfApertureAlongX_b74f83833fdad017] = env->getMethodID(cls, "getHalfApertureAlongX", "()D");
            mids$[mid_getHalfApertureAlongY_b74f83833fdad017] = env->getMethodID(cls, "getHalfApertureAlongY", "()D");
            mids$[mid_offsetFromBoundary_927580832e9083f9] = env->getMethodID(cls, "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D");
            mids$[mid_projectToBoundary_f21507e4850a184e] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_directionAt_498f52cd8e5a7072] = env->getMethodID(cls, "directionAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EllipticalFieldOfView::EllipticalFieldOfView(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2, jdouble a3, jdouble a4) : ::org::orekit::geometry::fov::SmoothFieldOfView(env->newObject(initializeClass, &mids$, mid_init$_87a117b93c3ff7ca, a0.this$, a1.this$, a2, a3, a4)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D EllipticalFieldOfView::getFocus1() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getFocus1_8b724f8b4fdad1a2]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D EllipticalFieldOfView::getFocus2() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getFocus2_8b724f8b4fdad1a2]));
        }

        jdouble EllipticalFieldOfView::getHalfApertureAlongX() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getHalfApertureAlongX_b74f83833fdad017]);
        }

        jdouble EllipticalFieldOfView::getHalfApertureAlongY() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getHalfApertureAlongY_b74f83833fdad017]);
        }

        jdouble EllipticalFieldOfView::offsetFromBoundary(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1, const ::org::orekit::propagation::events::VisibilityTrigger & a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_offsetFromBoundary_927580832e9083f9], a0.this$, a1, a2.this$);
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D EllipticalFieldOfView::projectToBoundary(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_projectToBoundary_f21507e4850a184e], a0.this$));
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
    namespace geometry {
      namespace fov {
        static PyObject *t_EllipticalFieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EllipticalFieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EllipticalFieldOfView_init_(t_EllipticalFieldOfView *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EllipticalFieldOfView_getFocus1(t_EllipticalFieldOfView *self);
        static PyObject *t_EllipticalFieldOfView_getFocus2(t_EllipticalFieldOfView *self);
        static PyObject *t_EllipticalFieldOfView_getHalfApertureAlongX(t_EllipticalFieldOfView *self);
        static PyObject *t_EllipticalFieldOfView_getHalfApertureAlongY(t_EllipticalFieldOfView *self);
        static PyObject *t_EllipticalFieldOfView_offsetFromBoundary(t_EllipticalFieldOfView *self, PyObject *args);
        static PyObject *t_EllipticalFieldOfView_projectToBoundary(t_EllipticalFieldOfView *self, PyObject *args);
        static PyObject *t_EllipticalFieldOfView_get__focus1(t_EllipticalFieldOfView *self, void *data);
        static PyObject *t_EllipticalFieldOfView_get__focus2(t_EllipticalFieldOfView *self, void *data);
        static PyObject *t_EllipticalFieldOfView_get__halfApertureAlongX(t_EllipticalFieldOfView *self, void *data);
        static PyObject *t_EllipticalFieldOfView_get__halfApertureAlongY(t_EllipticalFieldOfView *self, void *data);
        static PyGetSetDef t_EllipticalFieldOfView__fields_[] = {
          DECLARE_GET_FIELD(t_EllipticalFieldOfView, focus1),
          DECLARE_GET_FIELD(t_EllipticalFieldOfView, focus2),
          DECLARE_GET_FIELD(t_EllipticalFieldOfView, halfApertureAlongX),
          DECLARE_GET_FIELD(t_EllipticalFieldOfView, halfApertureAlongY),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EllipticalFieldOfView__methods_[] = {
          DECLARE_METHOD(t_EllipticalFieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EllipticalFieldOfView, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EllipticalFieldOfView, getFocus1, METH_NOARGS),
          DECLARE_METHOD(t_EllipticalFieldOfView, getFocus2, METH_NOARGS),
          DECLARE_METHOD(t_EllipticalFieldOfView, getHalfApertureAlongX, METH_NOARGS),
          DECLARE_METHOD(t_EllipticalFieldOfView, getHalfApertureAlongY, METH_NOARGS),
          DECLARE_METHOD(t_EllipticalFieldOfView, offsetFromBoundary, METH_VARARGS),
          DECLARE_METHOD(t_EllipticalFieldOfView, projectToBoundary, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EllipticalFieldOfView)[] = {
          { Py_tp_methods, t_EllipticalFieldOfView__methods_ },
          { Py_tp_init, (void *) t_EllipticalFieldOfView_init_ },
          { Py_tp_getset, t_EllipticalFieldOfView__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EllipticalFieldOfView)[] = {
          &PY_TYPE_DEF(::org::orekit::geometry::fov::SmoothFieldOfView),
          NULL
        };

        DEFINE_TYPE(EllipticalFieldOfView, t_EllipticalFieldOfView, EllipticalFieldOfView);

        void t_EllipticalFieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(EllipticalFieldOfView), &PY_TYPE_DEF(EllipticalFieldOfView), module, "EllipticalFieldOfView", 0);
        }

        void t_EllipticalFieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipticalFieldOfView), "class_", make_descriptor(EllipticalFieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipticalFieldOfView), "wrapfn_", make_descriptor(t_EllipticalFieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipticalFieldOfView), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EllipticalFieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EllipticalFieldOfView::initializeClass, 1)))
            return NULL;
          return t_EllipticalFieldOfView::wrap_Object(EllipticalFieldOfView(((t_EllipticalFieldOfView *) arg)->object.this$));
        }
        static PyObject *t_EllipticalFieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EllipticalFieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EllipticalFieldOfView_init_(t_EllipticalFieldOfView *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          jdouble a3;
          jdouble a4;
          EllipticalFieldOfView object((jobject) NULL);

          if (!parseArgs(args, "kkDDD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = EllipticalFieldOfView(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EllipticalFieldOfView_getFocus1(t_EllipticalFieldOfView *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getFocus1());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_EllipticalFieldOfView_getFocus2(t_EllipticalFieldOfView *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getFocus2());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_EllipticalFieldOfView_getHalfApertureAlongX(t_EllipticalFieldOfView *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getHalfApertureAlongX());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EllipticalFieldOfView_getHalfApertureAlongY(t_EllipticalFieldOfView *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getHalfApertureAlongY());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EllipticalFieldOfView_offsetFromBoundary(t_EllipticalFieldOfView *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          jdouble a1;
          ::org::orekit::propagation::events::VisibilityTrigger a2((jobject) NULL);
          PyTypeObject **p2;
          jdouble result;

          if (!parseArgs(args, "kDK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::propagation::events::VisibilityTrigger::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::propagation::events::t_VisibilityTrigger::parameters_))
          {
            OBJ_CALL(result = self->object.offsetFromBoundary(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EllipticalFieldOfView), (PyObject *) self, "offsetFromBoundary", args, 2);
        }

        static PyObject *t_EllipticalFieldOfView_projectToBoundary(t_EllipticalFieldOfView *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.projectToBoundary(a0));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          return callSuper(PY_TYPE(EllipticalFieldOfView), (PyObject *) self, "projectToBoundary", args, 2);
        }

        static PyObject *t_EllipticalFieldOfView_get__focus1(t_EllipticalFieldOfView *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getFocus1());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_EllipticalFieldOfView_get__focus2(t_EllipticalFieldOfView *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getFocus2());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_EllipticalFieldOfView_get__halfApertureAlongX(t_EllipticalFieldOfView *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getHalfApertureAlongX());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EllipticalFieldOfView_get__halfApertureAlongY(t_EllipticalFieldOfView *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getHalfApertureAlongY());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/RinexNavigationHeader.h"
#include "org/orekit/files/rinex/navigation/IonosphericCorrectionType.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/navigation/TimeSystemCorrection.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *RinexNavigationHeader::class$ = NULL;
          jmethodID *RinexNavigationHeader::mids$ = NULL;
          bool RinexNavigationHeader::live$ = false;

          jclass RinexNavigationHeader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/RinexNavigationHeader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_addTimeSystemCorrections_29ed96c27f0f2439] = env->getMethodID(cls, "addTimeSystemCorrections", "(Lorg/orekit/files/rinex/navigation/TimeSystemCorrection;)V");
              mids$[mid_getIonosphericCorrectionType_1b135730fc8e8e35] = env->getMethodID(cls, "getIonosphericCorrectionType", "()Lorg/orekit/files/rinex/navigation/IonosphericCorrectionType;");
              mids$[mid_getMergedFiles_55546ef6a647f39b] = env->getMethodID(cls, "getMergedFiles", "()I");
              mids$[mid_getNumberOfLeapSeconds_55546ef6a647f39b] = env->getMethodID(cls, "getNumberOfLeapSeconds", "()I");
              mids$[mid_getTimeSystemCorrections_e62d3bb06d56d7e3] = env->getMethodID(cls, "getTimeSystemCorrections", "()Ljava/util/List;");
              mids$[mid_setIonosphericCorrectionType_6012e3da3fe0033b] = env->getMethodID(cls, "setIonosphericCorrectionType", "(Lorg/orekit/files/rinex/navigation/IonosphericCorrectionType;)V");
              mids$[mid_setMergedFiles_44ed599e93e8a30c] = env->getMethodID(cls, "setMergedFiles", "(I)V");
              mids$[mid_setNumberOfLeapSeconds_44ed599e93e8a30c] = env->getMethodID(cls, "setNumberOfLeapSeconds", "(I)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexNavigationHeader::RinexNavigationHeader() : ::org::orekit::files::rinex::section::RinexBaseHeader(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void RinexNavigationHeader::addTimeSystemCorrections(const ::org::orekit::files::rinex::navigation::TimeSystemCorrection & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addTimeSystemCorrections_29ed96c27f0f2439], a0.this$);
          }

          ::org::orekit::files::rinex::navigation::IonosphericCorrectionType RinexNavigationHeader::getIonosphericCorrectionType() const
          {
            return ::org::orekit::files::rinex::navigation::IonosphericCorrectionType(env->callObjectMethod(this$, mids$[mid_getIonosphericCorrectionType_1b135730fc8e8e35]));
          }

          jint RinexNavigationHeader::getMergedFiles() const
          {
            return env->callIntMethod(this$, mids$[mid_getMergedFiles_55546ef6a647f39b]);
          }

          jint RinexNavigationHeader::getNumberOfLeapSeconds() const
          {
            return env->callIntMethod(this$, mids$[mid_getNumberOfLeapSeconds_55546ef6a647f39b]);
          }

          ::java::util::List RinexNavigationHeader::getTimeSystemCorrections() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getTimeSystemCorrections_e62d3bb06d56d7e3]));
          }

          void RinexNavigationHeader::setIonosphericCorrectionType(const ::org::orekit::files::rinex::navigation::IonosphericCorrectionType & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setIonosphericCorrectionType_6012e3da3fe0033b], a0.this$);
          }

          void RinexNavigationHeader::setMergedFiles(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMergedFiles_44ed599e93e8a30c], a0);
          }

          void RinexNavigationHeader::setNumberOfLeapSeconds(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setNumberOfLeapSeconds_44ed599e93e8a30c], a0);
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
          static PyObject *t_RinexNavigationHeader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexNavigationHeader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexNavigationHeader_init_(t_RinexNavigationHeader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexNavigationHeader_addTimeSystemCorrections(t_RinexNavigationHeader *self, PyObject *arg);
          static PyObject *t_RinexNavigationHeader_getIonosphericCorrectionType(t_RinexNavigationHeader *self);
          static PyObject *t_RinexNavigationHeader_getMergedFiles(t_RinexNavigationHeader *self);
          static PyObject *t_RinexNavigationHeader_getNumberOfLeapSeconds(t_RinexNavigationHeader *self);
          static PyObject *t_RinexNavigationHeader_getTimeSystemCorrections(t_RinexNavigationHeader *self);
          static PyObject *t_RinexNavigationHeader_setIonosphericCorrectionType(t_RinexNavigationHeader *self, PyObject *arg);
          static PyObject *t_RinexNavigationHeader_setMergedFiles(t_RinexNavigationHeader *self, PyObject *arg);
          static PyObject *t_RinexNavigationHeader_setNumberOfLeapSeconds(t_RinexNavigationHeader *self, PyObject *arg);
          static PyObject *t_RinexNavigationHeader_get__ionosphericCorrectionType(t_RinexNavigationHeader *self, void *data);
          static int t_RinexNavigationHeader_set__ionosphericCorrectionType(t_RinexNavigationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexNavigationHeader_get__mergedFiles(t_RinexNavigationHeader *self, void *data);
          static int t_RinexNavigationHeader_set__mergedFiles(t_RinexNavigationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexNavigationHeader_get__numberOfLeapSeconds(t_RinexNavigationHeader *self, void *data);
          static int t_RinexNavigationHeader_set__numberOfLeapSeconds(t_RinexNavigationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexNavigationHeader_get__timeSystemCorrections(t_RinexNavigationHeader *self, void *data);
          static PyGetSetDef t_RinexNavigationHeader__fields_[] = {
            DECLARE_GETSET_FIELD(t_RinexNavigationHeader, ionosphericCorrectionType),
            DECLARE_GETSET_FIELD(t_RinexNavigationHeader, mergedFiles),
            DECLARE_GETSET_FIELD(t_RinexNavigationHeader, numberOfLeapSeconds),
            DECLARE_GET_FIELD(t_RinexNavigationHeader, timeSystemCorrections),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexNavigationHeader__methods_[] = {
            DECLARE_METHOD(t_RinexNavigationHeader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexNavigationHeader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexNavigationHeader, addTimeSystemCorrections, METH_O),
            DECLARE_METHOD(t_RinexNavigationHeader, getIonosphericCorrectionType, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigationHeader, getMergedFiles, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigationHeader, getNumberOfLeapSeconds, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigationHeader, getTimeSystemCorrections, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigationHeader, setIonosphericCorrectionType, METH_O),
            DECLARE_METHOD(t_RinexNavigationHeader, setMergedFiles, METH_O),
            DECLARE_METHOD(t_RinexNavigationHeader, setNumberOfLeapSeconds, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexNavigationHeader)[] = {
            { Py_tp_methods, t_RinexNavigationHeader__methods_ },
            { Py_tp_init, (void *) t_RinexNavigationHeader_init_ },
            { Py_tp_getset, t_RinexNavigationHeader__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexNavigationHeader)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::section::RinexBaseHeader),
            NULL
          };

          DEFINE_TYPE(RinexNavigationHeader, t_RinexNavigationHeader, RinexNavigationHeader);

          void t_RinexNavigationHeader::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexNavigationHeader), &PY_TYPE_DEF(RinexNavigationHeader), module, "RinexNavigationHeader", 0);
          }

          void t_RinexNavigationHeader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexNavigationHeader), "class_", make_descriptor(RinexNavigationHeader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexNavigationHeader), "wrapfn_", make_descriptor(t_RinexNavigationHeader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexNavigationHeader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexNavigationHeader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexNavigationHeader::initializeClass, 1)))
              return NULL;
            return t_RinexNavigationHeader::wrap_Object(RinexNavigationHeader(((t_RinexNavigationHeader *) arg)->object.this$));
          }
          static PyObject *t_RinexNavigationHeader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexNavigationHeader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexNavigationHeader_init_(t_RinexNavigationHeader *self, PyObject *args, PyObject *kwds)
          {
            RinexNavigationHeader object((jobject) NULL);

            INT_CALL(object = RinexNavigationHeader());
            self->object = object;

            return 0;
          }

          static PyObject *t_RinexNavigationHeader_addTimeSystemCorrections(t_RinexNavigationHeader *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::TimeSystemCorrection a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::TimeSystemCorrection::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addTimeSystemCorrections(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addTimeSystemCorrections", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigationHeader_getIonosphericCorrectionType(t_RinexNavigationHeader *self)
          {
            ::org::orekit::files::rinex::navigation::IonosphericCorrectionType result((jobject) NULL);
            OBJ_CALL(result = self->object.getIonosphericCorrectionType());
            return ::org::orekit::files::rinex::navigation::t_IonosphericCorrectionType::wrap_Object(result);
          }

          static PyObject *t_RinexNavigationHeader_getMergedFiles(t_RinexNavigationHeader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMergedFiles());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexNavigationHeader_getNumberOfLeapSeconds(t_RinexNavigationHeader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNumberOfLeapSeconds());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexNavigationHeader_getTimeSystemCorrections(t_RinexNavigationHeader *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getTimeSystemCorrections());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::navigation::PY_TYPE(TimeSystemCorrection));
          }

          static PyObject *t_RinexNavigationHeader_setIonosphericCorrectionType(t_RinexNavigationHeader *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::IonosphericCorrectionType a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::files::rinex::navigation::IonosphericCorrectionType::initializeClass, &a0, &p0, ::org::orekit::files::rinex::navigation::t_IonosphericCorrectionType::parameters_))
            {
              OBJ_CALL(self->object.setIonosphericCorrectionType(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setIonosphericCorrectionType", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigationHeader_setMergedFiles(t_RinexNavigationHeader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setMergedFiles(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMergedFiles", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigationHeader_setNumberOfLeapSeconds(t_RinexNavigationHeader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setNumberOfLeapSeconds(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setNumberOfLeapSeconds", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigationHeader_get__ionosphericCorrectionType(t_RinexNavigationHeader *self, void *data)
          {
            ::org::orekit::files::rinex::navigation::IonosphericCorrectionType value((jobject) NULL);
            OBJ_CALL(value = self->object.getIonosphericCorrectionType());
            return ::org::orekit::files::rinex::navigation::t_IonosphericCorrectionType::wrap_Object(value);
          }
          static int t_RinexNavigationHeader_set__ionosphericCorrectionType(t_RinexNavigationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::files::rinex::navigation::IonosphericCorrectionType value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::IonosphericCorrectionType::initializeClass, &value))
              {
                INT_CALL(self->object.setIonosphericCorrectionType(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "ionosphericCorrectionType", arg);
            return -1;
          }

          static PyObject *t_RinexNavigationHeader_get__mergedFiles(t_RinexNavigationHeader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMergedFiles());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexNavigationHeader_set__mergedFiles(t_RinexNavigationHeader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setMergedFiles(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "mergedFiles", arg);
            return -1;
          }

          static PyObject *t_RinexNavigationHeader_get__numberOfLeapSeconds(t_RinexNavigationHeader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNumberOfLeapSeconds());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexNavigationHeader_set__numberOfLeapSeconds(t_RinexNavigationHeader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setNumberOfLeapSeconds(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "numberOfLeapSeconds", arg);
            return -1;
          }

          static PyObject *t_RinexNavigationHeader_get__timeSystemCorrections(t_RinexNavigationHeader *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getTimeSystemCorrections());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/MatrixUtils.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/linear/Array2DRowRealMatrix.h"
#include "java/util/List.h"
#include "org/hipparchus/linear/RealMatrixFormat.h"
#include "org/hipparchus/linear/AnyMatrix.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/fraction/BigFraction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/DependentVectorsHandler.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/fraction/Fraction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *MatrixUtils::class$ = NULL;
      jmethodID *MatrixUtils::mids$ = NULL;
      bool MatrixUtils::live$ = false;
      ::org::hipparchus::linear::RealMatrixFormat *MatrixUtils::DEFAULT_FORMAT = NULL;
      ::org::hipparchus::linear::RealMatrixFormat *MatrixUtils::OCTAVE_FORMAT = NULL;

      jclass MatrixUtils::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/MatrixUtils");

          mids$ = new jmethodID[max_mid];
          mids$[mid_bigFractionMatrixToRealMatrix_d42609dccc716ce0] = env->getStaticMethodID(cls, "bigFractionMatrixToRealMatrix", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
          mids$[mid_blockInverse_4d20baae453f6ac7] = env->getStaticMethodID(cls, "blockInverse", "(Lorg/hipparchus/linear/RealMatrix;I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_checkAdditionCompatible_ec267f4b97d4af4e] = env->getStaticMethodID(cls, "checkAdditionCompatible", "(Lorg/hipparchus/linear/AnyMatrix;Lorg/hipparchus/linear/AnyMatrix;)V");
          mids$[mid_checkColumnIndex_391ab531ddc55e65] = env->getStaticMethodID(cls, "checkColumnIndex", "(Lorg/hipparchus/linear/AnyMatrix;I)V");
          mids$[mid_checkMatrixIndex_2a9ba4374421a351] = env->getStaticMethodID(cls, "checkMatrixIndex", "(Lorg/hipparchus/linear/AnyMatrix;II)V");
          mids$[mid_checkMultiplicationCompatible_ec267f4b97d4af4e] = env->getStaticMethodID(cls, "checkMultiplicationCompatible", "(Lorg/hipparchus/linear/AnyMatrix;Lorg/hipparchus/linear/AnyMatrix;)V");
          mids$[mid_checkRowIndex_391ab531ddc55e65] = env->getStaticMethodID(cls, "checkRowIndex", "(Lorg/hipparchus/linear/AnyMatrix;I)V");
          mids$[mid_checkSameColumnDimension_ec267f4b97d4af4e] = env->getStaticMethodID(cls, "checkSameColumnDimension", "(Lorg/hipparchus/linear/AnyMatrix;Lorg/hipparchus/linear/AnyMatrix;)V");
          mids$[mid_checkSameRowDimension_ec267f4b97d4af4e] = env->getStaticMethodID(cls, "checkSameRowDimension", "(Lorg/hipparchus/linear/AnyMatrix;Lorg/hipparchus/linear/AnyMatrix;)V");
          mids$[mid_checkSubMatrixIndex_00cfed1e02f34b4f] = env->getStaticMethodID(cls, "checkSubMatrixIndex", "(Lorg/hipparchus/linear/AnyMatrix;[I[I)V");
          mids$[mid_checkSubMatrixIndex_6051820354d91a14] = env->getStaticMethodID(cls, "checkSubMatrixIndex", "(Lorg/hipparchus/linear/AnyMatrix;IIII)V");
          mids$[mid_checkSubtractionCompatible_ec267f4b97d4af4e] = env->getStaticMethodID(cls, "checkSubtractionCompatible", "(Lorg/hipparchus/linear/AnyMatrix;Lorg/hipparchus/linear/AnyMatrix;)V");
          mids$[mid_checkSymmetric_5c88fbe0835e7c85] = env->getStaticMethodID(cls, "checkSymmetric", "(Lorg/hipparchus/linear/RealMatrix;D)V");
          mids$[mid_createColumnFieldMatrix_a0ea14aaa8e13e7e] = env->getStaticMethodID(cls, "createColumnFieldMatrix", "([Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_createColumnRealMatrix_f4daeeaa8c92c416] = env->getStaticMethodID(cls, "createColumnRealMatrix", "([D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_createFieldDiagonalMatrix_a0ea14aaa8e13e7e] = env->getStaticMethodID(cls, "createFieldDiagonalMatrix", "([Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_createFieldIdentityMatrix_12ee4122b2b5b2fc] = env->getStaticMethodID(cls, "createFieldIdentityMatrix", "(Lorg/hipparchus/Field;I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_createFieldMatrix_13cf8439750db8ef] = env->getStaticMethodID(cls, "createFieldMatrix", "([[Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_createFieldMatrix_32f51209d9351e3a] = env->getStaticMethodID(cls, "createFieldMatrix", "(Lorg/hipparchus/Field;II)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_createFieldVector_ed23db5d5a52a892] = env->getStaticMethodID(cls, "createFieldVector", "([Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_createFieldVector_0e05ddcd4bfb2fbd] = env->getStaticMethodID(cls, "createFieldVector", "(Lorg/hipparchus/Field;I)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_createRealDiagonalMatrix_f4daeeaa8c92c416] = env->getStaticMethodID(cls, "createRealDiagonalMatrix", "([D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_createRealIdentityMatrix_2a3e0c79a1b41fe4] = env->getStaticMethodID(cls, "createRealIdentityMatrix", "(I)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_createRealMatrix_2d1b7d41dfd6b278] = env->getStaticMethodID(cls, "createRealMatrix", "([[D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_createRealMatrix_28a444e31666746c] = env->getStaticMethodID(cls, "createRealMatrix", "(II)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_createRealVector_96f31e3adf588399] = env->getStaticMethodID(cls, "createRealVector", "([D)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_createRealVector_b50dc3915c68ddbc] = env->getStaticMethodID(cls, "createRealVector", "(I)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_createRowFieldMatrix_a0ea14aaa8e13e7e] = env->getStaticMethodID(cls, "createRowFieldMatrix", "([Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_createRowRealMatrix_f4daeeaa8c92c416] = env->getStaticMethodID(cls, "createRowRealMatrix", "([D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_fractionMatrixToRealMatrix_d42609dccc716ce0] = env->getStaticMethodID(cls, "fractionMatrixToRealMatrix", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
          mids$[mid_inverse_be124f4006dc9f69] = env->getStaticMethodID(cls, "inverse", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_inverse_514e92b8dbd002ec] = env->getStaticMethodID(cls, "inverse", "(Lorg/hipparchus/linear/RealMatrix;D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_isSymmetric_c7ef6c2e438b9c04] = env->getStaticMethodID(cls, "isSymmetric", "(Lorg/hipparchus/linear/RealMatrix;D)Z");
          mids$[mid_matrixExponential_be124f4006dc9f69] = env->getStaticMethodID(cls, "matrixExponential", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_orthonormalize_f8a8b8089136721c] = env->getStaticMethodID(cls, "orthonormalize", "(Ljava/util/List;DLorg/hipparchus/linear/DependentVectorsHandler;)Ljava/util/List;");
          mids$[mid_orthonormalize_bbc8537193f980d7] = env->getStaticMethodID(cls, "orthonormalize", "(Lorg/hipparchus/Field;Ljava/util/List;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/linear/DependentVectorsHandler;)Ljava/util/List;");
          mids$[mid_solveLowerTriangularSystem_316bd569c3edbb4d] = env->getStaticMethodID(cls, "solveLowerTriangularSystem", "(Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealVector;)V");
          mids$[mid_solveUpperTriangularSystem_316bd569c3edbb4d] = env->getStaticMethodID(cls, "solveUpperTriangularSystem", "(Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealVector;)V");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_FORMAT = new ::org::hipparchus::linear::RealMatrixFormat(env->getStaticObjectField(cls, "DEFAULT_FORMAT", "Lorg/hipparchus/linear/RealMatrixFormat;"));
          OCTAVE_FORMAT = new ::org::hipparchus::linear::RealMatrixFormat(env->getStaticObjectField(cls, "OCTAVE_FORMAT", "Lorg/hipparchus/linear/RealMatrixFormat;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::linear::Array2DRowRealMatrix MatrixUtils::bigFractionMatrixToRealMatrix(const ::org::hipparchus::linear::FieldMatrix & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::Array2DRowRealMatrix(env->callStaticObjectMethod(cls, mids$[mid_bigFractionMatrixToRealMatrix_d42609dccc716ce0], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::blockInverse(const ::org::hipparchus::linear::RealMatrix & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_blockInverse_4d20baae453f6ac7], a0.this$, a1));
      }

      void MatrixUtils::checkAdditionCompatible(const ::org::hipparchus::linear::AnyMatrix & a0, const ::org::hipparchus::linear::AnyMatrix & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkAdditionCompatible_ec267f4b97d4af4e], a0.this$, a1.this$);
      }

      void MatrixUtils::checkColumnIndex(const ::org::hipparchus::linear::AnyMatrix & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkColumnIndex_391ab531ddc55e65], a0.this$, a1);
      }

      void MatrixUtils::checkMatrixIndex(const ::org::hipparchus::linear::AnyMatrix & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkMatrixIndex_2a9ba4374421a351], a0.this$, a1, a2);
      }

      void MatrixUtils::checkMultiplicationCompatible(const ::org::hipparchus::linear::AnyMatrix & a0, const ::org::hipparchus::linear::AnyMatrix & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkMultiplicationCompatible_ec267f4b97d4af4e], a0.this$, a1.this$);
      }

      void MatrixUtils::checkRowIndex(const ::org::hipparchus::linear::AnyMatrix & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkRowIndex_391ab531ddc55e65], a0.this$, a1);
      }

      void MatrixUtils::checkSameColumnDimension(const ::org::hipparchus::linear::AnyMatrix & a0, const ::org::hipparchus::linear::AnyMatrix & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkSameColumnDimension_ec267f4b97d4af4e], a0.this$, a1.this$);
      }

      void MatrixUtils::checkSameRowDimension(const ::org::hipparchus::linear::AnyMatrix & a0, const ::org::hipparchus::linear::AnyMatrix & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkSameRowDimension_ec267f4b97d4af4e], a0.this$, a1.this$);
      }

      void MatrixUtils::checkSubMatrixIndex(const ::org::hipparchus::linear::AnyMatrix & a0, const JArray< jint > & a1, const JArray< jint > & a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkSubMatrixIndex_00cfed1e02f34b4f], a0.this$, a1.this$, a2.this$);
      }

      void MatrixUtils::checkSubMatrixIndex(const ::org::hipparchus::linear::AnyMatrix & a0, jint a1, jint a2, jint a3, jint a4)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkSubMatrixIndex_6051820354d91a14], a0.this$, a1, a2, a3, a4);
      }

      void MatrixUtils::checkSubtractionCompatible(const ::org::hipparchus::linear::AnyMatrix & a0, const ::org::hipparchus::linear::AnyMatrix & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkSubtractionCompatible_ec267f4b97d4af4e], a0.this$, a1.this$);
      }

      void MatrixUtils::checkSymmetric(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkSymmetric_5c88fbe0835e7c85], a0.this$, a1);
      }

      ::org::hipparchus::linear::FieldMatrix MatrixUtils::createColumnFieldMatrix(const JArray< ::org::hipparchus::FieldElement > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::FieldMatrix(env->callStaticObjectMethod(cls, mids$[mid_createColumnFieldMatrix_a0ea14aaa8e13e7e], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::createColumnRealMatrix(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_createColumnRealMatrix_f4daeeaa8c92c416], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix MatrixUtils::createFieldDiagonalMatrix(const JArray< ::org::hipparchus::FieldElement > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::FieldMatrix(env->callStaticObjectMethod(cls, mids$[mid_createFieldDiagonalMatrix_a0ea14aaa8e13e7e], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix MatrixUtils::createFieldIdentityMatrix(const ::org::hipparchus::Field & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::FieldMatrix(env->callStaticObjectMethod(cls, mids$[mid_createFieldIdentityMatrix_12ee4122b2b5b2fc], a0.this$, a1));
      }

      ::org::hipparchus::linear::FieldMatrix MatrixUtils::createFieldMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::FieldMatrix(env->callStaticObjectMethod(cls, mids$[mid_createFieldMatrix_13cf8439750db8ef], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix MatrixUtils::createFieldMatrix(const ::org::hipparchus::Field & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::FieldMatrix(env->callStaticObjectMethod(cls, mids$[mid_createFieldMatrix_32f51209d9351e3a], a0.this$, a1, a2));
      }

      ::org::hipparchus::linear::FieldVector MatrixUtils::createFieldVector(const JArray< ::org::hipparchus::FieldElement > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::FieldVector(env->callStaticObjectMethod(cls, mids$[mid_createFieldVector_ed23db5d5a52a892], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector MatrixUtils::createFieldVector(const ::org::hipparchus::Field & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::FieldVector(env->callStaticObjectMethod(cls, mids$[mid_createFieldVector_0e05ddcd4bfb2fbd], a0.this$, a1));
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::createRealDiagonalMatrix(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_createRealDiagonalMatrix_f4daeeaa8c92c416], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::createRealIdentityMatrix(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_createRealIdentityMatrix_2a3e0c79a1b41fe4], a0));
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::createRealMatrix(const JArray< JArray< jdouble > > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_createRealMatrix_2d1b7d41dfd6b278], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::createRealMatrix(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_createRealMatrix_28a444e31666746c], a0, a1));
      }

      ::org::hipparchus::linear::RealVector MatrixUtils::createRealVector(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealVector(env->callStaticObjectMethod(cls, mids$[mid_createRealVector_96f31e3adf588399], a0.this$));
      }

      ::org::hipparchus::linear::RealVector MatrixUtils::createRealVector(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealVector(env->callStaticObjectMethod(cls, mids$[mid_createRealVector_b50dc3915c68ddbc], a0));
      }

      ::org::hipparchus::linear::FieldMatrix MatrixUtils::createRowFieldMatrix(const JArray< ::org::hipparchus::FieldElement > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::FieldMatrix(env->callStaticObjectMethod(cls, mids$[mid_createRowFieldMatrix_a0ea14aaa8e13e7e], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::createRowRealMatrix(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_createRowRealMatrix_f4daeeaa8c92c416], a0.this$));
      }

      ::org::hipparchus::linear::Array2DRowRealMatrix MatrixUtils::fractionMatrixToRealMatrix(const ::org::hipparchus::linear::FieldMatrix & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::Array2DRowRealMatrix(env->callStaticObjectMethod(cls, mids$[mid_fractionMatrixToRealMatrix_d42609dccc716ce0], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::inverse(const ::org::hipparchus::linear::RealMatrix & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_inverse_be124f4006dc9f69], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::inverse(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_inverse_514e92b8dbd002ec], a0.this$, a1));
      }

      jboolean MatrixUtils::isSymmetric(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_isSymmetric_c7ef6c2e438b9c04], a0.this$, a1);
      }

      ::org::hipparchus::linear::RealMatrix MatrixUtils::matrixExponential(const ::org::hipparchus::linear::RealMatrix & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::RealMatrix(env->callStaticObjectMethod(cls, mids$[mid_matrixExponential_be124f4006dc9f69], a0.this$));
      }

      ::java::util::List MatrixUtils::orthonormalize(const ::java::util::List & a0, jdouble a1, const ::org::hipparchus::linear::DependentVectorsHandler & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_orthonormalize_f8a8b8089136721c], a0.this$, a1, a2.this$));
      }

      ::java::util::List MatrixUtils::orthonormalize(const ::org::hipparchus::Field & a0, const ::java::util::List & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::linear::DependentVectorsHandler & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_orthonormalize_bbc8537193f980d7], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      void MatrixUtils::solveLowerTriangularSystem(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::hipparchus::linear::RealVector & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_solveLowerTriangularSystem_316bd569c3edbb4d], a0.this$, a1.this$);
      }

      void MatrixUtils::solveUpperTriangularSystem(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::hipparchus::linear::RealVector & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_solveUpperTriangularSystem_316bd569c3edbb4d], a0.this$, a1.this$);
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
      static PyObject *t_MatrixUtils_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_bigFractionMatrixToRealMatrix(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_blockInverse(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_checkAdditionCompatible(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_checkColumnIndex(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_checkMatrixIndex(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_checkMultiplicationCompatible(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_checkRowIndex(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_checkSameColumnDimension(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_checkSameRowDimension(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_checkSubMatrixIndex(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_checkSubtractionCompatible(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_checkSymmetric(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_createColumnFieldMatrix(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_createColumnRealMatrix(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_createFieldDiagonalMatrix(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_createFieldIdentityMatrix(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_createFieldMatrix(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_createFieldVector(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_createRealDiagonalMatrix(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_createRealIdentityMatrix(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_createRealMatrix(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_createRealVector(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_createRowFieldMatrix(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_createRowRealMatrix(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_fractionMatrixToRealMatrix(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_inverse(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_isSymmetric(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_matrixExponential(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixUtils_orthonormalize(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_solveLowerTriangularSystem(PyTypeObject *type, PyObject *args);
      static PyObject *t_MatrixUtils_solveUpperTriangularSystem(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_MatrixUtils__methods_[] = {
        DECLARE_METHOD(t_MatrixUtils, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, bigFractionMatrixToRealMatrix, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, blockInverse, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, checkAdditionCompatible, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, checkColumnIndex, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, checkMatrixIndex, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, checkMultiplicationCompatible, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, checkRowIndex, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, checkSameColumnDimension, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, checkSameRowDimension, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, checkSubMatrixIndex, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, checkSubtractionCompatible, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, checkSymmetric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createColumnFieldMatrix, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createColumnRealMatrix, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createFieldDiagonalMatrix, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createFieldIdentityMatrix, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createFieldMatrix, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createFieldVector, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createRealDiagonalMatrix, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createRealIdentityMatrix, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createRealMatrix, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createRealVector, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createRowFieldMatrix, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, createRowRealMatrix, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, fractionMatrixToRealMatrix, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, inverse, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, isSymmetric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, matrixExponential, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, orthonormalize, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, solveLowerTriangularSystem, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MatrixUtils, solveUpperTriangularSystem, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MatrixUtils)[] = {
        { Py_tp_methods, t_MatrixUtils__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MatrixUtils)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MatrixUtils, t_MatrixUtils, MatrixUtils);

      void t_MatrixUtils::install(PyObject *module)
      {
        installType(&PY_TYPE(MatrixUtils), &PY_TYPE_DEF(MatrixUtils), module, "MatrixUtils", 0);
      }

      void t_MatrixUtils::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatrixUtils), "class_", make_descriptor(MatrixUtils::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatrixUtils), "wrapfn_", make_descriptor(t_MatrixUtils::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatrixUtils), "boxfn_", make_descriptor(boxObject));
        env->getClass(MatrixUtils::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatrixUtils), "DEFAULT_FORMAT", make_descriptor(::org::hipparchus::linear::t_RealMatrixFormat::wrap_Object(*MatrixUtils::DEFAULT_FORMAT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatrixUtils), "OCTAVE_FORMAT", make_descriptor(::org::hipparchus::linear::t_RealMatrixFormat::wrap_Object(*MatrixUtils::OCTAVE_FORMAT)));
      }

      static PyObject *t_MatrixUtils_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MatrixUtils::initializeClass, 1)))
          return NULL;
        return t_MatrixUtils::wrap_Object(MatrixUtils(((t_MatrixUtils *) arg)->object.this$));
      }
      static PyObject *t_MatrixUtils_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MatrixUtils::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MatrixUtils_bigFractionMatrixToRealMatrix(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::Array2DRowRealMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::bigFractionMatrixToRealMatrix(a0));
          return ::org::hipparchus::linear::t_Array2DRowRealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "bigFractionMatrixToRealMatrix", arg);
        return NULL;
      }

      static PyObject *t_MatrixUtils_blockInverse(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        jint a1;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "kI", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::blockInverse(a0, a1));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "blockInverse", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_checkAdditionCompatible(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::AnyMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::AnyMatrix a1((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::hipparchus::linear::AnyMatrix::initializeClass, ::org::hipparchus::linear::AnyMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::linear::MatrixUtils::checkAdditionCompatible(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkAdditionCompatible", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_checkColumnIndex(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::AnyMatrix a0((jobject) NULL);
        jint a1;

        if (!parseArgs(args, "kI", ::org::hipparchus::linear::AnyMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::linear::MatrixUtils::checkColumnIndex(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkColumnIndex", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_checkMatrixIndex(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::AnyMatrix a0((jobject) NULL);
        jint a1;
        jint a2;

        if (!parseArgs(args, "kII", ::org::hipparchus::linear::AnyMatrix::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(::org::hipparchus::linear::MatrixUtils::checkMatrixIndex(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkMatrixIndex", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_checkMultiplicationCompatible(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::AnyMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::AnyMatrix a1((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::hipparchus::linear::AnyMatrix::initializeClass, ::org::hipparchus::linear::AnyMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::linear::MatrixUtils::checkMultiplicationCompatible(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkMultiplicationCompatible", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_checkRowIndex(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::AnyMatrix a0((jobject) NULL);
        jint a1;

        if (!parseArgs(args, "kI", ::org::hipparchus::linear::AnyMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::linear::MatrixUtils::checkRowIndex(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkRowIndex", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_checkSameColumnDimension(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::AnyMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::AnyMatrix a1((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::hipparchus::linear::AnyMatrix::initializeClass, ::org::hipparchus::linear::AnyMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::linear::MatrixUtils::checkSameColumnDimension(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkSameColumnDimension", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_checkSameRowDimension(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::AnyMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::AnyMatrix a1((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::hipparchus::linear::AnyMatrix::initializeClass, ::org::hipparchus::linear::AnyMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::linear::MatrixUtils::checkSameRowDimension(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkSameRowDimension", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_checkSubMatrixIndex(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::linear::AnyMatrix a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            JArray< jint > a2((jobject) NULL);

            if (!parseArgs(args, "k[I[I", ::org::hipparchus::linear::AnyMatrix::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(::org::hipparchus::linear::MatrixUtils::checkSubMatrixIndex(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::AnyMatrix a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::AnyMatrix::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(::org::hipparchus::linear::MatrixUtils::checkSubMatrixIndex(a0, a1, a2, a3, a4));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "checkSubMatrixIndex", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_checkSubtractionCompatible(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::AnyMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::AnyMatrix a1((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::hipparchus::linear::AnyMatrix::initializeClass, ::org::hipparchus::linear::AnyMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::linear::MatrixUtils::checkSubtractionCompatible(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkSubtractionCompatible", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_checkSymmetric(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        jdouble a1;

        if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::linear::MatrixUtils::checkSymmetric(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkSymmetric", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createColumnFieldMatrix(PyTypeObject *type, PyObject *arg)
      {
        JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createColumnFieldMatrix(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createColumnFieldMatrix", arg);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createColumnRealMatrix(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createColumnRealMatrix(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createColumnRealMatrix", arg);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createFieldDiagonalMatrix(PyTypeObject *type, PyObject *arg)
      {
        JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createFieldDiagonalMatrix(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createFieldDiagonalMatrix", arg);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createFieldIdentityMatrix(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createFieldIdentityMatrix(a0, a1));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createFieldIdentityMatrix", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createFieldMatrix(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< JArray< ::org::hipparchus::FieldElement > > a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "[[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createFieldMatrix(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createFieldMatrix(a0, a1, a2));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "createFieldMatrix", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createFieldVector(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createFieldVector(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createFieldVector(a0, a1));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "createFieldVector", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createRealDiagonalMatrix(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createRealDiagonalMatrix(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createRealDiagonalMatrix", arg);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createRealIdentityMatrix(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createRealIdentityMatrix(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createRealIdentityMatrix", arg);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createRealMatrix(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< JArray< jdouble > > a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "[[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createRealMatrix(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            jint a0;
            jint a1;
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createRealMatrix(a0, a1));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "createRealMatrix", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createRealVector(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createRealVector(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          {
            jint a0;
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createRealVector(a0));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "createRealVector", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createRowFieldMatrix(PyTypeObject *type, PyObject *arg)
      {
        JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createRowFieldMatrix(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createRowFieldMatrix", arg);
        return NULL;
      }

      static PyObject *t_MatrixUtils_createRowRealMatrix(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::createRowRealMatrix(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createRowRealMatrix", arg);
        return NULL;
      }

      static PyObject *t_MatrixUtils_fractionMatrixToRealMatrix(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::Array2DRowRealMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::fractionMatrixToRealMatrix(a0));
          return ::org::hipparchus::linear::t_Array2DRowRealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "fractionMatrixToRealMatrix", arg);
        return NULL;
      }

      static PyObject *t_MatrixUtils_inverse(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::inverse(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::inverse(a0, a1));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "inverse", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_isSymmetric(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        jdouble a1;
        jboolean result;

        if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::isSymmetric(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError(type, "isSymmetric", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_matrixExponential(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::matrixExponential(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "matrixExponential", arg);
        return NULL;
      }

      static PyObject *t_MatrixUtils_orthonormalize(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::hipparchus::linear::DependentVectorsHandler a2((jobject) NULL);
            PyTypeObject **p2;
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, "KDK", ::java::util::List::initializeClass, ::org::hipparchus::linear::DependentVectorsHandler::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &p2, ::org::hipparchus::linear::t_DependentVectorsHandler::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::orthonormalize(a0, a1, a2));
              return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::linear::PY_TYPE(RealVector));
            }
          }
          break;
         case 4:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::linear::DependentVectorsHandler a3((jobject) NULL);
            PyTypeObject **p3;
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::hipparchus::Field::initializeClass, ::java::util::List::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::linear::DependentVectorsHandler::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::linear::t_DependentVectorsHandler::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::linear::MatrixUtils::orthonormalize(a0, a1, a2, a3));
              return ::java::util::t_List::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "orthonormalize", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_solveLowerTriangularSystem(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::RealVector a1((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::linear::MatrixUtils::solveLowerTriangularSystem(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "solveLowerTriangularSystem", args);
        return NULL;
      }

      static PyObject *t_MatrixUtils_solveUpperTriangularSystem(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::RealVector a1((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::linear::MatrixUtils::solveUpperTriangularSystem(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "solveUpperTriangularSystem", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/SbasId.h"
#include "org/orekit/files/rinex/navigation/SbasId.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *SbasId::class$ = NULL;
          jmethodID *SbasId::mids$ = NULL;
          bool SbasId::live$ = false;
          SbasId *SbasId::A_SBAS = NULL;
          SbasId *SbasId::BDSBAS = NULL;
          SbasId *SbasId::EGNOS = NULL;
          SbasId *SbasId::GAGAN = NULL;
          SbasId *SbasId::KASS = NULL;
          SbasId *SbasId::MSAS = NULL;
          SbasId *SbasId::SACCSA = NULL;
          SbasId *SbasId::SDCM = NULL;
          SbasId *SbasId::SPAN = NULL;
          SbasId *SbasId::WAAS = NULL;

          jclass SbasId::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/SbasId");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_22b5c5331d77e2d2] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/rinex/navigation/SbasId;");
              mids$[mid_values_a796ebe7f942ce44] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/rinex/navigation/SbasId;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              A_SBAS = new SbasId(env->getStaticObjectField(cls, "A_SBAS", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              BDSBAS = new SbasId(env->getStaticObjectField(cls, "BDSBAS", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              EGNOS = new SbasId(env->getStaticObjectField(cls, "EGNOS", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              GAGAN = new SbasId(env->getStaticObjectField(cls, "GAGAN", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              KASS = new SbasId(env->getStaticObjectField(cls, "KASS", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              MSAS = new SbasId(env->getStaticObjectField(cls, "MSAS", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              SACCSA = new SbasId(env->getStaticObjectField(cls, "SACCSA", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              SDCM = new SbasId(env->getStaticObjectField(cls, "SDCM", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              SPAN = new SbasId(env->getStaticObjectField(cls, "SPAN", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              WAAS = new SbasId(env->getStaticObjectField(cls, "WAAS", "Lorg/orekit/files/rinex/navigation/SbasId;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SbasId SbasId::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return SbasId(env->callStaticObjectMethod(cls, mids$[mid_valueOf_22b5c5331d77e2d2], a0.this$));
          }

          JArray< SbasId > SbasId::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< SbasId >(env->callStaticObjectMethod(cls, mids$[mid_values_a796ebe7f942ce44]));
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
          static PyObject *t_SbasId_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SbasId_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SbasId_of_(t_SbasId *self, PyObject *args);
          static PyObject *t_SbasId_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_SbasId_values(PyTypeObject *type);
          static PyObject *t_SbasId_get__parameters_(t_SbasId *self, void *data);
          static PyGetSetDef t_SbasId__fields_[] = {
            DECLARE_GET_FIELD(t_SbasId, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SbasId__methods_[] = {
            DECLARE_METHOD(t_SbasId, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SbasId, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SbasId, of_, METH_VARARGS),
            DECLARE_METHOD(t_SbasId, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_SbasId, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SbasId)[] = {
            { Py_tp_methods, t_SbasId__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SbasId__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SbasId)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(SbasId, t_SbasId, SbasId);
          PyObject *t_SbasId::wrap_Object(const SbasId& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SbasId::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SbasId *self = (t_SbasId *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_SbasId::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SbasId::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SbasId *self = (t_SbasId *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_SbasId::install(PyObject *module)
          {
            installType(&PY_TYPE(SbasId), &PY_TYPE_DEF(SbasId), module, "SbasId", 0);
          }

          void t_SbasId::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "class_", make_descriptor(SbasId::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "wrapfn_", make_descriptor(t_SbasId::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "boxfn_", make_descriptor(boxObject));
            env->getClass(SbasId::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "A_SBAS", make_descriptor(t_SbasId::wrap_Object(*SbasId::A_SBAS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "BDSBAS", make_descriptor(t_SbasId::wrap_Object(*SbasId::BDSBAS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "EGNOS", make_descriptor(t_SbasId::wrap_Object(*SbasId::EGNOS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "GAGAN", make_descriptor(t_SbasId::wrap_Object(*SbasId::GAGAN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "KASS", make_descriptor(t_SbasId::wrap_Object(*SbasId::KASS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "MSAS", make_descriptor(t_SbasId::wrap_Object(*SbasId::MSAS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "SACCSA", make_descriptor(t_SbasId::wrap_Object(*SbasId::SACCSA)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "SDCM", make_descriptor(t_SbasId::wrap_Object(*SbasId::SDCM)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "SPAN", make_descriptor(t_SbasId::wrap_Object(*SbasId::SPAN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SbasId), "WAAS", make_descriptor(t_SbasId::wrap_Object(*SbasId::WAAS)));
          }

          static PyObject *t_SbasId_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SbasId::initializeClass, 1)))
              return NULL;
            return t_SbasId::wrap_Object(SbasId(((t_SbasId *) arg)->object.this$));
          }
          static PyObject *t_SbasId_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SbasId::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SbasId_of_(t_SbasId *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_SbasId_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            SbasId result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::navigation::SbasId::valueOf(a0));
              return t_SbasId::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_SbasId_values(PyTypeObject *type)
          {
            JArray< SbasId > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::rinex::navigation::SbasId::values());
            return JArray<jobject>(result.this$).wrap(t_SbasId::wrap_jobject);
          }
          static PyObject *t_SbasId_get__parameters_(t_SbasId *self, void *data)
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
#include "org/hipparchus/analysis/MultivariateMatrixFunction.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *MultivariateMatrixFunction::class$ = NULL;
      jmethodID *MultivariateMatrixFunction::mids$ = NULL;
      bool MultivariateMatrixFunction::live$ = false;

      jclass MultivariateMatrixFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/MultivariateMatrixFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_7e7c2ec7e6e555ee] = env->getMethodID(cls, "value", "([D)[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< JArray< jdouble > > MultivariateMatrixFunction::value(const JArray< jdouble > & a0) const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_value_7e7c2ec7e6e555ee], a0.this$));
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
      static PyObject *t_MultivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultivariateMatrixFunction_value(t_MultivariateMatrixFunction *self, PyObject *arg);

      static PyMethodDef t_MultivariateMatrixFunction__methods_[] = {
        DECLARE_METHOD(t_MultivariateMatrixFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultivariateMatrixFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultivariateMatrixFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultivariateMatrixFunction)[] = {
        { Py_tp_methods, t_MultivariateMatrixFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultivariateMatrixFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MultivariateMatrixFunction, t_MultivariateMatrixFunction, MultivariateMatrixFunction);

      void t_MultivariateMatrixFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(MultivariateMatrixFunction), &PY_TYPE_DEF(MultivariateMatrixFunction), module, "MultivariateMatrixFunction", 0);
      }

      void t_MultivariateMatrixFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateMatrixFunction), "class_", make_descriptor(MultivariateMatrixFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateMatrixFunction), "wrapfn_", make_descriptor(t_MultivariateMatrixFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateMatrixFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultivariateMatrixFunction::initializeClass, 1)))
          return NULL;
        return t_MultivariateMatrixFunction::wrap_Object(MultivariateMatrixFunction(((t_MultivariateMatrixFunction *) arg)->object.this$));
      }
      static PyObject *t_MultivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultivariateMatrixFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MultivariateMatrixFunction_value(t_MultivariateMatrixFunction *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = self->object.value(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/AttitudeProviderModifier.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *AttitudeProviderModifier::class$ = NULL;
      jmethodID *AttitudeProviderModifier::mids$ = NULL;
      bool AttitudeProviderModifier::live$ = false;

      jclass AttitudeProviderModifier::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/AttitudeProviderModifier");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getUnderlyingAttitudeProvider_331f12bb6017243b] = env->getMethodID(cls, "getUnderlyingAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::attitudes::AttitudeProvider AttitudeProviderModifier::getUnderlyingAttitudeProvider() const
      {
        return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getUnderlyingAttitudeProvider_331f12bb6017243b]));
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
      static PyObject *t_AttitudeProviderModifier_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudeProviderModifier_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudeProviderModifier_getUnderlyingAttitudeProvider(t_AttitudeProviderModifier *self);
      static PyObject *t_AttitudeProviderModifier_get__underlyingAttitudeProvider(t_AttitudeProviderModifier *self, void *data);
      static PyGetSetDef t_AttitudeProviderModifier__fields_[] = {
        DECLARE_GET_FIELD(t_AttitudeProviderModifier, underlyingAttitudeProvider),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AttitudeProviderModifier__methods_[] = {
        DECLARE_METHOD(t_AttitudeProviderModifier, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudeProviderModifier, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudeProviderModifier, getUnderlyingAttitudeProvider, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AttitudeProviderModifier)[] = {
        { Py_tp_methods, t_AttitudeProviderModifier__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AttitudeProviderModifier__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AttitudeProviderModifier)[] = {
        &PY_TYPE_DEF(::org::orekit::attitudes::AttitudeProvider),
        NULL
      };

      DEFINE_TYPE(AttitudeProviderModifier, t_AttitudeProviderModifier, AttitudeProviderModifier);

      void t_AttitudeProviderModifier::install(PyObject *module)
      {
        installType(&PY_TYPE(AttitudeProviderModifier), &PY_TYPE_DEF(AttitudeProviderModifier), module, "AttitudeProviderModifier", 0);
      }

      void t_AttitudeProviderModifier::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeProviderModifier), "class_", make_descriptor(AttitudeProviderModifier::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeProviderModifier), "wrapfn_", make_descriptor(t_AttitudeProviderModifier::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeProviderModifier), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AttitudeProviderModifier_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AttitudeProviderModifier::initializeClass, 1)))
          return NULL;
        return t_AttitudeProviderModifier::wrap_Object(AttitudeProviderModifier(((t_AttitudeProviderModifier *) arg)->object.this$));
      }
      static PyObject *t_AttitudeProviderModifier_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AttitudeProviderModifier::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AttitudeProviderModifier_getUnderlyingAttitudeProvider(t_AttitudeProviderModifier *self)
      {
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getUnderlyingAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
      }

      static PyObject *t_AttitudeProviderModifier_get__underlyingAttitudeProvider(t_AttitudeProviderModifier *self, void *data)
      {
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getUnderlyingAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {

        ::java::lang::Class *Measurement::class$ = NULL;
        jmethodID *Measurement::mids$ = NULL;
        bool Measurement::live$ = false;

        jclass Measurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/Measurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCovariance_f77d745f2128c391] = env->getMethodID(cls, "getCovariance", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getTime_b74f83833fdad017] = env->getMethodID(cls, "getTime", "()D");
            mids$[mid_getValue_3a10cc75bd070d84] = env->getMethodID(cls, "getValue", "()Lorg/hipparchus/linear/RealVector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::linear::RealMatrix Measurement::getCovariance() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovariance_f77d745f2128c391]));
        }

        jdouble Measurement::getTime() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTime_b74f83833fdad017]);
        }

        ::org::hipparchus::linear::RealVector Measurement::getValue() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getValue_3a10cc75bd070d84]));
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
        static PyObject *t_Measurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Measurement_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Measurement_getCovariance(t_Measurement *self);
        static PyObject *t_Measurement_getTime(t_Measurement *self);
        static PyObject *t_Measurement_getValue(t_Measurement *self);
        static PyObject *t_Measurement_get__covariance(t_Measurement *self, void *data);
        static PyObject *t_Measurement_get__time(t_Measurement *self, void *data);
        static PyObject *t_Measurement_get__value(t_Measurement *self, void *data);
        static PyGetSetDef t_Measurement__fields_[] = {
          DECLARE_GET_FIELD(t_Measurement, covariance),
          DECLARE_GET_FIELD(t_Measurement, time),
          DECLARE_GET_FIELD(t_Measurement, value),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Measurement__methods_[] = {
          DECLARE_METHOD(t_Measurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Measurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Measurement, getCovariance, METH_NOARGS),
          DECLARE_METHOD(t_Measurement, getTime, METH_NOARGS),
          DECLARE_METHOD(t_Measurement, getValue, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Measurement)[] = {
          { Py_tp_methods, t_Measurement__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Measurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Measurement)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Measurement, t_Measurement, Measurement);

        void t_Measurement::install(PyObject *module)
        {
          installType(&PY_TYPE(Measurement), &PY_TYPE_DEF(Measurement), module, "Measurement", 0);
        }

        void t_Measurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Measurement), "class_", make_descriptor(Measurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Measurement), "wrapfn_", make_descriptor(t_Measurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Measurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Measurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Measurement::initializeClass, 1)))
            return NULL;
          return t_Measurement::wrap_Object(Measurement(((t_Measurement *) arg)->object.this$));
        }
        static PyObject *t_Measurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Measurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Measurement_getCovariance(t_Measurement *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_Measurement_getTime(t_Measurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTime());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Measurement_getValue(t_Measurement *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getValue());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_Measurement_get__covariance(t_Measurement *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_Measurement_get__time(t_Measurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTime());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Measurement_get__value(t_Measurement *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getValue());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTZonalContext.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *FieldDSSTZonalContext::class$ = NULL;
            jmethodID *FieldDSSTZonalContext::mids$ = NULL;
            bool FieldDSSTZonalContext::live$ = false;

            jclass FieldDSSTZonalContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTZonalContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getBB_81520b552cb3fa26] = env->getMethodID(cls, "getBB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBoA_81520b552cb3fa26] = env->getMethodID(cls, "getBoA", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBoABpo_81520b552cb3fa26] = env->getMethodID(cls, "getBoABpo", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getCXO2N2A2_81520b552cb3fa26] = env->getMethodID(cls, "getCXO2N2A2", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getHK_81520b552cb3fa26] = env->getMethodID(cls, "getHK", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getK2MH2_81520b552cb3fa26] = env->getMethodID(cls, "getK2MH2", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getK2MH2O2_81520b552cb3fa26] = env->getMethodID(cls, "getK2MH2O2", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getM2aoA_81520b552cb3fa26] = env->getMethodID(cls, "getM2aoA", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMCo2AB_81520b552cb3fa26] = env->getMethodID(cls, "getMCo2AB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanMotion_81520b552cb3fa26] = env->getMethodID(cls, "getMeanMotion", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMuoa_81520b552cb3fa26] = env->getMethodID(cls, "getMuoa", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOON2A2_81520b552cb3fa26] = env->getMethodID(cls, "getOON2A2", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOoAB_81520b552cb3fa26] = env->getMethodID(cls, "getOoAB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getRoa_81520b552cb3fa26] = env->getMethodID(cls, "getRoa", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getX_81520b552cb3fa26] = env->getMethodID(cls, "getX", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getX2ON2A2XP1_81520b552cb3fa26] = env->getMethodID(cls, "getX2ON2A2XP1", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getX3ON2A_81520b552cb3fa26] = env->getMethodID(cls, "getX3ON2A", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getXON2A2_81520b552cb3fa26] = env->getMethodID(cls, "getXON2A2", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getXX_81520b552cb3fa26] = env->getMethodID(cls, "getXX", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getXXX_81520b552cb3fa26] = env->getMethodID(cls, "getXXX", "()Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getBB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBB_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getBoA() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBoA_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getBoABpo() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBoABpo_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getCXO2N2A2() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCXO2N2A2_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getHK() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHK_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getK2MH2() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getK2MH2_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getK2MH2O2() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getK2MH2O2_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getM2aoA() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getM2aoA_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getMCo2AB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMCo2AB_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getMeanMotion() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanMotion_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getMuoa() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMuoa_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getOON2A2() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOON2A2_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getOoAB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOoAB_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getRoa() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRoa_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getX() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getX_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getX2ON2A2XP1() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getX2ON2A2XP1_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getX3ON2A() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getX3ON2A_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getXON2A2() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getXON2A2_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getXX() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getXX_81520b552cb3fa26]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTZonalContext::getXXX() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getXXX_81520b552cb3fa26]));
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
            static PyObject *t_FieldDSSTZonalContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTZonalContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTZonalContext_of_(t_FieldDSSTZonalContext *self, PyObject *args);
            static PyObject *t_FieldDSSTZonalContext_getBB(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getBoA(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getBoABpo(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getCXO2N2A2(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getHK(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getK2MH2(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getK2MH2O2(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getM2aoA(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getMCo2AB(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getMeanMotion(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getMuoa(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getOON2A2(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getOoAB(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getRoa(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getX(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getX2ON2A2XP1(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getX3ON2A(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getXON2A2(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getXX(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_getXXX(t_FieldDSSTZonalContext *self);
            static PyObject *t_FieldDSSTZonalContext_get__bB(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__boA(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__boABpo(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__cXO2N2A2(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__hK(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__k2MH2(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__k2MH2O2(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__m2aoA(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__mCo2AB(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__meanMotion(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__muoa(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__oON2A2(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__ooAB(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__roa(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__x(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__x2ON2A2XP1(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__x3ON2A(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__xON2A2(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__xX(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__xXX(t_FieldDSSTZonalContext *self, void *data);
            static PyObject *t_FieldDSSTZonalContext_get__parameters_(t_FieldDSSTZonalContext *self, void *data);
            static PyGetSetDef t_FieldDSSTZonalContext__fields_[] = {
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, bB),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, boA),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, boABpo),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, cXO2N2A2),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, hK),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, k2MH2),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, k2MH2O2),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, m2aoA),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, mCo2AB),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, meanMotion),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, muoa),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, oON2A2),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, ooAB),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, roa),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, x),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, x2ON2A2XP1),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, x3ON2A),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, xON2A2),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, xX),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, xXX),
              DECLARE_GET_FIELD(t_FieldDSSTZonalContext, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldDSSTZonalContext__methods_[] = {
              DECLARE_METHOD(t_FieldDSSTZonalContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getBB, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getBoA, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getBoABpo, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getCXO2N2A2, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getHK, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getK2MH2, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getK2MH2O2, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getM2aoA, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getMCo2AB, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getMuoa, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getOON2A2, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getOoAB, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getRoa, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getX, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getX2ON2A2XP1, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getX3ON2A, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getXON2A2, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getXX, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTZonalContext, getXXX, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldDSSTZonalContext)[] = {
              { Py_tp_methods, t_FieldDSSTZonalContext__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_FieldDSSTZonalContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldDSSTZonalContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext),
              NULL
            };

            DEFINE_TYPE(FieldDSSTZonalContext, t_FieldDSSTZonalContext, FieldDSSTZonalContext);
            PyObject *t_FieldDSSTZonalContext::wrap_Object(const FieldDSSTZonalContext& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTZonalContext::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTZonalContext *self = (t_FieldDSSTZonalContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldDSSTZonalContext::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTZonalContext::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTZonalContext *self = (t_FieldDSSTZonalContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldDSSTZonalContext::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldDSSTZonalContext), &PY_TYPE_DEF(FieldDSSTZonalContext), module, "FieldDSSTZonalContext", 0);
            }

            void t_FieldDSSTZonalContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTZonalContext), "class_", make_descriptor(FieldDSSTZonalContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTZonalContext), "wrapfn_", make_descriptor(t_FieldDSSTZonalContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTZonalContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldDSSTZonalContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldDSSTZonalContext::initializeClass, 1)))
                return NULL;
              return t_FieldDSSTZonalContext::wrap_Object(FieldDSSTZonalContext(((t_FieldDSSTZonalContext *) arg)->object.this$));
            }
            static PyObject *t_FieldDSSTZonalContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldDSSTZonalContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldDSSTZonalContext_of_(t_FieldDSSTZonalContext *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_FieldDSSTZonalContext_getBB(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getBoA(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBoA());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getBoABpo(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBoABpo());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getCXO2N2A2(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getCXO2N2A2());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getHK(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getHK());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getK2MH2(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getK2MH2());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getK2MH2O2(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getK2MH2O2());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getM2aoA(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getM2aoA());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getMCo2AB(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMCo2AB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getMeanMotion(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMeanMotion());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getMuoa(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMuoa());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getOON2A2(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getOON2A2());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getOoAB(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getOoAB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getRoa(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getRoa());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getX(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getX());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getX2ON2A2XP1(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getX2ON2A2XP1());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getX3ON2A(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getX3ON2A());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getXON2A2(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getXON2A2());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getXX(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getXX());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTZonalContext_getXXX(t_FieldDSSTZonalContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getXXX());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
            static PyObject *t_FieldDSSTZonalContext_get__parameters_(t_FieldDSSTZonalContext *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_FieldDSSTZonalContext_get__bB(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__boA(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBoA());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__boABpo(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBoABpo());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__cXO2N2A2(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getCXO2N2A2());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__hK(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getHK());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__k2MH2(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getK2MH2());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__k2MH2O2(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getK2MH2O2());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__m2aoA(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getM2aoA());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__mCo2AB(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMCo2AB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__meanMotion(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMeanMotion());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__muoa(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMuoa());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__oON2A2(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getOON2A2());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__ooAB(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getOoAB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__roa(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getRoa());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__x(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getX());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__x2ON2A2XP1(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getX2ON2A2XP1());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__x3ON2A(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getX3ON2A());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__xON2A2(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getXON2A2());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__xX(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getXX());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTZonalContext_get__xXX(t_FieldDSSTZonalContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getXXX());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/ZipJarCrawler.h"
#include "java/io/File.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvider.h"
#include "java/lang/String.h"
#include "java/net/URL.h"
#include "java/lang/ClassLoader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *ZipJarCrawler::class$ = NULL;
      jmethodID *ZipJarCrawler::mids$ = NULL;
      bool ZipJarCrawler::live$ = false;

      jclass ZipJarCrawler::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/ZipJarCrawler");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7e1d51614d5d6a43] = env->getMethodID(cls, "<init>", "(Ljava/io/File;)V");
          mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_c76f3e82e2dd3be4] = env->getMethodID(cls, "<init>", "(Ljava/net/URL;)V");
          mids$[mid_init$_4d20546ee4ae1447] = env->getMethodID(cls, "<init>", "(Ljava/lang/ClassLoader;Ljava/lang/String;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ZipJarCrawler::ZipJarCrawler(const ::java::io::File & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7e1d51614d5d6a43, a0.this$)) {}

      ZipJarCrawler::ZipJarCrawler(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

      ZipJarCrawler::ZipJarCrawler(const ::java::net::URL & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c76f3e82e2dd3be4, a0.this$)) {}

      ZipJarCrawler::ZipJarCrawler(const ::java::lang::ClassLoader & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4d20546ee4ae1447, a0.this$, a1.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_ZipJarCrawler_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ZipJarCrawler_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ZipJarCrawler_init_(t_ZipJarCrawler *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_ZipJarCrawler__methods_[] = {
        DECLARE_METHOD(t_ZipJarCrawler, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ZipJarCrawler, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ZipJarCrawler)[] = {
        { Py_tp_methods, t_ZipJarCrawler__methods_ },
        { Py_tp_init, (void *) t_ZipJarCrawler_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ZipJarCrawler)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ZipJarCrawler, t_ZipJarCrawler, ZipJarCrawler);

      void t_ZipJarCrawler::install(PyObject *module)
      {
        installType(&PY_TYPE(ZipJarCrawler), &PY_TYPE_DEF(ZipJarCrawler), module, "ZipJarCrawler", 0);
      }

      void t_ZipJarCrawler::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ZipJarCrawler), "class_", make_descriptor(ZipJarCrawler::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ZipJarCrawler), "wrapfn_", make_descriptor(t_ZipJarCrawler::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ZipJarCrawler), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ZipJarCrawler_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ZipJarCrawler::initializeClass, 1)))
          return NULL;
        return t_ZipJarCrawler::wrap_Object(ZipJarCrawler(((t_ZipJarCrawler *) arg)->object.this$));
      }
      static PyObject *t_ZipJarCrawler_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ZipJarCrawler::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ZipJarCrawler_init_(t_ZipJarCrawler *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::io::File a0((jobject) NULL);
            ZipJarCrawler object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::io::File::initializeClass, &a0))
            {
              INT_CALL(object = ZipJarCrawler(a0));
              self->object = object;
              break;
            }
          }
          {
            ::java::lang::String a0((jobject) NULL);
            ZipJarCrawler object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = ZipJarCrawler(a0));
              self->object = object;
              break;
            }
          }
          {
            ::java::net::URL a0((jobject) NULL);
            ZipJarCrawler object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::net::URL::initializeClass, &a0))
            {
              INT_CALL(object = ZipJarCrawler(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::lang::ClassLoader a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ZipJarCrawler object((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::lang::ClassLoader::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ZipJarCrawler(a0, a1));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/MendesPavlisModel.h"
#include "java/util/List.h"
#include "org/orekit/models/earth/troposphere/MendesPavlisModel.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/models/earth/troposphere/MappingFunction.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *MendesPavlisModel::class$ = NULL;
          jmethodID *MendesPavlisModel::mids$ = NULL;
          bool MendesPavlisModel::live$ = false;

          jclass MendesPavlisModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/MendesPavlisModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_49f4b5153d696ea5] = env->getMethodID(cls, "<init>", "(DDDD)V");
              mids$[mid_computeZenithDelay_90983db312f6218b] = env->getMethodID(cls, "computeZenithDelay", "(Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_computeZenithDelay_0b467d379fb3f504] = env->getMethodID(cls, "computeZenithDelay", "(Lorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getStandardModel_ec7740424c9ae069] = env->getStaticMethodID(cls, "getStandardModel", "(D)Lorg/orekit/models/earth/troposphere/MendesPavlisModel;");
              mids$[mid_mappingFactors_6e118a7a5998051c] = env->getMethodID(cls, "mappingFactors", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_mappingFactors_6dcded9cb7dee3c2] = env->getMethodID(cls, "mappingFactors", "(DLorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_pathDelay_2edbfa177156ee09] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_pathDelay_6f66c6b7094d6f08] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MendesPavlisModel::MendesPavlisModel(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_49f4b5153d696ea5, a0, a1, a2, a3)) {}

          JArray< ::org::hipparchus::CalculusFieldElement > MendesPavlisModel::computeZenithDelay(const ::org::orekit::bodies::FieldGeodeticPoint & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeZenithDelay_90983db312f6218b], a0.this$, a1.this$, a2.this$));
          }

          JArray< jdouble > MendesPavlisModel::computeZenithDelay(const ::org::orekit::bodies::GeodeticPoint & a0, const JArray< jdouble > & a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeZenithDelay_0b467d379fb3f504], a0.this$, a1.this$, a2.this$));
          }

          ::java::util::List MendesPavlisModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          MendesPavlisModel MendesPavlisModel::getStandardModel(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            return MendesPavlisModel(env->callStaticObjectMethod(cls, mids$[mid_getStandardModel_ec7740424c9ae069], a0));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > MendesPavlisModel::mappingFactors(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_mappingFactors_6e118a7a5998051c], a0.this$, a1.this$, a2.this$));
          }

          JArray< jdouble > MendesPavlisModel::mappingFactors(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_mappingFactors_6dcded9cb7dee3c2], a0, a1.this$, a2.this$));
          }

          jdouble MendesPavlisModel::pathDelay(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< jdouble > & a2, const ::org::orekit::time::AbsoluteDate & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_2edbfa177156ee09], a0, a1.this$, a2.this$, a3.this$);
          }

          ::org::hipparchus::CalculusFieldElement MendesPavlisModel::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_6f66c6b7094d6f08], a0.this$, a1.this$, a2.this$, a3.this$));
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
          static PyObject *t_MendesPavlisModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MendesPavlisModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_MendesPavlisModel_init_(t_MendesPavlisModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MendesPavlisModel_computeZenithDelay(t_MendesPavlisModel *self, PyObject *args);
          static PyObject *t_MendesPavlisModel_getParametersDrivers(t_MendesPavlisModel *self);
          static PyObject *t_MendesPavlisModel_getStandardModel(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MendesPavlisModel_mappingFactors(t_MendesPavlisModel *self, PyObject *args);
          static PyObject *t_MendesPavlisModel_pathDelay(t_MendesPavlisModel *self, PyObject *args);
          static PyObject *t_MendesPavlisModel_get__parametersDrivers(t_MendesPavlisModel *self, void *data);
          static PyGetSetDef t_MendesPavlisModel__fields_[] = {
            DECLARE_GET_FIELD(t_MendesPavlisModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MendesPavlisModel__methods_[] = {
            DECLARE_METHOD(t_MendesPavlisModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MendesPavlisModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MendesPavlisModel, computeZenithDelay, METH_VARARGS),
            DECLARE_METHOD(t_MendesPavlisModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_MendesPavlisModel, getStandardModel, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MendesPavlisModel, mappingFactors, METH_VARARGS),
            DECLARE_METHOD(t_MendesPavlisModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MendesPavlisModel)[] = {
            { Py_tp_methods, t_MendesPavlisModel__methods_ },
            { Py_tp_init, (void *) t_MendesPavlisModel_init_ },
            { Py_tp_getset, t_MendesPavlisModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MendesPavlisModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MendesPavlisModel, t_MendesPavlisModel, MendesPavlisModel);

          void t_MendesPavlisModel::install(PyObject *module)
          {
            installType(&PY_TYPE(MendesPavlisModel), &PY_TYPE_DEF(MendesPavlisModel), module, "MendesPavlisModel", 0);
          }

          void t_MendesPavlisModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MendesPavlisModel), "class_", make_descriptor(MendesPavlisModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MendesPavlisModel), "wrapfn_", make_descriptor(t_MendesPavlisModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MendesPavlisModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MendesPavlisModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MendesPavlisModel::initializeClass, 1)))
              return NULL;
            return t_MendesPavlisModel::wrap_Object(MendesPavlisModel(((t_MendesPavlisModel *) arg)->object.this$));
          }
          static PyObject *t_MendesPavlisModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MendesPavlisModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_MendesPavlisModel_init_(t_MendesPavlisModel *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            MendesPavlisModel object((jobject) NULL);

            if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = MendesPavlisModel(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_MendesPavlisModel_computeZenithDelay(t_MendesPavlisModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                JArray< jdouble > result((jobject) NULL);

                if (!parseArgs(args, "k[Dk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.computeZenithDelay(a0, a1, a2));
                  return result.wrap();
                }
              }
              {
                ::org::orekit::bodies::FieldGeodeticPoint a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                if (!parseArgs(args, "K[KK", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.computeZenithDelay(a0, a1, a2));
                  return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "computeZenithDelay", args);
            return NULL;
          }

          static PyObject *t_MendesPavlisModel_getParametersDrivers(t_MendesPavlisModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_MendesPavlisModel_getStandardModel(PyTypeObject *type, PyObject *arg)
          {
            jdouble a0;
            MendesPavlisModel result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = ::org::orekit::models::earth::troposphere::MendesPavlisModel::getStandardModel(a0));
              return t_MendesPavlisModel::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getStandardModel", arg);
            return NULL;
          }

          static PyObject *t_MendesPavlisModel_mappingFactors(t_MendesPavlisModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                JArray< jdouble > result((jobject) NULL);

                if (!parseArgs(args, "Dkk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.mappingFactors(a0, a1, a2));
                  return result.wrap();
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.mappingFactors(a0, a1, a2));
                  return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "mappingFactors", args);
            return NULL;
          }

          static PyObject *t_MendesPavlisModel_pathDelay(t_MendesPavlisModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
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
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_MendesPavlisModel_get__parametersDrivers(t_MendesPavlisModel *self, void *data)
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
#include "org/orekit/orbits/LibrationOrbit.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *LibrationOrbit::class$ = NULL;
      jmethodID *LibrationOrbit::mids$ = NULL;
      bool LibrationOrbit::live$ = false;

      jclass LibrationOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/LibrationOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_applyDifferentialCorrection_a1fa5dae97ea5ed2] = env->getMethodID(cls, "applyDifferentialCorrection", "()V");
          mids$[mid_getInitialPV_180fb117720acb76] = env->getMethodID(cls, "getInitialPV", "()Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_getManifolds_fd4468e3769468c2] = env->getMethodID(cls, "getManifolds", "(Lorg/orekit/propagation/SpacecraftState;Z)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_getOrbitalPeriod_b74f83833fdad017] = env->getMethodID(cls, "getOrbitalPeriod", "()D");
          mids$[mid_applyCorrectionOnPV_57264af3b06f967f] = env->getMethodID(cls, "applyCorrectionOnPV", "(Lorg/orekit/orbits/CR3BPDifferentialCorrection;)Lorg/orekit/utils/PVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void LibrationOrbit::applyDifferentialCorrection() const
      {
        env->callVoidMethod(this$, mids$[mid_applyDifferentialCorrection_a1fa5dae97ea5ed2]);
      }

      ::org::orekit::utils::PVCoordinates LibrationOrbit::getInitialPV() const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_getInitialPV_180fb117720acb76]));
      }

      ::org::orekit::utils::PVCoordinates LibrationOrbit::getManifolds(const ::org::orekit::propagation::SpacecraftState & a0, jboolean a1) const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_getManifolds_fd4468e3769468c2], a0.this$, a1));
      }

      jdouble LibrationOrbit::getOrbitalPeriod() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getOrbitalPeriod_b74f83833fdad017]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_LibrationOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LibrationOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LibrationOrbit_applyDifferentialCorrection(t_LibrationOrbit *self);
      static PyObject *t_LibrationOrbit_getInitialPV(t_LibrationOrbit *self);
      static PyObject *t_LibrationOrbit_getManifolds(t_LibrationOrbit *self, PyObject *args);
      static PyObject *t_LibrationOrbit_getOrbitalPeriod(t_LibrationOrbit *self);
      static PyObject *t_LibrationOrbit_get__initialPV(t_LibrationOrbit *self, void *data);
      static PyObject *t_LibrationOrbit_get__orbitalPeriod(t_LibrationOrbit *self, void *data);
      static PyGetSetDef t_LibrationOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_LibrationOrbit, initialPV),
        DECLARE_GET_FIELD(t_LibrationOrbit, orbitalPeriod),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LibrationOrbit__methods_[] = {
        DECLARE_METHOD(t_LibrationOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LibrationOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LibrationOrbit, applyDifferentialCorrection, METH_NOARGS),
        DECLARE_METHOD(t_LibrationOrbit, getInitialPV, METH_NOARGS),
        DECLARE_METHOD(t_LibrationOrbit, getManifolds, METH_VARARGS),
        DECLARE_METHOD(t_LibrationOrbit, getOrbitalPeriod, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LibrationOrbit)[] = {
        { Py_tp_methods, t_LibrationOrbit__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LibrationOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LibrationOrbit)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LibrationOrbit, t_LibrationOrbit, LibrationOrbit);

      void t_LibrationOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(LibrationOrbit), &PY_TYPE_DEF(LibrationOrbit), module, "LibrationOrbit", 0);
      }

      void t_LibrationOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbit), "class_", make_descriptor(LibrationOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbit), "wrapfn_", make_descriptor(t_LibrationOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LibrationOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LibrationOrbit::initializeClass, 1)))
          return NULL;
        return t_LibrationOrbit::wrap_Object(LibrationOrbit(((t_LibrationOrbit *) arg)->object.this$));
      }
      static PyObject *t_LibrationOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LibrationOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LibrationOrbit_applyDifferentialCorrection(t_LibrationOrbit *self)
      {
        OBJ_CALL(self->object.applyDifferentialCorrection());
        Py_RETURN_NONE;
      }

      static PyObject *t_LibrationOrbit_getInitialPV(t_LibrationOrbit *self)
      {
        ::org::orekit::utils::PVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.getInitialPV());
        return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
      }

      static PyObject *t_LibrationOrbit_getManifolds(t_LibrationOrbit *self, PyObject *args)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
        jboolean a1;
        ::org::orekit::utils::PVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "kZ", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.getManifolds(a0, a1));
          return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getManifolds", args);
        return NULL;
      }

      static PyObject *t_LibrationOrbit_getOrbitalPeriod(t_LibrationOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getOrbitalPeriod());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_LibrationOrbit_get__initialPV(t_LibrationOrbit *self, void *data)
      {
        ::org::orekit::utils::PVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getInitialPV());
        return ::org::orekit::utils::t_PVCoordinates::wrap_Object(value);
      }

      static PyObject *t_LibrationOrbit_get__orbitalPeriod(t_LibrationOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getOrbitalPeriod());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
