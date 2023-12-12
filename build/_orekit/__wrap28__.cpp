#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/HeaderKey.h"
#include "org/orekit/files/ccsds/section/Header.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/section/HeaderKey.h"
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
              mids$[mid_process_579f593fca2e9962] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/section/Header;)Z");
              mids$[mid_valueOf_515ab5efa60a4e71] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/section/HeaderKey;");
              mids$[mid_values_ad74b16c811b96e2] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/section/HeaderKey;");

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
            return env->callBooleanMethod(this$, mids$[mid_process_579f593fca2e9962], a0.this$, a1.this$, a2.this$);
          }

          HeaderKey HeaderKey::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return HeaderKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_515ab5efa60a4e71], a0.this$));
          }

          JArray< HeaderKey > HeaderKey::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< HeaderKey >(env->callStaticObjectMethod(cls, mids$[mid_values_ad74b16c811b96e2]));
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
#include "org/orekit/utils/units/UnitsCache.h"
#include "java/lang/String.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {
      namespace units {

        ::java::lang::Class *UnitsCache::class$ = NULL;
        jmethodID *UnitsCache::mids$ = NULL;
        bool UnitsCache::live$ = false;

        jclass UnitsCache::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/utils/units/UnitsCache");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getUnits_6064fb71696445b4] = env->getMethodID(cls, "getUnits", "(Ljava/lang/String;)Lorg/orekit/utils/units/Unit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnitsCache::UnitsCache() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        ::org::orekit::utils::units::Unit UnitsCache::getUnits(const ::java::lang::String & a0) const
        {
          return ::org::orekit::utils::units::Unit(env->callObjectMethod(this$, mids$[mid_getUnits_6064fb71696445b4], a0.this$));
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
        static PyObject *t_UnitsCache_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnitsCache_instance_(PyTypeObject *type, PyObject *arg);
        static int t_UnitsCache_init_(t_UnitsCache *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UnitsCache_getUnits(t_UnitsCache *self, PyObject *arg);

        static PyMethodDef t_UnitsCache__methods_[] = {
          DECLARE_METHOD(t_UnitsCache, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnitsCache, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnitsCache, getUnits, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnitsCache)[] = {
          { Py_tp_methods, t_UnitsCache__methods_ },
          { Py_tp_init, (void *) t_UnitsCache_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnitsCache)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnitsCache, t_UnitsCache, UnitsCache);

        void t_UnitsCache::install(PyObject *module)
        {
          installType(&PY_TYPE(UnitsCache), &PY_TYPE_DEF(UnitsCache), module, "UnitsCache", 0);
        }

        void t_UnitsCache::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsCache), "class_", make_descriptor(UnitsCache::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsCache), "wrapfn_", make_descriptor(t_UnitsCache::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsCache), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnitsCache_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnitsCache::initializeClass, 1)))
            return NULL;
          return t_UnitsCache::wrap_Object(UnitsCache(((t_UnitsCache *) arg)->object.this$));
        }
        static PyObject *t_UnitsCache_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnitsCache::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_UnitsCache_init_(t_UnitsCache *self, PyObject *args, PyObject *kwds)
        {
          UnitsCache object((jobject) NULL);

          INT_CALL(object = UnitsCache());
          self->object = object;

          return 0;
        }

        static PyObject *t_UnitsCache_getUnits(t_UnitsCache *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::utils::units::Unit result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.getUnits(a0));
            return ::org::orekit::utils::units::t_Unit::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getUnits", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeStampedPair.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeStampedPair::class$ = NULL;
      jmethodID *TimeStampedPair::mids$ = NULL;
      bool TimeStampedPair::live$ = false;
      jdouble TimeStampedPair::DEFAULT_DATE_EQUALITY_THRESHOLD = (jdouble) 0;

      jclass TimeStampedPair::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeStampedPair");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_21bd709b02486d57] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeStamped;Lorg/orekit/time/TimeStamped;)V");
          mids$[mid_init$_75bd0a19a5d2fd75] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeStamped;Lorg/orekit/time/TimeStamped;D)V");
          mids$[mid_checkDatesConsistency_51833a49fce6cea6] = env->getStaticMethodID(cls, "checkDatesConsistency", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getFirst_da8f710d3d2958bf] = env->getMethodID(cls, "getFirst", "()Lorg/orekit/time/TimeStamped;");
          mids$[mid_getSecond_da8f710d3d2958bf] = env->getMethodID(cls, "getSecond", "()Lorg/orekit/time/TimeStamped;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_DATE_EQUALITY_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_DATE_EQUALITY_THRESHOLD");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedPair::TimeStampedPair(const ::org::orekit::time::TimeStamped & a0, const ::org::orekit::time::TimeStamped & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_21bd709b02486d57, a0.this$, a1.this$)) {}

      TimeStampedPair::TimeStampedPair(const ::org::orekit::time::TimeStamped & a0, const ::org::orekit::time::TimeStamped & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_75bd0a19a5d2fd75, a0.this$, a1.this$, a2)) {}

      void TimeStampedPair::checkDatesConsistency(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkDatesConsistency_51833a49fce6cea6], a0.this$, a1.this$, a2);
      }

      ::org::orekit::time::AbsoluteDate TimeStampedPair::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
      }

      ::org::orekit::time::TimeStamped TimeStampedPair::getFirst() const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_getFirst_da8f710d3d2958bf]));
      }

      ::org::orekit::time::TimeStamped TimeStampedPair::getSecond() const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_getSecond_da8f710d3d2958bf]));
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
      static PyObject *t_TimeStampedPair_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedPair_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedPair_of_(t_TimeStampedPair *self, PyObject *args);
      static int t_TimeStampedPair_init_(t_TimeStampedPair *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedPair_checkDatesConsistency(PyTypeObject *type, PyObject *args);
      static PyObject *t_TimeStampedPair_getDate(t_TimeStampedPair *self);
      static PyObject *t_TimeStampedPair_getFirst(t_TimeStampedPair *self);
      static PyObject *t_TimeStampedPair_getSecond(t_TimeStampedPair *self);
      static PyObject *t_TimeStampedPair_get__date(t_TimeStampedPair *self, void *data);
      static PyObject *t_TimeStampedPair_get__first(t_TimeStampedPair *self, void *data);
      static PyObject *t_TimeStampedPair_get__second(t_TimeStampedPair *self, void *data);
      static PyObject *t_TimeStampedPair_get__parameters_(t_TimeStampedPair *self, void *data);
      static PyGetSetDef t_TimeStampedPair__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedPair, date),
        DECLARE_GET_FIELD(t_TimeStampedPair, first),
        DECLARE_GET_FIELD(t_TimeStampedPair, second),
        DECLARE_GET_FIELD(t_TimeStampedPair, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedPair__methods_[] = {
        DECLARE_METHOD(t_TimeStampedPair, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedPair, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedPair, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedPair, checkDatesConsistency, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedPair, getDate, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedPair, getFirst, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedPair, getSecond, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedPair)[] = {
        { Py_tp_methods, t_TimeStampedPair__methods_ },
        { Py_tp_init, (void *) t_TimeStampedPair_init_ },
        { Py_tp_getset, t_TimeStampedPair__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedPair)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeStampedPair, t_TimeStampedPair, TimeStampedPair);
      PyObject *t_TimeStampedPair::wrap_Object(const TimeStampedPair& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_TimeStampedPair::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedPair *self = (t_TimeStampedPair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_TimeStampedPair::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_TimeStampedPair::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedPair *self = (t_TimeStampedPair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_TimeStampedPair::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedPair), &PY_TYPE_DEF(TimeStampedPair), module, "TimeStampedPair", 0);
      }

      void t_TimeStampedPair::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPair), "class_", make_descriptor(TimeStampedPair::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPair), "wrapfn_", make_descriptor(t_TimeStampedPair::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPair), "boxfn_", make_descriptor(boxObject));
        env->getClass(TimeStampedPair::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPair), "DEFAULT_DATE_EQUALITY_THRESHOLD", make_descriptor(TimeStampedPair::DEFAULT_DATE_EQUALITY_THRESHOLD));
      }

      static PyObject *t_TimeStampedPair_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedPair::initializeClass, 1)))
          return NULL;
        return t_TimeStampedPair::wrap_Object(TimeStampedPair(((t_TimeStampedPair *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedPair_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedPair::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedPair_of_(t_TimeStampedPair *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedPair_init_(t_TimeStampedPair *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::TimeStamped a0((jobject) NULL);
            ::org::orekit::time::TimeStamped a1((jobject) NULL);
            TimeStampedPair object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeStamped::initializeClass, ::org::orekit::time::TimeStamped::initializeClass, &a0, &a1))
            {
              INT_CALL(object = TimeStampedPair(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::TimeStamped a0((jobject) NULL);
            ::org::orekit::time::TimeStamped a1((jobject) NULL);
            jdouble a2;
            TimeStampedPair object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::time::TimeStamped::initializeClass, ::org::orekit::time::TimeStamped::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = TimeStampedPair(a0, a1, a2));
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

      static PyObject *t_TimeStampedPair_checkDatesConsistency(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        jdouble a2;

        if (!parseArgs(args, "kkD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(::org::orekit::time::TimeStampedPair::checkDatesConsistency(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkDatesConsistency", args);
        return NULL;
      }

      static PyObject *t_TimeStampedPair_getDate(t_TimeStampedPair *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeStampedPair_getFirst(t_TimeStampedPair *self)
      {
        ::org::orekit::time::TimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getFirst());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
      }

      static PyObject *t_TimeStampedPair_getSecond(t_TimeStampedPair *self)
      {
        ::org::orekit::time::TimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getSecond());
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
      }
      static PyObject *t_TimeStampedPair_get__parameters_(t_TimeStampedPair *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeStampedPair_get__date(t_TimeStampedPair *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeStampedPair_get__first(t_TimeStampedPair *self, void *data)
      {
        ::org::orekit::time::TimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getFirst());
        return ::org::orekit::time::t_TimeStamped::wrap_Object(value);
      }

      static PyObject *t_TimeStampedPair_get__second(t_TimeStampedPair *self, void *data)
      {
        ::org::orekit::time::TimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getSecond());
        return ::org::orekit::time::t_TimeStamped::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/UnscentedTransformProvider.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *UnscentedTransformProvider::class$ = NULL;
      jmethodID *UnscentedTransformProvider::mids$ = NULL;
      bool UnscentedTransformProvider::live$ = false;

      jclass UnscentedTransformProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/UnscentedTransformProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getWc_75d50d73180655b4] = env->getMethodID(cls, "getWc", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getWm_75d50d73180655b4] = env->getMethodID(cls, "getWm", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_unscentedTransform_4b6e483760a5840b] = env->getMethodID(cls, "unscentedTransform", "(Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;)[Lorg/hipparchus/linear/RealVector;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::linear::RealVector UnscentedTransformProvider::getWc() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getWc_75d50d73180655b4]));
      }

      ::org::hipparchus::linear::RealVector UnscentedTransformProvider::getWm() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getWm_75d50d73180655b4]));
      }

      JArray< ::org::hipparchus::linear::RealVector > UnscentedTransformProvider::unscentedTransform(const ::org::hipparchus::linear::RealVector & a0, const ::org::hipparchus::linear::RealMatrix & a1) const
      {
        return JArray< ::org::hipparchus::linear::RealVector >(env->callObjectMethod(this$, mids$[mid_unscentedTransform_4b6e483760a5840b], a0.this$, a1.this$));
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
      static PyObject *t_UnscentedTransformProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnscentedTransformProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnscentedTransformProvider_getWc(t_UnscentedTransformProvider *self);
      static PyObject *t_UnscentedTransformProvider_getWm(t_UnscentedTransformProvider *self);
      static PyObject *t_UnscentedTransformProvider_unscentedTransform(t_UnscentedTransformProvider *self, PyObject *args);
      static PyObject *t_UnscentedTransformProvider_get__wc(t_UnscentedTransformProvider *self, void *data);
      static PyObject *t_UnscentedTransformProvider_get__wm(t_UnscentedTransformProvider *self, void *data);
      static PyGetSetDef t_UnscentedTransformProvider__fields_[] = {
        DECLARE_GET_FIELD(t_UnscentedTransformProvider, wc),
        DECLARE_GET_FIELD(t_UnscentedTransformProvider, wm),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_UnscentedTransformProvider__methods_[] = {
        DECLARE_METHOD(t_UnscentedTransformProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnscentedTransformProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnscentedTransformProvider, getWc, METH_NOARGS),
        DECLARE_METHOD(t_UnscentedTransformProvider, getWm, METH_NOARGS),
        DECLARE_METHOD(t_UnscentedTransformProvider, unscentedTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UnscentedTransformProvider)[] = {
        { Py_tp_methods, t_UnscentedTransformProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_UnscentedTransformProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UnscentedTransformProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UnscentedTransformProvider, t_UnscentedTransformProvider, UnscentedTransformProvider);

      void t_UnscentedTransformProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(UnscentedTransformProvider), &PY_TYPE_DEF(UnscentedTransformProvider), module, "UnscentedTransformProvider", 0);
      }

      void t_UnscentedTransformProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedTransformProvider), "class_", make_descriptor(UnscentedTransformProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedTransformProvider), "wrapfn_", make_descriptor(t_UnscentedTransformProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedTransformProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UnscentedTransformProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UnscentedTransformProvider::initializeClass, 1)))
          return NULL;
        return t_UnscentedTransformProvider::wrap_Object(UnscentedTransformProvider(((t_UnscentedTransformProvider *) arg)->object.this$));
      }
      static PyObject *t_UnscentedTransformProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UnscentedTransformProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_UnscentedTransformProvider_getWc(t_UnscentedTransformProvider *self)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);
        OBJ_CALL(result = self->object.getWc());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
      }

      static PyObject *t_UnscentedTransformProvider_getWm(t_UnscentedTransformProvider *self)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);
        OBJ_CALL(result = self->object.getWm());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
      }

      static PyObject *t_UnscentedTransformProvider_unscentedTransform(t_UnscentedTransformProvider *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
        JArray< ::org::hipparchus::linear::RealVector > result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.unscentedTransform(a0, a1));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::linear::t_RealVector::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "unscentedTransform", args);
        return NULL;
      }

      static PyObject *t_UnscentedTransformProvider_get__wc(t_UnscentedTransformProvider *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getWc());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }

      static PyObject *t_UnscentedTransformProvider_get__wm(t_UnscentedTransformProvider *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getWm());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/AbstractDetector.h"
