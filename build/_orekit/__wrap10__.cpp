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
                mids$[mid_getGridPoints_0fb3037dbc9bf797] = env->getMethodID(cls, "getGridPoints", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            JArray< ::org::hipparchus::CalculusFieldElement > FieldInterpolationGrid::getGridPoints(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getGridPoints_0fb3037dbc9bf797], a0.this$, a1.this$));
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
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/InputStream.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "java/io/OutputStream.h"
#include "java/io/Closeable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *InputStream::class$ = NULL;
    jmethodID *InputStream::mids$ = NULL;
    bool InputStream::live$ = false;

    jclass InputStream::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/InputStream");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_available_d6ab429752e7c267] = env->getMethodID(cls, "available", "()I");
        mids$[mid_close_ff7cb6c242604316] = env->getMethodID(cls, "close", "()V");
        mids$[mid_mark_8fd427ab23829bf5] = env->getMethodID(cls, "mark", "(I)V");
        mids$[mid_markSupported_eee3de00fe971136] = env->getMethodID(cls, "markSupported", "()Z");
        mids$[mid_nullInputStream_af9d97da329e95d9] = env->getStaticMethodID(cls, "nullInputStream", "()Ljava/io/InputStream;");
        mids$[mid_read_d6ab429752e7c267] = env->getMethodID(cls, "read", "()I");
        mids$[mid_read_89e14f411787412a] = env->getMethodID(cls, "read", "([B)I");
        mids$[mid_read_1351cbafe5a435a7] = env->getMethodID(cls, "read", "([BII)I");
        mids$[mid_readAllBytes_7b0acd212e47f280] = env->getMethodID(cls, "readAllBytes", "()[B");
        mids$[mid_readNBytes_14e0df864d3b6f60] = env->getMethodID(cls, "readNBytes", "(I)[B");
        mids$[mid_readNBytes_1351cbafe5a435a7] = env->getMethodID(cls, "readNBytes", "([BII)I");
        mids$[mid_reset_ff7cb6c242604316] = env->getMethodID(cls, "reset", "()V");
        mids$[mid_skip_1eaf6eb0a3f3163f] = env->getMethodID(cls, "skip", "(J)J");
        mids$[mid_transferTo_529fd65c3d4bffcb] = env->getMethodID(cls, "transferTo", "(Ljava/io/OutputStream;)J");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    InputStream::InputStream() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    jint InputStream::available() const
    {
      return env->callIntMethod(this$, mids$[mid_available_d6ab429752e7c267]);
    }

    void InputStream::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_ff7cb6c242604316]);
    }

    void InputStream::mark(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_mark_8fd427ab23829bf5], a0);
    }

    jboolean InputStream::markSupported() const
    {
      return env->callBooleanMethod(this$, mids$[mid_markSupported_eee3de00fe971136]);
    }

    InputStream InputStream::nullInputStream()
    {
      jclass cls = env->getClass(initializeClass);
      return InputStream(env->callStaticObjectMethod(cls, mids$[mid_nullInputStream_af9d97da329e95d9]));
    }

    jint InputStream::read() const
    {
      return env->callIntMethod(this$, mids$[mid_read_d6ab429752e7c267]);
    }

    jint InputStream::read(const JArray< jbyte > & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_read_89e14f411787412a], a0.this$);
    }

    jint InputStream::read(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      return env->callIntMethod(this$, mids$[mid_read_1351cbafe5a435a7], a0.this$, a1, a2);
    }

    JArray< jbyte > InputStream::readAllBytes() const
    {
      return JArray< jbyte >(env->callObjectMethod(this$, mids$[mid_readAllBytes_7b0acd212e47f280]));
    }

    JArray< jbyte > InputStream::readNBytes(jint a0) const
    {
      return JArray< jbyte >(env->callObjectMethod(this$, mids$[mid_readNBytes_14e0df864d3b6f60], a0));
    }

    jint InputStream::readNBytes(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      return env->callIntMethod(this$, mids$[mid_readNBytes_1351cbafe5a435a7], a0.this$, a1, a2);
    }

    void InputStream::reset() const
    {
      env->callVoidMethod(this$, mids$[mid_reset_ff7cb6c242604316]);
    }

    jlong InputStream::skip(jlong a0) const
    {
      return env->callLongMethod(this$, mids$[mid_skip_1eaf6eb0a3f3163f], a0);
    }

    jlong InputStream::transferTo(const ::java::io::OutputStream & a0) const
    {
      return env->callLongMethod(this$, mids$[mid_transferTo_529fd65c3d4bffcb], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_InputStream_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_InputStream_instance_(PyTypeObject *type, PyObject *arg);
    static int t_InputStream_init_(t_InputStream *self, PyObject *args, PyObject *kwds);
    static PyObject *t_InputStream_available(t_InputStream *self);
    static PyObject *t_InputStream_close(t_InputStream *self);
    static PyObject *t_InputStream_mark(t_InputStream *self, PyObject *arg);
    static PyObject *t_InputStream_markSupported(t_InputStream *self);
    static PyObject *t_InputStream_nullInputStream(PyTypeObject *type);
    static PyObject *t_InputStream_read(t_InputStream *self, PyObject *args);
    static PyObject *t_InputStream_readAllBytes(t_InputStream *self);
    static PyObject *t_InputStream_readNBytes(t_InputStream *self, PyObject *args);
    static PyObject *t_InputStream_reset(t_InputStream *self);
    static PyObject *t_InputStream_skip(t_InputStream *self, PyObject *arg);
    static PyObject *t_InputStream_transferTo(t_InputStream *self, PyObject *arg);

    static PyMethodDef t_InputStream__methods_[] = {
      DECLARE_METHOD(t_InputStream, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_InputStream, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_InputStream, available, METH_NOARGS),
      DECLARE_METHOD(t_InputStream, close, METH_NOARGS),
      DECLARE_METHOD(t_InputStream, mark, METH_O),
      DECLARE_METHOD(t_InputStream, markSupported, METH_NOARGS),
      DECLARE_METHOD(t_InputStream, nullInputStream, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_InputStream, read, METH_VARARGS),
      DECLARE_METHOD(t_InputStream, readAllBytes, METH_NOARGS),
      DECLARE_METHOD(t_InputStream, readNBytes, METH_VARARGS),
      DECLARE_METHOD(t_InputStream, reset, METH_NOARGS),
      DECLARE_METHOD(t_InputStream, skip, METH_O),
      DECLARE_METHOD(t_InputStream, transferTo, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(InputStream)[] = {
      { Py_tp_methods, t_InputStream__methods_ },
      { Py_tp_init, (void *) t_InputStream_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(InputStream)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(InputStream, t_InputStream, InputStream);

    void t_InputStream::install(PyObject *module)
    {
      installType(&PY_TYPE(InputStream), &PY_TYPE_DEF(InputStream), module, "InputStream", 0);
    }

    void t_InputStream::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(InputStream), "class_", make_descriptor(InputStream::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(InputStream), "wrapfn_", make_descriptor(t_InputStream::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(InputStream), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_InputStream_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, InputStream::initializeClass, 1)))
        return NULL;
      return t_InputStream::wrap_Object(InputStream(((t_InputStream *) arg)->object.this$));
    }
    static PyObject *t_InputStream_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, InputStream::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_InputStream_init_(t_InputStream *self, PyObject *args, PyObject *kwds)
    {
      InputStream object((jobject) NULL);

      INT_CALL(object = InputStream());
      self->object = object;

      return 0;
    }

    static PyObject *t_InputStream_available(t_InputStream *self)
    {
      jint result;
      OBJ_CALL(result = self->object.available());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_InputStream_close(t_InputStream *self)
    {
      OBJ_CALL(self->object.close());
      Py_RETURN_NONE;
    }

    static PyObject *t_InputStream_mark(t_InputStream *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.mark(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "mark", arg);
      return NULL;
    }

    static PyObject *t_InputStream_markSupported(t_InputStream *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.markSupported());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_InputStream_nullInputStream(PyTypeObject *type)
    {
      InputStream result((jobject) NULL);
      OBJ_CALL(result = ::java::io::InputStream::nullInputStream());
      return t_InputStream::wrap_Object(result);
    }

    static PyObject *t_InputStream_read(t_InputStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          jint result;
          OBJ_CALL(result = self->object.read());
          return PyLong_FromLong((long) result);
        }
        break;
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[B", &a0))
          {
            OBJ_CALL(result = self->object.read(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 3:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.read(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "read", args);
      return NULL;
    }

    static PyObject *t_InputStream_readAllBytes(t_InputStream *self)
    {
      JArray< jbyte > result((jobject) NULL);
      OBJ_CALL(result = self->object.readAllBytes());
      return result.wrap();
    }

    static PyObject *t_InputStream_readNBytes(t_InputStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jint a0;
          JArray< jbyte > result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.readNBytes(a0));
            return result.wrap();
          }
        }
        break;
       case 3:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.readNBytes(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "readNBytes", args);
      return NULL;
    }

    static PyObject *t_InputStream_reset(t_InputStream *self)
    {
      OBJ_CALL(self->object.reset());
      Py_RETURN_NONE;
    }

    static PyObject *t_InputStream_skip(t_InputStream *self, PyObject *arg)
    {
      jlong a0;
      jlong result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = self->object.skip(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError((PyObject *) self, "skip", arg);
      return NULL;
    }

    static PyObject *t_InputStream_transferTo(t_InputStream *self, PyObject *arg)
    {
      ::java::io::OutputStream a0((jobject) NULL);
      jlong result;

      if (!parseArg(arg, "k", ::java::io::OutputStream::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.transferTo(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError((PyObject *) self, "transferTo", arg);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/LongitudeCrossingDetector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/propagation/events/LongitudeCrossingDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *LongitudeCrossingDetector::class$ = NULL;
        jmethodID *LongitudeCrossingDetector::mids$ = NULL;
        bool LongitudeCrossingDetector::live$ = false;

        jclass LongitudeCrossingDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/LongitudeCrossingDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4a8b2a0e42b8245c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
            mids$[mid_init$_50506f2259cf207f] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/bodies/OneAxisEllipsoid;D)V");
            mids$[mid_g_b443ba1cc794b916] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getBody_dc8275c31111ad9c] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/OneAxisEllipsoid;");
            mids$[mid_getLongitude_9981f74b2d109da6] = env->getMethodID(cls, "getLongitude", "()D");
            mids$[mid_init_14deaae988292d42] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_create_842e6e7144e624ed] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/LongitudeCrossingDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LongitudeCrossingDetector::LongitudeCrossingDetector(const ::org::orekit::bodies::OneAxisEllipsoid & a0, jdouble a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_4a8b2a0e42b8245c, a0.this$, a1)) {}

        LongitudeCrossingDetector::LongitudeCrossingDetector(jdouble a0, jdouble a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jdouble a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_50506f2259cf207f, a0, a1, a2.this$, a3)) {}

        jdouble LongitudeCrossingDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_b443ba1cc794b916], a0.this$);
        }

        ::org::orekit::bodies::OneAxisEllipsoid LongitudeCrossingDetector::getBody() const
        {
          return ::org::orekit::bodies::OneAxisEllipsoid(env->callObjectMethod(this$, mids$[mid_getBody_dc8275c31111ad9c]));
        }

        jdouble LongitudeCrossingDetector::getLongitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLongitude_9981f74b2d109da6]);
        }

        void LongitudeCrossingDetector::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_14deaae988292d42], a0.this$, a1.this$);
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
        static PyObject *t_LongitudeCrossingDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LongitudeCrossingDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LongitudeCrossingDetector_of_(t_LongitudeCrossingDetector *self, PyObject *args);
        static int t_LongitudeCrossingDetector_init_(t_LongitudeCrossingDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LongitudeCrossingDetector_g(t_LongitudeCrossingDetector *self, PyObject *args);
        static PyObject *t_LongitudeCrossingDetector_getBody(t_LongitudeCrossingDetector *self);
        static PyObject *t_LongitudeCrossingDetector_getLongitude(t_LongitudeCrossingDetector *self);
        static PyObject *t_LongitudeCrossingDetector_init(t_LongitudeCrossingDetector *self, PyObject *args);
        static PyObject *t_LongitudeCrossingDetector_get__body(t_LongitudeCrossingDetector *self, void *data);
        static PyObject *t_LongitudeCrossingDetector_get__longitude(t_LongitudeCrossingDetector *self, void *data);
        static PyObject *t_LongitudeCrossingDetector_get__parameters_(t_LongitudeCrossingDetector *self, void *data);
        static PyGetSetDef t_LongitudeCrossingDetector__fields_[] = {
          DECLARE_GET_FIELD(t_LongitudeCrossingDetector, body),
          DECLARE_GET_FIELD(t_LongitudeCrossingDetector, longitude),
          DECLARE_GET_FIELD(t_LongitudeCrossingDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LongitudeCrossingDetector__methods_[] = {
          DECLARE_METHOD(t_LongitudeCrossingDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LongitudeCrossingDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LongitudeCrossingDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_LongitudeCrossingDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_LongitudeCrossingDetector, getBody, METH_NOARGS),
          DECLARE_METHOD(t_LongitudeCrossingDetector, getLongitude, METH_NOARGS),
          DECLARE_METHOD(t_LongitudeCrossingDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LongitudeCrossingDetector)[] = {
          { Py_tp_methods, t_LongitudeCrossingDetector__methods_ },
          { Py_tp_init, (void *) t_LongitudeCrossingDetector_init_ },
          { Py_tp_getset, t_LongitudeCrossingDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LongitudeCrossingDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(LongitudeCrossingDetector, t_LongitudeCrossingDetector, LongitudeCrossingDetector);
        PyObject *t_LongitudeCrossingDetector::wrap_Object(const LongitudeCrossingDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LongitudeCrossingDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LongitudeCrossingDetector *self = (t_LongitudeCrossingDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_LongitudeCrossingDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LongitudeCrossingDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LongitudeCrossingDetector *self = (t_LongitudeCrossingDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_LongitudeCrossingDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(LongitudeCrossingDetector), &PY_TYPE_DEF(LongitudeCrossingDetector), module, "LongitudeCrossingDetector", 0);
        }

        void t_LongitudeCrossingDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LongitudeCrossingDetector), "class_", make_descriptor(LongitudeCrossingDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LongitudeCrossingDetector), "wrapfn_", make_descriptor(t_LongitudeCrossingDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LongitudeCrossingDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LongitudeCrossingDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LongitudeCrossingDetector::initializeClass, 1)))
            return NULL;
          return t_LongitudeCrossingDetector::wrap_Object(LongitudeCrossingDetector(((t_LongitudeCrossingDetector *) arg)->object.this$));
        }
        static PyObject *t_LongitudeCrossingDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LongitudeCrossingDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_LongitudeCrossingDetector_of_(t_LongitudeCrossingDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_LongitudeCrossingDetector_init_(t_LongitudeCrossingDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
              jdouble a1;
              LongitudeCrossingDetector object((jobject) NULL);

              if (!parseArgs(args, "kD", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1))
              {
                INT_CALL(object = LongitudeCrossingDetector(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(LongitudeCrossingDetector);
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
              jdouble a3;
              LongitudeCrossingDetector object((jobject) NULL);

              if (!parseArgs(args, "DDkD", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = LongitudeCrossingDetector(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(LongitudeCrossingDetector);
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

        static PyObject *t_LongitudeCrossingDetector_g(t_LongitudeCrossingDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LongitudeCrossingDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_LongitudeCrossingDetector_getBody(t_LongitudeCrossingDetector *self)
        {
          ::org::orekit::bodies::OneAxisEllipsoid result((jobject) NULL);
          OBJ_CALL(result = self->object.getBody());
          return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(result);
        }

        static PyObject *t_LongitudeCrossingDetector_getLongitude(t_LongitudeCrossingDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLongitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LongitudeCrossingDetector_init(t_LongitudeCrossingDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(LongitudeCrossingDetector), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_LongitudeCrossingDetector_get__parameters_(t_LongitudeCrossingDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_LongitudeCrossingDetector_get__body(t_LongitudeCrossingDetector *self, void *data)
        {
          ::org::orekit::bodies::OneAxisEllipsoid value((jobject) NULL);
          OBJ_CALL(value = self->object.getBody());
          return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(value);
        }

        static PyObject *t_LongitudeCrossingDetector_get__longitude(t_LongitudeCrossingDetector *self, void *data)
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
#include "org/orekit/estimation/measurements/generation/BistaticRangeRateBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/util/Map.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/BistaticRangeRate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *BistaticRangeRateBuilder::class$ = NULL;
          jmethodID *BistaticRangeRateBuilder::mids$ = NULL;
          bool BistaticRangeRateBuilder::live$ = false;

          jclass BistaticRangeRateBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/BistaticRangeRateBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_10af0e412dc0df53] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_becf7b739de9849e] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/BistaticRangeRate;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          BistaticRangeRateBuilder::BistaticRangeRateBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::estimation::measurements::GroundStation & a2, jdouble a3, jdouble a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_10af0e412dc0df53, a0.this$, a1.this$, a2.this$, a3, a4, a5.this$)) {}

          ::org::orekit::estimation::measurements::BistaticRangeRate BistaticRangeRateBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::BistaticRangeRate(env->callObjectMethod(this$, mids$[mid_build_becf7b739de9849e], a0.this$, a1.this$));
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
          static PyObject *t_BistaticRangeRateBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BistaticRangeRateBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BistaticRangeRateBuilder_of_(t_BistaticRangeRateBuilder *self, PyObject *args);
          static int t_BistaticRangeRateBuilder_init_(t_BistaticRangeRateBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_BistaticRangeRateBuilder_build(t_BistaticRangeRateBuilder *self, PyObject *args);
          static PyObject *t_BistaticRangeRateBuilder_get__parameters_(t_BistaticRangeRateBuilder *self, void *data);
          static PyGetSetDef t_BistaticRangeRateBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_BistaticRangeRateBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_BistaticRangeRateBuilder__methods_[] = {
            DECLARE_METHOD(t_BistaticRangeRateBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeRateBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeRateBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_BistaticRangeRateBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BistaticRangeRateBuilder)[] = {
            { Py_tp_methods, t_BistaticRangeRateBuilder__methods_ },
            { Py_tp_init, (void *) t_BistaticRangeRateBuilder_init_ },
            { Py_tp_getset, t_BistaticRangeRateBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BistaticRangeRateBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(BistaticRangeRateBuilder, t_BistaticRangeRateBuilder, BistaticRangeRateBuilder);
          PyObject *t_BistaticRangeRateBuilder::wrap_Object(const BistaticRangeRateBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_BistaticRangeRateBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_BistaticRangeRateBuilder *self = (t_BistaticRangeRateBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_BistaticRangeRateBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_BistaticRangeRateBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_BistaticRangeRateBuilder *self = (t_BistaticRangeRateBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_BistaticRangeRateBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(BistaticRangeRateBuilder), &PY_TYPE_DEF(BistaticRangeRateBuilder), module, "BistaticRangeRateBuilder", 0);
          }

          void t_BistaticRangeRateBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRateBuilder), "class_", make_descriptor(BistaticRangeRateBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRateBuilder), "wrapfn_", make_descriptor(t_BistaticRangeRateBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRateBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BistaticRangeRateBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BistaticRangeRateBuilder::initializeClass, 1)))
              return NULL;
            return t_BistaticRangeRateBuilder::wrap_Object(BistaticRangeRateBuilder(((t_BistaticRangeRateBuilder *) arg)->object.this$));
          }
          static PyObject *t_BistaticRangeRateBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BistaticRangeRateBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_BistaticRangeRateBuilder_of_(t_BistaticRangeRateBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_BistaticRangeRateBuilder_init_(t_BistaticRangeRateBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a2((jobject) NULL);
            jdouble a3;
            jdouble a4;
            ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
            BistaticRangeRateBuilder object((jobject) NULL);

            if (!parseArgs(args, "kkkDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = BistaticRangeRateBuilder(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(BistaticRangeRate);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_BistaticRangeRateBuilder_build(t_BistaticRangeRateBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::BistaticRangeRate result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_BistaticRangeRate::wrap_Object(result);
            }

            return callSuper(PY_TYPE(BistaticRangeRateBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_BistaticRangeRateBuilder_get__parameters_(t_BistaticRangeRateBuilder *self, void *data)
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
#include "org/orekit/estimation/measurements/gnss/PythonAbstractLambdaMethod.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PythonAbstractLambdaMethod::class$ = NULL;
          jmethodID *PythonAbstractLambdaMethod::mids$ = NULL;
          bool PythonAbstractLambdaMethod::live$ = false;

          jclass PythonAbstractLambdaMethod::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PythonAbstractLambdaMethod");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_discreteSearch_ff7cb6c242604316] = env->getMethodID(cls, "discreteSearch", "()V");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_inverseDecomposition_ff7cb6c242604316] = env->getMethodID(cls, "inverseDecomposition", "()V");
              mids$[mid_ltdlDecomposition_ff7cb6c242604316] = env->getMethodID(cls, "ltdlDecomposition", "()V");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_reduction_ff7cb6c242604316] = env->getMethodID(cls, "reduction", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractLambdaMethod::PythonAbstractLambdaMethod() : ::org::orekit::estimation::measurements::gnss::AbstractLambdaMethod(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void PythonAbstractLambdaMethod::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonAbstractLambdaMethod::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonAbstractLambdaMethod::pythonExtension(jlong a0) const
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
          static PyObject *t_PythonAbstractLambdaMethod_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractLambdaMethod_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonAbstractLambdaMethod_init_(t_PythonAbstractLambdaMethod *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractLambdaMethod_finalize(t_PythonAbstractLambdaMethod *self);
          static PyObject *t_PythonAbstractLambdaMethod_pythonExtension(t_PythonAbstractLambdaMethod *self, PyObject *args);
          static void JNICALL t_PythonAbstractLambdaMethod_discreteSearch0(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonAbstractLambdaMethod_inverseDecomposition1(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonAbstractLambdaMethod_ltdlDecomposition2(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonAbstractLambdaMethod_pythonDecRef3(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonAbstractLambdaMethod_reduction4(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractLambdaMethod_get__self(t_PythonAbstractLambdaMethod *self, void *data);
          static PyGetSetDef t_PythonAbstractLambdaMethod__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractLambdaMethod, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractLambdaMethod__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractLambdaMethod, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractLambdaMethod, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractLambdaMethod, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractLambdaMethod, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractLambdaMethod)[] = {
            { Py_tp_methods, t_PythonAbstractLambdaMethod__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractLambdaMethod_init_ },
            { Py_tp_getset, t_PythonAbstractLambdaMethod__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractLambdaMethod)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractLambdaMethod),
            NULL
          };

          DEFINE_TYPE(PythonAbstractLambdaMethod, t_PythonAbstractLambdaMethod, PythonAbstractLambdaMethod);

          void t_PythonAbstractLambdaMethod::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractLambdaMethod), &PY_TYPE_DEF(PythonAbstractLambdaMethod), module, "PythonAbstractLambdaMethod", 1);
          }

          void t_PythonAbstractLambdaMethod::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractLambdaMethod), "class_", make_descriptor(PythonAbstractLambdaMethod::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractLambdaMethod), "wrapfn_", make_descriptor(t_PythonAbstractLambdaMethod::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractLambdaMethod), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractLambdaMethod::initializeClass);
            JNINativeMethod methods[] = {
              { "discreteSearch", "()V", (void *) t_PythonAbstractLambdaMethod_discreteSearch0 },
              { "inverseDecomposition", "()V", (void *) t_PythonAbstractLambdaMethod_inverseDecomposition1 },
              { "ltdlDecomposition", "()V", (void *) t_PythonAbstractLambdaMethod_ltdlDecomposition2 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractLambdaMethod_pythonDecRef3 },
              { "reduction", "()V", (void *) t_PythonAbstractLambdaMethod_reduction4 },
            };
            env->registerNatives(cls, methods, 5);
          }

          static PyObject *t_PythonAbstractLambdaMethod_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractLambdaMethod::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractLambdaMethod::wrap_Object(PythonAbstractLambdaMethod(((t_PythonAbstractLambdaMethod *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractLambdaMethod_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractLambdaMethod::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonAbstractLambdaMethod_init_(t_PythonAbstractLambdaMethod *self, PyObject *args, PyObject *kwds)
          {
            PythonAbstractLambdaMethod object((jobject) NULL);

            INT_CALL(object = PythonAbstractLambdaMethod());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonAbstractLambdaMethod_finalize(t_PythonAbstractLambdaMethod *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractLambdaMethod_pythonExtension(t_PythonAbstractLambdaMethod *self, PyObject *args)
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

          static void JNICALL t_PythonAbstractLambdaMethod_discreteSearch0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractLambdaMethod::mids$[PythonAbstractLambdaMethod::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "discreteSearch", "");
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonAbstractLambdaMethod_inverseDecomposition1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractLambdaMethod::mids$[PythonAbstractLambdaMethod::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "inverseDecomposition", "");
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonAbstractLambdaMethod_ltdlDecomposition2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractLambdaMethod::mids$[PythonAbstractLambdaMethod::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "ltdlDecomposition", "");
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonAbstractLambdaMethod_pythonDecRef3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractLambdaMethod::mids$[PythonAbstractLambdaMethod::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractLambdaMethod::mids$[PythonAbstractLambdaMethod::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static void JNICALL t_PythonAbstractLambdaMethod_reduction4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractLambdaMethod::mids$[PythonAbstractLambdaMethod::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "reduction", "");
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static PyObject *t_PythonAbstractLambdaMethod_get__self(t_PythonAbstractLambdaMethod *self, void *data)
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
#include "org/orekit/data/PythonDataContext.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/models/earth/GeoMagneticFields.h"
#include "org/orekit/forces/gravity/potential/GravityFields.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/Frames.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PythonDataContext::class$ = NULL;
      jmethodID *PythonDataContext::mids$ = NULL;
      bool PythonDataContext::live$ = false;

      jclass PythonDataContext::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PythonDataContext");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getCelestialBodies_62495cefe741b009] = env->getMethodID(cls, "getCelestialBodies", "()Lorg/orekit/bodies/CelestialBodies;");
          mids$[mid_getFrames_34da2547798ee1dc] = env->getMethodID(cls, "getFrames", "()Lorg/orekit/frames/Frames;");
          mids$[mid_getGeoMagneticFields_7d1b07207cbeab65] = env->getMethodID(cls, "getGeoMagneticFields", "()Lorg/orekit/models/earth/GeoMagneticFields;");
          mids$[mid_getGravityFields_3af6c17fe31f8686] = env->getMethodID(cls, "getGravityFields", "()Lorg/orekit/forces/gravity/potential/GravityFields;");
          mids$[mid_getTimeScales_796d09eb9f0f96ef] = env->getMethodID(cls, "getTimeScales", "()Lorg/orekit/time/TimeScales;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonDataContext::PythonDataContext() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonDataContext::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonDataContext::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonDataContext::pythonExtension(jlong a0) const
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
    namespace data {
      static PyObject *t_PythonDataContext_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonDataContext_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonDataContext_init_(t_PythonDataContext *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonDataContext_finalize(t_PythonDataContext *self);
      static PyObject *t_PythonDataContext_pythonExtension(t_PythonDataContext *self, PyObject *args);
      static jobject JNICALL t_PythonDataContext_getCelestialBodies0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonDataContext_getFrames1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonDataContext_getGeoMagneticFields2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonDataContext_getGravityFields3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonDataContext_getTimeScales4(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonDataContext_pythonDecRef5(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonDataContext_get__self(t_PythonDataContext *self, void *data);
      static PyGetSetDef t_PythonDataContext__fields_[] = {
        DECLARE_GET_FIELD(t_PythonDataContext, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonDataContext__methods_[] = {
        DECLARE_METHOD(t_PythonDataContext, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDataContext, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDataContext, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonDataContext, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonDataContext)[] = {
        { Py_tp_methods, t_PythonDataContext__methods_ },
        { Py_tp_init, (void *) t_PythonDataContext_init_ },
        { Py_tp_getset, t_PythonDataContext__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonDataContext)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonDataContext, t_PythonDataContext, PythonDataContext);

      void t_PythonDataContext::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonDataContext), &PY_TYPE_DEF(PythonDataContext), module, "PythonDataContext", 1);
      }

      void t_PythonDataContext::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataContext), "class_", make_descriptor(PythonDataContext::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataContext), "wrapfn_", make_descriptor(t_PythonDataContext::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataContext), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonDataContext::initializeClass);
        JNINativeMethod methods[] = {
          { "getCelestialBodies", "()Lorg/orekit/bodies/CelestialBodies;", (void *) t_PythonDataContext_getCelestialBodies0 },
          { "getFrames", "()Lorg/orekit/frames/Frames;", (void *) t_PythonDataContext_getFrames1 },
          { "getGeoMagneticFields", "()Lorg/orekit/models/earth/GeoMagneticFields;", (void *) t_PythonDataContext_getGeoMagneticFields2 },
          { "getGravityFields", "()Lorg/orekit/forces/gravity/potential/GravityFields;", (void *) t_PythonDataContext_getGravityFields3 },
          { "getTimeScales", "()Lorg/orekit/time/TimeScales;", (void *) t_PythonDataContext_getTimeScales4 },
          { "pythonDecRef", "()V", (void *) t_PythonDataContext_pythonDecRef5 },
        };
        env->registerNatives(cls, methods, 6);
      }

      static PyObject *t_PythonDataContext_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonDataContext::initializeClass, 1)))
          return NULL;
        return t_PythonDataContext::wrap_Object(PythonDataContext(((t_PythonDataContext *) arg)->object.this$));
      }
      static PyObject *t_PythonDataContext_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonDataContext::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonDataContext_init_(t_PythonDataContext *self, PyObject *args, PyObject *kwds)
      {
        PythonDataContext object((jobject) NULL);

        INT_CALL(object = PythonDataContext());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonDataContext_finalize(t_PythonDataContext *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonDataContext_pythonExtension(t_PythonDataContext *self, PyObject *args)
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

      static jobject JNICALL t_PythonDataContext_getCelestialBodies0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataContext::mids$[PythonDataContext::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBodies value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getCelestialBodies", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBodies::initializeClass, &value))
        {
          throwTypeError("getCelestialBodies", result);
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

      static jobject JNICALL t_PythonDataContext_getFrames1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataContext::mids$[PythonDataContext::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frames value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getFrames", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frames::initializeClass, &value))
        {
          throwTypeError("getFrames", result);
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

      static jobject JNICALL t_PythonDataContext_getGeoMagneticFields2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataContext::mids$[PythonDataContext::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::models::earth::GeoMagneticFields value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGeoMagneticFields", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::models::earth::GeoMagneticFields::initializeClass, &value))
        {
          throwTypeError("getGeoMagneticFields", result);
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

      static jobject JNICALL t_PythonDataContext_getGravityFields3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataContext::mids$[PythonDataContext::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::forces::gravity::potential::GravityFields value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGravityFields", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::GravityFields::initializeClass, &value))
        {
          throwTypeError("getGravityFields", result);
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

      static jobject JNICALL t_PythonDataContext_getTimeScales4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataContext::mids$[PythonDataContext::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TimeScales value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTimeScales", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TimeScales::initializeClass, &value))
        {
          throwTypeError("getTimeScales", result);
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

      static void JNICALL t_PythonDataContext_pythonDecRef5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataContext::mids$[PythonDataContext::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonDataContext::mids$[PythonDataContext::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonDataContext_get__self(t_PythonDataContext *self, void *data)
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
#include "org/orekit/files/ccsds/section/Metadata.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/TimeSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *Metadata::class$ = NULL;
          jmethodID *Metadata::mids$ = NULL;
          bool Metadata::live$ = false;

          jclass Metadata::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/Metadata");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getTimeSystem_d72479bc3d5515c9] = env->getMethodID(cls, "getTimeSystem", "()Lorg/orekit/files/ccsds/definitions/TimeSystem;");
              mids$[mid_setTimeSystem_a052efb9a150bad4] = env->getMethodID(cls, "setTimeSystem", "(Lorg/orekit/files/ccsds/definitions/TimeSystem;)V");
              mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");
              mids$[mid_getLaunchYear_84fe1f8fbbcb0268] = env->getMethodID(cls, "getLaunchYear", "(Ljava/lang/String;)I");
              mids$[mid_getLaunchNumber_84fe1f8fbbcb0268] = env->getMethodID(cls, "getLaunchNumber", "(Ljava/lang/String;)I");
              mids$[mid_getLaunchPiece_95277969d373e11f] = env->getMethodID(cls, "getLaunchPiece", "(Ljava/lang/String;)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::files::ccsds::definitions::TimeSystem Metadata::getTimeSystem() const
          {
            return ::org::orekit::files::ccsds::definitions::TimeSystem(env->callObjectMethod(this$, mids$[mid_getTimeSystem_d72479bc3d5515c9]));
          }

          void Metadata::setTimeSystem(const ::org::orekit::files::ccsds::definitions::TimeSystem & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setTimeSystem_a052efb9a150bad4], a0.this$);
          }

          void Metadata::validate(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_validate_1ad26e8c8c0cd65b], a0);
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
          static PyObject *t_Metadata_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Metadata_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Metadata_getTimeSystem(t_Metadata *self);
          static PyObject *t_Metadata_setTimeSystem(t_Metadata *self, PyObject *arg);
          static PyObject *t_Metadata_validate(t_Metadata *self, PyObject *args);
          static PyObject *t_Metadata_get__timeSystem(t_Metadata *self, void *data);
          static int t_Metadata_set__timeSystem(t_Metadata *self, PyObject *arg, void *data);
          static PyGetSetDef t_Metadata__fields_[] = {
            DECLARE_GETSET_FIELD(t_Metadata, timeSystem),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Metadata__methods_[] = {
            DECLARE_METHOD(t_Metadata, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Metadata, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Metadata, getTimeSystem, METH_NOARGS),
            DECLARE_METHOD(t_Metadata, setTimeSystem, METH_O),
            DECLARE_METHOD(t_Metadata, validate, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Metadata)[] = {
            { Py_tp_methods, t_Metadata__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Metadata__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Metadata)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
            NULL
          };

          DEFINE_TYPE(Metadata, t_Metadata, Metadata);

          void t_Metadata::install(PyObject *module)
          {
            installType(&PY_TYPE(Metadata), &PY_TYPE_DEF(Metadata), module, "Metadata", 0);
          }

          void t_Metadata::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Metadata), "class_", make_descriptor(Metadata::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Metadata), "wrapfn_", make_descriptor(t_Metadata::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Metadata), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Metadata_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Metadata::initializeClass, 1)))
              return NULL;
            return t_Metadata::wrap_Object(Metadata(((t_Metadata *) arg)->object.this$));
          }
          static PyObject *t_Metadata_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Metadata::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Metadata_getTimeSystem(t_Metadata *self)
          {
            ::org::orekit::files::ccsds::definitions::TimeSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getTimeSystem());
            return ::org::orekit::files::ccsds::definitions::t_TimeSystem::wrap_Object(result);
          }

          static PyObject *t_Metadata_setTimeSystem(t_Metadata *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::definitions::TimeSystem a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::TimeSystem::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_TimeSystem::parameters_))
            {
              OBJ_CALL(self->object.setTimeSystem(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTimeSystem", arg);
            return NULL;
          }

          static PyObject *t_Metadata_validate(t_Metadata *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.validate(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Metadata), (PyObject *) self, "validate", args, 2);
          }

          static PyObject *t_Metadata_get__timeSystem(t_Metadata *self, void *data)
          {
            ::org::orekit::files::ccsds::definitions::TimeSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getTimeSystem());
            return ::org::orekit::files::ccsds::definitions::t_TimeSystem::wrap_Object(value);
          }
          static int t_Metadata_set__timeSystem(t_Metadata *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::files::ccsds::definitions::TimeSystem value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::TimeSystem::initializeClass, &value))
              {
                INT_CALL(self->object.setTimeSystem(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "timeSystem", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateVectorFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *CalculusFieldUnivariateVectorFunction::class$ = NULL;
      jmethodID *CalculusFieldUnivariateVectorFunction::mids$ = NULL;
      bool CalculusFieldUnivariateVectorFunction::live$ = false;

      jclass CalculusFieldUnivariateVectorFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/CalculusFieldUnivariateVectorFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_0e260a9870cb2bbf] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::CalculusFieldElement > CalculusFieldUnivariateVectorFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_0e260a9870cb2bbf], a0.this$));
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
      static PyObject *t_CalculusFieldUnivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldUnivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldUnivariateVectorFunction_of_(t_CalculusFieldUnivariateVectorFunction *self, PyObject *args);
      static PyObject *t_CalculusFieldUnivariateVectorFunction_value(t_CalculusFieldUnivariateVectorFunction *self, PyObject *arg);
      static PyObject *t_CalculusFieldUnivariateVectorFunction_get__parameters_(t_CalculusFieldUnivariateVectorFunction *self, void *data);
      static PyGetSetDef t_CalculusFieldUnivariateVectorFunction__fields_[] = {
        DECLARE_GET_FIELD(t_CalculusFieldUnivariateVectorFunction, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CalculusFieldUnivariateVectorFunction__methods_[] = {
        DECLARE_METHOD(t_CalculusFieldUnivariateVectorFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldUnivariateVectorFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldUnivariateVectorFunction, of_, METH_VARARGS),
        DECLARE_METHOD(t_CalculusFieldUnivariateVectorFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CalculusFieldUnivariateVectorFunction)[] = {
        { Py_tp_methods, t_CalculusFieldUnivariateVectorFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CalculusFieldUnivariateVectorFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CalculusFieldUnivariateVectorFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CalculusFieldUnivariateVectorFunction, t_CalculusFieldUnivariateVectorFunction, CalculusFieldUnivariateVectorFunction);
      PyObject *t_CalculusFieldUnivariateVectorFunction::wrap_Object(const CalculusFieldUnivariateVectorFunction& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldUnivariateVectorFunction::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldUnivariateVectorFunction *self = (t_CalculusFieldUnivariateVectorFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_CalculusFieldUnivariateVectorFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldUnivariateVectorFunction::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldUnivariateVectorFunction *self = (t_CalculusFieldUnivariateVectorFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_CalculusFieldUnivariateVectorFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(CalculusFieldUnivariateVectorFunction), &PY_TYPE_DEF(CalculusFieldUnivariateVectorFunction), module, "CalculusFieldUnivariateVectorFunction", 0);
      }

      void t_CalculusFieldUnivariateVectorFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldUnivariateVectorFunction), "class_", make_descriptor(CalculusFieldUnivariateVectorFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldUnivariateVectorFunction), "wrapfn_", make_descriptor(t_CalculusFieldUnivariateVectorFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldUnivariateVectorFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CalculusFieldUnivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CalculusFieldUnivariateVectorFunction::initializeClass, 1)))
          return NULL;
        return t_CalculusFieldUnivariateVectorFunction::wrap_Object(CalculusFieldUnivariateVectorFunction(((t_CalculusFieldUnivariateVectorFunction *) arg)->object.this$));
      }
      static PyObject *t_CalculusFieldUnivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CalculusFieldUnivariateVectorFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CalculusFieldUnivariateVectorFunction_of_(t_CalculusFieldUnivariateVectorFunction *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_CalculusFieldUnivariateVectorFunction_value(t_CalculusFieldUnivariateVectorFunction *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
      static PyObject *t_CalculusFieldUnivariateVectorFunction_get__parameters_(t_CalculusFieldUnivariateVectorFunction *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/SatInSystem.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *SatInSystem::class$ = NULL;
      jmethodID *SatInSystem::mids$ = NULL;
      bool SatInSystem::live$ = false;

      jclass SatInSystem::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/SatInSystem");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_251a323db6b24aab] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;I)V");
          mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getPRN_d6ab429752e7c267] = env->getMethodID(cls, "getPRN", "()I");
          mids$[mid_getSystem_fb0bd27fcc3ba9fc] = env->getMethodID(cls, "getSystem", "()Lorg/orekit/gnss/SatelliteSystem;");
          mids$[mid_getTwoDigitsRinexPRN_d6ab429752e7c267] = env->getMethodID(cls, "getTwoDigitsRinexPRN", "()I");
          mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SatInSystem::SatInSystem(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_251a323db6b24aab, a0.this$, a1)) {}

      jboolean SatInSystem::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
      }

      jint SatInSystem::getPRN() const
      {
        return env->callIntMethod(this$, mids$[mid_getPRN_d6ab429752e7c267]);
      }

      ::org::orekit::gnss::SatelliteSystem SatInSystem::getSystem() const
      {
        return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSystem_fb0bd27fcc3ba9fc]));
      }

      jint SatInSystem::getTwoDigitsRinexPRN() const
      {
        return env->callIntMethod(this$, mids$[mid_getTwoDigitsRinexPRN_d6ab429752e7c267]);
      }

      jint SatInSystem::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
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
      static PyObject *t_SatInSystem_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SatInSystem_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SatInSystem_init_(t_SatInSystem *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SatInSystem_equals(t_SatInSystem *self, PyObject *args);
      static PyObject *t_SatInSystem_getPRN(t_SatInSystem *self);
      static PyObject *t_SatInSystem_getSystem(t_SatInSystem *self);
      static PyObject *t_SatInSystem_getTwoDigitsRinexPRN(t_SatInSystem *self);
      static PyObject *t_SatInSystem_hashCode(t_SatInSystem *self, PyObject *args);
      static PyObject *t_SatInSystem_get__pRN(t_SatInSystem *self, void *data);
      static PyObject *t_SatInSystem_get__system(t_SatInSystem *self, void *data);
      static PyObject *t_SatInSystem_get__twoDigitsRinexPRN(t_SatInSystem *self, void *data);
      static PyGetSetDef t_SatInSystem__fields_[] = {
        DECLARE_GET_FIELD(t_SatInSystem, pRN),
        DECLARE_GET_FIELD(t_SatInSystem, system),
        DECLARE_GET_FIELD(t_SatInSystem, twoDigitsRinexPRN),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SatInSystem__methods_[] = {
        DECLARE_METHOD(t_SatInSystem, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SatInSystem, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SatInSystem, equals, METH_VARARGS),
        DECLARE_METHOD(t_SatInSystem, getPRN, METH_NOARGS),
        DECLARE_METHOD(t_SatInSystem, getSystem, METH_NOARGS),
        DECLARE_METHOD(t_SatInSystem, getTwoDigitsRinexPRN, METH_NOARGS),
        DECLARE_METHOD(t_SatInSystem, hashCode, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SatInSystem)[] = {
        { Py_tp_methods, t_SatInSystem__methods_ },
        { Py_tp_init, (void *) t_SatInSystem_init_ },
        { Py_tp_getset, t_SatInSystem__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SatInSystem)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SatInSystem, t_SatInSystem, SatInSystem);

      void t_SatInSystem::install(PyObject *module)
      {
        installType(&PY_TYPE(SatInSystem), &PY_TYPE_DEF(SatInSystem), module, "SatInSystem", 0);
      }

      void t_SatInSystem::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatInSystem), "class_", make_descriptor(SatInSystem::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatInSystem), "wrapfn_", make_descriptor(t_SatInSystem::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatInSystem), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SatInSystem_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SatInSystem::initializeClass, 1)))
          return NULL;
        return t_SatInSystem::wrap_Object(SatInSystem(((t_SatInSystem *) arg)->object.this$));
      }
      static PyObject *t_SatInSystem_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SatInSystem::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SatInSystem_init_(t_SatInSystem *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;
        SatInSystem object((jobject) NULL);

        if (!parseArgs(args, "KI", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1))
        {
          INT_CALL(object = SatInSystem(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SatInSystem_equals(t_SatInSystem *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(SatInSystem), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_SatInSystem_getPRN(t_SatInSystem *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getPRN());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_SatInSystem_getSystem(t_SatInSystem *self)
      {
        ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
        OBJ_CALL(result = self->object.getSystem());
        return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
      }

      static PyObject *t_SatInSystem_getTwoDigitsRinexPRN(t_SatInSystem *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getTwoDigitsRinexPRN());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_SatInSystem_hashCode(t_SatInSystem *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(SatInSystem), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_SatInSystem_get__pRN(t_SatInSystem *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getPRN());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_SatInSystem_get__system(t_SatInSystem *self, void *data)
      {
        ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
        OBJ_CALL(value = self->object.getSystem());
        return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
      }

      static PyObject *t_SatInSystem_get__twoDigitsRinexPRN(t_SatInSystem *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getTwoDigitsRinexPRN());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/SingleBodyAbsoluteAttraction.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/List.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *SingleBodyAbsoluteAttraction::class$ = NULL;
        jmethodID *SingleBodyAbsoluteAttraction::mids$ = NULL;
        bool SingleBodyAbsoluteAttraction::live$ = false;
        ::java::lang::String *SingleBodyAbsoluteAttraction::ATTRACTION_COEFFICIENT_SUFFIX = NULL;

        jclass SingleBodyAbsoluteAttraction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/SingleBodyAbsoluteAttraction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3892f9945e7aba0a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;)V");
            mids$[mid_acceleration_5e147f44c28a35c9] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_9816b8f76e94356a] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_dependsOnPositionOnly_eee3de00fe971136] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ATTRACTION_COEFFICIENT_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "ATTRACTION_COEFFICIENT_SUFFIX", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SingleBodyAbsoluteAttraction::SingleBodyAbsoluteAttraction(const ::org::orekit::bodies::CelestialBody & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3892f9945e7aba0a, a0.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SingleBodyAbsoluteAttraction::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_5e147f44c28a35c9], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D SingleBodyAbsoluteAttraction::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_9816b8f76e94356a], a0.this$, a1.this$));
        }

        jboolean SingleBodyAbsoluteAttraction::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_eee3de00fe971136]);
        }

        ::java::util::List SingleBodyAbsoluteAttraction::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
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
        static PyObject *t_SingleBodyAbsoluteAttraction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SingleBodyAbsoluteAttraction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SingleBodyAbsoluteAttraction_init_(t_SingleBodyAbsoluteAttraction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SingleBodyAbsoluteAttraction_acceleration(t_SingleBodyAbsoluteAttraction *self, PyObject *args);
        static PyObject *t_SingleBodyAbsoluteAttraction_dependsOnPositionOnly(t_SingleBodyAbsoluteAttraction *self);
        static PyObject *t_SingleBodyAbsoluteAttraction_getParametersDrivers(t_SingleBodyAbsoluteAttraction *self);
        static PyObject *t_SingleBodyAbsoluteAttraction_get__parametersDrivers(t_SingleBodyAbsoluteAttraction *self, void *data);
        static PyGetSetDef t_SingleBodyAbsoluteAttraction__fields_[] = {
          DECLARE_GET_FIELD(t_SingleBodyAbsoluteAttraction, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SingleBodyAbsoluteAttraction__methods_[] = {
          DECLARE_METHOD(t_SingleBodyAbsoluteAttraction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SingleBodyAbsoluteAttraction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SingleBodyAbsoluteAttraction, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_SingleBodyAbsoluteAttraction, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_SingleBodyAbsoluteAttraction, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SingleBodyAbsoluteAttraction)[] = {
          { Py_tp_methods, t_SingleBodyAbsoluteAttraction__methods_ },
          { Py_tp_init, (void *) t_SingleBodyAbsoluteAttraction_init_ },
          { Py_tp_getset, t_SingleBodyAbsoluteAttraction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SingleBodyAbsoluteAttraction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SingleBodyAbsoluteAttraction, t_SingleBodyAbsoluteAttraction, SingleBodyAbsoluteAttraction);

        void t_SingleBodyAbsoluteAttraction::install(PyObject *module)
        {
          installType(&PY_TYPE(SingleBodyAbsoluteAttraction), &PY_TYPE_DEF(SingleBodyAbsoluteAttraction), module, "SingleBodyAbsoluteAttraction", 0);
        }

        void t_SingleBodyAbsoluteAttraction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SingleBodyAbsoluteAttraction), "class_", make_descriptor(SingleBodyAbsoluteAttraction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SingleBodyAbsoluteAttraction), "wrapfn_", make_descriptor(t_SingleBodyAbsoluteAttraction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SingleBodyAbsoluteAttraction), "boxfn_", make_descriptor(boxObject));
          env->getClass(SingleBodyAbsoluteAttraction::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SingleBodyAbsoluteAttraction), "ATTRACTION_COEFFICIENT_SUFFIX", make_descriptor(j2p(*SingleBodyAbsoluteAttraction::ATTRACTION_COEFFICIENT_SUFFIX)));
        }

        static PyObject *t_SingleBodyAbsoluteAttraction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SingleBodyAbsoluteAttraction::initializeClass, 1)))
            return NULL;
          return t_SingleBodyAbsoluteAttraction::wrap_Object(SingleBodyAbsoluteAttraction(((t_SingleBodyAbsoluteAttraction *) arg)->object.this$));
        }
        static PyObject *t_SingleBodyAbsoluteAttraction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SingleBodyAbsoluteAttraction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SingleBodyAbsoluteAttraction_init_(t_SingleBodyAbsoluteAttraction *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
          SingleBodyAbsoluteAttraction object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &a0))
          {
            INT_CALL(object = SingleBodyAbsoluteAttraction(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SingleBodyAbsoluteAttraction_acceleration(t_SingleBodyAbsoluteAttraction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
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
          }

          PyErr_SetArgsError((PyObject *) self, "acceleration", args);
          return NULL;
        }

        static PyObject *t_SingleBodyAbsoluteAttraction_dependsOnPositionOnly(t_SingleBodyAbsoluteAttraction *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SingleBodyAbsoluteAttraction_getParametersDrivers(t_SingleBodyAbsoluteAttraction *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_SingleBodyAbsoluteAttraction_get__parametersDrivers(t_SingleBodyAbsoluteAttraction *self, void *data)
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
#include "org/hipparchus/random/NormalizedRandomGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *NormalizedRandomGenerator::class$ = NULL;
      jmethodID *NormalizedRandomGenerator::mids$ = NULL;
      bool NormalizedRandomGenerator::live$ = false;

      jclass NormalizedRandomGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/NormalizedRandomGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_nextNormalizedDouble_9981f74b2d109da6] = env->getMethodID(cls, "nextNormalizedDouble", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble NormalizedRandomGenerator::nextNormalizedDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextNormalizedDouble_9981f74b2d109da6]);
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
      static PyObject *t_NormalizedRandomGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_NormalizedRandomGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_NormalizedRandomGenerator_nextNormalizedDouble(t_NormalizedRandomGenerator *self);

      static PyMethodDef t_NormalizedRandomGenerator__methods_[] = {
        DECLARE_METHOD(t_NormalizedRandomGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_NormalizedRandomGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_NormalizedRandomGenerator, nextNormalizedDouble, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(NormalizedRandomGenerator)[] = {
        { Py_tp_methods, t_NormalizedRandomGenerator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(NormalizedRandomGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(NormalizedRandomGenerator, t_NormalizedRandomGenerator, NormalizedRandomGenerator);

      void t_NormalizedRandomGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(NormalizedRandomGenerator), &PY_TYPE_DEF(NormalizedRandomGenerator), module, "NormalizedRandomGenerator", 0);
      }

      void t_NormalizedRandomGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedRandomGenerator), "class_", make_descriptor(NormalizedRandomGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedRandomGenerator), "wrapfn_", make_descriptor(t_NormalizedRandomGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedRandomGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_NormalizedRandomGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, NormalizedRandomGenerator::initializeClass, 1)))
          return NULL;
        return t_NormalizedRandomGenerator::wrap_Object(NormalizedRandomGenerator(((t_NormalizedRandomGenerator *) arg)->object.this$));
      }
      static PyObject *t_NormalizedRandomGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, NormalizedRandomGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_NormalizedRandomGenerator_nextNormalizedDouble(t_NormalizedRandomGenerator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.nextNormalizedDouble());
        return PyFloat_FromDouble((double) result);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1044.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1044Data.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *Rtcm1044::class$ = NULL;
              jmethodID *Rtcm1044::mids$ = NULL;
              bool Rtcm1044::live$ = false;

              jclass Rtcm1044::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1044");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0eea469d26e725ef] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1044Data;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1044::Rtcm1044(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1044Data & a1) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage(env->newObject(initializeClass, &mids$, mid_init$_0eea469d26e725ef, a0, a1.this$)) {}
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
              static PyObject *t_Rtcm1044_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1044_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1044_of_(t_Rtcm1044 *self, PyObject *args);
              static int t_Rtcm1044_init_(t_Rtcm1044 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1044_get__parameters_(t_Rtcm1044 *self, void *data);
              static PyGetSetDef t_Rtcm1044__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1044, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1044__methods_[] = {
                DECLARE_METHOD(t_Rtcm1044, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1044, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1044, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1044)[] = {
                { Py_tp_methods, t_Rtcm1044__methods_ },
                { Py_tp_init, (void *) t_Rtcm1044_init_ },
                { Py_tp_getset, t_Rtcm1044__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1044)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1044, t_Rtcm1044, Rtcm1044);
              PyObject *t_Rtcm1044::wrap_Object(const Rtcm1044& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Rtcm1044::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1044 *self = (t_Rtcm1044 *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_Rtcm1044::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Rtcm1044::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1044 *self = (t_Rtcm1044 *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_Rtcm1044::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1044), &PY_TYPE_DEF(Rtcm1044), module, "Rtcm1044", 0);
              }

              void t_Rtcm1044::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1044), "class_", make_descriptor(Rtcm1044::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1044), "wrapfn_", make_descriptor(t_Rtcm1044::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1044), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1044_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1044::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1044::wrap_Object(Rtcm1044(((t_Rtcm1044 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1044_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1044::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1044_of_(t_Rtcm1044 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1044_init_(t_Rtcm1044 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1044Data a1((jobject) NULL);
                Rtcm1044 object((jobject) NULL);

                if (!parseArgs(args, "Ik", ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1044Data::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Rtcm1044(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::ephemeris::PY_TYPE(Rtcm1044Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1044_get__parameters_(t_Rtcm1044 *self, void *data)
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
#include "org/orekit/propagation/PythonMatricesHarvester.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/MatricesHarvester.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonMatricesHarvester::class$ = NULL;
      jmethodID *PythonMatricesHarvester::mids$ = NULL;
      bool PythonMatricesHarvester::live$ = false;

      jclass PythonMatricesHarvester::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonMatricesHarvester");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getJacobiansColumnsNames_d751c1a57012b438] = env->getMethodID(cls, "getJacobiansColumnsNames", "()Ljava/util/List;");
          mids$[mid_getOrbitType_495f818d3570b7f5] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_getParametersJacobian_011bf64ebaa4e018] = env->getMethodID(cls, "getParametersJacobian", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getPositionAngleType_a6db4e6edefda4be] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_getStateTransitionMatrix_011bf64ebaa4e018] = env->getMethodID(cls, "getStateTransitionMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_setReferenceState_72b846eb87f3af9a] = env->getMethodID(cls, "setReferenceState", "(Lorg/orekit/propagation/SpacecraftState;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonMatricesHarvester::PythonMatricesHarvester() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonMatricesHarvester::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonMatricesHarvester::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonMatricesHarvester::pythonExtension(jlong a0) const
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
    namespace propagation {
      static PyObject *t_PythonMatricesHarvester_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonMatricesHarvester_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonMatricesHarvester_init_(t_PythonMatricesHarvester *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonMatricesHarvester_finalize(t_PythonMatricesHarvester *self);
      static PyObject *t_PythonMatricesHarvester_pythonExtension(t_PythonMatricesHarvester *self, PyObject *args);
      static jobject JNICALL t_PythonMatricesHarvester_getJacobiansColumnsNames0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonMatricesHarvester_getOrbitType1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonMatricesHarvester_getParametersJacobian2(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonMatricesHarvester_getPositionAngleType3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonMatricesHarvester_getStateTransitionMatrix4(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonMatricesHarvester_pythonDecRef5(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonMatricesHarvester_setReferenceState6(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonMatricesHarvester_get__self(t_PythonMatricesHarvester *self, void *data);
      static PyGetSetDef t_PythonMatricesHarvester__fields_[] = {
        DECLARE_GET_FIELD(t_PythonMatricesHarvester, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonMatricesHarvester__methods_[] = {
        DECLARE_METHOD(t_PythonMatricesHarvester, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonMatricesHarvester, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonMatricesHarvester, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonMatricesHarvester, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonMatricesHarvester)[] = {
        { Py_tp_methods, t_PythonMatricesHarvester__methods_ },
        { Py_tp_init, (void *) t_PythonMatricesHarvester_init_ },
        { Py_tp_getset, t_PythonMatricesHarvester__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonMatricesHarvester)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonMatricesHarvester, t_PythonMatricesHarvester, PythonMatricesHarvester);

      void t_PythonMatricesHarvester::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonMatricesHarvester), &PY_TYPE_DEF(PythonMatricesHarvester), module, "PythonMatricesHarvester", 1);
      }

      void t_PythonMatricesHarvester::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMatricesHarvester), "class_", make_descriptor(PythonMatricesHarvester::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMatricesHarvester), "wrapfn_", make_descriptor(t_PythonMatricesHarvester::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMatricesHarvester), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonMatricesHarvester::initializeClass);
        JNINativeMethod methods[] = {
          { "getJacobiansColumnsNames", "()Ljava/util/List;", (void *) t_PythonMatricesHarvester_getJacobiansColumnsNames0 },
          { "getOrbitType", "()Lorg/orekit/orbits/OrbitType;", (void *) t_PythonMatricesHarvester_getOrbitType1 },
          { "getParametersJacobian", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;", (void *) t_PythonMatricesHarvester_getParametersJacobian2 },
          { "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;", (void *) t_PythonMatricesHarvester_getPositionAngleType3 },
          { "getStateTransitionMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;", (void *) t_PythonMatricesHarvester_getStateTransitionMatrix4 },
          { "pythonDecRef", "()V", (void *) t_PythonMatricesHarvester_pythonDecRef5 },
          { "setReferenceState", "(Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonMatricesHarvester_setReferenceState6 },
        };
        env->registerNatives(cls, methods, 7);
      }

      static PyObject *t_PythonMatricesHarvester_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonMatricesHarvester::initializeClass, 1)))
          return NULL;
        return t_PythonMatricesHarvester::wrap_Object(PythonMatricesHarvester(((t_PythonMatricesHarvester *) arg)->object.this$));
      }
      static PyObject *t_PythonMatricesHarvester_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonMatricesHarvester::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonMatricesHarvester_init_(t_PythonMatricesHarvester *self, PyObject *args, PyObject *kwds)
      {
        PythonMatricesHarvester object((jobject) NULL);

        INT_CALL(object = PythonMatricesHarvester());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonMatricesHarvester_finalize(t_PythonMatricesHarvester *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonMatricesHarvester_pythonExtension(t_PythonMatricesHarvester *self, PyObject *args)
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

      static jobject JNICALL t_PythonMatricesHarvester_getJacobiansColumnsNames0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonMatricesHarvester::mids$[PythonMatricesHarvester::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getJacobiansColumnsNames", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("getJacobiansColumnsNames", result);
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

      static jobject JNICALL t_PythonMatricesHarvester_getOrbitType1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonMatricesHarvester::mids$[PythonMatricesHarvester::mid_pythonExtension_42c72b98e3c2e08a]);
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

      static jobject JNICALL t_PythonMatricesHarvester_getParametersJacobian2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonMatricesHarvester::mids$[PythonMatricesHarvester::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "getParametersJacobian", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &value))
        {
          throwTypeError("getParametersJacobian", result);
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

      static jobject JNICALL t_PythonMatricesHarvester_getPositionAngleType3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonMatricesHarvester::mids$[PythonMatricesHarvester::mid_pythonExtension_42c72b98e3c2e08a]);
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

      static jobject JNICALL t_PythonMatricesHarvester_getStateTransitionMatrix4(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonMatricesHarvester::mids$[PythonMatricesHarvester::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "getStateTransitionMatrix", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &value))
        {
          throwTypeError("getStateTransitionMatrix", result);
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

      static void JNICALL t_PythonMatricesHarvester_pythonDecRef5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonMatricesHarvester::mids$[PythonMatricesHarvester::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonMatricesHarvester::mids$[PythonMatricesHarvester::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static void JNICALL t_PythonMatricesHarvester_setReferenceState6(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonMatricesHarvester::mids$[PythonMatricesHarvester::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "setReferenceState", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static PyObject *t_PythonMatricesHarvester_get__self(t_PythonMatricesHarvester *self, void *data)
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
#include "org/orekit/propagation/events/handlers/FieldStopOnDecreasing.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *FieldStopOnDecreasing::class$ = NULL;
          jmethodID *FieldStopOnDecreasing::mids$ = NULL;
          bool FieldStopOnDecreasing::live$ = false;

          jclass FieldStopOnDecreasing::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/FieldStopOnDecreasing");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_094737664b369b83] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Z)Lorg/hipparchus/ode/events/Action;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldStopOnDecreasing::FieldStopOnDecreasing() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          ::org::hipparchus::ode::events::Action FieldStopOnDecreasing::eventOccurred(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::events::FieldEventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_094737664b369b83], a0.this$, a1.this$, a2));
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
          static PyObject *t_FieldStopOnDecreasing_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldStopOnDecreasing_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldStopOnDecreasing_of_(t_FieldStopOnDecreasing *self, PyObject *args);
          static int t_FieldStopOnDecreasing_init_(t_FieldStopOnDecreasing *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldStopOnDecreasing_eventOccurred(t_FieldStopOnDecreasing *self, PyObject *args);
          static PyObject *t_FieldStopOnDecreasing_get__parameters_(t_FieldStopOnDecreasing *self, void *data);
          static PyGetSetDef t_FieldStopOnDecreasing__fields_[] = {
            DECLARE_GET_FIELD(t_FieldStopOnDecreasing, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldStopOnDecreasing__methods_[] = {
            DECLARE_METHOD(t_FieldStopOnDecreasing, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldStopOnDecreasing, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldStopOnDecreasing, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldStopOnDecreasing, eventOccurred, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldStopOnDecreasing)[] = {
            { Py_tp_methods, t_FieldStopOnDecreasing__methods_ },
            { Py_tp_init, (void *) t_FieldStopOnDecreasing_init_ },
            { Py_tp_getset, t_FieldStopOnDecreasing__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldStopOnDecreasing)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldStopOnDecreasing, t_FieldStopOnDecreasing, FieldStopOnDecreasing);
          PyObject *t_FieldStopOnDecreasing::wrap_Object(const FieldStopOnDecreasing& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldStopOnDecreasing::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldStopOnDecreasing *self = (t_FieldStopOnDecreasing *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldStopOnDecreasing::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldStopOnDecreasing::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldStopOnDecreasing *self = (t_FieldStopOnDecreasing *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldStopOnDecreasing::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldStopOnDecreasing), &PY_TYPE_DEF(FieldStopOnDecreasing), module, "FieldStopOnDecreasing", 0);
          }

          void t_FieldStopOnDecreasing::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStopOnDecreasing), "class_", make_descriptor(FieldStopOnDecreasing::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStopOnDecreasing), "wrapfn_", make_descriptor(t_FieldStopOnDecreasing::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStopOnDecreasing), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldStopOnDecreasing_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldStopOnDecreasing::initializeClass, 1)))
              return NULL;
            return t_FieldStopOnDecreasing::wrap_Object(FieldStopOnDecreasing(((t_FieldStopOnDecreasing *) arg)->object.this$));
          }
          static PyObject *t_FieldStopOnDecreasing_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldStopOnDecreasing::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldStopOnDecreasing_of_(t_FieldStopOnDecreasing *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldStopOnDecreasing_init_(t_FieldStopOnDecreasing *self, PyObject *args, PyObject *kwds)
          {
            FieldStopOnDecreasing object((jobject) NULL);

            INT_CALL(object = FieldStopOnDecreasing());
            self->object = object;

            return 0;
          }

          static PyObject *t_FieldStopOnDecreasing_eventOccurred(t_FieldStopOnDecreasing *self, PyObject *args)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::events::FieldEventDetector a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            ::org::hipparchus::ode::events::Action result((jobject) NULL);

            if (!parseArgs(args, "KKZ", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.eventOccurred(a0, a1, a2));
              return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eventOccurred", args);
            return NULL;
          }
          static PyObject *t_FieldStopOnDecreasing_get__parameters_(t_FieldStopOnDecreasing *self, void *data)
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
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm02.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm02Header.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm02Data.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm02::class$ = NULL;
              jmethodID *SsrIgm02::mids$ = NULL;
              bool SsrIgm02::live$ = false;

              jclass SsrIgm02::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm02");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_d008f0618d420855] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/metric/messages/ssr/igm/SsrIgm02Header;Ljava/util/List;)V");
                  mids$[mid_getSsrIgm02Data_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getSsrIgm02Data", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm02::SsrIgm02(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm02Header & a2, const ::java::util::List & a3) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage(env->newObject(initializeClass, &mids$, mid_init$_d008f0618d420855, a0, a1.this$, a2.this$, a3.this$)) {}

              ::java::util::Map SsrIgm02::getSsrIgm02Data() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSsrIgm02Data_dbcb8bbac6b35e0d]));
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
              static PyObject *t_SsrIgm02_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm02_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm02_of_(t_SsrIgm02 *self, PyObject *args);
              static int t_SsrIgm02_init_(t_SsrIgm02 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm02_getSsrIgm02Data(t_SsrIgm02 *self);
              static PyObject *t_SsrIgm02_get__ssrIgm02Data(t_SsrIgm02 *self, void *data);
              static PyObject *t_SsrIgm02_get__parameters_(t_SsrIgm02 *self, void *data);
              static PyGetSetDef t_SsrIgm02__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIgm02, ssrIgm02Data),
                DECLARE_GET_FIELD(t_SsrIgm02, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm02__methods_[] = {
                DECLARE_METHOD(t_SsrIgm02, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm02, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm02, of_, METH_VARARGS),
                DECLARE_METHOD(t_SsrIgm02, getSsrIgm02Data, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm02)[] = {
                { Py_tp_methods, t_SsrIgm02__methods_ },
                { Py_tp_init, (void *) t_SsrIgm02_init_ },
                { Py_tp_getset, t_SsrIgm02__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm02)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage),
                NULL
              };

              DEFINE_TYPE(SsrIgm02, t_SsrIgm02, SsrIgm02);
              PyObject *t_SsrIgm02::wrap_Object(const SsrIgm02& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm02::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm02 *self = (t_SsrIgm02 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_SsrIgm02::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm02::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm02 *self = (t_SsrIgm02 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_SsrIgm02::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm02), &PY_TYPE_DEF(SsrIgm02), module, "SsrIgm02", 0);
              }

              void t_SsrIgm02::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm02), "class_", make_descriptor(SsrIgm02::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm02), "wrapfn_", make_descriptor(t_SsrIgm02::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm02), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm02_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm02::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm02::wrap_Object(SsrIgm02(((t_SsrIgm02 *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm02_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm02::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_SsrIgm02_of_(t_SsrIgm02 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_SsrIgm02_init_(t_SsrIgm02 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm02Header a2((jobject) NULL);
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                SsrIgm02 object((jobject) NULL);

                if (!parseArgs(args, "IKkK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm02Header::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = SsrIgm02(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm02Header);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm02Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_SsrIgm02_getSsrIgm02Data(t_SsrIgm02 *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSsrIgm02Data());
                return ::java::util::t_Map::wrap_Object(result);
              }
              static PyObject *t_SsrIgm02_get__parameters_(t_SsrIgm02 *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_SsrIgm02_get__ssrIgm02Data(t_SsrIgm02 *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSsrIgm02Data());
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
#include "org/hipparchus/distribution/continuous/BetaDistribution.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *BetaDistribution::class$ = NULL;
        jmethodID *BetaDistribution::mids$ = NULL;
        bool BetaDistribution::live$ = false;

        jclass BetaDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/BetaDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_bd28dc6055dc5bbd] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_cumulativeProbability_bf28ed64d6e8576b] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_bf28ed64d6e8576b] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getAlpha_9981f74b2d109da6] = env->getMethodID(cls, "getAlpha", "()D");
            mids$[mid_getBeta_9981f74b2d109da6] = env->getMethodID(cls, "getBeta", "()D");
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

        BetaDistribution::BetaDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

        BetaDistribution::BetaDistribution(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_bd28dc6055dc5bbd, a0, a1, a2)) {}

        jdouble BetaDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_bf28ed64d6e8576b], a0);
        }

        jdouble BetaDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_bf28ed64d6e8576b], a0);
        }

        jdouble BetaDistribution::getAlpha() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAlpha_9981f74b2d109da6]);
        }

        jdouble BetaDistribution::getBeta() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getBeta_9981f74b2d109da6]);
        }

        jdouble BetaDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_9981f74b2d109da6]);
        }

        jdouble BetaDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_9981f74b2d109da6]);
        }

        jdouble BetaDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_9981f74b2d109da6]);
        }

        jdouble BetaDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_9981f74b2d109da6]);
        }

        jboolean BetaDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_eee3de00fe971136]);
        }

        jdouble BetaDistribution::logDensity(jdouble a0) const
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
        static PyObject *t_BetaDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BetaDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BetaDistribution_init_(t_BetaDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BetaDistribution_cumulativeProbability(t_BetaDistribution *self, PyObject *args);
        static PyObject *t_BetaDistribution_density(t_BetaDistribution *self, PyObject *args);
        static PyObject *t_BetaDistribution_getAlpha(t_BetaDistribution *self);
        static PyObject *t_BetaDistribution_getBeta(t_BetaDistribution *self);
        static PyObject *t_BetaDistribution_getNumericalMean(t_BetaDistribution *self, PyObject *args);
        static PyObject *t_BetaDistribution_getNumericalVariance(t_BetaDistribution *self, PyObject *args);
        static PyObject *t_BetaDistribution_getSupportLowerBound(t_BetaDistribution *self, PyObject *args);
        static PyObject *t_BetaDistribution_getSupportUpperBound(t_BetaDistribution *self, PyObject *args);
        static PyObject *t_BetaDistribution_isSupportConnected(t_BetaDistribution *self, PyObject *args);
        static PyObject *t_BetaDistribution_logDensity(t_BetaDistribution *self, PyObject *args);
        static PyObject *t_BetaDistribution_get__alpha(t_BetaDistribution *self, void *data);
        static PyObject *t_BetaDistribution_get__beta(t_BetaDistribution *self, void *data);
        static PyObject *t_BetaDistribution_get__numericalMean(t_BetaDistribution *self, void *data);
        static PyObject *t_BetaDistribution_get__numericalVariance(t_BetaDistribution *self, void *data);
        static PyObject *t_BetaDistribution_get__supportConnected(t_BetaDistribution *self, void *data);
        static PyObject *t_BetaDistribution_get__supportLowerBound(t_BetaDistribution *self, void *data);
        static PyObject *t_BetaDistribution_get__supportUpperBound(t_BetaDistribution *self, void *data);
        static PyGetSetDef t_BetaDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_BetaDistribution, alpha),
          DECLARE_GET_FIELD(t_BetaDistribution, beta),
          DECLARE_GET_FIELD(t_BetaDistribution, numericalMean),
          DECLARE_GET_FIELD(t_BetaDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_BetaDistribution, supportConnected),
          DECLARE_GET_FIELD(t_BetaDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_BetaDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BetaDistribution__methods_[] = {
          DECLARE_METHOD(t_BetaDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BetaDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BetaDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_BetaDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_BetaDistribution, getAlpha, METH_NOARGS),
          DECLARE_METHOD(t_BetaDistribution, getBeta, METH_NOARGS),
          DECLARE_METHOD(t_BetaDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_BetaDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_BetaDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_BetaDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_BetaDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_BetaDistribution, logDensity, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BetaDistribution)[] = {
          { Py_tp_methods, t_BetaDistribution__methods_ },
          { Py_tp_init, (void *) t_BetaDistribution_init_ },
          { Py_tp_getset, t_BetaDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BetaDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(BetaDistribution, t_BetaDistribution, BetaDistribution);

        void t_BetaDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(BetaDistribution), &PY_TYPE_DEF(BetaDistribution), module, "BetaDistribution", 0);
        }

        void t_BetaDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BetaDistribution), "class_", make_descriptor(BetaDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BetaDistribution), "wrapfn_", make_descriptor(t_BetaDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BetaDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BetaDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BetaDistribution::initializeClass, 1)))
            return NULL;
          return t_BetaDistribution::wrap_Object(BetaDistribution(((t_BetaDistribution *) arg)->object.this$));
        }
        static PyObject *t_BetaDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BetaDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BetaDistribution_init_(t_BetaDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              BetaDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = BetaDistribution(a0, a1));
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
              BetaDistribution object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = BetaDistribution(a0, a1, a2));
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

        static PyObject *t_BetaDistribution_cumulativeProbability(t_BetaDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BetaDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_BetaDistribution_density(t_BetaDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BetaDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_BetaDistribution_getAlpha(t_BetaDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAlpha());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BetaDistribution_getBeta(t_BetaDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getBeta());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BetaDistribution_getNumericalMean(t_BetaDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BetaDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_BetaDistribution_getNumericalVariance(t_BetaDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BetaDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_BetaDistribution_getSupportLowerBound(t_BetaDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BetaDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_BetaDistribution_getSupportUpperBound(t_BetaDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BetaDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_BetaDistribution_isSupportConnected(t_BetaDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(BetaDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_BetaDistribution_logDensity(t_BetaDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BetaDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_BetaDistribution_get__alpha(t_BetaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAlpha());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BetaDistribution_get__beta(t_BetaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getBeta());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BetaDistribution_get__numericalMean(t_BetaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BetaDistribution_get__numericalVariance(t_BetaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BetaDistribution_get__supportConnected(t_BetaDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_BetaDistribution_get__supportLowerBound(t_BetaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BetaDistribution_get__supportUpperBound(t_BetaDistribution *self, void *data)
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
#include "java/util/ResourceBundle$Control.h"
#include "java/util/Locale.h"
#include "java/util/List.h"
#include "java/lang/InstantiationException.h"
#include "java/io/IOException.h"
#include "java/util/ResourceBundle$Control.h"
#include "java/lang/IllegalAccessException.h"
#include "java/lang/Class.h"
#include "java/util/ResourceBundle.h"
#include "java/lang/String.h"
#include "java/lang/ClassLoader.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *ResourceBundle$Control::class$ = NULL;
    jmethodID *ResourceBundle$Control::mids$ = NULL;
    bool ResourceBundle$Control::live$ = false;
    ::java::util::List *ResourceBundle$Control::FORMAT_CLASS = NULL;
    ::java::util::List *ResourceBundle$Control::FORMAT_DEFAULT = NULL;
    ::java::util::List *ResourceBundle$Control::FORMAT_PROPERTIES = NULL;
    jlong ResourceBundle$Control::TTL_DONT_CACHE = (jlong) 0;
    jlong ResourceBundle$Control::TTL_NO_EXPIRATION_CONTROL = (jlong) 0;

    jclass ResourceBundle$Control::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/ResourceBundle$Control");

        mids$ = new jmethodID[max_mid];
        mids$[mid_getCandidateLocales_35d6013265c82aff] = env->getMethodID(cls, "getCandidateLocales", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/List;");
        mids$[mid_getControl_4600285a79697666] = env->getStaticMethodID(cls, "getControl", "(Ljava/util/List;)Ljava/util/ResourceBundle$Control;");
        mids$[mid_getFallbackLocale_f7f54555048bc2c6] = env->getMethodID(cls, "getFallbackLocale", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/Locale;");
        mids$[mid_getFormats_7a823e7285fdf3d6] = env->getMethodID(cls, "getFormats", "(Ljava/lang/String;)Ljava/util/List;");
        mids$[mid_getNoFallbackControl_4600285a79697666] = env->getStaticMethodID(cls, "getNoFallbackControl", "(Ljava/util/List;)Ljava/util/ResourceBundle$Control;");
        mids$[mid_getTimeToLive_c3715d8cc0d3721b] = env->getMethodID(cls, "getTimeToLive", "(Ljava/lang/String;Ljava/util/Locale;)J");
        mids$[mid_needsReload_455bee464b342eb0] = env->getMethodID(cls, "needsReload", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/String;Ljava/lang/ClassLoader;Ljava/util/ResourceBundle;J)Z");
        mids$[mid_newBundle_9d8ce1b08b92301a] = env->getMethodID(cls, "newBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/String;Ljava/lang/ClassLoader;Z)Ljava/util/ResourceBundle;");
        mids$[mid_toBundleName_641a8f26d1eabba0] = env->getMethodID(cls, "toBundleName", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_toResourceName_91d6dcf90111829e] = env->getMethodID(cls, "toResourceName", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        FORMAT_CLASS = new ::java::util::List(env->getStaticObjectField(cls, "FORMAT_CLASS", "Ljava/util/List;"));
        FORMAT_DEFAULT = new ::java::util::List(env->getStaticObjectField(cls, "FORMAT_DEFAULT", "Ljava/util/List;"));
        FORMAT_PROPERTIES = new ::java::util::List(env->getStaticObjectField(cls, "FORMAT_PROPERTIES", "Ljava/util/List;"));
        TTL_DONT_CACHE = env->getStaticLongField(cls, "TTL_DONT_CACHE");
        TTL_NO_EXPIRATION_CONTROL = env->getStaticLongField(cls, "TTL_NO_EXPIRATION_CONTROL");
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::List ResourceBundle$Control::getCandidateLocales(const ::java::lang::String & a0, const ::java::util::Locale & a1) const
    {
      return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCandidateLocales_35d6013265c82aff], a0.this$, a1.this$));
    }

    ResourceBundle$Control ResourceBundle$Control::getControl(const ::java::util::List & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle$Control(env->callStaticObjectMethod(cls, mids$[mid_getControl_4600285a79697666], a0.this$));
    }

    ::java::util::Locale ResourceBundle$Control::getFallbackLocale(const ::java::lang::String & a0, const ::java::util::Locale & a1) const
    {
      return ::java::util::Locale(env->callObjectMethod(this$, mids$[mid_getFallbackLocale_f7f54555048bc2c6], a0.this$, a1.this$));
    }

    ::java::util::List ResourceBundle$Control::getFormats(const ::java::lang::String & a0) const
    {
      return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getFormats_7a823e7285fdf3d6], a0.this$));
    }

    ResourceBundle$Control ResourceBundle$Control::getNoFallbackControl(const ::java::util::List & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle$Control(env->callStaticObjectMethod(cls, mids$[mid_getNoFallbackControl_4600285a79697666], a0.this$));
    }

    jlong ResourceBundle$Control::getTimeToLive(const ::java::lang::String & a0, const ::java::util::Locale & a1) const
    {
      return env->callLongMethod(this$, mids$[mid_getTimeToLive_c3715d8cc0d3721b], a0.this$, a1.this$);
    }

    jboolean ResourceBundle$Control::needsReload(const ::java::lang::String & a0, const ::java::util::Locale & a1, const ::java::lang::String & a2, const ::java::lang::ClassLoader & a3, const ::java::util::ResourceBundle & a4, jlong a5) const
    {
      return env->callBooleanMethod(this$, mids$[mid_needsReload_455bee464b342eb0], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5);
    }

    ::java::util::ResourceBundle ResourceBundle$Control::newBundle(const ::java::lang::String & a0, const ::java::util::Locale & a1, const ::java::lang::String & a2, const ::java::lang::ClassLoader & a3, jboolean a4) const
    {
      return ::java::util::ResourceBundle(env->callObjectMethod(this$, mids$[mid_newBundle_9d8ce1b08b92301a], a0.this$, a1.this$, a2.this$, a3.this$, a4));
    }

    ::java::lang::String ResourceBundle$Control::toBundleName(const ::java::lang::String & a0, const ::java::util::Locale & a1) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toBundleName_641a8f26d1eabba0], a0.this$, a1.this$));
    }

    ::java::lang::String ResourceBundle$Control::toResourceName(const ::java::lang::String & a0, const ::java::lang::String & a1) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toResourceName_91d6dcf90111829e], a0.this$, a1.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_ResourceBundle$Control_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ResourceBundle$Control_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ResourceBundle$Control_getCandidateLocales(t_ResourceBundle$Control *self, PyObject *args);
    static PyObject *t_ResourceBundle$Control_getControl(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ResourceBundle$Control_getFallbackLocale(t_ResourceBundle$Control *self, PyObject *args);
    static PyObject *t_ResourceBundle$Control_getFormats(t_ResourceBundle$Control *self, PyObject *arg);
    static PyObject *t_ResourceBundle$Control_getNoFallbackControl(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ResourceBundle$Control_getTimeToLive(t_ResourceBundle$Control *self, PyObject *args);
    static PyObject *t_ResourceBundle$Control_needsReload(t_ResourceBundle$Control *self, PyObject *args);
    static PyObject *t_ResourceBundle$Control_newBundle(t_ResourceBundle$Control *self, PyObject *args);
    static PyObject *t_ResourceBundle$Control_toBundleName(t_ResourceBundle$Control *self, PyObject *args);
    static PyObject *t_ResourceBundle$Control_toResourceName(t_ResourceBundle$Control *self, PyObject *args);

    static PyMethodDef t_ResourceBundle$Control__methods_[] = {
      DECLARE_METHOD(t_ResourceBundle$Control, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ResourceBundle$Control, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ResourceBundle$Control, getCandidateLocales, METH_VARARGS),
      DECLARE_METHOD(t_ResourceBundle$Control, getControl, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ResourceBundle$Control, getFallbackLocale, METH_VARARGS),
      DECLARE_METHOD(t_ResourceBundle$Control, getFormats, METH_O),
      DECLARE_METHOD(t_ResourceBundle$Control, getNoFallbackControl, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ResourceBundle$Control, getTimeToLive, METH_VARARGS),
      DECLARE_METHOD(t_ResourceBundle$Control, needsReload, METH_VARARGS),
      DECLARE_METHOD(t_ResourceBundle$Control, newBundle, METH_VARARGS),
      DECLARE_METHOD(t_ResourceBundle$Control, toBundleName, METH_VARARGS),
      DECLARE_METHOD(t_ResourceBundle$Control, toResourceName, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ResourceBundle$Control)[] = {
      { Py_tp_methods, t_ResourceBundle$Control__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ResourceBundle$Control)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(ResourceBundle$Control, t_ResourceBundle$Control, ResourceBundle$Control);

    void t_ResourceBundle$Control::install(PyObject *module)
    {
      installType(&PY_TYPE(ResourceBundle$Control), &PY_TYPE_DEF(ResourceBundle$Control), module, "ResourceBundle$Control", 0);
    }

    void t_ResourceBundle$Control::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle$Control), "class_", make_descriptor(ResourceBundle$Control::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle$Control), "wrapfn_", make_descriptor(t_ResourceBundle$Control::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle$Control), "boxfn_", make_descriptor(boxObject));
      env->getClass(ResourceBundle$Control::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle$Control), "FORMAT_CLASS", make_descriptor(::java::util::t_List::wrap_Object(*ResourceBundle$Control::FORMAT_CLASS)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle$Control), "FORMAT_DEFAULT", make_descriptor(::java::util::t_List::wrap_Object(*ResourceBundle$Control::FORMAT_DEFAULT)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle$Control), "FORMAT_PROPERTIES", make_descriptor(::java::util::t_List::wrap_Object(*ResourceBundle$Control::FORMAT_PROPERTIES)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle$Control), "TTL_DONT_CACHE", make_descriptor(ResourceBundle$Control::TTL_DONT_CACHE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle$Control), "TTL_NO_EXPIRATION_CONTROL", make_descriptor(ResourceBundle$Control::TTL_NO_EXPIRATION_CONTROL));
    }

    static PyObject *t_ResourceBundle$Control_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ResourceBundle$Control::initializeClass, 1)))
        return NULL;
      return t_ResourceBundle$Control::wrap_Object(ResourceBundle$Control(((t_ResourceBundle$Control *) arg)->object.this$));
    }
    static PyObject *t_ResourceBundle$Control_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ResourceBundle$Control::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_ResourceBundle$Control_getCandidateLocales(t_ResourceBundle$Control *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::util::Locale a1((jobject) NULL);
      ::java::util::List result((jobject) NULL);

      if (!parseArgs(args, "sk", ::java::util::Locale::initializeClass, &a0, &a1))
      {
        OBJ_CALL(result = self->object.getCandidateLocales(a0, a1));
        return ::java::util::t_List::wrap_Object(result, ::java::util::PY_TYPE(Locale));
      }

      PyErr_SetArgsError((PyObject *) self, "getCandidateLocales", args);
      return NULL;
    }

    static PyObject *t_ResourceBundle$Control_getControl(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ResourceBundle$Control result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
      {
        OBJ_CALL(result = ::java::util::ResourceBundle$Control::getControl(a0));
        return t_ResourceBundle$Control::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "getControl", arg);
      return NULL;
    }

    static PyObject *t_ResourceBundle$Control_getFallbackLocale(t_ResourceBundle$Control *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::util::Locale a1((jobject) NULL);
      ::java::util::Locale result((jobject) NULL);

      if (!parseArgs(args, "sk", ::java::util::Locale::initializeClass, &a0, &a1))
      {
        OBJ_CALL(result = self->object.getFallbackLocale(a0, a1));
        return ::java::util::t_Locale::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getFallbackLocale", args);
      return NULL;
    }

    static PyObject *t_ResourceBundle$Control_getFormats(t_ResourceBundle$Control *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::util::List result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.getFormats(a0));
        return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
      }

      PyErr_SetArgsError((PyObject *) self, "getFormats", arg);
      return NULL;
    }

    static PyObject *t_ResourceBundle$Control_getNoFallbackControl(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ResourceBundle$Control result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
      {
        OBJ_CALL(result = ::java::util::ResourceBundle$Control::getNoFallbackControl(a0));
        return t_ResourceBundle$Control::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "getNoFallbackControl", arg);
      return NULL;
    }

    static PyObject *t_ResourceBundle$Control_getTimeToLive(t_ResourceBundle$Control *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::util::Locale a1((jobject) NULL);
      jlong result;

      if (!parseArgs(args, "sk", ::java::util::Locale::initializeClass, &a0, &a1))
      {
        OBJ_CALL(result = self->object.getTimeToLive(a0, a1));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError((PyObject *) self, "getTimeToLive", args);
      return NULL;
    }

    static PyObject *t_ResourceBundle$Control_needsReload(t_ResourceBundle$Control *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::util::Locale a1((jobject) NULL);
      ::java::lang::String a2((jobject) NULL);
      ::java::lang::ClassLoader a3((jobject) NULL);
      ::java::util::ResourceBundle a4((jobject) NULL);
      jlong a5;
      jboolean result;

      if (!parseArgs(args, "skskkJ", ::java::util::Locale::initializeClass, ::java::lang::ClassLoader::initializeClass, ::java::util::ResourceBundle::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
      {
        OBJ_CALL(result = self->object.needsReload(a0, a1, a2, a3, a4, a5));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "needsReload", args);
      return NULL;
    }

    static PyObject *t_ResourceBundle$Control_newBundle(t_ResourceBundle$Control *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::util::Locale a1((jobject) NULL);
      ::java::lang::String a2((jobject) NULL);
      ::java::lang::ClassLoader a3((jobject) NULL);
      jboolean a4;
      ::java::util::ResourceBundle result((jobject) NULL);

      if (!parseArgs(args, "skskZ", ::java::util::Locale::initializeClass, ::java::lang::ClassLoader::initializeClass, &a0, &a1, &a2, &a3, &a4))
      {
        OBJ_CALL(result = self->object.newBundle(a0, a1, a2, a3, a4));
        return ::java::util::t_ResourceBundle::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "newBundle", args);
      return NULL;
    }

    static PyObject *t_ResourceBundle$Control_toBundleName(t_ResourceBundle$Control *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::util::Locale a1((jobject) NULL);
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, "sk", ::java::util::Locale::initializeClass, &a0, &a1))
      {
        OBJ_CALL(result = self->object.toBundleName(a0, a1));
        return j2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "toBundleName", args);
      return NULL;
    }

    static PyObject *t_ResourceBundle$Control_toResourceName(t_ResourceBundle$Control *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::lang::String a1((jobject) NULL);
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, "ss", &a0, &a1))
      {
        OBJ_CALL(result = self->object.toResourceName(a0, a1));
        return j2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "toResourceName", args);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/summary/Sum.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/WeightedEvaluation.h"
#include "org/hipparchus/stat/descriptive/summary/Sum.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace summary {

          ::java::lang::Class *Sum::class$ = NULL;
          jmethodID *Sum::mids$ = NULL;
          bool Sum::live$ = false;

          jclass Sum::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/summary/Sum");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_aggregate_96e9928e3e40622b] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/summary/Sum;)V");
              mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_36e614b13a8a86d9] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/summary/Sum;");
              mids$[mid_evaluate_620ea098e5f0da00] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_evaluate_0b039b932db219bf] = env->getMethodID(cls, "evaluate", "([D[DII)D");
              mids$[mid_getN_42c72b98e3c2e08a] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_9981f74b2d109da6] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_1ad26e8c8c0cd65b] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Sum::Sum() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void Sum::aggregate(const Sum & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_96e9928e3e40622b], a0.this$);
          }

          void Sum::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
          }

          Sum Sum::copy() const
          {
            return Sum(env->callObjectMethod(this$, mids$[mid_copy_36e614b13a8a86d9]));
          }

          jdouble Sum::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_620ea098e5f0da00], a0.this$, a1, a2);
          }

          jdouble Sum::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jint a2, jint a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_0b039b932db219bf], a0.this$, a1.this$, a2, a3);
          }

          jlong Sum::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_42c72b98e3c2e08a]);
          }

          jdouble Sum::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_9981f74b2d109da6]);
          }

          void Sum::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_1ad26e8c8c0cd65b], a0);
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
        namespace summary {
          static PyObject *t_Sum_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Sum_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Sum_init_(t_Sum *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Sum_aggregate(t_Sum *self, PyObject *arg);
          static PyObject *t_Sum_clear(t_Sum *self, PyObject *args);
          static PyObject *t_Sum_copy(t_Sum *self, PyObject *args);
          static PyObject *t_Sum_evaluate(t_Sum *self, PyObject *args);
          static PyObject *t_Sum_getN(t_Sum *self, PyObject *args);
          static PyObject *t_Sum_getResult(t_Sum *self, PyObject *args);
          static PyObject *t_Sum_increment(t_Sum *self, PyObject *args);
          static PyObject *t_Sum_get__n(t_Sum *self, void *data);
          static PyObject *t_Sum_get__result(t_Sum *self, void *data);
          static PyGetSetDef t_Sum__fields_[] = {
            DECLARE_GET_FIELD(t_Sum, n),
            DECLARE_GET_FIELD(t_Sum, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Sum__methods_[] = {
            DECLARE_METHOD(t_Sum, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Sum, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Sum, aggregate, METH_O),
            DECLARE_METHOD(t_Sum, clear, METH_VARARGS),
            DECLARE_METHOD(t_Sum, copy, METH_VARARGS),
            DECLARE_METHOD(t_Sum, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Sum, getN, METH_VARARGS),
            DECLARE_METHOD(t_Sum, getResult, METH_VARARGS),
            DECLARE_METHOD(t_Sum, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Sum)[] = {
            { Py_tp_methods, t_Sum__methods_ },
            { Py_tp_init, (void *) t_Sum_init_ },
            { Py_tp_getset, t_Sum__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Sum)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(Sum, t_Sum, Sum);

          void t_Sum::install(PyObject *module)
          {
            installType(&PY_TYPE(Sum), &PY_TYPE_DEF(Sum), module, "Sum", 0);
          }

          void t_Sum::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sum), "class_", make_descriptor(Sum::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sum), "wrapfn_", make_descriptor(t_Sum::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sum), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Sum_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Sum::initializeClass, 1)))
              return NULL;
            return t_Sum::wrap_Object(Sum(((t_Sum *) arg)->object.this$));
          }
          static PyObject *t_Sum_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Sum::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Sum_init_(t_Sum *self, PyObject *args, PyObject *kwds)
          {
            Sum object((jobject) NULL);

            INT_CALL(object = Sum());
            self->object = object;

            return 0;
          }

          static PyObject *t_Sum_aggregate(t_Sum *self, PyObject *arg)
          {
            Sum a0((jobject) NULL);

            if (!parseArg(arg, "k", Sum::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_Sum_clear(t_Sum *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Sum), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_Sum_copy(t_Sum *self, PyObject *args)
          {
            Sum result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_Sum::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Sum), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_Sum_evaluate(t_Sum *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
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
             case 4:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jint a2;
                jint a3;
                jdouble result;

                if (!parseArgs(args, "[D[DII", &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(Sum), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_Sum_getN(t_Sum *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(Sum), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_Sum_getResult(t_Sum *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(Sum), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_Sum_increment(t_Sum *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Sum), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_Sum_get__n(t_Sum *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_Sum_get__result(t_Sum *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getResult());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldLnsCoefficients.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/CoefficientsFactory$NSKey.h"
#include "java/lang/Double.h"
#include "org/hipparchus/Field.h"
#include "java/util/SortedMap.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *FieldLnsCoefficients::class$ = NULL;
            jmethodID *FieldLnsCoefficients::mids$ = NULL;
            bool FieldLnsCoefficients::live$ = false;

            jclass FieldLnsCoefficients::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/FieldLnsCoefficients");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_e37f9e003e991dea] = env->getMethodID(cls, "<init>", "(II[[Lorg/hipparchus/CalculusFieldElement;Ljava/util/SortedMap;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/Field;)V");
                mids$[mid_getLns_89a7d1b6c5e4fe60] = env->getMethodID(cls, "getLns", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdLnsdGamma_89a7d1b6c5e4fe60] = env->getMethodID(cls, "getdLnsdGamma", "(II)Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldLnsCoefficients::FieldLnsCoefficients(jint a0, jint a1, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a2, const ::java::util::SortedMap & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::Field & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e37f9e003e991dea, a0, a1, a2.this$, a3.this$, a4.this$, a5.this$)) {}

            ::org::hipparchus::CalculusFieldElement FieldLnsCoefficients::getLns(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLns_89a7d1b6c5e4fe60], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldLnsCoefficients::getdLnsdGamma(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdLnsdGamma_89a7d1b6c5e4fe60], a0, a1));
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
            static PyObject *t_FieldLnsCoefficients_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldLnsCoefficients_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldLnsCoefficients_of_(t_FieldLnsCoefficients *self, PyObject *args);
            static int t_FieldLnsCoefficients_init_(t_FieldLnsCoefficients *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldLnsCoefficients_getLns(t_FieldLnsCoefficients *self, PyObject *args);
            static PyObject *t_FieldLnsCoefficients_getdLnsdGamma(t_FieldLnsCoefficients *self, PyObject *args);
            static PyObject *t_FieldLnsCoefficients_get__parameters_(t_FieldLnsCoefficients *self, void *data);
            static PyGetSetDef t_FieldLnsCoefficients__fields_[] = {
              DECLARE_GET_FIELD(t_FieldLnsCoefficients, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldLnsCoefficients__methods_[] = {
              DECLARE_METHOD(t_FieldLnsCoefficients, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldLnsCoefficients, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldLnsCoefficients, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldLnsCoefficients, getLns, METH_VARARGS),
              DECLARE_METHOD(t_FieldLnsCoefficients, getdLnsdGamma, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldLnsCoefficients)[] = {
              { Py_tp_methods, t_FieldLnsCoefficients__methods_ },
              { Py_tp_init, (void *) t_FieldLnsCoefficients_init_ },
              { Py_tp_getset, t_FieldLnsCoefficients__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldLnsCoefficients)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldLnsCoefficients, t_FieldLnsCoefficients, FieldLnsCoefficients);
            PyObject *t_FieldLnsCoefficients::wrap_Object(const FieldLnsCoefficients& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldLnsCoefficients::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldLnsCoefficients *self = (t_FieldLnsCoefficients *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldLnsCoefficients::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldLnsCoefficients::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldLnsCoefficients *self = (t_FieldLnsCoefficients *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldLnsCoefficients::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldLnsCoefficients), &PY_TYPE_DEF(FieldLnsCoefficients), module, "FieldLnsCoefficients", 0);
            }

            void t_FieldLnsCoefficients::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLnsCoefficients), "class_", make_descriptor(FieldLnsCoefficients::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLnsCoefficients), "wrapfn_", make_descriptor(t_FieldLnsCoefficients::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLnsCoefficients), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldLnsCoefficients_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldLnsCoefficients::initializeClass, 1)))
                return NULL;
              return t_FieldLnsCoefficients::wrap_Object(FieldLnsCoefficients(((t_FieldLnsCoefficients *) arg)->object.this$));
            }
            static PyObject *t_FieldLnsCoefficients_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldLnsCoefficients::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldLnsCoefficients_of_(t_FieldLnsCoefficients *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldLnsCoefficients_init_(t_FieldLnsCoefficients *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              jint a1;
              JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a2((jobject) NULL);
              PyTypeObject **p2;
              ::java::util::SortedMap a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::hipparchus::Field a5((jobject) NULL);
              PyTypeObject **p5;
              FieldLnsCoefficients object((jobject) NULL);

              if (!parseArgs(args, "II[[KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::java::util::SortedMap::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::Field::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::java::util::t_SortedMap::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_Field::parameters_))
              {
                INT_CALL(object = FieldLnsCoefficients(a0, a1, a2, a3, a4, a5));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldLnsCoefficients_getLns(t_FieldLnsCoefficients *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getLns(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getLns", args);
              return NULL;
            }

            static PyObject *t_FieldLnsCoefficients_getdLnsdGamma(t_FieldLnsCoefficients *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdLnsdGamma(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdLnsdGamma", args);
              return NULL;
            }
            static PyObject *t_FieldLnsCoefficients_get__parameters_(t_FieldLnsCoefficients *self, void *data)
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
#include "org/hipparchus/distribution/continuous/NakagamiDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *NakagamiDistribution::class$ = NULL;
        jmethodID *NakagamiDistribution::mids$ = NULL;
        bool NakagamiDistribution::live$ = false;

        jclass NakagamiDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/NakagamiDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_bd28dc6055dc5bbd] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_cumulativeProbability_bf28ed64d6e8576b] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_bf28ed64d6e8576b] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getNumericalMean_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getScale_9981f74b2d109da6] = env->getMethodID(cls, "getScale", "()D");
            mids$[mid_getShape_9981f74b2d109da6] = env->getMethodID(cls, "getShape", "()D");
            mids$[mid_getSupportLowerBound_9981f74b2d109da6] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_9981f74b2d109da6] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_isSupportConnected_eee3de00fe971136] = env->getMethodID(cls, "isSupportConnected", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NakagamiDistribution::NakagamiDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

        NakagamiDistribution::NakagamiDistribution(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_bd28dc6055dc5bbd, a0, a1, a2)) {}

        jdouble NakagamiDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_bf28ed64d6e8576b], a0);
        }

        jdouble NakagamiDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_bf28ed64d6e8576b], a0);
        }

        jdouble NakagamiDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_9981f74b2d109da6]);
        }

        jdouble NakagamiDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_9981f74b2d109da6]);
        }

        jdouble NakagamiDistribution::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_9981f74b2d109da6]);
        }

        jdouble NakagamiDistribution::getShape() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getShape_9981f74b2d109da6]);
        }

        jdouble NakagamiDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_9981f74b2d109da6]);
        }

        jdouble NakagamiDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_9981f74b2d109da6]);
        }

        jboolean NakagamiDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_eee3de00fe971136]);
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
        static PyObject *t_NakagamiDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NakagamiDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_NakagamiDistribution_init_(t_NakagamiDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NakagamiDistribution_cumulativeProbability(t_NakagamiDistribution *self, PyObject *args);
        static PyObject *t_NakagamiDistribution_density(t_NakagamiDistribution *self, PyObject *args);
        static PyObject *t_NakagamiDistribution_getNumericalMean(t_NakagamiDistribution *self, PyObject *args);
        static PyObject *t_NakagamiDistribution_getNumericalVariance(t_NakagamiDistribution *self, PyObject *args);
        static PyObject *t_NakagamiDistribution_getScale(t_NakagamiDistribution *self);
        static PyObject *t_NakagamiDistribution_getShape(t_NakagamiDistribution *self);
        static PyObject *t_NakagamiDistribution_getSupportLowerBound(t_NakagamiDistribution *self, PyObject *args);
        static PyObject *t_NakagamiDistribution_getSupportUpperBound(t_NakagamiDistribution *self, PyObject *args);
        static PyObject *t_NakagamiDistribution_isSupportConnected(t_NakagamiDistribution *self, PyObject *args);
        static PyObject *t_NakagamiDistribution_get__numericalMean(t_NakagamiDistribution *self, void *data);
        static PyObject *t_NakagamiDistribution_get__numericalVariance(t_NakagamiDistribution *self, void *data);
        static PyObject *t_NakagamiDistribution_get__scale(t_NakagamiDistribution *self, void *data);
        static PyObject *t_NakagamiDistribution_get__shape(t_NakagamiDistribution *self, void *data);
        static PyObject *t_NakagamiDistribution_get__supportConnected(t_NakagamiDistribution *self, void *data);
        static PyObject *t_NakagamiDistribution_get__supportLowerBound(t_NakagamiDistribution *self, void *data);
        static PyObject *t_NakagamiDistribution_get__supportUpperBound(t_NakagamiDistribution *self, void *data);
        static PyGetSetDef t_NakagamiDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_NakagamiDistribution, numericalMean),
          DECLARE_GET_FIELD(t_NakagamiDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_NakagamiDistribution, scale),
          DECLARE_GET_FIELD(t_NakagamiDistribution, shape),
          DECLARE_GET_FIELD(t_NakagamiDistribution, supportConnected),
          DECLARE_GET_FIELD(t_NakagamiDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_NakagamiDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NakagamiDistribution__methods_[] = {
          DECLARE_METHOD(t_NakagamiDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NakagamiDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NakagamiDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_NakagamiDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_NakagamiDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_NakagamiDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_NakagamiDistribution, getScale, METH_NOARGS),
          DECLARE_METHOD(t_NakagamiDistribution, getShape, METH_NOARGS),
          DECLARE_METHOD(t_NakagamiDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_NakagamiDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_NakagamiDistribution, isSupportConnected, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NakagamiDistribution)[] = {
          { Py_tp_methods, t_NakagamiDistribution__methods_ },
          { Py_tp_init, (void *) t_NakagamiDistribution_init_ },
          { Py_tp_getset, t_NakagamiDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NakagamiDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(NakagamiDistribution, t_NakagamiDistribution, NakagamiDistribution);

        void t_NakagamiDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(NakagamiDistribution), &PY_TYPE_DEF(NakagamiDistribution), module, "NakagamiDistribution", 0);
        }

        void t_NakagamiDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NakagamiDistribution), "class_", make_descriptor(NakagamiDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NakagamiDistribution), "wrapfn_", make_descriptor(t_NakagamiDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NakagamiDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NakagamiDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NakagamiDistribution::initializeClass, 1)))
            return NULL;
          return t_NakagamiDistribution::wrap_Object(NakagamiDistribution(((t_NakagamiDistribution *) arg)->object.this$));
        }
        static PyObject *t_NakagamiDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NakagamiDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_NakagamiDistribution_init_(t_NakagamiDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              NakagamiDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = NakagamiDistribution(a0, a1));
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
              NakagamiDistribution object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = NakagamiDistribution(a0, a1, a2));
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

        static PyObject *t_NakagamiDistribution_cumulativeProbability(t_NakagamiDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NakagamiDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_NakagamiDistribution_density(t_NakagamiDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NakagamiDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_NakagamiDistribution_getNumericalMean(t_NakagamiDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NakagamiDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_NakagamiDistribution_getNumericalVariance(t_NakagamiDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NakagamiDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_NakagamiDistribution_getScale(t_NakagamiDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_NakagamiDistribution_getShape(t_NakagamiDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getShape());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_NakagamiDistribution_getSupportLowerBound(t_NakagamiDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NakagamiDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_NakagamiDistribution_getSupportUpperBound(t_NakagamiDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NakagamiDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_NakagamiDistribution_isSupportConnected(t_NakagamiDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(NakagamiDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_NakagamiDistribution_get__numericalMean(t_NakagamiDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NakagamiDistribution_get__numericalVariance(t_NakagamiDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NakagamiDistribution_get__scale(t_NakagamiDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NakagamiDistribution_get__shape(t_NakagamiDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getShape());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NakagamiDistribution_get__supportConnected(t_NakagamiDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_NakagamiDistribution_get__supportLowerBound(t_NakagamiDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NakagamiDistribution_get__supportUpperBound(t_NakagamiDistribution *self, void *data)
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
#include "org/orekit/forces/maneuvers/FieldImpulseManeuver.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {

        ::java::lang::Class *FieldImpulseManeuver::class$ = NULL;
        jmethodID *FieldImpulseManeuver::mids$ = NULL;
        bool FieldImpulseManeuver::live$ = false;

        jclass FieldImpulseManeuver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/FieldImpulseManeuver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c90a3213a1e71249] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/FieldEventDetector;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_init$_719b627d41a71039] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/FieldEventDetector;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_init$_687234d408d4818f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/FieldEventDetector;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/maneuvers/Control3DVectorCostType;)V");
            mids$[mid_g_ac6fccc69d1b2d9e] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getAttitudeOverride_2f73d1f4460b8d6c] = env->getMethodID(cls, "getAttitudeOverride", "()Lorg/orekit/attitudes/AttitudeProvider;");
            mids$[mid_getControl3DVectorCostType_fc9abda16ef946e0] = env->getMethodID(cls, "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");
            mids$[mid_getDeltaVSat_d1b42a6748e907f9] = env->getMethodID(cls, "getDeltaVSat", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getIsp_08d37e3f77b7239d] = env->getMethodID(cls, "getIsp", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getTrigger_3146cd1129cf853c] = env->getMethodID(cls, "getTrigger", "()Lorg/orekit/propagation/events/FieldEventDetector;");
            mids$[mid_init_357211ab77703f3f] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_create_7bc6fd9145d32828] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/forces/maneuvers/FieldImpulseManeuver;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldImpulseManeuver::FieldImpulseManeuver(const ::org::orekit::propagation::events::FieldEventDetector & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_c90a3213a1e71249, a0.this$, a1.this$, a2.this$)) {}

        FieldImpulseManeuver::FieldImpulseManeuver(const ::org::orekit::propagation::events::FieldEventDetector & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::CalculusFieldElement & a3) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_719b627d41a71039, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        FieldImpulseManeuver::FieldImpulseManeuver(const ::org::orekit::propagation::events::FieldEventDetector & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::orekit::forces::maneuvers::Control3DVectorCostType & a4) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_687234d408d4818f, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldImpulseManeuver::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_ac6fccc69d1b2d9e], a0.this$));
        }

        ::org::orekit::attitudes::AttitudeProvider FieldImpulseManeuver::getAttitudeOverride() const
        {
          return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeOverride_2f73d1f4460b8d6c]));
        }

        ::org::orekit::forces::maneuvers::Control3DVectorCostType FieldImpulseManeuver::getControl3DVectorCostType() const
        {
          return ::org::orekit::forces::maneuvers::Control3DVectorCostType(env->callObjectMethod(this$, mids$[mid_getControl3DVectorCostType_fc9abda16ef946e0]));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldImpulseManeuver::getDeltaVSat() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getDeltaVSat_d1b42a6748e907f9]));
        }

        ::org::hipparchus::CalculusFieldElement FieldImpulseManeuver::getIsp() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getIsp_08d37e3f77b7239d]));
        }

        ::org::orekit::propagation::events::FieldEventDetector FieldImpulseManeuver::getTrigger() const
        {
          return ::org::orekit::propagation::events::FieldEventDetector(env->callObjectMethod(this$, mids$[mid_getTrigger_3146cd1129cf853c]));
        }

        void FieldImpulseManeuver::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_357211ab77703f3f], a0.this$, a1.this$);
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
        static PyObject *t_FieldImpulseManeuver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldImpulseManeuver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldImpulseManeuver_of_(t_FieldImpulseManeuver *self, PyObject *args);
        static int t_FieldImpulseManeuver_init_(t_FieldImpulseManeuver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldImpulseManeuver_g(t_FieldImpulseManeuver *self, PyObject *args);
        static PyObject *t_FieldImpulseManeuver_getAttitudeOverride(t_FieldImpulseManeuver *self);
        static PyObject *t_FieldImpulseManeuver_getControl3DVectorCostType(t_FieldImpulseManeuver *self);
        static PyObject *t_FieldImpulseManeuver_getDeltaVSat(t_FieldImpulseManeuver *self);
        static PyObject *t_FieldImpulseManeuver_getIsp(t_FieldImpulseManeuver *self);
        static PyObject *t_FieldImpulseManeuver_getTrigger(t_FieldImpulseManeuver *self);
        static PyObject *t_FieldImpulseManeuver_init(t_FieldImpulseManeuver *self, PyObject *args);
        static PyObject *t_FieldImpulseManeuver_get__attitudeOverride(t_FieldImpulseManeuver *self, void *data);
        static PyObject *t_FieldImpulseManeuver_get__control3DVectorCostType(t_FieldImpulseManeuver *self, void *data);
        static PyObject *t_FieldImpulseManeuver_get__deltaVSat(t_FieldImpulseManeuver *self, void *data);
        static PyObject *t_FieldImpulseManeuver_get__isp(t_FieldImpulseManeuver *self, void *data);
        static PyObject *t_FieldImpulseManeuver_get__trigger(t_FieldImpulseManeuver *self, void *data);
        static PyObject *t_FieldImpulseManeuver_get__parameters_(t_FieldImpulseManeuver *self, void *data);
        static PyGetSetDef t_FieldImpulseManeuver__fields_[] = {
          DECLARE_GET_FIELD(t_FieldImpulseManeuver, attitudeOverride),
          DECLARE_GET_FIELD(t_FieldImpulseManeuver, control3DVectorCostType),
          DECLARE_GET_FIELD(t_FieldImpulseManeuver, deltaVSat),
          DECLARE_GET_FIELD(t_FieldImpulseManeuver, isp),
          DECLARE_GET_FIELD(t_FieldImpulseManeuver, trigger),
          DECLARE_GET_FIELD(t_FieldImpulseManeuver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldImpulseManeuver__methods_[] = {
          DECLARE_METHOD(t_FieldImpulseManeuver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldImpulseManeuver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldImpulseManeuver, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldImpulseManeuver, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldImpulseManeuver, getAttitudeOverride, METH_NOARGS),
          DECLARE_METHOD(t_FieldImpulseManeuver, getControl3DVectorCostType, METH_NOARGS),
          DECLARE_METHOD(t_FieldImpulseManeuver, getDeltaVSat, METH_NOARGS),
          DECLARE_METHOD(t_FieldImpulseManeuver, getIsp, METH_NOARGS),
          DECLARE_METHOD(t_FieldImpulseManeuver, getTrigger, METH_NOARGS),
          DECLARE_METHOD(t_FieldImpulseManeuver, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldImpulseManeuver)[] = {
          { Py_tp_methods, t_FieldImpulseManeuver__methods_ },
          { Py_tp_init, (void *) t_FieldImpulseManeuver_init_ },
          { Py_tp_getset, t_FieldImpulseManeuver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldImpulseManeuver)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldImpulseManeuver, t_FieldImpulseManeuver, FieldImpulseManeuver);
        PyObject *t_FieldImpulseManeuver::wrap_Object(const FieldImpulseManeuver& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldImpulseManeuver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldImpulseManeuver *self = (t_FieldImpulseManeuver *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_FieldImpulseManeuver::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldImpulseManeuver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldImpulseManeuver *self = (t_FieldImpulseManeuver *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_FieldImpulseManeuver::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldImpulseManeuver), &PY_TYPE_DEF(FieldImpulseManeuver), module, "FieldImpulseManeuver", 0);
        }

        void t_FieldImpulseManeuver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldImpulseManeuver), "class_", make_descriptor(FieldImpulseManeuver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldImpulseManeuver), "wrapfn_", make_descriptor(t_FieldImpulseManeuver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldImpulseManeuver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldImpulseManeuver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldImpulseManeuver::initializeClass, 1)))
            return NULL;
          return t_FieldImpulseManeuver::wrap_Object(FieldImpulseManeuver(((t_FieldImpulseManeuver *) arg)->object.this$));
        }
        static PyObject *t_FieldImpulseManeuver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldImpulseManeuver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldImpulseManeuver_of_(t_FieldImpulseManeuver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldImpulseManeuver_init_(t_FieldImpulseManeuver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              FieldImpulseManeuver object((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldImpulseManeuver(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              FieldImpulseManeuver object((jobject) NULL);

              if (!parseArgs(args, "KkKK", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a1, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldImpulseManeuver(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::forces::maneuvers::Control3DVectorCostType a4((jobject) NULL);
              PyTypeObject **p4;
              FieldImpulseManeuver object((jobject) NULL);

              if (!parseArgs(args, "KkKKK", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::forces::maneuvers::Control3DVectorCostType::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a1, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::parameters_))
              {
                INT_CALL(object = FieldImpulseManeuver(a0, a1, a2, a3, a4));
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

        static PyObject *t_FieldImpulseManeuver_g(t_FieldImpulseManeuver *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldImpulseManeuver), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldImpulseManeuver_getAttitudeOverride(t_FieldImpulseManeuver *self)
        {
          ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getAttitudeOverride());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
        }

        static PyObject *t_FieldImpulseManeuver_getControl3DVectorCostType(t_FieldImpulseManeuver *self)
        {
          ::org::orekit::forces::maneuvers::Control3DVectorCostType result((jobject) NULL);
          OBJ_CALL(result = self->object.getControl3DVectorCostType());
          return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(result);
        }

        static PyObject *t_FieldImpulseManeuver_getDeltaVSat(t_FieldImpulseManeuver *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getDeltaVSat());
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_FieldImpulseManeuver_getIsp(t_FieldImpulseManeuver *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getIsp());
          return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldImpulseManeuver_getTrigger(t_FieldImpulseManeuver *self)
        {
          ::org::orekit::propagation::events::FieldEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getTrigger());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_FieldImpulseManeuver_init(t_FieldImpulseManeuver *self, PyObject *args)
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

          return callSuper(PY_TYPE(FieldImpulseManeuver), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_FieldImpulseManeuver_get__parameters_(t_FieldImpulseManeuver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldImpulseManeuver_get__attitudeOverride(t_FieldImpulseManeuver *self, void *data)
        {
          ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getAttitudeOverride());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
        }

        static PyObject *t_FieldImpulseManeuver_get__control3DVectorCostType(t_FieldImpulseManeuver *self, void *data)
        {
          ::org::orekit::forces::maneuvers::Control3DVectorCostType value((jobject) NULL);
          OBJ_CALL(value = self->object.getControl3DVectorCostType());
          return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(value);
        }

        static PyObject *t_FieldImpulseManeuver_get__deltaVSat(t_FieldImpulseManeuver *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getDeltaVSat());
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
        }

        static PyObject *t_FieldImpulseManeuver_get__isp(t_FieldImpulseManeuver *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getIsp());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldImpulseManeuver_get__trigger(t_FieldImpulseManeuver *self, void *data)
        {
          ::org::orekit::propagation::events::FieldEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getTrigger());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/Line.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/partitioning/Embedding.h"
#include "org/hipparchus/geometry/partitioning/Transform.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/Vector.h"
#include "org/hipparchus/geometry/euclidean/twod/Line.h"
#include "org/hipparchus/geometry/euclidean/twod/SubLine.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/oned/Vector1D.h"
#include "org/hipparchus/geometry/euclidean/twod/PolygonsSet.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          ::java::lang::Class *Line::class$ = NULL;
          jmethodID *Line::mids$ = NULL;
          bool Line::live$ = false;

          jclass Line::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/Line");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7f7842afd4d898dc] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;D)V");
              mids$[mid_init$_9216d012af6189c5] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;DD)V");
              mids$[mid_contains_a523d32086548a9e] = env->getMethodID(cls, "contains", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Z");
              mids$[mid_copySelf_72d7a4f683ad4a34] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/euclidean/twod/Line;");
              mids$[mid_distance_fa70b1ee85089725] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)D");
              mids$[mid_emptyHyperplane_deb002e8218af0bd] = env->getMethodID(cls, "emptyHyperplane", "()Lorg/hipparchus/geometry/euclidean/twod/SubLine;");
              mids$[mid_getAngle_9981f74b2d109da6] = env->getMethodID(cls, "getAngle", "()D");
              mids$[mid_getOffset_d4ab1cb22c6eb7d2] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/euclidean/twod/Line;)D");
              mids$[mid_getOffset_277cb62c4ec87155] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_getOffset_54eca2a6b3ac81a2] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_getOriginOffset_9981f74b2d109da6] = env->getMethodID(cls, "getOriginOffset", "()D");
              mids$[mid_getPointAt_e08904c816852751] = env->getMethodID(cls, "getPointAt", "(Lorg/hipparchus/geometry/euclidean/oned/Vector1D;D)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_getReverse_72d7a4f683ad4a34] = env->getMethodID(cls, "getReverse", "()Lorg/hipparchus/geometry/euclidean/twod/Line;");
              mids$[mid_getTolerance_9981f74b2d109da6] = env->getMethodID(cls, "getTolerance", "()D");
              mids$[mid_getTransform_6439a2a54f3f7c30] = env->getStaticMethodID(cls, "getTransform", "(DDDDDD)Lorg/hipparchus/geometry/partitioning/Transform;");
              mids$[mid_intersection_27be2ef9b395a633] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/euclidean/twod/Line;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_isParallelTo_d13b3da93e072da2] = env->getMethodID(cls, "isParallelTo", "(Lorg/hipparchus/geometry/euclidean/twod/Line;)Z");
              mids$[mid_project_ff0c84956c63705d] = env->getMethodID(cls, "project", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/Point;");
              mids$[mid_reset_45eff2f325e3cefd] = env->getMethodID(cls, "reset", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_reset_aac284ff8cc11de8] = env->getMethodID(cls, "reset", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;D)V");
              mids$[mid_revertSelf_ff7cb6c242604316] = env->getMethodID(cls, "revertSelf", "()V");
              mids$[mid_sameOrientationAs_51737f919fe0cf72] = env->getMethodID(cls, "sameOrientationAs", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Z");
              mids$[mid_setAngle_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setAngle", "(D)V");
              mids$[mid_setOriginOffset_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setOriginOffset", "(D)V");
              mids$[mid_toSpace_d7932c1ec0f8a119] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_toSpace_bf5660dd5343a17c] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_toSubSpace_8868fe0c3fe0aa37] = env->getMethodID(cls, "toSubSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_toSubSpace_0184a754d67728b4] = env->getMethodID(cls, "toSubSpace", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_translateToPoint_bcb0f1d2f82539d7] = env->getMethodID(cls, "translateToPoint", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_wholeHyperplane_deb002e8218af0bd] = env->getMethodID(cls, "wholeHyperplane", "()Lorg/hipparchus/geometry/euclidean/twod/SubLine;");
              mids$[mid_wholeSpace_72311010d4d45ad4] = env->getMethodID(cls, "wholeSpace", "()Lorg/hipparchus/geometry/euclidean/twod/PolygonsSet;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Line::Line(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7f7842afd4d898dc, a0.this$, a1.this$, a2)) {}

          Line::Line(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9216d012af6189c5, a0.this$, a1, a2)) {}

          jboolean Line::contains(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_contains_a523d32086548a9e], a0.this$);
          }

          Line Line::copySelf() const
          {
            return Line(env->callObjectMethod(this$, mids$[mid_copySelf_72d7a4f683ad4a34]));
          }

          jdouble Line::distance(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance_fa70b1ee85089725], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::twod::SubLine Line::emptyHyperplane() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::SubLine(env->callObjectMethod(this$, mids$[mid_emptyHyperplane_deb002e8218af0bd]));
          }

          jdouble Line::getAngle() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAngle_9981f74b2d109da6]);
          }

          jdouble Line::getOffset(const Line & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_d4ab1cb22c6eb7d2], a0.this$);
          }

          jdouble Line::getOffset(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_277cb62c4ec87155], a0.this$);
          }

          jdouble Line::getOffset(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_54eca2a6b3ac81a2], a0.this$);
          }

          jdouble Line::getOriginOffset() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOriginOffset_9981f74b2d109da6]);
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Line::getPointAt(const ::org::hipparchus::geometry::euclidean::oned::Vector1D & a0, jdouble a1) const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_getPointAt_e08904c816852751], a0.this$, a1));
          }

          Line Line::getReverse() const
          {
            return Line(env->callObjectMethod(this$, mids$[mid_getReverse_72d7a4f683ad4a34]));
          }

          jdouble Line::getTolerance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTolerance_9981f74b2d109da6]);
          }

          ::org::hipparchus::geometry::partitioning::Transform Line::getTransform(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::geometry::partitioning::Transform(env->callStaticObjectMethod(cls, mids$[mid_getTransform_6439a2a54f3f7c30], a0, a1, a2, a3, a4, a5));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Line::intersection(const Line & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_intersection_27be2ef9b395a633], a0.this$));
          }

          jboolean Line::isParallelTo(const Line & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_isParallelTo_d13b3da93e072da2], a0.this$);
          }

          ::org::hipparchus::geometry::Point Line::project(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_project_ff0c84956c63705d], a0.this$));
          }

          void Line::reset(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_reset_45eff2f325e3cefd], a0.this$, a1.this$);
          }

          void Line::reset(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, jdouble a1) const
          {
            env->callVoidMethod(this$, mids$[mid_reset_aac284ff8cc11de8], a0.this$, a1);
          }

          void Line::revertSelf() const
          {
            env->callVoidMethod(this$, mids$[mid_revertSelf_ff7cb6c242604316]);
          }

          jboolean Line::sameOrientationAs(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_sameOrientationAs_51737f919fe0cf72], a0.this$);
          }

          void Line::setAngle(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAngle_1ad26e8c8c0cd65b], a0);
          }

          void Line::setOriginOffset(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOriginOffset_1ad26e8c8c0cd65b], a0);
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Line::toSpace(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_toSpace_d7932c1ec0f8a119], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Line::toSpace(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_toSpace_bf5660dd5343a17c], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::oned::Vector1D Line::toSubSpace(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::oned::Vector1D(env->callObjectMethod(this$, mids$[mid_toSubSpace_8868fe0c3fe0aa37], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::oned::Vector1D Line::toSubSpace(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::oned::Vector1D(env->callObjectMethod(this$, mids$[mid_toSubSpace_0184a754d67728b4], a0.this$));
          }

          void Line::translateToPoint(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_translateToPoint_bcb0f1d2f82539d7], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::twod::SubLine Line::wholeHyperplane() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::SubLine(env->callObjectMethod(this$, mids$[mid_wholeHyperplane_deb002e8218af0bd]));
          }

          ::org::hipparchus::geometry::euclidean::twod::PolygonsSet Line::wholeSpace() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::PolygonsSet(env->callObjectMethod(this$, mids$[mid_wholeSpace_72311010d4d45ad4]));
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
        namespace twod {
          static PyObject *t_Line_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Line_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Line_init_(t_Line *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Line_contains(t_Line *self, PyObject *arg);
          static PyObject *t_Line_copySelf(t_Line *self);
          static PyObject *t_Line_distance(t_Line *self, PyObject *arg);
          static PyObject *t_Line_emptyHyperplane(t_Line *self);
          static PyObject *t_Line_getAngle(t_Line *self);
          static PyObject *t_Line_getOffset(t_Line *self, PyObject *args);
          static PyObject *t_Line_getOriginOffset(t_Line *self);
          static PyObject *t_Line_getPointAt(t_Line *self, PyObject *args);
          static PyObject *t_Line_getReverse(t_Line *self);
          static PyObject *t_Line_getTolerance(t_Line *self);
          static PyObject *t_Line_getTransform(PyTypeObject *type, PyObject *args);
          static PyObject *t_Line_intersection(t_Line *self, PyObject *arg);
          static PyObject *t_Line_isParallelTo(t_Line *self, PyObject *arg);
          static PyObject *t_Line_project(t_Line *self, PyObject *arg);
          static PyObject *t_Line_reset(t_Line *self, PyObject *args);
          static PyObject *t_Line_revertSelf(t_Line *self);
          static PyObject *t_Line_sameOrientationAs(t_Line *self, PyObject *arg);
          static PyObject *t_Line_setAngle(t_Line *self, PyObject *arg);
          static PyObject *t_Line_setOriginOffset(t_Line *self, PyObject *arg);
          static PyObject *t_Line_toSpace(t_Line *self, PyObject *args);
          static PyObject *t_Line_toSubSpace(t_Line *self, PyObject *args);
          static PyObject *t_Line_translateToPoint(t_Line *self, PyObject *arg);
          static PyObject *t_Line_wholeHyperplane(t_Line *self);
          static PyObject *t_Line_wholeSpace(t_Line *self);
          static PyObject *t_Line_get__angle(t_Line *self, void *data);
          static int t_Line_set__angle(t_Line *self, PyObject *arg, void *data);
          static PyObject *t_Line_get__originOffset(t_Line *self, void *data);
          static int t_Line_set__originOffset(t_Line *self, PyObject *arg, void *data);
          static PyObject *t_Line_get__reverse(t_Line *self, void *data);
          static PyObject *t_Line_get__tolerance(t_Line *self, void *data);
          static PyGetSetDef t_Line__fields_[] = {
            DECLARE_GETSET_FIELD(t_Line, angle),
            DECLARE_GETSET_FIELD(t_Line, originOffset),
            DECLARE_GET_FIELD(t_Line, reverse),
            DECLARE_GET_FIELD(t_Line, tolerance),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Line__methods_[] = {
            DECLARE_METHOD(t_Line, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Line, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Line, contains, METH_O),
            DECLARE_METHOD(t_Line, copySelf, METH_NOARGS),
            DECLARE_METHOD(t_Line, distance, METH_O),
            DECLARE_METHOD(t_Line, emptyHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_Line, getAngle, METH_NOARGS),
            DECLARE_METHOD(t_Line, getOffset, METH_VARARGS),
            DECLARE_METHOD(t_Line, getOriginOffset, METH_NOARGS),
            DECLARE_METHOD(t_Line, getPointAt, METH_VARARGS),
            DECLARE_METHOD(t_Line, getReverse, METH_NOARGS),
            DECLARE_METHOD(t_Line, getTolerance, METH_NOARGS),
            DECLARE_METHOD(t_Line, getTransform, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Line, intersection, METH_O),
            DECLARE_METHOD(t_Line, isParallelTo, METH_O),
            DECLARE_METHOD(t_Line, project, METH_O),
            DECLARE_METHOD(t_Line, reset, METH_VARARGS),
            DECLARE_METHOD(t_Line, revertSelf, METH_NOARGS),
            DECLARE_METHOD(t_Line, sameOrientationAs, METH_O),
            DECLARE_METHOD(t_Line, setAngle, METH_O),
            DECLARE_METHOD(t_Line, setOriginOffset, METH_O),
            DECLARE_METHOD(t_Line, toSpace, METH_VARARGS),
            DECLARE_METHOD(t_Line, toSubSpace, METH_VARARGS),
            DECLARE_METHOD(t_Line, translateToPoint, METH_O),
            DECLARE_METHOD(t_Line, wholeHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_Line, wholeSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Line)[] = {
            { Py_tp_methods, t_Line__methods_ },
            { Py_tp_init, (void *) t_Line_init_ },
            { Py_tp_getset, t_Line__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Line)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Line, t_Line, Line);

          void t_Line::install(PyObject *module)
          {
            installType(&PY_TYPE(Line), &PY_TYPE_DEF(Line), module, "Line", 0);
          }

          void t_Line::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Line), "class_", make_descriptor(Line::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Line), "wrapfn_", make_descriptor(t_Line::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Line), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Line_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Line::initializeClass, 1)))
              return NULL;
            return t_Line::wrap_Object(Line(((t_Line *) arg)->object.this$));
          }
          static PyObject *t_Line_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Line::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Line_init_(t_Line *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                jdouble a2;
                Line object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = Line(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                jdouble a1;
                jdouble a2;
                Line object((jobject) NULL);

                if (!parseArgs(args, "kDD", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = Line(a0, a1, a2));
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

          static PyObject *t_Line_contains(t_Line *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.contains(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "contains", arg);
            return NULL;
          }

          static PyObject *t_Line_copySelf(t_Line *self)
          {
            Line result((jobject) NULL);
            OBJ_CALL(result = self->object.copySelf());
            return t_Line::wrap_Object(result);
          }

          static PyObject *t_Line_distance(t_Line *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.distance(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distance", arg);
            return NULL;
          }

          static PyObject *t_Line_emptyHyperplane(t_Line *self)
          {
            ::org::hipparchus::geometry::euclidean::twod::SubLine result((jobject) NULL);
            OBJ_CALL(result = self->object.emptyHyperplane());
            return ::org::hipparchus::geometry::euclidean::twod::t_SubLine::wrap_Object(result);
          }

          static PyObject *t_Line_getAngle(t_Line *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAngle());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Line_getOffset(t_Line *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                Line a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", Line::initializeClass, &a0))
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

          static PyObject *t_Line_getOriginOffset(t_Line *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getOriginOffset());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Line_getPointAt(t_Line *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::oned::Vector1D a0((jobject) NULL);
            jdouble a1;
            ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::geometry::euclidean::oned::Vector1D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getPointAt(a0, a1));
              return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getPointAt", args);
            return NULL;
          }

          static PyObject *t_Line_getReverse(t_Line *self)
          {
            Line result((jobject) NULL);
            OBJ_CALL(result = self->object.getReverse());
            return t_Line::wrap_Object(result);
          }

          static PyObject *t_Line_getTolerance(t_Line *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTolerance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Line_getTransform(PyTypeObject *type, PyObject *args)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            ::org::hipparchus::geometry::partitioning::Transform result((jobject) NULL);

            if (!parseArgs(args, "DDDDDD", &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Line::getTransform(a0, a1, a2, a3, a4, a5));
              return ::org::hipparchus::geometry::partitioning::t_Transform::wrap_Object(result, ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D), ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D));
            }

            PyErr_SetArgsError(type, "getTransform", args);
            return NULL;
          }

          static PyObject *t_Line_intersection(t_Line *self, PyObject *arg)
          {
            Line a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

            if (!parseArg(arg, "k", Line::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.intersection(a0));
              return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "intersection", arg);
            return NULL;
          }

          static PyObject *t_Line_isParallelTo(t_Line *self, PyObject *arg)
          {
            Line a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", Line::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.isParallelTo(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "isParallelTo", arg);
            return NULL;
          }

          static PyObject *t_Line_project(t_Line *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::Point result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.project(a0));
              return ::org::hipparchus::geometry::t_Point::wrap_Object(result, ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D));
            }

            PyErr_SetArgsError((PyObject *) self, "project", arg);
            return NULL;
          }

          static PyObject *t_Line_reset(t_Line *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(self->object.reset(a0, a1));
                  Py_RETURN_NONE;
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                jdouble a1;

                if (!parseArgs(args, "kD", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(self->object.reset(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "reset", args);
            return NULL;
          }

          static PyObject *t_Line_revertSelf(t_Line *self)
          {
            OBJ_CALL(self->object.revertSelf());
            Py_RETURN_NONE;
          }

          static PyObject *t_Line_sameOrientationAs(t_Line *self, PyObject *arg)
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

          static PyObject *t_Line_setAngle(t_Line *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setAngle(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAngle", arg);
            return NULL;
          }

          static PyObject *t_Line_setOriginOffset(t_Line *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setOriginOffset(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOriginOffset", arg);
            return NULL;
          }

          static PyObject *t_Line_toSpace(t_Line *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.toSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.toSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "toSpace", args);
            return NULL;
          }

          static PyObject *t_Line_toSubSpace(t_Line *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::oned::Vector1D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.toSubSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::oned::t_Vector1D::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::oned::Vector1D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.toSubSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::oned::t_Vector1D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "toSubSpace", args);
            return NULL;
          }

          static PyObject *t_Line_translateToPoint(t_Line *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
            {
              OBJ_CALL(self->object.translateToPoint(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "translateToPoint", arg);
            return NULL;
          }

          static PyObject *t_Line_wholeHyperplane(t_Line *self)
          {
            ::org::hipparchus::geometry::euclidean::twod::SubLine result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeHyperplane());
            return ::org::hipparchus::geometry::euclidean::twod::t_SubLine::wrap_Object(result);
          }

          static PyObject *t_Line_wholeSpace(t_Line *self)
          {
            ::org::hipparchus::geometry::euclidean::twod::PolygonsSet result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeSpace());
            return ::org::hipparchus::geometry::euclidean::twod::t_PolygonsSet::wrap_Object(result);
          }

          static PyObject *t_Line_get__angle(t_Line *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAngle());
            return PyFloat_FromDouble((double) value);
          }
          static int t_Line_set__angle(t_Line *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setAngle(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "angle", arg);
            return -1;
          }

          static PyObject *t_Line_get__originOffset(t_Line *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getOriginOffset());
            return PyFloat_FromDouble((double) value);
          }
          static int t_Line_set__originOffset(t_Line *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setOriginOffset(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "originOffset", arg);
            return -1;
          }

          static PyObject *t_Line_get__reverse(t_Line *self, void *data)
          {
            Line value((jobject) NULL);
            OBJ_CALL(value = self->object.getReverse());
            return t_Line::wrap_Object(value);
          }

          static PyObject *t_Line_get__tolerance(t_Line *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTolerance());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonTimeVectorFunction.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeVectorFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
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
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_value_9b63d19c31941c0f] = env->getMethodID(cls, "value", "(Lorg/orekit/time/AbsoluteDate;)[D");
          mids$[mid_value_977531d905f4ab3f] = env->getMethodID(cls, "value", "(Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTimeVectorFunction::PythonTimeVectorFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonTimeVectorFunction::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonTimeVectorFunction::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonTimeVectorFunction::pythonExtension(jlong a0) const
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeVectorFunction::mids$[PythonTimeVectorFunction::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTimeVectorFunction::mids$[PythonTimeVectorFunction::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonTimeVectorFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeVectorFunction::mids$[PythonTimeVectorFunction::mid_pythonExtension_42c72b98e3c2e08a]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeVectorFunction::mids$[PythonTimeVectorFunction::mid_pythonExtension_42c72b98e3c2e08a]);
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
#include "org/hipparchus/distribution/discrete/EnumeratedIntegerDistribution.h"
#include "java/util/List.h"
#include "java/lang/Integer.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Double.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/Pair.h"
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
            mids$[mid_init$_d43202153dd284f7] = env->getMethodID(cls, "<init>", "([I)V");
            mids$[mid_init$_ed2d4c3b1a8f42a9] = env->getMethodID(cls, "<init>", "([I[D)V");
            mids$[mid_cumulativeProbability_ce4c02d583456bc9] = env->getMethodID(cls, "cumulativeProbability", "(I)D");
            mids$[mid_getNumericalMean_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getPmf_d751c1a57012b438] = env->getMethodID(cls, "getPmf", "()Ljava/util/List;");
            mids$[mid_getSupportLowerBound_d6ab429752e7c267] = env->getMethodID(cls, "getSupportLowerBound", "()I");
            mids$[mid_getSupportUpperBound_d6ab429752e7c267] = env->getMethodID(cls, "getSupportUpperBound", "()I");
            mids$[mid_isSupportConnected_eee3de00fe971136] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_probability_ce4c02d583456bc9] = env->getMethodID(cls, "probability", "(I)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EnumeratedIntegerDistribution::EnumeratedIntegerDistribution(const JArray< jint > & a0) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_d43202153dd284f7, a0.this$)) {}

        EnumeratedIntegerDistribution::EnumeratedIntegerDistribution(const JArray< jint > & a0, const JArray< jdouble > & a1) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_ed2d4c3b1a8f42a9, a0.this$, a1.this$)) {}

        jdouble EnumeratedIntegerDistribution::cumulativeProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_ce4c02d583456bc9], a0);
        }

        jdouble EnumeratedIntegerDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_9981f74b2d109da6]);
        }

        jdouble EnumeratedIntegerDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_9981f74b2d109da6]);
        }

        ::java::util::List EnumeratedIntegerDistribution::getPmf() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getPmf_d751c1a57012b438]));
        }

        jint EnumeratedIntegerDistribution::getSupportLowerBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportLowerBound_d6ab429752e7c267]);
        }

        jint EnumeratedIntegerDistribution::getSupportUpperBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportUpperBound_d6ab429752e7c267]);
        }

        jboolean EnumeratedIntegerDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_eee3de00fe971136]);
        }

        jdouble EnumeratedIntegerDistribution::probability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_ce4c02d583456bc9], a0);
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
#include "org/orekit/utils/units/UnitsConverter.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/units/UnitsConverter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {
      namespace units {

        ::java::lang::Class *UnitsConverter::class$ = NULL;
        jmethodID *UnitsConverter::mids$ = NULL;
        bool UnitsConverter::live$ = false;
        UnitsConverter *UnitsConverter::ARC_SECONDS_TO_RADIANS = NULL;
        UnitsConverter *UnitsConverter::DAYS_TO_SECONDS = NULL;
        UnitsConverter *UnitsConverter::IDENTITY = NULL;
        UnitsConverter *UnitsConverter::KILOMETRES_2_TO_METRES_2 = NULL;
        UnitsConverter *UnitsConverter::KILOMETRES_TO_METRES = NULL;
        UnitsConverter *UnitsConverter::KM3_P_S2_TO_M3_P_S2 = NULL;
        UnitsConverter *UnitsConverter::MILLI_ARC_SECONDS_TO_RADIANS = NULL;
        UnitsConverter *UnitsConverter::MILLI_SECONDS_TO_SECONDS = NULL;
        UnitsConverter *UnitsConverter::NANO_TESLAS_TO_TESLAS = NULL;
        UnitsConverter *UnitsConverter::PERCENTS_TO_UNIT = NULL;

        jclass UnitsConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/utils/units/UnitsConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_978cb4fc5e2f4844] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/units/Unit;Lorg/orekit/utils/units/Unit;)V");
            mids$[mid_convert_bf28ed64d6e8576b] = env->getMethodID(cls, "convert", "(D)D");
            mids$[mid_getFrom_b1bb36679ea369c9] = env->getMethodID(cls, "getFrom", "()Lorg/orekit/utils/units/Unit;");
            mids$[mid_getTo_b1bb36679ea369c9] = env->getMethodID(cls, "getTo", "()Lorg/orekit/utils/units/Unit;");
            mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ARC_SECONDS_TO_RADIANS = new UnitsConverter(env->getStaticObjectField(cls, "ARC_SECONDS_TO_RADIANS", "Lorg/orekit/utils/units/UnitsConverter;"));
            DAYS_TO_SECONDS = new UnitsConverter(env->getStaticObjectField(cls, "DAYS_TO_SECONDS", "Lorg/orekit/utils/units/UnitsConverter;"));
            IDENTITY = new UnitsConverter(env->getStaticObjectField(cls, "IDENTITY", "Lorg/orekit/utils/units/UnitsConverter;"));
            KILOMETRES_2_TO_METRES_2 = new UnitsConverter(env->getStaticObjectField(cls, "KILOMETRES_2_TO_METRES_2", "Lorg/orekit/utils/units/UnitsConverter;"));
            KILOMETRES_TO_METRES = new UnitsConverter(env->getStaticObjectField(cls, "KILOMETRES_TO_METRES", "Lorg/orekit/utils/units/UnitsConverter;"));
            KM3_P_S2_TO_M3_P_S2 = new UnitsConverter(env->getStaticObjectField(cls, "KM3_P_S2_TO_M3_P_S2", "Lorg/orekit/utils/units/UnitsConverter;"));
            MILLI_ARC_SECONDS_TO_RADIANS = new UnitsConverter(env->getStaticObjectField(cls, "MILLI_ARC_SECONDS_TO_RADIANS", "Lorg/orekit/utils/units/UnitsConverter;"));
            MILLI_SECONDS_TO_SECONDS = new UnitsConverter(env->getStaticObjectField(cls, "MILLI_SECONDS_TO_SECONDS", "Lorg/orekit/utils/units/UnitsConverter;"));
            NANO_TESLAS_TO_TESLAS = new UnitsConverter(env->getStaticObjectField(cls, "NANO_TESLAS_TO_TESLAS", "Lorg/orekit/utils/units/UnitsConverter;"));
            PERCENTS_TO_UNIT = new UnitsConverter(env->getStaticObjectField(cls, "PERCENTS_TO_UNIT", "Lorg/orekit/utils/units/UnitsConverter;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnitsConverter::UnitsConverter(const ::org::orekit::utils::units::Unit & a0, const ::org::orekit::utils::units::Unit & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_978cb4fc5e2f4844, a0.this$, a1.this$)) {}

        jdouble UnitsConverter::convert(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_convert_bf28ed64d6e8576b], a0);
        }

        ::org::orekit::utils::units::Unit UnitsConverter::getFrom() const
        {
          return ::org::orekit::utils::units::Unit(env->callObjectMethod(this$, mids$[mid_getFrom_b1bb36679ea369c9]));
        }

        ::org::orekit::utils::units::Unit UnitsConverter::getTo() const
        {
          return ::org::orekit::utils::units::Unit(env->callObjectMethod(this$, mids$[mid_getTo_b1bb36679ea369c9]));
        }

        ::java::lang::String UnitsConverter::toString() const
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
  namespace orekit {
    namespace utils {
      namespace units {
        static PyObject *t_UnitsConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnitsConverter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_UnitsConverter_init_(t_UnitsConverter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UnitsConverter_convert(t_UnitsConverter *self, PyObject *arg);
        static PyObject *t_UnitsConverter_getFrom(t_UnitsConverter *self);
        static PyObject *t_UnitsConverter_getTo(t_UnitsConverter *self);
        static PyObject *t_UnitsConverter_toString(t_UnitsConverter *self, PyObject *args);
        static PyObject *t_UnitsConverter_get__from(t_UnitsConverter *self, void *data);
        static PyObject *t_UnitsConverter_get__to(t_UnitsConverter *self, void *data);
        static PyGetSetDef t_UnitsConverter__fields_[] = {
          DECLARE_GET_FIELD(t_UnitsConverter, from),
          DECLARE_GET_FIELD(t_UnitsConverter, to),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnitsConverter__methods_[] = {
          DECLARE_METHOD(t_UnitsConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnitsConverter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnitsConverter, convert, METH_O),
          DECLARE_METHOD(t_UnitsConverter, getFrom, METH_NOARGS),
          DECLARE_METHOD(t_UnitsConverter, getTo, METH_NOARGS),
          DECLARE_METHOD(t_UnitsConverter, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnitsConverter)[] = {
          { Py_tp_methods, t_UnitsConverter__methods_ },
          { Py_tp_init, (void *) t_UnitsConverter_init_ },
          { Py_tp_getset, t_UnitsConverter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnitsConverter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnitsConverter, t_UnitsConverter, UnitsConverter);

        void t_UnitsConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(UnitsConverter), &PY_TYPE_DEF(UnitsConverter), module, "UnitsConverter", 0);
        }

        void t_UnitsConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "class_", make_descriptor(UnitsConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "wrapfn_", make_descriptor(t_UnitsConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "boxfn_", make_descriptor(boxObject));
          env->getClass(UnitsConverter::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "ARC_SECONDS_TO_RADIANS", make_descriptor(t_UnitsConverter::wrap_Object(*UnitsConverter::ARC_SECONDS_TO_RADIANS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "DAYS_TO_SECONDS", make_descriptor(t_UnitsConverter::wrap_Object(*UnitsConverter::DAYS_TO_SECONDS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "IDENTITY", make_descriptor(t_UnitsConverter::wrap_Object(*UnitsConverter::IDENTITY)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "KILOMETRES_2_TO_METRES_2", make_descriptor(t_UnitsConverter::wrap_Object(*UnitsConverter::KILOMETRES_2_TO_METRES_2)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "KILOMETRES_TO_METRES", make_descriptor(t_UnitsConverter::wrap_Object(*UnitsConverter::KILOMETRES_TO_METRES)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "KM3_P_S2_TO_M3_P_S2", make_descriptor(t_UnitsConverter::wrap_Object(*UnitsConverter::KM3_P_S2_TO_M3_P_S2)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "MILLI_ARC_SECONDS_TO_RADIANS", make_descriptor(t_UnitsConverter::wrap_Object(*UnitsConverter::MILLI_ARC_SECONDS_TO_RADIANS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "MILLI_SECONDS_TO_SECONDS", make_descriptor(t_UnitsConverter::wrap_Object(*UnitsConverter::MILLI_SECONDS_TO_SECONDS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "NANO_TESLAS_TO_TESLAS", make_descriptor(t_UnitsConverter::wrap_Object(*UnitsConverter::NANO_TESLAS_TO_TESLAS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsConverter), "PERCENTS_TO_UNIT", make_descriptor(t_UnitsConverter::wrap_Object(*UnitsConverter::PERCENTS_TO_UNIT)));
        }

        static PyObject *t_UnitsConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnitsConverter::initializeClass, 1)))
            return NULL;
          return t_UnitsConverter::wrap_Object(UnitsConverter(((t_UnitsConverter *) arg)->object.this$));
        }
        static PyObject *t_UnitsConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnitsConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_UnitsConverter_init_(t_UnitsConverter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::utils::units::Unit a0((jobject) NULL);
          ::org::orekit::utils::units::Unit a1((jobject) NULL);
          UnitsConverter object((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::utils::units::Unit::initializeClass, ::org::orekit::utils::units::Unit::initializeClass, &a0, &a1))
          {
            INT_CALL(object = UnitsConverter(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_UnitsConverter_convert(t_UnitsConverter *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.convert(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "convert", arg);
          return NULL;
        }

        static PyObject *t_UnitsConverter_getFrom(t_UnitsConverter *self)
        {
          ::org::orekit::utils::units::Unit result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrom());
          return ::org::orekit::utils::units::t_Unit::wrap_Object(result);
        }

        static PyObject *t_UnitsConverter_getTo(t_UnitsConverter *self)
        {
          ::org::orekit::utils::units::Unit result((jobject) NULL);
          OBJ_CALL(result = self->object.getTo());
          return ::org::orekit::utils::units::t_Unit::wrap_Object(result);
        }

        static PyObject *t_UnitsConverter_toString(t_UnitsConverter *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(UnitsConverter), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_UnitsConverter_get__from(t_UnitsConverter *self, void *data)
        {
          ::org::orekit::utils::units::Unit value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrom());
          return ::org::orekit::utils::units::t_Unit::wrap_Object(value);
        }

        static PyObject *t_UnitsConverter_get__to(t_UnitsConverter *self, void *data)
        {
          ::org::orekit::utils::units::Unit value((jobject) NULL);
          OBJ_CALL(value = self->object.getTo());
          return ::org::orekit::utils::units::t_Unit::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/GnssData.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *GnssData::class$ = NULL;
          jmethodID *GnssData::mids$ = NULL;
          bool GnssData::live$ = false;

          jclass GnssData::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/GnssData");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_20d21be51afdcd58] = env->getMethodID(cls, "<init>", "([BI)V");
              mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GnssData::GnssData(const JArray< jbyte > & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_20d21be51afdcd58, a0.this$, a1)) {}

          ::java::lang::String GnssData::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
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
          static PyObject *t_GnssData_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GnssData_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GnssData_init_(t_GnssData *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GnssData_toString(t_GnssData *self, PyObject *args);

          static PyMethodDef t_GnssData__methods_[] = {
            DECLARE_METHOD(t_GnssData, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GnssData, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GnssData, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GnssData)[] = {
            { Py_tp_methods, t_GnssData__methods_ },
            { Py_tp_init, (void *) t_GnssData_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GnssData)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GnssData, t_GnssData, GnssData);

          void t_GnssData::install(PyObject *module)
          {
            installType(&PY_TYPE(GnssData), &PY_TYPE_DEF(GnssData), module, "GnssData", 0);
          }

          void t_GnssData::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GnssData), "class_", make_descriptor(GnssData::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GnssData), "wrapfn_", make_descriptor(t_GnssData::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GnssData), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GnssData_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GnssData::initializeClass, 1)))
              return NULL;
            return t_GnssData::wrap_Object(GnssData(((t_GnssData *) arg)->object.this$));
          }
          static PyObject *t_GnssData_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GnssData::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GnssData_init_(t_GnssData *self, PyObject *args, PyObject *kwds)
          {
            JArray< jbyte > a0((jobject) NULL);
            jint a1;
            GnssData object((jobject) NULL);

            if (!parseArgs(args, "[BI", &a0, &a1))
            {
              INT_CALL(object = GnssData(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_GnssData_toString(t_GnssData *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(GnssData), (PyObject *) self, "toString", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/FieldODEIntegrator.h"
#include "org/hipparchus/ode/events/FieldODEEventDetector.h"
#include "org/hipparchus/ode/events/FieldODEStepEndHandler.h"
#include "org/hipparchus/ode/sampling/FieldODEStepHandler.h"
#include "java/util/List.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/FieldExpandableODE.h"
#include "org/hipparchus/ode/FieldODEState.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *FieldODEIntegrator::class$ = NULL;
      jmethodID *FieldODEIntegrator::mids$ = NULL;
      bool FieldODEIntegrator::live$ = false;

      jclass FieldODEIntegrator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/FieldODEIntegrator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addEventDetector_1ffd39265a0e340d] = env->getMethodID(cls, "addEventDetector", "(Lorg/hipparchus/ode/events/FieldODEEventDetector;)V");
          mids$[mid_addStepEndHandler_0490fb61ed7db186] = env->getMethodID(cls, "addStepEndHandler", "(Lorg/hipparchus/ode/events/FieldODEStepEndHandler;)V");
          mids$[mid_addStepHandler_d8a2a9c1603c5377] = env->getMethodID(cls, "addStepHandler", "(Lorg/hipparchus/ode/sampling/FieldODEStepHandler;)V");
          mids$[mid_clearEventDetectors_ff7cb6c242604316] = env->getMethodID(cls, "clearEventDetectors", "()V");
          mids$[mid_clearStepEndHandlers_ff7cb6c242604316] = env->getMethodID(cls, "clearStepEndHandlers", "()V");
          mids$[mid_clearStepHandlers_ff7cb6c242604316] = env->getMethodID(cls, "clearStepHandlers", "()V");
          mids$[mid_getCurrentSignedStepsize_08d37e3f77b7239d] = env->getMethodID(cls, "getCurrentSignedStepsize", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEvaluations_d6ab429752e7c267] = env->getMethodID(cls, "getEvaluations", "()I");
          mids$[mid_getEventDetectors_d751c1a57012b438] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/List;");
          mids$[mid_getMaxEvaluations_d6ab429752e7c267] = env->getMethodID(cls, "getMaxEvaluations", "()I");
          mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getStepEndHandlers_d751c1a57012b438] = env->getMethodID(cls, "getStepEndHandlers", "()Ljava/util/List;");
          mids$[mid_getStepHandlers_d751c1a57012b438] = env->getMethodID(cls, "getStepHandlers", "()Ljava/util/List;");
          mids$[mid_getStepStart_15f5056f2d3c7d41] = env->getMethodID(cls, "getStepStart", "()Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
          mids$[mid_integrate_7e5884a5ebca9afb] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/FieldExpandableODE;Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
          mids$[mid_setMaxEvaluations_8fd427ab23829bf5] = env->getMethodID(cls, "setMaxEvaluations", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void FieldODEIntegrator::addEventDetector(const ::org::hipparchus::ode::events::FieldODEEventDetector & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addEventDetector_1ffd39265a0e340d], a0.this$);
      }

      void FieldODEIntegrator::addStepEndHandler(const ::org::hipparchus::ode::events::FieldODEStepEndHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addStepEndHandler_0490fb61ed7db186], a0.this$);
      }

      void FieldODEIntegrator::addStepHandler(const ::org::hipparchus::ode::sampling::FieldODEStepHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addStepHandler_d8a2a9c1603c5377], a0.this$);
      }

      void FieldODEIntegrator::clearEventDetectors() const
      {
        env->callVoidMethod(this$, mids$[mid_clearEventDetectors_ff7cb6c242604316]);
      }

      void FieldODEIntegrator::clearStepEndHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepEndHandlers_ff7cb6c242604316]);
      }

      void FieldODEIntegrator::clearStepHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepHandlers_ff7cb6c242604316]);
      }

      ::org::hipparchus::CalculusFieldElement FieldODEIntegrator::getCurrentSignedStepsize() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCurrentSignedStepsize_08d37e3f77b7239d]));
      }

      jint FieldODEIntegrator::getEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getEvaluations_d6ab429752e7c267]);
      }

      ::java::util::List FieldODEIntegrator::getEventDetectors() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEventDetectors_d751c1a57012b438]));
      }

      jint FieldODEIntegrator::getMaxEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxEvaluations_d6ab429752e7c267]);
      }

      ::java::lang::String FieldODEIntegrator::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
      }

      ::java::util::List FieldODEIntegrator::getStepEndHandlers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStepEndHandlers_d751c1a57012b438]));
      }

      ::java::util::List FieldODEIntegrator::getStepHandlers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStepHandlers_d751c1a57012b438]));
      }

      ::org::hipparchus::ode::FieldODEStateAndDerivative FieldODEIntegrator::getStepStart() const
      {
        return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getStepStart_15f5056f2d3c7d41]));
      }

      ::org::hipparchus::ode::FieldODEStateAndDerivative FieldODEIntegrator::integrate(const ::org::hipparchus::ode::FieldExpandableODE & a0, const ::org::hipparchus::ode::FieldODEState & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
      {
        return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_7e5884a5ebca9afb], a0.this$, a1.this$, a2.this$));
      }

      void FieldODEIntegrator::setMaxEvaluations(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMaxEvaluations_8fd427ab23829bf5], a0);
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
      static PyObject *t_FieldODEIntegrator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldODEIntegrator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldODEIntegrator_of_(t_FieldODEIntegrator *self, PyObject *args);
      static PyObject *t_FieldODEIntegrator_addEventDetector(t_FieldODEIntegrator *self, PyObject *arg);
      static PyObject *t_FieldODEIntegrator_addStepEndHandler(t_FieldODEIntegrator *self, PyObject *arg);
      static PyObject *t_FieldODEIntegrator_addStepHandler(t_FieldODEIntegrator *self, PyObject *arg);
      static PyObject *t_FieldODEIntegrator_clearEventDetectors(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_clearStepEndHandlers(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_clearStepHandlers(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_getCurrentSignedStepsize(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_getEvaluations(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_getEventDetectors(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_getMaxEvaluations(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_getName(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_getStepEndHandlers(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_getStepHandlers(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_getStepStart(t_FieldODEIntegrator *self);
      static PyObject *t_FieldODEIntegrator_integrate(t_FieldODEIntegrator *self, PyObject *args);
      static PyObject *t_FieldODEIntegrator_setMaxEvaluations(t_FieldODEIntegrator *self, PyObject *arg);
      static PyObject *t_FieldODEIntegrator_get__currentSignedStepsize(t_FieldODEIntegrator *self, void *data);
      static PyObject *t_FieldODEIntegrator_get__evaluations(t_FieldODEIntegrator *self, void *data);
      static PyObject *t_FieldODEIntegrator_get__eventDetectors(t_FieldODEIntegrator *self, void *data);
      static PyObject *t_FieldODEIntegrator_get__maxEvaluations(t_FieldODEIntegrator *self, void *data);
      static int t_FieldODEIntegrator_set__maxEvaluations(t_FieldODEIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_FieldODEIntegrator_get__name(t_FieldODEIntegrator *self, void *data);
      static PyObject *t_FieldODEIntegrator_get__stepEndHandlers(t_FieldODEIntegrator *self, void *data);
      static PyObject *t_FieldODEIntegrator_get__stepHandlers(t_FieldODEIntegrator *self, void *data);
      static PyObject *t_FieldODEIntegrator_get__stepStart(t_FieldODEIntegrator *self, void *data);
      static PyObject *t_FieldODEIntegrator_get__parameters_(t_FieldODEIntegrator *self, void *data);
      static PyGetSetDef t_FieldODEIntegrator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldODEIntegrator, currentSignedStepsize),
        DECLARE_GET_FIELD(t_FieldODEIntegrator, evaluations),
        DECLARE_GET_FIELD(t_FieldODEIntegrator, eventDetectors),
        DECLARE_GETSET_FIELD(t_FieldODEIntegrator, maxEvaluations),
        DECLARE_GET_FIELD(t_FieldODEIntegrator, name),
        DECLARE_GET_FIELD(t_FieldODEIntegrator, stepEndHandlers),
        DECLARE_GET_FIELD(t_FieldODEIntegrator, stepHandlers),
        DECLARE_GET_FIELD(t_FieldODEIntegrator, stepStart),
        DECLARE_GET_FIELD(t_FieldODEIntegrator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldODEIntegrator__methods_[] = {
        DECLARE_METHOD(t_FieldODEIntegrator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldODEIntegrator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldODEIntegrator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, addEventDetector, METH_O),
        DECLARE_METHOD(t_FieldODEIntegrator, addStepEndHandler, METH_O),
        DECLARE_METHOD(t_FieldODEIntegrator, addStepHandler, METH_O),
        DECLARE_METHOD(t_FieldODEIntegrator, clearEventDetectors, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, clearStepEndHandlers, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, clearStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, getCurrentSignedStepsize, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, getEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, getEventDetectors, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, getMaxEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, getName, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, getStepEndHandlers, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, getStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, getStepStart, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, integrate, METH_VARARGS),
        DECLARE_METHOD(t_FieldODEIntegrator, setMaxEvaluations, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldODEIntegrator)[] = {
        { Py_tp_methods, t_FieldODEIntegrator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldODEIntegrator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldODEIntegrator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldODEIntegrator, t_FieldODEIntegrator, FieldODEIntegrator);
      PyObject *t_FieldODEIntegrator::wrap_Object(const FieldODEIntegrator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldODEIntegrator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldODEIntegrator *self = (t_FieldODEIntegrator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldODEIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldODEIntegrator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldODEIntegrator *self = (t_FieldODEIntegrator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldODEIntegrator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldODEIntegrator), &PY_TYPE_DEF(FieldODEIntegrator), module, "FieldODEIntegrator", 0);
      }

      void t_FieldODEIntegrator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEIntegrator), "class_", make_descriptor(FieldODEIntegrator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEIntegrator), "wrapfn_", make_descriptor(t_FieldODEIntegrator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEIntegrator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldODEIntegrator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldODEIntegrator::initializeClass, 1)))
          return NULL;
        return t_FieldODEIntegrator::wrap_Object(FieldODEIntegrator(((t_FieldODEIntegrator *) arg)->object.this$));
      }
      static PyObject *t_FieldODEIntegrator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldODEIntegrator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldODEIntegrator_of_(t_FieldODEIntegrator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldODEIntegrator_addEventDetector(t_FieldODEIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::events::FieldODEEventDetector a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::events::FieldODEEventDetector::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_FieldODEEventDetector::parameters_))
        {
          OBJ_CALL(self->object.addEventDetector(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addEventDetector", arg);
        return NULL;
      }

      static PyObject *t_FieldODEIntegrator_addStepEndHandler(t_FieldODEIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::events::FieldODEStepEndHandler a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::events::FieldODEStepEndHandler::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_FieldODEStepEndHandler::parameters_))
        {
          OBJ_CALL(self->object.addStepEndHandler(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addStepEndHandler", arg);
        return NULL;
      }

      static PyObject *t_FieldODEIntegrator_addStepHandler(t_FieldODEIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::sampling::FieldODEStepHandler a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::sampling::FieldODEStepHandler::initializeClass, &a0, &p0, ::org::hipparchus::ode::sampling::t_FieldODEStepHandler::parameters_))
        {
          OBJ_CALL(self->object.addStepHandler(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addStepHandler", arg);
        return NULL;
      }

      static PyObject *t_FieldODEIntegrator_clearEventDetectors(t_FieldODEIntegrator *self)
      {
        OBJ_CALL(self->object.clearEventDetectors());
        Py_RETURN_NONE;
      }

      static PyObject *t_FieldODEIntegrator_clearStepEndHandlers(t_FieldODEIntegrator *self)
      {
        OBJ_CALL(self->object.clearStepEndHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_FieldODEIntegrator_clearStepHandlers(t_FieldODEIntegrator *self)
      {
        OBJ_CALL(self->object.clearStepHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_FieldODEIntegrator_getCurrentSignedStepsize(t_FieldODEIntegrator *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getCurrentSignedStepsize());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldODEIntegrator_getEvaluations(t_FieldODEIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldODEIntegrator_getEventDetectors(t_FieldODEIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getEventDetectors());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_FieldODEIntegrator_getMaxEvaluations(t_FieldODEIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldODEIntegrator_getName(t_FieldODEIntegrator *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_FieldODEIntegrator_getStepEndHandlers(t_FieldODEIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepEndHandlers());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_FieldODEIntegrator_getStepHandlers(t_FieldODEIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepHandlers());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_FieldODEIntegrator_getStepStart(t_FieldODEIntegrator *self)
      {
        ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepStart());
        return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldODEIntegrator_integrate(t_FieldODEIntegrator *self, PyObject *args)
      {
        ::org::hipparchus::ode::FieldExpandableODE a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::ode::FieldODEState a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::ode::FieldExpandableODE::initializeClass, ::org::hipparchus::ode::FieldODEState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldExpandableODE::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEState::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.integrate(a0, a1, a2));
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "integrate", args);
        return NULL;
      }

      static PyObject *t_FieldODEIntegrator_setMaxEvaluations(t_FieldODEIntegrator *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setMaxEvaluations(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setMaxEvaluations", arg);
        return NULL;
      }
      static PyObject *t_FieldODEIntegrator_get__parameters_(t_FieldODEIntegrator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldODEIntegrator_get__currentSignedStepsize(t_FieldODEIntegrator *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getCurrentSignedStepsize());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldODEIntegrator_get__evaluations(t_FieldODEIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getEvaluations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_FieldODEIntegrator_get__eventDetectors(t_FieldODEIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getEventDetectors());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_FieldODEIntegrator_get__maxEvaluations(t_FieldODEIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) value);
      }
      static int t_FieldODEIntegrator_set__maxEvaluations(t_FieldODEIntegrator *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setMaxEvaluations(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "maxEvaluations", arg);
        return -1;
      }

      static PyObject *t_FieldODEIntegrator_get__name(t_FieldODEIntegrator *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_FieldODEIntegrator_get__stepEndHandlers(t_FieldODEIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepEndHandlers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_FieldODEIntegrator_get__stepHandlers(t_FieldODEIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepHandlers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_FieldODEIntegrator_get__stepStart(t_FieldODEIntegrator *self, void *data)
      {
        ::org::hipparchus::ode::FieldODEStateAndDerivative value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepStart());
        return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrame1.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame1::class$ = NULL;
          jmethodID *SubFrame1::mids$ = NULL;
          bool SubFrame1::live$ = false;

          jclass SubFrame1::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame1");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getAF0_9981f74b2d109da6] = env->getMethodID(cls, "getAF0", "()D");
              mids$[mid_getAF1_9981f74b2d109da6] = env->getMethodID(cls, "getAF1", "()D");
              mids$[mid_getAF2_9981f74b2d109da6] = env->getMethodID(cls, "getAF2", "()D");
              mids$[mid_getCaOrPFlag_d6ab429752e7c267] = env->getMethodID(cls, "getCaOrPFlag", "()I");
              mids$[mid_getIODC_d6ab429752e7c267] = env->getMethodID(cls, "getIODC", "()I");
              mids$[mid_getL2PDataFlag_d6ab429752e7c267] = env->getMethodID(cls, "getL2PDataFlag", "()I");
              mids$[mid_getReserved04_d6ab429752e7c267] = env->getMethodID(cls, "getReserved04", "()I");
              mids$[mid_getReserved05_d6ab429752e7c267] = env->getMethodID(cls, "getReserved05", "()I");
              mids$[mid_getReserved06_d6ab429752e7c267] = env->getMethodID(cls, "getReserved06", "()I");
              mids$[mid_getReserved07_d6ab429752e7c267] = env->getMethodID(cls, "getReserved07", "()I");
              mids$[mid_getSvHealth_d6ab429752e7c267] = env->getMethodID(cls, "getSvHealth", "()I");
              mids$[mid_getTGD_d6ab429752e7c267] = env->getMethodID(cls, "getTGD", "()I");
              mids$[mid_getTOC_d6ab429752e7c267] = env->getMethodID(cls, "getTOC", "()I");
              mids$[mid_getUraIndex_d6ab429752e7c267] = env->getMethodID(cls, "getUraIndex", "()I");
              mids$[mid_getWeekNumber_d6ab429752e7c267] = env->getMethodID(cls, "getWeekNumber", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble SubFrame1::getAF0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAF0_9981f74b2d109da6]);
          }

          jdouble SubFrame1::getAF1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAF1_9981f74b2d109da6]);
          }

          jdouble SubFrame1::getAF2() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAF2_9981f74b2d109da6]);
          }

          jint SubFrame1::getCaOrPFlag() const
          {
            return env->callIntMethod(this$, mids$[mid_getCaOrPFlag_d6ab429752e7c267]);
          }

          jint SubFrame1::getIODC() const
          {
            return env->callIntMethod(this$, mids$[mid_getIODC_d6ab429752e7c267]);
          }

          jint SubFrame1::getL2PDataFlag() const
          {
            return env->callIntMethod(this$, mids$[mid_getL2PDataFlag_d6ab429752e7c267]);
          }

          jint SubFrame1::getReserved04() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved04_d6ab429752e7c267]);
          }

          jint SubFrame1::getReserved05() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved05_d6ab429752e7c267]);
          }

          jint SubFrame1::getReserved06() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved06_d6ab429752e7c267]);
          }

          jint SubFrame1::getReserved07() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved07_d6ab429752e7c267]);
          }

          jint SubFrame1::getSvHealth() const
          {
            return env->callIntMethod(this$, mids$[mid_getSvHealth_d6ab429752e7c267]);
          }

          jint SubFrame1::getTGD() const
          {
            return env->callIntMethod(this$, mids$[mid_getTGD_d6ab429752e7c267]);
          }

          jint SubFrame1::getTOC() const
          {
            return env->callIntMethod(this$, mids$[mid_getTOC_d6ab429752e7c267]);
          }

          jint SubFrame1::getUraIndex() const
          {
            return env->callIntMethod(this$, mids$[mid_getUraIndex_d6ab429752e7c267]);
          }

          jint SubFrame1::getWeekNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getWeekNumber_d6ab429752e7c267]);
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
      namespace rflink {
        namespace gps {
          static PyObject *t_SubFrame1_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame1_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame1_getAF0(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getAF1(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getAF2(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getCaOrPFlag(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getIODC(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getL2PDataFlag(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getReserved04(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getReserved05(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getReserved06(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getReserved07(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getSvHealth(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getTGD(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getTOC(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getUraIndex(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getWeekNumber(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_get__aF0(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__aF1(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__aF2(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__caOrPFlag(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__iODC(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__l2PDataFlag(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__reserved04(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__reserved05(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__reserved06(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__reserved07(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__svHealth(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__tGD(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__tOC(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__uraIndex(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__weekNumber(t_SubFrame1 *self, void *data);
          static PyGetSetDef t_SubFrame1__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame1, aF0),
            DECLARE_GET_FIELD(t_SubFrame1, aF1),
            DECLARE_GET_FIELD(t_SubFrame1, aF2),
            DECLARE_GET_FIELD(t_SubFrame1, caOrPFlag),
            DECLARE_GET_FIELD(t_SubFrame1, iODC),
            DECLARE_GET_FIELD(t_SubFrame1, l2PDataFlag),
            DECLARE_GET_FIELD(t_SubFrame1, reserved04),
            DECLARE_GET_FIELD(t_SubFrame1, reserved05),
            DECLARE_GET_FIELD(t_SubFrame1, reserved06),
            DECLARE_GET_FIELD(t_SubFrame1, reserved07),
            DECLARE_GET_FIELD(t_SubFrame1, svHealth),
            DECLARE_GET_FIELD(t_SubFrame1, tGD),
            DECLARE_GET_FIELD(t_SubFrame1, tOC),
            DECLARE_GET_FIELD(t_SubFrame1, uraIndex),
            DECLARE_GET_FIELD(t_SubFrame1, weekNumber),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame1__methods_[] = {
            DECLARE_METHOD(t_SubFrame1, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame1, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame1, getAF0, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getAF1, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getAF2, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getCaOrPFlag, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getIODC, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getL2PDataFlag, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getReserved04, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getReserved05, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getReserved06, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getReserved07, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getSvHealth, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getTGD, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getTOC, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getUraIndex, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getWeekNumber, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame1)[] = {
            { Py_tp_methods, t_SubFrame1__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame1__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame1)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame),
            NULL
          };

          DEFINE_TYPE(SubFrame1, t_SubFrame1, SubFrame1);

          void t_SubFrame1::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame1), &PY_TYPE_DEF(SubFrame1), module, "SubFrame1", 0);
          }

          void t_SubFrame1::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame1), "class_", make_descriptor(SubFrame1::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame1), "wrapfn_", make_descriptor(t_SubFrame1::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame1), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame1_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame1::initializeClass, 1)))
              return NULL;
            return t_SubFrame1::wrap_Object(SubFrame1(((t_SubFrame1 *) arg)->object.this$));
          }
          static PyObject *t_SubFrame1_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame1::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame1_getAF0(t_SubFrame1 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAF0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame1_getAF1(t_SubFrame1 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAF1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame1_getAF2(t_SubFrame1 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAF2());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame1_getCaOrPFlag(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getCaOrPFlag());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getIODC(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getIODC());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getL2PDataFlag(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getL2PDataFlag());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getReserved04(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved04());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getReserved05(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved05());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getReserved06(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved06());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getReserved07(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved07());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getSvHealth(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getSvHealth());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getTGD(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getTGD());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getTOC(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getTOC());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getUraIndex(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getUraIndex());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getWeekNumber(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getWeekNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_get__aF0(t_SubFrame1 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAF0());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame1_get__aF1(t_SubFrame1 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAF1());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame1_get__aF2(t_SubFrame1 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAF2());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame1_get__caOrPFlag(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getCaOrPFlag());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__iODC(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getIODC());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__l2PDataFlag(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getL2PDataFlag());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__reserved04(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved04());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__reserved05(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved05());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__reserved06(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved06());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__reserved07(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved07());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__svHealth(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getSvHealth());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__tGD(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getTGD());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__tOC(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getTOC());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__uraIndex(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getUraIndex());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__weekNumber(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getWeekNumber());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistory.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeState.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$AttitudeEphemerisSegment.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadata.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeStateHistory::class$ = NULL;
              jmethodID *AttitudeStateHistory::mids$ = NULL;
              bool AttitudeStateHistory::live$ = false;

              jclass AttitudeStateHistory::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistory");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_8edb46527ed0b2b8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadata;Ljava/util/List;)V");
                  mids$[mid_getAngularCoordinates_d751c1a57012b438] = env->getMethodID(cls, "getAngularCoordinates", "()Ljava/util/List;");
                  mids$[mid_getAttitudeProvider_228bb29d53a1472e] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/BoundedAttitudeProvider;");
                  mids$[mid_getAttitudeStates_d751c1a57012b438] = env->getMethodID(cls, "getAttitudeStates", "()Ljava/util/List;");
                  mids$[mid_getAvailableDerivatives_410860c8cd87dc25] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/AngularDerivativesFilter;");
                  mids$[mid_getInterpolationMethod_d2c8eb4129821f0e] = env->getMethodID(cls, "getInterpolationMethod", "()Ljava/lang/String;");
                  mids$[mid_getInterpolationSamples_d6ab429752e7c267] = env->getMethodID(cls, "getInterpolationSamples", "()I");
                  mids$[mid_getMetadata_6c72d39c3faaf030] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadata;");
                  mids$[mid_getReferenceFrame_cb151471db4570f0] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
                  mids$[mid_getStart_80e11148db499dda] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStop_80e11148db499dda] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeStateHistory::AttitudeStateHistory(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata & a0, const ::java::util::List & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8edb46527ed0b2b8, a0.this$, a1.this$)) {}

              ::java::util::List AttitudeStateHistory::getAngularCoordinates() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAngularCoordinates_d751c1a57012b438]));
              }

              ::org::orekit::attitudes::BoundedAttitudeProvider AttitudeStateHistory::getAttitudeProvider() const
              {
                return ::org::orekit::attitudes::BoundedAttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_228bb29d53a1472e]));
              }

              ::java::util::List AttitudeStateHistory::getAttitudeStates() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAttitudeStates_d751c1a57012b438]));
              }

              ::org::orekit::utils::AngularDerivativesFilter AttitudeStateHistory::getAvailableDerivatives() const
              {
                return ::org::orekit::utils::AngularDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_410860c8cd87dc25]));
              }

              ::java::lang::String AttitudeStateHistory::getInterpolationMethod() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInterpolationMethod_d2c8eb4129821f0e]));
              }

              jint AttitudeStateHistory::getInterpolationSamples() const
              {
                return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_d6ab429752e7c267]);
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata AttitudeStateHistory::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_6c72d39c3faaf030]));
              }

              ::org::orekit::frames::Frame AttitudeStateHistory::getReferenceFrame() const
              {
                return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_cb151471db4570f0]));
              }

              ::org::orekit::time::AbsoluteDate AttitudeStateHistory::getStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_80e11148db499dda]));
              }

              ::org::orekit::time::AbsoluteDate AttitudeStateHistory::getStop() const
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
            namespace acm {
              static PyObject *t_AttitudeStateHistory_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeStateHistory_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudeStateHistory_init_(t_AttitudeStateHistory *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudeStateHistory_getAngularCoordinates(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_getAttitudeProvider(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_getAttitudeStates(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_getAvailableDerivatives(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_getInterpolationMethod(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_getInterpolationSamples(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_getMetadata(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_getReferenceFrame(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_getStart(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_getStop(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_get__angularCoordinates(t_AttitudeStateHistory *self, void *data);
              static PyObject *t_AttitudeStateHistory_get__attitudeProvider(t_AttitudeStateHistory *self, void *data);
              static PyObject *t_AttitudeStateHistory_get__attitudeStates(t_AttitudeStateHistory *self, void *data);
              static PyObject *t_AttitudeStateHistory_get__availableDerivatives(t_AttitudeStateHistory *self, void *data);
              static PyObject *t_AttitudeStateHistory_get__interpolationMethod(t_AttitudeStateHistory *self, void *data);
              static PyObject *t_AttitudeStateHistory_get__interpolationSamples(t_AttitudeStateHistory *self, void *data);
              static PyObject *t_AttitudeStateHistory_get__metadata(t_AttitudeStateHistory *self, void *data);
              static PyObject *t_AttitudeStateHistory_get__referenceFrame(t_AttitudeStateHistory *self, void *data);
              static PyObject *t_AttitudeStateHistory_get__start(t_AttitudeStateHistory *self, void *data);
              static PyObject *t_AttitudeStateHistory_get__stop(t_AttitudeStateHistory *self, void *data);
              static PyGetSetDef t_AttitudeStateHistory__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeStateHistory, angularCoordinates),
                DECLARE_GET_FIELD(t_AttitudeStateHistory, attitudeProvider),
                DECLARE_GET_FIELD(t_AttitudeStateHistory, attitudeStates),
                DECLARE_GET_FIELD(t_AttitudeStateHistory, availableDerivatives),
                DECLARE_GET_FIELD(t_AttitudeStateHistory, interpolationMethod),
                DECLARE_GET_FIELD(t_AttitudeStateHistory, interpolationSamples),
                DECLARE_GET_FIELD(t_AttitudeStateHistory, metadata),
                DECLARE_GET_FIELD(t_AttitudeStateHistory, referenceFrame),
                DECLARE_GET_FIELD(t_AttitudeStateHistory, start),
                DECLARE_GET_FIELD(t_AttitudeStateHistory, stop),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeStateHistory__methods_[] = {
                DECLARE_METHOD(t_AttitudeStateHistory, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeStateHistory, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeStateHistory, getAngularCoordinates, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistory, getAttitudeProvider, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistory, getAttitudeStates, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistory, getAvailableDerivatives, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistory, getInterpolationMethod, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistory, getInterpolationSamples, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistory, getMetadata, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistory, getReferenceFrame, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistory, getStart, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistory, getStop, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeStateHistory)[] = {
                { Py_tp_methods, t_AttitudeStateHistory__methods_ },
                { Py_tp_init, (void *) t_AttitudeStateHistory_init_ },
                { Py_tp_getset, t_AttitudeStateHistory__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeStateHistory)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(AttitudeStateHistory, t_AttitudeStateHistory, AttitudeStateHistory);

              void t_AttitudeStateHistory::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeStateHistory), &PY_TYPE_DEF(AttitudeStateHistory), module, "AttitudeStateHistory", 0);
              }

              void t_AttitudeStateHistory::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistory), "class_", make_descriptor(AttitudeStateHistory::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistory), "wrapfn_", make_descriptor(t_AttitudeStateHistory::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistory), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudeStateHistory_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeStateHistory::initializeClass, 1)))
                  return NULL;
                return t_AttitudeStateHistory::wrap_Object(AttitudeStateHistory(((t_AttitudeStateHistory *) arg)->object.this$));
              }
              static PyObject *t_AttitudeStateHistory_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeStateHistory::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudeStateHistory_init_(t_AttitudeStateHistory *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                AttitudeStateHistory object((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = AttitudeStateHistory(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AttitudeStateHistory_getAngularCoordinates(t_AttitudeStateHistory *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getAngularCoordinates());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates));
              }

              static PyObject *t_AttitudeStateHistory_getAttitudeProvider(t_AttitudeStateHistory *self)
              {
                ::org::orekit::attitudes::BoundedAttitudeProvider result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeProvider());
                return ::org::orekit::attitudes::t_BoundedAttitudeProvider::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistory_getAttitudeStates(t_AttitudeStateHistory *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeStates());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::acm::PY_TYPE(AttitudeState));
              }

              static PyObject *t_AttitudeStateHistory_getAvailableDerivatives(t_AttitudeStateHistory *self)
              {
                ::org::orekit::utils::AngularDerivativesFilter result((jobject) NULL);
                OBJ_CALL(result = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistory_getInterpolationMethod(t_AttitudeStateHistory *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getInterpolationMethod());
                return j2p(result);
              }

              static PyObject *t_AttitudeStateHistory_getInterpolationSamples(t_AttitudeStateHistory *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getInterpolationSamples());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_AttitudeStateHistory_getMetadata(t_AttitudeStateHistory *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeStateHistoryMetadata::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistory_getReferenceFrame(t_AttitudeStateHistory *self)
              {
                ::org::orekit::frames::Frame result((jobject) NULL);
                OBJ_CALL(result = self->object.getReferenceFrame());
                return ::org::orekit::frames::t_Frame::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistory_getStart(t_AttitudeStateHistory *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistory_getStop(t_AttitudeStateHistory *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistory_get__angularCoordinates(t_AttitudeStateHistory *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getAngularCoordinates());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AttitudeStateHistory_get__attitudeProvider(t_AttitudeStateHistory *self, void *data)
              {
                ::org::orekit::attitudes::BoundedAttitudeProvider value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeProvider());
                return ::org::orekit::attitudes::t_BoundedAttitudeProvider::wrap_Object(value);
              }

              static PyObject *t_AttitudeStateHistory_get__attitudeStates(t_AttitudeStateHistory *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeStates());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AttitudeStateHistory_get__availableDerivatives(t_AttitudeStateHistory *self, void *data)
              {
                ::org::orekit::utils::AngularDerivativesFilter value((jobject) NULL);
                OBJ_CALL(value = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(value);
              }

              static PyObject *t_AttitudeStateHistory_get__interpolationMethod(t_AttitudeStateHistory *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getInterpolationMethod());
                return j2p(value);
              }

              static PyObject *t_AttitudeStateHistory_get__interpolationSamples(t_AttitudeStateHistory *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getInterpolationSamples());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_AttitudeStateHistory_get__metadata(t_AttitudeStateHistory *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeStateHistoryMetadata::wrap_Object(value);
              }

              static PyObject *t_AttitudeStateHistory_get__referenceFrame(t_AttitudeStateHistory *self, void *data)
              {
                ::org::orekit::frames::Frame value((jobject) NULL);
                OBJ_CALL(value = self->object.getReferenceFrame());
                return ::org::orekit::frames::t_Frame::wrap_Object(value);
              }

              static PyObject *t_AttitudeStateHistory_get__start(t_AttitudeStateHistory *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_AttitudeStateHistory_get__stop(t_AttitudeStateHistory *self, void *data)
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
#include "org/orekit/propagation/analytical/gnss/SBASPropagatorBuilder.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/analytical/gnss/SBASPropagatorBuilder.h"
#include "org/orekit/frames/Frames.h"
#include "org/orekit/propagation/analytical/gnss/SBASPropagator.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/analytical/gnss/data/SBASOrbitalElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {

          ::java::lang::Class *SBASPropagatorBuilder::class$ = NULL;
          jmethodID *SBASPropagatorBuilder::mids$ = NULL;
          bool SBASPropagatorBuilder::live$ = false;

          jclass SBASPropagatorBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/SBASPropagatorBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b926db973ee83706] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/gnss/data/SBASOrbitalElements;)V");
              mids$[mid_init$_9ae1a3b0462fbfca] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/gnss/data/SBASOrbitalElements;Lorg/orekit/frames/Frames;)V");
              mids$[mid_attitudeProvider_4e00e841ad2fae9c] = env->getMethodID(cls, "attitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)Lorg/orekit/propagation/analytical/gnss/SBASPropagatorBuilder;");
              mids$[mid_build_570e6e91a72444e8] = env->getMethodID(cls, "build", "()Lorg/orekit/propagation/analytical/gnss/SBASPropagator;");
              mids$[mid_ecef_11eb0910bc606357] = env->getMethodID(cls, "ecef", "(Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/analytical/gnss/SBASPropagatorBuilder;");
              mids$[mid_eci_11eb0910bc606357] = env->getMethodID(cls, "eci", "(Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/analytical/gnss/SBASPropagatorBuilder;");
              mids$[mid_mass_5a4d5575dd4e698b] = env->getMethodID(cls, "mass", "(D)Lorg/orekit/propagation/analytical/gnss/SBASPropagatorBuilder;");
              mids$[mid_mu_5a4d5575dd4e698b] = env->getMethodID(cls, "mu", "(D)Lorg/orekit/propagation/analytical/gnss/SBASPropagatorBuilder;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SBASPropagatorBuilder::SBASPropagatorBuilder(const ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b926db973ee83706, a0.this$)) {}

          SBASPropagatorBuilder::SBASPropagatorBuilder(const ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements & a0, const ::org::orekit::frames::Frames & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9ae1a3b0462fbfca, a0.this$, a1.this$)) {}

          SBASPropagatorBuilder SBASPropagatorBuilder::attitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
          {
            return SBASPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_attitudeProvider_4e00e841ad2fae9c], a0.this$));
          }

          ::org::orekit::propagation::analytical::gnss::SBASPropagator SBASPropagatorBuilder::build() const
          {
            return ::org::orekit::propagation::analytical::gnss::SBASPropagator(env->callObjectMethod(this$, mids$[mid_build_570e6e91a72444e8]));
          }

          SBASPropagatorBuilder SBASPropagatorBuilder::ecef(const ::org::orekit::frames::Frame & a0) const
          {
            return SBASPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_ecef_11eb0910bc606357], a0.this$));
          }

          SBASPropagatorBuilder SBASPropagatorBuilder::eci(const ::org::orekit::frames::Frame & a0) const
          {
            return SBASPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_eci_11eb0910bc606357], a0.this$));
          }

          SBASPropagatorBuilder SBASPropagatorBuilder::mass(jdouble a0) const
          {
            return SBASPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_mass_5a4d5575dd4e698b], a0));
          }

          SBASPropagatorBuilder SBASPropagatorBuilder::mu(jdouble a0) const
          {
            return SBASPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_mu_5a4d5575dd4e698b], a0));
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
          static PyObject *t_SBASPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SBASPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SBASPropagatorBuilder_init_(t_SBASPropagatorBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SBASPropagatorBuilder_attitudeProvider(t_SBASPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_SBASPropagatorBuilder_build(t_SBASPropagatorBuilder *self);
          static PyObject *t_SBASPropagatorBuilder_ecef(t_SBASPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_SBASPropagatorBuilder_eci(t_SBASPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_SBASPropagatorBuilder_mass(t_SBASPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_SBASPropagatorBuilder_mu(t_SBASPropagatorBuilder *self, PyObject *arg);

          static PyMethodDef t_SBASPropagatorBuilder__methods_[] = {
            DECLARE_METHOD(t_SBASPropagatorBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SBASPropagatorBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SBASPropagatorBuilder, attitudeProvider, METH_O),
            DECLARE_METHOD(t_SBASPropagatorBuilder, build, METH_NOARGS),
            DECLARE_METHOD(t_SBASPropagatorBuilder, ecef, METH_O),
            DECLARE_METHOD(t_SBASPropagatorBuilder, eci, METH_O),
            DECLARE_METHOD(t_SBASPropagatorBuilder, mass, METH_O),
            DECLARE_METHOD(t_SBASPropagatorBuilder, mu, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SBASPropagatorBuilder)[] = {
            { Py_tp_methods, t_SBASPropagatorBuilder__methods_ },
            { Py_tp_init, (void *) t_SBASPropagatorBuilder_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SBASPropagatorBuilder)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SBASPropagatorBuilder, t_SBASPropagatorBuilder, SBASPropagatorBuilder);

          void t_SBASPropagatorBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(SBASPropagatorBuilder), &PY_TYPE_DEF(SBASPropagatorBuilder), module, "SBASPropagatorBuilder", 0);
          }

          void t_SBASPropagatorBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SBASPropagatorBuilder), "class_", make_descriptor(SBASPropagatorBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SBASPropagatorBuilder), "wrapfn_", make_descriptor(t_SBASPropagatorBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SBASPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SBASPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SBASPropagatorBuilder::initializeClass, 1)))
              return NULL;
            return t_SBASPropagatorBuilder::wrap_Object(SBASPropagatorBuilder(((t_SBASPropagatorBuilder *) arg)->object.this$));
          }
          static PyObject *t_SBASPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SBASPropagatorBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SBASPropagatorBuilder_init_(t_SBASPropagatorBuilder *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements a0((jobject) NULL);
                SBASPropagatorBuilder object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements::initializeClass, &a0))
                {
                  INT_CALL(object = SBASPropagatorBuilder(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements a0((jobject) NULL);
                ::org::orekit::frames::Frames a1((jobject) NULL);
                SBASPropagatorBuilder object((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::propagation::analytical::gnss::data::SBASOrbitalElements::initializeClass, ::org::orekit::frames::Frames::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = SBASPropagatorBuilder(a0, a1));
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

          static PyObject *t_SBASPropagatorBuilder_attitudeProvider(t_SBASPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
            SBASPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.attitudeProvider(a0));
              return t_SBASPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "attitudeProvider", arg);
            return NULL;
          }

          static PyObject *t_SBASPropagatorBuilder_build(t_SBASPropagatorBuilder *self)
          {
            ::org::orekit::propagation::analytical::gnss::SBASPropagator result((jobject) NULL);
            OBJ_CALL(result = self->object.build());
            return ::org::orekit::propagation::analytical::gnss::t_SBASPropagator::wrap_Object(result);
          }

          static PyObject *t_SBASPropagatorBuilder_ecef(t_SBASPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            SBASPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.ecef(a0));
              return t_SBASPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "ecef", arg);
            return NULL;
          }

          static PyObject *t_SBASPropagatorBuilder_eci(t_SBASPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            SBASPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.eci(a0));
              return t_SBASPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eci", arg);
            return NULL;
          }

          static PyObject *t_SBASPropagatorBuilder_mass(t_SBASPropagatorBuilder *self, PyObject *arg)
          {
            jdouble a0;
            SBASPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.mass(a0));
              return t_SBASPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "mass", arg);
            return NULL;
          }

          static PyObject *t_SBASPropagatorBuilder_mu(t_SBASPropagatorBuilder *self, PyObject *arg)
          {
            jdouble a0;
            SBASPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.mu(a0));
              return t_SBASPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "mu", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/Scheduler.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "java/util/SortedSet.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *Scheduler::class$ = NULL;
          jmethodID *Scheduler::mids$ = NULL;
          bool Scheduler::live$ = false;

          jclass Scheduler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/Scheduler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_generate_fda3d30bd0463b72] = env->getMethodID(cls, "generate", "(Ljava/util/Map;)Ljava/util/SortedSet;");
              mids$[mid_getBuilder_aa32975499e048dd] = env->getMethodID(cls, "getBuilder", "()Lorg/orekit/estimation/measurements/generation/MeasurementBuilder;");
              mids$[mid_init_ce7d94fe97fdcf55] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::SortedSet Scheduler::generate(const ::java::util::Map & a0) const
          {
            return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_generate_fda3d30bd0463b72], a0.this$));
          }

          ::org::orekit::estimation::measurements::generation::MeasurementBuilder Scheduler::getBuilder() const
          {
            return ::org::orekit::estimation::measurements::generation::MeasurementBuilder(env->callObjectMethod(this$, mids$[mid_getBuilder_aa32975499e048dd]));
          }

          void Scheduler::init(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_ce7d94fe97fdcf55], a0.this$, a1.this$);
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
          static PyObject *t_Scheduler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Scheduler_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Scheduler_of_(t_Scheduler *self, PyObject *args);
          static PyObject *t_Scheduler_generate(t_Scheduler *self, PyObject *arg);
          static PyObject *t_Scheduler_getBuilder(t_Scheduler *self);
          static PyObject *t_Scheduler_init(t_Scheduler *self, PyObject *args);
          static PyObject *t_Scheduler_get__builder(t_Scheduler *self, void *data);
          static PyObject *t_Scheduler_get__parameters_(t_Scheduler *self, void *data);
          static PyGetSetDef t_Scheduler__fields_[] = {
            DECLARE_GET_FIELD(t_Scheduler, builder),
            DECLARE_GET_FIELD(t_Scheduler, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Scheduler__methods_[] = {
            DECLARE_METHOD(t_Scheduler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Scheduler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Scheduler, of_, METH_VARARGS),
            DECLARE_METHOD(t_Scheduler, generate, METH_O),
            DECLARE_METHOD(t_Scheduler, getBuilder, METH_NOARGS),
            DECLARE_METHOD(t_Scheduler, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Scheduler)[] = {
            { Py_tp_methods, t_Scheduler__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Scheduler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Scheduler)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Scheduler, t_Scheduler, Scheduler);
          PyObject *t_Scheduler::wrap_Object(const Scheduler& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Scheduler::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Scheduler *self = (t_Scheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_Scheduler::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Scheduler::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Scheduler *self = (t_Scheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_Scheduler::install(PyObject *module)
          {
            installType(&PY_TYPE(Scheduler), &PY_TYPE_DEF(Scheduler), module, "Scheduler", 0);
          }

          void t_Scheduler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Scheduler), "class_", make_descriptor(Scheduler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Scheduler), "wrapfn_", make_descriptor(t_Scheduler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Scheduler), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Scheduler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Scheduler::initializeClass, 1)))
              return NULL;
            return t_Scheduler::wrap_Object(Scheduler(((t_Scheduler *) arg)->object.this$));
          }
          static PyObject *t_Scheduler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Scheduler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Scheduler_of_(t_Scheduler *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_Scheduler_generate(t_Scheduler *self, PyObject *arg)
          {
            ::java::util::Map a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::SortedSet result((jobject) NULL);

            if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.generate(a0));
              return ::java::util::t_SortedSet::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "generate", arg);
            return NULL;
          }

          static PyObject *t_Scheduler_getBuilder(t_Scheduler *self)
          {
            ::org::orekit::estimation::measurements::generation::MeasurementBuilder result((jobject) NULL);
            OBJ_CALL(result = self->object.getBuilder());
            return ::org::orekit::estimation::measurements::generation::t_MeasurementBuilder::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_Scheduler_init(t_Scheduler *self, PyObject *args)
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
          static PyObject *t_Scheduler_get__parameters_(t_Scheduler *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_Scheduler_get__builder(t_Scheduler *self, void *data)
          {
            ::org::orekit::estimation::measurements::generation::MeasurementBuilder value((jobject) NULL);
            OBJ_CALL(value = self->object.getBuilder());
            return ::org::orekit::estimation::measurements::generation::t_MeasurementBuilder::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "java/util/Map.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *ShortPeriodTerms::class$ = NULL;
            jmethodID *ShortPeriodTerms::mids$ = NULL;
            bool ShortPeriodTerms::live$ = false;

            jclass ShortPeriodTerms::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getCoefficients_e36d03a99e00e4c3] = env->getMethodID(cls, "getCoefficients", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Set;)Ljava/util/Map;");
                mids$[mid_getCoefficientsKeyPrefix_d2c8eb4129821f0e] = env->getMethodID(cls, "getCoefficientsKeyPrefix", "()Ljava/lang/String;");
                mids$[mid_value_12bafed5e5351c0d] = env->getMethodID(cls, "value", "(Lorg/orekit/orbits/Orbit;)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::java::util::Map ShortPeriodTerms::getCoefficients(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Set & a1) const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getCoefficients_e36d03a99e00e4c3], a0.this$, a1.this$));
            }

            ::java::lang::String ShortPeriodTerms::getCoefficientsKeyPrefix() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCoefficientsKeyPrefix_d2c8eb4129821f0e]));
            }

            JArray< jdouble > ShortPeriodTerms::value(const ::org::orekit::orbits::Orbit & a0) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_12bafed5e5351c0d], a0.this$));
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
            static PyObject *t_ShortPeriodTerms_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ShortPeriodTerms_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ShortPeriodTerms_getCoefficients(t_ShortPeriodTerms *self, PyObject *args);
            static PyObject *t_ShortPeriodTerms_getCoefficientsKeyPrefix(t_ShortPeriodTerms *self);
            static PyObject *t_ShortPeriodTerms_value(t_ShortPeriodTerms *self, PyObject *arg);
            static PyObject *t_ShortPeriodTerms_get__coefficientsKeyPrefix(t_ShortPeriodTerms *self, void *data);
            static PyGetSetDef t_ShortPeriodTerms__fields_[] = {
              DECLARE_GET_FIELD(t_ShortPeriodTerms, coefficientsKeyPrefix),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ShortPeriodTerms__methods_[] = {
              DECLARE_METHOD(t_ShortPeriodTerms, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ShortPeriodTerms, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ShortPeriodTerms, getCoefficients, METH_VARARGS),
              DECLARE_METHOD(t_ShortPeriodTerms, getCoefficientsKeyPrefix, METH_NOARGS),
              DECLARE_METHOD(t_ShortPeriodTerms, value, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ShortPeriodTerms)[] = {
              { Py_tp_methods, t_ShortPeriodTerms__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_ShortPeriodTerms__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ShortPeriodTerms)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ShortPeriodTerms, t_ShortPeriodTerms, ShortPeriodTerms);

            void t_ShortPeriodTerms::install(PyObject *module)
            {
              installType(&PY_TYPE(ShortPeriodTerms), &PY_TYPE_DEF(ShortPeriodTerms), module, "ShortPeriodTerms", 0);
            }

            void t_ShortPeriodTerms::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ShortPeriodTerms), "class_", make_descriptor(ShortPeriodTerms::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ShortPeriodTerms), "wrapfn_", make_descriptor(t_ShortPeriodTerms::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ShortPeriodTerms), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ShortPeriodTerms_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ShortPeriodTerms::initializeClass, 1)))
                return NULL;
              return t_ShortPeriodTerms::wrap_Object(ShortPeriodTerms(((t_ShortPeriodTerms *) arg)->object.this$));
            }
            static PyObject *t_ShortPeriodTerms_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ShortPeriodTerms::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ShortPeriodTerms_getCoefficients(t_ShortPeriodTerms *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::java::util::Set a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::util::Map result((jobject) NULL);

              if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Set::initializeClass, &a0, &a1, &p1, ::java::util::t_Set::parameters_))
              {
                OBJ_CALL(result = self->object.getCoefficients(a0, a1));
                return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::java::lang::PY_TYPE(Object));
              }

              PyErr_SetArgsError((PyObject *) self, "getCoefficients", args);
              return NULL;
            }

            static PyObject *t_ShortPeriodTerms_getCoefficientsKeyPrefix(t_ShortPeriodTerms *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getCoefficientsKeyPrefix());
              return j2p(result);
            }

            static PyObject *t_ShortPeriodTerms_value(t_ShortPeriodTerms *self, PyObject *arg)
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return result.wrap();
              }

              PyErr_SetArgsError((PyObject *) self, "value", arg);
              return NULL;
            }

            static PyObject *t_ShortPeriodTerms_get__coefficientsKeyPrefix(t_ShortPeriodTerms *self, void *data)
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
