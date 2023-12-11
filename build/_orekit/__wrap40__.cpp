#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *EncodedMessage::class$ = NULL;
          jmethodID *EncodedMessage::mids$ = NULL;
          bool EncodedMessage::live$ = false;

          jclass EncodedMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/EncodedMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_extractBits_4f6383d3e31ab417] = env->getMethodID(cls, "extractBits", "(I)J");
              mids$[mid_start_0640e6acf969ed28] = env->getMethodID(cls, "start", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jlong EncodedMessage::extractBits(jint a0) const
          {
            return env->callLongMethod(this$, mids$[mid_extractBits_4f6383d3e31ab417], a0);
          }

          void EncodedMessage::start() const
          {
            env->callVoidMethod(this$, mids$[mid_start_0640e6acf969ed28]);
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
          static PyObject *t_EncodedMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EncodedMessage_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EncodedMessage_extractBits(t_EncodedMessage *self, PyObject *arg);
          static PyObject *t_EncodedMessage_start(t_EncodedMessage *self);

          static PyMethodDef t_EncodedMessage__methods_[] = {
            DECLARE_METHOD(t_EncodedMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EncodedMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EncodedMessage, extractBits, METH_O),
            DECLARE_METHOD(t_EncodedMessage, start, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(EncodedMessage)[] = {
            { Py_tp_methods, t_EncodedMessage__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(EncodedMessage)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(EncodedMessage, t_EncodedMessage, EncodedMessage);

          void t_EncodedMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(EncodedMessage), &PY_TYPE_DEF(EncodedMessage), module, "EncodedMessage", 0);
          }

          void t_EncodedMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(EncodedMessage), "class_", make_descriptor(EncodedMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EncodedMessage), "wrapfn_", make_descriptor(t_EncodedMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EncodedMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_EncodedMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, EncodedMessage::initializeClass, 1)))
              return NULL;
            return t_EncodedMessage::wrap_Object(EncodedMessage(((t_EncodedMessage *) arg)->object.this$));
          }
          static PyObject *t_EncodedMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, EncodedMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_EncodedMessage_extractBits(t_EncodedMessage *self, PyObject *arg)
          {
            jint a0;
            jlong result;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.extractBits(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            PyErr_SetArgsError((PyObject *) self, "extractBits", arg);
            return NULL;
          }

          static PyObject *t_EncodedMessage_start(t_EncodedMessage *self)
          {
            OBJ_CALL(self->object.start());
            Py_RETURN_NONE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FootprintOverlapDetector.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/hipparchus/geometry/spherical/twod/SphericalPolygonsSet.h"
#include "org/orekit/propagation/events/FootprintOverlapDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/geometry/fov/FieldOfView.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FootprintOverlapDetector::class$ = NULL;
        jmethodID *FootprintOverlapDetector::mids$ = NULL;
        bool FootprintOverlapDetector::live$ = false;

        jclass FootprintOverlapDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FootprintOverlapDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3a57658c194bc215] = env->getMethodID(cls, "<init>", "(Lorg/orekit/geometry/fov/FieldOfView;Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;D)V");
            mids$[mid_g_1bbf81d80c47ecdd] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getBody_f166528db337c659] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/BodyShape;");
            mids$[mid_getFOV_0cb1db9d43d06211] = env->getMethodID(cls, "getFOV", "()Lorg/orekit/geometry/fov/FieldOfView;");
            mids$[mid_getZone_1223d06efa3ccad7] = env->getMethodID(cls, "getZone", "()Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;");
            mids$[mid_create_c630f2cd60d6e5cf] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/FootprintOverlapDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FootprintOverlapDetector::FootprintOverlapDetector(const ::org::orekit::geometry::fov::FieldOfView & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, const ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet & a2, jdouble a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_3a57658c194bc215, a0.this$, a1.this$, a2.this$, a3)) {}

        jdouble FootprintOverlapDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_1bbf81d80c47ecdd], a0.this$);
        }

        ::org::orekit::bodies::BodyShape FootprintOverlapDetector::getBody() const
        {
          return ::org::orekit::bodies::BodyShape(env->callObjectMethod(this$, mids$[mid_getBody_f166528db337c659]));
        }

        ::org::orekit::geometry::fov::FieldOfView FootprintOverlapDetector::getFOV() const
        {
          return ::org::orekit::geometry::fov::FieldOfView(env->callObjectMethod(this$, mids$[mid_getFOV_0cb1db9d43d06211]));
        }

        ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet FootprintOverlapDetector::getZone() const
        {
          return ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet(env->callObjectMethod(this$, mids$[mid_getZone_1223d06efa3ccad7]));
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
        static PyObject *t_FootprintOverlapDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FootprintOverlapDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FootprintOverlapDetector_of_(t_FootprintOverlapDetector *self, PyObject *args);
        static int t_FootprintOverlapDetector_init_(t_FootprintOverlapDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FootprintOverlapDetector_g(t_FootprintOverlapDetector *self, PyObject *args);
        static PyObject *t_FootprintOverlapDetector_getBody(t_FootprintOverlapDetector *self);
        static PyObject *t_FootprintOverlapDetector_getFOV(t_FootprintOverlapDetector *self);
        static PyObject *t_FootprintOverlapDetector_getZone(t_FootprintOverlapDetector *self);
        static PyObject *t_FootprintOverlapDetector_get__body(t_FootprintOverlapDetector *self, void *data);
        static PyObject *t_FootprintOverlapDetector_get__fOV(t_FootprintOverlapDetector *self, void *data);
        static PyObject *t_FootprintOverlapDetector_get__zone(t_FootprintOverlapDetector *self, void *data);
        static PyObject *t_FootprintOverlapDetector_get__parameters_(t_FootprintOverlapDetector *self, void *data);
        static PyGetSetDef t_FootprintOverlapDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FootprintOverlapDetector, body),
          DECLARE_GET_FIELD(t_FootprintOverlapDetector, fOV),
          DECLARE_GET_FIELD(t_FootprintOverlapDetector, zone),
          DECLARE_GET_FIELD(t_FootprintOverlapDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FootprintOverlapDetector__methods_[] = {
          DECLARE_METHOD(t_FootprintOverlapDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FootprintOverlapDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FootprintOverlapDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FootprintOverlapDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FootprintOverlapDetector, getBody, METH_NOARGS),
          DECLARE_METHOD(t_FootprintOverlapDetector, getFOV, METH_NOARGS),
          DECLARE_METHOD(t_FootprintOverlapDetector, getZone, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FootprintOverlapDetector)[] = {
          { Py_tp_methods, t_FootprintOverlapDetector__methods_ },
          { Py_tp_init, (void *) t_FootprintOverlapDetector_init_ },
          { Py_tp_getset, t_FootprintOverlapDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FootprintOverlapDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(FootprintOverlapDetector, t_FootprintOverlapDetector, FootprintOverlapDetector);
        PyObject *t_FootprintOverlapDetector::wrap_Object(const FootprintOverlapDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FootprintOverlapDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FootprintOverlapDetector *self = (t_FootprintOverlapDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FootprintOverlapDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FootprintOverlapDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FootprintOverlapDetector *self = (t_FootprintOverlapDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FootprintOverlapDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FootprintOverlapDetector), &PY_TYPE_DEF(FootprintOverlapDetector), module, "FootprintOverlapDetector", 0);
        }

        void t_FootprintOverlapDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FootprintOverlapDetector), "class_", make_descriptor(FootprintOverlapDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FootprintOverlapDetector), "wrapfn_", make_descriptor(t_FootprintOverlapDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FootprintOverlapDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FootprintOverlapDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FootprintOverlapDetector::initializeClass, 1)))
            return NULL;
          return t_FootprintOverlapDetector::wrap_Object(FootprintOverlapDetector(((t_FootprintOverlapDetector *) arg)->object.this$));
        }
        static PyObject *t_FootprintOverlapDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FootprintOverlapDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FootprintOverlapDetector_of_(t_FootprintOverlapDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FootprintOverlapDetector_init_(t_FootprintOverlapDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::geometry::fov::FieldOfView a0((jobject) NULL);
          ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
          ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet a2((jobject) NULL);
          PyTypeObject **p2;
          jdouble a3;
          FootprintOverlapDetector object((jobject) NULL);

          if (!parseArgs(args, "kkKD", ::org::orekit::geometry::fov::FieldOfView::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::parameters_, &a3))
          {
            INT_CALL(object = FootprintOverlapDetector(a0, a1, a2, a3));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(FootprintOverlapDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FootprintOverlapDetector_g(t_FootprintOverlapDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FootprintOverlapDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FootprintOverlapDetector_getBody(t_FootprintOverlapDetector *self)
        {
          ::org::orekit::bodies::BodyShape result((jobject) NULL);
          OBJ_CALL(result = self->object.getBody());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(result);
        }

        static PyObject *t_FootprintOverlapDetector_getFOV(t_FootprintOverlapDetector *self)
        {
          ::org::orekit::geometry::fov::FieldOfView result((jobject) NULL);
          OBJ_CALL(result = self->object.getFOV());
          return ::org::orekit::geometry::fov::t_FieldOfView::wrap_Object(result);
        }

        static PyObject *t_FootprintOverlapDetector_getZone(t_FootprintOverlapDetector *self)
        {
          ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet result((jobject) NULL);
          OBJ_CALL(result = self->object.getZone());
          return ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::wrap_Object(result);
        }
        static PyObject *t_FootprintOverlapDetector_get__parameters_(t_FootprintOverlapDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FootprintOverlapDetector_get__body(t_FootprintOverlapDetector *self, void *data)
        {
          ::org::orekit::bodies::BodyShape value((jobject) NULL);
          OBJ_CALL(value = self->object.getBody());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(value);
        }

        static PyObject *t_FootprintOverlapDetector_get__fOV(t_FootprintOverlapDetector *self, void *data)
        {
          ::org::orekit::geometry::fov::FieldOfView value((jobject) NULL);
          OBJ_CALL(value = self->object.getFOV());
          return ::org::orekit::geometry::fov::t_FieldOfView::wrap_Object(value);
        }

        static PyObject *t_FootprintOverlapDetector_get__zone(t_FootprintOverlapDetector *self, void *data)
        {
          ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet value((jobject) NULL);
          OBJ_CALL(value = self->object.getZone());
          return ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/FileOutputStream.h"
#include "java/io/IOException.h"
#include "java/io/FileNotFoundException.h"
#include "java/io/File.h"
#include "java/io/FileDescriptor.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *FileOutputStream::class$ = NULL;
    jmethodID *FileOutputStream::mids$ = NULL;
    bool FileOutputStream::live$ = false;

    jclass FileOutputStream::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/FileOutputStream");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_5d6bcca91ae998ee] = env->getMethodID(cls, "<init>", "(Ljava/io/File;)V");
        mids$[mid_init$_0a1c60be3a779b3b] = env->getMethodID(cls, "<init>", "(Ljava/io/FileDescriptor;)V");
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_237457d19ea4d200] = env->getMethodID(cls, "<init>", "(Ljava/io/File;Z)V");
        mids$[mid_init$_e5ca4b97ee6bd2b6] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Z)V");
        mids$[mid_close_0640e6acf969ed28] = env->getMethodID(cls, "close", "()V");
        mids$[mid_getFD_94f00ee7019754d9] = env->getMethodID(cls, "getFD", "()Ljava/io/FileDescriptor;");
        mids$[mid_write_d759c70c6670fd89] = env->getMethodID(cls, "write", "([B)V");
        mids$[mid_write_a3da1a935cb37f7b] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_ac782c7077255dd3] = env->getMethodID(cls, "write", "([BII)V");
        mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    FileOutputStream::FileOutputStream(const ::java::io::File & a0) : ::java::io::OutputStream(env->newObject(initializeClass, &mids$, mid_init$_5d6bcca91ae998ee, a0.this$)) {}

    FileOutputStream::FileOutputStream(const ::java::io::FileDescriptor & a0) : ::java::io::OutputStream(env->newObject(initializeClass, &mids$, mid_init$_0a1c60be3a779b3b, a0.this$)) {}

    FileOutputStream::FileOutputStream(const ::java::lang::String & a0) : ::java::io::OutputStream(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

    FileOutputStream::FileOutputStream(const ::java::io::File & a0, jboolean a1) : ::java::io::OutputStream(env->newObject(initializeClass, &mids$, mid_init$_237457d19ea4d200, a0.this$, a1)) {}

    FileOutputStream::FileOutputStream(const ::java::lang::String & a0, jboolean a1) : ::java::io::OutputStream(env->newObject(initializeClass, &mids$, mid_init$_e5ca4b97ee6bd2b6, a0.this$, a1)) {}

    void FileOutputStream::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_0640e6acf969ed28]);
    }

    ::java::io::FileDescriptor FileOutputStream::getFD() const
    {
      return ::java::io::FileDescriptor(env->callObjectMethod(this$, mids$[mid_getFD_94f00ee7019754d9]));
    }

    void FileOutputStream::write(const JArray< jbyte > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_d759c70c6670fd89], a0.this$);
    }

    void FileOutputStream::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_a3da1a935cb37f7b], a0);
    }

    void FileOutputStream::write(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_ac782c7077255dd3], a0.this$, a1, a2);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_FileOutputStream_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_FileOutputStream_instance_(PyTypeObject *type, PyObject *arg);
    static int t_FileOutputStream_init_(t_FileOutputStream *self, PyObject *args, PyObject *kwds);
    static PyObject *t_FileOutputStream_close(t_FileOutputStream *self, PyObject *args);
    static PyObject *t_FileOutputStream_getFD(t_FileOutputStream *self);
    static PyObject *t_FileOutputStream_write(t_FileOutputStream *self, PyObject *args);
    static PyObject *t_FileOutputStream_get__fD(t_FileOutputStream *self, void *data);
    static PyGetSetDef t_FileOutputStream__fields_[] = {
      DECLARE_GET_FIELD(t_FileOutputStream, fD),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_FileOutputStream__methods_[] = {
      DECLARE_METHOD(t_FileOutputStream, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FileOutputStream, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FileOutputStream, close, METH_VARARGS),
      DECLARE_METHOD(t_FileOutputStream, getFD, METH_NOARGS),
      DECLARE_METHOD(t_FileOutputStream, write, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(FileOutputStream)[] = {
      { Py_tp_methods, t_FileOutputStream__methods_ },
      { Py_tp_init, (void *) t_FileOutputStream_init_ },
      { Py_tp_getset, t_FileOutputStream__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(FileOutputStream)[] = {
      &PY_TYPE_DEF(::java::io::OutputStream),
      NULL
    };

    DEFINE_TYPE(FileOutputStream, t_FileOutputStream, FileOutputStream);

    void t_FileOutputStream::install(PyObject *module)
    {
      installType(&PY_TYPE(FileOutputStream), &PY_TYPE_DEF(FileOutputStream), module, "FileOutputStream", 0);
    }

    void t_FileOutputStream::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileOutputStream), "class_", make_descriptor(FileOutputStream::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileOutputStream), "wrapfn_", make_descriptor(t_FileOutputStream::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileOutputStream), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_FileOutputStream_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, FileOutputStream::initializeClass, 1)))
        return NULL;
      return t_FileOutputStream::wrap_Object(FileOutputStream(((t_FileOutputStream *) arg)->object.this$));
    }
    static PyObject *t_FileOutputStream_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, FileOutputStream::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_FileOutputStream_init_(t_FileOutputStream *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::io::File a0((jobject) NULL);
          FileOutputStream object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::File::initializeClass, &a0))
          {
            INT_CALL(object = FileOutputStream(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::io::FileDescriptor a0((jobject) NULL);
          FileOutputStream object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::FileDescriptor::initializeClass, &a0))
          {
            INT_CALL(object = FileOutputStream(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          FileOutputStream object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = FileOutputStream(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::io::File a0((jobject) NULL);
          jboolean a1;
          FileOutputStream object((jobject) NULL);

          if (!parseArgs(args, "kZ", ::java::io::File::initializeClass, &a0, &a1))
          {
            INT_CALL(object = FileOutputStream(a0, a1));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jboolean a1;
          FileOutputStream object((jobject) NULL);

          if (!parseArgs(args, "sZ", &a0, &a1))
          {
            INT_CALL(object = FileOutputStream(a0, a1));
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

    static PyObject *t_FileOutputStream_close(t_FileOutputStream *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(FileOutputStream), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_FileOutputStream_getFD(t_FileOutputStream *self)
    {
      ::java::io::FileDescriptor result((jobject) NULL);
      OBJ_CALL(result = self->object.getFD());
      return ::java::io::t_FileDescriptor::wrap_Object(result);
    }

    static PyObject *t_FileOutputStream_write(t_FileOutputStream *self, PyObject *args)
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

      return callSuper(PY_TYPE(FileOutputStream), (PyObject *) self, "write", args, 2);
    }

    static PyObject *t_FileOutputStream_get__fD(t_FileOutputStream *self, void *data)
    {
      ::java::io::FileDescriptor value((jobject) NULL);
      OBJ_CALL(value = self->object.getFD());
      return ::java::io::t_FileDescriptor::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/clock/RinexClock$ClockDataType.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "java/lang/String.h"
#include "org/orekit/files/rinex/clock/RinexClock$ClockDataType.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {

          ::java::lang::Class *RinexClock$ClockDataType::class$ = NULL;
          jmethodID *RinexClock$ClockDataType::mids$ = NULL;
          bool RinexClock$ClockDataType::live$ = false;
          RinexClock$ClockDataType *RinexClock$ClockDataType::AR = NULL;
          RinexClock$ClockDataType *RinexClock$ClockDataType::AS = NULL;
          RinexClock$ClockDataType *RinexClock$ClockDataType::CR = NULL;
          RinexClock$ClockDataType *RinexClock$ClockDataType::DR = NULL;
          RinexClock$ClockDataType *RinexClock$ClockDataType::MS = NULL;

          jclass RinexClock$ClockDataType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/clock/RinexClock$ClockDataType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getKey_3cffd47377eca18a] = env->getMethodID(cls, "getKey", "()Ljava/lang/String;");
              mids$[mid_parseClockDataType_1d67ae2b29bedc82] = env->getStaticMethodID(cls, "parseClockDataType", "(Ljava/lang/String;)Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;");
              mids$[mid_valueOf_1d67ae2b29bedc82] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;");
              mids$[mid_values_3fbbe72316e776a8] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              AR = new RinexClock$ClockDataType(env->getStaticObjectField(cls, "AR", "Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;"));
              AS = new RinexClock$ClockDataType(env->getStaticObjectField(cls, "AS", "Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;"));
              CR = new RinexClock$ClockDataType(env->getStaticObjectField(cls, "CR", "Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;"));
              DR = new RinexClock$ClockDataType(env->getStaticObjectField(cls, "DR", "Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;"));
              MS = new RinexClock$ClockDataType(env->getStaticObjectField(cls, "MS", "Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::lang::String RinexClock$ClockDataType::getKey() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getKey_3cffd47377eca18a]));
          }

          RinexClock$ClockDataType RinexClock$ClockDataType::parseClockDataType(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RinexClock$ClockDataType(env->callStaticObjectMethod(cls, mids$[mid_parseClockDataType_1d67ae2b29bedc82], a0.this$));
          }

          RinexClock$ClockDataType RinexClock$ClockDataType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RinexClock$ClockDataType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_1d67ae2b29bedc82], a0.this$));
          }

          JArray< RinexClock$ClockDataType > RinexClock$ClockDataType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< RinexClock$ClockDataType >(env->callStaticObjectMethod(cls, mids$[mid_values_3fbbe72316e776a8]));
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
        namespace clock {
          static PyObject *t_RinexClock$ClockDataType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexClock$ClockDataType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexClock$ClockDataType_of_(t_RinexClock$ClockDataType *self, PyObject *args);
          static PyObject *t_RinexClock$ClockDataType_getKey(t_RinexClock$ClockDataType *self);
          static PyObject *t_RinexClock$ClockDataType_parseClockDataType(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexClock$ClockDataType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_RinexClock$ClockDataType_values(PyTypeObject *type);
          static PyObject *t_RinexClock$ClockDataType_get__key(t_RinexClock$ClockDataType *self, void *data);
          static PyObject *t_RinexClock$ClockDataType_get__parameters_(t_RinexClock$ClockDataType *self, void *data);
          static PyGetSetDef t_RinexClock$ClockDataType__fields_[] = {
            DECLARE_GET_FIELD(t_RinexClock$ClockDataType, key),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexClock$ClockDataType__methods_[] = {
            DECLARE_METHOD(t_RinexClock$ClockDataType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$ClockDataType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$ClockDataType, of_, METH_VARARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataType, getKey, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataType, parseClockDataType, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$ClockDataType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$ClockDataType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexClock$ClockDataType)[] = {
            { Py_tp_methods, t_RinexClock$ClockDataType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RinexClock$ClockDataType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexClock$ClockDataType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(RinexClock$ClockDataType, t_RinexClock$ClockDataType, RinexClock$ClockDataType);
          PyObject *t_RinexClock$ClockDataType::wrap_Object(const RinexClock$ClockDataType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexClock$ClockDataType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexClock$ClockDataType *self = (t_RinexClock$ClockDataType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RinexClock$ClockDataType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexClock$ClockDataType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexClock$ClockDataType *self = (t_RinexClock$ClockDataType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RinexClock$ClockDataType::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexClock$ClockDataType), &PY_TYPE_DEF(RinexClock$ClockDataType), module, "RinexClock$ClockDataType", 0);
          }

          void t_RinexClock$ClockDataType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataType), "class_", make_descriptor(RinexClock$ClockDataType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataType), "wrapfn_", make_descriptor(t_RinexClock$ClockDataType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataType), "boxfn_", make_descriptor(boxObject));
            env->getClass(RinexClock$ClockDataType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataType), "AR", make_descriptor(t_RinexClock$ClockDataType::wrap_Object(*RinexClock$ClockDataType::AR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataType), "AS", make_descriptor(t_RinexClock$ClockDataType::wrap_Object(*RinexClock$ClockDataType::AS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataType), "CR", make_descriptor(t_RinexClock$ClockDataType::wrap_Object(*RinexClock$ClockDataType::CR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataType), "DR", make_descriptor(t_RinexClock$ClockDataType::wrap_Object(*RinexClock$ClockDataType::DR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataType), "MS", make_descriptor(t_RinexClock$ClockDataType::wrap_Object(*RinexClock$ClockDataType::MS)));
          }

          static PyObject *t_RinexClock$ClockDataType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexClock$ClockDataType::initializeClass, 1)))
              return NULL;
            return t_RinexClock$ClockDataType::wrap_Object(RinexClock$ClockDataType(((t_RinexClock$ClockDataType *) arg)->object.this$));
          }
          static PyObject *t_RinexClock$ClockDataType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexClock$ClockDataType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RinexClock$ClockDataType_of_(t_RinexClock$ClockDataType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_RinexClock$ClockDataType_getKey(t_RinexClock$ClockDataType *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getKey());
            return j2p(result);
          }

          static PyObject *t_RinexClock$ClockDataType_parseClockDataType(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            RinexClock$ClockDataType result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::clock::RinexClock$ClockDataType::parseClockDataType(a0));
              return t_RinexClock$ClockDataType::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parseClockDataType", arg);
            return NULL;
          }

          static PyObject *t_RinexClock$ClockDataType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            RinexClock$ClockDataType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::clock::RinexClock$ClockDataType::valueOf(a0));
              return t_RinexClock$ClockDataType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_RinexClock$ClockDataType_values(PyTypeObject *type)
          {
            JArray< RinexClock$ClockDataType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::rinex::clock::RinexClock$ClockDataType::values());
            return JArray<jobject>(result.this$).wrap(t_RinexClock$ClockDataType::wrap_jobject);
          }
          static PyObject *t_RinexClock$ClockDataType_get__parameters_(t_RinexClock$ClockDataType *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_RinexClock$ClockDataType_get__key(t_RinexClock$ClockDataType *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getKey());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/WeibullDistribution.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *WeibullDistribution::class$ = NULL;
        jmethodID *WeibullDistribution::mids$ = NULL;
        bool WeibullDistribution::live$ = false;

        jclass WeibullDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/WeibullDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_7e960cd6eee376d8] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_7e960cd6eee376d8] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getNumericalMean_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getScale_557b8123390d8d0c] = env->getMethodID(cls, "getScale", "()D");
            mids$[mid_getShape_557b8123390d8d0c] = env->getMethodID(cls, "getShape", "()D");
            mids$[mid_getSupportLowerBound_557b8123390d8d0c] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_557b8123390d8d0c] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_7e960cd6eee376d8] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_89b302893bdbe1f1] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_7e960cd6eee376d8] = env->getMethodID(cls, "logDensity", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        WeibullDistribution::WeibullDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

        jdouble WeibullDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_7e960cd6eee376d8], a0);
        }

        jdouble WeibullDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_7e960cd6eee376d8], a0);
        }

        jdouble WeibullDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_557b8123390d8d0c]);
        }

        jdouble WeibullDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_557b8123390d8d0c]);
        }

        jdouble WeibullDistribution::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_557b8123390d8d0c]);
        }

        jdouble WeibullDistribution::getShape() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getShape_557b8123390d8d0c]);
        }

        jdouble WeibullDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_557b8123390d8d0c]);
        }

        jdouble WeibullDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_557b8123390d8d0c]);
        }

        jdouble WeibullDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_7e960cd6eee376d8], a0);
        }

        jboolean WeibullDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_89b302893bdbe1f1]);
        }

        jdouble WeibullDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_7e960cd6eee376d8], a0);
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
        static PyObject *t_WeibullDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_WeibullDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_WeibullDistribution_init_(t_WeibullDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_WeibullDistribution_cumulativeProbability(t_WeibullDistribution *self, PyObject *args);
        static PyObject *t_WeibullDistribution_density(t_WeibullDistribution *self, PyObject *args);
        static PyObject *t_WeibullDistribution_getNumericalMean(t_WeibullDistribution *self, PyObject *args);
        static PyObject *t_WeibullDistribution_getNumericalVariance(t_WeibullDistribution *self, PyObject *args);
        static PyObject *t_WeibullDistribution_getScale(t_WeibullDistribution *self);
        static PyObject *t_WeibullDistribution_getShape(t_WeibullDistribution *self);
        static PyObject *t_WeibullDistribution_getSupportLowerBound(t_WeibullDistribution *self, PyObject *args);
        static PyObject *t_WeibullDistribution_getSupportUpperBound(t_WeibullDistribution *self, PyObject *args);
        static PyObject *t_WeibullDistribution_inverseCumulativeProbability(t_WeibullDistribution *self, PyObject *args);
        static PyObject *t_WeibullDistribution_isSupportConnected(t_WeibullDistribution *self, PyObject *args);
        static PyObject *t_WeibullDistribution_logDensity(t_WeibullDistribution *self, PyObject *args);
        static PyObject *t_WeibullDistribution_get__numericalMean(t_WeibullDistribution *self, void *data);
        static PyObject *t_WeibullDistribution_get__numericalVariance(t_WeibullDistribution *self, void *data);
        static PyObject *t_WeibullDistribution_get__scale(t_WeibullDistribution *self, void *data);
        static PyObject *t_WeibullDistribution_get__shape(t_WeibullDistribution *self, void *data);
        static PyObject *t_WeibullDistribution_get__supportConnected(t_WeibullDistribution *self, void *data);
        static PyObject *t_WeibullDistribution_get__supportLowerBound(t_WeibullDistribution *self, void *data);
        static PyObject *t_WeibullDistribution_get__supportUpperBound(t_WeibullDistribution *self, void *data);
        static PyGetSetDef t_WeibullDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_WeibullDistribution, numericalMean),
          DECLARE_GET_FIELD(t_WeibullDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_WeibullDistribution, scale),
          DECLARE_GET_FIELD(t_WeibullDistribution, shape),
          DECLARE_GET_FIELD(t_WeibullDistribution, supportConnected),
          DECLARE_GET_FIELD(t_WeibullDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_WeibullDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_WeibullDistribution__methods_[] = {
          DECLARE_METHOD(t_WeibullDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_WeibullDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_WeibullDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_WeibullDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_WeibullDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_WeibullDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_WeibullDistribution, getScale, METH_NOARGS),
          DECLARE_METHOD(t_WeibullDistribution, getShape, METH_NOARGS),
          DECLARE_METHOD(t_WeibullDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_WeibullDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_WeibullDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_WeibullDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_WeibullDistribution, logDensity, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(WeibullDistribution)[] = {
          { Py_tp_methods, t_WeibullDistribution__methods_ },
          { Py_tp_init, (void *) t_WeibullDistribution_init_ },
          { Py_tp_getset, t_WeibullDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(WeibullDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(WeibullDistribution, t_WeibullDistribution, WeibullDistribution);

        void t_WeibullDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(WeibullDistribution), &PY_TYPE_DEF(WeibullDistribution), module, "WeibullDistribution", 0);
        }

        void t_WeibullDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(WeibullDistribution), "class_", make_descriptor(WeibullDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(WeibullDistribution), "wrapfn_", make_descriptor(t_WeibullDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(WeibullDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_WeibullDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, WeibullDistribution::initializeClass, 1)))
            return NULL;
          return t_WeibullDistribution::wrap_Object(WeibullDistribution(((t_WeibullDistribution *) arg)->object.this$));
        }
        static PyObject *t_WeibullDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, WeibullDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_WeibullDistribution_init_(t_WeibullDistribution *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          WeibullDistribution object((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            INT_CALL(object = WeibullDistribution(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_WeibullDistribution_cumulativeProbability(t_WeibullDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(WeibullDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_WeibullDistribution_density(t_WeibullDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(WeibullDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_WeibullDistribution_getNumericalMean(t_WeibullDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(WeibullDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_WeibullDistribution_getNumericalVariance(t_WeibullDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(WeibullDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_WeibullDistribution_getScale(t_WeibullDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_WeibullDistribution_getShape(t_WeibullDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getShape());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_WeibullDistribution_getSupportLowerBound(t_WeibullDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(WeibullDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_WeibullDistribution_getSupportUpperBound(t_WeibullDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(WeibullDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_WeibullDistribution_inverseCumulativeProbability(t_WeibullDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(WeibullDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_WeibullDistribution_isSupportConnected(t_WeibullDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(WeibullDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_WeibullDistribution_logDensity(t_WeibullDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(WeibullDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_WeibullDistribution_get__numericalMean(t_WeibullDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_WeibullDistribution_get__numericalVariance(t_WeibullDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_WeibullDistribution_get__scale(t_WeibullDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_WeibullDistribution_get__shape(t_WeibullDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getShape());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_WeibullDistribution_get__supportConnected(t_WeibullDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_WeibullDistribution_get__supportLowerBound(t_WeibullDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_WeibullDistribution_get__supportUpperBound(t_WeibullDistribution *self, void *data)
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
          mids$[mid_getUnderlyingAttitudeProvider_6df6b78ab9377151] = env->getMethodID(cls, "getUnderlyingAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::attitudes::AttitudeProvider AttitudeProviderModifier::getUnderlyingAttitudeProvider() const
      {
        return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getUnderlyingAttitudeProvider_6df6b78ab9377151]));
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
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1020Data.h"
#include "org/orekit/time/TimeScales.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSNavigationMessage.h"
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
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_areAdditionalDataAvailable_89b302893bdbe1f1] = env->getMethodID(cls, "areAdditionalDataAvailable", "()Z");
                  mids$[mid_getBN_412668abc8d889e9] = env->getMethodID(cls, "getBN", "()I");
                  mids$[mid_getDeltaTN_557b8123390d8d0c] = env->getMethodID(cls, "getDeltaTN", "()D");
                  mids$[mid_getEn_412668abc8d889e9] = env->getMethodID(cls, "getEn", "()I");
                  mids$[mid_getFT_412668abc8d889e9] = env->getMethodID(cls, "getFT", "()I");
                  mids$[mid_getGlonassNavigationMessage_5224aff0852264c8] = env->getMethodID(cls, "getGlonassNavigationMessage", "()Lorg/orekit/propagation/analytical/gnss/data/GLONASSNavigationMessage;");
                  mids$[mid_getGlonassNavigationMessage_df267878cf34cf89] = env->getMethodID(cls, "getGlonassNavigationMessage", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/propagation/analytical/gnss/data/GLONASSNavigationMessage;");
                  mids$[mid_getLNFifthString_412668abc8d889e9] = env->getMethodID(cls, "getLNFifthString", "()I");
                  mids$[mid_getLNThirdString_412668abc8d889e9] = env->getMethodID(cls, "getLNThirdString", "()I");
                  mids$[mid_getM_412668abc8d889e9] = env->getMethodID(cls, "getM", "()I");
                  mids$[mid_getN4_412668abc8d889e9] = env->getMethodID(cls, "getN4", "()I");
                  mids$[mid_getNA_412668abc8d889e9] = env->getMethodID(cls, "getNA", "()I");
                  mids$[mid_getNt_412668abc8d889e9] = env->getMethodID(cls, "getNt", "()I");
                  mids$[mid_getP_412668abc8d889e9] = env->getMethodID(cls, "getP", "()I");
                  mids$[mid_getP1_412668abc8d889e9] = env->getMethodID(cls, "getP1", "()I");
                  mids$[mid_getP2_412668abc8d889e9] = env->getMethodID(cls, "getP2", "()I");
                  mids$[mid_getP3_412668abc8d889e9] = env->getMethodID(cls, "getP3", "()I");
                  mids$[mid_getP4_412668abc8d889e9] = env->getMethodID(cls, "getP4", "()I");
                  mids$[mid_getTauC_557b8123390d8d0c] = env->getMethodID(cls, "getTauC", "()D");
                  mids$[mid_getTauGps_557b8123390d8d0c] = env->getMethodID(cls, "getTauGps", "()D");
                  mids$[mid_getTk_557b8123390d8d0c] = env->getMethodID(cls, "getTk", "()D");
                  mids$[mid_isHealthAvailable_89b302893bdbe1f1] = env->getMethodID(cls, "isHealthAvailable", "()Z");
                  mids$[mid_setAreAdditionalDataAvailable_ed2afdb8506b9742] = env->getMethodID(cls, "setAreAdditionalDataAvailable", "(Z)V");
                  mids$[mid_setBN_a3da1a935cb37f7b] = env->getMethodID(cls, "setBN", "(I)V");
                  mids$[mid_setDeltaTN_10f281d777284cea] = env->getMethodID(cls, "setDeltaTN", "(D)V");
                  mids$[mid_setEn_a3da1a935cb37f7b] = env->getMethodID(cls, "setEn", "(I)V");
                  mids$[mid_setFT_a3da1a935cb37f7b] = env->getMethodID(cls, "setFT", "(I)V");
                  mids$[mid_setGlonassNavigationMessage_2ccd3101dfe293f5] = env->getMethodID(cls, "setGlonassNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/GLONASSNavigationMessage;)V");
                  mids$[mid_setHealthAvailabilityIndicator_ed2afdb8506b9742] = env->getMethodID(cls, "setHealthAvailabilityIndicator", "(Z)V");
                  mids$[mid_setLNFifthString_a3da1a935cb37f7b] = env->getMethodID(cls, "setLNFifthString", "(I)V");
                  mids$[mid_setLNThirdString_a3da1a935cb37f7b] = env->getMethodID(cls, "setLNThirdString", "(I)V");
                  mids$[mid_setM_a3da1a935cb37f7b] = env->getMethodID(cls, "setM", "(I)V");
                  mids$[mid_setN4_a3da1a935cb37f7b] = env->getMethodID(cls, "setN4", "(I)V");
                  mids$[mid_setNA_a3da1a935cb37f7b] = env->getMethodID(cls, "setNA", "(I)V");
                  mids$[mid_setNt_a3da1a935cb37f7b] = env->getMethodID(cls, "setNt", "(I)V");
                  mids$[mid_setP_a3da1a935cb37f7b] = env->getMethodID(cls, "setP", "(I)V");
                  mids$[mid_setP1_a3da1a935cb37f7b] = env->getMethodID(cls, "setP1", "(I)V");
                  mids$[mid_setP2_a3da1a935cb37f7b] = env->getMethodID(cls, "setP2", "(I)V");
                  mids$[mid_setP3_a3da1a935cb37f7b] = env->getMethodID(cls, "setP3", "(I)V");
                  mids$[mid_setP4_a3da1a935cb37f7b] = env->getMethodID(cls, "setP4", "(I)V");
                  mids$[mid_setTauC_10f281d777284cea] = env->getMethodID(cls, "setTauC", "(D)V");
                  mids$[mid_setTauGps_10f281d777284cea] = env->getMethodID(cls, "setTauGps", "(D)V");
                  mids$[mid_setTk_10f281d777284cea] = env->getMethodID(cls, "setTk", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1020Data::Rtcm1020Data() : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              jboolean Rtcm1020Data::areAdditionalDataAvailable() const
              {
                return env->callBooleanMethod(this$, mids$[mid_areAdditionalDataAvailable_89b302893bdbe1f1]);
              }

              jint Rtcm1020Data::getBN() const
              {
                return env->callIntMethod(this$, mids$[mid_getBN_412668abc8d889e9]);
              }

              jdouble Rtcm1020Data::getDeltaTN() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDeltaTN_557b8123390d8d0c]);
              }

              jint Rtcm1020Data::getEn() const
              {
                return env->callIntMethod(this$, mids$[mid_getEn_412668abc8d889e9]);
              }

              jint Rtcm1020Data::getFT() const
              {
                return env->callIntMethod(this$, mids$[mid_getFT_412668abc8d889e9]);
              }

              ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage Rtcm1020Data::getGlonassNavigationMessage() const
              {
                return ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage(env->callObjectMethod(this$, mids$[mid_getGlonassNavigationMessage_5224aff0852264c8]));
              }

              ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage Rtcm1020Data::getGlonassNavigationMessage(const ::org::orekit::time::TimeScales & a0) const
              {
                return ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage(env->callObjectMethod(this$, mids$[mid_getGlonassNavigationMessage_df267878cf34cf89], a0.this$));
              }

              jint Rtcm1020Data::getLNFifthString() const
              {
                return env->callIntMethod(this$, mids$[mid_getLNFifthString_412668abc8d889e9]);
              }

              jint Rtcm1020Data::getLNThirdString() const
              {
                return env->callIntMethod(this$, mids$[mid_getLNThirdString_412668abc8d889e9]);
              }

              jint Rtcm1020Data::getM() const
              {
                return env->callIntMethod(this$, mids$[mid_getM_412668abc8d889e9]);
              }

              jint Rtcm1020Data::getN4() const
              {
                return env->callIntMethod(this$, mids$[mid_getN4_412668abc8d889e9]);
              }

              jint Rtcm1020Data::getNA() const
              {
                return env->callIntMethod(this$, mids$[mid_getNA_412668abc8d889e9]);
              }

              jint Rtcm1020Data::getNt() const
              {
                return env->callIntMethod(this$, mids$[mid_getNt_412668abc8d889e9]);
              }

              jint Rtcm1020Data::getP() const
              {
                return env->callIntMethod(this$, mids$[mid_getP_412668abc8d889e9]);
              }

              jint Rtcm1020Data::getP1() const
              {
                return env->callIntMethod(this$, mids$[mid_getP1_412668abc8d889e9]);
              }

              jint Rtcm1020Data::getP2() const
              {
                return env->callIntMethod(this$, mids$[mid_getP2_412668abc8d889e9]);
              }

              jint Rtcm1020Data::getP3() const
              {
                return env->callIntMethod(this$, mids$[mid_getP3_412668abc8d889e9]);
              }

              jint Rtcm1020Data::getP4() const
              {
                return env->callIntMethod(this$, mids$[mid_getP4_412668abc8d889e9]);
              }

              jdouble Rtcm1020Data::getTauC() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTauC_557b8123390d8d0c]);
              }

              jdouble Rtcm1020Data::getTauGps() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTauGps_557b8123390d8d0c]);
              }

              jdouble Rtcm1020Data::getTk() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTk_557b8123390d8d0c]);
              }

              jboolean Rtcm1020Data::isHealthAvailable() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isHealthAvailable_89b302893bdbe1f1]);
              }

              void Rtcm1020Data::setAreAdditionalDataAvailable(jboolean a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAreAdditionalDataAvailable_ed2afdb8506b9742], a0);
              }

              void Rtcm1020Data::setBN(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setBN_a3da1a935cb37f7b], a0);
              }

              void Rtcm1020Data::setDeltaTN(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeltaTN_10f281d777284cea], a0);
              }

              void Rtcm1020Data::setEn(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEn_a3da1a935cb37f7b], a0);
              }

              void Rtcm1020Data::setFT(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFT_a3da1a935cb37f7b], a0);
              }

              void Rtcm1020Data::setGlonassNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGlonassNavigationMessage_2ccd3101dfe293f5], a0.this$);
              }

              void Rtcm1020Data::setHealthAvailabilityIndicator(jboolean a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setHealthAvailabilityIndicator_ed2afdb8506b9742], a0);
              }

              void Rtcm1020Data::setLNFifthString(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setLNFifthString_a3da1a935cb37f7b], a0);
              }

              void Rtcm1020Data::setLNThirdString(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setLNThirdString_a3da1a935cb37f7b], a0);
              }

              void Rtcm1020Data::setM(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setM_a3da1a935cb37f7b], a0);
              }

              void Rtcm1020Data::setN4(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setN4_a3da1a935cb37f7b], a0);
              }

              void Rtcm1020Data::setNA(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNA_a3da1a935cb37f7b], a0);
              }

              void Rtcm1020Data::setNt(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNt_a3da1a935cb37f7b], a0);
              }

              void Rtcm1020Data::setP(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setP_a3da1a935cb37f7b], a0);
              }

              void Rtcm1020Data::setP1(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setP1_a3da1a935cb37f7b], a0);
              }

              void Rtcm1020Data::setP2(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setP2_a3da1a935cb37f7b], a0);
              }

              void Rtcm1020Data::setP3(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setP3_a3da1a935cb37f7b], a0);
              }

              void Rtcm1020Data::setP4(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setP4_a3da1a935cb37f7b], a0);
              }

              void Rtcm1020Data::setTauC(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTauC_10f281d777284cea], a0);
              }

              void Rtcm1020Data::setTauGps(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTauGps_10f281d777284cea], a0);
              }

              void Rtcm1020Data::setTk(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTk_10f281d777284cea], a0);
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
#include "org/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/SpinStabilized.h"
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

              ::java::lang::Class *SpinStabilizedKey::class$ = NULL;
              jmethodID *SpinStabilizedKey::mids$ = NULL;
              bool SpinStabilizedKey::live$ = false;
              SpinStabilizedKey *SpinStabilizedKey::COMMENT = NULL;
              SpinStabilizedKey *SpinStabilizedKey::MOMENTUM_ALPHA = NULL;
              SpinStabilizedKey *SpinStabilizedKey::MOMENTUM_DELTA = NULL;
              SpinStabilizedKey *SpinStabilizedKey::NUTATION = NULL;
              SpinStabilizedKey *SpinStabilizedKey::NUTATION_PER = NULL;
              SpinStabilizedKey *SpinStabilizedKey::NUTATION_PHASE = NULL;
              SpinStabilizedKey *SpinStabilizedKey::NUTATION_VEL = NULL;
              SpinStabilizedKey *SpinStabilizedKey::REF_FRAME_A = NULL;
              SpinStabilizedKey *SpinStabilizedKey::REF_FRAME_B = NULL;
              SpinStabilizedKey *SpinStabilizedKey::SPIN_ALPHA = NULL;
              SpinStabilizedKey *SpinStabilizedKey::SPIN_ANGLE = NULL;
              SpinStabilizedKey *SpinStabilizedKey::SPIN_ANGLE_VEL = NULL;
              SpinStabilizedKey *SpinStabilizedKey::SPIN_DELTA = NULL;
              SpinStabilizedKey *SpinStabilizedKey::SPIN_DIR = NULL;
              SpinStabilizedKey *SpinStabilizedKey::SPIN_FRAME_A = NULL;
              SpinStabilizedKey *SpinStabilizedKey::SPIN_FRAME_B = NULL;

              jclass SpinStabilizedKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_8dbffe5ea19f8465] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilized;)Z");
                  mids$[mid_valueOf_3ca1c4d3a2d7eaa2] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;");
                  mids$[mid_values_6cf7e92116b69138] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COMMENT = new SpinStabilizedKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  MOMENTUM_ALPHA = new SpinStabilizedKey(env->getStaticObjectField(cls, "MOMENTUM_ALPHA", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  MOMENTUM_DELTA = new SpinStabilizedKey(env->getStaticObjectField(cls, "MOMENTUM_DELTA", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  NUTATION = new SpinStabilizedKey(env->getStaticObjectField(cls, "NUTATION", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  NUTATION_PER = new SpinStabilizedKey(env->getStaticObjectField(cls, "NUTATION_PER", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  NUTATION_PHASE = new SpinStabilizedKey(env->getStaticObjectField(cls, "NUTATION_PHASE", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  NUTATION_VEL = new SpinStabilizedKey(env->getStaticObjectField(cls, "NUTATION_VEL", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  REF_FRAME_A = new SpinStabilizedKey(env->getStaticObjectField(cls, "REF_FRAME_A", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  REF_FRAME_B = new SpinStabilizedKey(env->getStaticObjectField(cls, "REF_FRAME_B", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  SPIN_ALPHA = new SpinStabilizedKey(env->getStaticObjectField(cls, "SPIN_ALPHA", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  SPIN_ANGLE = new SpinStabilizedKey(env->getStaticObjectField(cls, "SPIN_ANGLE", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  SPIN_ANGLE_VEL = new SpinStabilizedKey(env->getStaticObjectField(cls, "SPIN_ANGLE_VEL", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  SPIN_DELTA = new SpinStabilizedKey(env->getStaticObjectField(cls, "SPIN_DELTA", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  SPIN_DIR = new SpinStabilizedKey(env->getStaticObjectField(cls, "SPIN_DIR", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  SPIN_FRAME_A = new SpinStabilizedKey(env->getStaticObjectField(cls, "SPIN_FRAME_A", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  SPIN_FRAME_B = new SpinStabilizedKey(env->getStaticObjectField(cls, "SPIN_FRAME_B", "Lorg/orekit/files/ccsds/ndm/adm/apm/SpinStabilizedKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean SpinStabilizedKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_8dbffe5ea19f8465], a0.this$, a1.this$, a2.this$);
              }

              SpinStabilizedKey SpinStabilizedKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return SpinStabilizedKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_3ca1c4d3a2d7eaa2], a0.this$));
              }

              JArray< SpinStabilizedKey > SpinStabilizedKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< SpinStabilizedKey >(env->callStaticObjectMethod(cls, mids$[mid_values_6cf7e92116b69138]));
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
              static PyObject *t_SpinStabilizedKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SpinStabilizedKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SpinStabilizedKey_of_(t_SpinStabilizedKey *self, PyObject *args);
              static PyObject *t_SpinStabilizedKey_process(t_SpinStabilizedKey *self, PyObject *args);
              static PyObject *t_SpinStabilizedKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_SpinStabilizedKey_values(PyTypeObject *type);
              static PyObject *t_SpinStabilizedKey_get__parameters_(t_SpinStabilizedKey *self, void *data);
              static PyGetSetDef t_SpinStabilizedKey__fields_[] = {
                DECLARE_GET_FIELD(t_SpinStabilizedKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SpinStabilizedKey__methods_[] = {
                DECLARE_METHOD(t_SpinStabilizedKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SpinStabilizedKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SpinStabilizedKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_SpinStabilizedKey, process, METH_VARARGS),
                DECLARE_METHOD(t_SpinStabilizedKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_SpinStabilizedKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SpinStabilizedKey)[] = {
                { Py_tp_methods, t_SpinStabilizedKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_SpinStabilizedKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SpinStabilizedKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(SpinStabilizedKey, t_SpinStabilizedKey, SpinStabilizedKey);
              PyObject *t_SpinStabilizedKey::wrap_Object(const SpinStabilizedKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_SpinStabilizedKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SpinStabilizedKey *self = (t_SpinStabilizedKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_SpinStabilizedKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_SpinStabilizedKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SpinStabilizedKey *self = (t_SpinStabilizedKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_SpinStabilizedKey::install(PyObject *module)
              {
                installType(&PY_TYPE(SpinStabilizedKey), &PY_TYPE_DEF(SpinStabilizedKey), module, "SpinStabilizedKey", 0);
              }

              void t_SpinStabilizedKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "class_", make_descriptor(SpinStabilizedKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "wrapfn_", make_descriptor(t_SpinStabilizedKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(SpinStabilizedKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "COMMENT", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "MOMENTUM_ALPHA", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::MOMENTUM_ALPHA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "MOMENTUM_DELTA", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::MOMENTUM_DELTA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "NUTATION", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::NUTATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "NUTATION_PER", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::NUTATION_PER)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "NUTATION_PHASE", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::NUTATION_PHASE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "NUTATION_VEL", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::NUTATION_VEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "REF_FRAME_A", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::REF_FRAME_A)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "REF_FRAME_B", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::REF_FRAME_B)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "SPIN_ALPHA", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::SPIN_ALPHA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "SPIN_ANGLE", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::SPIN_ANGLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "SPIN_ANGLE_VEL", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::SPIN_ANGLE_VEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "SPIN_DELTA", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::SPIN_DELTA)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "SPIN_DIR", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::SPIN_DIR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "SPIN_FRAME_A", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::SPIN_FRAME_A)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilizedKey), "SPIN_FRAME_B", make_descriptor(t_SpinStabilizedKey::wrap_Object(*SpinStabilizedKey::SPIN_FRAME_B)));
              }

              static PyObject *t_SpinStabilizedKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SpinStabilizedKey::initializeClass, 1)))
                  return NULL;
                return t_SpinStabilizedKey::wrap_Object(SpinStabilizedKey(((t_SpinStabilizedKey *) arg)->object.this$));
              }
              static PyObject *t_SpinStabilizedKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SpinStabilizedKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_SpinStabilizedKey_of_(t_SpinStabilizedKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_SpinStabilizedKey_process(t_SpinStabilizedKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilized::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_SpinStabilizedKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                SpinStabilizedKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilizedKey::valueOf(a0));
                  return t_SpinStabilizedKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_SpinStabilizedKey_values(PyTypeObject *type)
              {
                JArray< SpinStabilizedKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::SpinStabilizedKey::values());
                return JArray<jobject>(result.this$).wrap(t_SpinStabilizedKey::wrap_jobject);
              }
              static PyObject *t_SpinStabilizedKey_get__parameters_(t_SpinStabilizedKey *self, void *data)
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
#include "org/orekit/frames/L1TransformProvider.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/StaticTransform.h"
#include "org/orekit/frames/FieldTransform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *L1TransformProvider::class$ = NULL;
      jmethodID *L1TransformProvider::mids$ = NULL;
      bool L1TransformProvider::live$ = false;

      jclass L1TransformProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/L1TransformProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_9a72c2af019e2130] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;Lorg/orekit/bodies/CelestialBody;)V");
          mids$[mid_getStaticTransform_7265a2d9c3b9a38a] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getStaticTransform_68fd5b9bb9184393] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getTransform_df04e3927954349e] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_e70631ba002d9a32] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      L1TransformProvider::L1TransformProvider(const ::org::orekit::bodies::CelestialBody & a0, const ::org::orekit::bodies::CelestialBody & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9a72c2af019e2130, a0.this$, a1.this$)) {}

      ::org::orekit::frames::StaticTransform L1TransformProvider::getStaticTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_7265a2d9c3b9a38a], a0.this$));
      }

      ::org::orekit::frames::FieldStaticTransform L1TransformProvider::getStaticTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_68fd5b9bb9184393], a0.this$));
      }

      ::org::orekit::frames::Transform L1TransformProvider::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_df04e3927954349e], a0.this$));
      }

      ::org::orekit::frames::FieldTransform L1TransformProvider::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_e70631ba002d9a32], a0.this$));
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
      static PyObject *t_L1TransformProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_L1TransformProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_L1TransformProvider_init_(t_L1TransformProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_L1TransformProvider_getStaticTransform(t_L1TransformProvider *self, PyObject *args);
      static PyObject *t_L1TransformProvider_getTransform(t_L1TransformProvider *self, PyObject *args);

      static PyMethodDef t_L1TransformProvider__methods_[] = {
        DECLARE_METHOD(t_L1TransformProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_L1TransformProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_L1TransformProvider, getStaticTransform, METH_VARARGS),
        DECLARE_METHOD(t_L1TransformProvider, getTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(L1TransformProvider)[] = {
        { Py_tp_methods, t_L1TransformProvider__methods_ },
        { Py_tp_init, (void *) t_L1TransformProvider_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(L1TransformProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(L1TransformProvider, t_L1TransformProvider, L1TransformProvider);

      void t_L1TransformProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(L1TransformProvider), &PY_TYPE_DEF(L1TransformProvider), module, "L1TransformProvider", 0);
      }

      void t_L1TransformProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(L1TransformProvider), "class_", make_descriptor(L1TransformProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(L1TransformProvider), "wrapfn_", make_descriptor(t_L1TransformProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(L1TransformProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_L1TransformProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, L1TransformProvider::initializeClass, 1)))
          return NULL;
        return t_L1TransformProvider::wrap_Object(L1TransformProvider(((t_L1TransformProvider *) arg)->object.this$));
      }
      static PyObject *t_L1TransformProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, L1TransformProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_L1TransformProvider_init_(t_L1TransformProvider *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
        L1TransformProvider object((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1))
        {
          INT_CALL(object = L1TransformProvider(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_L1TransformProvider_getStaticTransform(t_L1TransformProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::StaticTransform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getStaticTransform", args);
        return NULL;
      }

      static PyObject *t_L1TransformProvider_getTransform(t_L1TransformProvider *self, PyObject *args)
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
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmParser.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *XmlSubStructureKey::class$ = NULL;
            jmethodID *XmlSubStructureKey::mids$ = NULL;
            bool XmlSubStructureKey::live$ = false;
            XmlSubStructureKey *XmlSubStructureKey::COMMENT = NULL;
            XmlSubStructureKey *XmlSubStructureKey::additionalParameters = NULL;
            XmlSubStructureKey *XmlSubStructureKey::covarianceMatrix = NULL;
            XmlSubStructureKey *XmlSubStructureKey::odParameters = NULL;
            XmlSubStructureKey *XmlSubStructureKey::relativeMetadataData = NULL;
            XmlSubStructureKey *XmlSubStructureKey::relativeStateVector = NULL;
            XmlSubStructureKey *XmlSubStructureKey::segment = NULL;
            XmlSubStructureKey *XmlSubStructureKey::stateVector = NULL;
            XmlSubStructureKey *XmlSubStructureKey::userDefinedParameters = NULL;

            jclass XmlSubStructureKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_33a9b71b74be7008] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/ndm/cdm/CdmParser;)Z");
                mids$[mid_valueOf_d468866fd61e938a] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;");
                mids$[mid_values_de9a49671004f1a1] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                COMMENT = new XmlSubStructureKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;"));
                additionalParameters = new XmlSubStructureKey(env->getStaticObjectField(cls, "additionalParameters", "Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;"));
                covarianceMatrix = new XmlSubStructureKey(env->getStaticObjectField(cls, "covarianceMatrix", "Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;"));
                odParameters = new XmlSubStructureKey(env->getStaticObjectField(cls, "odParameters", "Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;"));
                relativeMetadataData = new XmlSubStructureKey(env->getStaticObjectField(cls, "relativeMetadataData", "Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;"));
                relativeStateVector = new XmlSubStructureKey(env->getStaticObjectField(cls, "relativeStateVector", "Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;"));
                segment = new XmlSubStructureKey(env->getStaticObjectField(cls, "segment", "Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;"));
                stateVector = new XmlSubStructureKey(env->getStaticObjectField(cls, "stateVector", "Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;"));
                userDefinedParameters = new XmlSubStructureKey(env->getStaticObjectField(cls, "userDefinedParameters", "Lorg/orekit/files/ccsds/ndm/cdm/XmlSubStructureKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean XmlSubStructureKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::ndm::cdm::CdmParser & a1) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_33a9b71b74be7008], a0.this$, a1.this$);
            }

            XmlSubStructureKey XmlSubStructureKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return XmlSubStructureKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_d468866fd61e938a], a0.this$));
            }

            JArray< XmlSubStructureKey > XmlSubStructureKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< XmlSubStructureKey >(env->callStaticObjectMethod(cls, mids$[mid_values_de9a49671004f1a1]));
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
            static PyObject *t_XmlSubStructureKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_XmlSubStructureKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_XmlSubStructureKey_of_(t_XmlSubStructureKey *self, PyObject *args);
            static PyObject *t_XmlSubStructureKey_process(t_XmlSubStructureKey *self, PyObject *args);
            static PyObject *t_XmlSubStructureKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_XmlSubStructureKey_values(PyTypeObject *type);
            static PyObject *t_XmlSubStructureKey_get__parameters_(t_XmlSubStructureKey *self, void *data);
            static PyGetSetDef t_XmlSubStructureKey__fields_[] = {
              DECLARE_GET_FIELD(t_XmlSubStructureKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_XmlSubStructureKey__methods_[] = {
              DECLARE_METHOD(t_XmlSubStructureKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XmlSubStructureKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XmlSubStructureKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_XmlSubStructureKey, process, METH_VARARGS),
              DECLARE_METHOD(t_XmlSubStructureKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_XmlSubStructureKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(XmlSubStructureKey)[] = {
              { Py_tp_methods, t_XmlSubStructureKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_XmlSubStructureKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(XmlSubStructureKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(XmlSubStructureKey, t_XmlSubStructureKey, XmlSubStructureKey);
            PyObject *t_XmlSubStructureKey::wrap_Object(const XmlSubStructureKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_XmlSubStructureKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_XmlSubStructureKey *self = (t_XmlSubStructureKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_XmlSubStructureKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_XmlSubStructureKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_XmlSubStructureKey *self = (t_XmlSubStructureKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_XmlSubStructureKey::install(PyObject *module)
            {
              installType(&PY_TYPE(XmlSubStructureKey), &PY_TYPE_DEF(XmlSubStructureKey), module, "XmlSubStructureKey", 0);
            }

            void t_XmlSubStructureKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "class_", make_descriptor(XmlSubStructureKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "wrapfn_", make_descriptor(t_XmlSubStructureKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(XmlSubStructureKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "COMMENT", make_descriptor(t_XmlSubStructureKey::wrap_Object(*XmlSubStructureKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "additionalParameters", make_descriptor(t_XmlSubStructureKey::wrap_Object(*XmlSubStructureKey::additionalParameters)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "covarianceMatrix", make_descriptor(t_XmlSubStructureKey::wrap_Object(*XmlSubStructureKey::covarianceMatrix)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "odParameters", make_descriptor(t_XmlSubStructureKey::wrap_Object(*XmlSubStructureKey::odParameters)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "relativeMetadataData", make_descriptor(t_XmlSubStructureKey::wrap_Object(*XmlSubStructureKey::relativeMetadataData)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "relativeStateVector", make_descriptor(t_XmlSubStructureKey::wrap_Object(*XmlSubStructureKey::relativeStateVector)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "segment", make_descriptor(t_XmlSubStructureKey::wrap_Object(*XmlSubStructureKey::segment)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "stateVector", make_descriptor(t_XmlSubStructureKey::wrap_Object(*XmlSubStructureKey::stateVector)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlSubStructureKey), "userDefinedParameters", make_descriptor(t_XmlSubStructureKey::wrap_Object(*XmlSubStructureKey::userDefinedParameters)));
            }

            static PyObject *t_XmlSubStructureKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, XmlSubStructureKey::initializeClass, 1)))
                return NULL;
              return t_XmlSubStructureKey::wrap_Object(XmlSubStructureKey(((t_XmlSubStructureKey *) arg)->object.this$));
            }
            static PyObject *t_XmlSubStructureKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, XmlSubStructureKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_XmlSubStructureKey_of_(t_XmlSubStructureKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_XmlSubStructureKey_process(t_XmlSubStructureKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::CdmParser a1((jobject) NULL);
              PyTypeObject **p1;
              jboolean result;

              if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::CdmParser::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::cdm::t_CdmParser::parameters_))
              {
                OBJ_CALL(result = self->object.process(a0, a1));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_XmlSubStructureKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              XmlSubStructureKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::XmlSubStructureKey::valueOf(a0));
                return t_XmlSubStructureKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_XmlSubStructureKey_values(PyTypeObject *type)
            {
              JArray< XmlSubStructureKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::XmlSubStructureKey::values());
              return JArray<jobject>(result.this$).wrap(t_XmlSubStructureKey::wrap_jobject);
            }
            static PyObject *t_XmlSubStructureKey_get__parameters_(t_XmlSubStructureKey *self, void *data)
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
#include "org/hipparchus/complex/FieldComplex.h"
#include "java/util/List.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/complex/FieldComplexField.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/complex/FieldComplex.h"
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
          mids$[mid_init$_1ee4bed350fde589] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_b38c15e176684020] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_abs_bfc6d3bb8e8278b9] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_acos_bfc6d3bb8e8278b9] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_acosh_bfc6d3bb8e8278b9] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_add_285633f17a3543fe] = env->getMethodID(cls, "add", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_add_e2d5da6df3932ed5] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_add_f57793921fab57ff] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_asin_bfc6d3bb8e8278b9] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_asinh_bfc6d3bb8e8278b9] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_atan_bfc6d3bb8e8278b9] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_atan2_285633f17a3543fe] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_atanh_bfc6d3bb8e8278b9] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_cbrt_bfc6d3bb8e8278b9] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_ceil_bfc6d3bb8e8278b9] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_conjugate_bfc6d3bb8e8278b9] = env->getMethodID(cls, "conjugate", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_copySign_285633f17a3543fe] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_copySign_e2d5da6df3932ed5] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_cos_bfc6d3bb8e8278b9] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_cosh_bfc6d3bb8e8278b9] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_divide_285633f17a3543fe] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_divide_e2d5da6df3932ed5] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_divide_f57793921fab57ff] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_equals_b64f7b86ea42933f] = env->getStaticMethodID(cls, "equals", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Z");
          mids$[mid_equals_8c1c5bfb62ec9e77] = env->getStaticMethodID(cls, "equals", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;D)Z");
          mids$[mid_equals_aa36df59778a2741] = env->getStaticMethodID(cls, "equals", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;I)Z");
          mids$[mid_equalsWithRelativeTolerance_8c1c5bfb62ec9e77] = env->getStaticMethodID(cls, "equalsWithRelativeTolerance", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;D)Z");
          mids$[mid_exp_bfc6d3bb8e8278b9] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_expm1_bfc6d3bb8e8278b9] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_floor_bfc6d3bb8e8278b9] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getArgument_613c8f46c659f636] = env->getMethodID(cls, "getArgument", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getField_e375492fc5089ec2] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/complex/FieldComplexField;");
          mids$[mid_getI_3c0a641df62d761b] = env->getStaticMethodID(cls, "getI", "(Lorg/hipparchus/Field;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getImaginary_613c8f46c659f636] = env->getMethodID(cls, "getImaginary", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getImaginaryPart_613c8f46c659f636] = env->getMethodID(cls, "getImaginaryPart", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getInf_3c0a641df62d761b] = env->getStaticMethodID(cls, "getInf", "(Lorg/hipparchus/Field;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getMinusI_3c0a641df62d761b] = env->getStaticMethodID(cls, "getMinusI", "(Lorg/hipparchus/Field;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getMinusOne_3c0a641df62d761b] = env->getStaticMethodID(cls, "getMinusOne", "(Lorg/hipparchus/Field;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getNaN_3c0a641df62d761b] = env->getStaticMethodID(cls, "getNaN", "(Lorg/hipparchus/Field;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getOne_3c0a641df62d761b] = env->getStaticMethodID(cls, "getOne", "(Lorg/hipparchus/Field;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getPartsField_20f98801541dcec1] = env->getMethodID(cls, "getPartsField", "()Lorg/hipparchus/Field;");
          mids$[mid_getPi_bfc6d3bb8e8278b9] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getPi_3c0a641df62d761b] = env->getStaticMethodID(cls, "getPi", "(Lorg/hipparchus/Field;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getReal_557b8123390d8d0c] = env->getMethodID(cls, "getReal", "()D");
          mids$[mid_getRealPart_613c8f46c659f636] = env->getMethodID(cls, "getRealPart", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getZero_3c0a641df62d761b] = env->getStaticMethodID(cls, "getZero", "(Lorg/hipparchus/Field;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_hypot_285633f17a3543fe] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_isInfinite_89b302893bdbe1f1] = env->getMethodID(cls, "isInfinite", "()Z");
          mids$[mid_isMathematicalInteger_89b302893bdbe1f1] = env->getMethodID(cls, "isMathematicalInteger", "()Z");
          mids$[mid_isNaN_89b302893bdbe1f1] = env->getMethodID(cls, "isNaN", "()Z");
          mids$[mid_isReal_89b302893bdbe1f1] = env->getMethodID(cls, "isReal", "()Z");
          mids$[mid_isZero_89b302893bdbe1f1] = env->getMethodID(cls, "isZero", "()Z");
          mids$[mid_linearCombination_562358f2140bc648] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_linearCombination_4dbefbb8e4f1b04f] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/complex/FieldComplex;[Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_linearCombination_bb0e7d413a12990c] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_linearCombination_254e1bef073dfc8a] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/complex/FieldComplex;DLorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_linearCombination_3ece5534ccd4ad08] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_linearCombination_6061ea88f7be0c2f] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/complex/FieldComplex;DLorg/hipparchus/complex/FieldComplex;DLorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_linearCombination_7e3492abfbd5981e] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_linearCombination_2828fd2c1f08d0c5] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/complex/FieldComplex;DLorg/hipparchus/complex/FieldComplex;DLorg/hipparchus/complex/FieldComplex;DLorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_log_bfc6d3bb8e8278b9] = env->getMethodID(cls, "log", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_log10_bfc6d3bb8e8278b9] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_log1p_bfc6d3bb8e8278b9] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_multiply_285633f17a3543fe] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_multiply_e2d5da6df3932ed5] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_multiply_508bc7943661469d] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_multiply_f57793921fab57ff] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_multiplyMinusI_bfc6d3bb8e8278b9] = env->getMethodID(cls, "multiplyMinusI", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_multiplyPlusI_bfc6d3bb8e8278b9] = env->getMethodID(cls, "multiplyPlusI", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_negate_bfc6d3bb8e8278b9] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_newInstance_e2d5da6df3932ed5] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_nthRoot_da0a0ad213c4fa7f] = env->getMethodID(cls, "nthRoot", "(I)Ljava/util/List;");
          mids$[mid_pow_285633f17a3543fe] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_pow_e2d5da6df3932ed5] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_pow_508bc7943661469d] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_pow_f57793921fab57ff] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_reciprocal_bfc6d3bb8e8278b9] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_remainder_285633f17a3543fe] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_remainder_e2d5da6df3932ed5] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_rint_bfc6d3bb8e8278b9] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_rootN_508bc7943661469d] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_scalb_508bc7943661469d] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_sign_bfc6d3bb8e8278b9] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_sin_bfc6d3bb8e8278b9] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_sinCos_5efdd92d175db117] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
          mids$[mid_sinh_bfc6d3bb8e8278b9] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_sinhCosh_e5a948cfec461975] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
          mids$[mid_sqrt_bfc6d3bb8e8278b9] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_sqrt1z_bfc6d3bb8e8278b9] = env->getMethodID(cls, "sqrt1z", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_subtract_285633f17a3543fe] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_subtract_e2d5da6df3932ed5] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_subtract_f57793921fab57ff] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_tan_bfc6d3bb8e8278b9] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_tanh_bfc6d3bb8e8278b9] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_toDegrees_bfc6d3bb8e8278b9] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_toRadians_bfc6d3bb8e8278b9] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_ulp_bfc6d3bb8e8278b9] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_valueOf_f57793921fab57ff] = env->getStaticMethodID(cls, "valueOf", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_valueOf_e9dc5bca1487ec04] = env->getStaticMethodID(cls, "valueOf", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_createComplex_e9dc5bca1487ec04] = env->getMethodID(cls, "createComplex", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/complex/FieldComplex;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldComplex::FieldComplex(const ::org::hipparchus::CalculusFieldElement & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1ee4bed350fde589, a0.this$)) {}

      FieldComplex::FieldComplex(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b38c15e176684020, a0.this$, a1.this$)) {}

      FieldComplex FieldComplex::abs() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_abs_bfc6d3bb8e8278b9]));
      }

      FieldComplex FieldComplex::acos() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_acos_bfc6d3bb8e8278b9]));
      }

      FieldComplex FieldComplex::acosh() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_acosh_bfc6d3bb8e8278b9]));
      }

      FieldComplex FieldComplex::add(const FieldComplex & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_add_285633f17a3543fe], a0.this$));
      }

      FieldComplex FieldComplex::add(jdouble a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_add_e2d5da6df3932ed5], a0));
      }

      FieldComplex FieldComplex::add(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_add_f57793921fab57ff], a0.this$));
      }

      FieldComplex FieldComplex::asin() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_asin_bfc6d3bb8e8278b9]));
      }

      FieldComplex FieldComplex::asinh() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_asinh_bfc6d3bb8e8278b9]));
      }

      FieldComplex FieldComplex::atan() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_atan_bfc6d3bb8e8278b9]));
      }

      FieldComplex FieldComplex::atan2(const FieldComplex & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_atan2_285633f17a3543fe], a0.this$));
      }

      FieldComplex FieldComplex::atanh() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_atanh_bfc6d3bb8e8278b9]));
      }

      FieldComplex FieldComplex::cbrt() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_cbrt_bfc6d3bb8e8278b9]));
      }

      FieldComplex FieldComplex::ceil() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_ceil_bfc6d3bb8e8278b9]));
      }

      FieldComplex FieldComplex::conjugate() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_conjugate_bfc6d3bb8e8278b9]));
      }

      FieldComplex FieldComplex::copySign(const FieldComplex & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_copySign_285633f17a3543fe], a0.this$));
      }

      FieldComplex FieldComplex::copySign(jdouble a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_copySign_e2d5da6df3932ed5], a0));
      }

      FieldComplex FieldComplex::cos() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_cos_bfc6d3bb8e8278b9]));
      }

      FieldComplex FieldComplex::cosh() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_cosh_bfc6d3bb8e8278b9]));
      }

      FieldComplex FieldComplex::divide(const FieldComplex & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_divide_285633f17a3543fe], a0.this$));
      }

      FieldComplex FieldComplex::divide(jdouble a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_divide_e2d5da6df3932ed5], a0));
      }

      FieldComplex FieldComplex::divide(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_divide_f57793921fab57ff], a0.this$));
      }

      jboolean FieldComplex::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
      }

      jboolean FieldComplex::equals(const FieldComplex & a0, const FieldComplex & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_b64f7b86ea42933f], a0.this$, a1.this$);
      }

      jboolean FieldComplex::equals(const FieldComplex & a0, const FieldComplex & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_8c1c5bfb62ec9e77], a0.this$, a1.this$, a2);
      }

      jboolean FieldComplex::equals(const FieldComplex & a0, const FieldComplex & a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_aa36df59778a2741], a0.this$, a1.this$, a2);
      }

      jboolean FieldComplex::equalsWithRelativeTolerance(const FieldComplex & a0, const FieldComplex & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsWithRelativeTolerance_8c1c5bfb62ec9e77], a0.this$, a1.this$, a2);
      }

      FieldComplex FieldComplex::exp() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_exp_bfc6d3bb8e8278b9]));
      }

      FieldComplex FieldComplex::expm1() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_expm1_bfc6d3bb8e8278b9]));
      }

      FieldComplex FieldComplex::floor() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_floor_bfc6d3bb8e8278b9]));
      }

      ::org::hipparchus::CalculusFieldElement FieldComplex::getArgument() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getArgument_613c8f46c659f636]));
      }

      ::org::hipparchus::complex::FieldComplexField FieldComplex::getField() const
      {
        return ::org::hipparchus::complex::FieldComplexField(env->callObjectMethod(this$, mids$[mid_getField_e375492fc5089ec2]));
      }

      FieldComplex FieldComplex::getI(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_getI_3c0a641df62d761b], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldComplex::getImaginary() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getImaginary_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldComplex::getImaginaryPart() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getImaginaryPart_613c8f46c659f636]));
      }

      FieldComplex FieldComplex::getInf(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_getInf_3c0a641df62d761b], a0.this$));
      }

      FieldComplex FieldComplex::getMinusI(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_getMinusI_3c0a641df62d761b], a0.this$));
      }

      FieldComplex FieldComplex::getMinusOne(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_getMinusOne_3c0a641df62d761b], a0.this$));
      }

      FieldComplex FieldComplex::getNaN(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_getNaN_3c0a641df62d761b], a0.this$));
      }

      FieldComplex FieldComplex::getOne(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_getOne_3c0a641df62d761b], a0.this$));
      }

      ::org::hipparchus::Field FieldComplex::getPartsField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getPartsField_20f98801541dcec1]));
      }

      FieldComplex FieldComplex::getPi() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_getPi_bfc6d3bb8e8278b9]));
      }

      FieldComplex FieldComplex::getPi(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_getPi_3c0a641df62d761b], a0.this$));
      }

      jdouble FieldComplex::getReal() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_557b8123390d8d0c]);
      }

      ::org::hipparchus::CalculusFieldElement FieldComplex::getRealPart() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRealPart_613c8f46c659f636]));
      }

      FieldComplex FieldComplex::getZero(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_getZero_3c0a641df62d761b], a0.this$));
      }

      jint FieldComplex::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
      }

      FieldComplex FieldComplex::hypot(const FieldComplex & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_hypot_285633f17a3543fe], a0.this$));
      }

      jboolean FieldComplex::isInfinite() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInfinite_89b302893bdbe1f1]);
      }

      jboolean FieldComplex::isMathematicalInteger() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isMathematicalInteger_89b302893bdbe1f1]);
      }

      jboolean FieldComplex::isNaN() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNaN_89b302893bdbe1f1]);
      }

      jboolean FieldComplex::isReal() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isReal_89b302893bdbe1f1]);
      }

      jboolean FieldComplex::isZero() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isZero_89b302893bdbe1f1]);
      }

      FieldComplex FieldComplex::linearCombination(const JArray< jdouble > & a0, const JArray< FieldComplex > & a1) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_linearCombination_562358f2140bc648], a0.this$, a1.this$));
      }

      FieldComplex FieldComplex::linearCombination(const JArray< FieldComplex > & a0, const JArray< FieldComplex > & a1) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_linearCombination_4dbefbb8e4f1b04f], a0.this$, a1.this$));
      }

      FieldComplex FieldComplex::linearCombination(const FieldComplex & a0, const FieldComplex & a1, const FieldComplex & a2, const FieldComplex & a3) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_linearCombination_bb0e7d413a12990c], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      FieldComplex FieldComplex::linearCombination(jdouble a0, const FieldComplex & a1, jdouble a2, const FieldComplex & a3) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_linearCombination_254e1bef073dfc8a], a0, a1.this$, a2, a3.this$));
      }

      FieldComplex FieldComplex::linearCombination(const FieldComplex & a0, const FieldComplex & a1, const FieldComplex & a2, const FieldComplex & a3, const FieldComplex & a4, const FieldComplex & a5) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_linearCombination_3ece5534ccd4ad08], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
      }

      FieldComplex FieldComplex::linearCombination(jdouble a0, const FieldComplex & a1, jdouble a2, const FieldComplex & a3, jdouble a4, const FieldComplex & a5) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_linearCombination_6061ea88f7be0c2f], a0, a1.this$, a2, a3.this$, a4, a5.this$));
      }

      FieldComplex FieldComplex::linearCombination(const FieldComplex & a0, const FieldComplex & a1, const FieldComplex & a2, const FieldComplex & a3, const FieldComplex & a4, const FieldComplex & a5, const FieldComplex & a6, const FieldComplex & a7) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_linearCombination_7e3492abfbd5981e], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
      }

      FieldComplex FieldComplex::linearCombination(jdouble a0, const FieldComplex & a1, jdouble a2, const FieldComplex & a3, jdouble a4, const FieldComplex & a5, jdouble a6, const FieldComplex & a7) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_linearCombination_2828fd2c1f08d0c5], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
      }

      FieldComplex FieldComplex::log() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_log_bfc6d3bb8e8278b9]));
      }

      FieldComplex FieldComplex::log10() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_log10_bfc6d3bb8e8278b9]));
      }

      FieldComplex FieldComplex::log1p() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_log1p_bfc6d3bb8e8278b9]));
      }

      FieldComplex FieldComplex::multiply(const FieldComplex & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_multiply_285633f17a3543fe], a0.this$));
      }

      FieldComplex FieldComplex::multiply(jdouble a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_multiply_e2d5da6df3932ed5], a0));
      }

      FieldComplex FieldComplex::multiply(jint a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_multiply_508bc7943661469d], a0));
      }

      FieldComplex FieldComplex::multiply(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_multiply_f57793921fab57ff], a0.this$));
      }

      FieldComplex FieldComplex::multiplyMinusI() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_multiplyMinusI_bfc6d3bb8e8278b9]));
      }

      FieldComplex FieldComplex::multiplyPlusI() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_multiplyPlusI_bfc6d3bb8e8278b9]));
      }

      FieldComplex FieldComplex::negate() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_negate_bfc6d3bb8e8278b9]));
      }

      FieldComplex FieldComplex::newInstance(jdouble a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_newInstance_e2d5da6df3932ed5], a0));
      }

      ::java::util::List FieldComplex::nthRoot(jint a0) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_nthRoot_da0a0ad213c4fa7f], a0));
      }

      FieldComplex FieldComplex::pow(const FieldComplex & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_pow_285633f17a3543fe], a0.this$));
      }

      FieldComplex FieldComplex::pow(jdouble a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_pow_e2d5da6df3932ed5], a0));
      }

      FieldComplex FieldComplex::pow(jint a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_pow_508bc7943661469d], a0));
      }

      FieldComplex FieldComplex::pow(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_pow_f57793921fab57ff], a0.this$));
      }

      FieldComplex FieldComplex::reciprocal() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_reciprocal_bfc6d3bb8e8278b9]));
      }

      FieldComplex FieldComplex::remainder(const FieldComplex & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_remainder_285633f17a3543fe], a0.this$));
      }

      FieldComplex FieldComplex::remainder(jdouble a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_remainder_e2d5da6df3932ed5], a0));
      }

      FieldComplex FieldComplex::rint() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_rint_bfc6d3bb8e8278b9]));
      }

      FieldComplex FieldComplex::rootN(jint a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_rootN_508bc7943661469d], a0));
      }

      FieldComplex FieldComplex::scalb(jint a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_scalb_508bc7943661469d], a0));
      }

      FieldComplex FieldComplex::sign() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_sign_bfc6d3bb8e8278b9]));
      }

      FieldComplex FieldComplex::sin() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_sin_bfc6d3bb8e8278b9]));
      }

      ::org::hipparchus::util::FieldSinCos FieldComplex::sinCos() const
      {
        return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_5efdd92d175db117]));
      }

      FieldComplex FieldComplex::sinh() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_sinh_bfc6d3bb8e8278b9]));
      }

      ::org::hipparchus::util::FieldSinhCosh FieldComplex::sinhCosh() const
      {
        return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_e5a948cfec461975]));
      }

      FieldComplex FieldComplex::sqrt() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_sqrt_bfc6d3bb8e8278b9]));
      }

      FieldComplex FieldComplex::sqrt1z() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_sqrt1z_bfc6d3bb8e8278b9]));
      }

      FieldComplex FieldComplex::subtract(const FieldComplex & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_subtract_285633f17a3543fe], a0.this$));
      }

      FieldComplex FieldComplex::subtract(jdouble a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_subtract_e2d5da6df3932ed5], a0));
      }

      FieldComplex FieldComplex::subtract(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_subtract_f57793921fab57ff], a0.this$));
      }

      FieldComplex FieldComplex::tan() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_tan_bfc6d3bb8e8278b9]));
      }

      FieldComplex FieldComplex::tanh() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_tanh_bfc6d3bb8e8278b9]));
      }

      FieldComplex FieldComplex::toDegrees() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_toDegrees_bfc6d3bb8e8278b9]));
      }

      FieldComplex FieldComplex::toRadians() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_toRadians_bfc6d3bb8e8278b9]));
      }

      ::java::lang::String FieldComplex::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
      }

      FieldComplex FieldComplex::ulp() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_ulp_bfc6d3bb8e8278b9]));
      }

      FieldComplex FieldComplex::valueOf(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f57793921fab57ff], a0.this$));
      }

      FieldComplex FieldComplex::valueOf(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e9dc5bca1487ec04], a0.this$, a1.this$));
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
#include "org/hipparchus/linear/SingularValueDecomposer.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *SingularValueDecomposer::class$ = NULL;
      jmethodID *SingularValueDecomposer::mids$ = NULL;
      bool SingularValueDecomposer::live$ = false;

      jclass SingularValueDecomposer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/SingularValueDecomposer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_decompose_3f89101650640015] = env->getMethodID(cls, "decompose", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/DecompositionSolver;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SingularValueDecomposer::SingularValueDecomposer() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      ::org::hipparchus::linear::DecompositionSolver SingularValueDecomposer::decompose(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_decompose_3f89101650640015], a0.this$));
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
      static PyObject *t_SingularValueDecomposer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SingularValueDecomposer_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SingularValueDecomposer_init_(t_SingularValueDecomposer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SingularValueDecomposer_decompose(t_SingularValueDecomposer *self, PyObject *arg);

      static PyMethodDef t_SingularValueDecomposer__methods_[] = {
        DECLARE_METHOD(t_SingularValueDecomposer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SingularValueDecomposer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SingularValueDecomposer, decompose, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SingularValueDecomposer)[] = {
        { Py_tp_methods, t_SingularValueDecomposer__methods_ },
        { Py_tp_init, (void *) t_SingularValueDecomposer_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SingularValueDecomposer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SingularValueDecomposer, t_SingularValueDecomposer, SingularValueDecomposer);

      void t_SingularValueDecomposer::install(PyObject *module)
      {
        installType(&PY_TYPE(SingularValueDecomposer), &PY_TYPE_DEF(SingularValueDecomposer), module, "SingularValueDecomposer", 0);
      }

      void t_SingularValueDecomposer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingularValueDecomposer), "class_", make_descriptor(SingularValueDecomposer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingularValueDecomposer), "wrapfn_", make_descriptor(t_SingularValueDecomposer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingularValueDecomposer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SingularValueDecomposer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SingularValueDecomposer::initializeClass, 1)))
          return NULL;
        return t_SingularValueDecomposer::wrap_Object(SingularValueDecomposer(((t_SingularValueDecomposer *) arg)->object.this$));
      }
      static PyObject *t_SingularValueDecomposer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SingularValueDecomposer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SingularValueDecomposer_init_(t_SingularValueDecomposer *self, PyObject *args, PyObject *kwds)
      {
        SingularValueDecomposer object((jobject) NULL);

        INT_CALL(object = SingularValueDecomposer());
        self->object = object;

        return 0;
      }

      static PyObject *t_SingularValueDecomposer_decompose(t_SingularValueDecomposer *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::DecompositionSolver result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.decompose(a0));
          return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "decompose", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContribution.h"