#include "org/orekit/propagation/events/AbstractDetector.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/events/AdaptableInterval.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *AbstractDetector::class$ = NULL;
        jmethodID *AbstractDetector::mids$ = NULL;
        bool AbstractDetector::live$ = false;
        jdouble AbstractDetector::DEFAULT_MAXCHECK = (jdouble) 0;
        jint AbstractDetector::DEFAULT_MAX_ITER = (jint) 0;
        jdouble AbstractDetector::DEFAULT_THRESHOLD = (jdouble) 0;

        jclass AbstractDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/AbstractDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_g_1bbf81d80c47ecdd] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getHandler_9cfb09a569a3f330] = env->getMethodID(cls, "getHandler", "()Lorg/orekit/propagation/events/handlers/EventHandler;");
            mids$[mid_getMaxCheckInterval_b5b0f3e235bdd705] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/orekit/propagation/events/AdaptableInterval;");
            mids$[mid_getMaxIterationCount_412668abc8d889e9] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getThreshold_557b8123390d8d0c] = env->getMethodID(cls, "getThreshold", "()D");
            mids$[mid_init_0472264ad6f40bc2] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_isForward_89b302893bdbe1f1] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_withHandler_db2a1d87b40e705a] = env->getMethodID(cls, "withHandler", "(Lorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/AbstractDetector;");
            mids$[mid_withMaxCheck_44a297e452870461] = env->getMethodID(cls, "withMaxCheck", "(D)Lorg/orekit/propagation/events/AbstractDetector;");
            mids$[mid_withMaxCheck_22019eb01388dd65] = env->getMethodID(cls, "withMaxCheck", "(Lorg/orekit/propagation/events/AdaptableInterval;)Lorg/orekit/propagation/events/AbstractDetector;");
            mids$[mid_withMaxIter_43c280fe2a3b89a2] = env->getMethodID(cls, "withMaxIter", "(I)Lorg/orekit/propagation/events/AbstractDetector;");
            mids$[mid_withThreshold_44a297e452870461] = env->getMethodID(cls, "withThreshold", "(D)Lorg/orekit/propagation/events/AbstractDetector;");
            mids$[mid_create_dfefb60c85fe348c] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/AbstractDetector;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_MAXCHECK = env->getStaticDoubleField(cls, "DEFAULT_MAXCHECK");
            DEFAULT_MAX_ITER = env->getStaticIntField(cls, "DEFAULT_MAX_ITER");
            DEFAULT_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_THRESHOLD");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble AbstractDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_1bbf81d80c47ecdd], a0.this$);
        }

        ::org::orekit::propagation::events::handlers::EventHandler AbstractDetector::getHandler() const
        {
          return ::org::orekit::propagation::events::handlers::EventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_9cfb09a569a3f330]));
        }

        ::org::orekit::propagation::events::AdaptableInterval AbstractDetector::getMaxCheckInterval() const
        {
          return ::org::orekit::propagation::events::AdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_b5b0f3e235bdd705]));
        }

        jint AbstractDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_412668abc8d889e9]);
        }

        jdouble AbstractDetector::getThreshold() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getThreshold_557b8123390d8d0c]);
        }

        void AbstractDetector::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_0472264ad6f40bc2], a0.this$, a1.this$);
        }

        jboolean AbstractDetector::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_89b302893bdbe1f1]);
        }

        AbstractDetector AbstractDetector::withHandler(const ::org::orekit::propagation::events::handlers::EventHandler & a0) const
        {
          return AbstractDetector(env->callObjectMethod(this$, mids$[mid_withHandler_db2a1d87b40e705a], a0.this$));
        }

        AbstractDetector AbstractDetector::withMaxCheck(jdouble a0) const
        {
          return AbstractDetector(env->callObjectMethod(this$, mids$[mid_withMaxCheck_44a297e452870461], a0));
        }

        AbstractDetector AbstractDetector::withMaxCheck(const ::org::orekit::propagation::events::AdaptableInterval & a0) const
        {
          return AbstractDetector(env->callObjectMethod(this$, mids$[mid_withMaxCheck_22019eb01388dd65], a0.this$));
        }

        AbstractDetector AbstractDetector::withMaxIter(jint a0) const
        {
          return AbstractDetector(env->callObjectMethod(this$, mids$[mid_withMaxIter_43c280fe2a3b89a2], a0));
        }

        AbstractDetector AbstractDetector::withThreshold(jdouble a0) const
        {
          return AbstractDetector(env->callObjectMethod(this$, mids$[mid_withThreshold_44a297e452870461], a0));
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
        static PyObject *t_AbstractDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractDetector_of_(t_AbstractDetector *self, PyObject *args);
        static PyObject *t_AbstractDetector_g(t_AbstractDetector *self, PyObject *arg);
        static PyObject *t_AbstractDetector_getHandler(t_AbstractDetector *self);
        static PyObject *t_AbstractDetector_getMaxCheckInterval(t_AbstractDetector *self);
        static PyObject *t_AbstractDetector_getMaxIterationCount(t_AbstractDetector *self);
        static PyObject *t_AbstractDetector_getThreshold(t_AbstractDetector *self);
        static PyObject *t_AbstractDetector_init(t_AbstractDetector *self, PyObject *args);
        static PyObject *t_AbstractDetector_isForward(t_AbstractDetector *self);
        static PyObject *t_AbstractDetector_withHandler(t_AbstractDetector *self, PyObject *arg);
        static PyObject *t_AbstractDetector_withMaxCheck(t_AbstractDetector *self, PyObject *args);
        static PyObject *t_AbstractDetector_withMaxIter(t_AbstractDetector *self, PyObject *arg);
        static PyObject *t_AbstractDetector_withThreshold(t_AbstractDetector *self, PyObject *arg);
        static PyObject *t_AbstractDetector_get__forward(t_AbstractDetector *self, void *data);
        static PyObject *t_AbstractDetector_get__handler(t_AbstractDetector *self, void *data);
        static PyObject *t_AbstractDetector_get__maxCheckInterval(t_AbstractDetector *self, void *data);
        static PyObject *t_AbstractDetector_get__maxIterationCount(t_AbstractDetector *self, void *data);
        static PyObject *t_AbstractDetector_get__threshold(t_AbstractDetector *self, void *data);
        static PyObject *t_AbstractDetector_get__parameters_(t_AbstractDetector *self, void *data);
        static PyGetSetDef t_AbstractDetector__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractDetector, forward),
          DECLARE_GET_FIELD(t_AbstractDetector, handler),
          DECLARE_GET_FIELD(t_AbstractDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_AbstractDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_AbstractDetector, threshold),
          DECLARE_GET_FIELD(t_AbstractDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractDetector__methods_[] = {
          DECLARE_METHOD(t_AbstractDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractDetector, g, METH_O),
          DECLARE_METHOD(t_AbstractDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_AbstractDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_AbstractDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_AbstractDetector, getThreshold, METH_NOARGS),
          DECLARE_METHOD(t_AbstractDetector, init, METH_VARARGS),
          DECLARE_METHOD(t_AbstractDetector, isForward, METH_NOARGS),
          DECLARE_METHOD(t_AbstractDetector, withHandler, METH_O),
          DECLARE_METHOD(t_AbstractDetector, withMaxCheck, METH_VARARGS),
          DECLARE_METHOD(t_AbstractDetector, withMaxIter, METH_O),
          DECLARE_METHOD(t_AbstractDetector, withThreshold, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractDetector)[] = {
          { Py_tp_methods, t_AbstractDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractDetector, t_AbstractDetector, AbstractDetector);
        PyObject *t_AbstractDetector::wrap_Object(const AbstractDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractDetector *self = (t_AbstractDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractDetector *self = (t_AbstractDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractDetector), &PY_TYPE_DEF(AbstractDetector), module, "AbstractDetector", 0);
        }

        void t_AbstractDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDetector), "class_", make_descriptor(AbstractDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDetector), "wrapfn_", make_descriptor(t_AbstractDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDetector), "boxfn_", make_descriptor(boxObject));
          env->getClass(AbstractDetector::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDetector), "DEFAULT_MAXCHECK", make_descriptor(AbstractDetector::DEFAULT_MAXCHECK));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDetector), "DEFAULT_MAX_ITER", make_descriptor(AbstractDetector::DEFAULT_MAX_ITER));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDetector), "DEFAULT_THRESHOLD", make_descriptor(AbstractDetector::DEFAULT_THRESHOLD));
        }

        static PyObject *t_AbstractDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractDetector::initializeClass, 1)))
            return NULL;
          return t_AbstractDetector::wrap_Object(AbstractDetector(((t_AbstractDetector *) arg)->object.this$));
        }
        static PyObject *t_AbstractDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractDetector_of_(t_AbstractDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AbstractDetector_g(t_AbstractDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_AbstractDetector_getHandler(t_AbstractDetector *self)
        {
          ::org::orekit::propagation::events::handlers::EventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_EventHandler::wrap_Object(result);
        }

        static PyObject *t_AbstractDetector_getMaxCheckInterval(t_AbstractDetector *self)
        {
          ::org::orekit::propagation::events::AdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_AdaptableInterval::wrap_Object(result);
        }

        static PyObject *t_AbstractDetector_getMaxIterationCount(t_AbstractDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractDetector_getThreshold(t_AbstractDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getThreshold());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractDetector_init(t_AbstractDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_AbstractDetector_isForward(t_AbstractDetector *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractDetector_withHandler(t_AbstractDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::events::handlers::EventHandler a0((jobject) NULL);
          AbstractDetector result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::events::handlers::EventHandler::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.withHandler(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withHandler", arg);
          return NULL;
        }

        static PyObject *t_AbstractDetector_withMaxCheck(t_AbstractDetector *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              AbstractDetector result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.withMaxCheck(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractDetector::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::events::AdaptableInterval a0((jobject) NULL);
              AbstractDetector result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::propagation::events::AdaptableInterval::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.withMaxCheck(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractDetector::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "withMaxCheck", args);
          return NULL;
        }

        static PyObject *t_AbstractDetector_withMaxIter(t_AbstractDetector *self, PyObject *arg)
        {
          jint a0;
          AbstractDetector result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.withMaxIter(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withMaxIter", arg);
          return NULL;
        }

        static PyObject *t_AbstractDetector_withThreshold(t_AbstractDetector *self, PyObject *arg)
        {
          jdouble a0;
          AbstractDetector result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.withThreshold(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withThreshold", arg);
          return NULL;
        }
        static PyObject *t_AbstractDetector_get__parameters_(t_AbstractDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AbstractDetector_get__forward(t_AbstractDetector *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractDetector_get__handler(t_AbstractDetector *self, void *data)
        {
          ::org::orekit::propagation::events::handlers::EventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_EventHandler::wrap_Object(value);
        }

        static PyObject *t_AbstractDetector_get__maxCheckInterval(t_AbstractDetector *self, void *data)
        {
          ::org::orekit::propagation::events::AdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_AdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_AbstractDetector_get__maxIterationCount(t_AbstractDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AbstractDetector_get__threshold(t_AbstractDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getThreshold());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/DataType.h"
#include "org/orekit/gnss/metric/parser/DataType.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "java/lang/String.h"
#include "java/lang/Long.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *DataType::class$ = NULL;
          jmethodID *DataType::mids$ = NULL;
          bool DataType::live$ = false;
          DataType *DataType::BIT_1 = NULL;
          DataType *DataType::BIT_10 = NULL;
          DataType *DataType::BIT_12 = NULL;
          DataType *DataType::BIT_2 = NULL;
          DataType *DataType::BIT_24 = NULL;
          DataType *DataType::BIT_3 = NULL;
          DataType *DataType::BIT_32 = NULL;
          DataType *DataType::BIT_4 = NULL;
          DataType *DataType::BIT_6 = NULL;
          DataType *DataType::BIT_7 = NULL;
          DataType *DataType::BIT_8 = NULL;
          DataType *DataType::INT_10 = NULL;
          DataType *DataType::INT_11 = NULL;
          DataType *DataType::INT_14 = NULL;
          DataType *DataType::INT_15 = NULL;
          DataType *DataType::INT_16 = NULL;
          DataType *DataType::INT_17 = NULL;
          DataType *DataType::INT_18 = NULL;
          DataType *DataType::INT_19 = NULL;
          DataType *DataType::INT_20 = NULL;
          DataType *DataType::INT_21 = NULL;
          DataType *DataType::INT_22 = NULL;
          DataType *DataType::INT_23 = NULL;
          DataType *DataType::INT_24 = NULL;
          DataType *DataType::INT_25 = NULL;
          DataType *DataType::INT_26 = NULL;
          DataType *DataType::INT_27 = NULL;
          DataType *DataType::INT_30 = NULL;
          DataType *DataType::INT_31 = NULL;
          DataType *DataType::INT_32 = NULL;
          DataType *DataType::INT_34 = NULL;
          DataType *DataType::INT_35 = NULL;
          DataType *DataType::INT_38 = NULL;
          DataType *DataType::INT_6 = NULL;
          DataType *DataType::INT_8 = NULL;
          DataType *DataType::INT_9 = NULL;
          DataType *DataType::INT_S_11 = NULL;
          DataType *DataType::INT_S_22 = NULL;
          DataType *DataType::INT_S_24 = NULL;
          DataType *DataType::INT_S_27 = NULL;
          DataType *DataType::INT_S_32 = NULL;
          DataType *DataType::INT_S_5 = NULL;
          DataType *DataType::U_INT_10 = NULL;
          DataType *DataType::U_INT_11 = NULL;
          DataType *DataType::U_INT_12 = NULL;
          DataType *DataType::U_INT_13 = NULL;
          DataType *DataType::U_INT_14 = NULL;
          DataType *DataType::U_INT_16 = NULL;
          DataType *DataType::U_INT_17 = NULL;
          DataType *DataType::U_INT_18 = NULL;
          DataType *DataType::U_INT_2 = NULL;
          DataType *DataType::U_INT_20 = NULL;
          DataType *DataType::U_INT_23 = NULL;
          DataType *DataType::U_INT_24 = NULL;
          DataType *DataType::U_INT_25 = NULL;
          DataType *DataType::U_INT_26 = NULL;
          DataType *DataType::U_INT_27 = NULL;
          DataType *DataType::U_INT_3 = NULL;
          DataType *DataType::U_INT_30 = NULL;
          DataType *DataType::U_INT_32 = NULL;
          DataType *DataType::U_INT_35 = NULL;
          DataType *DataType::U_INT_36 = NULL;
          DataType *DataType::U_INT_4 = NULL;
          DataType *DataType::U_INT_5 = NULL;
          DataType *DataType::U_INT_6 = NULL;
          DataType *DataType::U_INT_7 = NULL;
          DataType *DataType::U_INT_8 = NULL;
          DataType *DataType::U_INT_9 = NULL;

          jclass DataType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/DataType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_decode_456bd522167fca80] = env->getMethodID(cls, "decode", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)Ljava/lang/Long;");
              mids$[mid_valueOf_0fce2f16adddc80d] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/DataType;");
              mids$[mid_values_3714311a45906658] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/parser/DataType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              BIT_1 = new DataType(env->getStaticObjectField(cls, "BIT_1", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_10 = new DataType(env->getStaticObjectField(cls, "BIT_10", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_12 = new DataType(env->getStaticObjectField(cls, "BIT_12", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_2 = new DataType(env->getStaticObjectField(cls, "BIT_2", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_24 = new DataType(env->getStaticObjectField(cls, "BIT_24", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_3 = new DataType(env->getStaticObjectField(cls, "BIT_3", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_32 = new DataType(env->getStaticObjectField(cls, "BIT_32", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_4 = new DataType(env->getStaticObjectField(cls, "BIT_4", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_6 = new DataType(env->getStaticObjectField(cls, "BIT_6", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_7 = new DataType(env->getStaticObjectField(cls, "BIT_7", "Lorg/orekit/gnss/metric/parser/DataType;"));
              BIT_8 = new DataType(env->getStaticObjectField(cls, "BIT_8", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_10 = new DataType(env->getStaticObjectField(cls, "INT_10", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_11 = new DataType(env->getStaticObjectField(cls, "INT_11", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_14 = new DataType(env->getStaticObjectField(cls, "INT_14", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_15 = new DataType(env->getStaticObjectField(cls, "INT_15", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_16 = new DataType(env->getStaticObjectField(cls, "INT_16", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_17 = new DataType(env->getStaticObjectField(cls, "INT_17", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_18 = new DataType(env->getStaticObjectField(cls, "INT_18", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_19 = new DataType(env->getStaticObjectField(cls, "INT_19", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_20 = new DataType(env->getStaticObjectField(cls, "INT_20", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_21 = new DataType(env->getStaticObjectField(cls, "INT_21", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_22 = new DataType(env->getStaticObjectField(cls, "INT_22", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_23 = new DataType(env->getStaticObjectField(cls, "INT_23", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_24 = new DataType(env->getStaticObjectField(cls, "INT_24", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_25 = new DataType(env->getStaticObjectField(cls, "INT_25", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_26 = new DataType(env->getStaticObjectField(cls, "INT_26", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_27 = new DataType(env->getStaticObjectField(cls, "INT_27", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_30 = new DataType(env->getStaticObjectField(cls, "INT_30", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_31 = new DataType(env->getStaticObjectField(cls, "INT_31", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_32 = new DataType(env->getStaticObjectField(cls, "INT_32", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_34 = new DataType(env->getStaticObjectField(cls, "INT_34", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_35 = new DataType(env->getStaticObjectField(cls, "INT_35", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_38 = new DataType(env->getStaticObjectField(cls, "INT_38", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_6 = new DataType(env->getStaticObjectField(cls, "INT_6", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_8 = new DataType(env->getStaticObjectField(cls, "INT_8", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_9 = new DataType(env->getStaticObjectField(cls, "INT_9", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_S_11 = new DataType(env->getStaticObjectField(cls, "INT_S_11", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_S_22 = new DataType(env->getStaticObjectField(cls, "INT_S_22", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_S_24 = new DataType(env->getStaticObjectField(cls, "INT_S_24", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_S_27 = new DataType(env->getStaticObjectField(cls, "INT_S_27", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_S_32 = new DataType(env->getStaticObjectField(cls, "INT_S_32", "Lorg/orekit/gnss/metric/parser/DataType;"));
              INT_S_5 = new DataType(env->getStaticObjectField(cls, "INT_S_5", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_10 = new DataType(env->getStaticObjectField(cls, "U_INT_10", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_11 = new DataType(env->getStaticObjectField(cls, "U_INT_11", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_12 = new DataType(env->getStaticObjectField(cls, "U_INT_12", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_13 = new DataType(env->getStaticObjectField(cls, "U_INT_13", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_14 = new DataType(env->getStaticObjectField(cls, "U_INT_14", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_16 = new DataType(env->getStaticObjectField(cls, "U_INT_16", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_17 = new DataType(env->getStaticObjectField(cls, "U_INT_17", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_18 = new DataType(env->getStaticObjectField(cls, "U_INT_18", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_2 = new DataType(env->getStaticObjectField(cls, "U_INT_2", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_20 = new DataType(env->getStaticObjectField(cls, "U_INT_20", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_23 = new DataType(env->getStaticObjectField(cls, "U_INT_23", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_24 = new DataType(env->getStaticObjectField(cls, "U_INT_24", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_25 = new DataType(env->getStaticObjectField(cls, "U_INT_25", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_26 = new DataType(env->getStaticObjectField(cls, "U_INT_26", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_27 = new DataType(env->getStaticObjectField(cls, "U_INT_27", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_3 = new DataType(env->getStaticObjectField(cls, "U_INT_3", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_30 = new DataType(env->getStaticObjectField(cls, "U_INT_30", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_32 = new DataType(env->getStaticObjectField(cls, "U_INT_32", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_35 = new DataType(env->getStaticObjectField(cls, "U_INT_35", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_36 = new DataType(env->getStaticObjectField(cls, "U_INT_36", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_4 = new DataType(env->getStaticObjectField(cls, "U_INT_4", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_5 = new DataType(env->getStaticObjectField(cls, "U_INT_5", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_6 = new DataType(env->getStaticObjectField(cls, "U_INT_6", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_7 = new DataType(env->getStaticObjectField(cls, "U_INT_7", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_8 = new DataType(env->getStaticObjectField(cls, "U_INT_8", "Lorg/orekit/gnss/metric/parser/DataType;"));
              U_INT_9 = new DataType(env->getStaticObjectField(cls, "U_INT_9", "Lorg/orekit/gnss/metric/parser/DataType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::lang::Long DataType::decode(const ::org::orekit::gnss::metric::parser::EncodedMessage & a0) const
          {
            return ::java::lang::Long(env->callObjectMethod(this$, mids$[mid_decode_456bd522167fca80], a0.this$));
          }

          DataType DataType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return DataType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_0fce2f16adddc80d], a0.this$));
          }

          JArray< DataType > DataType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< DataType >(env->callStaticObjectMethod(cls, mids$[mid_values_3714311a45906658]));
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
          static PyObject *t_DataType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DataType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DataType_of_(t_DataType *self, PyObject *args);
          static PyObject *t_DataType_decode(t_DataType *self, PyObject *arg);
          static PyObject *t_DataType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_DataType_values(PyTypeObject *type);
          static PyObject *t_DataType_get__parameters_(t_DataType *self, void *data);
          static PyGetSetDef t_DataType__fields_[] = {
            DECLARE_GET_FIELD(t_DataType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DataType__methods_[] = {
            DECLARE_METHOD(t_DataType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DataType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DataType, of_, METH_VARARGS),
            DECLARE_METHOD(t_DataType, decode, METH_O),
            DECLARE_METHOD(t_DataType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_DataType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DataType)[] = {
            { Py_tp_methods, t_DataType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_DataType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DataType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(DataType, t_DataType, DataType);
          PyObject *t_DataType::wrap_Object(const DataType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DataType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DataType *self = (t_DataType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_DataType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DataType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DataType *self = (t_DataType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_DataType::install(PyObject *module)
          {
            installType(&PY_TYPE(DataType), &PY_TYPE_DEF(DataType), module, "DataType", 0);
          }

          void t_DataType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "class_", make_descriptor(DataType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "wrapfn_", make_descriptor(t_DataType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "boxfn_", make_descriptor(boxObject));
            env->getClass(DataType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_1", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_1)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_10", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_10)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_12", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_12)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_2", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_24", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_24)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_3", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_3)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_32", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_32)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_4", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_4)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_6", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_6)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_7", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_7)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "BIT_8", make_descriptor(t_DataType::wrap_Object(*DataType::BIT_8)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_10", make_descriptor(t_DataType::wrap_Object(*DataType::INT_10)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_11", make_descriptor(t_DataType::wrap_Object(*DataType::INT_11)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_14", make_descriptor(t_DataType::wrap_Object(*DataType::INT_14)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_15", make_descriptor(t_DataType::wrap_Object(*DataType::INT_15)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_16", make_descriptor(t_DataType::wrap_Object(*DataType::INT_16)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_17", make_descriptor(t_DataType::wrap_Object(*DataType::INT_17)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_18", make_descriptor(t_DataType::wrap_Object(*DataType::INT_18)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_19", make_descriptor(t_DataType::wrap_Object(*DataType::INT_19)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_20", make_descriptor(t_DataType::wrap_Object(*DataType::INT_20)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_21", make_descriptor(t_DataType::wrap_Object(*DataType::INT_21)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_22", make_descriptor(t_DataType::wrap_Object(*DataType::INT_22)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_23", make_descriptor(t_DataType::wrap_Object(*DataType::INT_23)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_24", make_descriptor(t_DataType::wrap_Object(*DataType::INT_24)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_25", make_descriptor(t_DataType::wrap_Object(*DataType::INT_25)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_26", make_descriptor(t_DataType::wrap_Object(*DataType::INT_26)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_27", make_descriptor(t_DataType::wrap_Object(*DataType::INT_27)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_30", make_descriptor(t_DataType::wrap_Object(*DataType::INT_30)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_31", make_descriptor(t_DataType::wrap_Object(*DataType::INT_31)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_32", make_descriptor(t_DataType::wrap_Object(*DataType::INT_32)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_34", make_descriptor(t_DataType::wrap_Object(*DataType::INT_34)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_35", make_descriptor(t_DataType::wrap_Object(*DataType::INT_35)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_38", make_descriptor(t_DataType::wrap_Object(*DataType::INT_38)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_6", make_descriptor(t_DataType::wrap_Object(*DataType::INT_6)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_8", make_descriptor(t_DataType::wrap_Object(*DataType::INT_8)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_9", make_descriptor(t_DataType::wrap_Object(*DataType::INT_9)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_S_11", make_descriptor(t_DataType::wrap_Object(*DataType::INT_S_11)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_S_22", make_descriptor(t_DataType::wrap_Object(*DataType::INT_S_22)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_S_24", make_descriptor(t_DataType::wrap_Object(*DataType::INT_S_24)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_S_27", make_descriptor(t_DataType::wrap_Object(*DataType::INT_S_27)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_S_32", make_descriptor(t_DataType::wrap_Object(*DataType::INT_S_32)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "INT_S_5", make_descriptor(t_DataType::wrap_Object(*DataType::INT_S_5)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_10", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_10)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_11", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_11)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_12", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_12)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_13", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_13)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_14", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_14)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_16", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_16)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_17", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_17)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_18", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_18)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_2", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_20", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_20)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_23", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_23)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_24", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_24)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_25", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_25)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_26", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_26)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_27", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_27)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_3", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_3)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_30", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_30)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_32", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_32)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_35", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_35)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_36", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_36)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_4", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_4)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_5", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_5)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_6", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_6)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_7", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_7)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_8", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_8)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataType), "U_INT_9", make_descriptor(t_DataType::wrap_Object(*DataType::U_INT_9)));
          }

          static PyObject *t_DataType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DataType::initializeClass, 1)))
              return NULL;
            return t_DataType::wrap_Object(DataType(((t_DataType *) arg)->object.this$));
          }
          static PyObject *t_DataType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DataType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DataType_of_(t_DataType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_DataType_decode(t_DataType *self, PyObject *arg)
          {
            ::org::orekit::gnss::metric::parser::EncodedMessage a0((jobject) NULL);
            ::java::lang::Long result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::gnss::metric::parser::EncodedMessage::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.decode(a0));
              return ::java::lang::t_Long::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "decode", arg);
            return NULL;
          }

          static PyObject *t_DataType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            DataType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::parser::DataType::valueOf(a0));
              return t_DataType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_DataType_values(PyTypeObject *type)
          {
            JArray< DataType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::parser::DataType::values());
            return JArray<jobject>(result.this$).wrap(t_DataType::wrap_jobject);
          }
          static PyObject *t_DataType_get__parameters_(t_DataType *self, void *data)
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
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_buildConvex_a18d6b9ad6e66651] = env->getMethodID(cls, "buildConvex", "([Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/Region;");
            mids$[mid_difference_9bbfbd7b8dace037] = env->getMethodID(cls, "difference", "(Lorg/hipparchus/geometry/partitioning/Region;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/Region;");
            mids$[mid_getComplement_91551c197f332306] = env->getMethodID(cls, "getComplement", "(Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/Region;");
            mids$[mid_intersection_9bbfbd7b8dace037] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/partitioning/Region;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/Region;");
            mids$[mid_union_9bbfbd7b8dace037] = env->getMethodID(cls, "union", "(Lorg/hipparchus/geometry/partitioning/Region;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/Region;");
            mids$[mid_xor_9bbfbd7b8dace037] = env->getMethodID(cls, "xor", "(Lorg/hipparchus/geometry/partitioning/Region;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/Region;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RegionFactory::RegionFactory() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        ::org::hipparchus::geometry::partitioning::Region RegionFactory::buildConvex(const JArray< ::org::hipparchus::geometry::partitioning::Hyperplane > & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_buildConvex_a18d6b9ad6e66651], a0.this$));
        }

        ::org::hipparchus::geometry::partitioning::Region RegionFactory::difference(const ::org::hipparchus::geometry::partitioning::Region & a0, const ::org::hipparchus::geometry::partitioning::Region & a1) const
        {
          return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_difference_9bbfbd7b8dace037], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::partitioning::Region RegionFactory::getComplement(const ::org::hipparchus::geometry::partitioning::Region & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_getComplement_91551c197f332306], a0.this$));
        }

        ::org::hipparchus::geometry::partitioning::Region RegionFactory::intersection(const ::org::hipparchus::geometry::partitioning::Region & a0, const ::org::hipparchus::geometry::partitioning::Region & a1) const
        {
          return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_intersection_9bbfbd7b8dace037], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::partitioning::Region RegionFactory::union$(const ::org::hipparchus::geometry::partitioning::Region & a0, const ::org::hipparchus::geometry::partitioning::Region & a1) const
        {
          return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_union_9bbfbd7b8dace037], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::partitioning::Region RegionFactory::xor$(const ::org::hipparchus::geometry::partitioning::Region & a0, const ::org::hipparchus::geometry::partitioning::Region & a1) const
        {
          return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_xor_9bbfbd7b8dace037], a0.this$, a1.this$));
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
#include "org/orekit/frames/encounter/EncounterLOFType.h"
#include "org/orekit/frames/encounter/EncounterLOF.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/frames/encounter/EncounterLOFType.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {
      namespace encounter {

        ::java::lang::Class *EncounterLOFType::class$ = NULL;
        jmethodID *EncounterLOFType::mids$ = NULL;
        bool EncounterLOFType::live$ = false;
        EncounterLOFType *EncounterLOFType::DEFAULT = NULL;
        EncounterLOFType *EncounterLOFType::VALSECCHI = NULL;

        jclass EncounterLOFType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/frames/encounter/EncounterLOFType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getFrame_13991103af85e2ca] = env->getMethodID(cls, "getFrame", "(Lorg/orekit/utils/FieldPVCoordinates;)Lorg/orekit/frames/encounter/EncounterLOF;");
            mids$[mid_getFrame_aa955ea2f9916c9f] = env->getMethodID(cls, "getFrame", "(Lorg/orekit/utils/PVCoordinates;)Lorg/orekit/frames/encounter/EncounterLOF;");
            mids$[mid_valueOf_dae34f1930167317] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/frames/encounter/EncounterLOFType;");
            mids$[mid_values_e66d129e7a510464] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/frames/encounter/EncounterLOFType;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT = new EncounterLOFType(env->getStaticObjectField(cls, "DEFAULT", "Lorg/orekit/frames/encounter/EncounterLOFType;"));
            VALSECCHI = new EncounterLOFType(env->getStaticObjectField(cls, "VALSECCHI", "Lorg/orekit/frames/encounter/EncounterLOFType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::frames::encounter::EncounterLOF EncounterLOFType::getFrame(const ::org::orekit::utils::FieldPVCoordinates & a0) const
        {
          return ::org::orekit::frames::encounter::EncounterLOF(env->callObjectMethod(this$, mids$[mid_getFrame_13991103af85e2ca], a0.this$));
        }

        ::org::orekit::frames::encounter::EncounterLOF EncounterLOFType::getFrame(const ::org::orekit::utils::PVCoordinates & a0) const
        {
          return ::org::orekit::frames::encounter::EncounterLOF(env->callObjectMethod(this$, mids$[mid_getFrame_aa955ea2f9916c9f], a0.this$));
        }

        EncounterLOFType EncounterLOFType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return EncounterLOFType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_dae34f1930167317], a0.this$));
        }

        JArray< EncounterLOFType > EncounterLOFType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< EncounterLOFType >(env->callStaticObjectMethod(cls, mids$[mid_values_e66d129e7a510464]));
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
    namespace frames {
      namespace encounter {
        static PyObject *t_EncounterLOFType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EncounterLOFType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EncounterLOFType_of_(t_EncounterLOFType *self, PyObject *args);
        static PyObject *t_EncounterLOFType_getFrame(t_EncounterLOFType *self, PyObject *args);
        static PyObject *t_EncounterLOFType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_EncounterLOFType_values(PyTypeObject *type);
        static PyObject *t_EncounterLOFType_get__parameters_(t_EncounterLOFType *self, void *data);
        static PyGetSetDef t_EncounterLOFType__fields_[] = {
          DECLARE_GET_FIELD(t_EncounterLOFType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EncounterLOFType__methods_[] = {
          DECLARE_METHOD(t_EncounterLOFType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EncounterLOFType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EncounterLOFType, of_, METH_VARARGS),
          DECLARE_METHOD(t_EncounterLOFType, getFrame, METH_VARARGS),
          DECLARE_METHOD(t_EncounterLOFType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_EncounterLOFType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EncounterLOFType)[] = {
          { Py_tp_methods, t_EncounterLOFType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EncounterLOFType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EncounterLOFType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(EncounterLOFType, t_EncounterLOFType, EncounterLOFType);
        PyObject *t_EncounterLOFType::wrap_Object(const EncounterLOFType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EncounterLOFType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EncounterLOFType *self = (t_EncounterLOFType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EncounterLOFType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EncounterLOFType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EncounterLOFType *self = (t_EncounterLOFType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EncounterLOFType::install(PyObject *module)
        {
          installType(&PY_TYPE(EncounterLOFType), &PY_TYPE_DEF(EncounterLOFType), module, "EncounterLOFType", 0);
        }

        void t_EncounterLOFType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EncounterLOFType), "class_", make_descriptor(EncounterLOFType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EncounterLOFType), "wrapfn_", make_descriptor(t_EncounterLOFType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EncounterLOFType), "boxfn_", make_descriptor(boxObject));
          env->getClass(EncounterLOFType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EncounterLOFType), "DEFAULT", make_descriptor(t_EncounterLOFType::wrap_Object(*EncounterLOFType::DEFAULT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EncounterLOFType), "VALSECCHI", make_descriptor(t_EncounterLOFType::wrap_Object(*EncounterLOFType::VALSECCHI)));
        }

        static PyObject *t_EncounterLOFType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EncounterLOFType::initializeClass, 1)))
            return NULL;
          return t_EncounterLOFType::wrap_Object(EncounterLOFType(((t_EncounterLOFType *) arg)->object.this$));
        }
        static PyObject *t_EncounterLOFType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EncounterLOFType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EncounterLOFType_of_(t_EncounterLOFType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_EncounterLOFType_getFrame(t_EncounterLOFType *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::frames::encounter::EncounterLOF result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
              {
                OBJ_CALL(result = self->object.getFrame(a0));
                return ::org::orekit::frames::encounter::t_EncounterLOF::wrap_Object(result);
              }
            }
            {
              ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
              ::org::orekit::frames::encounter::EncounterLOF result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getFrame(a0));
                return ::org::orekit::frames::encounter::t_EncounterLOF::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getFrame", args);
          return NULL;
        }

        static PyObject *t_EncounterLOFType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          EncounterLOFType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::frames::encounter::EncounterLOFType::valueOf(a0));
            return t_EncounterLOFType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_EncounterLOFType_values(PyTypeObject *type)
        {
          JArray< EncounterLOFType > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::frames::encounter::EncounterLOFType::values());
          return JArray<jobject>(result.this$).wrap(t_EncounterLOFType::wrap_jobject);
        }
        static PyObject *t_EncounterLOFType_get__parameters_(t_EncounterLOFType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/NRLMSISE00.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/models/earth/atmosphere/NRLMSISE00InputParameters.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/models/earth/atmosphere/NRLMSISE00.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *NRLMSISE00::class$ = NULL;
          jmethodID *NRLMSISE00::mids$ = NULL;
          bool NRLMSISE00::live$ = false;

          jclass NRLMSISE00::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/NRLMSISE00");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e99c95858c97e349] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/NRLMSISE00InputParameters;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/BodyShape;)V");
              mids$[mid_init$_7d34f4ef06631494] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/NRLMSISE00InputParameters;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/BodyShape;Lorg/orekit/time/TimeScale;)V");
              mids$[mid_getDensity_818999d9e7960fd1] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getDensity_57dd506d2d9ba196] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)D");
              mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_withSwitch_8bc8fb0092c9c486] = env->getMethodID(cls, "withSwitch", "(II)Lorg/orekit/models/earth/atmosphere/NRLMSISE00;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          NRLMSISE00::NRLMSISE00(const ::org::orekit::models::earth::atmosphere::NRLMSISE00InputParameters & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::orekit::bodies::BodyShape & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e99c95858c97e349, a0.this$, a1.this$, a2.this$)) {}

          NRLMSISE00::NRLMSISE00(const ::org::orekit::models::earth::atmosphere::NRLMSISE00InputParameters & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::orekit::bodies::BodyShape & a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7d34f4ef06631494, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          ::org::hipparchus::CalculusFieldElement NRLMSISE00::getDensity(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_818999d9e7960fd1], a0.this$, a1.this$, a2.this$));
          }

          jdouble NRLMSISE00::getDensity(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDensity_57dd506d2d9ba196], a0.this$, a1.this$, a2.this$);
          }

          ::org::orekit::frames::Frame NRLMSISE00::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
          }

          NRLMSISE00 NRLMSISE00::withSwitch(jint a0, jint a1) const
          {
            return NRLMSISE00(env->callObjectMethod(this$, mids$[mid_withSwitch_8bc8fb0092c9c486], a0, a1));
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
          static PyObject *t_NRLMSISE00_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NRLMSISE00_instance_(PyTypeObject *type, PyObject *arg);
          static int t_NRLMSISE00_init_(t_NRLMSISE00 *self, PyObject *args, PyObject *kwds);
          static PyObject *t_NRLMSISE00_getDensity(t_NRLMSISE00 *self, PyObject *args);
          static PyObject *t_NRLMSISE00_getFrame(t_NRLMSISE00 *self);
          static PyObject *t_NRLMSISE00_withSwitch(t_NRLMSISE00 *self, PyObject *args);
          static PyObject *t_NRLMSISE00_get__frame(t_NRLMSISE00 *self, void *data);
          static PyGetSetDef t_NRLMSISE00__fields_[] = {
            DECLARE_GET_FIELD(t_NRLMSISE00, frame),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NRLMSISE00__methods_[] = {
            DECLARE_METHOD(t_NRLMSISE00, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NRLMSISE00, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NRLMSISE00, getDensity, METH_VARARGS),
            DECLARE_METHOD(t_NRLMSISE00, getFrame, METH_NOARGS),
            DECLARE_METHOD(t_NRLMSISE00, withSwitch, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NRLMSISE00)[] = {
            { Py_tp_methods, t_NRLMSISE00__methods_ },
            { Py_tp_init, (void *) t_NRLMSISE00_init_ },
            { Py_tp_getset, t_NRLMSISE00__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NRLMSISE00)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(NRLMSISE00, t_NRLMSISE00, NRLMSISE00);

          void t_NRLMSISE00::install(PyObject *module)
          {
            installType(&PY_TYPE(NRLMSISE00), &PY_TYPE_DEF(NRLMSISE00), module, "NRLMSISE00", 0);
          }

          void t_NRLMSISE00::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NRLMSISE00), "class_", make_descriptor(NRLMSISE00::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NRLMSISE00), "wrapfn_", make_descriptor(t_NRLMSISE00::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NRLMSISE00), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NRLMSISE00_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NRLMSISE00::initializeClass, 1)))
              return NULL;
            return t_NRLMSISE00::wrap_Object(NRLMSISE00(((t_NRLMSISE00 *) arg)->object.this$));
          }
          static PyObject *t_NRLMSISE00_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NRLMSISE00::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_NRLMSISE00_init_(t_NRLMSISE00 *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::models::earth::atmosphere::NRLMSISE00InputParameters a0((jobject) NULL);
                ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
                ::org::orekit::bodies::BodyShape a2((jobject) NULL);
                NRLMSISE00 object((jobject) NULL);

                if (!parseArgs(args, "kkk", ::org::orekit::models::earth::atmosphere::NRLMSISE00InputParameters::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = NRLMSISE00(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::orekit::models::earth::atmosphere::NRLMSISE00InputParameters a0((jobject) NULL);
                ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
                ::org::orekit::bodies::BodyShape a2((jobject) NULL);
                ::org::orekit::time::TimeScale a3((jobject) NULL);
                NRLMSISE00 object((jobject) NULL);

                if (!parseArgs(args, "kkkk", ::org::orekit::models::earth::atmosphere::NRLMSISE00InputParameters::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = NRLMSISE00(a0, a1, a2, a3));
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

          static PyObject *t_NRLMSISE00_getDensity(t_NRLMSISE00 *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
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

          static PyObject *t_NRLMSISE00_getFrame(t_NRLMSISE00 *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_NRLMSISE00_withSwitch(t_NRLMSISE00 *self, PyObject *args)
          {
            jint a0;
            jint a1;
            NRLMSISE00 result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.withSwitch(a0, a1));
              return t_NRLMSISE00::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withSwitch", args);
            return NULL;
          }

          static PyObject *t_NRLMSISE00_get__frame(t_NRLMSISE00 *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonFieldTimeStamped.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonFieldTimeStamped::class$ = NULL;
      jmethodID *PythonFieldTimeStamped::mids$ = NULL;
      bool PythonFieldTimeStamped::live$ = false;

      jclass PythonFieldTimeStamped::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonFieldTimeStamped");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getDate_f1fe4daf77c66560] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldTimeStamped::PythonFieldTimeStamped() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonFieldTimeStamped::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonFieldTimeStamped::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonFieldTimeStamped::pythonExtension(jlong a0) const
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
    namespace time {
      static PyObject *t_PythonFieldTimeStamped_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldTimeStamped_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldTimeStamped_of_(t_PythonFieldTimeStamped *self, PyObject *args);
      static int t_PythonFieldTimeStamped_init_(t_PythonFieldTimeStamped *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldTimeStamped_finalize(t_PythonFieldTimeStamped *self);
      static PyObject *t_PythonFieldTimeStamped_pythonExtension(t_PythonFieldTimeStamped *self, PyObject *args);
      static jobject JNICALL t_PythonFieldTimeStamped_getDate0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonFieldTimeStamped_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonFieldTimeStamped_get__self(t_PythonFieldTimeStamped *self, void *data);
      static PyObject *t_PythonFieldTimeStamped_get__parameters_(t_PythonFieldTimeStamped *self, void *data);
      static PyGetSetDef t_PythonFieldTimeStamped__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldTimeStamped, self),
        DECLARE_GET_FIELD(t_PythonFieldTimeStamped, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldTimeStamped__methods_[] = {
        DECLARE_METHOD(t_PythonFieldTimeStamped, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldTimeStamped, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldTimeStamped, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldTimeStamped, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldTimeStamped, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldTimeStamped)[] = {
        { Py_tp_methods, t_PythonFieldTimeStamped__methods_ },
        { Py_tp_init, (void *) t_PythonFieldTimeStamped_init_ },
        { Py_tp_getset, t_PythonFieldTimeStamped__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldTimeStamped)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldTimeStamped, t_PythonFieldTimeStamped, PythonFieldTimeStamped);
      PyObject *t_PythonFieldTimeStamped::wrap_Object(const PythonFieldTimeStamped& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldTimeStamped::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldTimeStamped *self = (t_PythonFieldTimeStamped *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonFieldTimeStamped::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldTimeStamped::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldTimeStamped *self = (t_PythonFieldTimeStamped *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonFieldTimeStamped::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldTimeStamped), &PY_TYPE_DEF(PythonFieldTimeStamped), module, "PythonFieldTimeStamped", 1);
      }

      void t_PythonFieldTimeStamped::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeStamped), "class_", make_descriptor(PythonFieldTimeStamped::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeStamped), "wrapfn_", make_descriptor(t_PythonFieldTimeStamped::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeStamped), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldTimeStamped::initializeClass);
        JNINativeMethod methods[] = {
          { "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;", (void *) t_PythonFieldTimeStamped_getDate0 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldTimeStamped_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonFieldTimeStamped_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldTimeStamped::initializeClass, 1)))
          return NULL;
        return t_PythonFieldTimeStamped::wrap_Object(PythonFieldTimeStamped(((t_PythonFieldTimeStamped *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldTimeStamped_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldTimeStamped::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldTimeStamped_of_(t_PythonFieldTimeStamped *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldTimeStamped_init_(t_PythonFieldTimeStamped *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldTimeStamped object((jobject) NULL);

        INT_CALL(object = PythonFieldTimeStamped());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldTimeStamped_finalize(t_PythonFieldTimeStamped *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldTimeStamped_pythonExtension(t_PythonFieldTimeStamped *self, PyObject *args)
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

      static jobject JNICALL t_PythonFieldTimeStamped_getDate0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeStamped::mids$[PythonFieldTimeStamped::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getDate", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &value))
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

      static void JNICALL t_PythonFieldTimeStamped_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeStamped::mids$[PythonFieldTimeStamped::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldTimeStamped::mids$[PythonFieldTimeStamped::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonFieldTimeStamped_get__self(t_PythonFieldTimeStamped *self, void *data)
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
      static PyObject *t_PythonFieldTimeStamped_get__parameters_(t_PythonFieldTimeStamped *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/geometry/fov/PythonSmoothFieldOfView.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *PythonSmoothFieldOfView::class$ = NULL;
        jmethodID *PythonSmoothFieldOfView::mids$ = NULL;
        bool PythonSmoothFieldOfView::live$ = false;

        jclass PythonSmoothFieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/PythonSmoothFieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8a3775c012d81228] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
            mids$[mid_directionAt_20de5f9d51c6611f] = env->getMethodID(cls, "directionAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_offsetFromBoundary_d0bb3aecf00cc465] = env->getMethodID(cls, "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D");
            mids$[mid_projectToBoundary_b48aa9aef740fa79] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonSmoothFieldOfView::PythonSmoothFieldOfView(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) : ::org::orekit::geometry::fov::SmoothFieldOfView(env->newObject(initializeClass, &mids$, mid_init$_8a3775c012d81228, a0.this$, a1.this$, a2)) {}

        void PythonSmoothFieldOfView::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonSmoothFieldOfView::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonSmoothFieldOfView::pythonExtension(jlong a0) const
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
    namespace geometry {
      namespace fov {
        static PyObject *t_PythonSmoothFieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonSmoothFieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonSmoothFieldOfView_init_(t_PythonSmoothFieldOfView *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonSmoothFieldOfView_finalize(t_PythonSmoothFieldOfView *self);
        static PyObject *t_PythonSmoothFieldOfView_pythonExtension(t_PythonSmoothFieldOfView *self, PyObject *args);
        static jobject JNICALL t_PythonSmoothFieldOfView_directionAt0(JNIEnv *jenv, jobject jobj, jdouble a0);
        static jdouble JNICALL t_PythonSmoothFieldOfView_offsetFromBoundary1(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2);
        static jobject JNICALL t_PythonSmoothFieldOfView_projectToBoundary2(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonSmoothFieldOfView_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonSmoothFieldOfView_get__self(t_PythonSmoothFieldOfView *self, void *data);
        static PyGetSetDef t_PythonSmoothFieldOfView__fields_[] = {
          DECLARE_GET_FIELD(t_PythonSmoothFieldOfView, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonSmoothFieldOfView__methods_[] = {
          DECLARE_METHOD(t_PythonSmoothFieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonSmoothFieldOfView, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonSmoothFieldOfView, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonSmoothFieldOfView, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonSmoothFieldOfView)[] = {
          { Py_tp_methods, t_PythonSmoothFieldOfView__methods_ },
          { Py_tp_init, (void *) t_PythonSmoothFieldOfView_init_ },
          { Py_tp_getset, t_PythonSmoothFieldOfView__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonSmoothFieldOfView)[] = {
          &PY_TYPE_DEF(::org::orekit::geometry::fov::SmoothFieldOfView),
          NULL
        };

        DEFINE_TYPE(PythonSmoothFieldOfView, t_PythonSmoothFieldOfView, PythonSmoothFieldOfView);

        void t_PythonSmoothFieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonSmoothFieldOfView), &PY_TYPE_DEF(PythonSmoothFieldOfView), module, "PythonSmoothFieldOfView", 1);
        }

        void t_PythonSmoothFieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSmoothFieldOfView), "class_", make_descriptor(PythonSmoothFieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSmoothFieldOfView), "wrapfn_", make_descriptor(t_PythonSmoothFieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSmoothFieldOfView), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonSmoothFieldOfView::initializeClass);
          JNINativeMethod methods[] = {
            { "directionAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonSmoothFieldOfView_directionAt0 },
            { "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D", (void *) t_PythonSmoothFieldOfView_offsetFromBoundary1 },
            { "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonSmoothFieldOfView_projectToBoundary2 },
            { "pythonDecRef", "()V", (void *) t_PythonSmoothFieldOfView_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonSmoothFieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonSmoothFieldOfView::initializeClass, 1)))
            return NULL;
          return t_PythonSmoothFieldOfView::wrap_Object(PythonSmoothFieldOfView(((t_PythonSmoothFieldOfView *) arg)->object.this$));
        }
        static PyObject *t_PythonSmoothFieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonSmoothFieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonSmoothFieldOfView_init_(t_PythonSmoothFieldOfView *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          PythonSmoothFieldOfView object((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = PythonSmoothFieldOfView(a0, a1, a2));
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

        static PyObject *t_PythonSmoothFieldOfView_finalize(t_PythonSmoothFieldOfView *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonSmoothFieldOfView_pythonExtension(t_PythonSmoothFieldOfView *self, PyObject *args)
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

        static jobject JNICALL t_PythonSmoothFieldOfView_directionAt0(JNIEnv *jenv, jobject jobj, jdouble a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSmoothFieldOfView::mids$[PythonSmoothFieldOfView::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "directionAt", "d", (double) a0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("directionAt", result);
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

        static jdouble JNICALL t_PythonSmoothFieldOfView_offsetFromBoundary1(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSmoothFieldOfView::mids$[PythonSmoothFieldOfView::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
          PyObject *o2 = ::org::orekit::propagation::events::t_VisibilityTrigger::wrap_Object(::org::orekit::propagation::events::VisibilityTrigger(a2));
          PyObject *result = PyObject_CallMethod(obj, "offsetFromBoundary", "OdO", o0, (double) a1, o2);
          Py_DECREF(o0);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("offsetFromBoundary", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static jobject JNICALL t_PythonSmoothFieldOfView_projectToBoundary2(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSmoothFieldOfView::mids$[PythonSmoothFieldOfView::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
          PyObject *result = PyObject_CallMethod(obj, "projectToBoundary", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("projectToBoundary", result);
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

        static void JNICALL t_PythonSmoothFieldOfView_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSmoothFieldOfView::mids$[PythonSmoothFieldOfView::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonSmoothFieldOfView::mids$[PythonSmoothFieldOfView::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonSmoothFieldOfView_get__self(t_PythonSmoothFieldOfView *self, void *data)
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
#include "org/orekit/propagation/events/EventsLogger.h"
#include "org/orekit/propagation/events/EventsLogger$LoggedEvent.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EventsLogger::class$ = NULL;
        jmethodID *EventsLogger::mids$ = NULL;
        bool EventsLogger::live$ = false;

        jclass EventsLogger::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EventsLogger");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_clearLoggedEvents_0640e6acf969ed28] = env->getMethodID(cls, "clearLoggedEvents", "()V");
            mids$[mid_getLoggedEvents_0d9551367f7ecdef] = env->getMethodID(cls, "getLoggedEvents", "()Ljava/util/List;");
            mids$[mid_monitorDetector_6308e57dca6811a7] = env->getMethodID(cls, "monitorDetector", "(Lorg/orekit/propagation/events/EventDetector;)Lorg/orekit/propagation/events/EventDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EventsLogger::EventsLogger() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void EventsLogger::clearLoggedEvents() const
        {
          env->callVoidMethod(this$, mids$[mid_clearLoggedEvents_0640e6acf969ed28]);
        }

        ::java::util::List EventsLogger::getLoggedEvents() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getLoggedEvents_0d9551367f7ecdef]));
        }

        ::org::orekit::propagation::events::EventDetector EventsLogger::monitorDetector(const ::org::orekit::propagation::events::EventDetector & a0) const
        {
          return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_monitorDetector_6308e57dca6811a7], a0.this$));
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
        static PyObject *t_EventsLogger_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventsLogger_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EventsLogger_init_(t_EventsLogger *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EventsLogger_clearLoggedEvents(t_EventsLogger *self);
        static PyObject *t_EventsLogger_getLoggedEvents(t_EventsLogger *self);
        static PyObject *t_EventsLogger_monitorDetector(t_EventsLogger *self, PyObject *arg);
        static PyObject *t_EventsLogger_get__loggedEvents(t_EventsLogger *self, void *data);
        static PyGetSetDef t_EventsLogger__fields_[] = {
          DECLARE_GET_FIELD(t_EventsLogger, loggedEvents),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventsLogger__methods_[] = {
          DECLARE_METHOD(t_EventsLogger, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventsLogger, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventsLogger, clearLoggedEvents, METH_NOARGS),
          DECLARE_METHOD(t_EventsLogger, getLoggedEvents, METH_NOARGS),
          DECLARE_METHOD(t_EventsLogger, monitorDetector, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventsLogger)[] = {
          { Py_tp_methods, t_EventsLogger__methods_ },
          { Py_tp_init, (void *) t_EventsLogger_init_ },
          { Py_tp_getset, t_EventsLogger__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventsLogger)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EventsLogger, t_EventsLogger, EventsLogger);

        void t_EventsLogger::install(PyObject *module)
        {
          installType(&PY_TYPE(EventsLogger), &PY_TYPE_DEF(EventsLogger), module, "EventsLogger", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventsLogger), "LoggedEvent", make_descriptor(&PY_TYPE_DEF(EventsLogger$LoggedEvent)));
        }

        void t_EventsLogger::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventsLogger), "class_", make_descriptor(EventsLogger::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventsLogger), "wrapfn_", make_descriptor(t_EventsLogger::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventsLogger), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventsLogger_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventsLogger::initializeClass, 1)))
            return NULL;
          return t_EventsLogger::wrap_Object(EventsLogger(((t_EventsLogger *) arg)->object.this$));
        }
        static PyObject *t_EventsLogger_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventsLogger::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EventsLogger_init_(t_EventsLogger *self, PyObject *args, PyObject *kwds)
        {
          EventsLogger object((jobject) NULL);

          INT_CALL(object = EventsLogger());
          self->object = object;

          return 0;
        }

        static PyObject *t_EventsLogger_clearLoggedEvents(t_EventsLogger *self)
        {
          OBJ_CALL(self->object.clearLoggedEvents());
          Py_RETURN_NONE;
        }

        static PyObject *t_EventsLogger_getLoggedEvents(t_EventsLogger *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getLoggedEvents());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventsLogger$LoggedEvent));
        }

        static PyObject *t_EventsLogger_monitorDetector(t_EventsLogger *self, PyObject *arg)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
          ::org::orekit::propagation::events::EventDetector result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.monitorDetector(a0));
            return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "monitorDetector", arg);
          return NULL;
        }

        static PyObject *t_EventsLogger_get__loggedEvents(t_EventsLogger *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTJ2SquaredClosedFormContext::class$ = NULL;
            jmethodID *DSSTJ2SquaredClosedFormContext::mids$ = NULL;
            bool DSSTJ2SquaredClosedFormContext::live$ = false;

            jclass DSSTJ2SquaredClosedFormContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedFormContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_1b26a40c824b8c5c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
                mids$[mid_getA4_557b8123390d8d0c] = env->getMethodID(cls, "getA4", "()D");
                mids$[mid_getAlpha4_557b8123390d8d0c] = env->getMethodID(cls, "getAlpha4", "()D");
                mids$[mid_getC_557b8123390d8d0c] = env->getMethodID(cls, "getC", "()D");
                mids$[mid_getEta_557b8123390d8d0c] = env->getMethodID(cls, "getEta", "()D");
                mids$[mid_getS2_557b8123390d8d0c] = env->getMethodID(cls, "getS2", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTJ2SquaredClosedFormContext::DSSTJ2SquaredClosedFormContext(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1) : ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext(env->newObject(initializeClass, &mids$, mid_init$_1b26a40c824b8c5c, a0.this$, a1.this$)) {}

            jdouble DSSTJ2SquaredClosedFormContext::getA4() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getA4_557b8123390d8d0c]);
            }

            jdouble DSSTJ2SquaredClosedFormContext::getAlpha4() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAlpha4_557b8123390d8d0c]);
            }

            jdouble DSSTJ2SquaredClosedFormContext::getC() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getC_557b8123390d8d0c]);
            }

            jdouble DSSTJ2SquaredClosedFormContext::getEta() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getEta_557b8123390d8d0c]);
            }

            jdouble DSSTJ2SquaredClosedFormContext::getS2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getS2_557b8123390d8d0c]);
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
            static PyObject *t_DSSTJ2SquaredClosedFormContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTJ2SquaredClosedFormContext_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTJ2SquaredClosedFormContext_init_(t_DSSTJ2SquaredClosedFormContext *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTJ2SquaredClosedFormContext_getA4(t_DSSTJ2SquaredClosedFormContext *self);
            static PyObject *t_DSSTJ2SquaredClosedFormContext_getAlpha4(t_DSSTJ2SquaredClosedFormContext *self);
            static PyObject *t_DSSTJ2SquaredClosedFormContext_getC(t_DSSTJ2SquaredClosedFormContext *self);
            static PyObject *t_DSSTJ2SquaredClosedFormContext_getEta(t_DSSTJ2SquaredClosedFormContext *self);
            static PyObject *t_DSSTJ2SquaredClosedFormContext_getS2(t_DSSTJ2SquaredClosedFormContext *self);
            static PyObject *t_DSSTJ2SquaredClosedFormContext_get__a4(t_DSSTJ2SquaredClosedFormContext *self, void *data);
            static PyObject *t_DSSTJ2SquaredClosedFormContext_get__alpha4(t_DSSTJ2SquaredClosedFormContext *self, void *data);
            static PyObject *t_DSSTJ2SquaredClosedFormContext_get__c(t_DSSTJ2SquaredClosedFormContext *self, void *data);
            static PyObject *t_DSSTJ2SquaredClosedFormContext_get__eta(t_DSSTJ2SquaredClosedFormContext *self, void *data);
            static PyObject *t_DSSTJ2SquaredClosedFormContext_get__s2(t_DSSTJ2SquaredClosedFormContext *self, void *data);
            static PyGetSetDef t_DSSTJ2SquaredClosedFormContext__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTJ2SquaredClosedFormContext, a4),
              DECLARE_GET_FIELD(t_DSSTJ2SquaredClosedFormContext, alpha4),
              DECLARE_GET_FIELD(t_DSSTJ2SquaredClosedFormContext, c),
              DECLARE_GET_FIELD(t_DSSTJ2SquaredClosedFormContext, eta),
              DECLARE_GET_FIELD(t_DSSTJ2SquaredClosedFormContext, s2),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTJ2SquaredClosedFormContext__methods_[] = {
              DECLARE_METHOD(t_DSSTJ2SquaredClosedFormContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedFormContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedFormContext, getA4, METH_NOARGS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedFormContext, getAlpha4, METH_NOARGS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedFormContext, getC, METH_NOARGS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedFormContext, getEta, METH_NOARGS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedFormContext, getS2, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTJ2SquaredClosedFormContext)[] = {
              { Py_tp_methods, t_DSSTJ2SquaredClosedFormContext__methods_ },
              { Py_tp_init, (void *) t_DSSTJ2SquaredClosedFormContext_init_ },
              { Py_tp_getset, t_DSSTJ2SquaredClosedFormContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTJ2SquaredClosedFormContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext),
              NULL
            };

            DEFINE_TYPE(DSSTJ2SquaredClosedFormContext, t_DSSTJ2SquaredClosedFormContext, DSSTJ2SquaredClosedFormContext);

            void t_DSSTJ2SquaredClosedFormContext::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTJ2SquaredClosedFormContext), &PY_TYPE_DEF(DSSTJ2SquaredClosedFormContext), module, "DSSTJ2SquaredClosedFormContext", 0);
            }

            void t_DSSTJ2SquaredClosedFormContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTJ2SquaredClosedFormContext), "class_", make_descriptor(DSSTJ2SquaredClosedFormContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTJ2SquaredClosedFormContext), "wrapfn_", make_descriptor(t_DSSTJ2SquaredClosedFormContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTJ2SquaredClosedFormContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTJ2SquaredClosedFormContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTJ2SquaredClosedFormContext::initializeClass, 1)))
                return NULL;
              return t_DSSTJ2SquaredClosedFormContext::wrap_Object(DSSTJ2SquaredClosedFormContext(((t_DSSTJ2SquaredClosedFormContext *) arg)->object.this$));
            }
            static PyObject *t_DSSTJ2SquaredClosedFormContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTJ2SquaredClosedFormContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTJ2SquaredClosedFormContext_init_(t_DSSTJ2SquaredClosedFormContext *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              DSSTJ2SquaredClosedFormContext object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1))
              {
                INT_CALL(object = DSSTJ2SquaredClosedFormContext(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_DSSTJ2SquaredClosedFormContext_getA4(t_DSSTJ2SquaredClosedFormContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getA4());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTJ2SquaredClosedFormContext_getAlpha4(t_DSSTJ2SquaredClosedFormContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAlpha4());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTJ2SquaredClosedFormContext_getC(t_DSSTJ2SquaredClosedFormContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getC());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTJ2SquaredClosedFormContext_getEta(t_DSSTJ2SquaredClosedFormContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getEta());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTJ2SquaredClosedFormContext_getS2(t_DSSTJ2SquaredClosedFormContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getS2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTJ2SquaredClosedFormContext_get__a4(t_DSSTJ2SquaredClosedFormContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getA4());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTJ2SquaredClosedFormContext_get__alpha4(t_DSSTJ2SquaredClosedFormContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAlpha4());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTJ2SquaredClosedFormContext_get__c(t_DSSTJ2SquaredClosedFormContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getC());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTJ2SquaredClosedFormContext_get__eta(t_DSSTJ2SquaredClosedFormContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getEta());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTJ2SquaredClosedFormContext_get__s2(t_DSSTJ2SquaredClosedFormContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getS2());
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
#include "org/orekit/frames/PoleCorrection.h"
#include "org/orekit/frames/PoleCorrection.h"
#include "java/lang/Class.h"
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
          mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
          mids$[mid_getXp_557b8123390d8d0c] = env->getMethodID(cls, "getXp", "()D");
          mids$[mid_getYp_557b8123390d8d0c] = env->getMethodID(cls, "getYp", "()D");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          NULL_CORRECTION = new PoleCorrection(env->getStaticObjectField(cls, "NULL_CORRECTION", "Lorg/orekit/frames/PoleCorrection;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PoleCorrection::PoleCorrection(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

      jdouble PoleCorrection::getXp() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getXp_557b8123390d8d0c]);
      }

      jdouble PoleCorrection::getYp() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getYp_557b8123390d8d0c]);
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/raster/SimpleTileFactory.h"
#include "org/orekit/rugged/raster/TileFactory.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/raster/SimpleTile.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        ::java::lang::Class *SimpleTileFactory::class$ = NULL;
        jmethodID *SimpleTileFactory::mids$ = NULL;
        bool SimpleTileFactory::live$ = false;

        jclass SimpleTileFactory::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/raster/SimpleTileFactory");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_createTile_cae927382788fc7b] = env->getMethodID(cls, "createTile", "()Lorg/orekit/rugged/raster/SimpleTile;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SimpleTileFactory::SimpleTileFactory() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        ::org::orekit::rugged::raster::SimpleTile SimpleTileFactory::createTile() const
        {
          return ::org::orekit::rugged::raster::SimpleTile(env->callObjectMethod(this$, mids$[mid_createTile_cae927382788fc7b]));
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
        static PyObject *t_SimpleTileFactory_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SimpleTileFactory_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SimpleTileFactory_init_(t_SimpleTileFactory *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SimpleTileFactory_createTile(t_SimpleTileFactory *self);

        static PyMethodDef t_SimpleTileFactory__methods_[] = {
          DECLARE_METHOD(t_SimpleTileFactory, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimpleTileFactory, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimpleTileFactory, createTile, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SimpleTileFactory)[] = {
          { Py_tp_methods, t_SimpleTileFactory__methods_ },
          { Py_tp_init, (void *) t_SimpleTileFactory_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SimpleTileFactory)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SimpleTileFactory, t_SimpleTileFactory, SimpleTileFactory);

        void t_SimpleTileFactory::install(PyObject *module)
        {
          installType(&PY_TYPE(SimpleTileFactory), &PY_TYPE_DEF(SimpleTileFactory), module, "SimpleTileFactory", 0);
        }

        void t_SimpleTileFactory::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTileFactory), "class_", make_descriptor(SimpleTileFactory::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTileFactory), "wrapfn_", make_descriptor(t_SimpleTileFactory::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTileFactory), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SimpleTileFactory_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SimpleTileFactory::initializeClass, 1)))
            return NULL;
          return t_SimpleTileFactory::wrap_Object(SimpleTileFactory(((t_SimpleTileFactory *) arg)->object.this$));
        }
        static PyObject *t_SimpleTileFactory_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SimpleTileFactory::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SimpleTileFactory_init_(t_SimpleTileFactory *self, PyObject *args, PyObject *kwds)
        {
          SimpleTileFactory object((jobject) NULL);

          INT_CALL(object = SimpleTileFactory());
          self->object = object;

          return 0;
        }

        static PyObject *t_SimpleTileFactory_createTile(t_SimpleTileFactory *self)
        {
          ::org::orekit::rugged::raster::SimpleTile result((jobject) NULL);
          OBJ_CALL(result = self->object.createTile());
          return ::org::orekit::rugged::raster::t_SimpleTile::wrap_Object(result);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/adjustment/GroundOptimizationProblemBuilder.h"
#include "java/util/List.h"
#include "org/orekit/rugged/adjustment/measurements/Observables.h"
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "org/orekit/rugged/api/Rugged.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {

        ::java::lang::Class *GroundOptimizationProblemBuilder::class$ = NULL;
        jmethodID *GroundOptimizationProblemBuilder::mids$ = NULL;
        bool GroundOptimizationProblemBuilder::live$ = false;

        jclass GroundOptimizationProblemBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/GroundOptimizationProblemBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_637a56b354b9c756] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/rugged/adjustment/measurements/Observables;Lorg/orekit/rugged/api/Rugged;)V");
            mids$[mid_build_d4732481b9968791] = env->getMethodID(cls, "build", "(ID)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
            mids$[mid_initMapping_0640e6acf969ed28] = env->getMethodID(cls, "initMapping", "()V");
            mids$[mid_createTargetAndWeight_0640e6acf969ed28] = env->getMethodID(cls, "createTargetAndWeight", "()V");
            mids$[mid_createFunction_e31bcbfb9203b3a6] = env->getMethodID(cls, "createFunction", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GroundOptimizationProblemBuilder::GroundOptimizationProblemBuilder(const ::java::util::List & a0, const ::org::orekit::rugged::adjustment::measurements::Observables & a1, const ::org::orekit::rugged::api::Rugged & a2) : ::org::orekit::rugged::adjustment::OptimizationProblemBuilder(env->newObject(initializeClass, &mids$, mid_init$_637a56b354b9c756, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem GroundOptimizationProblemBuilder::build(jint a0, jdouble a1) const
        {
          return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callObjectMethod(this$, mids$[mid_build_d4732481b9968791], a0, a1));
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
      namespace adjustment {
        static PyObject *t_GroundOptimizationProblemBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GroundOptimizationProblemBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GroundOptimizationProblemBuilder_init_(t_GroundOptimizationProblemBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GroundOptimizationProblemBuilder_build(t_GroundOptimizationProblemBuilder *self, PyObject *args);

        static PyMethodDef t_GroundOptimizationProblemBuilder__methods_[] = {
          DECLARE_METHOD(t_GroundOptimizationProblemBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundOptimizationProblemBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundOptimizationProblemBuilder, build, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GroundOptimizationProblemBuilder)[] = {
          { Py_tp_methods, t_GroundOptimizationProblemBuilder__methods_ },
          { Py_tp_init, (void *) t_GroundOptimizationProblemBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GroundOptimizationProblemBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::rugged::adjustment::OptimizationProblemBuilder),
          NULL
        };

        DEFINE_TYPE(GroundOptimizationProblemBuilder, t_GroundOptimizationProblemBuilder, GroundOptimizationProblemBuilder);

        void t_GroundOptimizationProblemBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(GroundOptimizationProblemBuilder), &PY_TYPE_DEF(GroundOptimizationProblemBuilder), module, "GroundOptimizationProblemBuilder", 0);
        }

        void t_GroundOptimizationProblemBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundOptimizationProblemBuilder), "class_", make_descriptor(GroundOptimizationProblemBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundOptimizationProblemBuilder), "wrapfn_", make_descriptor(t_GroundOptimizationProblemBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundOptimizationProblemBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GroundOptimizationProblemBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GroundOptimizationProblemBuilder::initializeClass, 1)))
            return NULL;
          return t_GroundOptimizationProblemBuilder::wrap_Object(GroundOptimizationProblemBuilder(((t_GroundOptimizationProblemBuilder *) arg)->object.this$));
        }
        static PyObject *t_GroundOptimizationProblemBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GroundOptimizationProblemBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GroundOptimizationProblemBuilder_init_(t_GroundOptimizationProblemBuilder *self, PyObject *args, PyObject *kwds)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::rugged::adjustment::measurements::Observables a1((jobject) NULL);
          ::org::orekit::rugged::api::Rugged a2((jobject) NULL);
          GroundOptimizationProblemBuilder object((jobject) NULL);

          if (!parseArgs(args, "Kkk", ::java::util::List::initializeClass, ::org::orekit::rugged::adjustment::measurements::Observables::initializeClass, ::org::orekit::rugged::api::Rugged::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2))
          {
            INT_CALL(object = GroundOptimizationProblemBuilder(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GroundOptimizationProblemBuilder_build(t_GroundOptimizationProblemBuilder *self, PyObject *args)
        {
          jint a0;
          jdouble a1;
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            OBJ_CALL(result = self->object.build(a0, a1));
            return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
          }

          return callSuper(PY_TYPE(GroundOptimizationProblemBuilder), (PyObject *) self, "build", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeType.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeType.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            ::java::lang::Class *AttitudeType::class$ = NULL;
            jmethodID *AttitudeType::mids$ = NULL;
            bool AttitudeType::live$ = false;
            AttitudeType *AttitudeType::EULER_ANGLE = NULL;
            AttitudeType *AttitudeType::EULER_ANGLE_ANGVEL = NULL;
            AttitudeType *AttitudeType::EULER_ANGLE_DERIVATIVE = NULL;
            AttitudeType *AttitudeType::QUATERNION = NULL;
            AttitudeType *AttitudeType::QUATERNION_ANGVEL = NULL;
            AttitudeType *AttitudeType::QUATERNION_DERIVATIVE = NULL;
            AttitudeType *AttitudeType::QUATERNION_EULER_RATES = NULL;
            AttitudeType *AttitudeType::SPIN = NULL;
            AttitudeType *AttitudeType::SPIN_NUTATION = NULL;
            AttitudeType *AttitudeType::SPIN_NUTATION_MOMENTUM = NULL;

            jclass AttitudeType::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/AttitudeType");

                mids$ = new jmethodID[max_mid];
                mids$[mid_build_884ded5c9bf06e41] = env->getMethodID(cls, "build", "(ZZLorg/hipparchus/geometry/euclidean/threed/RotationOrder;ZLorg/orekit/time/AbsoluteDate;[D)Lorg/orekit/utils/TimeStampedAngularCoordinates;");
                mids$[mid_createDataFields_046bca203a3b7380] = env->getMethodID(cls, "createDataFields", "(ZZLorg/hipparchus/geometry/euclidean/threed/RotationOrder;ZLorg/orekit/utils/TimeStampedAngularCoordinates;)[Ljava/lang/String;");
                mids$[mid_generateData_e8d7c2eca9f2e13a] = env->getMethodID(cls, "generateData", "(ZZLorg/hipparchus/geometry/euclidean/threed/RotationOrder;ZLorg/orekit/utils/TimeStampedAngularCoordinates;)[D");
                mids$[mid_getAngularDerivativesFilter_c2e9b2b1c0db39b3] = env->getMethodID(cls, "getAngularDerivativesFilter", "()Lorg/orekit/utils/AngularDerivativesFilter;");
                mids$[mid_getName_c03a7791f2fcb1f1] = env->getMethodID(cls, "getName", "(D)Ljava/lang/String;");
                mids$[mid_parse_1772366e535be56e] = env->getMethodID(cls, "parse", "(ZZLorg/hipparchus/geometry/euclidean/threed/RotationOrder;ZLorg/orekit/files/ccsds/utils/ContextBinding;[Ljava/lang/String;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");
                mids$[mid_parseType_e8951a69baaf9d76] = env->getStaticMethodID(cls, "parseType", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;");
                mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
                mids$[mid_valueOf_e8951a69baaf9d76] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;");
                mids$[mid_values_ccbb61b1e458cec5] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                EULER_ANGLE = new AttitudeType(env->getStaticObjectField(cls, "EULER_ANGLE", "Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;"));
                EULER_ANGLE_ANGVEL = new AttitudeType(env->getStaticObjectField(cls, "EULER_ANGLE_ANGVEL", "Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;"));
                EULER_ANGLE_DERIVATIVE = new AttitudeType(env->getStaticObjectField(cls, "EULER_ANGLE_DERIVATIVE", "Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;"));
                QUATERNION = new AttitudeType(env->getStaticObjectField(cls, "QUATERNION", "Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;"));
                QUATERNION_ANGVEL = new AttitudeType(env->getStaticObjectField(cls, "QUATERNION_ANGVEL", "Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;"));
                QUATERNION_DERIVATIVE = new AttitudeType(env->getStaticObjectField(cls, "QUATERNION_DERIVATIVE", "Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;"));
                QUATERNION_EULER_RATES = new AttitudeType(env->getStaticObjectField(cls, "QUATERNION_EULER_RATES", "Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;"));
                SPIN = new AttitudeType(env->getStaticObjectField(cls, "SPIN", "Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;"));
                SPIN_NUTATION = new AttitudeType(env->getStaticObjectField(cls, "SPIN_NUTATION", "Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;"));
                SPIN_NUTATION_MOMENTUM = new AttitudeType(env->getStaticObjectField(cls, "SPIN_NUTATION_MOMENTUM", "Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::utils::TimeStampedAngularCoordinates AttitudeType::build(jboolean a0, jboolean a1, const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a2, jboolean a3, const ::org::orekit::time::AbsoluteDate & a4, const JArray< jdouble > & a5) const
            {
              return ::org::orekit::utils::TimeStampedAngularCoordinates(env->callObjectMethod(this$, mids$[mid_build_884ded5c9bf06e41], a0, a1, a2.this$, a3, a4.this$, a5.this$));
            }

            JArray< ::java::lang::String > AttitudeType::createDataFields(jboolean a0, jboolean a1, const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a2, jboolean a3, const ::org::orekit::utils::TimeStampedAngularCoordinates & a4) const
            {
              return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_createDataFields_046bca203a3b7380], a0, a1, a2.this$, a3, a4.this$));
            }

            JArray< jdouble > AttitudeType::generateData(jboolean a0, jboolean a1, const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a2, jboolean a3, const ::org::orekit::utils::TimeStampedAngularCoordinates & a4) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_generateData_e8d7c2eca9f2e13a], a0, a1, a2.this$, a3, a4.this$));
            }

            ::org::orekit::utils::AngularDerivativesFilter AttitudeType::getAngularDerivativesFilter() const
            {
              return ::org::orekit::utils::AngularDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAngularDerivativesFilter_c2e9b2b1c0db39b3]));
            }

            ::java::lang::String AttitudeType::getName(jdouble a0) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_c03a7791f2fcb1f1], a0));
            }

            ::org::orekit::utils::TimeStampedAngularCoordinates AttitudeType::parse(jboolean a0, jboolean a1, const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a2, jboolean a3, const ::org::orekit::files::ccsds::utils::ContextBinding & a4, const JArray< ::java::lang::String > & a5) const
            {
              return ::org::orekit::utils::TimeStampedAngularCoordinates(env->callObjectMethod(this$, mids$[mid_parse_1772366e535be56e], a0, a1, a2.this$, a3, a4.this$, a5.this$));
            }

            AttitudeType AttitudeType::parseType(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return AttitudeType(env->callStaticObjectMethod(cls, mids$[mid_parseType_e8951a69baaf9d76], a0.this$));
            }

            ::java::lang::String AttitudeType::toString() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
            }

            AttitudeType AttitudeType::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return AttitudeType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e8951a69baaf9d76], a0.this$));
            }

            JArray< AttitudeType > AttitudeType::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< AttitudeType >(env->callStaticObjectMethod(cls, mids$[mid_values_ccbb61b1e458cec5]));
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
            static PyObject *t_AttitudeType_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AttitudeType_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AttitudeType_of_(t_AttitudeType *self, PyObject *args);
            static PyObject *t_AttitudeType_build(t_AttitudeType *self, PyObject *args);
            static PyObject *t_AttitudeType_createDataFields(t_AttitudeType *self, PyObject *args);
            static PyObject *t_AttitudeType_generateData(t_AttitudeType *self, PyObject *args);
            static PyObject *t_AttitudeType_getAngularDerivativesFilter(t_AttitudeType *self);
            static PyObject *t_AttitudeType_getName(t_AttitudeType *self, PyObject *arg);
            static PyObject *t_AttitudeType_parse(t_AttitudeType *self, PyObject *args);
            static PyObject *t_AttitudeType_parseType(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AttitudeType_toString(t_AttitudeType *self, PyObject *args);
            static PyObject *t_AttitudeType_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_AttitudeType_values(PyTypeObject *type);
            static PyObject *t_AttitudeType_get__angularDerivativesFilter(t_AttitudeType *self, void *data);
            static PyObject *t_AttitudeType_get__parameters_(t_AttitudeType *self, void *data);
            static PyGetSetDef t_AttitudeType__fields_[] = {
              DECLARE_GET_FIELD(t_AttitudeType, angularDerivativesFilter),
              DECLARE_GET_FIELD(t_AttitudeType, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AttitudeType__methods_[] = {
              DECLARE_METHOD(t_AttitudeType, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AttitudeType, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AttitudeType, of_, METH_VARARGS),
              DECLARE_METHOD(t_AttitudeType, build, METH_VARARGS),
              DECLARE_METHOD(t_AttitudeType, createDataFields, METH_VARARGS),
              DECLARE_METHOD(t_AttitudeType, generateData, METH_VARARGS),
              DECLARE_METHOD(t_AttitudeType, getAngularDerivativesFilter, METH_NOARGS),
              DECLARE_METHOD(t_AttitudeType, getName, METH_O),
              DECLARE_METHOD(t_AttitudeType, parse, METH_VARARGS),
              DECLARE_METHOD(t_AttitudeType, parseType, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AttitudeType, toString, METH_VARARGS),
              DECLARE_METHOD(t_AttitudeType, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_AttitudeType, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AttitudeType)[] = {
              { Py_tp_methods, t_AttitudeType__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AttitudeType__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AttitudeType)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(AttitudeType, t_AttitudeType, AttitudeType);
            PyObject *t_AttitudeType::wrap_Object(const AttitudeType& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AttitudeType::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AttitudeType *self = (t_AttitudeType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AttitudeType::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AttitudeType::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AttitudeType *self = (t_AttitudeType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AttitudeType::install(PyObject *module)
            {
              installType(&PY_TYPE(AttitudeType), &PY_TYPE_DEF(AttitudeType), module, "AttitudeType", 0);
            }

            void t_AttitudeType::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "class_", make_descriptor(AttitudeType::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "wrapfn_", make_descriptor(t_AttitudeType::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "boxfn_", make_descriptor(boxObject));
              env->getClass(AttitudeType::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "EULER_ANGLE", make_descriptor(t_AttitudeType::wrap_Object(*AttitudeType::EULER_ANGLE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "EULER_ANGLE_ANGVEL", make_descriptor(t_AttitudeType::wrap_Object(*AttitudeType::EULER_ANGLE_ANGVEL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "EULER_ANGLE_DERIVATIVE", make_descriptor(t_AttitudeType::wrap_Object(*AttitudeType::EULER_ANGLE_DERIVATIVE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "QUATERNION", make_descriptor(t_AttitudeType::wrap_Object(*AttitudeType::QUATERNION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "QUATERNION_ANGVEL", make_descriptor(t_AttitudeType::wrap_Object(*AttitudeType::QUATERNION_ANGVEL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "QUATERNION_DERIVATIVE", make_descriptor(t_AttitudeType::wrap_Object(*AttitudeType::QUATERNION_DERIVATIVE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "QUATERNION_EULER_RATES", make_descriptor(t_AttitudeType::wrap_Object(*AttitudeType::QUATERNION_EULER_RATES)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "SPIN", make_descriptor(t_AttitudeType::wrap_Object(*AttitudeType::SPIN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "SPIN_NUTATION", make_descriptor(t_AttitudeType::wrap_Object(*AttitudeType::SPIN_NUTATION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeType), "SPIN_NUTATION_MOMENTUM", make_descriptor(t_AttitudeType::wrap_Object(*AttitudeType::SPIN_NUTATION_MOMENTUM)));
            }

            static PyObject *t_AttitudeType_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AttitudeType::initializeClass, 1)))
                return NULL;
              return t_AttitudeType::wrap_Object(AttitudeType(((t_AttitudeType *) arg)->object.this$));
            }
            static PyObject *t_AttitudeType_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AttitudeType::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AttitudeType_of_(t_AttitudeType *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AttitudeType_build(t_AttitudeType *self, PyObject *args)
            {
              jboolean a0;
              jboolean a1;
              ::org::hipparchus::geometry::euclidean::threed::RotationOrder a2((jobject) NULL);
              PyTypeObject **p2;
              jboolean a3;
              ::org::orekit::time::AbsoluteDate a4((jobject) NULL);
              JArray< jdouble > a5((jobject) NULL);
              ::org::orekit::utils::TimeStampedAngularCoordinates result((jobject) NULL);

              if (!parseArgs(args, "ZZKZk[D", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a3, &a4, &a5))
              {
                OBJ_CALL(result = self->object.build(a0, a1, a2, a3, a4, a5));
                return ::org::orekit::utils::t_TimeStampedAngularCoordinates::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "build", args);
              return NULL;
            }

            static PyObject *t_AttitudeType_createDataFields(t_AttitudeType *self, PyObject *args)
            {
              jboolean a0;
              jboolean a1;
              ::org::hipparchus::geometry::euclidean::threed::RotationOrder a2((jobject) NULL);
              PyTypeObject **p2;
              jboolean a3;
              ::org::orekit::utils::TimeStampedAngularCoordinates a4((jobject) NULL);
              JArray< ::java::lang::String > result((jobject) NULL);

              if (!parseArgs(args, "ZZKZk", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, ::org::orekit::utils::TimeStampedAngularCoordinates::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a3, &a4))
              {
                OBJ_CALL(result = self->object.createDataFields(a0, a1, a2, a3, a4));
                return JArray<jstring>(result.this$).wrap();
              }

              PyErr_SetArgsError((PyObject *) self, "createDataFields", args);
              return NULL;
            }

            static PyObject *t_AttitudeType_generateData(t_AttitudeType *self, PyObject *args)
            {
              jboolean a0;
              jboolean a1;
              ::org::hipparchus::geometry::euclidean::threed::RotationOrder a2((jobject) NULL);
              PyTypeObject **p2;
              jboolean a3;
              ::org::orekit::utils::TimeStampedAngularCoordinates a4((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "ZZKZk", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, ::org::orekit::utils::TimeStampedAngularCoordinates::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a3, &a4))
              {
                OBJ_CALL(result = self->object.generateData(a0, a1, a2, a3, a4));
                return result.wrap();
              }

              PyErr_SetArgsError((PyObject *) self, "generateData", args);
              return NULL;
            }

            static PyObject *t_AttitudeType_getAngularDerivativesFilter(t_AttitudeType *self)
            {
              ::org::orekit::utils::AngularDerivativesFilter result((jobject) NULL);
              OBJ_CALL(result = self->object.getAngularDerivativesFilter());
              return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(result);
            }

            static PyObject *t_AttitudeType_getName(t_AttitudeType *self, PyObject *arg)
            {
              jdouble a0;
              ::java::lang::String result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.getName(a0));
                return j2p(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getName", arg);
              return NULL;
            }

            static PyObject *t_AttitudeType_parse(t_AttitudeType *self, PyObject *args)
            {
              jboolean a0;
              jboolean a1;
              ::org::hipparchus::geometry::euclidean::threed::RotationOrder a2((jobject) NULL);
              PyTypeObject **p2;
              jboolean a3;
              ::org::orekit::files::ccsds::utils::ContextBinding a4((jobject) NULL);
              JArray< ::java::lang::String > a5((jobject) NULL);
              ::org::orekit::utils::TimeStampedAngularCoordinates result((jobject) NULL);

              if (!parseArgs(args, "ZZKZk[s", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a3, &a4, &a5))
              {
                OBJ_CALL(result = self->object.parse(a0, a1, a2, a3, a4, a5));
                return ::org::orekit::utils::t_TimeStampedAngularCoordinates::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "parse", args);
              return NULL;
            }

            static PyObject *t_AttitudeType_parseType(PyTypeObject *type, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);
              AttitudeType result((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::AttitudeType::parseType(a0));
                return t_AttitudeType::wrap_Object(result);
              }

              PyErr_SetArgsError(type, "parseType", arg);
              return NULL;
            }

            static PyObject *t_AttitudeType_toString(t_AttitudeType *self, PyObject *args)
            {
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.toString());
                return j2p(result);
              }

              return callSuper(PY_TYPE(AttitudeType), (PyObject *) self, "toString", args, 2);
            }

            static PyObject *t_AttitudeType_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              AttitudeType result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::AttitudeType::valueOf(a0));
                return t_AttitudeType::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_AttitudeType_values(PyTypeObject *type)
            {
              JArray< AttitudeType > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::AttitudeType::values());
              return JArray<jobject>(result.this$).wrap(t_AttitudeType::wrap_jobject);
            }
            static PyObject *t_AttitudeType_get__parameters_(t_AttitudeType *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_AttitudeType_get__angularDerivativesFilter(t_AttitudeType *self, void *data)
            {
              ::org::orekit::utils::AngularDerivativesFilter value((jobject) NULL);
              OBJ_CALL(value = self->object.getAngularDerivativesFilter());
              return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/InterSatellitesRange.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/InterSatellitesRange.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *InterSatellitesRange::class$ = NULL;
        jmethodID *InterSatellitesRange::mids$ = NULL;
        bool InterSatellitesRange::live$ = false;
        ::java::lang::String *InterSatellitesRange::MEASUREMENT_TYPE = NULL;

        jclass InterSatellitesRange::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/InterSatellitesRange");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a2d3c0162de8f6fd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/ObservableSatellite;Lorg/orekit/estimation/measurements/ObservableSatellite;ZLorg/orekit/time/AbsoluteDate;DDD)V");
            mids$[mid_isTwoWay_89b302893bdbe1f1] = env->getMethodID(cls, "isTwoWay", "()Z");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_71d69ca0f7c280a7] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_eae039ee8c8a4a4d] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        InterSatellitesRange::InterSatellitesRange(const ::org::orekit::estimation::measurements::ObservableSatellite & a0, const ::org::orekit::estimation::measurements::ObservableSatellite & a1, jboolean a2, const ::org::orekit::time::AbsoluteDate & a3, jdouble a4, jdouble a5, jdouble a6) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_a2d3c0162de8f6fd, a0.this$, a1.this$, a2, a3.this$, a4, a5, a6)) {}

        jboolean InterSatellitesRange::isTwoWay() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isTwoWay_89b302893bdbe1f1]);
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
        static PyObject *t_InterSatellitesRange_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InterSatellitesRange_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InterSatellitesRange_of_(t_InterSatellitesRange *self, PyObject *args);
        static int t_InterSatellitesRange_init_(t_InterSatellitesRange *self, PyObject *args, PyObject *kwds);
        static PyObject *t_InterSatellitesRange_isTwoWay(t_InterSatellitesRange *self);
        static PyObject *t_InterSatellitesRange_get__twoWay(t_InterSatellitesRange *self, void *data);
        static PyObject *t_InterSatellitesRange_get__parameters_(t_InterSatellitesRange *self, void *data);
        static PyGetSetDef t_InterSatellitesRange__fields_[] = {
          DECLARE_GET_FIELD(t_InterSatellitesRange, twoWay),
          DECLARE_GET_FIELD(t_InterSatellitesRange, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_InterSatellitesRange__methods_[] = {
          DECLARE_METHOD(t_InterSatellitesRange, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterSatellitesRange, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InterSatellitesRange, of_, METH_VARARGS),
          DECLARE_METHOD(t_InterSatellitesRange, isTwoWay, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(InterSatellitesRange)[] = {
          { Py_tp_methods, t_InterSatellitesRange__methods_ },
          { Py_tp_init, (void *) t_InterSatellitesRange_init_ },
          { Py_tp_getset, t_InterSatellitesRange__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(InterSatellitesRange)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::AbstractMeasurement),
          NULL
        };

        DEFINE_TYPE(InterSatellitesRange, t_InterSatellitesRange, InterSatellitesRange);
        PyObject *t_InterSatellitesRange::wrap_Object(const InterSatellitesRange& object, PyTypeObject *p0)
        {
          PyObject *obj = t_InterSatellitesRange::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_InterSatellitesRange *self = (t_InterSatellitesRange *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_InterSatellitesRange::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_InterSatellitesRange::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_InterSatellitesRange *self = (t_InterSatellitesRange *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_InterSatellitesRange::install(PyObject *module)
        {
          installType(&PY_TYPE(InterSatellitesRange), &PY_TYPE_DEF(InterSatellitesRange), module, "InterSatellitesRange", 0);
        }

        void t_InterSatellitesRange::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesRange), "class_", make_descriptor(InterSatellitesRange::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesRange), "wrapfn_", make_descriptor(t_InterSatellitesRange::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesRange), "boxfn_", make_descriptor(boxObject));
          env->getClass(InterSatellitesRange::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesRange), "MEASUREMENT_TYPE", make_descriptor(j2p(*InterSatellitesRange::MEASUREMENT_TYPE)));
        }

        static PyObject *t_InterSatellitesRange_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, InterSatellitesRange::initializeClass, 1)))
            return NULL;
          return t_InterSatellitesRange::wrap_Object(InterSatellitesRange(((t_InterSatellitesRange *) arg)->object.this$));
        }
        static PyObject *t_InterSatellitesRange_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, InterSatellitesRange::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_InterSatellitesRange_of_(t_InterSatellitesRange *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_InterSatellitesRange_init_(t_InterSatellitesRange *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::ObservableSatellite a0((jobject) NULL);
          ::org::orekit::estimation::measurements::ObservableSatellite a1((jobject) NULL);
          jboolean a2;
          ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
          jdouble a4;
          jdouble a5;
          jdouble a6;
          InterSatellitesRange object((jobject) NULL);

          if (!parseArgs(args, "kkZkDDD", ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = InterSatellitesRange(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(InterSatellitesRange);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_InterSatellitesRange_isTwoWay(t_InterSatellitesRange *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isTwoWay());
          Py_RETURN_BOOL(result);
        }
        static PyObject *t_InterSatellitesRange_get__parameters_(t_InterSatellitesRange *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_InterSatellitesRange_get__twoWay(t_InterSatellitesRange *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isTwoWay());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/FieldTimeStampedPair.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *FieldTimeStampedPair::class$ = NULL;
      jmethodID *FieldTimeStampedPair::mids$ = NULL;
      bool FieldTimeStampedPair::live$ = false;
      jdouble FieldTimeStampedPair::DEFAULT_DATE_EQUALITY_THRESHOLD = (jdouble) 0;

      jclass FieldTimeStampedPair::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/FieldTimeStampedPair");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b3d03b70a0ada62c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldTimeStamped;Lorg/orekit/time/FieldTimeStamped;)V");
          mids$[mid_init$_4befea89d3ef9391] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldTimeStamped;Lorg/orekit/time/FieldTimeStamped;D)V");
          mids$[mid_getDate_f1fe4daf77c66560] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getFirst_d840ecaffb3bbf7f] = env->getMethodID(cls, "getFirst", "()Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_getSecond_d840ecaffb3bbf7f] = env->getMethodID(cls, "getSecond", "()Lorg/orekit/time/FieldTimeStamped;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_DATE_EQUALITY_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_DATE_EQUALITY_THRESHOLD");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldTimeStampedPair::FieldTimeStampedPair(const ::org::orekit::time::FieldTimeStamped & a0, const ::org::orekit::time::FieldTimeStamped & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b3d03b70a0ada62c, a0.this$, a1.this$)) {}

      FieldTimeStampedPair::FieldTimeStampedPair(const ::org::orekit::time::FieldTimeStamped & a0, const ::org::orekit::time::FieldTimeStamped & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4befea89d3ef9391, a0.this$, a1.this$, a2)) {}

      ::org::orekit::time::FieldAbsoluteDate FieldTimeStampedPair::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_f1fe4daf77c66560]));
      }

      ::org::orekit::time::FieldTimeStamped FieldTimeStampedPair::getFirst() const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_getFirst_d840ecaffb3bbf7f]));
      }

      ::org::orekit::time::FieldTimeStamped FieldTimeStampedPair::getSecond() const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_getSecond_d840ecaffb3bbf7f]));
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
      static PyObject *t_FieldTimeStampedPair_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeStampedPair_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeStampedPair_of_(t_FieldTimeStampedPair *self, PyObject *args);
      static int t_FieldTimeStampedPair_init_(t_FieldTimeStampedPair *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldTimeStampedPair_getDate(t_FieldTimeStampedPair *self);
      static PyObject *t_FieldTimeStampedPair_getFirst(t_FieldTimeStampedPair *self);
      static PyObject *t_FieldTimeStampedPair_getSecond(t_FieldTimeStampedPair *self);
      static PyObject *t_FieldTimeStampedPair_get__date(t_FieldTimeStampedPair *self, void *data);
      static PyObject *t_FieldTimeStampedPair_get__first(t_FieldTimeStampedPair *self, void *data);
      static PyObject *t_FieldTimeStampedPair_get__second(t_FieldTimeStampedPair *self, void *data);
      static PyObject *t_FieldTimeStampedPair_get__parameters_(t_FieldTimeStampedPair *self, void *data);
      static PyGetSetDef t_FieldTimeStampedPair__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTimeStampedPair, date),
        DECLARE_GET_FIELD(t_FieldTimeStampedPair, first),
        DECLARE_GET_FIELD(t_FieldTimeStampedPair, second),
        DECLARE_GET_FIELD(t_FieldTimeStampedPair, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTimeStampedPair__methods_[] = {
        DECLARE_METHOD(t_FieldTimeStampedPair, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeStampedPair, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeStampedPair, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTimeStampedPair, getDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeStampedPair, getFirst, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeStampedPair, getSecond, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTimeStampedPair)[] = {
        { Py_tp_methods, t_FieldTimeStampedPair__methods_ },
        { Py_tp_init, (void *) t_FieldTimeStampedPair_init_ },
        { Py_tp_getset, t_FieldTimeStampedPair__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTimeStampedPair)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldTimeStampedPair, t_FieldTimeStampedPair, FieldTimeStampedPair);
      PyObject *t_FieldTimeStampedPair::wrap_Object(const FieldTimeStampedPair& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
      {
        PyObject *obj = t_FieldTimeStampedPair::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeStampedPair *self = (t_FieldTimeStampedPair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
          self->parameters[2] = p2;
        }
        return obj;
      }

      PyObject *t_FieldTimeStampedPair::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
      {
        PyObject *obj = t_FieldTimeStampedPair::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeStampedPair *self = (t_FieldTimeStampedPair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
          self->parameters[2] = p2;
        }
        return obj;
      }

      void t_FieldTimeStampedPair::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTimeStampedPair), &PY_TYPE_DEF(FieldTimeStampedPair), module, "FieldTimeStampedPair", 0);
      }

      void t_FieldTimeStampedPair::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStampedPair), "class_", make_descriptor(FieldTimeStampedPair::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStampedPair), "wrapfn_", make_descriptor(t_FieldTimeStampedPair::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStampedPair), "boxfn_", make_descriptor(boxObject));
        env->getClass(FieldTimeStampedPair::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStampedPair), "DEFAULT_DATE_EQUALITY_THRESHOLD", make_descriptor(FieldTimeStampedPair::DEFAULT_DATE_EQUALITY_THRESHOLD));
      }

      static PyObject *t_FieldTimeStampedPair_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTimeStampedPair::initializeClass, 1)))
          return NULL;
        return t_FieldTimeStampedPair::wrap_Object(FieldTimeStampedPair(((t_FieldTimeStampedPair *) arg)->object.this$));
      }
      static PyObject *t_FieldTimeStampedPair_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTimeStampedPair::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTimeStampedPair_of_(t_FieldTimeStampedPair *self, PyObject *args)
      {
        if (!parseArg(args, "T", 3, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldTimeStampedPair_init_(t_FieldTimeStampedPair *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldTimeStamped a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTimeStampedPair object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldTimeStamped::initializeClass, ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_, &a1, &p1, ::org::orekit::time::t_FieldTimeStamped::parameters_))
            {
              INT_CALL(object = FieldTimeStampedPair(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldTimeStamped a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldTimeStampedPair object((jobject) NULL);

            if (!parseArgs(args, "KKD", ::org::orekit::time::FieldTimeStamped::initializeClass, ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_, &a1, &p1, ::org::orekit::time::t_FieldTimeStamped::parameters_, &a2))
            {
              INT_CALL(object = FieldTimeStampedPair(a0, a1, a2));
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

      static PyObject *t_FieldTimeStampedPair_getDate(t_FieldTimeStampedPair *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[2]);
      }

      static PyObject *t_FieldTimeStampedPair_getFirst(t_FieldTimeStampedPair *self)
      {
        ::org::orekit::time::FieldTimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getFirst());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
      }

      static PyObject *t_FieldTimeStampedPair_getSecond(t_FieldTimeStampedPair *self)
      {
        ::org::orekit::time::FieldTimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getSecond());
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
      }
      static PyObject *t_FieldTimeStampedPair_get__parameters_(t_FieldTimeStampedPair *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldTimeStampedPair_get__date(t_FieldTimeStampedPair *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldTimeStampedPair_get__first(t_FieldTimeStampedPair *self, void *data)
      {
        ::org::orekit::time::FieldTimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getFirst());
        return ::org::orekit::time::t_FieldTimeStamped::wrap_Object(value);
      }

      static PyObject *t_FieldTimeStampedPair_get__second(t_FieldTimeStampedPair *self, void *data)
      {
        ::org::orekit::time::FieldTimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getSecond());
        return ::org::orekit::time::t_FieldTimeStamped::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder.h"
#include "org/hipparchus/optim/PointVectorValuePair.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/ParameterValidator.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/MultivariateVectorFunction.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "org/hipparchus/analysis/MultivariateMatrixFunction.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *LeastSquaresBuilder::class$ = NULL;
            jmethodID *LeastSquaresBuilder::mids$ = NULL;
            bool LeastSquaresBuilder::live$ = false;

            jclass LeastSquaresBuilder::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_build_8da872a04cfd1f82] = env->getMethodID(cls, "build", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
                mids$[mid_checker_8090e166d4e37735] = env->getMethodID(cls, "checker", "(Lorg/hipparchus/optim/ConvergenceChecker;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_checkerPair_8090e166d4e37735] = env->getMethodID(cls, "checkerPair", "(Lorg/hipparchus/optim/ConvergenceChecker;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_lazyEvaluation_0db757a98266db03] = env->getMethodID(cls, "lazyEvaluation", "(Z)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_maxEvaluations_efa40d0a1aad0d92] = env->getMethodID(cls, "maxEvaluations", "(I)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_maxIterations_efa40d0a1aad0d92] = env->getMethodID(cls, "maxIterations", "(I)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_model_6708cccdc8fcfe7e] = env->getMethodID(cls, "model", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_model_edc12bfa90530a42] = env->getMethodID(cls, "model", "(Lorg/hipparchus/analysis/MultivariateVectorFunction;Lorg/hipparchus/analysis/MultivariateMatrixFunction;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_parameterValidator_2b3007103af5764e] = env->getMethodID(cls, "parameterValidator", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/ParameterValidator;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_start_74dfefa6c4207905] = env->getMethodID(cls, "start", "([D)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_start_37ec8a2db0e944dd] = env->getMethodID(cls, "start", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_target_74dfefa6c4207905] = env->getMethodID(cls, "target", "([D)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_target_37ec8a2db0e944dd] = env->getMethodID(cls, "target", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_weight_8bc210f82cb3a9f1] = env->getMethodID(cls, "weight", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            LeastSquaresBuilder::LeastSquaresBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem LeastSquaresBuilder::build() const
            {
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callObjectMethod(this$, mids$[mid_build_8da872a04cfd1f82]));
            }

            LeastSquaresBuilder LeastSquaresBuilder::checker(const ::org::hipparchus::optim::ConvergenceChecker & a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_checker_8090e166d4e37735], a0.this$));
            }

            LeastSquaresBuilder LeastSquaresBuilder::checkerPair(const ::org::hipparchus::optim::ConvergenceChecker & a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_checkerPair_8090e166d4e37735], a0.this$));
            }

            LeastSquaresBuilder LeastSquaresBuilder::lazyEvaluation(jboolean a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_lazyEvaluation_0db757a98266db03], a0));
            }

            LeastSquaresBuilder LeastSquaresBuilder::maxEvaluations(jint a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_maxEvaluations_efa40d0a1aad0d92], a0));
            }

            LeastSquaresBuilder LeastSquaresBuilder::maxIterations(jint a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_maxIterations_efa40d0a1aad0d92], a0));
            }

            LeastSquaresBuilder LeastSquaresBuilder::model(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction & a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_model_6708cccdc8fcfe7e], a0.this$));
            }

            LeastSquaresBuilder LeastSquaresBuilder::model(const ::org::hipparchus::analysis::MultivariateVectorFunction & a0, const ::org::hipparchus::analysis::MultivariateMatrixFunction & a1) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_model_edc12bfa90530a42], a0.this$, a1.this$));
            }

            LeastSquaresBuilder LeastSquaresBuilder::parameterValidator(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::ParameterValidator & a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_parameterValidator_2b3007103af5764e], a0.this$));
            }

            LeastSquaresBuilder LeastSquaresBuilder::start(const JArray< jdouble > & a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_start_74dfefa6c4207905], a0.this$));
            }

            LeastSquaresBuilder LeastSquaresBuilder::start(const ::org::hipparchus::linear::RealVector & a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_start_37ec8a2db0e944dd], a0.this$));
            }

            LeastSquaresBuilder LeastSquaresBuilder::target(const JArray< jdouble > & a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_target_74dfefa6c4207905], a0.this$));
            }

            LeastSquaresBuilder LeastSquaresBuilder::target(const ::org::hipparchus::linear::RealVector & a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_target_37ec8a2db0e944dd], a0.this$));
            }

            LeastSquaresBuilder LeastSquaresBuilder::weight(const ::org::hipparchus::linear::RealMatrix & a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_weight_8bc210f82cb3a9f1], a0.this$));
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
            static PyObject *t_LeastSquaresBuilder_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresBuilder_instance_(PyTypeObject *type, PyObject *arg);
            static int t_LeastSquaresBuilder_init_(t_LeastSquaresBuilder *self, PyObject *args, PyObject *kwds);
            static PyObject *t_LeastSquaresBuilder_build(t_LeastSquaresBuilder *self);
            static PyObject *t_LeastSquaresBuilder_checker(t_LeastSquaresBuilder *self, PyObject *arg);
            static PyObject *t_LeastSquaresBuilder_checkerPair(t_LeastSquaresBuilder *self, PyObject *arg);
            static PyObject *t_LeastSquaresBuilder_lazyEvaluation(t_LeastSquaresBuilder *self, PyObject *arg);
            static PyObject *t_LeastSquaresBuilder_maxEvaluations(t_LeastSquaresBuilder *self, PyObject *arg);
            static PyObject *t_LeastSquaresBuilder_maxIterations(t_LeastSquaresBuilder *self, PyObject *arg);
            static PyObject *t_LeastSquaresBuilder_model(t_LeastSquaresBuilder *self, PyObject *args);
            static PyObject *t_LeastSquaresBuilder_parameterValidator(t_LeastSquaresBuilder *self, PyObject *arg);
            static PyObject *t_LeastSquaresBuilder_start(t_LeastSquaresBuilder *self, PyObject *args);
            static PyObject *t_LeastSquaresBuilder_target(t_LeastSquaresBuilder *self, PyObject *args);
            static PyObject *t_LeastSquaresBuilder_weight(t_LeastSquaresBuilder *self, PyObject *arg);

            static PyMethodDef t_LeastSquaresBuilder__methods_[] = {
              DECLARE_METHOD(t_LeastSquaresBuilder, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresBuilder, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresBuilder, build, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresBuilder, checker, METH_O),
              DECLARE_METHOD(t_LeastSquaresBuilder, checkerPair, METH_O),
              DECLARE_METHOD(t_LeastSquaresBuilder, lazyEvaluation, METH_O),
              DECLARE_METHOD(t_LeastSquaresBuilder, maxEvaluations, METH_O),
              DECLARE_METHOD(t_LeastSquaresBuilder, maxIterations, METH_O),
              DECLARE_METHOD(t_LeastSquaresBuilder, model, METH_VARARGS),
              DECLARE_METHOD(t_LeastSquaresBuilder, parameterValidator, METH_O),
              DECLARE_METHOD(t_LeastSquaresBuilder, start, METH_VARARGS),
              DECLARE_METHOD(t_LeastSquaresBuilder, target, METH_VARARGS),
              DECLARE_METHOD(t_LeastSquaresBuilder, weight, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LeastSquaresBuilder)[] = {
              { Py_tp_methods, t_LeastSquaresBuilder__methods_ },
              { Py_tp_init, (void *) t_LeastSquaresBuilder_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LeastSquaresBuilder)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LeastSquaresBuilder, t_LeastSquaresBuilder, LeastSquaresBuilder);

            void t_LeastSquaresBuilder::install(PyObject *module)
            {
              installType(&PY_TYPE(LeastSquaresBuilder), &PY_TYPE_DEF(LeastSquaresBuilder), module, "LeastSquaresBuilder", 0);
            }

            void t_LeastSquaresBuilder::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresBuilder), "class_", make_descriptor(LeastSquaresBuilder::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresBuilder), "wrapfn_", make_descriptor(t_LeastSquaresBuilder::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresBuilder), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LeastSquaresBuilder_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LeastSquaresBuilder::initializeClass, 1)))
                return NULL;
              return t_LeastSquaresBuilder::wrap_Object(LeastSquaresBuilder(((t_LeastSquaresBuilder *) arg)->object.this$));
            }
            static PyObject *t_LeastSquaresBuilder_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LeastSquaresBuilder::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_LeastSquaresBuilder_init_(t_LeastSquaresBuilder *self, PyObject *args, PyObject *kwds)
            {
              LeastSquaresBuilder object((jobject) NULL);

              INT_CALL(object = LeastSquaresBuilder());
              self->object = object;

              return 0;
            }

            static PyObject *t_LeastSquaresBuilder_build(t_LeastSquaresBuilder *self)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);
              OBJ_CALL(result = self->object.build());
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
            }

            static PyObject *t_LeastSquaresBuilder_checker(t_LeastSquaresBuilder *self, PyObject *arg)
            {
              ::org::hipparchus::optim::ConvergenceChecker a0((jobject) NULL);
              PyTypeObject **p0;
              LeastSquaresBuilder result((jobject) NULL);

              if (!parseArg(arg, "K", ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &p0, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
              {
                OBJ_CALL(result = self->object.checker(a0));
                return t_LeastSquaresBuilder::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "checker", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresBuilder_checkerPair(t_LeastSquaresBuilder *self, PyObject *arg)
            {
              ::org::hipparchus::optim::ConvergenceChecker a0((jobject) NULL);
              PyTypeObject **p0;
              LeastSquaresBuilder result((jobject) NULL);

              if (!parseArg(arg, "K", ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &p0, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
              {
                OBJ_CALL(result = self->object.checkerPair(a0));
                return t_LeastSquaresBuilder::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "checkerPair", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresBuilder_lazyEvaluation(t_LeastSquaresBuilder *self, PyObject *arg)
            {
              jboolean a0;
              LeastSquaresBuilder result((jobject) NULL);

              if (!parseArg(arg, "Z", &a0))
              {
                OBJ_CALL(result = self->object.lazyEvaluation(a0));
                return t_LeastSquaresBuilder::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "lazyEvaluation", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresBuilder_maxEvaluations(t_LeastSquaresBuilder *self, PyObject *arg)
            {
              jint a0;
              LeastSquaresBuilder result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.maxEvaluations(a0));
                return t_LeastSquaresBuilder::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "maxEvaluations", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresBuilder_maxIterations(t_LeastSquaresBuilder *self, PyObject *arg)
            {
              jint a0;
              LeastSquaresBuilder result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.maxIterations(a0));
                return t_LeastSquaresBuilder::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "maxIterations", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresBuilder_model(t_LeastSquaresBuilder *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction a0((jobject) NULL);
                  LeastSquaresBuilder result((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction::initializeClass, &a0))
                  {
                    OBJ_CALL(result = self->object.model(a0));
                    return t_LeastSquaresBuilder::wrap_Object(result);
                  }
                }
                break;
               case 2:
                {
                  ::org::hipparchus::analysis::MultivariateVectorFunction a0((jobject) NULL);
                  ::org::hipparchus::analysis::MultivariateMatrixFunction a1((jobject) NULL);
                  LeastSquaresBuilder result((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::hipparchus::analysis::MultivariateVectorFunction::initializeClass, ::org::hipparchus::analysis::MultivariateMatrixFunction::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(result = self->object.model(a0, a1));
                    return t_LeastSquaresBuilder::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "model", args);
              return NULL;
            }

            static PyObject *t_LeastSquaresBuilder_parameterValidator(t_LeastSquaresBuilder *self, PyObject *arg)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::ParameterValidator a0((jobject) NULL);
              LeastSquaresBuilder result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::ParameterValidator::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.parameterValidator(a0));
                return t_LeastSquaresBuilder::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "parameterValidator", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresBuilder_start(t_LeastSquaresBuilder *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  JArray< jdouble > a0((jobject) NULL);
                  LeastSquaresBuilder result((jobject) NULL);

                  if (!parseArgs(args, "[D", &a0))
                  {
                    OBJ_CALL(result = self->object.start(a0));
                    return t_LeastSquaresBuilder::wrap_Object(result);
                  }
                }
                {
                  ::org::hipparchus::linear::RealVector a0((jobject) NULL);
                  LeastSquaresBuilder result((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
                  {
                    OBJ_CALL(result = self->object.start(a0));
                    return t_LeastSquaresBuilder::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "start", args);
              return NULL;
            }

            static PyObject *t_LeastSquaresBuilder_target(t_LeastSquaresBuilder *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  JArray< jdouble > a0((jobject) NULL);
                  LeastSquaresBuilder result((jobject) NULL);

                  if (!parseArgs(args, "[D", &a0))
                  {
                    OBJ_CALL(result = self->object.target(a0));
                    return t_LeastSquaresBuilder::wrap_Object(result);
                  }
                }
                {
                  ::org::hipparchus::linear::RealVector a0((jobject) NULL);
                  LeastSquaresBuilder result((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
                  {
                    OBJ_CALL(result = self->object.target(a0));
                    return t_LeastSquaresBuilder::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "target", args);
              return NULL;
            }

            static PyObject *t_LeastSquaresBuilder_weight(t_LeastSquaresBuilder *self, PyObject *arg)
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              LeastSquaresBuilder result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.weight(a0));
                return t_LeastSquaresBuilder::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "weight", arg);
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
#include "org/orekit/propagation/sampling/OrekitStepHandler.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *OrekitStepHandler::class$ = NULL;
        jmethodID *OrekitStepHandler::mids$ = NULL;
        bool OrekitStepHandler::live$ = false;

        jclass OrekitStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/OrekitStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finish_8655761ebf04b503] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_handleStep_729a66b1e94503de] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/sampling/OrekitStepInterpolator;)V");
            mids$[mid_init_0472264ad6f40bc2] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void OrekitStepHandler::finish(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_8655761ebf04b503], a0.this$);
        }

        void OrekitStepHandler::handleStep(const ::org::orekit::propagation::sampling::OrekitStepInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_729a66b1e94503de], a0.this$);
        }

        void OrekitStepHandler::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
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
      namespace sampling {
        static PyObject *t_OrekitStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitStepHandler_finish(t_OrekitStepHandler *self, PyObject *arg);
        static PyObject *t_OrekitStepHandler_handleStep(t_OrekitStepHandler *self, PyObject *arg);
        static PyObject *t_OrekitStepHandler_init(t_OrekitStepHandler *self, PyObject *args);

        static PyMethodDef t_OrekitStepHandler__methods_[] = {
          DECLARE_METHOD(t_OrekitStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitStepHandler, finish, METH_O),
          DECLARE_METHOD(t_OrekitStepHandler, handleStep, METH_O),
          DECLARE_METHOD(t_OrekitStepHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OrekitStepHandler)[] = {
          { Py_tp_methods, t_OrekitStepHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OrekitStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OrekitStepHandler, t_OrekitStepHandler, OrekitStepHandler);

        void t_OrekitStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(OrekitStepHandler), &PY_TYPE_DEF(OrekitStepHandler), module, "OrekitStepHandler", 0);
        }

        void t_OrekitStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitStepHandler), "class_", make_descriptor(OrekitStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitStepHandler), "wrapfn_", make_descriptor(t_OrekitStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitStepHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OrekitStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OrekitStepHandler::initializeClass, 1)))
            return NULL;
          return t_OrekitStepHandler::wrap_Object(OrekitStepHandler(((t_OrekitStepHandler *) arg)->object.this$));
        }
        static PyObject *t_OrekitStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OrekitStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_OrekitStepHandler_finish(t_OrekitStepHandler *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_OrekitStepHandler_handleStep(t_OrekitStepHandler *self, PyObject *arg)
        {
          ::org::orekit::propagation::sampling::OrekitStepInterpolator a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::sampling::OrekitStepInterpolator::initializeClass, &a0))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_OrekitStepHandler_init(t_OrekitStepHandler *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
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
#include "org/hipparchus/util/Combinations.h"
#include "java/util/Iterator.h"
#include "java/util/Comparator.h"
#include "java/lang/Iterable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *Combinations::class$ = NULL;
      jmethodID *Combinations::mids$ = NULL;
      bool Combinations::live$ = false;

      jclass Combinations::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/Combinations");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a84c9a223722150c] = env->getMethodID(cls, "<init>", "(II)V");
          mids$[mid_comparator_b0b551d4a54c7150] = env->getMethodID(cls, "comparator", "()Ljava/util/Comparator;");
          mids$[mid_getK_412668abc8d889e9] = env->getMethodID(cls, "getK", "()I");
          mids$[mid_getN_412668abc8d889e9] = env->getMethodID(cls, "getN", "()I");
          mids$[mid_iterator_834a3801c426326d] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Combinations::Combinations(jint a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a84c9a223722150c, a0, a1)) {}

      ::java::util::Comparator Combinations::comparator() const
      {
        return ::java::util::Comparator(env->callObjectMethod(this$, mids$[mid_comparator_b0b551d4a54c7150]));
      }

      jint Combinations::getK() const
      {
        return env->callIntMethod(this$, mids$[mid_getK_412668abc8d889e9]);
      }

      jint Combinations::getN() const
      {
        return env->callIntMethod(this$, mids$[mid_getN_412668abc8d889e9]);
      }

      ::java::util::Iterator Combinations::iterator() const
      {
        return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_834a3801c426326d]));
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
      static PyObject *t_Combinations_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Combinations_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Combinations_init_(t_Combinations *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Combinations_comparator(t_Combinations *self);
      static PyObject *t_Combinations_getK(t_Combinations *self);
      static PyObject *t_Combinations_getN(t_Combinations *self);
      static PyObject *t_Combinations_iterator(t_Combinations *self);
      static PyObject *t_Combinations_get__k(t_Combinations *self, void *data);
      static PyObject *t_Combinations_get__n(t_Combinations *self, void *data);
      static PyGetSetDef t_Combinations__fields_[] = {
        DECLARE_GET_FIELD(t_Combinations, k),
        DECLARE_GET_FIELD(t_Combinations, n),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Combinations__methods_[] = {
        DECLARE_METHOD(t_Combinations, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Combinations, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Combinations, comparator, METH_NOARGS),
        DECLARE_METHOD(t_Combinations, getK, METH_NOARGS),
        DECLARE_METHOD(t_Combinations, getN, METH_NOARGS),
        DECLARE_METHOD(t_Combinations, iterator, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Combinations)[] = {
        { Py_tp_methods, t_Combinations__methods_ },
        { Py_tp_init, (void *) t_Combinations_init_ },
        { Py_tp_getset, t_Combinations__fields_ },
        { Py_tp_iter, (void *) ((PyObject *(*)(t_Combinations *)) get_iterator< t_Combinations >) },
        { Py_tp_iternext, (void *) 0 },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Combinations)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Combinations, t_Combinations, Combinations);

      void t_Combinations::install(PyObject *module)
      {
        installType(&PY_TYPE(Combinations), &PY_TYPE_DEF(Combinations), module, "Combinations", 0);
      }

      void t_Combinations::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Combinations), "class_", make_descriptor(Combinations::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Combinations), "wrapfn_", make_descriptor(t_Combinations::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Combinations), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Combinations_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Combinations::initializeClass, 1)))
          return NULL;
        return t_Combinations::wrap_Object(Combinations(((t_Combinations *) arg)->object.this$));
      }
      static PyObject *t_Combinations_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Combinations::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Combinations_init_(t_Combinations *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        jint a1;
        Combinations object((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          INT_CALL(object = Combinations(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_Combinations_comparator(t_Combinations *self)
      {
        ::java::util::Comparator result((jobject) NULL);
        OBJ_CALL(result = self->object.comparator());
        return ::java::util::t_Comparator::wrap_Object(result, ::java::lang::PY_TYPE(Object));
      }

      static PyObject *t_Combinations_getK(t_Combinations *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getK());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Combinations_getN(t_Combinations *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getN());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Combinations_iterator(t_Combinations *self)
      {
        ::java::util::Iterator result((jobject) NULL);
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, ::java::lang::PY_TYPE(Object));
      }

      static PyObject *t_Combinations_get__k(t_Combinations *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getK());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Combinations_get__n(t_Combinations *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getN());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/Geoid.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/models/earth/ReferenceEllipsoid.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/models/earth/EarthShape.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldLine.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *Geoid::class$ = NULL;
        jmethodID *Geoid::mids$ = NULL;
        bool Geoid::live$ = false;

        jclass Geoid::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/Geoid");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_213180f7826041a3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;Lorg/orekit/models/earth/ReferenceEllipsoid;)V");
            mids$[mid_getBodyFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getBodyFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getEllipsoid_576f0b44e8384336] = env->getMethodID(cls, "getEllipsoid", "()Lorg/orekit/models/earth/ReferenceEllipsoid;");
            mids$[mid_getIntersectionPoint_6391bd6fdaac29a3] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/Line;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");
            mids$[mid_getIntersectionPoint_884873e1d3d77c4e] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");
            mids$[mid_getUndulation_b013e8eac006d836] = env->getMethodID(cls, "getUndulation", "(DDLorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_projectToGround_3d4e9a6447a03aa9] = env->getMethodID(cls, "projectToGround", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
            mids$[mid_projectToGround_4c5eeaf1ff845fca] = env->getMethodID(cls, "projectToGround", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transform_8b70a50ea3e1f728] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/FieldGeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_transform_8b264141c1de262c] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transform_8e052cb77f98e021] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");
            mids$[mid_transform_4dfad8dc678d42b2] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Geoid::Geoid(const ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider & a0, const ::org::orekit::models::earth::ReferenceEllipsoid & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_213180f7826041a3, a0.this$, a1.this$)) {}

        ::org::orekit::frames::Frame Geoid::getBodyFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getBodyFrame_6c9bc0a928c56d4e]));
        }

        ::org::orekit::models::earth::ReferenceEllipsoid Geoid::getEllipsoid() const
        {
          return ::org::orekit::models::earth::ReferenceEllipsoid(env->callObjectMethod(this$, mids$[mid_getEllipsoid_576f0b44e8384336]));
        }

        ::org::orekit::bodies::GeodeticPoint Geoid::getIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::Line & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::time::AbsoluteDate & a3) const
        {
          return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getIntersectionPoint_6391bd6fdaac29a3], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::bodies::FieldGeodeticPoint Geoid::getIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::FieldLine & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
        {
          return ::org::orekit::bodies::FieldGeodeticPoint(env->callObjectMethod(this$, mids$[mid_getIntersectionPoint_884873e1d3d77c4e], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        jdouble Geoid::getUndulation(jdouble a0, jdouble a1, const ::org::orekit::time::AbsoluteDate & a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getUndulation_b013e8eac006d836], a0, a1, a2.this$);
        }

        ::org::orekit::utils::TimeStampedPVCoordinates Geoid::projectToGround(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::orekit::frames::Frame & a1) const
        {
          return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_projectToGround_3d4e9a6447a03aa9], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D Geoid::projectToGround(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_projectToGround_4c5eeaf1ff845fca], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D Geoid::transform(const ::org::orekit::bodies::FieldGeodeticPoint & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transform_8b70a50ea3e1f728], a0.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D Geoid::transform(const ::org::orekit::bodies::GeodeticPoint & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transform_8b264141c1de262c], a0.this$));
        }

        ::org::orekit::bodies::FieldGeodeticPoint Geoid::transform(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
        {
          return ::org::orekit::bodies::FieldGeodeticPoint(env->callObjectMethod(this$, mids$[mid_transform_8e052cb77f98e021], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::bodies::GeodeticPoint Geoid::transform(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
        {
          return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_transform_4dfad8dc678d42b2], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_Geoid_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Geoid_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Geoid_init_(t_Geoid *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Geoid_getBodyFrame(t_Geoid *self);
        static PyObject *t_Geoid_getEllipsoid(t_Geoid *self);
        static PyObject *t_Geoid_getIntersectionPoint(t_Geoid *self, PyObject *args);
        static PyObject *t_Geoid_getUndulation(t_Geoid *self, PyObject *args);
        static PyObject *t_Geoid_projectToGround(t_Geoid *self, PyObject *args);
        static PyObject *t_Geoid_transform(t_Geoid *self, PyObject *args);
        static PyObject *t_Geoid_get__bodyFrame(t_Geoid *self, void *data);
        static PyObject *t_Geoid_get__ellipsoid(t_Geoid *self, void *data);
        static PyGetSetDef t_Geoid__fields_[] = {
          DECLARE_GET_FIELD(t_Geoid, bodyFrame),
          DECLARE_GET_FIELD(t_Geoid, ellipsoid),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Geoid__methods_[] = {
          DECLARE_METHOD(t_Geoid, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Geoid, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Geoid, getBodyFrame, METH_NOARGS),
          DECLARE_METHOD(t_Geoid, getEllipsoid, METH_NOARGS),
          DECLARE_METHOD(t_Geoid, getIntersectionPoint, METH_VARARGS),
          DECLARE_METHOD(t_Geoid, getUndulation, METH_VARARGS),
          DECLARE_METHOD(t_Geoid, projectToGround, METH_VARARGS),
          DECLARE_METHOD(t_Geoid, transform, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Geoid)[] = {
          { Py_tp_methods, t_Geoid__methods_ },
          { Py_tp_init, (void *) t_Geoid_init_ },
          { Py_tp_getset, t_Geoid__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Geoid)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Geoid, t_Geoid, Geoid);

        void t_Geoid::install(PyObject *module)
        {
          installType(&PY_TYPE(Geoid), &PY_TYPE_DEF(Geoid), module, "Geoid", 0);
        }

        void t_Geoid::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Geoid), "class_", make_descriptor(Geoid::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Geoid), "wrapfn_", make_descriptor(t_Geoid::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Geoid), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Geoid_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Geoid::initializeClass, 1)))
            return NULL;
          return t_Geoid::wrap_Object(Geoid(((t_Geoid *) arg)->object.this$));
        }
        static PyObject *t_Geoid_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Geoid::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Geoid_init_(t_Geoid *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider a0((jobject) NULL);
          ::org::orekit::models::earth::ReferenceEllipsoid a1((jobject) NULL);
          Geoid object((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::models::earth::ReferenceEllipsoid::initializeClass, &a0, &a1))
          {
            INT_CALL(object = Geoid(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_Geoid_getBodyFrame(t_Geoid *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getBodyFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_Geoid_getEllipsoid(t_Geoid *self)
        {
          ::org::orekit::models::earth::ReferenceEllipsoid result((jobject) NULL);
          OBJ_CALL(result = self->object.getEllipsoid());
          return ::org::orekit::models::earth::t_ReferenceEllipsoid::wrap_Object(result);
        }

        static PyObject *t_Geoid_getIntersectionPoint(t_Geoid *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldLine a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::frames::Frame a2((jobject) NULL);
              ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::bodies::FieldGeodeticPoint result((jobject) NULL);

              if (!parseArgs(args, "KKkK", ::org::hipparchus::geometry::euclidean::threed::FieldLine::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldLine::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = self->object.getIntersectionPoint(a0, a1, a2, a3));
                return ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::geometry::euclidean::threed::Line a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::orekit::frames::Frame a2((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
              ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

              if (!parseArgs(args, "kkkk", ::org::hipparchus::geometry::euclidean::threed::Line::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.getIntersectionPoint(a0, a1, a2, a3));
                return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getIntersectionPoint", args);
          return NULL;
        }

        static PyObject *t_Geoid_getUndulation(t_Geoid *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "DDk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.getUndulation(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getUndulation", args);
          return NULL;
        }

        static PyObject *t_Geoid_projectToGround(t_Geoid *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
              ::org::orekit::frames::Frame a1((jobject) NULL);
              ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.projectToGround(a0, a1));
                return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              ::org::orekit::frames::Frame a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.projectToGround(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "projectToGround", args);
          return NULL;
        }

        static PyObject *t_Geoid_transform(t_Geoid *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::bodies::FieldGeodeticPoint a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, &a0, &p0, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_))
              {
                OBJ_CALL(result = self->object.transform(a0));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.transform(a0));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              ::org::orekit::frames::Frame a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

              if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.transform(a0, a1, a2));
                return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::frames::Frame a1((jobject) NULL);
              ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::bodies::FieldGeodeticPoint result((jobject) NULL);

              if (!parseArgs(args, "KkK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = self->object.transform(a0, a1, a2));
                return ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "transform", args);
          return NULL;
        }

        static PyObject *t_Geoid_get__bodyFrame(t_Geoid *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getBodyFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_Geoid_get__ellipsoid(t_Geoid *self, void *data)
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
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/io/Serializable.h"
#include "org/orekit/utils/DoubleArrayDictionary.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/AbsolutePVCoordinates.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/frames/StaticTransform.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/errors/OrekitIllegalStateException.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/orekit/time/TimeShiftable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/frames/Frame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *SpacecraftState::class$ = NULL;
      jmethodID *SpacecraftState::mids$ = NULL;
      bool SpacecraftState::live$ = false;
      jdouble SpacecraftState::DEFAULT_MASS = (jdouble) 0;

      jclass SpacecraftState::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/SpacecraftState");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_14fff82420f160d8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/AbsolutePVCoordinates;)V");
          mids$[mid_init$_a9af82a1647a21f3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;)V");
          mids$[mid_init$_838f8e551249504d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/AbsolutePVCoordinates;Lorg/orekit/attitudes/Attitude;)V");
          mids$[mid_init$_c061035250d86d0e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/AbsolutePVCoordinates;Lorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_init$_4a3828f8b12f5ac1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/AbsolutePVCoordinates;D)V");
          mids$[mid_init$_83ba56ce27df7cc4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/Attitude;)V");
          mids$[mid_init$_ea747fd2a7db5102] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_init$_6bcd4ef191c1dc21] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;D)V");
          mids$[mid_init$_ed218c25ccdfab24] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/AbsolutePVCoordinates;Lorg/orekit/attitudes/Attitude;Lorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_init$_3d61c2b6aee7f1ab] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/AbsolutePVCoordinates;DLorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_init$_83b2906a83706467] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/AbsolutePVCoordinates;Lorg/orekit/attitudes/Attitude;D)V");
          mids$[mid_init$_35cdcad05270c608] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/Attitude;Lorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_init$_96e25e8716343a85] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/Attitude;D)V");
          mids$[mid_init$_17adeb98a99f0ba0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;DLorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_init$_8e262296ef2c9e6d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/AbsolutePVCoordinates;Lorg/orekit/attitudes/Attitude;DLorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_init$_aa9cca252a22a85c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/Attitude;DLorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_init$_4cfaa91553b8eb79] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/AbsolutePVCoordinates;Lorg/orekit/attitudes/Attitude;DLorg/orekit/utils/DoubleArrayDictionary;Lorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_init$_8a0414297b70ad3c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/Attitude;DLorg/orekit/utils/DoubleArrayDictionary;Lorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_addAdditionalState_d1e1767ed9a4d2a4] = env->getMethodID(cls, "addAdditionalState", "(Ljava/lang/String;[D)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_addAdditionalStateDerivative_d1e1767ed9a4d2a4] = env->getMethodID(cls, "addAdditionalStateDerivative", "(Ljava/lang/String;[D)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_ensureCompatibleAdditionalStates_8655761ebf04b503] = env->getMethodID(cls, "ensureCompatibleAdditionalStates", "(Lorg/orekit/propagation/SpacecraftState;)V");
          mids$[mid_getA_557b8123390d8d0c] = env->getMethodID(cls, "getA", "()D");
          mids$[mid_getAbsPVA_424b08369c4f1f64] = env->getMethodID(cls, "getAbsPVA", "()Lorg/orekit/utils/AbsolutePVCoordinates;");
          mids$[mid_getAdditionalState_008e0cff49b0ec83] = env->getMethodID(cls, "getAdditionalState", "(Ljava/lang/String;)[D");
          mids$[mid_getAdditionalStateDerivative_008e0cff49b0ec83] = env->getMethodID(cls, "getAdditionalStateDerivative", "(Ljava/lang/String;)[D");
          mids$[mid_getAdditionalStatesDerivatives_408230a61ade575e] = env->getMethodID(cls, "getAdditionalStatesDerivatives", "()Lorg/orekit/utils/DoubleArrayDictionary;");
          mids$[mid_getAdditionalStatesValues_408230a61ade575e] = env->getMethodID(cls, "getAdditionalStatesValues", "()Lorg/orekit/utils/DoubleArrayDictionary;");
          mids$[mid_getAttitude_ed1eef73b5133690] = env->getMethodID(cls, "getAttitude", "()Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getE_557b8123390d8d0c] = env->getMethodID(cls, "getE", "()D");
          mids$[mid_getEquinoctialEx_557b8123390d8d0c] = env->getMethodID(cls, "getEquinoctialEx", "()D");
          mids$[mid_getEquinoctialEy_557b8123390d8d0c] = env->getMethodID(cls, "getEquinoctialEy", "()D");
          mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getHx_557b8123390d8d0c] = env->getMethodID(cls, "getHx", "()D");
          mids$[mid_getHy_557b8123390d8d0c] = env->getMethodID(cls, "getHy", "()D");
          mids$[mid_getI_557b8123390d8d0c] = env->getMethodID(cls, "getI", "()D");
          mids$[mid_getKeplerianMeanMotion_557b8123390d8d0c] = env->getMethodID(cls, "getKeplerianMeanMotion", "()D");
          mids$[mid_getKeplerianPeriod_557b8123390d8d0c] = env->getMethodID(cls, "getKeplerianPeriod", "()D");
          mids$[mid_getLE_557b8123390d8d0c] = env->getMethodID(cls, "getLE", "()D");
          mids$[mid_getLM_557b8123390d8d0c] = env->getMethodID(cls, "getLM", "()D");
          mids$[mid_getLv_557b8123390d8d0c] = env->getMethodID(cls, "getLv", "()D");
          mids$[mid_getMass_557b8123390d8d0c] = env->getMethodID(cls, "getMass", "()D");
          mids$[mid_getMu_557b8123390d8d0c] = env->getMethodID(cls, "getMu", "()D");
          mids$[mid_getOrbit_71f9c54b5f482a59] = env->getMethodID(cls, "getOrbit", "()Lorg/orekit/orbits/Orbit;");
          mids$[mid_getPVCoordinates_daf15abc21907508] = env->getMethodID(cls, "getPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPVCoordinates_8cf7b972bef1e4d8] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPosition_f88961cca75a2c0a] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getPosition_8386213426308de8] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_hasAdditionalState_fd2162b8a05a22fe] = env->getMethodID(cls, "hasAdditionalState", "(Ljava/lang/String;)Z");
          mids$[mid_hasAdditionalStateDerivative_fd2162b8a05a22fe] = env->getMethodID(cls, "hasAdditionalStateDerivative", "(Ljava/lang/String;)Z");
          mids$[mid_isOrbitDefined_89b302893bdbe1f1] = env->getMethodID(cls, "isOrbitDefined", "()Z");
          mids$[mid_shiftedBy_ef2dd80fa96d2eea] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_toStaticTransform_f798b00aed778de3] = env->getMethodID(cls, "toStaticTransform", "()Lorg/orekit/frames/StaticTransform;");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toTransform_1168c6fb2fb8754f] = env->getMethodID(cls, "toTransform", "()Lorg/orekit/frames/Transform;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_MASS = env->getStaticDoubleField(cls, "DEFAULT_MASS");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SpacecraftState::SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_14fff82420f160d8, a0.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::orbits::Orbit & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a9af82a1647a21f3, a0.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates & a0, const ::org::orekit::attitudes::Attitude & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_838f8e551249504d, a0.this$, a1.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates & a0, const ::org::orekit::utils::DoubleArrayDictionary & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c061035250d86d0e, a0.this$, a1.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4a3828f8b12f5ac1, a0.this$, a1)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::Attitude & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_83ba56ce27df7cc4, a0.this$, a1.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::utils::DoubleArrayDictionary & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ea747fd2a7db5102, a0.this$, a1.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::orbits::Orbit & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6bcd4ef191c1dc21, a0.this$, a1)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates & a0, const ::org::orekit::attitudes::Attitude & a1, const ::org::orekit::utils::DoubleArrayDictionary & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ed218c25ccdfab24, a0.this$, a1.this$, a2.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates & a0, jdouble a1, const ::org::orekit::utils::DoubleArrayDictionary & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3d61c2b6aee7f1ab, a0.this$, a1, a2.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates & a0, const ::org::orekit::attitudes::Attitude & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_83b2906a83706467, a0.this$, a1.this$, a2)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::Attitude & a1, const ::org::orekit::utils::DoubleArrayDictionary & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_35cdcad05270c608, a0.this$, a1.this$, a2.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::Attitude & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_96e25e8716343a85, a0.this$, a1.this$, a2)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::orbits::Orbit & a0, jdouble a1, const ::org::orekit::utils::DoubleArrayDictionary & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_17adeb98a99f0ba0, a0.this$, a1, a2.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates & a0, const ::org::orekit::attitudes::Attitude & a1, jdouble a2, const ::org::orekit::utils::DoubleArrayDictionary & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8e262296ef2c9e6d, a0.this$, a1.this$, a2, a3.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::Attitude & a1, jdouble a2, const ::org::orekit::utils::DoubleArrayDictionary & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_aa9cca252a22a85c, a0.this$, a1.this$, a2, a3.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates & a0, const ::org::orekit::attitudes::Attitude & a1, jdouble a2, const ::org::orekit::utils::DoubleArrayDictionary & a3, const ::org::orekit::utils::DoubleArrayDictionary & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4cfaa91553b8eb79, a0.this$, a1.this$, a2, a3.this$, a4.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::Attitude & a1, jdouble a2, const ::org::orekit::utils::DoubleArrayDictionary & a3, const ::org::orekit::utils::DoubleArrayDictionary & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8a0414297b70ad3c, a0.this$, a1.this$, a2, a3.this$, a4.this$)) {}

      SpacecraftState SpacecraftState::addAdditionalState(const ::java::lang::String & a0, const JArray< jdouble > & a1) const
      {
        return SpacecraftState(env->callObjectMethod(this$, mids$[mid_addAdditionalState_d1e1767ed9a4d2a4], a0.this$, a1.this$));
      }

      SpacecraftState SpacecraftState::addAdditionalStateDerivative(const ::java::lang::String & a0, const JArray< jdouble > & a1) const
      {
        return SpacecraftState(env->callObjectMethod(this$, mids$[mid_addAdditionalStateDerivative_d1e1767ed9a4d2a4], a0.this$, a1.this$));
      }

      void SpacecraftState::ensureCompatibleAdditionalStates(const SpacecraftState & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_ensureCompatibleAdditionalStates_8655761ebf04b503], a0.this$);
      }

      jdouble SpacecraftState::getA() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getA_557b8123390d8d0c]);
      }

      ::org::orekit::utils::AbsolutePVCoordinates SpacecraftState::getAbsPVA() const
      {
        return ::org::orekit::utils::AbsolutePVCoordinates(env->callObjectMethod(this$, mids$[mid_getAbsPVA_424b08369c4f1f64]));
      }

      JArray< jdouble > SpacecraftState::getAdditionalState(const ::java::lang::String & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_008e0cff49b0ec83], a0.this$));
      }

      JArray< jdouble > SpacecraftState::getAdditionalStateDerivative(const ::java::lang::String & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalStateDerivative_008e0cff49b0ec83], a0.this$));
      }

      ::org::orekit::utils::DoubleArrayDictionary SpacecraftState::getAdditionalStatesDerivatives() const
      {
        return ::org::orekit::utils::DoubleArrayDictionary(env->callObjectMethod(this$, mids$[mid_getAdditionalStatesDerivatives_408230a61ade575e]));
      }

      ::org::orekit::utils::DoubleArrayDictionary SpacecraftState::getAdditionalStatesValues() const
      {
        return ::org::orekit::utils::DoubleArrayDictionary(env->callObjectMethod(this$, mids$[mid_getAdditionalStatesValues_408230a61ade575e]));
      }

      ::org::orekit::attitudes::Attitude SpacecraftState::getAttitude() const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_ed1eef73b5133690]));
      }

      ::org::orekit::time::AbsoluteDate SpacecraftState::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
      }

      jdouble SpacecraftState::getE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getE_557b8123390d8d0c]);
      }

      jdouble SpacecraftState::getEquinoctialEx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEx_557b8123390d8d0c]);
      }

      jdouble SpacecraftState::getEquinoctialEy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEy_557b8123390d8d0c]);
      }

      ::org::orekit::frames::Frame SpacecraftState::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
      }

      jdouble SpacecraftState::getHx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHx_557b8123390d8d0c]);
      }

      jdouble SpacecraftState::getHy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHy_557b8123390d8d0c]);
      }

      jdouble SpacecraftState::getI() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getI_557b8123390d8d0c]);
      }

      jdouble SpacecraftState::getKeplerianMeanMotion() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getKeplerianMeanMotion_557b8123390d8d0c]);
      }

      jdouble SpacecraftState::getKeplerianPeriod() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getKeplerianPeriod_557b8123390d8d0c]);
      }

      jdouble SpacecraftState::getLE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLE_557b8123390d8d0c]);
      }

      jdouble SpacecraftState::getLM() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLM_557b8123390d8d0c]);
      }

      jdouble SpacecraftState::getLv() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLv_557b8123390d8d0c]);
      }

      jdouble SpacecraftState::getMass() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMass_557b8123390d8d0c]);
      }

      jdouble SpacecraftState::getMu() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMu_557b8123390d8d0c]);
      }

      ::org::orekit::orbits::Orbit SpacecraftState::getOrbit() const
      {
        return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_getOrbit_71f9c54b5f482a59]));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates SpacecraftState::getPVCoordinates() const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_daf15abc21907508]));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates SpacecraftState::getPVCoordinates(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_8cf7b972bef1e4d8], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D SpacecraftState::getPosition() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_f88961cca75a2c0a]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D SpacecraftState::getPosition(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_8386213426308de8], a0.this$));
      }

      jboolean SpacecraftState::hasAdditionalState(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasAdditionalState_fd2162b8a05a22fe], a0.this$);
      }

      jboolean SpacecraftState::hasAdditionalStateDerivative(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasAdditionalStateDerivative_fd2162b8a05a22fe], a0.this$);
      }

      jboolean SpacecraftState::isOrbitDefined() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isOrbitDefined_89b302893bdbe1f1]);
      }

      SpacecraftState SpacecraftState::shiftedBy(jdouble a0) const
      {
        return SpacecraftState(env->callObjectMethod(this$, mids$[mid_shiftedBy_ef2dd80fa96d2eea], a0));
      }

      ::org::orekit::frames::StaticTransform SpacecraftState::toStaticTransform() const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_toStaticTransform_f798b00aed778de3]));
      }

      ::java::lang::String SpacecraftState::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
      }

      ::org::orekit::frames::Transform SpacecraftState::toTransform() const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_toTransform_1168c6fb2fb8754f]));
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
      static PyObject *t_SpacecraftState_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SpacecraftState_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SpacecraftState_init_(t_SpacecraftState *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SpacecraftState_addAdditionalState(t_SpacecraftState *self, PyObject *args);
      static PyObject *t_SpacecraftState_addAdditionalStateDerivative(t_SpacecraftState *self, PyObject *args);
      static PyObject *t_SpacecraftState_ensureCompatibleAdditionalStates(t_SpacecraftState *self, PyObject *arg);
      static PyObject *t_SpacecraftState_getA(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getAbsPVA(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getAdditionalState(t_SpacecraftState *self, PyObject *arg);
      static PyObject *t_SpacecraftState_getAdditionalStateDerivative(t_SpacecraftState *self, PyObject *arg);
      static PyObject *t_SpacecraftState_getAdditionalStatesDerivatives(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getAdditionalStatesValues(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getAttitude(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getDate(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getE(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getEquinoctialEx(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getEquinoctialEy(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getFrame(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getHx(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getHy(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getI(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getKeplerianMeanMotion(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getKeplerianPeriod(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getLE(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getLM(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getLv(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getMass(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getMu(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getOrbit(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_getPVCoordinates(t_SpacecraftState *self, PyObject *args);
      static PyObject *t_SpacecraftState_getPosition(t_SpacecraftState *self, PyObject *args);
      static PyObject *t_SpacecraftState_hasAdditionalState(t_SpacecraftState *self, PyObject *arg);
      static PyObject *t_SpacecraftState_hasAdditionalStateDerivative(t_SpacecraftState *self, PyObject *arg);
      static PyObject *t_SpacecraftState_isOrbitDefined(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_shiftedBy(t_SpacecraftState *self, PyObject *arg);
      static PyObject *t_SpacecraftState_toStaticTransform(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_toString(t_SpacecraftState *self, PyObject *args);
      static PyObject *t_SpacecraftState_toTransform(t_SpacecraftState *self);
      static PyObject *t_SpacecraftState_get__a(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__absPVA(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__additionalStatesDerivatives(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__additionalStatesValues(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__attitude(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__date(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__e(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__equinoctialEx(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__equinoctialEy(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__frame(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__hx(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__hy(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__i(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__keplerianMeanMotion(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__keplerianPeriod(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__lE(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__lM(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__lv(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__mass(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__mu(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__orbit(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__orbitDefined(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__pVCoordinates(t_SpacecraftState *self, void *data);
      static PyObject *t_SpacecraftState_get__position(t_SpacecraftState *self, void *data);
      static PyGetSetDef t_SpacecraftState__fields_[] = {
        DECLARE_GET_FIELD(t_SpacecraftState, a),
        DECLARE_GET_FIELD(t_SpacecraftState, absPVA),
        DECLARE_GET_FIELD(t_SpacecraftState, additionalStatesDerivatives),
        DECLARE_GET_FIELD(t_SpacecraftState, additionalStatesValues),
        DECLARE_GET_FIELD(t_SpacecraftState, attitude),
        DECLARE_GET_FIELD(t_SpacecraftState, date),
        DECLARE_GET_FIELD(t_SpacecraftState, e),
        DECLARE_GET_FIELD(t_SpacecraftState, equinoctialEx),
        DECLARE_GET_FIELD(t_SpacecraftState, equinoctialEy),
        DECLARE_GET_FIELD(t_SpacecraftState, frame),
        DECLARE_GET_FIELD(t_SpacecraftState, hx),
        DECLARE_GET_FIELD(t_SpacecraftState, hy),
        DECLARE_GET_FIELD(t_SpacecraftState, i),
        DECLARE_GET_FIELD(t_SpacecraftState, keplerianMeanMotion),
        DECLARE_GET_FIELD(t_SpacecraftState, keplerianPeriod),
        DECLARE_GET_FIELD(t_SpacecraftState, lE),
        DECLARE_GET_FIELD(t_SpacecraftState, lM),
        DECLARE_GET_FIELD(t_SpacecraftState, lv),
        DECLARE_GET_FIELD(t_SpacecraftState, mass),
        DECLARE_GET_FIELD(t_SpacecraftState, mu),
        DECLARE_GET_FIELD(t_SpacecraftState, orbit),
        DECLARE_GET_FIELD(t_SpacecraftState, orbitDefined),
        DECLARE_GET_FIELD(t_SpacecraftState, pVCoordinates),
        DECLARE_GET_FIELD(t_SpacecraftState, position),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SpacecraftState__methods_[] = {
        DECLARE_METHOD(t_SpacecraftState, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SpacecraftState, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SpacecraftState, addAdditionalState, METH_VARARGS),
        DECLARE_METHOD(t_SpacecraftState, addAdditionalStateDerivative, METH_VARARGS),
        DECLARE_METHOD(t_SpacecraftState, ensureCompatibleAdditionalStates, METH_O),
        DECLARE_METHOD(t_SpacecraftState, getA, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getAbsPVA, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getAdditionalState, METH_O),
        DECLARE_METHOD(t_SpacecraftState, getAdditionalStateDerivative, METH_O),
        DECLARE_METHOD(t_SpacecraftState, getAdditionalStatesDerivatives, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getAdditionalStatesValues, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getAttitude, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getDate, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getE, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getEquinoctialEx, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getEquinoctialEy, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getHx, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getHy, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getI, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getKeplerianMeanMotion, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getKeplerianPeriod, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getLE, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getLM, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getLv, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getMass, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getMu, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getOrbit, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_SpacecraftState, getPosition, METH_VARARGS),
        DECLARE_METHOD(t_SpacecraftState, hasAdditionalState, METH_O),
        DECLARE_METHOD(t_SpacecraftState, hasAdditionalStateDerivative, METH_O),
        DECLARE_METHOD(t_SpacecraftState, isOrbitDefined, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, shiftedBy, METH_O),
        DECLARE_METHOD(t_SpacecraftState, toStaticTransform, METH_NOARGS),
        DECLARE_METHOD(t_SpacecraftState, toString, METH_VARARGS),
        DECLARE_METHOD(t_SpacecraftState, toTransform, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SpacecraftState)[] = {
        { Py_tp_methods, t_SpacecraftState__methods_ },
        { Py_tp_init, (void *) t_SpacecraftState_init_ },
        { Py_tp_getset, t_SpacecraftState__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SpacecraftState)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SpacecraftState, t_SpacecraftState, SpacecraftState);

      void t_SpacecraftState::install(PyObject *module)
      {
        installType(&PY_TYPE(SpacecraftState), &PY_TYPE_DEF(SpacecraftState), module, "SpacecraftState", 0);
      }

      void t_SpacecraftState::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftState), "class_", make_descriptor(SpacecraftState::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftState), "wrapfn_", make_descriptor(t_SpacecraftState::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftState), "boxfn_", make_descriptor(boxObject));
        env->getClass(SpacecraftState::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftState), "DEFAULT_MASS", make_descriptor(SpacecraftState::DEFAULT_MASS));
      }

      static PyObject *t_SpacecraftState_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SpacecraftState::initializeClass, 1)))
          return NULL;
        return t_SpacecraftState::wrap_Object(SpacecraftState(((t_SpacecraftState *) arg)->object.this$));
      }
      static PyObject *t_SpacecraftState_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SpacecraftState::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SpacecraftState_init_(t_SpacecraftState *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::AbsolutePVCoordinates a0((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::AbsolutePVCoordinates::initializeClass, &a0))
            {
              INT_CALL(object = SpacecraftState(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
            {
              INT_CALL(object = SpacecraftState(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::orekit::utils::AbsolutePVCoordinates a0((jobject) NULL);
            ::org::orekit::attitudes::Attitude a1((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::utils::AbsolutePVCoordinates::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::AbsolutePVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::DoubleArrayDictionary a1((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::utils::AbsolutePVCoordinates::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::AbsolutePVCoordinates a0((jobject) NULL);
            jdouble a1;
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::utils::AbsolutePVCoordinates::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::attitudes::Attitude a1((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::utils::DoubleArrayDictionary a1((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            jdouble a1;
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1))
            {
              INT_CALL(object = SpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::utils::AbsolutePVCoordinates a0((jobject) NULL);
            ::org::orekit::attitudes::Attitude a1((jobject) NULL);
            ::org::orekit::utils::DoubleArrayDictionary a2((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::AbsolutePVCoordinates::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = SpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::AbsolutePVCoordinates a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::utils::DoubleArrayDictionary a2((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kDk", ::org::orekit::utils::AbsolutePVCoordinates::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = SpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::AbsolutePVCoordinates a0((jobject) NULL);
            ::org::orekit::attitudes::Attitude a1((jobject) NULL);
            jdouble a2;
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::utils::AbsolutePVCoordinates::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = SpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::attitudes::Attitude a1((jobject) NULL);
            ::org::orekit::utils::DoubleArrayDictionary a2((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = SpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::attitudes::Attitude a1((jobject) NULL);
            jdouble a2;
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = SpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::utils::DoubleArrayDictionary a2((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kDk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = SpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::AbsolutePVCoordinates a0((jobject) NULL);
            ::org::orekit::attitudes::Attitude a1((jobject) NULL);
            jdouble a2;
            ::org::orekit::utils::DoubleArrayDictionary a3((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kkDk", ::org::orekit::utils::AbsolutePVCoordinates::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = SpacecraftState(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::attitudes::Attitude a1((jobject) NULL);
            jdouble a2;
            ::org::orekit::utils::DoubleArrayDictionary a3((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kkDk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = SpacecraftState(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::utils::AbsolutePVCoordinates a0((jobject) NULL);
            ::org::orekit::attitudes::Attitude a1((jobject) NULL);
            jdouble a2;
            ::org::orekit::utils::DoubleArrayDictionary a3((jobject) NULL);
            ::org::orekit::utils::DoubleArrayDictionary a4((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kkDkk", ::org::orekit::utils::AbsolutePVCoordinates::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = SpacecraftState(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            ::org::orekit::attitudes::Attitude a1((jobject) NULL);
            jdouble a2;
            ::org::orekit::utils::DoubleArrayDictionary a3((jobject) NULL);
            ::org::orekit::utils::DoubleArrayDictionary a4((jobject) NULL);
            SpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "kkDkk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = SpacecraftState(a0, a1, a2, a3, a4));
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

      static PyObject *t_SpacecraftState_addAdditionalState(t_SpacecraftState *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        SpacecraftState result((jobject) NULL);

        if (!parseArgs(args, "s[D", &a0, &a1))
        {
          OBJ_CALL(result = self->object.addAdditionalState(a0, a1));
          return t_SpacecraftState::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "addAdditionalState", args);
        return NULL;
      }

      static PyObject *t_SpacecraftState_addAdditionalStateDerivative(t_SpacecraftState *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        SpacecraftState result((jobject) NULL);

        if (!parseArgs(args, "s[D", &a0, &a1))
        {
          OBJ_CALL(result = self->object.addAdditionalStateDerivative(a0, a1));
          return t_SpacecraftState::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "addAdditionalStateDerivative", args);
        return NULL;
      }

      static PyObject *t_SpacecraftState_ensureCompatibleAdditionalStates(t_SpacecraftState *self, PyObject *arg)
      {
        SpacecraftState a0((jobject) NULL);

        if (!parseArg(arg, "k", SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(self->object.ensureCompatibleAdditionalStates(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "ensureCompatibleAdditionalStates", arg);
        return NULL;
      }

      static PyObject *t_SpacecraftState_getA(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getA());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getAbsPVA(t_SpacecraftState *self)
      {
        ::org::orekit::utils::AbsolutePVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.getAbsPVA());
        return ::org::orekit::utils::t_AbsolutePVCoordinates::wrap_Object(result);
      }

      static PyObject *t_SpacecraftState_getAdditionalState(t_SpacecraftState *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getAdditionalState(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getAdditionalState", arg);
        return NULL;
      }

      static PyObject *t_SpacecraftState_getAdditionalStateDerivative(t_SpacecraftState *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getAdditionalStateDerivative(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getAdditionalStateDerivative", arg);
        return NULL;
      }

      static PyObject *t_SpacecraftState_getAdditionalStatesDerivatives(t_SpacecraftState *self)
      {
        ::org::orekit::utils::DoubleArrayDictionary result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStatesDerivatives());
        return ::org::orekit::utils::t_DoubleArrayDictionary::wrap_Object(result);
      }

      static PyObject *t_SpacecraftState_getAdditionalStatesValues(t_SpacecraftState *self)
      {
        ::org::orekit::utils::DoubleArrayDictionary result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStatesValues());
        return ::org::orekit::utils::t_DoubleArrayDictionary::wrap_Object(result);
      }

      static PyObject *t_SpacecraftState_getAttitude(t_SpacecraftState *self)
      {
        ::org::orekit::attitudes::Attitude result((jobject) NULL);
        OBJ_CALL(result = self->object.getAttitude());
        return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
      }

      static PyObject *t_SpacecraftState_getDate(t_SpacecraftState *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_SpacecraftState_getE(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getE());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getEquinoctialEx(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEquinoctialEx());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getEquinoctialEy(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEquinoctialEy());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getFrame(t_SpacecraftState *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_SpacecraftState_getHx(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getHx());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getHy(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getHy());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getI(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getI());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getKeplerianMeanMotion(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getKeplerianMeanMotion());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getKeplerianPeriod(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getKeplerianPeriod());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getLE(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLE());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getLM(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLM());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getLv(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLv());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getMass(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMass());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getMu(t_SpacecraftState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMu());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SpacecraftState_getOrbit(t_SpacecraftState *self)
      {
        ::org::orekit::orbits::Orbit result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrbit());
        return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
      }

      static PyObject *t_SpacecraftState_getPVCoordinates(t_SpacecraftState *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);
            OBJ_CALL(result = self->object.getPVCoordinates());
            return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_SpacecraftState_getPosition(t_SpacecraftState *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getPosition());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPosition(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPosition", args);
        return NULL;
      }

      static PyObject *t_SpacecraftState_hasAdditionalState(t_SpacecraftState *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.hasAdditionalState(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "hasAdditionalState", arg);
        return NULL;
      }

      static PyObject *t_SpacecraftState_hasAdditionalStateDerivative(t_SpacecraftState *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.hasAdditionalStateDerivative(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "hasAdditionalStateDerivative", arg);
        return NULL;
      }

      static PyObject *t_SpacecraftState_isOrbitDefined(t_SpacecraftState *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isOrbitDefined());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_SpacecraftState_shiftedBy(t_SpacecraftState *self, PyObject *arg)
      {
        jdouble a0;
        SpacecraftState result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_SpacecraftState::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }

      static PyObject *t_SpacecraftState_toStaticTransform(t_SpacecraftState *self)
      {
        ::org::orekit::frames::StaticTransform result((jobject) NULL);
        OBJ_CALL(result = self->object.toStaticTransform());
        return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
      }

      static PyObject *t_SpacecraftState_toString(t_SpacecraftState *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(SpacecraftState), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_SpacecraftState_toTransform(t_SpacecraftState *self)
      {
        ::org::orekit::frames::Transform result((jobject) NULL);
        OBJ_CALL(result = self->object.toTransform());
        return ::org::orekit::frames::t_Transform::wrap_Object(result);
      }

      static PyObject *t_SpacecraftState_get__a(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getA());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__absPVA(t_SpacecraftState *self, void *data)
      {
        ::org::orekit::utils::AbsolutePVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getAbsPVA());
        return ::org::orekit::utils::t_AbsolutePVCoordinates::wrap_Object(value);
      }

      static PyObject *t_SpacecraftState_get__additionalStatesDerivatives(t_SpacecraftState *self, void *data)
      {
        ::org::orekit::utils::DoubleArrayDictionary value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStatesDerivatives());
        return ::org::orekit::utils::t_DoubleArrayDictionary::wrap_Object(value);
      }

      static PyObject *t_SpacecraftState_get__additionalStatesValues(t_SpacecraftState *self, void *data)
      {
        ::org::orekit::utils::DoubleArrayDictionary value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStatesValues());
        return ::org::orekit::utils::t_DoubleArrayDictionary::wrap_Object(value);
      }

      static PyObject *t_SpacecraftState_get__attitude(t_SpacecraftState *self, void *data)
      {
        ::org::orekit::attitudes::Attitude value((jobject) NULL);
        OBJ_CALL(value = self->object.getAttitude());
        return ::org::orekit::attitudes::t_Attitude::wrap_Object(value);
      }

      static PyObject *t_SpacecraftState_get__date(t_SpacecraftState *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_SpacecraftState_get__e(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__equinoctialEx(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__equinoctialEy(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__frame(t_SpacecraftState *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_SpacecraftState_get__hx(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__hy(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__i(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getI());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__keplerianMeanMotion(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getKeplerianMeanMotion());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__keplerianPeriod(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getKeplerianPeriod());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__lE(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__lM(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLM());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__lv(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLv());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__mass(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMass());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__mu(t_SpacecraftState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMu());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SpacecraftState_get__orbit(t_SpacecraftState *self, void *data)
      {
        ::org::orekit::orbits::Orbit value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrbit());
        return ::org::orekit::orbits::t_Orbit::wrap_Object(value);
      }

      static PyObject *t_SpacecraftState_get__orbitDefined(t_SpacecraftState *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isOrbitDefined());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_SpacecraftState_get__pVCoordinates(t_SpacecraftState *self, void *data)
      {
        ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getPVCoordinates());
        return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(value);
      }

      static PyObject *t_SpacecraftState_get__position(t_SpacecraftState *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getPosition());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/PhaseAmbiguityModifier.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *PhaseAmbiguityModifier::class$ = NULL;
          jmethodID *PhaseAmbiguityModifier::mids$ = NULL;
          bool PhaseAmbiguityModifier::live$ = false;

          jclass PhaseAmbiguityModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/PhaseAmbiguityModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_89aad365fb0ed8da] = env->getMethodID(cls, "<init>", "(ID)V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_0054a497255e8220] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseAmbiguityModifier::PhaseAmbiguityModifier(jint a0, jdouble a1) : ::org::orekit::estimation::measurements::modifiers::AbstractAmbiguityModifier(env->newObject(initializeClass, &mids$, mid_init$_89aad365fb0ed8da, a0, a1)) {}

          ::java::util::List PhaseAmbiguityModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          void PhaseAmbiguityModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_0054a497255e8220], a0.this$);
          }

          void PhaseAmbiguityModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_PhaseAmbiguityModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseAmbiguityModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PhaseAmbiguityModifier_init_(t_PhaseAmbiguityModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PhaseAmbiguityModifier_getParametersDrivers(t_PhaseAmbiguityModifier *self);
          static PyObject *t_PhaseAmbiguityModifier_modify(t_PhaseAmbiguityModifier *self, PyObject *arg);
          static PyObject *t_PhaseAmbiguityModifier_modifyWithoutDerivatives(t_PhaseAmbiguityModifier *self, PyObject *arg);
          static PyObject *t_PhaseAmbiguityModifier_get__parametersDrivers(t_PhaseAmbiguityModifier *self, void *data);
          static PyGetSetDef t_PhaseAmbiguityModifier__fields_[] = {
            DECLARE_GET_FIELD(t_PhaseAmbiguityModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PhaseAmbiguityModifier__methods_[] = {
            DECLARE_METHOD(t_PhaseAmbiguityModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseAmbiguityModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseAmbiguityModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_PhaseAmbiguityModifier, modify, METH_O),
            DECLARE_METHOD(t_PhaseAmbiguityModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseAmbiguityModifier)[] = {
            { Py_tp_methods, t_PhaseAmbiguityModifier__methods_ },
            { Py_tp_init, (void *) t_PhaseAmbiguityModifier_init_ },
            { Py_tp_getset, t_PhaseAmbiguityModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseAmbiguityModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractAmbiguityModifier),
            NULL
          };

          DEFINE_TYPE(PhaseAmbiguityModifier, t_PhaseAmbiguityModifier, PhaseAmbiguityModifier);

          void t_PhaseAmbiguityModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseAmbiguityModifier), &PY_TYPE_DEF(PhaseAmbiguityModifier), module, "PhaseAmbiguityModifier", 0);
          }

          void t_PhaseAmbiguityModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseAmbiguityModifier), "class_", make_descriptor(PhaseAmbiguityModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseAmbiguityModifier), "wrapfn_", make_descriptor(t_PhaseAmbiguityModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseAmbiguityModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseAmbiguityModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseAmbiguityModifier::initializeClass, 1)))
              return NULL;
            return t_PhaseAmbiguityModifier::wrap_Object(PhaseAmbiguityModifier(((t_PhaseAmbiguityModifier *) arg)->object.this$));
          }
          static PyObject *t_PhaseAmbiguityModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseAmbiguityModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PhaseAmbiguityModifier_init_(t_PhaseAmbiguityModifier *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            jdouble a1;
            PhaseAmbiguityModifier object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = PhaseAmbiguityModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PhaseAmbiguityModifier_getParametersDrivers(t_PhaseAmbiguityModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_PhaseAmbiguityModifier_modify(t_PhaseAmbiguityModifier *self, PyObject *arg)
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

          static PyObject *t_PhaseAmbiguityModifier_modifyWithoutDerivatives(t_PhaseAmbiguityModifier *self, PyObject *arg)
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

          static PyObject *t_PhaseAmbiguityModifier_get__parametersDrivers(t_PhaseAmbiguityModifier *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuver.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *ManeuverFieldType::class$ = NULL;
              jmethodID *ManeuverFieldType::mids$ = NULL;
              bool ManeuverFieldType::live$ = false;
              ManeuverFieldType *ManeuverFieldType::ACC_DIR_SIGMA = NULL;
              ManeuverFieldType *ManeuverFieldType::ACC_INTERP = NULL;
              ManeuverFieldType *ManeuverFieldType::ACC_MAG_SIGMA = NULL;
              ManeuverFieldType *ManeuverFieldType::ACC_X = NULL;
              ManeuverFieldType *ManeuverFieldType::ACC_Y = NULL;
              ManeuverFieldType *ManeuverFieldType::ACC_Z = NULL;
              ManeuverFieldType *ManeuverFieldType::DELTA_MASS = NULL;
              ManeuverFieldType *ManeuverFieldType::DEPLOY_DIR_SIGMA = NULL;
              ManeuverFieldType *ManeuverFieldType::DEPLOY_DV_CDA = NULL;
              ManeuverFieldType *ManeuverFieldType::DEPLOY_DV_RATIO = NULL;
              ManeuverFieldType *ManeuverFieldType::DEPLOY_DV_SIGMA = NULL;
              ManeuverFieldType *ManeuverFieldType::DEPLOY_DV_X = NULL;
              ManeuverFieldType *ManeuverFieldType::DEPLOY_DV_Y = NULL;
              ManeuverFieldType *ManeuverFieldType::DEPLOY_DV_Z = NULL;
              ManeuverFieldType *ManeuverFieldType::DEPLOY_ID = NULL;
              ManeuverFieldType *ManeuverFieldType::DEPLOY_MASS = NULL;
              ManeuverFieldType *ManeuverFieldType::DV_DIR_SIGMA = NULL;
              ManeuverFieldType *ManeuverFieldType::DV_MAG_SIGMA = NULL;
              ManeuverFieldType *ManeuverFieldType::DV_X = NULL;
              ManeuverFieldType *ManeuverFieldType::DV_Y = NULL;
              ManeuverFieldType *ManeuverFieldType::DV_Z = NULL;
              ManeuverFieldType *ManeuverFieldType::MAN_DURA = NULL;
              ManeuverFieldType *ManeuverFieldType::THR_DIR_SIGMA = NULL;
              ManeuverFieldType *ManeuverFieldType::THR_EFFIC = NULL;
              ManeuverFieldType *ManeuverFieldType::THR_INTERP = NULL;
              ManeuverFieldType *ManeuverFieldType::THR_ISP = NULL;
              ManeuverFieldType *ManeuverFieldType::THR_MAG_SIGMA = NULL;
              ManeuverFieldType *ManeuverFieldType::THR_X = NULL;
              ManeuverFieldType *ManeuverFieldType::THR_Y = NULL;
              ManeuverFieldType *ManeuverFieldType::THR_Z = NULL;
              ManeuverFieldType *ManeuverFieldType::TIME_ABSOLUTE = NULL;
              ManeuverFieldType *ManeuverFieldType::TIME_RELATIVE = NULL;

              jclass ManeuverFieldType::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_checkUnit_79678ca73c6116a0] = env->getMethodID(cls, "checkUnit", "(Lorg/orekit/utils/units/Unit;)V");
                  mids$[mid_getUnit_3267fc1a8500bfc2] = env->getMethodID(cls, "getUnit", "()Lorg/orekit/utils/units/Unit;");
                  mids$[mid_isTime_89b302893bdbe1f1] = env->getMethodID(cls, "isTime", "()Z");
                  mids$[mid_outputField_26eb817d8a7e22e5] = env->getMethodID(cls, "outputField", "(Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuver;)Ljava/lang/String;");
                  mids$[mid_process_68589688357f709f] = env->getMethodID(cls, "process", "(Ljava/lang/String;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuver;ILjava/lang/String;)V");
                  mids$[mid_valueOf_5f0e3c991c419ef5] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;");
                  mids$[mid_values_32aed6cf3c466f58] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ACC_DIR_SIGMA = new ManeuverFieldType(env->getStaticObjectField(cls, "ACC_DIR_SIGMA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  ACC_INTERP = new ManeuverFieldType(env->getStaticObjectField(cls, "ACC_INTERP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  ACC_MAG_SIGMA = new ManeuverFieldType(env->getStaticObjectField(cls, "ACC_MAG_SIGMA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  ACC_X = new ManeuverFieldType(env->getStaticObjectField(cls, "ACC_X", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  ACC_Y = new ManeuverFieldType(env->getStaticObjectField(cls, "ACC_Y", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  ACC_Z = new ManeuverFieldType(env->getStaticObjectField(cls, "ACC_Z", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DELTA_MASS = new ManeuverFieldType(env->getStaticObjectField(cls, "DELTA_MASS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DEPLOY_DIR_SIGMA = new ManeuverFieldType(env->getStaticObjectField(cls, "DEPLOY_DIR_SIGMA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DEPLOY_DV_CDA = new ManeuverFieldType(env->getStaticObjectField(cls, "DEPLOY_DV_CDA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DEPLOY_DV_RATIO = new ManeuverFieldType(env->getStaticObjectField(cls, "DEPLOY_DV_RATIO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DEPLOY_DV_SIGMA = new ManeuverFieldType(env->getStaticObjectField(cls, "DEPLOY_DV_SIGMA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DEPLOY_DV_X = new ManeuverFieldType(env->getStaticObjectField(cls, "DEPLOY_DV_X", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DEPLOY_DV_Y = new ManeuverFieldType(env->getStaticObjectField(cls, "DEPLOY_DV_Y", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DEPLOY_DV_Z = new ManeuverFieldType(env->getStaticObjectField(cls, "DEPLOY_DV_Z", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DEPLOY_ID = new ManeuverFieldType(env->getStaticObjectField(cls, "DEPLOY_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DEPLOY_MASS = new ManeuverFieldType(env->getStaticObjectField(cls, "DEPLOY_MASS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DV_DIR_SIGMA = new ManeuverFieldType(env->getStaticObjectField(cls, "DV_DIR_SIGMA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DV_MAG_SIGMA = new ManeuverFieldType(env->getStaticObjectField(cls, "DV_MAG_SIGMA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DV_X = new ManeuverFieldType(env->getStaticObjectField(cls, "DV_X", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DV_Y = new ManeuverFieldType(env->getStaticObjectField(cls, "DV_Y", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  DV_Z = new ManeuverFieldType(env->getStaticObjectField(cls, "DV_Z", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  MAN_DURA = new ManeuverFieldType(env->getStaticObjectField(cls, "MAN_DURA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  THR_DIR_SIGMA = new ManeuverFieldType(env->getStaticObjectField(cls, "THR_DIR_SIGMA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  THR_EFFIC = new ManeuverFieldType(env->getStaticObjectField(cls, "THR_EFFIC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  THR_INTERP = new ManeuverFieldType(env->getStaticObjectField(cls, "THR_INTERP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  THR_ISP = new ManeuverFieldType(env->getStaticObjectField(cls, "THR_ISP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  THR_MAG_SIGMA = new ManeuverFieldType(env->getStaticObjectField(cls, "THR_MAG_SIGMA", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  THR_X = new ManeuverFieldType(env->getStaticObjectField(cls, "THR_X", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  THR_Y = new ManeuverFieldType(env->getStaticObjectField(cls, "THR_Y", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  THR_Z = new ManeuverFieldType(env->getStaticObjectField(cls, "THR_Z", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  TIME_ABSOLUTE = new ManeuverFieldType(env->getStaticObjectField(cls, "TIME_ABSOLUTE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  TIME_RELATIVE = new ManeuverFieldType(env->getStaticObjectField(cls, "TIME_RELATIVE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              void ManeuverFieldType::checkUnit(const ::org::orekit::utils::units::Unit & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_checkUnit_79678ca73c6116a0], a0.this$);
              }

              ::org::orekit::utils::units::Unit ManeuverFieldType::getUnit() const
              {
                return ::org::orekit::utils::units::Unit(env->callObjectMethod(this$, mids$[mid_getUnit_3267fc1a8500bfc2]));
              }

              jboolean ManeuverFieldType::isTime() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isTime_89b302893bdbe1f1]);
              }

              ::java::lang::String ManeuverFieldType::outputField(const ::org::orekit::files::ccsds::definitions::TimeConverter & a0, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuver & a1) const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_outputField_26eb817d8a7e22e5], a0.this$, a1.this$));
              }

              void ManeuverFieldType::process(const ::java::lang::String & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuver & a2, jint a3, const ::java::lang::String & a4) const
              {
                env->callVoidMethod(this$, mids$[mid_process_68589688357f709f], a0.this$, a1.this$, a2.this$, a3, a4.this$);
              }

              ManeuverFieldType ManeuverFieldType::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return ManeuverFieldType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_5f0e3c991c419ef5], a0.this$));
              }

              JArray< ManeuverFieldType > ManeuverFieldType::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< ManeuverFieldType >(env->callStaticObjectMethod(cls, mids$[mid_values_32aed6cf3c466f58]));
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
              static PyObject *t_ManeuverFieldType_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ManeuverFieldType_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ManeuverFieldType_of_(t_ManeuverFieldType *self, PyObject *args);
              static PyObject *t_ManeuverFieldType_checkUnit(t_ManeuverFieldType *self, PyObject *arg);
              static PyObject *t_ManeuverFieldType_getUnit(t_ManeuverFieldType *self);
              static PyObject *t_ManeuverFieldType_isTime(t_ManeuverFieldType *self);
              static PyObject *t_ManeuverFieldType_outputField(t_ManeuverFieldType *self, PyObject *args);
              static PyObject *t_ManeuverFieldType_process(t_ManeuverFieldType *self, PyObject *args);
              static PyObject *t_ManeuverFieldType_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_ManeuverFieldType_values(PyTypeObject *type);
              static PyObject *t_ManeuverFieldType_get__time(t_ManeuverFieldType *self, void *data);
              static PyObject *t_ManeuverFieldType_get__unit(t_ManeuverFieldType *self, void *data);
              static PyObject *t_ManeuverFieldType_get__parameters_(t_ManeuverFieldType *self, void *data);
              static PyGetSetDef t_ManeuverFieldType__fields_[] = {
                DECLARE_GET_FIELD(t_ManeuverFieldType, time),
                DECLARE_GET_FIELD(t_ManeuverFieldType, unit),
                DECLARE_GET_FIELD(t_ManeuverFieldType, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ManeuverFieldType__methods_[] = {
                DECLARE_METHOD(t_ManeuverFieldType, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ManeuverFieldType, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ManeuverFieldType, of_, METH_VARARGS),
                DECLARE_METHOD(t_ManeuverFieldType, checkUnit, METH_O),
                DECLARE_METHOD(t_ManeuverFieldType, getUnit, METH_NOARGS),
                DECLARE_METHOD(t_ManeuverFieldType, isTime, METH_NOARGS),
                DECLARE_METHOD(t_ManeuverFieldType, outputField, METH_VARARGS),
                DECLARE_METHOD(t_ManeuverFieldType, process, METH_VARARGS),
                DECLARE_METHOD(t_ManeuverFieldType, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_ManeuverFieldType, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ManeuverFieldType)[] = {
                { Py_tp_methods, t_ManeuverFieldType__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_ManeuverFieldType__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ManeuverFieldType)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(ManeuverFieldType, t_ManeuverFieldType, ManeuverFieldType);
              PyObject *t_ManeuverFieldType::wrap_Object(const ManeuverFieldType& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ManeuverFieldType::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ManeuverFieldType *self = (t_ManeuverFieldType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_ManeuverFieldType::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ManeuverFieldType::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ManeuverFieldType *self = (t_ManeuverFieldType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_ManeuverFieldType::install(PyObject *module)
              {
                installType(&PY_TYPE(ManeuverFieldType), &PY_TYPE_DEF(ManeuverFieldType), module, "ManeuverFieldType", 0);
              }

              void t_ManeuverFieldType::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "class_", make_descriptor(ManeuverFieldType::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "wrapfn_", make_descriptor(t_ManeuverFieldType::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "boxfn_", make_descriptor(boxObject));
                env->getClass(ManeuverFieldType::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "ACC_DIR_SIGMA", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::ACC_DIR_SIGMA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "ACC_INTERP", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::ACC_INTERP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "ACC_MAG_SIGMA", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::ACC_MAG_SIGMA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "ACC_X", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::ACC_X)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "ACC_Y", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::ACC_Y)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "ACC_Z", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::ACC_Z)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DELTA_MASS", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DELTA_MASS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DEPLOY_DIR_SIGMA", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DEPLOY_DIR_SIGMA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DEPLOY_DV_CDA", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DEPLOY_DV_CDA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DEPLOY_DV_RATIO", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DEPLOY_DV_RATIO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DEPLOY_DV_SIGMA", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DEPLOY_DV_SIGMA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DEPLOY_DV_X", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DEPLOY_DV_X)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DEPLOY_DV_Y", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DEPLOY_DV_Y)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DEPLOY_DV_Z", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DEPLOY_DV_Z)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DEPLOY_ID", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DEPLOY_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DEPLOY_MASS", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DEPLOY_MASS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DV_DIR_SIGMA", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DV_DIR_SIGMA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DV_MAG_SIGMA", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DV_MAG_SIGMA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DV_X", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DV_X)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DV_Y", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DV_Y)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "DV_Z", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::DV_Z)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "MAN_DURA", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::MAN_DURA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "THR_DIR_SIGMA", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::THR_DIR_SIGMA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "THR_EFFIC", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::THR_EFFIC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "THR_INTERP", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::THR_INTERP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "THR_ISP", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::THR_ISP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "THR_MAG_SIGMA", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::THR_MAG_SIGMA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "THR_X", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::THR_X)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "THR_Y", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::THR_Y)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "THR_Z", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::THR_Z)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "TIME_ABSOLUTE", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::TIME_ABSOLUTE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ManeuverFieldType), "TIME_RELATIVE", make_descriptor(t_ManeuverFieldType::wrap_Object(*ManeuverFieldType::TIME_RELATIVE)));
              }

              static PyObject *t_ManeuverFieldType_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ManeuverFieldType::initializeClass, 1)))
                  return NULL;
                return t_ManeuverFieldType::wrap_Object(ManeuverFieldType(((t_ManeuverFieldType *) arg)->object.this$));
              }
              static PyObject *t_ManeuverFieldType_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ManeuverFieldType::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ManeuverFieldType_of_(t_ManeuverFieldType *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_ManeuverFieldType_checkUnit(t_ManeuverFieldType *self, PyObject *arg)
              {
                ::org::orekit::utils::units::Unit a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::utils::units::Unit::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.checkUnit(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "checkUnit", arg);
                return NULL;
              }

              static PyObject *t_ManeuverFieldType_getUnit(t_ManeuverFieldType *self)
              {
                ::org::orekit::utils::units::Unit result((jobject) NULL);
                OBJ_CALL(result = self->object.getUnit());
                return ::org::orekit::utils::units::t_Unit::wrap_Object(result);
              }

              static PyObject *t_ManeuverFieldType_isTime(t_ManeuverFieldType *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.isTime());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_ManeuverFieldType_outputField(t_ManeuverFieldType *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::definitions::TimeConverter a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuver a1((jobject) NULL);
                ::java::lang::String result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::definitions::TimeConverter::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuver::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.outputField(a0, a1));
                  return j2p(result);
                }

                PyErr_SetArgsError((PyObject *) self, "outputField", args);
                return NULL;
              }

              static PyObject *t_ManeuverFieldType_process(t_ManeuverFieldType *self, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuver a2((jobject) NULL);
                jint a3;
                ::java::lang::String a4((jobject) NULL);

                if (!parseArgs(args, "skkIs", ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuver::initializeClass, &a0, &a1, &a2, &a3, &a4))
                {
                  OBJ_CALL(self->object.process(a0, a1, a2, a3, a4));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_ManeuverFieldType_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                ManeuverFieldType result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::ManeuverFieldType::valueOf(a0));
                  return t_ManeuverFieldType::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_ManeuverFieldType_values(PyTypeObject *type)
              {
                JArray< ManeuverFieldType > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::ManeuverFieldType::values());
                return JArray<jobject>(result.this$).wrap(t_ManeuverFieldType::wrap_jobject);
              }
              static PyObject *t_ManeuverFieldType_get__parameters_(t_ManeuverFieldType *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_ManeuverFieldType_get__time(t_ManeuverFieldType *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.isTime());
                Py_RETURN_BOOL(value);
              }

              static PyObject *t_ManeuverFieldType_get__unit(t_ManeuverFieldType *self, void *data)
              {
                ::org::orekit::utils::units::Unit value((jobject) NULL);
                OBJ_CALL(value = self->object.getUnit());
                return ::org::orekit::utils::units::t_Unit::wrap_Object(value);
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
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BracketedUnivariateSolver::class$ = NULL;
        jmethodID *BracketedUnivariateSolver::mids$ = NULL;
        bool BracketedUnivariateSolver::live$ = false;

        jclass BracketedUnivariateSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BracketedUnivariateSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_solve_63a1fb60fcca1695] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DDLorg/hipparchus/analysis/solvers/AllowedSolution;)D");
            mids$[mid_solve_d706f5f2b1b08d5d] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DDDLorg/hipparchus/analysis/solvers/AllowedSolution;)D");
            mids$[mid_solveInterval_4a2201dbd8a3c83c] = env->getMethodID(cls, "solveInterval", "(ILorg/hipparchus/analysis/UnivariateFunction;DD)Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval;");
            mids$[mid_solveInterval_d50558ec42f23049] = env->getMethodID(cls, "solveInterval", "(ILorg/hipparchus/analysis/UnivariateFunction;DDD)Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble BracketedUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, const ::org::hipparchus::analysis::solvers::AllowedSolution & a4) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_63a1fb60fcca1695], a0, a1.this$, a2, a3, a4.this$);
        }

        jdouble BracketedUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, jdouble a4, const ::org::hipparchus::analysis::solvers::AllowedSolution & a5) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_d706f5f2b1b08d5d], a0, a1.this$, a2, a3, a4, a5.this$);
        }

        ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval BracketedUnivariateSolver::solveInterval(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3) const
        {
          return ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval(env->callObjectMethod(this$, mids$[mid_solveInterval_4a2201dbd8a3c83c], a0, a1.this$, a2, a3));
        }

        ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval BracketedUnivariateSolver::solveInterval(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, jdouble a4) const
        {
          return ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval(env->callObjectMethod(this$, mids$[mid_solveInterval_d50558ec42f23049], a0, a1.this$, a2, a3, a4));
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
      namespace solvers {
        static PyObject *t_BracketedUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketedUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketedUnivariateSolver_of_(t_BracketedUnivariateSolver *self, PyObject *args);
        static PyObject *t_BracketedUnivariateSolver_solve(t_BracketedUnivariateSolver *self, PyObject *args);
        static PyObject *t_BracketedUnivariateSolver_solveInterval(t_BracketedUnivariateSolver *self, PyObject *args);
        static PyObject *t_BracketedUnivariateSolver_get__parameters_(t_BracketedUnivariateSolver *self, void *data);
        static PyGetSetDef t_BracketedUnivariateSolver__fields_[] = {
          DECLARE_GET_FIELD(t_BracketedUnivariateSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BracketedUnivariateSolver__methods_[] = {
          DECLARE_METHOD(t_BracketedUnivariateSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketedUnivariateSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketedUnivariateSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_BracketedUnivariateSolver, solve, METH_VARARGS),
          DECLARE_METHOD(t_BracketedUnivariateSolver, solveInterval, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BracketedUnivariateSolver)[] = {
          { Py_tp_methods, t_BracketedUnivariateSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BracketedUnivariateSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BracketedUnivariateSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::BaseUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(BracketedUnivariateSolver, t_BracketedUnivariateSolver, BracketedUnivariateSolver);
        PyObject *t_BracketedUnivariateSolver::wrap_Object(const BracketedUnivariateSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketedUnivariateSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketedUnivariateSolver *self = (t_BracketedUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BracketedUnivariateSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketedUnivariateSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketedUnivariateSolver *self = (t_BracketedUnivariateSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BracketedUnivariateSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(BracketedUnivariateSolver), &PY_TYPE_DEF(BracketedUnivariateSolver), module, "BracketedUnivariateSolver", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedUnivariateSolver), "Interval", make_descriptor(&PY_TYPE_DEF(BracketedUnivariateSolver$Interval)));
        }

        void t_BracketedUnivariateSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedUnivariateSolver), "class_", make_descriptor(BracketedUnivariateSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedUnivariateSolver), "wrapfn_", make_descriptor(t_BracketedUnivariateSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedUnivariateSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BracketedUnivariateSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BracketedUnivariateSolver::initializeClass, 1)))
            return NULL;
          return t_BracketedUnivariateSolver::wrap_Object(BracketedUnivariateSolver(((t_BracketedUnivariateSolver *) arg)->object.this$));
        }
        static PyObject *t_BracketedUnivariateSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BracketedUnivariateSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BracketedUnivariateSolver_of_(t_BracketedUnivariateSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BracketedUnivariateSolver_solve(t_BracketedUnivariateSolver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              ::org::hipparchus::analysis::solvers::AllowedSolution a4((jobject) NULL);
              PyTypeObject **p4;
              jdouble result;

              if (!parseArgs(args, "IkDDK", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 6:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              ::org::hipparchus::analysis::solvers::AllowedSolution a5((jobject) NULL);
              PyTypeObject **p5;
              jdouble result;

              if (!parseArgs(args, "IkDDDK", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &p5, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4, a5));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          return callSuper(PY_TYPE(BracketedUnivariateSolver), (PyObject *) self, "solve", args, 2);
        }

        static PyObject *t_BracketedUnivariateSolver_solveInterval(t_BracketedUnivariateSolver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval result((jobject) NULL);

              if (!parseArgs(args, "IkDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.solveInterval(a0, a1, a2, a3));
                return ::org::hipparchus::analysis::solvers::t_BracketedUnivariateSolver$Interval::wrap_Object(result);
              }
            }
            break;
           case 5:
            {
              jint a0;
              ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              jdouble a4;
              ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver$Interval result((jobject) NULL);

              if (!parseArgs(args, "IkDDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = self->object.solveInterval(a0, a1, a2, a3, a4));
                return ::org::hipparchus::analysis::solvers::t_BracketedUnivariateSolver$Interval::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "solveInterval", args);
          return NULL;
        }
        static PyObject *t_BracketedUnivariateSolver_get__parameters_(t_BracketedUnivariateSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/Blendable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *Blendable::class$ = NULL;
      jmethodID *Blendable::mids$ = NULL;
      bool Blendable::live$ = false;

      jclass Blendable::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/Blendable");

          mids$ = new jmethodID[max_mid];
          mids$[mid_blendArithmeticallyWith_d63fa23fa3cc8b1d] = env->getMethodID(cls, "blendArithmeticallyWith", "(Ljava/lang/Object;D)Ljava/lang/Object;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::Object Blendable::blendArithmeticallyWith(const ::java::lang::Object & a0, jdouble a1) const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_blendArithmeticallyWith_d63fa23fa3cc8b1d], a0.this$, a1));
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
      static PyObject *t_Blendable_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Blendable_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Blendable_of_(t_Blendable *self, PyObject *args);
      static PyObject *t_Blendable_blendArithmeticallyWith(t_Blendable *self, PyObject *args);
      static PyObject *t_Blendable_get__parameters_(t_Blendable *self, void *data);
      static PyGetSetDef t_Blendable__fields_[] = {
        DECLARE_GET_FIELD(t_Blendable, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Blendable__methods_[] = {
        DECLARE_METHOD(t_Blendable, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Blendable, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Blendable, of_, METH_VARARGS),
        DECLARE_METHOD(t_Blendable, blendArithmeticallyWith, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Blendable)[] = {
        { Py_tp_methods, t_Blendable__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Blendable__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Blendable)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Blendable, t_Blendable, Blendable);
      PyObject *t_Blendable::wrap_Object(const Blendable& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Blendable::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Blendable *self = (t_Blendable *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_Blendable::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Blendable::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Blendable *self = (t_Blendable *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_Blendable::install(PyObject *module)
      {
        installType(&PY_TYPE(Blendable), &PY_TYPE_DEF(Blendable), module, "Blendable", 0);
      }

      void t_Blendable::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Blendable), "class_", make_descriptor(Blendable::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Blendable), "wrapfn_", make_descriptor(t_Blendable::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Blendable), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Blendable_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Blendable::initializeClass, 1)))
          return NULL;
        return t_Blendable::wrap_Object(Blendable(((t_Blendable *) arg)->object.this$));
      }
      static PyObject *t_Blendable_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Blendable::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Blendable_of_(t_Blendable *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_Blendable_blendArithmeticallyWith(t_Blendable *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jdouble a1;
        ::java::lang::Object result((jobject) NULL);

        if (!parseArgs(args, "OD", self->parameters[0], &a0, &a1))
        {
          OBJ_CALL(result = self->object.blendArithmeticallyWith(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "blendArithmeticallyWith", args);
        return NULL;
      }
      static PyObject *t_Blendable_get__parameters_(t_Blendable *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/CivilianNavigationMessage.h"
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

            ::java::lang::Class *CivilianNavigationMessage::class$ = NULL;
            jmethodID *CivilianNavigationMessage::mids$ = NULL;
            bool CivilianNavigationMessage::live$ = false;
            ::java::lang::String *CivilianNavigationMessage::CNAV = NULL;
            ::java::lang::String *CivilianNavigationMessage::CNV2 = NULL;

            jclass CivilianNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/CivilianNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getADot_557b8123390d8d0c] = env->getMethodID(cls, "getADot", "()D");
                mids$[mid_getDeltaN0Dot_557b8123390d8d0c] = env->getMethodID(cls, "getDeltaN0Dot", "()D");
                mids$[mid_getIscL1CA_557b8123390d8d0c] = env->getMethodID(cls, "getIscL1CA", "()D");
                mids$[mid_getIscL1CD_557b8123390d8d0c] = env->getMethodID(cls, "getIscL1CD", "()D");
                mids$[mid_getIscL1CP_557b8123390d8d0c] = env->getMethodID(cls, "getIscL1CP", "()D");
                mids$[mid_getIscL2C_557b8123390d8d0c] = env->getMethodID(cls, "getIscL2C", "()D");
                mids$[mid_getIscL5I5_557b8123390d8d0c] = env->getMethodID(cls, "getIscL5I5", "()D");
                mids$[mid_getIscL5Q5_557b8123390d8d0c] = env->getMethodID(cls, "getIscL5Q5", "()D");
                mids$[mid_getSvAccuracy_557b8123390d8d0c] = env->getMethodID(cls, "getSvAccuracy", "()D");
                mids$[mid_getSvHealth_412668abc8d889e9] = env->getMethodID(cls, "getSvHealth", "()I");
                mids$[mid_getTGD_557b8123390d8d0c] = env->getMethodID(cls, "getTGD", "()D");
                mids$[mid_getUraiEd_412668abc8d889e9] = env->getMethodID(cls, "getUraiEd", "()I");
                mids$[mid_getUraiNed0_412668abc8d889e9] = env->getMethodID(cls, "getUraiNed0", "()I");
                mids$[mid_getUraiNed1_412668abc8d889e9] = env->getMethodID(cls, "getUraiNed1", "()I");
                mids$[mid_getUraiNed2_412668abc8d889e9] = env->getMethodID(cls, "getUraiNed2", "()I");
                mids$[mid_isCnv2_89b302893bdbe1f1] = env->getMethodID(cls, "isCnv2", "()Z");
                mids$[mid_setADot_10f281d777284cea] = env->getMethodID(cls, "setADot", "(D)V");
                mids$[mid_setDeltaN0Dot_10f281d777284cea] = env->getMethodID(cls, "setDeltaN0Dot", "(D)V");
                mids$[mid_setIscL1CA_10f281d777284cea] = env->getMethodID(cls, "setIscL1CA", "(D)V");
                mids$[mid_setIscL1CD_10f281d777284cea] = env->getMethodID(cls, "setIscL1CD", "(D)V");
                mids$[mid_setIscL1CP_10f281d777284cea] = env->getMethodID(cls, "setIscL1CP", "(D)V");
                mids$[mid_setIscL2C_10f281d777284cea] = env->getMethodID(cls, "setIscL2C", "(D)V");
                mids$[mid_setIscL5I5_10f281d777284cea] = env->getMethodID(cls, "setIscL5I5", "(D)V");
                mids$[mid_setIscL5Q5_10f281d777284cea] = env->getMethodID(cls, "setIscL5Q5", "(D)V");
                mids$[mid_setSvAccuracy_10f281d777284cea] = env->getMethodID(cls, "setSvAccuracy", "(D)V");
                mids$[mid_setSvHealth_a3da1a935cb37f7b] = env->getMethodID(cls, "setSvHealth", "(I)V");
                mids$[mid_setTGD_10f281d777284cea] = env->getMethodID(cls, "setTGD", "(D)V");
                mids$[mid_setUraiEd_a3da1a935cb37f7b] = env->getMethodID(cls, "setUraiEd", "(I)V");
                mids$[mid_setUraiNed0_a3da1a935cb37f7b] = env->getMethodID(cls, "setUraiNed0", "(I)V");
                mids$[mid_setUraiNed1_a3da1a935cb37f7b] = env->getMethodID(cls, "setUraiNed1", "(I)V");
                mids$[mid_setUraiNed2_a3da1a935cb37f7b] = env->getMethodID(cls, "setUraiNed2", "(I)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CNAV = new ::java::lang::String(env->getStaticObjectField(cls, "CNAV", "Ljava/lang/String;"));
                CNV2 = new ::java::lang::String(env->getStaticObjectField(cls, "CNV2", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble CivilianNavigationMessage::getADot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getADot_557b8123390d8d0c]);
            }

            jdouble CivilianNavigationMessage::getDeltaN0Dot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaN0Dot_557b8123390d8d0c]);
            }

            jdouble CivilianNavigationMessage::getIscL1CA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIscL1CA_557b8123390d8d0c]);
            }

            jdouble CivilianNavigationMessage::getIscL1CD() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIscL1CD_557b8123390d8d0c]);
            }

            jdouble CivilianNavigationMessage::getIscL1CP() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIscL1CP_557b8123390d8d0c]);
            }

            jdouble CivilianNavigationMessage::getIscL2C() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIscL2C_557b8123390d8d0c]);
            }

            jdouble CivilianNavigationMessage::getIscL5I5() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIscL5I5_557b8123390d8d0c]);
            }

            jdouble CivilianNavigationMessage::getIscL5Q5() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIscL5Q5_557b8123390d8d0c]);
            }

            jdouble CivilianNavigationMessage::getSvAccuracy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSvAccuracy_557b8123390d8d0c]);
            }

            jint CivilianNavigationMessage::getSvHealth() const
            {
              return env->callIntMethod(this$, mids$[mid_getSvHealth_412668abc8d889e9]);
            }

            jdouble CivilianNavigationMessage::getTGD() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTGD_557b8123390d8d0c]);
            }

            jint CivilianNavigationMessage::getUraiEd() const
            {
              return env->callIntMethod(this$, mids$[mid_getUraiEd_412668abc8d889e9]);
            }

            jint CivilianNavigationMessage::getUraiNed0() const
            {
              return env->callIntMethod(this$, mids$[mid_getUraiNed0_412668abc8d889e9]);
            }

            jint CivilianNavigationMessage::getUraiNed1() const
            {
              return env->callIntMethod(this$, mids$[mid_getUraiNed1_412668abc8d889e9]);
            }

            jint CivilianNavigationMessage::getUraiNed2() const
            {
              return env->callIntMethod(this$, mids$[mid_getUraiNed2_412668abc8d889e9]);
            }

            jboolean CivilianNavigationMessage::isCnv2() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isCnv2_89b302893bdbe1f1]);
            }

            void CivilianNavigationMessage::setADot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setADot_10f281d777284cea], a0);
            }

            void CivilianNavigationMessage::setDeltaN0Dot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDeltaN0Dot_10f281d777284cea], a0);
            }

            void CivilianNavigationMessage::setIscL1CA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIscL1CA_10f281d777284cea], a0);
            }

            void CivilianNavigationMessage::setIscL1CD(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIscL1CD_10f281d777284cea], a0);
            }

            void CivilianNavigationMessage::setIscL1CP(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIscL1CP_10f281d777284cea], a0);
            }

            void CivilianNavigationMessage::setIscL2C(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIscL2C_10f281d777284cea], a0);
            }

            void CivilianNavigationMessage::setIscL5I5(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIscL5I5_10f281d777284cea], a0);
            }

            void CivilianNavigationMessage::setIscL5Q5(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIscL5Q5_10f281d777284cea], a0);
            }

            void CivilianNavigationMessage::setSvAccuracy(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSvAccuracy_10f281d777284cea], a0);
            }

            void CivilianNavigationMessage::setSvHealth(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSvHealth_a3da1a935cb37f7b], a0);
            }

            void CivilianNavigationMessage::setTGD(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTGD_10f281d777284cea], a0);
            }

            void CivilianNavigationMessage::setUraiEd(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setUraiEd_a3da1a935cb37f7b], a0);
            }

            void CivilianNavigationMessage::setUraiNed0(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setUraiNed0_a3da1a935cb37f7b], a0);
            }

            void CivilianNavigationMessage::setUraiNed1(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setUraiNed1_a3da1a935cb37f7b], a0);
            }

            void CivilianNavigationMessage::setUraiNed2(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setUraiNed2_a3da1a935cb37f7b], a0);
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
            static PyObject *t_CivilianNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_getADot(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getDeltaN0Dot(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getIscL1CA(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getIscL1CD(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getIscL1CP(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getIscL2C(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getIscL5I5(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getIscL5Q5(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getSvAccuracy(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getSvHealth(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getTGD(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getUraiEd(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getUraiNed0(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getUraiNed1(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getUraiNed2(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_isCnv2(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_setADot(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setDeltaN0Dot(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setIscL1CA(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setIscL1CD(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setIscL1CP(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setIscL2C(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setIscL5I5(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setIscL5Q5(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setSvAccuracy(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setSvHealth(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setTGD(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setUraiEd(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setUraiNed0(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setUraiNed1(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setUraiNed2(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_get__aDot(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__aDot(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__cnv2(t_CivilianNavigationMessage *self, void *data);
            static PyObject *t_CivilianNavigationMessage_get__deltaN0Dot(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__deltaN0Dot(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__iscL1CA(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__iscL1CA(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__iscL1CD(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__iscL1CD(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__iscL1CP(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__iscL1CP(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__iscL2C(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__iscL2C(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__iscL5I5(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__iscL5I5(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__iscL5Q5(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__iscL5Q5(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__svAccuracy(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__svAccuracy(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__svHealth(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__svHealth(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__tGD(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__tGD(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__uraiEd(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__uraiEd(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__uraiNed0(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__uraiNed0(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__uraiNed1(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__uraiNed1(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__uraiNed2(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__uraiNed2(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyGetSetDef t_CivilianNavigationMessage__fields_[] = {
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, aDot),
              DECLARE_GET_FIELD(t_CivilianNavigationMessage, cnv2),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, deltaN0Dot),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, iscL1CA),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, iscL1CD),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, iscL1CP),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, iscL2C),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, iscL5I5),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, iscL5Q5),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, svAccuracy),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, svHealth),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, tGD),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, uraiEd),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, uraiNed0),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, uraiNed1),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, uraiNed2),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CivilianNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_CivilianNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CivilianNavigationMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getADot, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getDeltaN0Dot, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getIscL1CA, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getIscL1CD, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getIscL1CP, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getIscL2C, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getIscL5I5, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getIscL5Q5, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getSvAccuracy, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getSvHealth, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getTGD, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getUraiEd, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getUraiNed0, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getUraiNed1, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getUraiNed2, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, isCnv2, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, setADot, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setDeltaN0Dot, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setIscL1CA, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setIscL1CD, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setIscL1CP, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setIscL2C, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setIscL5I5, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setIscL5Q5, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setSvAccuracy, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setSvHealth, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setTGD, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setUraiEd, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setUraiNed0, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setUraiNed1, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setUraiNed2, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CivilianNavigationMessage)[] = {
              { Py_tp_methods, t_CivilianNavigationMessage__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_CivilianNavigationMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CivilianNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage),
              NULL
            };

            DEFINE_TYPE(CivilianNavigationMessage, t_CivilianNavigationMessage, CivilianNavigationMessage);

            void t_CivilianNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(CivilianNavigationMessage), &PY_TYPE_DEF(CivilianNavigationMessage), module, "CivilianNavigationMessage", 0);
            }

            void t_CivilianNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CivilianNavigationMessage), "class_", make_descriptor(CivilianNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CivilianNavigationMessage), "wrapfn_", make_descriptor(t_CivilianNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CivilianNavigationMessage), "boxfn_", make_descriptor(boxObject));
              env->getClass(CivilianNavigationMessage::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CivilianNavigationMessage), "CNAV", make_descriptor(j2p(*CivilianNavigationMessage::CNAV)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CivilianNavigationMessage), "CNV2", make_descriptor(j2p(*CivilianNavigationMessage::CNV2)));
            }

            static PyObject *t_CivilianNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CivilianNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_CivilianNavigationMessage::wrap_Object(CivilianNavigationMessage(((t_CivilianNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_CivilianNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CivilianNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CivilianNavigationMessage_getADot(t_CivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getADot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CivilianNavigationMessage_getDeltaN0Dot(t_CivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaN0Dot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CivilianNavigationMessage_getIscL1CA(t_CivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIscL1CA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CivilianNavigationMessage_getIscL1CD(t_CivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIscL1CD());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CivilianNavigationMessage_getIscL1CP(t_CivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIscL1CP());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CivilianNavigationMessage_getIscL2C(t_CivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIscL2C());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CivilianNavigationMessage_getIscL5I5(t_CivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIscL5I5());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CivilianNavigationMessage_getIscL5Q5(t_CivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIscL5Q5());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CivilianNavigationMessage_getSvAccuracy(t_CivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSvAccuracy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CivilianNavigationMessage_getSvHealth(t_CivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSvHealth());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CivilianNavigationMessage_getTGD(t_CivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTGD());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CivilianNavigationMessage_getUraiEd(t_CivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getUraiEd());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CivilianNavigationMessage_getUraiNed0(t_CivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getUraiNed0());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CivilianNavigationMessage_getUraiNed1(t_CivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getUraiNed1());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CivilianNavigationMessage_getUraiNed2(t_CivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getUraiNed2());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CivilianNavigationMessage_isCnv2(t_CivilianNavigationMessage *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.isCnv2());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_CivilianNavigationMessage_setADot(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setADot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setADot", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setDeltaN0Dot(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDeltaN0Dot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDeltaN0Dot", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setIscL1CA(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIscL1CA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIscL1CA", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setIscL1CD(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIscL1CD(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIscL1CD", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setIscL1CP(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIscL1CP(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIscL1CP", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setIscL2C(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIscL2C(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIscL2C", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setIscL5I5(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIscL5I5(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIscL5I5", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setIscL5Q5(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIscL5Q5(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIscL5Q5", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setSvAccuracy(t_CivilianNavigationMessage *self, PyObject *arg)
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

            static PyObject *t_CivilianNavigationMessage_setSvHealth(t_CivilianNavigationMessage *self, PyObject *arg)
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

            static PyObject *t_CivilianNavigationMessage_setTGD(t_CivilianNavigationMessage *self, PyObject *arg)
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

            static PyObject *t_CivilianNavigationMessage_setUraiEd(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setUraiEd(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setUraiEd", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setUraiNed0(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setUraiNed0(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setUraiNed0", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setUraiNed1(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setUraiNed1(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setUraiNed1", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setUraiNed2(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setUraiNed2(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setUraiNed2", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_get__aDot(t_CivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getADot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CivilianNavigationMessage_set__aDot(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setADot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "aDot", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__cnv2(t_CivilianNavigationMessage *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.isCnv2());
              Py_RETURN_BOOL(value);
            }

            static PyObject *t_CivilianNavigationMessage_get__deltaN0Dot(t_CivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaN0Dot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CivilianNavigationMessage_set__deltaN0Dot(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDeltaN0Dot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "deltaN0Dot", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__iscL1CA(t_CivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIscL1CA());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CivilianNavigationMessage_set__iscL1CA(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIscL1CA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iscL1CA", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__iscL1CD(t_CivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIscL1CD());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CivilianNavigationMessage_set__iscL1CD(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIscL1CD(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iscL1CD", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__iscL1CP(t_CivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIscL1CP());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CivilianNavigationMessage_set__iscL1CP(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIscL1CP(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iscL1CP", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__iscL2C(t_CivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIscL2C());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CivilianNavigationMessage_set__iscL2C(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIscL2C(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iscL2C", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__iscL5I5(t_CivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIscL5I5());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CivilianNavigationMessage_set__iscL5I5(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIscL5I5(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iscL5I5", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__iscL5Q5(t_CivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIscL5Q5());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CivilianNavigationMessage_set__iscL5Q5(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIscL5Q5(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iscL5Q5", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__svAccuracy(t_CivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSvAccuracy());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CivilianNavigationMessage_set__svAccuracy(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
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

            static PyObject *t_CivilianNavigationMessage_get__svHealth(t_CivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSvHealth());
              return PyLong_FromLong((long) value);
            }
            static int t_CivilianNavigationMessage_set__svHealth(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
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

            static PyObject *t_CivilianNavigationMessage_get__tGD(t_CivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTGD());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CivilianNavigationMessage_set__tGD(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
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

            static PyObject *t_CivilianNavigationMessage_get__uraiEd(t_CivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getUraiEd());
              return PyLong_FromLong((long) value);
            }
            static int t_CivilianNavigationMessage_set__uraiEd(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setUraiEd(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "uraiEd", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__uraiNed0(t_CivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getUraiNed0());
              return PyLong_FromLong((long) value);
            }
            static int t_CivilianNavigationMessage_set__uraiNed0(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setUraiNed0(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "uraiNed0", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__uraiNed1(t_CivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getUraiNed1());
              return PyLong_FromLong((long) value);
            }
            static int t_CivilianNavigationMessage_set__uraiNed1(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setUraiNed1(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "uraiNed1", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__uraiNed2(t_CivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getUraiNed2());
              return PyLong_FromLong((long) value);
            }
            static int t_CivilianNavigationMessage_set__uraiNed2(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setUraiNed2(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "uraiNed2", arg);
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
#include "org/hipparchus/ode/events/AdaptableInterval.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *AdaptableInterval::class$ = NULL;
        jmethodID *AdaptableInterval::mids$ = NULL;
        bool AdaptableInterval::live$ = false;

        jclass AdaptableInterval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/AdaptableInterval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_currentInterval_4a3e96b6f1af9d91] = env->getMethodID(cls, "currentInterval", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble AdaptableInterval::currentInterval(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_currentInterval_4a3e96b6f1af9d91], a0.this$);
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
        static PyObject *t_AdaptableInterval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdaptableInterval_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdaptableInterval_currentInterval(t_AdaptableInterval *self, PyObject *arg);

        static PyMethodDef t_AdaptableInterval__methods_[] = {
          DECLARE_METHOD(t_AdaptableInterval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdaptableInterval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdaptableInterval, currentInterval, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdaptableInterval)[] = {
          { Py_tp_methods, t_AdaptableInterval__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdaptableInterval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdaptableInterval, t_AdaptableInterval, AdaptableInterval);

        void t_AdaptableInterval::install(PyObject *module)
        {
          installType(&PY_TYPE(AdaptableInterval), &PY_TYPE_DEF(AdaptableInterval), module, "AdaptableInterval", 0);
        }

        void t_AdaptableInterval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptableInterval), "class_", make_descriptor(AdaptableInterval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptableInterval), "wrapfn_", make_descriptor(t_AdaptableInterval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptableInterval), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdaptableInterval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdaptableInterval::initializeClass, 1)))
            return NULL;
          return t_AdaptableInterval::wrap_Object(AdaptableInterval(((t_AdaptableInterval *) arg)->object.this$));
        }
        static PyObject *t_AdaptableInterval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdaptableInterval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdaptableInterval_currentInterval(t_AdaptableInterval *self, PyObject *arg)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.currentInterval(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "currentInterval", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/GroundReceiverCommonParametersWithoutDerivatives.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *GroundReceiverCommonParametersWithoutDerivatives::class$ = NULL;
        jmethodID *GroundReceiverCommonParametersWithoutDerivatives::mids$ = NULL;
        bool GroundReceiverCommonParametersWithoutDerivatives::live$ = false;

        jclass GroundReceiverCommonParametersWithoutDerivatives::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/GroundReceiverCommonParametersWithoutDerivatives");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_fb8b97640875587d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/Transform;Lorg/orekit/utils/TimeStampedPVCoordinates;DLorg/orekit/propagation/SpacecraftState;Lorg/orekit/utils/TimeStampedPVCoordinates;)V");
            mids$[mid_getOffsetToInertialDownlink_1168c6fb2fb8754f] = env->getMethodID(cls, "getOffsetToInertialDownlink", "()Lorg/orekit/frames/Transform;");
            mids$[mid_getState_15e85d5301b90ef8] = env->getMethodID(cls, "getState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getStationDownlink_daf15abc21907508] = env->getMethodID(cls, "getStationDownlink", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
            mids$[mid_getTauD_557b8123390d8d0c] = env->getMethodID(cls, "getTauD", "()D");
            mids$[mid_getTransitPV_daf15abc21907508] = env->getMethodID(cls, "getTransitPV", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
            mids$[mid_getTransitState_15e85d5301b90ef8] = env->getMethodID(cls, "getTransitState", "()Lorg/orekit/propagation/SpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GroundReceiverCommonParametersWithoutDerivatives::GroundReceiverCommonParametersWithoutDerivatives(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::frames::Transform & a1, const ::org::orekit::utils::TimeStampedPVCoordinates & a2, jdouble a3, const ::org::orekit::propagation::SpacecraftState & a4, const ::org::orekit::utils::TimeStampedPVCoordinates & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fb8b97640875587d, a0.this$, a1.this$, a2.this$, a3, a4.this$, a5.this$)) {}

        ::org::orekit::frames::Transform GroundReceiverCommonParametersWithoutDerivatives::getOffsetToInertialDownlink() const
        {
          return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getOffsetToInertialDownlink_1168c6fb2fb8754f]));
        }

        ::org::orekit::propagation::SpacecraftState GroundReceiverCommonParametersWithoutDerivatives::getState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getState_15e85d5301b90ef8]));
        }

        ::org::orekit::utils::TimeStampedPVCoordinates GroundReceiverCommonParametersWithoutDerivatives::getStationDownlink() const
        {
          return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getStationDownlink_daf15abc21907508]));
        }

        jdouble GroundReceiverCommonParametersWithoutDerivatives::getTauD() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTauD_557b8123390d8d0c]);
        }

        ::org::orekit::utils::TimeStampedPVCoordinates GroundReceiverCommonParametersWithoutDerivatives::getTransitPV() const
        {
          return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTransitPV_daf15abc21907508]));
        }

        ::org::orekit::propagation::SpacecraftState GroundReceiverCommonParametersWithoutDerivatives::getTransitState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getTransitState_15e85d5301b90ef8]));
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
        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GroundReceiverCommonParametersWithoutDerivatives_init_(t_GroundReceiverCommonParametersWithoutDerivatives *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_getOffsetToInertialDownlink(t_GroundReceiverCommonParametersWithoutDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_getState(t_GroundReceiverCommonParametersWithoutDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_getStationDownlink(t_GroundReceiverCommonParametersWithoutDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_getTauD(t_GroundReceiverCommonParametersWithoutDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_getTransitPV(t_GroundReceiverCommonParametersWithoutDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_getTransitState(t_GroundReceiverCommonParametersWithoutDerivatives *self);
        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_get__offsetToInertialDownlink(t_GroundReceiverCommonParametersWithoutDerivatives *self, void *data);
        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_get__state(t_GroundReceiverCommonParametersWithoutDerivatives *self, void *data);
        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_get__stationDownlink(t_GroundReceiverCommonParametersWithoutDerivatives *self, void *data);
        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_get__tauD(t_GroundReceiverCommonParametersWithoutDerivatives *self, void *data);
        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_get__transitPV(t_GroundReceiverCommonParametersWithoutDerivatives *self, void *data);
        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_get__transitState(t_GroundReceiverCommonParametersWithoutDerivatives *self, void *data);
        static PyGetSetDef t_GroundReceiverCommonParametersWithoutDerivatives__fields_[] = {
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithoutDerivatives, offsetToInertialDownlink),
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithoutDerivatives, state),
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithoutDerivatives, stationDownlink),
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithoutDerivatives, tauD),
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithoutDerivatives, transitPV),
          DECLARE_GET_FIELD(t_GroundReceiverCommonParametersWithoutDerivatives, transitState),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GroundReceiverCommonParametersWithoutDerivatives__methods_[] = {
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithoutDerivatives, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithoutDerivatives, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithoutDerivatives, getOffsetToInertialDownlink, METH_NOARGS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithoutDerivatives, getState, METH_NOARGS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithoutDerivatives, getStationDownlink, METH_NOARGS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithoutDerivatives, getTauD, METH_NOARGS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithoutDerivatives, getTransitPV, METH_NOARGS),
          DECLARE_METHOD(t_GroundReceiverCommonParametersWithoutDerivatives, getTransitState, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GroundReceiverCommonParametersWithoutDerivatives)[] = {
          { Py_tp_methods, t_GroundReceiverCommonParametersWithoutDerivatives__methods_ },
          { Py_tp_init, (void *) t_GroundReceiverCommonParametersWithoutDerivatives_init_ },
          { Py_tp_getset, t_GroundReceiverCommonParametersWithoutDerivatives__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GroundReceiverCommonParametersWithoutDerivatives)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GroundReceiverCommonParametersWithoutDerivatives, t_GroundReceiverCommonParametersWithoutDerivatives, GroundReceiverCommonParametersWithoutDerivatives);

        void t_GroundReceiverCommonParametersWithoutDerivatives::install(PyObject *module)
        {
          installType(&PY_TYPE(GroundReceiverCommonParametersWithoutDerivatives), &PY_TYPE_DEF(GroundReceiverCommonParametersWithoutDerivatives), module, "GroundReceiverCommonParametersWithoutDerivatives", 0);
        }

        void t_GroundReceiverCommonParametersWithoutDerivatives::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundReceiverCommonParametersWithoutDerivatives), "class_", make_descriptor(GroundReceiverCommonParametersWithoutDerivatives::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundReceiverCommonParametersWithoutDerivatives), "wrapfn_", make_descriptor(t_GroundReceiverCommonParametersWithoutDerivatives::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundReceiverCommonParametersWithoutDerivatives), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GroundReceiverCommonParametersWithoutDerivatives::initializeClass, 1)))
            return NULL;
          return t_GroundReceiverCommonParametersWithoutDerivatives::wrap_Object(GroundReceiverCommonParametersWithoutDerivatives(((t_GroundReceiverCommonParametersWithoutDerivatives *) arg)->object.this$));
        }
        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GroundReceiverCommonParametersWithoutDerivatives::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GroundReceiverCommonParametersWithoutDerivatives_init_(t_GroundReceiverCommonParametersWithoutDerivatives *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::frames::Transform a1((jobject) NULL);
          ::org::orekit::utils::TimeStampedPVCoordinates a2((jobject) NULL);
          jdouble a3;
          ::org::orekit::propagation::SpacecraftState a4((jobject) NULL);
          ::org::orekit::utils::TimeStampedPVCoordinates a5((jobject) NULL);
          GroundReceiverCommonParametersWithoutDerivatives object((jobject) NULL);

          if (!parseArgs(args, "kkkDkk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::frames::Transform::initializeClass, ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = GroundReceiverCommonParametersWithoutDerivatives(a0, a1, a2, a3, a4, a5));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_getOffsetToInertialDownlink(t_GroundReceiverCommonParametersWithoutDerivatives *self)
        {
          ::org::orekit::frames::Transform result((jobject) NULL);
          OBJ_CALL(result = self->object.getOffsetToInertialDownlink());
          return ::org::orekit::frames::t_Transform::wrap_Object(result);
        }

        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_getState(t_GroundReceiverCommonParametersWithoutDerivatives *self)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }

        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_getStationDownlink(t_GroundReceiverCommonParametersWithoutDerivatives *self)
        {
          ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);
          OBJ_CALL(result = self->object.getStationDownlink());
          return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
        }

        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_getTauD(t_GroundReceiverCommonParametersWithoutDerivatives *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTauD());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_getTransitPV(t_GroundReceiverCommonParametersWithoutDerivatives *self)
        {
          ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);
          OBJ_CALL(result = self->object.getTransitPV());
          return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
        }

        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_getTransitState(t_GroundReceiverCommonParametersWithoutDerivatives *self)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getTransitState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }

        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_get__offsetToInertialDownlink(t_GroundReceiverCommonParametersWithoutDerivatives *self, void *data)
        {
          ::org::orekit::frames::Transform value((jobject) NULL);
          OBJ_CALL(value = self->object.getOffsetToInertialDownlink());
          return ::org::orekit::frames::t_Transform::wrap_Object(value);
        }

        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_get__state(t_GroundReceiverCommonParametersWithoutDerivatives *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }

        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_get__stationDownlink(t_GroundReceiverCommonParametersWithoutDerivatives *self, void *data)
        {
          ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
          OBJ_CALL(value = self->object.getStationDownlink());
          return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(value);
        }

        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_get__tauD(t_GroundReceiverCommonParametersWithoutDerivatives *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTauD());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_get__transitPV(t_GroundReceiverCommonParametersWithoutDerivatives *self, void *data)
        {
          ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
          OBJ_CALL(value = self->object.getTransitPV());
          return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(value);
        }

        static PyObject *t_GroundReceiverCommonParametersWithoutDerivatives_get__transitState(t_GroundReceiverCommonParametersWithoutDerivatives *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getTransitState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fraction/BigFractionField.h"
#include "org/hipparchus/fraction/BigFraction.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/fraction/BigFractionField.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *BigFractionField::class$ = NULL;
      jmethodID *BigFractionField::mids$ = NULL;
      bool BigFractionField::live$ = false;

      jclass BigFractionField::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/BigFractionField");

          mids$ = new jmethodID[max_mid];
          mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getInstance_b141d0462bc50421] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/fraction/BigFractionField;");
          mids$[mid_getOne_92546681fd225453] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_getRuntimeClass_d4b191ff8147475d] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
          mids$[mid_getZero_92546681fd225453] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean BigFractionField::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
      }

      BigFractionField BigFractionField::getInstance()
      {
        jclass cls = env->getClass(initializeClass);
        return BigFractionField(env->callStaticObjectMethod(cls, mids$[mid_getInstance_b141d0462bc50421]));
      }

      ::org::hipparchus::fraction::BigFraction BigFractionField::getOne() const
      {
        return ::org::hipparchus::fraction::BigFraction(env->callObjectMethod(this$, mids$[mid_getOne_92546681fd225453]));
      }

      ::java::lang::Class BigFractionField::getRuntimeClass() const
      {
        return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_d4b191ff8147475d]));
      }

      ::org::hipparchus::fraction::BigFraction BigFractionField::getZero() const
      {
        return ::org::hipparchus::fraction::BigFraction(env->callObjectMethod(this$, mids$[mid_getZero_92546681fd225453]));
      }

      jint BigFractionField::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fraction {
      static PyObject *t_BigFractionField_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigFractionField_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigFractionField_equals(t_BigFractionField *self, PyObject *args);
      static PyObject *t_BigFractionField_getInstance(PyTypeObject *type);
      static PyObject *t_BigFractionField_getOne(t_BigFractionField *self);
      static PyObject *t_BigFractionField_getRuntimeClass(t_BigFractionField *self);
      static PyObject *t_BigFractionField_getZero(t_BigFractionField *self);
      static PyObject *t_BigFractionField_hashCode(t_BigFractionField *self, PyObject *args);
      static PyObject *t_BigFractionField_get__instance(t_BigFractionField *self, void *data);
      static PyObject *t_BigFractionField_get__one(t_BigFractionField *self, void *data);
      static PyObject *t_BigFractionField_get__runtimeClass(t_BigFractionField *self, void *data);
      static PyObject *t_BigFractionField_get__zero(t_BigFractionField *self, void *data);
      static PyGetSetDef t_BigFractionField__fields_[] = {
        DECLARE_GET_FIELD(t_BigFractionField, instance),
        DECLARE_GET_FIELD(t_BigFractionField, one),
        DECLARE_GET_FIELD(t_BigFractionField, runtimeClass),
        DECLARE_GET_FIELD(t_BigFractionField, zero),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BigFractionField__methods_[] = {
        DECLARE_METHOD(t_BigFractionField, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigFractionField, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigFractionField, equals, METH_VARARGS),
        DECLARE_METHOD(t_BigFractionField, getInstance, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_BigFractionField, getOne, METH_NOARGS),
        DECLARE_METHOD(t_BigFractionField, getRuntimeClass, METH_NOARGS),
        DECLARE_METHOD(t_BigFractionField, getZero, METH_NOARGS),
        DECLARE_METHOD(t_BigFractionField, hashCode, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BigFractionField)[] = {
        { Py_tp_methods, t_BigFractionField__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_BigFractionField__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BigFractionField)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BigFractionField, t_BigFractionField, BigFractionField);

      void t_BigFractionField::install(PyObject *module)
      {
        installType(&PY_TYPE(BigFractionField), &PY_TYPE_DEF(BigFractionField), module, "BigFractionField", 0);
      }

      void t_BigFractionField::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFractionField), "class_", make_descriptor(BigFractionField::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFractionField), "wrapfn_", make_descriptor(t_BigFractionField::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFractionField), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BigFractionField_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BigFractionField::initializeClass, 1)))
          return NULL;
        return t_BigFractionField::wrap_Object(BigFractionField(((t_BigFractionField *) arg)->object.this$));
      }
      static PyObject *t_BigFractionField_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BigFractionField::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BigFractionField_equals(t_BigFractionField *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(BigFractionField), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_BigFractionField_getInstance(PyTypeObject *type)
      {
        BigFractionField result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::fraction::BigFractionField::getInstance());
        return t_BigFractionField::wrap_Object(result);
      }

      static PyObject *t_BigFractionField_getOne(t_BigFractionField *self)
      {
        ::org::hipparchus::fraction::BigFraction result((jobject) NULL);
        OBJ_CALL(result = self->object.getOne());
        return ::org::hipparchus::fraction::t_BigFraction::wrap_Object(result);
      }

      static PyObject *t_BigFractionField_getRuntimeClass(t_BigFractionField *self)
      {
        ::java::lang::Class result((jobject) NULL);
        OBJ_CALL(result = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::fraction::PY_TYPE(BigFraction));
      }

      static PyObject *t_BigFractionField_getZero(t_BigFractionField *self)
      {
        ::org::hipparchus::fraction::BigFraction result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return ::org::hipparchus::fraction::t_BigFraction::wrap_Object(result);
      }

      static PyObject *t_BigFractionField_hashCode(t_BigFractionField *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BigFractionField), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_BigFractionField_get__instance(t_BigFractionField *self, void *data)
      {
        BigFractionField value((jobject) NULL);
        OBJ_CALL(value = self->object.getInstance());
        return t_BigFractionField::wrap_Object(value);
      }

      static PyObject *t_BigFractionField_get__one(t_BigFractionField *self, void *data)
      {
        ::org::hipparchus::fraction::BigFraction value((jobject) NULL);
        OBJ_CALL(value = self->object.getOne());
        return ::org::hipparchus::fraction::t_BigFraction::wrap_Object(value);
      }

      static PyObject *t_BigFractionField_get__runtimeClass(t_BigFractionField *self, void *data)
      {
        ::java::lang::Class value((jobject) NULL);
        OBJ_CALL(value = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(value);
      }

      static PyObject *t_BigFractionField_get__zero(t_BigFractionField *self, void *data)
      {
        ::org::hipparchus::fraction::BigFraction value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return ::org::hipparchus::fraction::t_BigFraction::wrap_Object(value);
      }
    }
  }
}