#include "org/orekit/propagation/PropagationType.h"
#include "java/util/List.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *AbstractGaussianContribution::class$ = NULL;
            jmethodID *AbstractGaussianContribution::mids$ = NULL;
            bool AbstractGaussianContribution::live$ = false;

            jclass AbstractGaussianContribution::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContribution");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getMeanElementRate_3573019cca22a7a6] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanElementRate_6930c150caff50e0] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)[D");
                mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
                mids$[mid_init_0472264ad6f40bc2] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_init_811e49dad2467b67] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
                mids$[mid_initializeShortPeriodTerms_57b295149dcd4abd] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/propagation/PropagationType;[D)Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_0791dbeb06a23554] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/propagation/PropagationType;[Lorg/hipparchus/CalculusFieldElement;)Ljava/util/List;");
                mids$[mid_registerAttitudeProvider_8fa6c0c067ead7b2] = env->getMethodID(cls, "registerAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
                mids$[mid_updateShortPeriodTerms_114c99ef73dfde56] = env->getMethodID(cls, "updateShortPeriodTerms", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/orekit/propagation/FieldSpacecraftState;)V");
                mids$[mid_updateShortPeriodTerms_a9be3da5be85857d] = env->getMethodID(cls, "updateShortPeriodTerms", "([D[Lorg/orekit/propagation/SpacecraftState;)V");
                mids$[mid_getMeanElementRate_dd9e811b89bb8dca] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContribution$GaussQuadrature;DDLorg/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContributionContext;[D)[D");
                mids$[mid_getMeanElementRate_c9a5e53b1d67f4e0] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContribution$GaussQuadrature;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/propagation/semianalytical/dsst/forces/FieldAbstractGaussianContributionContext;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getLLimits_8babb6fb34d6b24d] = env->getMethodID(cls, "getLLimits", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;)[D");
                mids$[mid_getLLimits_233f032b171b49d2] = env->getMethodID(cls, "getLLimits", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getParametersDriversWithoutMu_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDriversWithoutMu", "()Ljava/util/List;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            JArray< ::org::hipparchus::CalculusFieldElement > AbstractGaussianContribution::getMeanElementRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_3573019cca22a7a6], a0.this$, a1.this$, a2.this$));
            }

            JArray< jdouble > AbstractGaussianContribution::getMeanElementRate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a1, const JArray< jdouble > & a2) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_6930c150caff50e0], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List AbstractGaussianContribution::getParametersDrivers() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
            }

            void AbstractGaussianContribution::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_init_0472264ad6f40bc2], a0.this$, a1.this$);
            }

            void AbstractGaussianContribution::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_init_811e49dad2467b67], a0.this$, a1.this$);
            }

            ::java::util::List AbstractGaussianContribution::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< jdouble > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_57b295149dcd4abd], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List AbstractGaussianContribution::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_0791dbeb06a23554], a0.this$, a1.this$, a2.this$));
            }

            void AbstractGaussianContribution::registerAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_registerAttitudeProvider_8fa6c0c067ead7b2], a0.this$);
            }

            void AbstractGaussianContribution::updateShortPeriodTerms(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::orekit::propagation::FieldSpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_114c99ef73dfde56], a0.this$, a1.this$);
            }

            void AbstractGaussianContribution::updateShortPeriodTerms(const JArray< jdouble > & a0, const JArray< ::org::orekit::propagation::SpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_a9be3da5be85857d], a0.this$, a1.this$);
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
            static PyObject *t_AbstractGaussianContribution_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractGaussianContribution_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractGaussianContribution_getMeanElementRate(t_AbstractGaussianContribution *self, PyObject *args);
            static PyObject *t_AbstractGaussianContribution_getParametersDrivers(t_AbstractGaussianContribution *self);
            static PyObject *t_AbstractGaussianContribution_init(t_AbstractGaussianContribution *self, PyObject *args);
            static PyObject *t_AbstractGaussianContribution_initializeShortPeriodTerms(t_AbstractGaussianContribution *self, PyObject *args);
            static PyObject *t_AbstractGaussianContribution_registerAttitudeProvider(t_AbstractGaussianContribution *self, PyObject *arg);
            static PyObject *t_AbstractGaussianContribution_updateShortPeriodTerms(t_AbstractGaussianContribution *self, PyObject *args);
            static PyObject *t_AbstractGaussianContribution_get__parametersDrivers(t_AbstractGaussianContribution *self, void *data);
            static PyGetSetDef t_AbstractGaussianContribution__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractGaussianContribution, parametersDrivers),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractGaussianContribution__methods_[] = {
              DECLARE_METHOD(t_AbstractGaussianContribution, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractGaussianContribution, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractGaussianContribution, getMeanElementRate, METH_VARARGS),
              DECLARE_METHOD(t_AbstractGaussianContribution, getParametersDrivers, METH_NOARGS),
              DECLARE_METHOD(t_AbstractGaussianContribution, init, METH_VARARGS),
              DECLARE_METHOD(t_AbstractGaussianContribution, initializeShortPeriodTerms, METH_VARARGS),
              DECLARE_METHOD(t_AbstractGaussianContribution, registerAttitudeProvider, METH_O),
              DECLARE_METHOD(t_AbstractGaussianContribution, updateShortPeriodTerms, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractGaussianContribution)[] = {
              { Py_tp_methods, t_AbstractGaussianContribution__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AbstractGaussianContribution__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractGaussianContribution)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractGaussianContribution, t_AbstractGaussianContribution, AbstractGaussianContribution);

            void t_AbstractGaussianContribution::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractGaussianContribution), &PY_TYPE_DEF(AbstractGaussianContribution), module, "AbstractGaussianContribution", 0);
            }

            void t_AbstractGaussianContribution::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGaussianContribution), "class_", make_descriptor(AbstractGaussianContribution::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGaussianContribution), "wrapfn_", make_descriptor(t_AbstractGaussianContribution::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGaussianContribution), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractGaussianContribution_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractGaussianContribution::initializeClass, 1)))
                return NULL;
              return t_AbstractGaussianContribution::wrap_Object(AbstractGaussianContribution(((t_AbstractGaussianContribution *) arg)->object.this$));
            }
            static PyObject *t_AbstractGaussianContribution_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractGaussianContribution::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractGaussianContribution_getMeanElementRate(t_AbstractGaussianContribution *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
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
              }

              PyErr_SetArgsError((PyObject *) self, "getMeanElementRate", args);
              return NULL;
            }

            static PyObject *t_AbstractGaussianContribution_getParametersDrivers(t_AbstractGaussianContribution *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            static PyObject *t_AbstractGaussianContribution_init(t_AbstractGaussianContribution *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
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
                }
                {
                  ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                  ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(self->object.init(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "init", args);
              return NULL;
            }

            static PyObject *t_AbstractGaussianContribution_initializeShortPeriodTerms(t_AbstractGaussianContribution *self, PyObject *args)
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

            static PyObject *t_AbstractGaussianContribution_registerAttitudeProvider(t_AbstractGaussianContribution *self, PyObject *arg)
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

            static PyObject *t_AbstractGaussianContribution_updateShortPeriodTerms(t_AbstractGaussianContribution *self, PyObject *args)
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

            static PyObject *t_AbstractGaussianContribution_get__parametersDrivers(t_AbstractGaussianContribution *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/tdm/TdmParser.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeUnitsConverter.h"
#include "org/orekit/files/ccsds/ndm/tdm/Tdm.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmParser.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *TdmParser::class$ = NULL;
            jmethodID *TdmParser::mids$ = NULL;
            bool TdmParser::live$ = false;

            jclass TdmParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/TdmParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_build_35c2b39274dfd597] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/tdm/Tdm;");
                mids$[mid_finalizeData_89b302893bdbe1f1] = env->getMethodID(cls, "finalizeData", "()Z");
                mids$[mid_finalizeHeader_89b302893bdbe1f1] = env->getMethodID(cls, "finalizeHeader", "()Z");
                mids$[mid_finalizeMetadata_89b302893bdbe1f1] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                mids$[mid_getHeader_72ed70c4bc012a20] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/tdm/TdmHeader;");
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

            ::org::orekit::files::ccsds::ndm::tdm::Tdm TdmParser::build() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::Tdm(env->callObjectMethod(this$, mids$[mid_build_35c2b39274dfd597]));
            }

            jboolean TdmParser::finalizeData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_finalizeData_89b302893bdbe1f1]);
            }

            jboolean TdmParser::finalizeHeader() const
            {
              return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_89b302893bdbe1f1]);
            }

            jboolean TdmParser::finalizeMetadata() const
            {
              return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_89b302893bdbe1f1]);
            }

            ::org::orekit::files::ccsds::ndm::tdm::TdmHeader TdmParser::getHeader() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::TdmHeader(env->callObjectMethod(this$, mids$[mid_getHeader_72ed70c4bc012a20]));
            }

            jboolean TdmParser::inData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_inData_89b302893bdbe1f1]);
            }

            jboolean TdmParser::inHeader() const
            {
              return env->callBooleanMethod(this$, mids$[mid_inHeader_89b302893bdbe1f1]);
            }

            jboolean TdmParser::inMetadata() const
            {
              return env->callBooleanMethod(this$, mids$[mid_inMetadata_89b302893bdbe1f1]);
            }

            jboolean TdmParser::prepareData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_prepareData_89b302893bdbe1f1]);
            }

            jboolean TdmParser::prepareHeader() const
            {
              return env->callBooleanMethod(this$, mids$[mid_prepareHeader_89b302893bdbe1f1]);
            }

            jboolean TdmParser::prepareMetadata() const
            {
              return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_89b302893bdbe1f1]);
            }

            void TdmParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
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
          namespace tdm {
            static PyObject *t_TdmParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmParser_of_(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_build(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_finalizeData(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_finalizeHeader(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_finalizeMetadata(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_getHeader(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_inData(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_inHeader(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_inMetadata(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_prepareData(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_prepareHeader(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_prepareMetadata(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_reset(t_TdmParser *self, PyObject *args);
            static PyObject *t_TdmParser_get__header(t_TdmParser *self, void *data);
            static PyObject *t_TdmParser_get__parameters_(t_TdmParser *self, void *data);
            static PyGetSetDef t_TdmParser__fields_[] = {
              DECLARE_GET_FIELD(t_TdmParser, header),
              DECLARE_GET_FIELD(t_TdmParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_TdmParser__methods_[] = {
              DECLARE_METHOD(t_TdmParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, build, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, finalizeData, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, finalizeHeader, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, finalizeMetadata, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, getHeader, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, inData, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, inHeader, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, inMetadata, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, prepareData, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, prepareHeader, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, prepareMetadata, METH_VARARGS),
              DECLARE_METHOD(t_TdmParser, reset, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TdmParser)[] = {
              { Py_tp_methods, t_TdmParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_TdmParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TdmParser)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser),
              NULL
            };

            DEFINE_TYPE(TdmParser, t_TdmParser, TdmParser);
            PyObject *t_TdmParser::wrap_Object(const TdmParser& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_TdmParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TdmParser *self = (t_TdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            PyObject *t_TdmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_TdmParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TdmParser *self = (t_TdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            void t_TdmParser::install(PyObject *module)
            {
              installType(&PY_TYPE(TdmParser), &PY_TYPE_DEF(TdmParser), module, "TdmParser", 0);
            }

            void t_TdmParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmParser), "class_", make_descriptor(TdmParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmParser), "wrapfn_", make_descriptor(t_TdmParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmParser), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_TdmParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TdmParser::initializeClass, 1)))
                return NULL;
              return t_TdmParser::wrap_Object(TdmParser(((t_TdmParser *) arg)->object.this$));
            }
            static PyObject *t_TdmParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TdmParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_TdmParser_of_(t_TdmParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 3, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_TdmParser_build(t_TdmParser *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::ndm::tdm::Tdm result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.build());
                return ::org::orekit::files::ccsds::ndm::tdm::t_Tdm::wrap_Object(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "build", args, 2);
            }

            static PyObject *t_TdmParser_finalizeData(t_TdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.finalizeData());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "finalizeData", args, 2);
            }

            static PyObject *t_TdmParser_finalizeHeader(t_TdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.finalizeHeader());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "finalizeHeader", args, 2);
            }

            static PyObject *t_TdmParser_finalizeMetadata(t_TdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.finalizeMetadata());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "finalizeMetadata", args, 2);
            }

            static PyObject *t_TdmParser_getHeader(t_TdmParser *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TdmHeader result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.getHeader());
                return ::org::orekit::files::ccsds::ndm::tdm::t_TdmHeader::wrap_Object(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "getHeader", args, 2);
            }

            static PyObject *t_TdmParser_inData(t_TdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.inData());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "inData", args, 2);
            }

            static PyObject *t_TdmParser_inHeader(t_TdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.inHeader());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "inHeader", args, 2);
            }

            static PyObject *t_TdmParser_inMetadata(t_TdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.inMetadata());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "inMetadata", args, 2);
            }

            static PyObject *t_TdmParser_prepareData(t_TdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.prepareData());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "prepareData", args, 2);
            }

            static PyObject *t_TdmParser_prepareHeader(t_TdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.prepareHeader());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "prepareHeader", args, 2);
            }

            static PyObject *t_TdmParser_prepareMetadata(t_TdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.prepareMetadata());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "prepareMetadata", args, 2);
            }

            static PyObject *t_TdmParser_reset(t_TdmParser *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
              {
                OBJ_CALL(self->object.reset(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(TdmParser), (PyObject *) self, "reset", args, 2);
            }
            static PyObject *t_TdmParser_get__parameters_(t_TdmParser *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_TdmParser_get__header(t_TdmParser *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::TdmHeader value((jobject) NULL);
              OBJ_CALL(value = self->object.getHeader());
              return ::org::orekit::files::ccsds::ndm::tdm::t_TdmHeader::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PythonTimeStampedCache.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/TimeStampedCache.h"
#include "java/lang/IllegalStateException.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonTimeStampedCache::class$ = NULL;
      jmethodID *PythonTimeStampedCache::mids$ = NULL;
      bool PythonTimeStampedCache::live$ = false;

      jclass PythonTimeStampedCache::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonTimeStampedCache");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getEarliest_da8f710d3d2958bf] = env->getMethodID(cls, "getEarliest", "()Lorg/orekit/time/TimeStamped;");
          mids$[mid_getLatest_da8f710d3d2958bf] = env->getMethodID(cls, "getLatest", "()Lorg/orekit/time/TimeStamped;");
          mids$[mid_getMaxNeighborsSize_412668abc8d889e9] = env->getMethodID(cls, "getMaxNeighborsSize", "()I");
          mids$[mid_getNeighbors_0545d4cc79d2fdd1] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/AbsoluteDate;)Ljava/util/stream/Stream;");
          mids$[mid_getNeighbors_b9470a4d1609cf1f] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/AbsoluteDate;I)Ljava/util/stream/Stream;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTimeStampedCache::PythonTimeStampedCache() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonTimeStampedCache::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonTimeStampedCache::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonTimeStampedCache::pythonExtension(jlong a0) const
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
    namespace utils {
      static PyObject *t_PythonTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeStampedCache_of_(t_PythonTimeStampedCache *self, PyObject *args);
      static int t_PythonTimeStampedCache_init_(t_PythonTimeStampedCache *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTimeStampedCache_finalize(t_PythonTimeStampedCache *self);
      static PyObject *t_PythonTimeStampedCache_pythonExtension(t_PythonTimeStampedCache *self, PyObject *args);
      static jobject JNICALL t_PythonTimeStampedCache_getEarliest0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeStampedCache_getLatest1(JNIEnv *jenv, jobject jobj);
      static jint JNICALL t_PythonTimeStampedCache_getMaxNeighborsSize2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeStampedCache_getNeighbors3(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonTimeStampedCache_getNeighbors4(JNIEnv *jenv, jobject jobj, jobject a0, jint a1);
      static void JNICALL t_PythonTimeStampedCache_pythonDecRef5(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonTimeStampedCache_get__self(t_PythonTimeStampedCache *self, void *data);
      static PyObject *t_PythonTimeStampedCache_get__parameters_(t_PythonTimeStampedCache *self, void *data);
      static PyGetSetDef t_PythonTimeStampedCache__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTimeStampedCache, self),
        DECLARE_GET_FIELD(t_PythonTimeStampedCache, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTimeStampedCache__methods_[] = {
        DECLARE_METHOD(t_PythonTimeStampedCache, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeStampedCache, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeStampedCache, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonTimeStampedCache, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTimeStampedCache, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTimeStampedCache)[] = {
        { Py_tp_methods, t_PythonTimeStampedCache__methods_ },
        { Py_tp_init, (void *) t_PythonTimeStampedCache_init_ },
        { Py_tp_getset, t_PythonTimeStampedCache__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTimeStampedCache)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTimeStampedCache, t_PythonTimeStampedCache, PythonTimeStampedCache);
      PyObject *t_PythonTimeStampedCache::wrap_Object(const PythonTimeStampedCache& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonTimeStampedCache::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonTimeStampedCache *self = (t_PythonTimeStampedCache *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonTimeStampedCache::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonTimeStampedCache::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonTimeStampedCache *self = (t_PythonTimeStampedCache *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonTimeStampedCache::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTimeStampedCache), &PY_TYPE_DEF(PythonTimeStampedCache), module, "PythonTimeStampedCache", 1);
      }

      void t_PythonTimeStampedCache::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeStampedCache), "class_", make_descriptor(PythonTimeStampedCache::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeStampedCache), "wrapfn_", make_descriptor(t_PythonTimeStampedCache::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeStampedCache), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTimeStampedCache::initializeClass);
        JNINativeMethod methods[] = {
          { "getEarliest", "()Lorg/orekit/time/TimeStamped;", (void *) t_PythonTimeStampedCache_getEarliest0 },
          { "getLatest", "()Lorg/orekit/time/TimeStamped;", (void *) t_PythonTimeStampedCache_getLatest1 },
          { "getMaxNeighborsSize", "()I", (void *) t_PythonTimeStampedCache_getMaxNeighborsSize2 },
          { "getNeighbors", "(Lorg/orekit/time/AbsoluteDate;)Ljava/util/stream/Stream;", (void *) t_PythonTimeStampedCache_getNeighbors3 },
          { "getNeighbors", "(Lorg/orekit/time/AbsoluteDate;I)Ljava/util/stream/Stream;", (void *) t_PythonTimeStampedCache_getNeighbors4 },
          { "pythonDecRef", "()V", (void *) t_PythonTimeStampedCache_pythonDecRef5 },
        };
        env->registerNatives(cls, methods, 6);
      }

      static PyObject *t_PythonTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTimeStampedCache::initializeClass, 1)))
          return NULL;
        return t_PythonTimeStampedCache::wrap_Object(PythonTimeStampedCache(((t_PythonTimeStampedCache *) arg)->object.this$));
      }
      static PyObject *t_PythonTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTimeStampedCache::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonTimeStampedCache_of_(t_PythonTimeStampedCache *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonTimeStampedCache_init_(t_PythonTimeStampedCache *self, PyObject *args, PyObject *kwds)
      {
        PythonTimeStampedCache object((jobject) NULL);

        INT_CALL(object = PythonTimeStampedCache());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTimeStampedCache_finalize(t_PythonTimeStampedCache *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTimeStampedCache_pythonExtension(t_PythonTimeStampedCache *self, PyObject *args)
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

      static jobject JNICALL t_PythonTimeStampedCache_getEarliest0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStampedCache::mids$[PythonTimeStampedCache::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TimeStamped value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEarliest", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TimeStamped::initializeClass, &value))
        {
          throwTypeError("getEarliest", result);
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

      static jobject JNICALL t_PythonTimeStampedCache_getLatest1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStampedCache::mids$[PythonTimeStampedCache::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TimeStamped value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getLatest", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TimeStamped::initializeClass, &value))
        {
          throwTypeError("getLatest", result);
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

      static jint JNICALL t_PythonTimeStampedCache_getMaxNeighborsSize2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStampedCache::mids$[PythonTimeStampedCache::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jint value;
        PyObject *result = PyObject_CallMethod(obj, "getMaxNeighborsSize", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "I", &value))
        {
          throwTypeError("getMaxNeighborsSize", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jint) 0;
      }

      static jobject JNICALL t_PythonTimeStampedCache_getNeighbors3(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStampedCache::mids$[PythonTimeStampedCache::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::stream::Stream value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getNeighbors", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::stream::Stream::initializeClass, &value))
        {
          throwTypeError("getNeighbors", result);
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

      static jobject JNICALL t_PythonTimeStampedCache_getNeighbors4(JNIEnv *jenv, jobject jobj, jobject a0, jint a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStampedCache::mids$[PythonTimeStampedCache::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::stream::Stream value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getNeighbors", "Oi", o0, (int) a1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::stream::Stream::initializeClass, &value))
        {
          throwTypeError("getNeighbors", result);
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

      static void JNICALL t_PythonTimeStampedCache_pythonDecRef5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStampedCache::mids$[PythonTimeStampedCache::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTimeStampedCache::mids$[PythonTimeStampedCache::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonTimeStampedCache_get__self(t_PythonTimeStampedCache *self, void *data)
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
      static PyObject *t_PythonTimeStampedCache_get__parameters_(t_PythonTimeStampedCache *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/function/Supplier.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {
    namespace function {

      ::java::lang::Class *Supplier::class$ = NULL;
      jmethodID *Supplier::mids$ = NULL;
      bool Supplier::live$ = false;

      jclass Supplier::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("java/util/function/Supplier");

          mids$ = new jmethodID[max_mid];
          mids$[mid_get_e661fe3ba2fafb22] = env->getMethodID(cls, "get", "()Ljava/lang/Object;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::Object Supplier::get$() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_e661fe3ba2fafb22]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    namespace function {
      static PyObject *t_Supplier_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Supplier_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Supplier_of_(t_Supplier *self, PyObject *args);
      static PyObject *t_Supplier_get(t_Supplier *self);
      static PyObject *t_Supplier_get__parameters_(t_Supplier *self, void *data);
      static PyGetSetDef t_Supplier__fields_[] = {
        DECLARE_GET_FIELD(t_Supplier, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Supplier__methods_[] = {
        DECLARE_METHOD(t_Supplier, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Supplier, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Supplier, of_, METH_VARARGS),
        DECLARE_METHOD(t_Supplier, get, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Supplier)[] = {
        { Py_tp_methods, t_Supplier__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Supplier__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Supplier)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Supplier, t_Supplier, Supplier);
      PyObject *t_Supplier::wrap_Object(const Supplier& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Supplier::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Supplier *self = (t_Supplier *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_Supplier::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Supplier::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Supplier *self = (t_Supplier *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_Supplier::install(PyObject *module)
      {
        installType(&PY_TYPE(Supplier), &PY_TYPE_DEF(Supplier), module, "Supplier", 0);
      }

      void t_Supplier::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Supplier), "class_", make_descriptor(Supplier::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Supplier), "wrapfn_", make_descriptor(t_Supplier::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Supplier), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Supplier_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Supplier::initializeClass, 1)))
          return NULL;
        return t_Supplier::wrap_Object(Supplier(((t_Supplier *) arg)->object.this$));
      }
      static PyObject *t_Supplier_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Supplier::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Supplier_of_(t_Supplier *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_Supplier_get(t_Supplier *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.get$());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }
      static PyObject *t_Supplier_get__parameters_(t_Supplier *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Logit$Parametric.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/analysis/ParametricUnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Logit$Parametric::class$ = NULL;
        jmethodID *Logit$Parametric::mids$ = NULL;
        bool Logit$Parametric::live$ = false;

        jclass Logit$Parametric::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Logit$Parametric");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_gradient_31b9a2982d73e37a] = env->getMethodID(cls, "gradient", "(D[D)[D");
            mids$[mid_value_1bc40469b56f2c3c] = env->getMethodID(cls, "value", "(D[D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Logit$Parametric::Logit$Parametric() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        JArray< jdouble > Logit$Parametric::gradient(jdouble a0, const JArray< jdouble > & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_gradient_31b9a2982d73e37a], a0, a1.this$));
        }

        jdouble Logit$Parametric::value(jdouble a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_1bc40469b56f2c3c], a0, a1.this$);
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
        static PyObject *t_Logit$Parametric_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Logit$Parametric_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Logit$Parametric_init_(t_Logit$Parametric *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Logit$Parametric_gradient(t_Logit$Parametric *self, PyObject *args);
        static PyObject *t_Logit$Parametric_value(t_Logit$Parametric *self, PyObject *args);

        static PyMethodDef t_Logit$Parametric__methods_[] = {
          DECLARE_METHOD(t_Logit$Parametric, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Logit$Parametric, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Logit$Parametric, gradient, METH_VARARGS),
          DECLARE_METHOD(t_Logit$Parametric, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Logit$Parametric)[] = {
          { Py_tp_methods, t_Logit$Parametric__methods_ },
          { Py_tp_init, (void *) t_Logit$Parametric_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Logit$Parametric)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Logit$Parametric, t_Logit$Parametric, Logit$Parametric);

        void t_Logit$Parametric::install(PyObject *module)
        {
          installType(&PY_TYPE(Logit$Parametric), &PY_TYPE_DEF(Logit$Parametric), module, "Logit$Parametric", 0);
        }

        void t_Logit$Parametric::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logit$Parametric), "class_", make_descriptor(Logit$Parametric::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logit$Parametric), "wrapfn_", make_descriptor(t_Logit$Parametric::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logit$Parametric), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Logit$Parametric_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Logit$Parametric::initializeClass, 1)))
            return NULL;
          return t_Logit$Parametric::wrap_Object(Logit$Parametric(((t_Logit$Parametric *) arg)->object.this$));
        }
        static PyObject *t_Logit$Parametric_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Logit$Parametric::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Logit$Parametric_init_(t_Logit$Parametric *self, PyObject *args, PyObject *kwds)
        {
          Logit$Parametric object((jobject) NULL);

          INT_CALL(object = Logit$Parametric());
          self->object = object;

          return 0;
        }

        static PyObject *t_Logit$Parametric_gradient(t_Logit$Parametric *self, PyObject *args)
        {
          jdouble a0;
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.gradient(a0, a1));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "gradient", args);
          return NULL;
        }

        static PyObject *t_Logit$Parametric_value(t_Logit$Parametric *self, PyObject *args)
        {
          jdouble a0;
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "D[D", &a0, &a1))
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
#include "org/orekit/propagation/analytical/gnss/data/QZSSCivilianNavigationMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *QZSSCivilianNavigationMessage::class$ = NULL;
            jmethodID *QZSSCivilianNavigationMessage::mids$ = NULL;
            bool QZSSCivilianNavigationMessage::live$ = false;

            jclass QZSSCivilianNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/QZSSCivilianNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ed2afdb8506b9742] = env->getMethodID(cls, "<init>", "(Z)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            QZSSCivilianNavigationMessage::QZSSCivilianNavigationMessage(jboolean a0) : ::org::orekit::propagation::analytical::gnss::data::CivilianNavigationMessage(env->newObject(initializeClass, &mids$, mid_init$_ed2afdb8506b9742, a0)) {}
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
            static PyObject *t_QZSSCivilianNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_QZSSCivilianNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_QZSSCivilianNavigationMessage_init_(t_QZSSCivilianNavigationMessage *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_QZSSCivilianNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_QZSSCivilianNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_QZSSCivilianNavigationMessage, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(QZSSCivilianNavigationMessage)[] = {
              { Py_tp_methods, t_QZSSCivilianNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_QZSSCivilianNavigationMessage_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(QZSSCivilianNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::CivilianNavigationMessage),
              NULL
            };

            DEFINE_TYPE(QZSSCivilianNavigationMessage, t_QZSSCivilianNavigationMessage, QZSSCivilianNavigationMessage);

            void t_QZSSCivilianNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(QZSSCivilianNavigationMessage), &PY_TYPE_DEF(QZSSCivilianNavigationMessage), module, "QZSSCivilianNavigationMessage", 0);
            }

            void t_QZSSCivilianNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSCivilianNavigationMessage), "class_", make_descriptor(QZSSCivilianNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSCivilianNavigationMessage), "wrapfn_", make_descriptor(t_QZSSCivilianNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSCivilianNavigationMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_QZSSCivilianNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, QZSSCivilianNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_QZSSCivilianNavigationMessage::wrap_Object(QZSSCivilianNavigationMessage(((t_QZSSCivilianNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_QZSSCivilianNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, QZSSCivilianNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_QZSSCivilianNavigationMessage_init_(t_QZSSCivilianNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              jboolean a0;
              QZSSCivilianNavigationMessage object((jobject) NULL);

              if (!parseArgs(args, "Z", &a0))
              {
                INT_CALL(object = QZSSCivilianNavigationMessage(a0));
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/ApsideDetector.h"
#include "org/orekit/propagation/events/ApsideDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *ApsideDetector::class$ = NULL;
        jmethodID *ApsideDetector::mids$ = NULL;
        bool ApsideDetector::live$ = false;

        jclass ApsideDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/ApsideDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a9af82a1647a21f3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;)V");
            mids$[mid_init$_5146c61d945796ac] = env->getMethodID(cls, "<init>", "(DLorg/orekit/orbits/Orbit;)V");
            mids$[mid_g_1bbf81d80c47ecdd] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_create_dd1e60377569f028] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/ApsideDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ApsideDetector::ApsideDetector(const ::org::orekit::orbits::Orbit & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_a9af82a1647a21f3, a0.this$)) {}

        ApsideDetector::ApsideDetector(jdouble a0, const ::org::orekit::orbits::Orbit & a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_5146c61d945796ac, a0, a1.this$)) {}

        jdouble ApsideDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_1bbf81d80c47ecdd], a0.this$);
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
        static PyObject *t_ApsideDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ApsideDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ApsideDetector_of_(t_ApsideDetector *self, PyObject *args);
        static int t_ApsideDetector_init_(t_ApsideDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ApsideDetector_g(t_ApsideDetector *self, PyObject *args);
        static PyObject *t_ApsideDetector_get__parameters_(t_ApsideDetector *self, void *data);
        static PyGetSetDef t_ApsideDetector__fields_[] = {
          DECLARE_GET_FIELD(t_ApsideDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ApsideDetector__methods_[] = {
          DECLARE_METHOD(t_ApsideDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ApsideDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ApsideDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_ApsideDetector, g, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ApsideDetector)[] = {
          { Py_tp_methods, t_ApsideDetector__methods_ },
          { Py_tp_init, (void *) t_ApsideDetector_init_ },
          { Py_tp_getset, t_ApsideDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ApsideDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(ApsideDetector, t_ApsideDetector, ApsideDetector);
        PyObject *t_ApsideDetector::wrap_Object(const ApsideDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ApsideDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ApsideDetector *self = (t_ApsideDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ApsideDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ApsideDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ApsideDetector *self = (t_ApsideDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ApsideDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(ApsideDetector), &PY_TYPE_DEF(ApsideDetector), module, "ApsideDetector", 0);
        }

        void t_ApsideDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ApsideDetector), "class_", make_descriptor(ApsideDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ApsideDetector), "wrapfn_", make_descriptor(t_ApsideDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ApsideDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ApsideDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ApsideDetector::initializeClass, 1)))
            return NULL;
          return t_ApsideDetector::wrap_Object(ApsideDetector(((t_ApsideDetector *) arg)->object.this$));
        }
        static PyObject *t_ApsideDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ApsideDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ApsideDetector_of_(t_ApsideDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ApsideDetector_init_(t_ApsideDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ApsideDetector object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
              {
                INT_CALL(object = ApsideDetector(a0));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ApsideDetector);
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              ::org::orekit::orbits::Orbit a1((jobject) NULL);
              ApsideDetector object((jobject) NULL);

              if (!parseArgs(args, "Dk", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1))
              {
                INT_CALL(object = ApsideDetector(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ApsideDetector);
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

        static PyObject *t_ApsideDetector_g(t_ApsideDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ApsideDetector), (PyObject *) self, "g", args, 2);
        }
        static PyObject *t_ApsideDetector_get__parameters_(t_ApsideDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Acosh.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Acosh::class$ = NULL;
        jmethodID *Acosh::mids$ = NULL;
        bool Acosh::live$ = false;

        jclass Acosh::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Acosh");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_3eb2b84dba0ab7d2] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Acosh::Acosh() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble Acosh::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_7e960cd6eee376d8], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Acosh::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_3eb2b84dba0ab7d2], a0.this$));
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
        static PyObject *t_Acosh_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Acosh_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Acosh_init_(t_Acosh *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Acosh_value(t_Acosh *self, PyObject *args);

        static PyMethodDef t_Acosh__methods_[] = {
          DECLARE_METHOD(t_Acosh, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Acosh, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Acosh, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Acosh)[] = {
          { Py_tp_methods, t_Acosh__methods_ },
          { Py_tp_init, (void *) t_Acosh_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Acosh)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Acosh, t_Acosh, Acosh);

        void t_Acosh::install(PyObject *module)
        {
          installType(&PY_TYPE(Acosh), &PY_TYPE_DEF(Acosh), module, "Acosh", 0);
        }

        void t_Acosh::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Acosh), "class_", make_descriptor(Acosh::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Acosh), "wrapfn_", make_descriptor(t_Acosh::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Acosh), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Acosh_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Acosh::initializeClass, 1)))
            return NULL;
          return t_Acosh::wrap_Object(Acosh(((t_Acosh *) arg)->object.this$));
        }
        static PyObject *t_Acosh_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Acosh::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Acosh_init_(t_Acosh *self, PyObject *args, PyObject *kwds)
        {
          Acosh object((jobject) NULL);

          INT_CALL(object = Acosh());
          self->object = object;

          return 0;
        }

        static PyObject *t_Acosh_value(t_Acosh *self, PyObject *args)
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
#include "org/orekit/utils/AccurateFormatter.h"
#include "java/util/Locale.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *AccurateFormatter::class$ = NULL;
      jmethodID *AccurateFormatter::mids$ = NULL;
      bool AccurateFormatter::live$ = false;
      ::java::util::Locale *AccurateFormatter::STANDARDIZED_LOCALE = NULL;

      jclass AccurateFormatter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/AccurateFormatter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_format_c03a7791f2fcb1f1] = env->getStaticMethodID(cls, "format", "(D)Ljava/lang/String;");
          mids$[mid_format_26917e8002e2fe0e] = env->getStaticMethodID(cls, "format", "(IIIIID)Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          STANDARDIZED_LOCALE = new ::java::util::Locale(env->getStaticObjectField(cls, "STANDARDIZED_LOCALE", "Ljava/util/Locale;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String AccurateFormatter::format(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_format_c03a7791f2fcb1f1], a0));
      }

      ::java::lang::String AccurateFormatter::format(jint a0, jint a1, jint a2, jint a3, jint a4, jdouble a5)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_format_26917e8002e2fe0e], a0, a1, a2, a3, a4, a5));
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
      static PyObject *t_AccurateFormatter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AccurateFormatter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AccurateFormatter_format(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_AccurateFormatter__methods_[] = {
        DECLARE_METHOD(t_AccurateFormatter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AccurateFormatter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AccurateFormatter, format, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AccurateFormatter)[] = {
        { Py_tp_methods, t_AccurateFormatter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AccurateFormatter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AccurateFormatter, t_AccurateFormatter, AccurateFormatter);

      void t_AccurateFormatter::install(PyObject *module)
      {
        installType(&PY_TYPE(AccurateFormatter), &PY_TYPE_DEF(AccurateFormatter), module, "AccurateFormatter", 0);
      }

      void t_AccurateFormatter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AccurateFormatter), "class_", make_descriptor(AccurateFormatter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AccurateFormatter), "wrapfn_", make_descriptor(t_AccurateFormatter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AccurateFormatter), "boxfn_", make_descriptor(boxObject));
        env->getClass(AccurateFormatter::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AccurateFormatter), "STANDARDIZED_LOCALE", make_descriptor(::java::util::t_Locale::wrap_Object(*AccurateFormatter::STANDARDIZED_LOCALE)));
      }

      static PyObject *t_AccurateFormatter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AccurateFormatter::initializeClass, 1)))
          return NULL;
        return t_AccurateFormatter::wrap_Object(AccurateFormatter(((t_AccurateFormatter *) arg)->object.this$));
      }
      static PyObject *t_AccurateFormatter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AccurateFormatter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AccurateFormatter_format(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::orekit::utils::AccurateFormatter::format(a0));
              return j2p(result);
            }
          }
          break;
         case 6:
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble a5;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "IIIIID", &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = ::org::orekit::utils::AccurateFormatter::format(a0, a1, a2, a3, a4, a5));
              return j2p(result);
            }
          }
        }

        PyErr_SetArgsError(type, "format", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/PythonPropagatorBuilder.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *PythonPropagatorBuilder::class$ = NULL;
        jmethodID *PythonPropagatorBuilder::mids$ = NULL;
        bool PythonPropagatorBuilder::live$ = false;

        jclass PythonPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/PythonPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_buildLeastSquaresModel_4fca41eef9d750a6] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;");
            mids$[mid_buildPropagator_5ad9cbd11735eecd] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/Propagator;");
            mids$[mid_copy_9ce0d272477ff7e1] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/PropagatorBuilder;");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInitialOrbitDate_7a97f7e149e79afb] = env->getMethodID(cls, "getInitialOrbitDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMu_557b8123390d8d0c] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getOrbitType_2cea2a2cb3e02091] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getOrbitalParametersDrivers_467d574a7997e53a] = env->getMethodID(cls, "getOrbitalParametersDrivers", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getPositionAngleType_f4984aee71df4c19] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_getPropagationParametersDrivers_467d574a7997e53a] = env->getMethodID(cls, "getPropagationParametersDrivers", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getSelectedNormalizedParameters_a53a7513ecedada2] = env->getMethodID(cls, "getSelectedNormalizedParameters", "()[D");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_resetOrbit_a9af82a1647a21f3] = env->getMethodID(cls, "resetOrbit", "(Lorg/orekit/orbits/Orbit;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonPropagatorBuilder::PythonPropagatorBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonPropagatorBuilder::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonPropagatorBuilder::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonPropagatorBuilder::pythonExtension(jlong a0) const
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
        static PyObject *t_PythonPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonPropagatorBuilder_init_(t_PythonPropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonPropagatorBuilder_finalize(t_PythonPropagatorBuilder *self);
        static PyObject *t_PythonPropagatorBuilder_pythonExtension(t_PythonPropagatorBuilder *self, PyObject *args);
        static jobject JNICALL t_PythonPropagatorBuilder_buildLeastSquaresModel0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
        static jobject JNICALL t_PythonPropagatorBuilder_buildPropagator1(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonPropagatorBuilder_copy2(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonPropagatorBuilder_getFrame3(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonPropagatorBuilder_getInitialOrbitDate4(JNIEnv *jenv, jobject jobj);
        static jdouble JNICALL t_PythonPropagatorBuilder_getMu5(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonPropagatorBuilder_getOrbitType6(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonPropagatorBuilder_getOrbitalParametersDrivers7(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonPropagatorBuilder_getPositionAngleType8(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonPropagatorBuilder_getPropagationParametersDrivers9(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonPropagatorBuilder_getSelectedNormalizedParameters10(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonPropagatorBuilder_pythonDecRef11(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonPropagatorBuilder_resetOrbit12(JNIEnv *jenv, jobject jobj, jobject a0);
        static PyObject *t_PythonPropagatorBuilder_get__self(t_PythonPropagatorBuilder *self, void *data);
        static PyGetSetDef t_PythonPropagatorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_PythonPropagatorBuilder, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_PythonPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonPropagatorBuilder, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonPropagatorBuilder, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonPropagatorBuilder)[] = {
          { Py_tp_methods, t_PythonPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_PythonPropagatorBuilder_init_ },
          { Py_tp_getset, t_PythonPropagatorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonPropagatorBuilder, t_PythonPropagatorBuilder, PythonPropagatorBuilder);

        void t_PythonPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonPropagatorBuilder), &PY_TYPE_DEF(PythonPropagatorBuilder), module, "PythonPropagatorBuilder", 1);
        }

        void t_PythonPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropagatorBuilder), "class_", make_descriptor(PythonPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropagatorBuilder), "wrapfn_", make_descriptor(t_PythonPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonPropagatorBuilder::initializeClass);
          JNINativeMethod methods[] = {
            { "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;", (void *) t_PythonPropagatorBuilder_buildLeastSquaresModel0 },
            { "buildPropagator", "([D)Lorg/orekit/propagation/Propagator;", (void *) t_PythonPropagatorBuilder_buildPropagator1 },
            { "copy", "()Lorg/orekit/propagation/conversion/PropagatorBuilder;", (void *) t_PythonPropagatorBuilder_copy2 },
            { "getFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonPropagatorBuilder_getFrame3 },
            { "getInitialOrbitDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonPropagatorBuilder_getInitialOrbitDate4 },
            { "getMu", "()D", (void *) t_PythonPropagatorBuilder_getMu5 },
            { "getOrbitType", "()Lorg/orekit/orbits/OrbitType;", (void *) t_PythonPropagatorBuilder_getOrbitType6 },
            { "getOrbitalParametersDrivers", "()Lorg/orekit/utils/ParameterDriversList;", (void *) t_PythonPropagatorBuilder_getOrbitalParametersDrivers7 },
            { "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;", (void *) t_PythonPropagatorBuilder_getPositionAngleType8 },
            { "getPropagationParametersDrivers", "()Lorg/orekit/utils/ParameterDriversList;", (void *) t_PythonPropagatorBuilder_getPropagationParametersDrivers9 },
            { "getSelectedNormalizedParameters", "()[D", (void *) t_PythonPropagatorBuilder_getSelectedNormalizedParameters10 },
            { "pythonDecRef", "()V", (void *) t_PythonPropagatorBuilder_pythonDecRef11 },
            { "resetOrbit", "(Lorg/orekit/orbits/Orbit;)V", (void *) t_PythonPropagatorBuilder_resetOrbit12 },
          };
          env->registerNatives(cls, methods, 13);
        }

        static PyObject *t_PythonPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_PythonPropagatorBuilder::wrap_Object(PythonPropagatorBuilder(((t_PythonPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_PythonPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonPropagatorBuilder_init_(t_PythonPropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          PythonPropagatorBuilder object((jobject) NULL);

          INT_CALL(object = PythonPropagatorBuilder());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonPropagatorBuilder_finalize(t_PythonPropagatorBuilder *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonPropagatorBuilder_pythonExtension(t_PythonPropagatorBuilder *self, PyObject *args)
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

        static jobject JNICALL t_PythonPropagatorBuilder_buildLeastSquaresModel0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::leastsquares::AbstractBatchLSModel value((jobject) NULL);
          PyObject *o0 = JArray<jobject>(a0).wrap(::org::orekit::propagation::conversion::t_PropagatorBuilder::wrap_jobject);
          PyObject *o1 = ::java::util::t_List::wrap_Object(::java::util::List(a1));
          PyObject *o2 = ::org::orekit::utils::t_ParameterDriversList::wrap_Object(::org::orekit::utils::ParameterDriversList(a2));
          PyObject *o3 = ::org::orekit::estimation::leastsquares::t_ModelObserver::wrap_Object(::org::orekit::estimation::leastsquares::ModelObserver(a3));
          PyObject *result = PyObject_CallMethod(obj, "buildLeastSquaresModel", "OOOO", o0, o1, o2, o3);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::initializeClass, &value))
          {
            throwTypeError("buildLeastSquaresModel", result);
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

        static jobject JNICALL t_PythonPropagatorBuilder_buildPropagator1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::Propagator value((jobject) NULL);
          PyObject *o0 = JArray<jdouble>(a0).wrap();
          PyObject *result = PyObject_CallMethod(obj, "buildPropagator", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::Propagator::initializeClass, &value))
          {
            throwTypeError("buildPropagator", result);
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

        static jobject JNICALL t_PythonPropagatorBuilder_copy2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::conversion::PropagatorBuilder value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "copy", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, &value))
          {
            throwTypeError("copy", result);
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

        static jobject JNICALL t_PythonPropagatorBuilder_getFrame3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::frames::Frame value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getFrame", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
          {
            throwTypeError("getFrame", result);
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

        static jobject JNICALL t_PythonPropagatorBuilder_getInitialOrbitDate4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getInitialOrbitDate", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            throwTypeError("getInitialOrbitDate", result);
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

        static jdouble JNICALL t_PythonPropagatorBuilder_getMu5(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *result = PyObject_CallMethod(obj, "getMu", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("getMu", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static jobject JNICALL t_PythonPropagatorBuilder_getOrbitType6(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::orbits::OrbitType value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getOrbitType", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::orbits::OrbitType::initializeClass, &value))
          {
            throwTypeError("getOrbitType", result);
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

        static jobject JNICALL t_PythonPropagatorBuilder_getOrbitalParametersDrivers7(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getOrbitalParametersDrivers", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::utils::ParameterDriversList::initializeClass, &value))
          {
            throwTypeError("getOrbitalParametersDrivers", result);
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

        static jobject JNICALL t_PythonPropagatorBuilder_getPositionAngleType8(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPositionAngleType", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::orbits::PositionAngleType::initializeClass, &value))
          {
            throwTypeError("getPositionAngleType", result);
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

        static jobject JNICALL t_PythonPropagatorBuilder_getPropagationParametersDrivers9(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPropagationParametersDrivers", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::utils::ParameterDriversList::initializeClass, &value))
          {
            throwTypeError("getPropagationParametersDrivers", result);
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

        static jobject JNICALL t_PythonPropagatorBuilder_getSelectedNormalizedParameters10(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          JArray< jdouble > value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getSelectedNormalizedParameters", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "[D", &value))
          {
            throwTypeError("getSelectedNormalizedParameters", result);
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

        static void JNICALL t_PythonPropagatorBuilder_pythonDecRef11(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static void JNICALL t_PythonPropagatorBuilder_resetOrbit12(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::orbits::t_Orbit::wrap_Object(::org::orekit::orbits::Orbit(a0));
          PyObject *result = PyObject_CallMethod(obj, "resetOrbit", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static PyObject *t_PythonPropagatorBuilder_get__self(t_PythonPropagatorBuilder *self, void *data)
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
#include "org/orekit/propagation/events/FieldEventsLogger$FieldLoggedEvent.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldEventsLogger$FieldLoggedEvent::class$ = NULL;
        jmethodID *FieldEventsLogger$FieldLoggedEvent::mids$ = NULL;
        bool FieldEventsLogger$FieldLoggedEvent::live$ = false;

        jclass FieldEventsLogger$FieldLoggedEvent::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldEventsLogger$FieldLoggedEvent");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getEventDetector_07d9256595c42b86] = env->getMethodID(cls, "getEventDetector", "()Lorg/orekit/propagation/events/FieldEventDetector;");
            mids$[mid_getState_381b3e011cde018d] = env->getMethodID(cls, "getState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_isIncreasing_89b302893bdbe1f1] = env->getMethodID(cls, "isIncreasing", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::events::FieldEventDetector FieldEventsLogger$FieldLoggedEvent::getEventDetector() const
        {
          return ::org::orekit::propagation::events::FieldEventDetector(env->callObjectMethod(this$, mids$[mid_getEventDetector_07d9256595c42b86]));
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldEventsLogger$FieldLoggedEvent::getState() const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getState_381b3e011cde018d]));
        }

        jboolean FieldEventsLogger$FieldLoggedEvent::isIncreasing() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isIncreasing_89b302893bdbe1f1]);
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
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_of_(t_FieldEventsLogger$FieldLoggedEvent *self, PyObject *args);
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_getEventDetector(t_FieldEventsLogger$FieldLoggedEvent *self);
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_getState(t_FieldEventsLogger$FieldLoggedEvent *self);
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_isIncreasing(t_FieldEventsLogger$FieldLoggedEvent *self);
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_get__eventDetector(t_FieldEventsLogger$FieldLoggedEvent *self, void *data);
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_get__increasing(t_FieldEventsLogger$FieldLoggedEvent *self, void *data);
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_get__state(t_FieldEventsLogger$FieldLoggedEvent *self, void *data);
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_get__parameters_(t_FieldEventsLogger$FieldLoggedEvent *self, void *data);
        static PyGetSetDef t_FieldEventsLogger$FieldLoggedEvent__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventsLogger$FieldLoggedEvent, eventDetector),
          DECLARE_GET_FIELD(t_FieldEventsLogger$FieldLoggedEvent, increasing),
          DECLARE_GET_FIELD(t_FieldEventsLogger$FieldLoggedEvent, state),
          DECLARE_GET_FIELD(t_FieldEventsLogger$FieldLoggedEvent, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventsLogger$FieldLoggedEvent__methods_[] = {
          DECLARE_METHOD(t_FieldEventsLogger$FieldLoggedEvent, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventsLogger$FieldLoggedEvent, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventsLogger$FieldLoggedEvent, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventsLogger$FieldLoggedEvent, getEventDetector, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventsLogger$FieldLoggedEvent, getState, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventsLogger$FieldLoggedEvent, isIncreasing, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventsLogger$FieldLoggedEvent)[] = {
          { Py_tp_methods, t_FieldEventsLogger$FieldLoggedEvent__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldEventsLogger$FieldLoggedEvent__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventsLogger$FieldLoggedEvent)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldEventsLogger$FieldLoggedEvent, t_FieldEventsLogger$FieldLoggedEvent, FieldEventsLogger$FieldLoggedEvent);
        PyObject *t_FieldEventsLogger$FieldLoggedEvent::wrap_Object(const FieldEventsLogger$FieldLoggedEvent& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventsLogger$FieldLoggedEvent::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventsLogger$FieldLoggedEvent *self = (t_FieldEventsLogger$FieldLoggedEvent *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEventsLogger$FieldLoggedEvent::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventsLogger$FieldLoggedEvent::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventsLogger$FieldLoggedEvent *self = (t_FieldEventsLogger$FieldLoggedEvent *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEventsLogger$FieldLoggedEvent::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventsLogger$FieldLoggedEvent), &PY_TYPE_DEF(FieldEventsLogger$FieldLoggedEvent), module, "FieldEventsLogger$FieldLoggedEvent", 0);
        }

        void t_FieldEventsLogger$FieldLoggedEvent::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventsLogger$FieldLoggedEvent), "class_", make_descriptor(FieldEventsLogger$FieldLoggedEvent::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventsLogger$FieldLoggedEvent), "wrapfn_", make_descriptor(t_FieldEventsLogger$FieldLoggedEvent::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventsLogger$FieldLoggedEvent), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventsLogger$FieldLoggedEvent::initializeClass, 1)))
            return NULL;
          return t_FieldEventsLogger$FieldLoggedEvent::wrap_Object(FieldEventsLogger$FieldLoggedEvent(((t_FieldEventsLogger$FieldLoggedEvent *) arg)->object.this$));
        }
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventsLogger$FieldLoggedEvent::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_of_(t_FieldEventsLogger$FieldLoggedEvent *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_getEventDetector(t_FieldEventsLogger$FieldLoggedEvent *self)
        {
          ::org::orekit::propagation::events::FieldEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetector());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_getState(t_FieldEventsLogger$FieldLoggedEvent *self)
        {
          ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_isIncreasing(t_FieldEventsLogger$FieldLoggedEvent *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isIncreasing());
          Py_RETURN_BOOL(result);
        }
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_get__parameters_(t_FieldEventsLogger$FieldLoggedEvent *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_get__eventDetector(t_FieldEventsLogger$FieldLoggedEvent *self, void *data)
        {
          ::org::orekit::propagation::events::FieldEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetector());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(value);
        }

        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_get__increasing(t_FieldEventsLogger$FieldLoggedEvent *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isIncreasing());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_get__state(t_FieldEventsLogger$FieldLoggedEvent *self, void *data)
        {
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateDifferentiableFunction::class$ = NULL;
        jmethodID *UnivariateDifferentiableFunction::mids$ = NULL;
        bool UnivariateDifferentiableFunction::live$ = false;

        jclass UnivariateDifferentiableFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_value_3eb2b84dba0ab7d2] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::differentiation::Derivative UnivariateDifferentiableFunction::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_3eb2b84dba0ab7d2], a0.this$));
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
        static PyObject *t_UnivariateDifferentiableFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDifferentiableFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDifferentiableFunction_value(t_UnivariateDifferentiableFunction *self, PyObject *args);

        static PyMethodDef t_UnivariateDifferentiableFunction__methods_[] = {
          DECLARE_METHOD(t_UnivariateDifferentiableFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDifferentiableFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDifferentiableFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateDifferentiableFunction)[] = {
          { Py_tp_methods, t_UnivariateDifferentiableFunction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateDifferentiableFunction)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::UnivariateFunction),
          NULL
        };

        DEFINE_TYPE(UnivariateDifferentiableFunction, t_UnivariateDifferentiableFunction, UnivariateDifferentiableFunction);

        void t_UnivariateDifferentiableFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateDifferentiableFunction), &PY_TYPE_DEF(UnivariateDifferentiableFunction), module, "UnivariateDifferentiableFunction", 0);
        }

        void t_UnivariateDifferentiableFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableFunction), "class_", make_descriptor(UnivariateDifferentiableFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableFunction), "wrapfn_", make_descriptor(t_UnivariateDifferentiableFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateDifferentiableFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateDifferentiableFunction::initializeClass, 1)))
            return NULL;
          return t_UnivariateDifferentiableFunction::wrap_Object(UnivariateDifferentiableFunction(((t_UnivariateDifferentiableFunction *) arg)->object.this$));
        }
        static PyObject *t_UnivariateDifferentiableFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateDifferentiableFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateDifferentiableFunction_value(t_UnivariateDifferentiableFunction *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
          {
            OBJ_CALL(result = self->object.value(a0));
            return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateDifferentiableFunction), (PyObject *) self, "value", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/StatUtils.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {

      ::java::lang::Class *StatUtils::class$ = NULL;
      jmethodID *StatUtils::mids$ = NULL;
      bool StatUtils::live$ = false;

      jclass StatUtils::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/stat/StatUtils");

          mids$ = new jmethodID[max_mid];
          mids$[mid_geometricMean_86c4a0582e0747ce] = env->getStaticMethodID(cls, "geometricMean", "([D)D");
          mids$[mid_geometricMean_9eeeb1ae977f525d] = env->getStaticMethodID(cls, "geometricMean", "([DII)D");
          mids$[mid_max_86c4a0582e0747ce] = env->getStaticMethodID(cls, "max", "([D)D");
          mids$[mid_max_9eeeb1ae977f525d] = env->getStaticMethodID(cls, "max", "([DII)D");
          mids$[mid_mean_86c4a0582e0747ce] = env->getStaticMethodID(cls, "mean", "([D)D");
          mids$[mid_mean_9eeeb1ae977f525d] = env->getStaticMethodID(cls, "mean", "([DII)D");
          mids$[mid_meanDifference_628a76297e217f13] = env->getStaticMethodID(cls, "meanDifference", "([D[D)D");
          mids$[mid_min_86c4a0582e0747ce] = env->getStaticMethodID(cls, "min", "([D)D");
          mids$[mid_min_9eeeb1ae977f525d] = env->getStaticMethodID(cls, "min", "([DII)D");
          mids$[mid_mode_1db7c087750eaffe] = env->getStaticMethodID(cls, "mode", "([D)[D");
          mids$[mid_mode_3a89ed5ea3adefb8] = env->getStaticMethodID(cls, "mode", "([DII)[D");
          mids$[mid_normalize_1db7c087750eaffe] = env->getStaticMethodID(cls, "normalize", "([D)[D");
          mids$[mid_percentile_05f591cf0826202b] = env->getStaticMethodID(cls, "percentile", "([DD)D");
          mids$[mid_percentile_52cb74c4004a744d] = env->getStaticMethodID(cls, "percentile", "([DIID)D");
          mids$[mid_populationVariance_86c4a0582e0747ce] = env->getStaticMethodID(cls, "populationVariance", "([D)D");
          mids$[mid_populationVariance_05f591cf0826202b] = env->getStaticMethodID(cls, "populationVariance", "([DD)D");
          mids$[mid_populationVariance_9eeeb1ae977f525d] = env->getStaticMethodID(cls, "populationVariance", "([DII)D");
          mids$[mid_populationVariance_134920ed0a3e958a] = env->getStaticMethodID(cls, "populationVariance", "([DDII)D");
          mids$[mid_product_86c4a0582e0747ce] = env->getStaticMethodID(cls, "product", "([D)D");
          mids$[mid_product_9eeeb1ae977f525d] = env->getStaticMethodID(cls, "product", "([DII)D");
          mids$[mid_sum_86c4a0582e0747ce] = env->getStaticMethodID(cls, "sum", "([D)D");
          mids$[mid_sum_9eeeb1ae977f525d] = env->getStaticMethodID(cls, "sum", "([DII)D");
          mids$[mid_sumDifference_628a76297e217f13] = env->getStaticMethodID(cls, "sumDifference", "([D[D)D");
          mids$[mid_sumLog_86c4a0582e0747ce] = env->getStaticMethodID(cls, "sumLog", "([D)D");
          mids$[mid_sumLog_9eeeb1ae977f525d] = env->getStaticMethodID(cls, "sumLog", "([DII)D");
          mids$[mid_sumSq_86c4a0582e0747ce] = env->getStaticMethodID(cls, "sumSq", "([D)D");
          mids$[mid_sumSq_9eeeb1ae977f525d] = env->getStaticMethodID(cls, "sumSq", "([DII)D");
          mids$[mid_variance_86c4a0582e0747ce] = env->getStaticMethodID(cls, "variance", "([D)D");
          mids$[mid_variance_05f591cf0826202b] = env->getStaticMethodID(cls, "variance", "([DD)D");
          mids$[mid_variance_9eeeb1ae977f525d] = env->getStaticMethodID(cls, "variance", "([DII)D");
          mids$[mid_variance_134920ed0a3e958a] = env->getStaticMethodID(cls, "variance", "([DDII)D");
          mids$[mid_varianceDifference_abf45904c34f3045] = env->getStaticMethodID(cls, "varianceDifference", "([D[DD)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble StatUtils::geometricMean(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_geometricMean_86c4a0582e0747ce], a0.this$);
      }

      jdouble StatUtils::geometricMean(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_geometricMean_9eeeb1ae977f525d], a0.this$, a1, a2);
      }

      jdouble StatUtils::max$(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_max_86c4a0582e0747ce], a0.this$);
      }

      jdouble StatUtils::max$(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_max_9eeeb1ae977f525d], a0.this$, a1, a2);
      }

      jdouble StatUtils::mean$(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_mean_86c4a0582e0747ce], a0.this$);
      }

      jdouble StatUtils::mean$(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_mean_9eeeb1ae977f525d], a0.this$, a1, a2);
      }

      jdouble StatUtils::meanDifference(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_meanDifference_628a76297e217f13], a0.this$, a1.this$);
      }

      jdouble StatUtils::min$(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_min_86c4a0582e0747ce], a0.this$);
      }

      jdouble StatUtils::min$(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_min_9eeeb1ae977f525d], a0.this$, a1, a2);
      }

      JArray< jdouble > StatUtils::mode(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_mode_1db7c087750eaffe], a0.this$));
      }

      JArray< jdouble > StatUtils::mode(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_mode_3a89ed5ea3adefb8], a0.this$, a1, a2));
      }

      JArray< jdouble > StatUtils::normalize(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_normalize_1db7c087750eaffe], a0.this$));
      }

      jdouble StatUtils::percentile(const JArray< jdouble > & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_percentile_05f591cf0826202b], a0.this$, a1);
      }

      jdouble StatUtils::percentile(const JArray< jdouble > & a0, jint a1, jint a2, jdouble a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_percentile_52cb74c4004a744d], a0.this$, a1, a2, a3);
      }

      jdouble StatUtils::populationVariance(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_populationVariance_86c4a0582e0747ce], a0.this$);
      }

      jdouble StatUtils::populationVariance(const JArray< jdouble > & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_populationVariance_05f591cf0826202b], a0.this$, a1);
      }

      jdouble StatUtils::populationVariance(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_populationVariance_9eeeb1ae977f525d], a0.this$, a1, a2);
      }

      jdouble StatUtils::populationVariance(const JArray< jdouble > & a0, jdouble a1, jint a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_populationVariance_134920ed0a3e958a], a0.this$, a1, a2, a3);
      }

      jdouble StatUtils::product(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_product_86c4a0582e0747ce], a0.this$);
      }

      jdouble StatUtils::product(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_product_9eeeb1ae977f525d], a0.this$, a1, a2);
      }

      jdouble StatUtils::sum(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sum_86c4a0582e0747ce], a0.this$);
      }

      jdouble StatUtils::sum(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sum_9eeeb1ae977f525d], a0.this$, a1, a2);
      }

      jdouble StatUtils::sumDifference(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sumDifference_628a76297e217f13], a0.this$, a1.this$);
      }

      jdouble StatUtils::sumLog(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sumLog_86c4a0582e0747ce], a0.this$);
      }

      jdouble StatUtils::sumLog(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sumLog_9eeeb1ae977f525d], a0.this$, a1, a2);
      }

      jdouble StatUtils::sumSq(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sumSq_86c4a0582e0747ce], a0.this$);
      }

      jdouble StatUtils::sumSq(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sumSq_9eeeb1ae977f525d], a0.this$, a1, a2);
      }

      jdouble StatUtils::variance(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_variance_86c4a0582e0747ce], a0.this$);
      }

      jdouble StatUtils::variance(const JArray< jdouble > & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_variance_05f591cf0826202b], a0.this$, a1);
      }

      jdouble StatUtils::variance(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_variance_9eeeb1ae977f525d], a0.this$, a1, a2);
      }

      jdouble StatUtils::variance(const JArray< jdouble > & a0, jdouble a1, jint a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_variance_134920ed0a3e958a], a0.this$, a1, a2, a3);
      }

      jdouble StatUtils::varianceDifference(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_varianceDifference_abf45904c34f3045], a0.this$, a1.this$, a2);
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
      static PyObject *t_StatUtils_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StatUtils_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StatUtils_geometricMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_max(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_mean(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_meanDifference(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_min(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_mode(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_normalize(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StatUtils_percentile(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_populationVariance(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_product(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_sum(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_sumDifference(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_sumLog(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_sumSq(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_variance(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_varianceDifference(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_StatUtils__methods_[] = {
        DECLARE_METHOD(t_StatUtils, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, geometricMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, max, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, mean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, meanDifference, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, min, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, mode, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, normalize, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, percentile, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, populationVariance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, product, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, sum, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, sumDifference, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, sumLog, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, sumSq, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, variance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, varianceDifference, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(StatUtils)[] = {
        { Py_tp_methods, t_StatUtils__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(StatUtils)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(StatUtils, t_StatUtils, StatUtils);

      void t_StatUtils::install(PyObject *module)
      {
        installType(&PY_TYPE(StatUtils), &PY_TYPE_DEF(StatUtils), module, "StatUtils", 0);
      }

      void t_StatUtils::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(StatUtils), "class_", make_descriptor(StatUtils::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StatUtils), "wrapfn_", make_descriptor(t_StatUtils::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StatUtils), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_StatUtils_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, StatUtils::initializeClass, 1)))
          return NULL;
        return t_StatUtils::wrap_Object(StatUtils(((t_StatUtils *) arg)->object.this$));
      }
      static PyObject *t_StatUtils_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, StatUtils::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_StatUtils_geometricMean(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::geometricMean(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::geometricMean(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "geometricMean", args);
        return NULL;
      }

      static PyObject *t_StatUtils_max(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::max$(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::max$(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "max", args);
        return NULL;
      }

      static PyObject *t_StatUtils_mean(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::mean$(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::mean$(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "mean", args);
        return NULL;
      }

      static PyObject *t_StatUtils_meanDifference(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "[D[D", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::meanDifference(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "meanDifference", args);
        return NULL;
      }

      static PyObject *t_StatUtils_min(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::min$(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::min$(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "min", args);
        return NULL;
      }

      static PyObject *t_StatUtils_mode(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::mode(a0));
              return result.wrap();
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::mode(a0, a1, a2));
              return result.wrap();
            }
          }
        }

        PyErr_SetArgsError(type, "mode", args);
        return NULL;
      }

      static PyObject *t_StatUtils_normalize(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::normalize(a0));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "normalize", arg);
        return NULL;
      }

      static PyObject *t_StatUtils_percentile(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "[DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::percentile(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 4:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble a3;
            jdouble result;

            if (!parseArgs(args, "[DIID", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::percentile(a0, a1, a2, a3));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "percentile", args);
        return NULL;
      }

      static PyObject *t_StatUtils_populationVariance(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::populationVariance(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "[DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::populationVariance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::populationVariance(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 4:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble a1;
            jint a2;
            jint a3;
            jdouble result;

            if (!parseArgs(args, "[DDII", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::populationVariance(a0, a1, a2, a3));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "populationVariance", args);
        return NULL;
      }

      static PyObject *t_StatUtils_product(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::product(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::product(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "product", args);
        return NULL;
      }

      static PyObject *t_StatUtils_sum(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::sum(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::sum(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "sum", args);
        return NULL;
      }

      static PyObject *t_StatUtils_sumDifference(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "[D[D", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::sumDifference(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "sumDifference", args);
        return NULL;
      }

      static PyObject *t_StatUtils_sumLog(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::sumLog(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::sumLog(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "sumLog", args);
        return NULL;
      }

      static PyObject *t_StatUtils_sumSq(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::sumSq(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::sumSq(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "sumSq", args);
        return NULL;
      }

      static PyObject *t_StatUtils_variance(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::variance(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "[DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::variance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::variance(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 4:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble a1;
            jint a2;
            jint a3;
            jdouble result;

            if (!parseArgs(args, "[DDII", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::variance(a0, a1, a2, a3));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "variance", args);
        return NULL;
      }

      static PyObject *t_StatUtils_varianceDifference(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::varianceDifference(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "varianceDifference", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/Oem.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemSegment.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataContext.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *OemWriter::class$ = NULL;
              jmethodID *OemWriter::mids$ = NULL;
              bool OemWriter::live$ = false;
              jdouble OemWriter::CCSDS_OEM_VERS = (jdouble) 0;
              ::java::lang::String *OemWriter::DEFAULT_FILE_NAME = NULL;
              jint OemWriter::KVN_PADDING_WIDTH = (jint) 0;

              jclass OemWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/OemWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_170ee021ab23bf06] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_writeSegmentContent_6a3ba9a15a6911b0] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/ndm/odm/oem/OemSegment;)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  CCSDS_OEM_VERS = env->getStaticDoubleField(cls, "CCSDS_OEM_VERS");
                  DEFAULT_FILE_NAME = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_FILE_NAME", "Ljava/lang/String;"));
                  KVN_PADDING_WIDTH = env->getStaticIntField(cls, "KVN_PADDING_WIDTH");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OemWriter::OemWriter(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::data::DataContext & a1, const ::org::orekit::time::AbsoluteDate & a2) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_170ee021ab23bf06, a0.this$, a1.this$, a2.this$)) {}
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
              static PyObject *t_OemWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemWriter_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemWriter_of_(t_OemWriter *self, PyObject *args);
              static int t_OemWriter_init_(t_OemWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OemWriter_get__parameters_(t_OemWriter *self, void *data);
              static PyGetSetDef t_OemWriter__fields_[] = {
                DECLARE_GET_FIELD(t_OemWriter, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OemWriter__methods_[] = {
                DECLARE_METHOD(t_OemWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemWriter, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OemWriter)[] = {
                { Py_tp_methods, t_OemWriter__methods_ },
                { Py_tp_init, (void *) t_OemWriter_init_ },
                { Py_tp_getset, t_OemWriter__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OemWriter)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter),
                NULL
              };

              DEFINE_TYPE(OemWriter, t_OemWriter, OemWriter);
              PyObject *t_OemWriter::wrap_Object(const OemWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_OemWriter::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OemWriter *self = (t_OemWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              PyObject *t_OemWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_OemWriter::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OemWriter *self = (t_OemWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              void t_OemWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(OemWriter), &PY_TYPE_DEF(OemWriter), module, "OemWriter", 0);
              }

              void t_OemWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemWriter), "class_", make_descriptor(OemWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemWriter), "wrapfn_", make_descriptor(t_OemWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemWriter), "boxfn_", make_descriptor(boxObject));
                env->getClass(OemWriter::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemWriter), "CCSDS_OEM_VERS", make_descriptor(OemWriter::CCSDS_OEM_VERS));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemWriter), "DEFAULT_FILE_NAME", make_descriptor(j2p(*OemWriter::DEFAULT_FILE_NAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemWriter), "KVN_PADDING_WIDTH", make_descriptor(OemWriter::KVN_PADDING_WIDTH));
              }

              static PyObject *t_OemWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OemWriter::initializeClass, 1)))
                  return NULL;
                return t_OemWriter::wrap_Object(OemWriter(((t_OemWriter *) arg)->object.this$));
              }
              static PyObject *t_OemWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OemWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OemWriter_of_(t_OemWriter *self, PyObject *args)
              {
                if (!parseArg(args, "T", 3, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_OemWriter_init_(t_OemWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::utils::IERSConventions a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::data::DataContext a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                OemWriter object((jobject) NULL);

                if (!parseArgs(args, "Kkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
                {
                  INT_CALL(object = OemWriter(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::odm::PY_TYPE(OdmHeader);
                  self->parameters[1] = ::org::orekit::files::ccsds::ndm::odm::oem::PY_TYPE(OemSegment);
                  self->parameters[2] = ::org::orekit::files::ccsds::ndm::odm::oem::PY_TYPE(Oem);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_OemWriter_get__parameters_(t_OemWriter *self, void *data)
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
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *MeasurementBuilder::class$ = NULL;
          jmethodID *MeasurementBuilder::mids$ = NULL;
          bool MeasurementBuilder::live$ = false;

          jclass MeasurementBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/MeasurementBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_addModifier_6f472135bf397672] = env->getMethodID(cls, "addModifier", "(Lorg/orekit/estimation/measurements/EstimationModifier;)V");
              mids$[mid_build_9bd3ff0754feb0c8] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/ObservedMeasurement;");
              mids$[mid_getModifiers_0d9551367f7ecdef] = env->getMethodID(cls, "getModifiers", "()Ljava/util/List;");
              mids$[mid_getSatellites_b8c09fefa9db3b83] = env->getMethodID(cls, "getSatellites", "()[Lorg/orekit/estimation/measurements/ObservableSatellite;");
              mids$[mid_init_d5db9a5f2035671b] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void MeasurementBuilder::addModifier(const ::org::orekit::estimation::measurements::EstimationModifier & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addModifier_6f472135bf397672], a0.this$);
          }

          ::org::orekit::estimation::measurements::ObservedMeasurement MeasurementBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::ObservedMeasurement(env->callObjectMethod(this$, mids$[mid_build_9bd3ff0754feb0c8], a0.this$, a1.this$));
          }

          ::java::util::List MeasurementBuilder::getModifiers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getModifiers_0d9551367f7ecdef]));
          }

          JArray< ::org::orekit::estimation::measurements::ObservableSatellite > MeasurementBuilder::getSatellites() const
          {
            return JArray< ::org::orekit::estimation::measurements::ObservableSatellite >(env->callObjectMethod(this$, mids$[mid_getSatellites_b8c09fefa9db3b83]));
          }

          void MeasurementBuilder::init(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_d5db9a5f2035671b], a0.this$, a1.this$);
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
          static PyObject *t_MeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementBuilder_of_(t_MeasurementBuilder *self, PyObject *args);
          static PyObject *t_MeasurementBuilder_addModifier(t_MeasurementBuilder *self, PyObject *arg);
          static PyObject *t_MeasurementBuilder_build(t_MeasurementBuilder *self, PyObject *args);
          static PyObject *t_MeasurementBuilder_getModifiers(t_MeasurementBuilder *self);
          static PyObject *t_MeasurementBuilder_getSatellites(t_MeasurementBuilder *self);
          static PyObject *t_MeasurementBuilder_init(t_MeasurementBuilder *self, PyObject *args);
          static PyObject *t_MeasurementBuilder_get__modifiers(t_MeasurementBuilder *self, void *data);
          static PyObject *t_MeasurementBuilder_get__satellites(t_MeasurementBuilder *self, void *data);
          static PyObject *t_MeasurementBuilder_get__parameters_(t_MeasurementBuilder *self, void *data);
          static PyGetSetDef t_MeasurementBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_MeasurementBuilder, modifiers),
            DECLARE_GET_FIELD(t_MeasurementBuilder, satellites),
            DECLARE_GET_FIELD(t_MeasurementBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MeasurementBuilder__methods_[] = {
            DECLARE_METHOD(t_MeasurementBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_MeasurementBuilder, addModifier, METH_O),
            DECLARE_METHOD(t_MeasurementBuilder, build, METH_VARARGS),
            DECLARE_METHOD(t_MeasurementBuilder, getModifiers, METH_NOARGS),
            DECLARE_METHOD(t_MeasurementBuilder, getSatellites, METH_NOARGS),
            DECLARE_METHOD(t_MeasurementBuilder, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MeasurementBuilder)[] = {
            { Py_tp_methods, t_MeasurementBuilder__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_MeasurementBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MeasurementBuilder)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MeasurementBuilder, t_MeasurementBuilder, MeasurementBuilder);
          PyObject *t_MeasurementBuilder::wrap_Object(const MeasurementBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_MeasurementBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_MeasurementBuilder *self = (t_MeasurementBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_MeasurementBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_MeasurementBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_MeasurementBuilder *self = (t_MeasurementBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_MeasurementBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(MeasurementBuilder), &PY_TYPE_DEF(MeasurementBuilder), module, "MeasurementBuilder", 0);
          }

          void t_MeasurementBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementBuilder), "class_", make_descriptor(MeasurementBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementBuilder), "wrapfn_", make_descriptor(t_MeasurementBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MeasurementBuilder::initializeClass, 1)))
              return NULL;
            return t_MeasurementBuilder::wrap_Object(MeasurementBuilder(((t_MeasurementBuilder *) arg)->object.this$));
          }
          static PyObject *t_MeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MeasurementBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MeasurementBuilder_of_(t_MeasurementBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_MeasurementBuilder_addModifier(t_MeasurementBuilder *self, PyObject *arg)
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

          static PyObject *t_MeasurementBuilder_build(t_MeasurementBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::ObservedMeasurement result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::estimation::measurements::t_ObservedMeasurement::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "build", args);
            return NULL;
          }

          static PyObject *t_MeasurementBuilder_getModifiers(t_MeasurementBuilder *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getModifiers());
            return ::java::util::t_List::wrap_Object(result);
          }

          static PyObject *t_MeasurementBuilder_getSatellites(t_MeasurementBuilder *self)
          {
            JArray< ::org::orekit::estimation::measurements::ObservableSatellite > result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatellites());
            return JArray<jobject>(result.this$).wrap(::org::orekit::estimation::measurements::t_ObservableSatellite::wrap_jobject);
          }

          static PyObject *t_MeasurementBuilder_init(t_MeasurementBuilder *self, PyObject *args)
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
          static PyObject *t_MeasurementBuilder_get__parameters_(t_MeasurementBuilder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_MeasurementBuilder_get__modifiers(t_MeasurementBuilder *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getModifiers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_MeasurementBuilder_get__satellites(t_MeasurementBuilder *self, void *data)
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
#include "java/io/OutputStream.h"
#include "java/io/IOException.h"
#include "java/io/Flushable.h"
#include "java/io/OutputStream.h"
#include "java/io/Closeable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *OutputStream::class$ = NULL;
    jmethodID *OutputStream::mids$ = NULL;
    bool OutputStream::live$ = false;

    jclass OutputStream::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/OutputStream");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_close_0640e6acf969ed28] = env->getMethodID(cls, "close", "()V");
        mids$[mid_flush_0640e6acf969ed28] = env->getMethodID(cls, "flush", "()V");
        mids$[mid_nullOutputStream_b399c41ddcbf30d9] = env->getStaticMethodID(cls, "nullOutputStream", "()Ljava/io/OutputStream;");
        mids$[mid_write_d759c70c6670fd89] = env->getMethodID(cls, "write", "([B)V");
        mids$[mid_write_a3da1a935cb37f7b] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_ac782c7077255dd3] = env->getMethodID(cls, "write", "([BII)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    OutputStream::OutputStream() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    void OutputStream::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_0640e6acf969ed28]);
    }

    void OutputStream::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_0640e6acf969ed28]);
    }

    OutputStream OutputStream::nullOutputStream()
    {
      jclass cls = env->getClass(initializeClass);
      return OutputStream(env->callStaticObjectMethod(cls, mids$[mid_nullOutputStream_b399c41ddcbf30d9]));
    }

    void OutputStream::write(const JArray< jbyte > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_d759c70c6670fd89], a0.this$);
    }

    void OutputStream::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_a3da1a935cb37f7b], a0);
    }

    void OutputStream::write(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_ac782c7077255dd3], a0.this$, a1, a2);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_OutputStream_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_OutputStream_instance_(PyTypeObject *type, PyObject *arg);
    static int t_OutputStream_init_(t_OutputStream *self, PyObject *args, PyObject *kwds);
    static PyObject *t_OutputStream_close(t_OutputStream *self);
    static PyObject *t_OutputStream_flush(t_OutputStream *self);
    static PyObject *t_OutputStream_nullOutputStream(PyTypeObject *type);
    static PyObject *t_OutputStream_write(t_OutputStream *self, PyObject *args);

    static PyMethodDef t_OutputStream__methods_[] = {
      DECLARE_METHOD(t_OutputStream, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_OutputStream, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_OutputStream, close, METH_NOARGS),
      DECLARE_METHOD(t_OutputStream, flush, METH_NOARGS),
      DECLARE_METHOD(t_OutputStream, nullOutputStream, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_OutputStream, write, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(OutputStream)[] = {
      { Py_tp_methods, t_OutputStream__methods_ },
      { Py_tp_init, (void *) t_OutputStream_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(OutputStream)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(OutputStream, t_OutputStream, OutputStream);

    void t_OutputStream::install(PyObject *module)
    {
      installType(&PY_TYPE(OutputStream), &PY_TYPE_DEF(OutputStream), module, "OutputStream", 0);
    }

    void t_OutputStream::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(OutputStream), "class_", make_descriptor(OutputStream::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(OutputStream), "wrapfn_", make_descriptor(t_OutputStream::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(OutputStream), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_OutputStream_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, OutputStream::initializeClass, 1)))
        return NULL;
      return t_OutputStream::wrap_Object(OutputStream(((t_OutputStream *) arg)->object.this$));
    }
    static PyObject *t_OutputStream_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, OutputStream::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_OutputStream_init_(t_OutputStream *self, PyObject *args, PyObject *kwds)
    {
      OutputStream object((jobject) NULL);

      INT_CALL(object = OutputStream());
      self->object = object;

      return 0;
    }

    static PyObject *t_OutputStream_close(t_OutputStream *self)
    {
      OBJ_CALL(self->object.close());
      Py_RETURN_NONE;
    }

    static PyObject *t_OutputStream_flush(t_OutputStream *self)
    {
      OBJ_CALL(self->object.flush());
      Py_RETURN_NONE;
    }

    static PyObject *t_OutputStream_nullOutputStream(PyTypeObject *type)
    {
      OutputStream result((jobject) NULL);
      OBJ_CALL(result = ::java::io::OutputStream::nullOutputStream());
      return t_OutputStream::wrap_Object(result);
    }

    static PyObject *t_OutputStream_write(t_OutputStream *self, PyObject *args)
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

      PyErr_SetArgsError((PyObject *) self, "write", args);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/FieldMidPointIntegrator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
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
            mids$[mid_init$_979ae7f57a96b096] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
            mids$[mid_init$_a9ccb012d4cb48bd] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;II)V");
            mids$[mid_init$_54078aff55a90bb9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DDII)V");
            mids$[mid_doIntegrate_613c8f46c659f636] = env->getMethodID(cls, "doIntegrate", "()Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MIDPOINT_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "MIDPOINT_MAX_ITERATIONS_COUNT");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldMidPointIntegrator::FieldMidPointIntegrator(const ::org::hipparchus::Field & a0) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_979ae7f57a96b096, a0.this$)) {}

        FieldMidPointIntegrator::FieldMidPointIntegrator(const ::org::hipparchus::Field & a0, jint a1, jint a2) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_a9ccb012d4cb48bd, a0.this$, a1, a2)) {}

        FieldMidPointIntegrator::FieldMidPointIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, jint a3, jint a4) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_54078aff55a90bb9, a0.this$, a1, a2, a3, a4)) {}
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
#include "org/orekit/gnss/antenna/TwoDVariation.h"
#include "org/orekit/gnss/antenna/PhaseCenterVariationFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *TwoDVariation::class$ = NULL;
        jmethodID *TwoDVariation::mids$ = NULL;
        bool TwoDVariation::live$ = false;

        jclass TwoDVariation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/TwoDVariation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ef70b75875e99c97] = env->getMethodID(cls, "<init>", "(DDD[[D)V");
            mids$[mid_value_2268d18be49a6087] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TwoDVariation::TwoDVariation(jdouble a0, jdouble a1, jdouble a2, const JArray< JArray< jdouble > > & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ef70b75875e99c97, a0, a1, a2, a3.this$)) {}

        jdouble TwoDVariation::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_2268d18be49a6087], a0, a1);
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
      namespace antenna {
        static PyObject *t_TwoDVariation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TwoDVariation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TwoDVariation_init_(t_TwoDVariation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TwoDVariation_value(t_TwoDVariation *self, PyObject *args);

        static PyMethodDef t_TwoDVariation__methods_[] = {
          DECLARE_METHOD(t_TwoDVariation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TwoDVariation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TwoDVariation, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TwoDVariation)[] = {
          { Py_tp_methods, t_TwoDVariation__methods_ },
          { Py_tp_init, (void *) t_TwoDVariation_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TwoDVariation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TwoDVariation, t_TwoDVariation, TwoDVariation);

        void t_TwoDVariation::install(PyObject *module)
        {
          installType(&PY_TYPE(TwoDVariation), &PY_TYPE_DEF(TwoDVariation), module, "TwoDVariation", 0);
        }

        void t_TwoDVariation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TwoDVariation), "class_", make_descriptor(TwoDVariation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TwoDVariation), "wrapfn_", make_descriptor(t_TwoDVariation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TwoDVariation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TwoDVariation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TwoDVariation::initializeClass, 1)))
            return NULL;
          return t_TwoDVariation::wrap_Object(TwoDVariation(((t_TwoDVariation *) arg)->object.this$));
        }
        static PyObject *t_TwoDVariation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TwoDVariation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TwoDVariation_init_(t_TwoDVariation *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          JArray< JArray< jdouble > > a3((jobject) NULL);
          TwoDVariation object((jobject) NULL);

          if (!parseArgs(args, "DDD[[D", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = TwoDVariation(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_TwoDVariation_value(t_TwoDVariation *self, PyObject *args)
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
#include "org/hipparchus/geometry/euclidean/threed/Plane.h"
#include "org/hipparchus/geometry/euclidean/threed/SubPlane.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/euclidean/threed/Plane.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/partitioning/Embedding.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "org/hipparchus/geometry/euclidean/threed/PolyhedronsSet.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/geometry/Vector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *Plane::class$ = NULL;
          jmethodID *Plane::mids$ = NULL;
          bool Plane::live$ = false;

          jclass Plane::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/Plane");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_9eca765a47180abb] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
              mids$[mid_init$_8a3775c012d81228] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
              mids$[mid_init$_7b8560643974313c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
              mids$[mid_contains_7ccf3b3f40d5fcd3] = env->getMethodID(cls, "contains", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Z");
              mids$[mid_copySelf_1fd0e17d0272ad27] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/euclidean/threed/Plane;");
              mids$[mid_emptyHyperplane_45d5677cf604b36e] = env->getMethodID(cls, "emptyHyperplane", "()Lorg/hipparchus/geometry/euclidean/threed/SubPlane;");
              mids$[mid_getNormal_f88961cca75a2c0a] = env->getMethodID(cls, "getNormal", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getOffset_6c5cc1f7d7387606] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/euclidean/threed/Plane;)D");
              mids$[mid_getOffset_cf1fec2b7b1c0efe] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_getOffset_b540ea36818b5810] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_getOrigin_f88961cca75a2c0a] = env->getMethodID(cls, "getOrigin", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getPointAt_a18591be60e2d678] = env->getMethodID(cls, "getPointAt", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getTolerance_557b8123390d8d0c] = env->getMethodID(cls, "getTolerance", "()D");
              mids$[mid_getU_f88961cca75a2c0a] = env->getMethodID(cls, "getU", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getV_f88961cca75a2c0a] = env->getMethodID(cls, "getV", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_intersection_915d07ea0c621755] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/euclidean/threed/Line;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_intersection_1adc2918a6a6e897] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/euclidean/threed/Plane;)Lorg/hipparchus/geometry/euclidean/threed/Line;");
              mids$[mid_intersection_6cfbbc81cf155b3e] = env->getStaticMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/euclidean/threed/Plane;Lorg/hipparchus/geometry/euclidean/threed/Plane;Lorg/hipparchus/geometry/euclidean/threed/Plane;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_isSimilarTo_ba626117b2392f64] = env->getMethodID(cls, "isSimilarTo", "(Lorg/hipparchus/geometry/euclidean/threed/Plane;)Z");
              mids$[mid_project_328d0d966eeb9668] = env->getMethodID(cls, "project", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/Point;");
              mids$[mid_reset_c6c929e9e9af7f84] = env->getMethodID(cls, "reset", "(Lorg/hipparchus/geometry/euclidean/threed/Plane;)V");
              mids$[mid_reset_be9548a8a583a03d] = env->getMethodID(cls, "reset", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_revertSelf_0640e6acf969ed28] = env->getMethodID(cls, "revertSelf", "()V");
              mids$[mid_rotate_5aeea1a6b4a20ee8] = env->getMethodID(cls, "rotate", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Rotation;)Lorg/hipparchus/geometry/euclidean/threed/Plane;");
              mids$[mid_sameOrientationAs_cb9274a363000a77] = env->getMethodID(cls, "sameOrientationAs", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Z");
              mids$[mid_toSpace_78d94b5fd2b1ad0c] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_toSpace_5d6b94fad5d111c4] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_toSubSpace_52abee4ee839df65] = env->getMethodID(cls, "toSubSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_toSubSpace_adc34d508fd7001c] = env->getMethodID(cls, "toSubSpace", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_translate_7bc527dfa6d63039] = env->getMethodID(cls, "translate", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Plane;");
              mids$[mid_wholeHyperplane_45d5677cf604b36e] = env->getMethodID(cls, "wholeHyperplane", "()Lorg/hipparchus/geometry/euclidean/threed/SubPlane;");
              mids$[mid_wholeSpace_fb1aab73a260a0e4] = env->getMethodID(cls, "wholeSpace", "()Lorg/hipparchus/geometry/euclidean/threed/PolyhedronsSet;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Plane::Plane(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9eca765a47180abb, a0.this$, a1)) {}

          Plane::Plane(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8a3775c012d81228, a0.this$, a1.this$, a2)) {}

          Plane::Plane(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7b8560643974313c, a0.this$, a1.this$, a2.this$, a3)) {}

          jboolean Plane::contains(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_contains_7ccf3b3f40d5fcd3], a0.this$);
          }

          Plane Plane::copySelf() const
          {
            return Plane(env->callObjectMethod(this$, mids$[mid_copySelf_1fd0e17d0272ad27]));
          }

          ::org::hipparchus::geometry::euclidean::threed::SubPlane Plane::emptyHyperplane() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::SubPlane(env->callObjectMethod(this$, mids$[mid_emptyHyperplane_45d5677cf604b36e]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Plane::getNormal() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNormal_f88961cca75a2c0a]));
          }

          jdouble Plane::getOffset(const Plane & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_6c5cc1f7d7387606], a0.this$);
          }

          jdouble Plane::getOffset(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_cf1fec2b7b1c0efe], a0.this$);
          }

          jdouble Plane::getOffset(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_b540ea36818b5810], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Plane::getOrigin() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getOrigin_f88961cca75a2c0a]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Plane::getPointAt(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, jdouble a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPointAt_a18591be60e2d678], a0.this$, a1));
          }

          jdouble Plane::getTolerance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTolerance_557b8123390d8d0c]);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Plane::getU() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getU_f88961cca75a2c0a]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Plane::getV() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getV_f88961cca75a2c0a]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Plane::intersection(const ::org::hipparchus::geometry::euclidean::threed::Line & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_intersection_915d07ea0c621755], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Line Plane::intersection(const Plane & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Line(env->callObjectMethod(this$, mids$[mid_intersection_1adc2918a6a6e897], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Plane::intersection(const Plane & a0, const Plane & a1, const Plane & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callStaticObjectMethod(cls, mids$[mid_intersection_6cfbbc81cf155b3e], a0.this$, a1.this$, a2.this$));
          }

          jboolean Plane::isSimilarTo(const Plane & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_isSimilarTo_ba626117b2392f64], a0.this$);
          }

          ::org::hipparchus::geometry::Point Plane::project(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_project_328d0d966eeb9668], a0.this$));
          }

          void Plane::reset(const Plane & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_reset_c6c929e9e9af7f84], a0.this$);
          }

          void Plane::reset(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_reset_be9548a8a583a03d], a0.this$, a1.this$);
          }

          void Plane::revertSelf() const
          {
            env->callVoidMethod(this$, mids$[mid_revertSelf_0640e6acf969ed28]);
          }

          Plane Plane::rotate(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a1) const
          {
            return Plane(env->callObjectMethod(this$, mids$[mid_rotate_5aeea1a6b4a20ee8], a0.this$, a1.this$));
          }

          jboolean Plane::sameOrientationAs(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_sameOrientationAs_cb9274a363000a77], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Plane::toSpace(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_toSpace_78d94b5fd2b1ad0c], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Plane::toSpace(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_toSpace_5d6b94fad5d111c4], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Plane::toSubSpace(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_toSubSpace_52abee4ee839df65], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Plane::toSubSpace(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_toSubSpace_adc34d508fd7001c], a0.this$));
          }

          Plane Plane::translate(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return Plane(env->callObjectMethod(this$, mids$[mid_translate_7bc527dfa6d63039], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::SubPlane Plane::wholeHyperplane() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::SubPlane(env->callObjectMethod(this$, mids$[mid_wholeHyperplane_45d5677cf604b36e]));
          }

          ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet Plane::wholeSpace() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet(env->callObjectMethod(this$, mids$[mid_wholeSpace_fb1aab73a260a0e4]));
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
          static PyObject *t_Plane_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Plane_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Plane_init_(t_Plane *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Plane_contains(t_Plane *self, PyObject *arg);
          static PyObject *t_Plane_copySelf(t_Plane *self);
          static PyObject *t_Plane_emptyHyperplane(t_Plane *self);
          static PyObject *t_Plane_getNormal(t_Plane *self);
          static PyObject *t_Plane_getOffset(t_Plane *self, PyObject *args);
          static PyObject *t_Plane_getOrigin(t_Plane *self);
          static PyObject *t_Plane_getPointAt(t_Plane *self, PyObject *args);
          static PyObject *t_Plane_getTolerance(t_Plane *self);
          static PyObject *t_Plane_getU(t_Plane *self);
          static PyObject *t_Plane_getV(t_Plane *self);
          static PyObject *t_Plane_intersection(t_Plane *self, PyObject *args);
          static PyObject *t_Plane_intersection_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Plane_isSimilarTo(t_Plane *self, PyObject *arg);
          static PyObject *t_Plane_project(t_Plane *self, PyObject *arg);
          static PyObject *t_Plane_reset(t_Plane *self, PyObject *args);
          static PyObject *t_Plane_revertSelf(t_Plane *self);
          static PyObject *t_Plane_rotate(t_Plane *self, PyObject *args);
          static PyObject *t_Plane_sameOrientationAs(t_Plane *self, PyObject *arg);
          static PyObject *t_Plane_toSpace(t_Plane *self, PyObject *args);
          static PyObject *t_Plane_toSubSpace(t_Plane *self, PyObject *args);
          static PyObject *t_Plane_translate(t_Plane *self, PyObject *arg);
          static PyObject *t_Plane_wholeHyperplane(t_Plane *self);
          static PyObject *t_Plane_wholeSpace(t_Plane *self);
          static PyObject *t_Plane_get__normal(t_Plane *self, void *data);
          static PyObject *t_Plane_get__origin(t_Plane *self, void *data);
          static PyObject *t_Plane_get__tolerance(t_Plane *self, void *data);
          static PyObject *t_Plane_get__u(t_Plane *self, void *data);
          static PyObject *t_Plane_get__v(t_Plane *self, void *data);
          static PyGetSetDef t_Plane__fields_[] = {
            DECLARE_GET_FIELD(t_Plane, normal),
            DECLARE_GET_FIELD(t_Plane, origin),
            DECLARE_GET_FIELD(t_Plane, tolerance),
            DECLARE_GET_FIELD(t_Plane, u),
            DECLARE_GET_FIELD(t_Plane, v),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Plane__methods_[] = {
            DECLARE_METHOD(t_Plane, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Plane, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Plane, contains, METH_O),
            DECLARE_METHOD(t_Plane, copySelf, METH_NOARGS),
            DECLARE_METHOD(t_Plane, emptyHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_Plane, getNormal, METH_NOARGS),
            DECLARE_METHOD(t_Plane, getOffset, METH_VARARGS),
            DECLARE_METHOD(t_Plane, getOrigin, METH_NOARGS),
            DECLARE_METHOD(t_Plane, getPointAt, METH_VARARGS),
            DECLARE_METHOD(t_Plane, getTolerance, METH_NOARGS),
            DECLARE_METHOD(t_Plane, getU, METH_NOARGS),
            DECLARE_METHOD(t_Plane, getV, METH_NOARGS),
            DECLARE_METHOD(t_Plane, intersection, METH_VARARGS),
            DECLARE_METHOD(t_Plane, intersection_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Plane, isSimilarTo, METH_O),
            DECLARE_METHOD(t_Plane, project, METH_O),
            DECLARE_METHOD(t_Plane, reset, METH_VARARGS),
            DECLARE_METHOD(t_Plane, revertSelf, METH_NOARGS),
            DECLARE_METHOD(t_Plane, rotate, METH_VARARGS),
            DECLARE_METHOD(t_Plane, sameOrientationAs, METH_O),
            DECLARE_METHOD(t_Plane, toSpace, METH_VARARGS),
            DECLARE_METHOD(t_Plane, toSubSpace, METH_VARARGS),
            DECLARE_METHOD(t_Plane, translate, METH_O),
            DECLARE_METHOD(t_Plane, wholeHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_Plane, wholeSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Plane)[] = {
            { Py_tp_methods, t_Plane__methods_ },
            { Py_tp_init, (void *) t_Plane_init_ },
            { Py_tp_getset, t_Plane__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Plane)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Plane, t_Plane, Plane);

          void t_Plane::install(PyObject *module)
          {
            installType(&PY_TYPE(Plane), &PY_TYPE_DEF(Plane), module, "Plane", 0);
          }

          void t_Plane::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Plane), "class_", make_descriptor(Plane::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Plane), "wrapfn_", make_descriptor(t_Plane::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Plane), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Plane_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Plane::initializeClass, 1)))
              return NULL;
            return t_Plane::wrap_Object(Plane(((t_Plane *) arg)->object.this$));
          }
          static PyObject *t_Plane_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Plane::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Plane_init_(t_Plane *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                jdouble a1;
                Plane object((jobject) NULL);

                if (!parseArgs(args, "kD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Plane(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                jdouble a2;
                Plane object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = Plane(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
                jdouble a3;
                Plane object((jobject) NULL);

                if (!parseArgs(args, "kkkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = Plane(a0, a1, a2, a3));
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

          static PyObject *t_Plane_contains(t_Plane *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.contains(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "contains", arg);
            return NULL;
          }

          static PyObject *t_Plane_copySelf(t_Plane *self)
          {
            Plane result((jobject) NULL);
            OBJ_CALL(result = self->object.copySelf());
            return t_Plane::wrap_Object(result);
          }

          static PyObject *t_Plane_emptyHyperplane(t_Plane *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::SubPlane result((jobject) NULL);
            OBJ_CALL(result = self->object.emptyHyperplane());
            return ::org::hipparchus::geometry::euclidean::threed::t_SubPlane::wrap_Object(result);
          }

          static PyObject *t_Plane_getNormal(t_Plane *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getNormal());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Plane_getOffset(t_Plane *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                Plane a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", Plane::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble result;

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble result;

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getOffset", args);
            return NULL;
          }

          static PyObject *t_Plane_getOrigin(t_Plane *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getOrigin());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Plane_getPointAt(t_Plane *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
            jdouble a1;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getPointAt(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getPointAt", args);
            return NULL;
          }

          static PyObject *t_Plane_getTolerance(t_Plane *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTolerance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Plane_getU(t_Plane *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getU());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Plane_getV(t_Plane *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getV());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Plane_intersection(t_Plane *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::euclidean::threed::Line a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Line::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.intersection(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                Plane a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Line result((jobject) NULL);

                if (!parseArgs(args, "k", Plane::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.intersection(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Line::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "intersection", args);
            return NULL;
          }

          static PyObject *t_Plane_intersection_(PyTypeObject *type, PyObject *args)
          {
            Plane a0((jobject) NULL);
            Plane a1((jobject) NULL);
            Plane a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kkk", Plane::initializeClass, Plane::initializeClass, Plane::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Plane::intersection(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "intersection_", args);
            return NULL;
          }

          static PyObject *t_Plane_isSimilarTo(t_Plane *self, PyObject *arg)
          {
            Plane a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", Plane::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.isSimilarTo(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "isSimilarTo", arg);
            return NULL;
          }

          static PyObject *t_Plane_project(t_Plane *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::Point result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.project(a0));
              return ::org::hipparchus::geometry::t_Point::wrap_Object(result, ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D));
            }

            PyErr_SetArgsError((PyObject *) self, "project", arg);
            return NULL;
          }

          static PyObject *t_Plane_reset(t_Plane *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                Plane a0((jobject) NULL);

                if (!parseArgs(args, "k", Plane::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.reset(a0));
                  Py_RETURN_NONE;
                }
              }
              break;
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(self->object.reset(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "reset", args);
            return NULL;
          }

          static PyObject *t_Plane_revertSelf(t_Plane *self)
          {
            OBJ_CALL(self->object.revertSelf());
            Py_RETURN_NONE;
          }

          static PyObject *t_Plane_rotate(t_Plane *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a1((jobject) NULL);
            Plane result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.rotate(a0, a1));
              return t_Plane::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "rotate", args);
            return NULL;
          }

          static PyObject *t_Plane_sameOrientationAs(t_Plane *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
            {
              OBJ_CALL(result = self->object.sameOrientationAs(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "sameOrientationAs", arg);
            return NULL;
          }

          static PyObject *t_Plane_toSpace(t_Plane *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.toSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.toSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "toSpace", args);
            return NULL;
          }

          static PyObject *t_Plane_toSubSpace(t_Plane *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.toSubSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.toSubSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "toSubSpace", args);
            return NULL;
          }

          static PyObject *t_Plane_translate(t_Plane *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            Plane result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.translate(a0));
              return t_Plane::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "translate", arg);
            return NULL;
          }

          static PyObject *t_Plane_wholeHyperplane(t_Plane *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::SubPlane result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeHyperplane());
            return ::org::hipparchus::geometry::euclidean::threed::t_SubPlane::wrap_Object(result);
          }

          static PyObject *t_Plane_wholeSpace(t_Plane *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeSpace());
            return ::org::hipparchus::geometry::euclidean::threed::t_PolyhedronsSet::wrap_Object(result);
          }

          static PyObject *t_Plane_get__normal(t_Plane *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getNormal());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Plane_get__origin(t_Plane *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getOrigin());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Plane_get__tolerance(t_Plane *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTolerance());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Plane_get__u(t_Plane *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getU());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Plane_get__v(t_Plane *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getV());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/OneWayGNSSRangeBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSRange.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *OneWayGNSSRangeBuilder::class$ = NULL;
          jmethodID *OneWayGNSSRangeBuilder::mids$ = NULL;
          bool OneWayGNSSRangeBuilder::live$ = false;

          jclass OneWayGNSSRangeBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/OneWayGNSSRangeBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_build_0ad57e96c4beebfa] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/gnss/OneWayGNSSRange;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::estimation::measurements::gnss::OneWayGNSSRange OneWayGNSSRangeBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::gnss::OneWayGNSSRange(env->callObjectMethod(this$, mids$[mid_build_0ad57e96c4beebfa], a0.this$, a1.this$));
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
          static PyObject *t_OneWayGNSSRangeBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OneWayGNSSRangeBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OneWayGNSSRangeBuilder_of_(t_OneWayGNSSRangeBuilder *self, PyObject *args);
          static PyObject *t_OneWayGNSSRangeBuilder_build(t_OneWayGNSSRangeBuilder *self, PyObject *args);
          static PyObject *t_OneWayGNSSRangeBuilder_get__parameters_(t_OneWayGNSSRangeBuilder *self, void *data);
          static PyGetSetDef t_OneWayGNSSRangeBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_OneWayGNSSRangeBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OneWayGNSSRangeBuilder__methods_[] = {
            DECLARE_METHOD(t_OneWayGNSSRangeBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSRangeBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSRangeBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_OneWayGNSSRangeBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OneWayGNSSRangeBuilder)[] = {
            { Py_tp_methods, t_OneWayGNSSRangeBuilder__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_OneWayGNSSRangeBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OneWayGNSSRangeBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(OneWayGNSSRangeBuilder, t_OneWayGNSSRangeBuilder, OneWayGNSSRangeBuilder);
          PyObject *t_OneWayGNSSRangeBuilder::wrap_Object(const OneWayGNSSRangeBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OneWayGNSSRangeBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OneWayGNSSRangeBuilder *self = (t_OneWayGNSSRangeBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_OneWayGNSSRangeBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OneWayGNSSRangeBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OneWayGNSSRangeBuilder *self = (t_OneWayGNSSRangeBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_OneWayGNSSRangeBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(OneWayGNSSRangeBuilder), &PY_TYPE_DEF(OneWayGNSSRangeBuilder), module, "OneWayGNSSRangeBuilder", 0);
          }

          void t_OneWayGNSSRangeBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSRangeBuilder), "class_", make_descriptor(OneWayGNSSRangeBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSRangeBuilder), "wrapfn_", make_descriptor(t_OneWayGNSSRangeBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSRangeBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OneWayGNSSRangeBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OneWayGNSSRangeBuilder::initializeClass, 1)))
              return NULL;
            return t_OneWayGNSSRangeBuilder::wrap_Object(OneWayGNSSRangeBuilder(((t_OneWayGNSSRangeBuilder *) arg)->object.this$));
          }
          static PyObject *t_OneWayGNSSRangeBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OneWayGNSSRangeBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_OneWayGNSSRangeBuilder_of_(t_OneWayGNSSRangeBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_OneWayGNSSRangeBuilder_build(t_OneWayGNSSRangeBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::gnss::OneWayGNSSRange result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::gnss::t_OneWayGNSSRange::wrap_Object(result);
            }

            return callSuper(PY_TYPE(OneWayGNSSRangeBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_OneWayGNSSRangeBuilder_get__parameters_(t_OneWayGNSSRangeBuilder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
