#include <jni.h>
#include "JCCEnv.h"
#include "java/io/Reader.h"
#include "java/lang/Readable.h"
#include "java/io/IOException.h"
#include "java/io/Reader.h"
#include "java/io/Closeable.h"
#include "java/lang/Class.h"
#include "java/io/Writer.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *Reader::class$ = NULL;
    jmethodID *Reader::mids$ = NULL;
    bool Reader::live$ = false;

    jclass Reader::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/Reader");

        mids$ = new jmethodID[max_mid];
        mids$[mid_close_ff7cb6c242604316] = env->getMethodID(cls, "close", "()V");
        mids$[mid_mark_8fd427ab23829bf5] = env->getMethodID(cls, "mark", "(I)V");
        mids$[mid_markSupported_eee3de00fe971136] = env->getMethodID(cls, "markSupported", "()Z");
        mids$[mid_nullReader_0a92f974b39121e6] = env->getStaticMethodID(cls, "nullReader", "()Ljava/io/Reader;");
        mids$[mid_read_d6ab429752e7c267] = env->getMethodID(cls, "read", "()I");
        mids$[mid_read_8ff26d6b29141036] = env->getMethodID(cls, "read", "([C)I");
        mids$[mid_read_1f255a7d724a5165] = env->getMethodID(cls, "read", "([CII)I");
        mids$[mid_ready_eee3de00fe971136] = env->getMethodID(cls, "ready", "()Z");
        mids$[mid_reset_ff7cb6c242604316] = env->getMethodID(cls, "reset", "()V");
        mids$[mid_skip_1eaf6eb0a3f3163f] = env->getMethodID(cls, "skip", "(J)J");
        mids$[mid_transferTo_6550890cb150ad82] = env->getMethodID(cls, "transferTo", "(Ljava/io/Writer;)J");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Reader::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_ff7cb6c242604316]);
    }

    void Reader::mark(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_mark_8fd427ab23829bf5], a0);
    }

    jboolean Reader::markSupported() const
    {
      return env->callBooleanMethod(this$, mids$[mid_markSupported_eee3de00fe971136]);
    }

    Reader Reader::nullReader()
    {
      jclass cls = env->getClass(initializeClass);
      return Reader(env->callStaticObjectMethod(cls, mids$[mid_nullReader_0a92f974b39121e6]));
    }

    jint Reader::read() const
    {
      return env->callIntMethod(this$, mids$[mid_read_d6ab429752e7c267]);
    }

    jint Reader::read(const JArray< jchar > & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_read_8ff26d6b29141036], a0.this$);
    }

    jint Reader::read(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      return env->callIntMethod(this$, mids$[mid_read_1f255a7d724a5165], a0.this$, a1, a2);
    }

    jboolean Reader::ready() const
    {
      return env->callBooleanMethod(this$, mids$[mid_ready_eee3de00fe971136]);
    }

    void Reader::reset() const
    {
      env->callVoidMethod(this$, mids$[mid_reset_ff7cb6c242604316]);
    }

    jlong Reader::skip(jlong a0) const
    {
      return env->callLongMethod(this$, mids$[mid_skip_1eaf6eb0a3f3163f], a0);
    }

    jlong Reader::transferTo(const ::java::io::Writer & a0) const
    {
      return env->callLongMethod(this$, mids$[mid_transferTo_6550890cb150ad82], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_Reader_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Reader_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Reader_close(t_Reader *self);
    static PyObject *t_Reader_mark(t_Reader *self, PyObject *arg);
    static PyObject *t_Reader_markSupported(t_Reader *self);
    static PyObject *t_Reader_nullReader(PyTypeObject *type);
    static PyObject *t_Reader_read(t_Reader *self, PyObject *args);
    static PyObject *t_Reader_ready(t_Reader *self);
    static PyObject *t_Reader_reset(t_Reader *self);
    static PyObject *t_Reader_skip(t_Reader *self, PyObject *arg);
    static PyObject *t_Reader_transferTo(t_Reader *self, PyObject *arg);

    static PyMethodDef t_Reader__methods_[] = {
      DECLARE_METHOD(t_Reader, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Reader, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Reader, close, METH_NOARGS),
      DECLARE_METHOD(t_Reader, mark, METH_O),
      DECLARE_METHOD(t_Reader, markSupported, METH_NOARGS),
      DECLARE_METHOD(t_Reader, nullReader, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Reader, read, METH_VARARGS),
      DECLARE_METHOD(t_Reader, ready, METH_NOARGS),
      DECLARE_METHOD(t_Reader, reset, METH_NOARGS),
      DECLARE_METHOD(t_Reader, skip, METH_O),
      DECLARE_METHOD(t_Reader, transferTo, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Reader)[] = {
      { Py_tp_methods, t_Reader__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Reader)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Reader, t_Reader, Reader);

    void t_Reader::install(PyObject *module)
    {
      installType(&PY_TYPE(Reader), &PY_TYPE_DEF(Reader), module, "Reader", 0);
    }

    void t_Reader::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Reader), "class_", make_descriptor(Reader::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Reader), "wrapfn_", make_descriptor(t_Reader::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Reader), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Reader_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Reader::initializeClass, 1)))
        return NULL;
      return t_Reader::wrap_Object(Reader(((t_Reader *) arg)->object.this$));
    }
    static PyObject *t_Reader_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Reader::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Reader_close(t_Reader *self)
    {
      OBJ_CALL(self->object.close());
      Py_RETURN_NONE;
    }

    static PyObject *t_Reader_mark(t_Reader *self, PyObject *arg)
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

    static PyObject *t_Reader_markSupported(t_Reader *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.markSupported());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Reader_nullReader(PyTypeObject *type)
    {
      Reader result((jobject) NULL);
      OBJ_CALL(result = ::java::io::Reader::nullReader());
      return t_Reader::wrap_Object(result);
    }

    static PyObject *t_Reader_read(t_Reader *self, PyObject *args)
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
          JArray< jchar > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(result = self->object.read(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.read(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "read", args);
      return NULL;
    }

    static PyObject *t_Reader_ready(t_Reader *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.ready());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Reader_reset(t_Reader *self)
    {
      OBJ_CALL(self->object.reset());
      Py_RETURN_NONE;
    }

    static PyObject *t_Reader_skip(t_Reader *self, PyObject *arg)
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

    static PyObject *t_Reader_transferTo(t_Reader *self, PyObject *arg)
    {
      ::java::io::Writer a0((jobject) NULL);
      jlong result;

      if (!parseArg(arg, "k", ::java::io::Writer::initializeClass, &a0))
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
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/Space.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {

      ::java::lang::Class *Point::class$ = NULL;
      jmethodID *Point::mids$ = NULL;
      bool Point::live$ = false;

      jclass Point::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/geometry/Point");

          mids$ = new jmethodID[max_mid];
          mids$[mid_distance_277cb62c4ec87155] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/Point;)D");
          mids$[mid_getSpace_a30bf0b437744017] = env->getMethodID(cls, "getSpace", "()Lorg/hipparchus/geometry/Space;");
          mids$[mid_isNaN_eee3de00fe971136] = env->getMethodID(cls, "isNaN", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble Point::distance(const Point & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_distance_277cb62c4ec87155], a0.this$);
      }

      ::org::hipparchus::geometry::Space Point::getSpace() const
      {
        return ::org::hipparchus::geometry::Space(env->callObjectMethod(this$, mids$[mid_getSpace_a30bf0b437744017]));
      }

      jboolean Point::isNaN() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNaN_eee3de00fe971136]);
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
      static PyObject *t_Point_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Point_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Point_of_(t_Point *self, PyObject *args);
      static PyObject *t_Point_distance(t_Point *self, PyObject *arg);
      static PyObject *t_Point_getSpace(t_Point *self);
      static PyObject *t_Point_isNaN(t_Point *self);
      static PyObject *t_Point_get__naN(t_Point *self, void *data);
      static PyObject *t_Point_get__space(t_Point *self, void *data);
      static PyObject *t_Point_get__parameters_(t_Point *self, void *data);
      static PyGetSetDef t_Point__fields_[] = {
        DECLARE_GET_FIELD(t_Point, naN),
        DECLARE_GET_FIELD(t_Point, space),
        DECLARE_GET_FIELD(t_Point, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Point__methods_[] = {
        DECLARE_METHOD(t_Point, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Point, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Point, of_, METH_VARARGS),
        DECLARE_METHOD(t_Point, distance, METH_O),
        DECLARE_METHOD(t_Point, getSpace, METH_NOARGS),
        DECLARE_METHOD(t_Point, isNaN, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Point)[] = {
        { Py_tp_methods, t_Point__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Point__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Point)[] = {
        &PY_TYPE_DEF(::java::io::Serializable),
        NULL
      };

      DEFINE_TYPE(Point, t_Point, Point);
      PyObject *t_Point::wrap_Object(const Point& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Point::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Point *self = (t_Point *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_Point::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Point::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Point *self = (t_Point *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_Point::install(PyObject *module)
      {
        installType(&PY_TYPE(Point), &PY_TYPE_DEF(Point), module, "Point", 0);
      }

      void t_Point::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Point), "class_", make_descriptor(Point::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Point), "wrapfn_", make_descriptor(t_Point::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Point), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Point_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Point::initializeClass, 1)))
          return NULL;
        return t_Point::wrap_Object(Point(((t_Point *) arg)->object.this$));
      }
      static PyObject *t_Point_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Point::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Point_of_(t_Point *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_Point_distance(t_Point *self, PyObject *arg)
      {
        Point a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", Point::initializeClass, &a0, &p0, t_Point::parameters_))
        {
          OBJ_CALL(result = self->object.distance(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "distance", arg);
        return NULL;
      }

      static PyObject *t_Point_getSpace(t_Point *self)
      {
        ::org::hipparchus::geometry::Space result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpace());
        return ::org::hipparchus::geometry::t_Space::wrap_Object(result);
      }

      static PyObject *t_Point_isNaN(t_Point *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isNaN());
        Py_RETURN_BOOL(result);
      }
      static PyObject *t_Point_get__parameters_(t_Point *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_Point_get__naN(t_Point *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isNaN());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Point_get__space(t_Point *self, void *data)
      {
        ::org::hipparchus::geometry::Space value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpace());
        return ::org::hipparchus::geometry::t_Space::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/FastMath.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/util/SinCos.h"
#include "org/hipparchus/util/SinhCosh.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *FastMath::class$ = NULL;
      jmethodID *FastMath::mids$ = NULL;
      bool FastMath::live$ = false;
      jdouble FastMath::E = (jdouble) 0;
      jdouble FastMath::PI = (jdouble) 0;

      jclass FastMath::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/FastMath");

          mids$ = new jmethodID[max_mid];
          mids$[mid_IEEEremainder_82f92590f4247da1] = env->getStaticMethodID(cls, "IEEEremainder", "(DD)D");
          mids$[mid_IEEEremainder_d15f4b9153503460] = env->getStaticMethodID(cls, "IEEEremainder", "(Lorg/hipparchus/CalculusFieldElement;D)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_IEEEremainder_b5ecd7df9e053968] = env->getStaticMethodID(cls, "IEEEremainder", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_abs_bf28ed64d6e8576b] = env->getStaticMethodID(cls, "abs", "(D)D");
          mids$[mid_abs_0770b540745e2c06] = env->getStaticMethodID(cls, "abs", "(F)F");
          mids$[mid_abs_d938fc64e8c6df2d] = env->getStaticMethodID(cls, "abs", "(I)I");
          mids$[mid_abs_1eaf6eb0a3f3163f] = env->getStaticMethodID(cls, "abs", "(J)J");
          mids$[mid_abs_a3b854adede8eaaa] = env->getStaticMethodID(cls, "abs", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_absExact_d938fc64e8c6df2d] = env->getStaticMethodID(cls, "absExact", "(I)I");
          mids$[mid_absExact_1eaf6eb0a3f3163f] = env->getStaticMethodID(cls, "absExact", "(J)J");
          mids$[mid_acos_bf28ed64d6e8576b] = env->getStaticMethodID(cls, "acos", "(D)D");
          mids$[mid_acos_a3b854adede8eaaa] = env->getStaticMethodID(cls, "acos", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_acosh_bf28ed64d6e8576b] = env->getStaticMethodID(cls, "acosh", "(D)D");
          mids$[mid_acosh_a3b854adede8eaaa] = env->getStaticMethodID(cls, "acosh", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_addExact_91b9e1e34b2235d5] = env->getStaticMethodID(cls, "addExact", "(II)I");
          mids$[mid_addExact_7912418dc9bc44e3] = env->getStaticMethodID(cls, "addExact", "(JJ)J");
          mids$[mid_asin_bf28ed64d6e8576b] = env->getStaticMethodID(cls, "asin", "(D)D");
          mids$[mid_asin_a3b854adede8eaaa] = env->getStaticMethodID(cls, "asin", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_asinh_bf28ed64d6e8576b] = env->getStaticMethodID(cls, "asinh", "(D)D");
          mids$[mid_asinh_a3b854adede8eaaa] = env->getStaticMethodID(cls, "asinh", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_atan_bf28ed64d6e8576b] = env->getStaticMethodID(cls, "atan", "(D)D");
          mids$[mid_atan_a3b854adede8eaaa] = env->getStaticMethodID(cls, "atan", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_atan2_82f92590f4247da1] = env->getStaticMethodID(cls, "atan2", "(DD)D");
          mids$[mid_atan2_b5ecd7df9e053968] = env->getStaticMethodID(cls, "atan2", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_atanh_bf28ed64d6e8576b] = env->getStaticMethodID(cls, "atanh", "(D)D");
          mids$[mid_atanh_a3b854adede8eaaa] = env->getStaticMethodID(cls, "atanh", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_cbrt_bf28ed64d6e8576b] = env->getStaticMethodID(cls, "cbrt", "(D)D");
          mids$[mid_cbrt_a3b854adede8eaaa] = env->getStaticMethodID(cls, "cbrt", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_ceil_bf28ed64d6e8576b] = env->getStaticMethodID(cls, "ceil", "(D)D");
          mids$[mid_ceil_a3b854adede8eaaa] = env->getStaticMethodID(cls, "ceil", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_ceilDiv_91b9e1e34b2235d5] = env->getStaticMethodID(cls, "ceilDiv", "(II)I");
          mids$[mid_ceilDiv_e7e8a55529a0db0c] = env->getStaticMethodID(cls, "ceilDiv", "(JI)J");
          mids$[mid_ceilDiv_7912418dc9bc44e3] = env->getStaticMethodID(cls, "ceilDiv", "(JJ)J");
          mids$[mid_ceilDivExact_91b9e1e34b2235d5] = env->getStaticMethodID(cls, "ceilDivExact", "(II)I");
          mids$[mid_ceilDivExact_7912418dc9bc44e3] = env->getStaticMethodID(cls, "ceilDivExact", "(JJ)J");
          mids$[mid_ceilMod_91b9e1e34b2235d5] = env->getStaticMethodID(cls, "ceilMod", "(II)I");
          mids$[mid_ceilMod_7ba8a6d68b9adf60] = env->getStaticMethodID(cls, "ceilMod", "(JI)I");
          mids$[mid_ceilMod_7912418dc9bc44e3] = env->getStaticMethodID(cls, "ceilMod", "(JJ)J");
          mids$[mid_clamp_db06d8c3fc3d9670] = env->getStaticMethodID(cls, "clamp", "(DDD)D");
          mids$[mid_clamp_5028b3b1e10fe724] = env->getStaticMethodID(cls, "clamp", "(FFF)F");
          mids$[mid_clamp_9f191fbdf87612b4] = env->getStaticMethodID(cls, "clamp", "(III)I");
          mids$[mid_clamp_4f56fd978294a989] = env->getStaticMethodID(cls, "clamp", "(JII)I");
          mids$[mid_clamp_3d8b4f22da917798] = env->getStaticMethodID(cls, "clamp", "(JJJ)J");
          mids$[mid_copySign_82f92590f4247da1] = env->getStaticMethodID(cls, "copySign", "(DD)D");
          mids$[mid_copySign_376a3c0184df58e2] = env->getStaticMethodID(cls, "copySign", "(FF)F");
          mids$[mid_copySign_d15f4b9153503460] = env->getStaticMethodID(cls, "copySign", "(Lorg/hipparchus/CalculusFieldElement;D)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_copySign_b5ecd7df9e053968] = env->getStaticMethodID(cls, "copySign", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_cos_bf28ed64d6e8576b] = env->getStaticMethodID(cls, "cos", "(D)D");
          mids$[mid_cos_a3b854adede8eaaa] = env->getStaticMethodID(cls, "cos", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_cosh_bf28ed64d6e8576b] = env->getStaticMethodID(cls, "cosh", "(D)D");
          mids$[mid_cosh_a3b854adede8eaaa] = env->getStaticMethodID(cls, "cosh", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_decrementExact_d938fc64e8c6df2d] = env->getStaticMethodID(cls, "decrementExact", "(I)I");
          mids$[mid_decrementExact_1eaf6eb0a3f3163f] = env->getStaticMethodID(cls, "decrementExact", "(J)J");
          mids$[mid_divideExact_91b9e1e34b2235d5] = env->getStaticMethodID(cls, "divideExact", "(II)I");
          mids$[mid_divideExact_7912418dc9bc44e3] = env->getStaticMethodID(cls, "divideExact", "(JJ)J");
          mids$[mid_exp_bf28ed64d6e8576b] = env->getStaticMethodID(cls, "exp", "(D)D");
          mids$[mid_exp_a3b854adede8eaaa] = env->getStaticMethodID(cls, "exp", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_expm1_bf28ed64d6e8576b] = env->getStaticMethodID(cls, "expm1", "(D)D");
          mids$[mid_expm1_a3b854adede8eaaa] = env->getStaticMethodID(cls, "expm1", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_floor_bf28ed64d6e8576b] = env->getStaticMethodID(cls, "floor", "(D)D");
          mids$[mid_floor_a3b854adede8eaaa] = env->getStaticMethodID(cls, "floor", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_floorDiv_91b9e1e34b2235d5] = env->getStaticMethodID(cls, "floorDiv", "(II)I");
          mids$[mid_floorDiv_e7e8a55529a0db0c] = env->getStaticMethodID(cls, "floorDiv", "(JI)J");
          mids$[mid_floorDiv_7912418dc9bc44e3] = env->getStaticMethodID(cls, "floorDiv", "(JJ)J");
          mids$[mid_floorDivExact_91b9e1e34b2235d5] = env->getStaticMethodID(cls, "floorDivExact", "(II)I");
          mids$[mid_floorDivExact_7912418dc9bc44e3] = env->getStaticMethodID(cls, "floorDivExact", "(JJ)J");
          mids$[mid_floorMod_91b9e1e34b2235d5] = env->getStaticMethodID(cls, "floorMod", "(II)I");
          mids$[mid_floorMod_7ba8a6d68b9adf60] = env->getStaticMethodID(cls, "floorMod", "(JI)I");
          mids$[mid_floorMod_7912418dc9bc44e3] = env->getStaticMethodID(cls, "floorMod", "(JJ)J");
          mids$[mid_fma_db06d8c3fc3d9670] = env->getStaticMethodID(cls, "fma", "(DDD)D");
          mids$[mid_fma_5028b3b1e10fe724] = env->getStaticMethodID(cls, "fma", "(FFF)F");
          mids$[mid_getExponent_9e72cb20adb363fb] = env->getStaticMethodID(cls, "getExponent", "(D)I");
          mids$[mid_getExponent_d5ac1630ba9f4935] = env->getStaticMethodID(cls, "getExponent", "(F)I");
          mids$[mid_hypot_82f92590f4247da1] = env->getStaticMethodID(cls, "hypot", "(DD)D");
          mids$[mid_hypot_b5ecd7df9e053968] = env->getStaticMethodID(cls, "hypot", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_incrementExact_d938fc64e8c6df2d] = env->getStaticMethodID(cls, "incrementExact", "(I)I");
          mids$[mid_incrementExact_1eaf6eb0a3f3163f] = env->getStaticMethodID(cls, "incrementExact", "(J)J");
          mids$[mid_log_bf28ed64d6e8576b] = env->getStaticMethodID(cls, "log", "(D)D");
          mids$[mid_log_a3b854adede8eaaa] = env->getStaticMethodID(cls, "log", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_log_82f92590f4247da1] = env->getStaticMethodID(cls, "log", "(DD)D");
          mids$[mid_log10_bf28ed64d6e8576b] = env->getStaticMethodID(cls, "log10", "(D)D");
          mids$[mid_log10_a3b854adede8eaaa] = env->getStaticMethodID(cls, "log10", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_log1p_bf28ed64d6e8576b] = env->getStaticMethodID(cls, "log1p", "(D)D");
          mids$[mid_log1p_a3b854adede8eaaa] = env->getStaticMethodID(cls, "log1p", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_max_82f92590f4247da1] = env->getStaticMethodID(cls, "max", "(DD)D");
          mids$[mid_max_376a3c0184df58e2] = env->getStaticMethodID(cls, "max", "(FF)F");
          mids$[mid_max_91b9e1e34b2235d5] = env->getStaticMethodID(cls, "max", "(II)I");
          mids$[mid_max_7912418dc9bc44e3] = env->getStaticMethodID(cls, "max", "(JJ)J");
          mids$[mid_max_d15f4b9153503460] = env->getStaticMethodID(cls, "max", "(Lorg/hipparchus/CalculusFieldElement;D)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_max_b5ecd7df9e053968] = env->getStaticMethodID(cls, "max", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_min_82f92590f4247da1] = env->getStaticMethodID(cls, "min", "(DD)D");
          mids$[mid_min_d15f4b9153503460] = env->getStaticMethodID(cls, "min", "(Lorg/hipparchus/CalculusFieldElement;D)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_min_376a3c0184df58e2] = env->getStaticMethodID(cls, "min", "(FF)F");
          mids$[mid_min_91b9e1e34b2235d5] = env->getStaticMethodID(cls, "min", "(II)I");
          mids$[mid_min_7912418dc9bc44e3] = env->getStaticMethodID(cls, "min", "(JJ)J");
          mids$[mid_min_b5ecd7df9e053968] = env->getStaticMethodID(cls, "min", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_multiplyExact_91b9e1e34b2235d5] = env->getStaticMethodID(cls, "multiplyExact", "(II)I");
          mids$[mid_multiplyExact_e7e8a55529a0db0c] = env->getStaticMethodID(cls, "multiplyExact", "(JI)J");
          mids$[mid_multiplyExact_7912418dc9bc44e3] = env->getStaticMethodID(cls, "multiplyExact", "(JJ)J");
          mids$[mid_multiplyFull_038d815c660e2779] = env->getStaticMethodID(cls, "multiplyFull", "(II)J");
          mids$[mid_multiplyHigh_7912418dc9bc44e3] = env->getStaticMethodID(cls, "multiplyHigh", "(JJ)J");
          mids$[mid_negateExact_d938fc64e8c6df2d] = env->getStaticMethodID(cls, "negateExact", "(I)I");
          mids$[mid_negateExact_1eaf6eb0a3f3163f] = env->getStaticMethodID(cls, "negateExact", "(J)J");
          mids$[mid_nextAfter_82f92590f4247da1] = env->getStaticMethodID(cls, "nextAfter", "(DD)D");
          mids$[mid_nextAfter_2b91677fd9f83abc] = env->getStaticMethodID(cls, "nextAfter", "(FD)F");
          mids$[mid_nextDown_bf28ed64d6e8576b] = env->getStaticMethodID(cls, "nextDown", "(D)D");
          mids$[mid_nextDown_0770b540745e2c06] = env->getStaticMethodID(cls, "nextDown", "(F)F");
          mids$[mid_nextUp_bf28ed64d6e8576b] = env->getStaticMethodID(cls, "nextUp", "(D)D");
          mids$[mid_nextUp_0770b540745e2c06] = env->getStaticMethodID(cls, "nextUp", "(F)F");
          mids$[mid_norm_56a150973c69fd10] = env->getStaticMethodID(cls, "norm", "(Lorg/hipparchus/CalculusFieldElement;)D");
          mids$[mid_pow_82f92590f4247da1] = env->getStaticMethodID(cls, "pow", "(DD)D");
          mids$[mid_pow_988810e80d644418] = env->getStaticMethodID(cls, "pow", "(DI)D");
          mids$[mid_pow_be99726ca21db94b] = env->getStaticMethodID(cls, "pow", "(DJ)D");
          mids$[mid_pow_d15f4b9153503460] = env->getStaticMethodID(cls, "pow", "(Lorg/hipparchus/CalculusFieldElement;D)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_pow_620e45e6055b3312] = env->getStaticMethodID(cls, "pow", "(Lorg/hipparchus/CalculusFieldElement;I)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_pow_b5ecd7df9e053968] = env->getStaticMethodID(cls, "pow", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_random_9981f74b2d109da6] = env->getStaticMethodID(cls, "random", "()D");
          mids$[mid_rint_bf28ed64d6e8576b] = env->getStaticMethodID(cls, "rint", "(D)D");
          mids$[mid_rint_a3b854adede8eaaa] = env->getStaticMethodID(cls, "rint", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_round_6883df933d8a0182] = env->getStaticMethodID(cls, "round", "(D)J");
          mids$[mid_round_d5ac1630ba9f4935] = env->getStaticMethodID(cls, "round", "(F)I");
          mids$[mid_round_f558aac2905fea6f] = env->getStaticMethodID(cls, "round", "(Lorg/hipparchus/CalculusFieldElement;)J");
          mids$[mid_scalb_988810e80d644418] = env->getStaticMethodID(cls, "scalb", "(DI)D");
          mids$[mid_scalb_52c941e30b3f23b6] = env->getStaticMethodID(cls, "scalb", "(FI)F");
          mids$[mid_scalb_620e45e6055b3312] = env->getStaticMethodID(cls, "scalb", "(Lorg/hipparchus/CalculusFieldElement;I)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_sign_a3b854adede8eaaa] = env->getStaticMethodID(cls, "sign", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_signum_bf28ed64d6e8576b] = env->getStaticMethodID(cls, "signum", "(D)D");
          mids$[mid_signum_0770b540745e2c06] = env->getStaticMethodID(cls, "signum", "(F)F");
          mids$[mid_sin_bf28ed64d6e8576b] = env->getStaticMethodID(cls, "sin", "(D)D");
          mids$[mid_sin_a3b854adede8eaaa] = env->getStaticMethodID(cls, "sin", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_sinCos_1a320d21482054c4] = env->getStaticMethodID(cls, "sinCos", "(D)Lorg/hipparchus/util/SinCos;");
          mids$[mid_sinCos_0b916a0ac1230877] = env->getStaticMethodID(cls, "sinCos", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/util/FieldSinCos;");
          mids$[mid_sinh_bf28ed64d6e8576b] = env->getStaticMethodID(cls, "sinh", "(D)D");
          mids$[mid_sinh_a3b854adede8eaaa] = env->getStaticMethodID(cls, "sinh", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_sinhCosh_6835346c34f988e8] = env->getStaticMethodID(cls, "sinhCosh", "(D)Lorg/hipparchus/util/SinhCosh;");
          mids$[mid_sinhCosh_db5159235070d1c2] = env->getStaticMethodID(cls, "sinhCosh", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/util/FieldSinhCosh;");
          mids$[mid_sqrt_bf28ed64d6e8576b] = env->getStaticMethodID(cls, "sqrt", "(D)D");
          mids$[mid_sqrt_a3b854adede8eaaa] = env->getStaticMethodID(cls, "sqrt", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_subtractExact_91b9e1e34b2235d5] = env->getStaticMethodID(cls, "subtractExact", "(II)I");
          mids$[mid_subtractExact_7912418dc9bc44e3] = env->getStaticMethodID(cls, "subtractExact", "(JJ)J");
          mids$[mid_tan_bf28ed64d6e8576b] = env->getStaticMethodID(cls, "tan", "(D)D");
          mids$[mid_tan_a3b854adede8eaaa] = env->getStaticMethodID(cls, "tan", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_tanh_bf28ed64d6e8576b] = env->getStaticMethodID(cls, "tanh", "(D)D");
          mids$[mid_tanh_a3b854adede8eaaa] = env->getStaticMethodID(cls, "tanh", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_toDegrees_bf28ed64d6e8576b] = env->getStaticMethodID(cls, "toDegrees", "(D)D");
          mids$[mid_toDegrees_a3b854adede8eaaa] = env->getStaticMethodID(cls, "toDegrees", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_toIntExact_e9d351dcffb1a696] = env->getStaticMethodID(cls, "toIntExact", "(J)I");
          mids$[mid_toRadians_bf28ed64d6e8576b] = env->getStaticMethodID(cls, "toRadians", "(D)D");
          mids$[mid_toRadians_a3b854adede8eaaa] = env->getStaticMethodID(cls, "toRadians", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_ulp_bf28ed64d6e8576b] = env->getStaticMethodID(cls, "ulp", "(D)D");
          mids$[mid_ulp_0770b540745e2c06] = env->getStaticMethodID(cls, "ulp", "(F)F");
          mids$[mid_ulp_a3b854adede8eaaa] = env->getStaticMethodID(cls, "ulp", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_unsignedMultiplyHigh_7912418dc9bc44e3] = env->getStaticMethodID(cls, "unsignedMultiplyHigh", "(JJ)J");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          E = env->getStaticDoubleField(cls, "E");
          PI = env->getStaticDoubleField(cls, "PI");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble FastMath::IEEEremainder(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_IEEEremainder_82f92590f4247da1], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::IEEEremainder(const ::org::hipparchus::CalculusFieldElement & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_IEEEremainder_d15f4b9153503460], a0.this$, a1));
      }

      ::org::hipparchus::CalculusFieldElement FastMath::IEEEremainder(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_IEEEremainder_b5ecd7df9e053968], a0.this$, a1.this$));
      }

      jdouble FastMath::abs(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_abs_bf28ed64d6e8576b], a0);
      }

      jfloat FastMath::abs(jfloat a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_abs_0770b540745e2c06], a0);
      }

      jint FastMath::abs(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_abs_d938fc64e8c6df2d], a0);
      }

      jlong FastMath::abs(jlong a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_abs_1eaf6eb0a3f3163f], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::abs(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_abs_a3b854adede8eaaa], a0.this$));
      }

      jint FastMath::absExact(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_absExact_d938fc64e8c6df2d], a0);
      }

      jlong FastMath::absExact(jlong a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_absExact_1eaf6eb0a3f3163f], a0);
      }

      jdouble FastMath::acos(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_acos_bf28ed64d6e8576b], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::acos(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_acos_a3b854adede8eaaa], a0.this$));
      }

      jdouble FastMath::acosh(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_acosh_bf28ed64d6e8576b], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::acosh(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_acosh_a3b854adede8eaaa], a0.this$));
      }

      jint FastMath::addExact(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_addExact_91b9e1e34b2235d5], a0, a1);
      }

      jlong FastMath::addExact(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_addExact_7912418dc9bc44e3], a0, a1);
      }

      jdouble FastMath::asin(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_asin_bf28ed64d6e8576b], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::asin(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_asin_a3b854adede8eaaa], a0.this$));
      }

      jdouble FastMath::asinh(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_asinh_bf28ed64d6e8576b], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::asinh(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_asinh_a3b854adede8eaaa], a0.this$));
      }

      jdouble FastMath::atan(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_atan_bf28ed64d6e8576b], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::atan(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_atan_a3b854adede8eaaa], a0.this$));
      }

      jdouble FastMath::atan2(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_atan2_82f92590f4247da1], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::atan2(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_atan2_b5ecd7df9e053968], a0.this$, a1.this$));
      }

      jdouble FastMath::atanh(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_atanh_bf28ed64d6e8576b], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::atanh(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_atanh_a3b854adede8eaaa], a0.this$));
      }

      jdouble FastMath::cbrt(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_cbrt_bf28ed64d6e8576b], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::cbrt(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_cbrt_a3b854adede8eaaa], a0.this$));
      }

      jdouble FastMath::ceil(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_ceil_bf28ed64d6e8576b], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::ceil(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_ceil_a3b854adede8eaaa], a0.this$));
      }

      jint FastMath::ceilDiv(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_ceilDiv_91b9e1e34b2235d5], a0, a1);
      }

      jlong FastMath::ceilDiv(jlong a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_ceilDiv_e7e8a55529a0db0c], a0, a1);
      }

      jlong FastMath::ceilDiv(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_ceilDiv_7912418dc9bc44e3], a0, a1);
      }

      jint FastMath::ceilDivExact(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_ceilDivExact_91b9e1e34b2235d5], a0, a1);
      }

      jlong FastMath::ceilDivExact(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_ceilDivExact_7912418dc9bc44e3], a0, a1);
      }

      jint FastMath::ceilMod(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_ceilMod_91b9e1e34b2235d5], a0, a1);
      }

      jint FastMath::ceilMod(jlong a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_ceilMod_7ba8a6d68b9adf60], a0, a1);
      }

      jlong FastMath::ceilMod(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_ceilMod_7912418dc9bc44e3], a0, a1);
      }

      jdouble FastMath::clamp(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_clamp_db06d8c3fc3d9670], a0, a1, a2);
      }

      jfloat FastMath::clamp(jfloat a0, jfloat a1, jfloat a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_clamp_5028b3b1e10fe724], a0, a1, a2);
      }

      jint FastMath::clamp(jint a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_clamp_9f191fbdf87612b4], a0, a1, a2);
      }

      jint FastMath::clamp(jlong a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_clamp_4f56fd978294a989], a0, a1, a2);
      }

      jlong FastMath::clamp(jlong a0, jlong a1, jlong a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_clamp_3d8b4f22da917798], a0, a1, a2);
      }

      jdouble FastMath::copySign(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_copySign_82f92590f4247da1], a0, a1);
      }

      jfloat FastMath::copySign(jfloat a0, jfloat a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_copySign_376a3c0184df58e2], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::copySign(const ::org::hipparchus::CalculusFieldElement & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_copySign_d15f4b9153503460], a0.this$, a1));
      }

      ::org::hipparchus::CalculusFieldElement FastMath::copySign(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_copySign_b5ecd7df9e053968], a0.this$, a1.this$));
      }

      jdouble FastMath::cos(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_cos_bf28ed64d6e8576b], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::cos(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_cos_a3b854adede8eaaa], a0.this$));
      }

      jdouble FastMath::cosh(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_cosh_bf28ed64d6e8576b], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::cosh(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_cosh_a3b854adede8eaaa], a0.this$));
      }

      jint FastMath::decrementExact(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_decrementExact_d938fc64e8c6df2d], a0);
      }

      jlong FastMath::decrementExact(jlong a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_decrementExact_1eaf6eb0a3f3163f], a0);
      }

      jint FastMath::divideExact(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_divideExact_91b9e1e34b2235d5], a0, a1);
      }

      jlong FastMath::divideExact(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_divideExact_7912418dc9bc44e3], a0, a1);
      }

      jdouble FastMath::exp(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_exp_bf28ed64d6e8576b], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::exp(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_exp_a3b854adede8eaaa], a0.this$));
      }

      jdouble FastMath::expm1(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_expm1_bf28ed64d6e8576b], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::expm1(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_expm1_a3b854adede8eaaa], a0.this$));
      }

      jdouble FastMath::floor(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_floor_bf28ed64d6e8576b], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::floor(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_floor_a3b854adede8eaaa], a0.this$));
      }

      jint FastMath::floorDiv(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_floorDiv_91b9e1e34b2235d5], a0, a1);
      }

      jlong FastMath::floorDiv(jlong a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_floorDiv_e7e8a55529a0db0c], a0, a1);
      }

      jlong FastMath::floorDiv(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_floorDiv_7912418dc9bc44e3], a0, a1);
      }

      jint FastMath::floorDivExact(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_floorDivExact_91b9e1e34b2235d5], a0, a1);
      }

      jlong FastMath::floorDivExact(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_floorDivExact_7912418dc9bc44e3], a0, a1);
      }

      jint FastMath::floorMod(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_floorMod_91b9e1e34b2235d5], a0, a1);
      }

      jint FastMath::floorMod(jlong a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_floorMod_7ba8a6d68b9adf60], a0, a1);
      }

      jlong FastMath::floorMod(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_floorMod_7912418dc9bc44e3], a0, a1);
      }

      jdouble FastMath::fma(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_fma_db06d8c3fc3d9670], a0, a1, a2);
      }

      jfloat FastMath::fma(jfloat a0, jfloat a1, jfloat a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_fma_5028b3b1e10fe724], a0, a1, a2);
      }

      jint FastMath::getExponent(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_getExponent_9e72cb20adb363fb], a0);
      }

      jint FastMath::getExponent(jfloat a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_getExponent_d5ac1630ba9f4935], a0);
      }

      jdouble FastMath::hypot(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_hypot_82f92590f4247da1], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::hypot(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_hypot_b5ecd7df9e053968], a0.this$, a1.this$));
      }

      jint FastMath::incrementExact(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_incrementExact_d938fc64e8c6df2d], a0);
      }

      jlong FastMath::incrementExact(jlong a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_incrementExact_1eaf6eb0a3f3163f], a0);
      }

      jdouble FastMath::log(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_log_bf28ed64d6e8576b], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::log(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_log_a3b854adede8eaaa], a0.this$));
      }

      jdouble FastMath::log(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_log_82f92590f4247da1], a0, a1);
      }

      jdouble FastMath::log10(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_log10_bf28ed64d6e8576b], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::log10(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_log10_a3b854adede8eaaa], a0.this$));
      }

      jdouble FastMath::log1p(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_log1p_bf28ed64d6e8576b], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::log1p(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_log1p_a3b854adede8eaaa], a0.this$));
      }

      jdouble FastMath::max$(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_max_82f92590f4247da1], a0, a1);
      }

      jfloat FastMath::max$(jfloat a0, jfloat a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_max_376a3c0184df58e2], a0, a1);
      }

      jint FastMath::max$(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_max_91b9e1e34b2235d5], a0, a1);
      }

      jlong FastMath::max$(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_max_7912418dc9bc44e3], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::max$(const ::org::hipparchus::CalculusFieldElement & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_max_d15f4b9153503460], a0.this$, a1));
      }

      ::org::hipparchus::CalculusFieldElement FastMath::max$(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_max_b5ecd7df9e053968], a0.this$, a1.this$));
      }

      jdouble FastMath::min$(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_min_82f92590f4247da1], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::min$(const ::org::hipparchus::CalculusFieldElement & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_min_d15f4b9153503460], a0.this$, a1));
      }

      jfloat FastMath::min$(jfloat a0, jfloat a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_min_376a3c0184df58e2], a0, a1);
      }

      jint FastMath::min$(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_min_91b9e1e34b2235d5], a0, a1);
      }

      jlong FastMath::min$(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_min_7912418dc9bc44e3], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::min$(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_min_b5ecd7df9e053968], a0.this$, a1.this$));
      }

      jint FastMath::multiplyExact(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_multiplyExact_91b9e1e34b2235d5], a0, a1);
      }

      jlong FastMath::multiplyExact(jlong a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_multiplyExact_e7e8a55529a0db0c], a0, a1);
      }

      jlong FastMath::multiplyExact(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_multiplyExact_7912418dc9bc44e3], a0, a1);
      }

      jlong FastMath::multiplyFull(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_multiplyFull_038d815c660e2779], a0, a1);
      }

      jlong FastMath::multiplyHigh(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_multiplyHigh_7912418dc9bc44e3], a0, a1);
      }

      jint FastMath::negateExact(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_negateExact_d938fc64e8c6df2d], a0);
      }

      jlong FastMath::negateExact(jlong a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_negateExact_1eaf6eb0a3f3163f], a0);
      }

      jdouble FastMath::nextAfter(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_nextAfter_82f92590f4247da1], a0, a1);
      }

      jfloat FastMath::nextAfter(jfloat a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_nextAfter_2b91677fd9f83abc], a0, a1);
      }

      jdouble FastMath::nextDown(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_nextDown_bf28ed64d6e8576b], a0);
      }

      jfloat FastMath::nextDown(jfloat a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_nextDown_0770b540745e2c06], a0);
      }

      jdouble FastMath::nextUp(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_nextUp_bf28ed64d6e8576b], a0);
      }

      jfloat FastMath::nextUp(jfloat a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_nextUp_0770b540745e2c06], a0);
      }

      jdouble FastMath::norm(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_norm_56a150973c69fd10], a0.this$);
      }

      jdouble FastMath::pow(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_pow_82f92590f4247da1], a0, a1);
      }

      jdouble FastMath::pow(jdouble a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_pow_988810e80d644418], a0, a1);
      }

      jdouble FastMath::pow(jdouble a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_pow_be99726ca21db94b], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::pow(const ::org::hipparchus::CalculusFieldElement & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_pow_d15f4b9153503460], a0.this$, a1));
      }

      ::org::hipparchus::CalculusFieldElement FastMath::pow(const ::org::hipparchus::CalculusFieldElement & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_pow_620e45e6055b3312], a0.this$, a1));
      }

      ::org::hipparchus::CalculusFieldElement FastMath::pow(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_pow_b5ecd7df9e053968], a0.this$, a1.this$));
      }

      jdouble FastMath::random()
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_random_9981f74b2d109da6]);
      }

      jdouble FastMath::rint(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_rint_bf28ed64d6e8576b], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::rint(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_rint_a3b854adede8eaaa], a0.this$));
      }

      jlong FastMath::round(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_round_6883df933d8a0182], a0);
      }

      jint FastMath::round(jfloat a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_round_d5ac1630ba9f4935], a0);
      }

      jlong FastMath::round(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_round_f558aac2905fea6f], a0.this$);
      }

      jdouble FastMath::scalb(jdouble a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_scalb_988810e80d644418], a0, a1);
      }

      jfloat FastMath::scalb(jfloat a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_scalb_52c941e30b3f23b6], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::scalb(const ::org::hipparchus::CalculusFieldElement & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_scalb_620e45e6055b3312], a0.this$, a1));
      }

      ::org::hipparchus::CalculusFieldElement FastMath::sign(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_sign_a3b854adede8eaaa], a0.this$));
      }

      jdouble FastMath::signum(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_signum_bf28ed64d6e8576b], a0);
      }

      jfloat FastMath::signum(jfloat a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_signum_0770b540745e2c06], a0);
      }

      jdouble FastMath::sin(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sin_bf28ed64d6e8576b], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::sin(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_sin_a3b854adede8eaaa], a0.this$));
      }

      ::org::hipparchus::util::SinCos FastMath::sinCos(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::util::SinCos(env->callStaticObjectMethod(cls, mids$[mid_sinCos_1a320d21482054c4], a0));
      }

      ::org::hipparchus::util::FieldSinCos FastMath::sinCos(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::util::FieldSinCos(env->callStaticObjectMethod(cls, mids$[mid_sinCos_0b916a0ac1230877], a0.this$));
      }

      jdouble FastMath::sinh(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sinh_bf28ed64d6e8576b], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::sinh(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_sinh_a3b854adede8eaaa], a0.this$));
      }

      ::org::hipparchus::util::SinhCosh FastMath::sinhCosh(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::util::SinhCosh(env->callStaticObjectMethod(cls, mids$[mid_sinhCosh_6835346c34f988e8], a0));
      }

      ::org::hipparchus::util::FieldSinhCosh FastMath::sinhCosh(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::util::FieldSinhCosh(env->callStaticObjectMethod(cls, mids$[mid_sinhCosh_db5159235070d1c2], a0.this$));
      }

      jdouble FastMath::sqrt(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sqrt_bf28ed64d6e8576b], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::sqrt(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_sqrt_a3b854adede8eaaa], a0.this$));
      }

      jint FastMath::subtractExact(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_subtractExact_91b9e1e34b2235d5], a0, a1);
      }

      jlong FastMath::subtractExact(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_subtractExact_7912418dc9bc44e3], a0, a1);
      }

      jdouble FastMath::tan(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_tan_bf28ed64d6e8576b], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::tan(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_tan_a3b854adede8eaaa], a0.this$));
      }

      jdouble FastMath::tanh(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_tanh_bf28ed64d6e8576b], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::tanh(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_tanh_a3b854adede8eaaa], a0.this$));
      }

      jdouble FastMath::toDegrees(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_toDegrees_bf28ed64d6e8576b], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::toDegrees(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_toDegrees_a3b854adede8eaaa], a0.this$));
      }

      jint FastMath::toIntExact(jlong a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_toIntExact_e9d351dcffb1a696], a0);
      }

      jdouble FastMath::toRadians(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_toRadians_bf28ed64d6e8576b], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::toRadians(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_toRadians_a3b854adede8eaaa], a0.this$));
      }

      jdouble FastMath::ulp(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_ulp_bf28ed64d6e8576b], a0);
      }

      jfloat FastMath::ulp(jfloat a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_ulp_0770b540745e2c06], a0);
      }

      ::org::hipparchus::CalculusFieldElement FastMath::ulp(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_ulp_a3b854adede8eaaa], a0.this$));
      }

      jlong FastMath::unsignedMultiplyHigh(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_unsignedMultiplyHigh_7912418dc9bc44e3], a0, a1);
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
      static PyObject *t_FastMath_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FastMath_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FastMath_IEEEremainder(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_abs(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_absExact(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_acos(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_acosh(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_addExact(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_asin(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_asinh(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_atan(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_atan2(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_atanh(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_cbrt(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_ceil(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_ceilDiv(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_ceilDivExact(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_ceilMod(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_clamp(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_copySign(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_cos(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_cosh(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_decrementExact(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_divideExact(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_exp(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_expm1(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_floor(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_floorDiv(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_floorDivExact(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_floorMod(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_fma(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_getExponent(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_hypot(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_incrementExact(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_log(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_log10(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_log1p(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_max(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_min(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_multiplyExact(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_multiplyFull(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_multiplyHigh(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_negateExact(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_nextAfter(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_nextDown(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_nextUp(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_norm(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FastMath_pow(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_random(PyTypeObject *type);
      static PyObject *t_FastMath_rint(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_round(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_scalb(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_sign(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FastMath_signum(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_sin(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_sinCos(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_sinh(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_sinhCosh(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_sqrt(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_subtractExact(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_tan(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_tanh(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_toDegrees(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_toIntExact(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FastMath_toRadians(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_ulp(PyTypeObject *type, PyObject *args);
      static PyObject *t_FastMath_unsignedMultiplyHigh(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_FastMath__methods_[] = {
        DECLARE_METHOD(t_FastMath, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FastMath, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FastMath, IEEEremainder, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, abs, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, absExact, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, acos, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, acosh, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, addExact, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, asin, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, asinh, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, atan, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, atan2, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, atanh, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, cbrt, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, ceil, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, ceilDiv, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, ceilDivExact, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, ceilMod, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, clamp, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, copySign, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, cos, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, cosh, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, decrementExact, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, divideExact, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, exp, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, expm1, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, floor, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, floorDiv, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, floorDivExact, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, floorMod, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, fma, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, getExponent, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, hypot, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, incrementExact, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, log, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, log10, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, log1p, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, max, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, min, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, multiplyExact, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, multiplyFull, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, multiplyHigh, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, negateExact, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, nextAfter, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, nextDown, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, nextUp, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, norm, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FastMath, pow, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, random, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, rint, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, round, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, scalb, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, sign, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FastMath, signum, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, sin, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, sinCos, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, sinh, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, sinhCosh, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, sqrt, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, subtractExact, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, tan, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, tanh, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, toDegrees, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, toIntExact, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FastMath, toRadians, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, ulp, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FastMath, unsignedMultiplyHigh, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FastMath)[] = {
        { Py_tp_methods, t_FastMath__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FastMath)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FastMath, t_FastMath, FastMath);

      void t_FastMath::install(PyObject *module)
      {
        installType(&PY_TYPE(FastMath), &PY_TYPE_DEF(FastMath), module, "FastMath", 0);
      }

      void t_FastMath::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FastMath), "class_", make_descriptor(FastMath::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FastMath), "wrapfn_", make_descriptor(t_FastMath::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FastMath), "boxfn_", make_descriptor(boxObject));
        env->getClass(FastMath::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(FastMath), "E", make_descriptor(FastMath::E));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FastMath), "PI", make_descriptor(FastMath::PI));
      }

      static PyObject *t_FastMath_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FastMath::initializeClass, 1)))
          return NULL;
        return t_FastMath::wrap_Object(FastMath(((t_FastMath *) arg)->object.this$));
      }
      static PyObject *t_FastMath_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FastMath::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FastMath_IEEEremainder(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::IEEEremainder(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KD", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::IEEEremainder(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::IEEEremainder(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "IEEEremainder", args);
        return NULL;
      }

      static PyObject *t_FastMath_abs(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::abs(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jfloat a0;
            jfloat result;

            if (!parseArgs(args, "F", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::abs(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::abs(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong result;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::abs(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::abs(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "abs", args);
        return NULL;
      }

      static PyObject *t_FastMath_absExact(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::absExact(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong result;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::absExact(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "absExact", args);
        return NULL;
      }

      static PyObject *t_FastMath_acos(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::acos(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::acos(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "acos", args);
        return NULL;
      }

      static PyObject *t_FastMath_acosh(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::acosh(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::acosh(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "acosh", args);
        return NULL;
      }

      static PyObject *t_FastMath_addExact(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::addExact(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::addExact(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "addExact", args);
        return NULL;
      }

      static PyObject *t_FastMath_asin(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::asin(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::asin(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "asin", args);
        return NULL;
      }

      static PyObject *t_FastMath_asinh(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::asinh(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::asinh(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "asinh", args);
        return NULL;
      }

      static PyObject *t_FastMath_atan(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::atan(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::atan(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "atan", args);
        return NULL;
      }

      static PyObject *t_FastMath_atan2(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::atan2(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::atan2(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "atan2", args);
        return NULL;
      }

      static PyObject *t_FastMath_atanh(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::atanh(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::atanh(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "atanh", args);
        return NULL;
      }

      static PyObject *t_FastMath_cbrt(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::cbrt(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::cbrt(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "cbrt", args);
        return NULL;
      }

      static PyObject *t_FastMath_ceil(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ceil(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ceil(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "ceil", args);
        return NULL;
      }

      static PyObject *t_FastMath_ceilDiv(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ceilDiv(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jint a1;
            jlong result;

            if (!parseArgs(args, "JI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ceilDiv(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ceilDiv(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "ceilDiv", args);
        return NULL;
      }

      static PyObject *t_FastMath_ceilDivExact(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ceilDivExact(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ceilDivExact(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "ceilDivExact", args);
        return NULL;
      }

      static PyObject *t_FastMath_ceilMod(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ceilMod(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "JI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ceilMod(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ceilMod(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "ceilMod", args);
        return NULL;
      }

      static PyObject *t_FastMath_clamp(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble result;

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::clamp(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jfloat a2;
            jfloat result;

            if (!parseArgs(args, "FFF", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::clamp(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jint a0;
            jint a1;
            jint a2;
            jint result;

            if (!parseArgs(args, "III", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::clamp(a0, a1, a2));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jint a1;
            jint a2;
            jint result;

            if (!parseArgs(args, "JII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::clamp(a0, a1, a2));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong a2;
            jlong result;

            if (!parseArgs(args, "JJJ", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::clamp(a0, a1, a2));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "clamp", args);
        return NULL;
      }

      static PyObject *t_FastMath_copySign(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::copySign(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KD", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::copySign(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jfloat result;

            if (!parseArgs(args, "FF", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::copySign(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::copySign(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "copySign", args);
        return NULL;
      }

      static PyObject *t_FastMath_cos(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::cos(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::cos(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "cos", args);
        return NULL;
      }

      static PyObject *t_FastMath_cosh(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::cosh(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::cosh(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "cosh", args);
        return NULL;
      }

      static PyObject *t_FastMath_decrementExact(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::decrementExact(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong result;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::decrementExact(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "decrementExact", args);
        return NULL;
      }

      static PyObject *t_FastMath_divideExact(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::divideExact(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::divideExact(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "divideExact", args);
        return NULL;
      }

      static PyObject *t_FastMath_exp(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::exp(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::exp(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "exp", args);
        return NULL;
      }

      static PyObject *t_FastMath_expm1(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::expm1(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::expm1(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "expm1", args);
        return NULL;
      }

      static PyObject *t_FastMath_floor(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::floor(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::floor(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "floor", args);
        return NULL;
      }

      static PyObject *t_FastMath_floorDiv(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::floorDiv(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jint a1;
            jlong result;

            if (!parseArgs(args, "JI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::floorDiv(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::floorDiv(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "floorDiv", args);
        return NULL;
      }

      static PyObject *t_FastMath_floorDivExact(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::floorDivExact(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::floorDivExact(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "floorDivExact", args);
        return NULL;
      }

      static PyObject *t_FastMath_floorMod(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::floorMod(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "JI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::floorMod(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::floorMod(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "floorMod", args);
        return NULL;
      }

      static PyObject *t_FastMath_fma(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble result;

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::fma(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jfloat a2;
            jfloat result;

            if (!parseArgs(args, "FFF", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::fma(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "fma", args);
        return NULL;
      }

      static PyObject *t_FastMath_getExponent(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jint result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::getExponent(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jfloat a0;
            jint result;

            if (!parseArgs(args, "F", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::getExponent(a0));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError(type, "getExponent", args);
        return NULL;
      }

      static PyObject *t_FastMath_hypot(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::hypot(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::hypot(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "hypot", args);
        return NULL;
      }

      static PyObject *t_FastMath_incrementExact(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::incrementExact(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong result;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::incrementExact(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "incrementExact", args);
        return NULL;
      }

      static PyObject *t_FastMath_log(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::log(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::log(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::log(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "log", args);
        return NULL;
      }

      static PyObject *t_FastMath_log10(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::log10(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::log10(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "log10", args);
        return NULL;
      }

      static PyObject *t_FastMath_log1p(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::log1p(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::log1p(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "log1p", args);
        return NULL;
      }

      static PyObject *t_FastMath_max(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::max$(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KD", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::max$(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jfloat result;

            if (!parseArgs(args, "FF", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::max$(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::max$(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::max$(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::max$(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "max", args);
        return NULL;
      }

      static PyObject *t_FastMath_min(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::min$(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jfloat result;

            if (!parseArgs(args, "FF", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::min$(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::min$(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::min$(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KD", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::min$(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::min$(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "min", args);
        return NULL;
      }

      static PyObject *t_FastMath_multiplyExact(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::multiplyExact(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jint a1;
            jlong result;

            if (!parseArgs(args, "JI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::multiplyExact(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::multiplyExact(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "multiplyExact", args);
        return NULL;
      }

      static PyObject *t_FastMath_multiplyFull(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        jlong result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::FastMath::multiplyFull(a0, a1));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        PyErr_SetArgsError(type, "multiplyFull", args);
        return NULL;
      }

      static PyObject *t_FastMath_multiplyHigh(PyTypeObject *type, PyObject *args)
      {
        jlong a0;
        jlong a1;
        jlong result;

        if (!parseArgs(args, "JJ", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::FastMath::multiplyHigh(a0, a1));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        PyErr_SetArgsError(type, "multiplyHigh", args);
        return NULL;
      }

      static PyObject *t_FastMath_negateExact(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::negateExact(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong result;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::negateExact(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "negateExact", args);
        return NULL;
      }

      static PyObject *t_FastMath_nextAfter(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::nextAfter(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jfloat a0;
            jdouble a1;
            jfloat result;

            if (!parseArgs(args, "FD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::nextAfter(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "nextAfter", args);
        return NULL;
      }

      static PyObject *t_FastMath_nextDown(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::nextDown(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jfloat a0;
            jfloat result;

            if (!parseArgs(args, "F", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::nextDown(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "nextDown", args);
        return NULL;
      }

      static PyObject *t_FastMath_nextUp(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::nextUp(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jfloat a0;
            jfloat result;

            if (!parseArgs(args, "F", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::nextUp(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "nextUp", args);
        return NULL;
      }

      static PyObject *t_FastMath_norm(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::FastMath::norm(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "norm", arg);
        return NULL;
      }

      static PyObject *t_FastMath_pow(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::pow(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KD", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::pow(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "DI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::pow(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KI", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::pow(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            jlong a1;
            jdouble result;

            if (!parseArgs(args, "DJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::pow(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::pow(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "pow", args);
        return NULL;
      }

      static PyObject *t_FastMath_random(PyTypeObject *type)
      {
        jdouble result;
        OBJ_CALL(result = ::org::hipparchus::util::FastMath::random());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_FastMath_rint(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::rint(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::rint(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "rint", args);
        return NULL;
      }

      static PyObject *t_FastMath_round(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jlong result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::round(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
          {
            jfloat a0;
            jint result;

            if (!parseArgs(args, "F", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::round(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jlong result;

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::round(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "round", args);
        return NULL;
      }

      static PyObject *t_FastMath_scalb(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "DI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::scalb(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jfloat a0;
            jint a1;
            jfloat result;

            if (!parseArgs(args, "FI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::scalb(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KI", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::scalb(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "scalb", args);
        return NULL;
      }

      static PyObject *t_FastMath_sign(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::FastMath::sign(a0));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "sign", arg);
        return NULL;
      }

      static PyObject *t_FastMath_signum(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::signum(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jfloat a0;
            jfloat result;

            if (!parseArgs(args, "F", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::signum(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "signum", args);
        return NULL;
      }

      static PyObject *t_FastMath_sin(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::sin(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::sin(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "sin", args);
        return NULL;
      }

      static PyObject *t_FastMath_sinCos(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            ::org::hipparchus::util::SinCos result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::sinCos(a0));
              return ::org::hipparchus::util::t_SinCos::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::util::FieldSinCos result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::sinCos(a0));
              return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "sinCos", args);
        return NULL;
      }

      static PyObject *t_FastMath_sinh(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::sinh(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::sinh(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "sinh", args);
        return NULL;
      }

      static PyObject *t_FastMath_sinhCosh(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            ::org::hipparchus::util::SinhCosh result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::sinhCosh(a0));
              return ::org::hipparchus::util::t_SinhCosh::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::sinhCosh(a0));
              return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "sinhCosh", args);
        return NULL;
      }

      static PyObject *t_FastMath_sqrt(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::sqrt(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::sqrt(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "sqrt", args);
        return NULL;
      }

      static PyObject *t_FastMath_subtractExact(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::subtractExact(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::subtractExact(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "subtractExact", args);
        return NULL;
      }

      static PyObject *t_FastMath_tan(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::tan(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::tan(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "tan", args);
        return NULL;
      }

      static PyObject *t_FastMath_tanh(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::tanh(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::tanh(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "tanh", args);
        return NULL;
      }

      static PyObject *t_FastMath_toDegrees(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::toDegrees(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::toDegrees(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "toDegrees", args);
        return NULL;
      }

      static PyObject *t_FastMath_toIntExact(PyTypeObject *type, PyObject *arg)
      {
        jlong a0;
        jint result;

        if (!parseArg(arg, "J", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::FastMath::toIntExact(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError(type, "toIntExact", arg);
        return NULL;
      }

      static PyObject *t_FastMath_toRadians(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::toRadians(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::toRadians(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "toRadians", args);
        return NULL;
      }

      static PyObject *t_FastMath_ulp(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ulp(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jfloat a0;
            jfloat result;

            if (!parseArgs(args, "F", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ulp(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::FastMath::ulp(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "ulp", args);
        return NULL;
      }

      static PyObject *t_FastMath_unsignedMultiplyHigh(PyTypeObject *type, PyObject *args)
      {
        jlong a0;
        jlong a1;
        jlong result;

        if (!parseArgs(args, "JJ", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::FastMath::unsignedMultiplyHigh(a0, a1));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        PyErr_SetArgsError(type, "unsignedMultiplyHigh", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/MullerSolver2.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *MullerSolver2::class$ = NULL;
        jmethodID *MullerSolver2::mids$ = NULL;
        bool MullerSolver2::live$ = false;

        jclass MullerSolver2::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/MullerSolver2");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_doSolve_9981f74b2d109da6] = env->getMethodID(cls, "doSolve", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MullerSolver2::MullerSolver2() : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        MullerSolver2::MullerSolver2(jdouble a0) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        MullerSolver2::MullerSolver2(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}
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
        static PyObject *t_MullerSolver2_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MullerSolver2_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MullerSolver2_of_(t_MullerSolver2 *self, PyObject *args);
        static int t_MullerSolver2_init_(t_MullerSolver2 *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MullerSolver2_get__parameters_(t_MullerSolver2 *self, void *data);
        static PyGetSetDef t_MullerSolver2__fields_[] = {
          DECLARE_GET_FIELD(t_MullerSolver2, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MullerSolver2__methods_[] = {
          DECLARE_METHOD(t_MullerSolver2, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MullerSolver2, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MullerSolver2, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MullerSolver2)[] = {
          { Py_tp_methods, t_MullerSolver2__methods_ },
          { Py_tp_init, (void *) t_MullerSolver2_init_ },
          { Py_tp_getset, t_MullerSolver2__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MullerSolver2)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(MullerSolver2, t_MullerSolver2, MullerSolver2);
        PyObject *t_MullerSolver2::wrap_Object(const MullerSolver2& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MullerSolver2::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MullerSolver2 *self = (t_MullerSolver2 *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_MullerSolver2::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MullerSolver2::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MullerSolver2 *self = (t_MullerSolver2 *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_MullerSolver2::install(PyObject *module)
        {
          installType(&PY_TYPE(MullerSolver2), &PY_TYPE_DEF(MullerSolver2), module, "MullerSolver2", 0);
        }

        void t_MullerSolver2::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MullerSolver2), "class_", make_descriptor(MullerSolver2::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MullerSolver2), "wrapfn_", make_descriptor(t_MullerSolver2::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MullerSolver2), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MullerSolver2_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MullerSolver2::initializeClass, 1)))
            return NULL;
          return t_MullerSolver2::wrap_Object(MullerSolver2(((t_MullerSolver2 *) arg)->object.this$));
        }
        static PyObject *t_MullerSolver2_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MullerSolver2::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MullerSolver2_of_(t_MullerSolver2 *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_MullerSolver2_init_(t_MullerSolver2 *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              MullerSolver2 object((jobject) NULL);

              INT_CALL(object = MullerSolver2());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              MullerSolver2 object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = MullerSolver2(a0));
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
              MullerSolver2 object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = MullerSolver2(a0, a1));
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
        static PyObject *t_MullerSolver2_get__parameters_(t_MullerSolver2 *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/leastsquares/PythonModelObserver.h"
#include "java/util/Map.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        ::java::lang::Class *PythonModelObserver::class$ = NULL;
        jmethodID *PythonModelObserver::mids$ = NULL;
        bool PythonModelObserver::live$ = false;

        jclass PythonModelObserver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/leastsquares/PythonModelObserver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_modelCalled_2163b5d3b4cfd2eb] = env->getMethodID(cls, "modelCalled", "([Lorg/orekit/orbits/Orbit;Ljava/util/Map;)V");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonModelObserver::PythonModelObserver() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonModelObserver::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonModelObserver::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonModelObserver::pythonExtension(jlong a0) const
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
      namespace leastsquares {
        static PyObject *t_PythonModelObserver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonModelObserver_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonModelObserver_init_(t_PythonModelObserver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonModelObserver_finalize(t_PythonModelObserver *self);
        static PyObject *t_PythonModelObserver_pythonExtension(t_PythonModelObserver *self, PyObject *args);
        static void JNICALL t_PythonModelObserver_modelCalled0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonModelObserver_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonModelObserver_get__self(t_PythonModelObserver *self, void *data);
        static PyGetSetDef t_PythonModelObserver__fields_[] = {
          DECLARE_GET_FIELD(t_PythonModelObserver, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonModelObserver__methods_[] = {
          DECLARE_METHOD(t_PythonModelObserver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonModelObserver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonModelObserver, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonModelObserver, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonModelObserver)[] = {
          { Py_tp_methods, t_PythonModelObserver__methods_ },
          { Py_tp_init, (void *) t_PythonModelObserver_init_ },
          { Py_tp_getset, t_PythonModelObserver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonModelObserver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonModelObserver, t_PythonModelObserver, PythonModelObserver);

        void t_PythonModelObserver::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonModelObserver), &PY_TYPE_DEF(PythonModelObserver), module, "PythonModelObserver", 1);
        }

        void t_PythonModelObserver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonModelObserver), "class_", make_descriptor(PythonModelObserver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonModelObserver), "wrapfn_", make_descriptor(t_PythonModelObserver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonModelObserver), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonModelObserver::initializeClass);
          JNINativeMethod methods[] = {
            { "modelCalled", "([Lorg/orekit/orbits/Orbit;Ljava/util/Map;)V", (void *) t_PythonModelObserver_modelCalled0 },
            { "pythonDecRef", "()V", (void *) t_PythonModelObserver_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonModelObserver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonModelObserver::initializeClass, 1)))
            return NULL;
          return t_PythonModelObserver::wrap_Object(PythonModelObserver(((t_PythonModelObserver *) arg)->object.this$));
        }
        static PyObject *t_PythonModelObserver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonModelObserver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonModelObserver_init_(t_PythonModelObserver *self, PyObject *args, PyObject *kwds)
        {
          PythonModelObserver object((jobject) NULL);

          INT_CALL(object = PythonModelObserver());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonModelObserver_finalize(t_PythonModelObserver *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonModelObserver_pythonExtension(t_PythonModelObserver *self, PyObject *args)
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

        static void JNICALL t_PythonModelObserver_modelCalled0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonModelObserver::mids$[PythonModelObserver::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = JArray<jobject>(a0).wrap(::org::orekit::orbits::t_Orbit::wrap_jobject);
          PyObject *o1 = ::java::util::t_Map::wrap_Object(::java::util::Map(a1));
          PyObject *result = PyObject_CallMethod(obj, "modelCalled", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonModelObserver_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonModelObserver::mids$[PythonModelObserver::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonModelObserver::mids$[PythonModelObserver::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonModelObserver_get__self(t_PythonModelObserver *self, void *data)
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
#include "org/hipparchus/random/AbstractWell.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *AbstractWell::class$ = NULL;
      jmethodID *AbstractWell::mids$ = NULL;
      bool AbstractWell::live$ = false;

      jclass AbstractWell::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/AbstractWell");

          mids$ = new jmethodID[max_mid];
          mids$[mid_setSeed_d43202153dd284f7] = env->getMethodID(cls, "setSeed", "([I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void AbstractWell::setSeed(const JArray< jint > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_d43202153dd284f7], a0.this$);
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
      static PyObject *t_AbstractWell_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractWell_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractWell_setSeed(t_AbstractWell *self, PyObject *args);
      static int t_AbstractWell_set__seed(t_AbstractWell *self, PyObject *arg, void *data);
      static PyGetSetDef t_AbstractWell__fields_[] = {
        DECLARE_SET_FIELD(t_AbstractWell, seed),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractWell__methods_[] = {
        DECLARE_METHOD(t_AbstractWell, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractWell, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractWell, setSeed, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractWell)[] = {
        { Py_tp_methods, t_AbstractWell__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractWell__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractWell)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::IntRandomGenerator),
        NULL
      };

      DEFINE_TYPE(AbstractWell, t_AbstractWell, AbstractWell);

      void t_AbstractWell::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractWell), &PY_TYPE_DEF(AbstractWell), module, "AbstractWell", 0);
      }

      void t_AbstractWell::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractWell), "class_", make_descriptor(AbstractWell::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractWell), "wrapfn_", make_descriptor(t_AbstractWell::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractWell), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractWell_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractWell::initializeClass, 1)))
          return NULL;
        return t_AbstractWell::wrap_Object(AbstractWell(((t_AbstractWell *) arg)->object.this$));
      }
      static PyObject *t_AbstractWell_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractWell::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractWell_setSeed(t_AbstractWell *self, PyObject *args)
      {
        JArray< jint > a0((jobject) NULL);

        if (!parseArgs(args, "[I", &a0))
        {
          OBJ_CALL(self->object.setSeed(a0));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(AbstractWell), (PyObject *) self, "setSeed", args, 2);
      }

      static int t_AbstractWell_set__seed(t_AbstractWell *self, PyObject *arg, void *data)
      {
        {
          JArray< jint > value((jobject) NULL);
          if (!parseArg(arg, "[I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "seed", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/GridAxis.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *GridAxis::class$ = NULL;
        jmethodID *GridAxis::mids$ = NULL;
        bool GridAxis::live$ = false;

        jclass GridAxis::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/GridAxis");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_53d8e8743d02f903] = env->getMethodID(cls, "<init>", "([DI)V");
            mids$[mid_getN_d6ab429752e7c267] = env->getMethodID(cls, "getN", "()I");
            mids$[mid_interpolationIndex_9e72cb20adb363fb] = env->getMethodID(cls, "interpolationIndex", "(D)I");
            mids$[mid_node_ce4c02d583456bc9] = env->getMethodID(cls, "node", "(I)D");
            mids$[mid_size_d6ab429752e7c267] = env->getMethodID(cls, "size", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GridAxis::GridAxis(const JArray< jdouble > & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_53d8e8743d02f903, a0.this$, a1)) {}

        jint GridAxis::getN() const
        {
          return env->callIntMethod(this$, mids$[mid_getN_d6ab429752e7c267]);
        }

        jint GridAxis::interpolationIndex(jdouble a0) const
        {
          return env->callIntMethod(this$, mids$[mid_interpolationIndex_9e72cb20adb363fb], a0);
        }

        jdouble GridAxis::node(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_node_ce4c02d583456bc9], a0);
        }

        jint GridAxis::size() const
        {
          return env->callIntMethod(this$, mids$[mid_size_d6ab429752e7c267]);
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
        static PyObject *t_GridAxis_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GridAxis_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GridAxis_init_(t_GridAxis *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GridAxis_getN(t_GridAxis *self);
        static PyObject *t_GridAxis_interpolationIndex(t_GridAxis *self, PyObject *arg);
        static PyObject *t_GridAxis_node(t_GridAxis *self, PyObject *arg);
        static PyObject *t_GridAxis_size(t_GridAxis *self);
        static PyObject *t_GridAxis_get__n(t_GridAxis *self, void *data);
        static PyGetSetDef t_GridAxis__fields_[] = {
          DECLARE_GET_FIELD(t_GridAxis, n),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GridAxis__methods_[] = {
          DECLARE_METHOD(t_GridAxis, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GridAxis, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GridAxis, getN, METH_NOARGS),
          DECLARE_METHOD(t_GridAxis, interpolationIndex, METH_O),
          DECLARE_METHOD(t_GridAxis, node, METH_O),
          DECLARE_METHOD(t_GridAxis, size, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GridAxis)[] = {
          { Py_tp_methods, t_GridAxis__methods_ },
          { Py_tp_init, (void *) t_GridAxis_init_ },
          { Py_tp_getset, t_GridAxis__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GridAxis)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GridAxis, t_GridAxis, GridAxis);

        void t_GridAxis::install(PyObject *module)
        {
          installType(&PY_TYPE(GridAxis), &PY_TYPE_DEF(GridAxis), module, "GridAxis", 0);
        }

        void t_GridAxis::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GridAxis), "class_", make_descriptor(GridAxis::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GridAxis), "wrapfn_", make_descriptor(t_GridAxis::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GridAxis), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GridAxis_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GridAxis::initializeClass, 1)))
            return NULL;
          return t_GridAxis::wrap_Object(GridAxis(((t_GridAxis *) arg)->object.this$));
        }
        static PyObject *t_GridAxis_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GridAxis::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GridAxis_init_(t_GridAxis *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          GridAxis object((jobject) NULL);

          if (!parseArgs(args, "[DI", &a0, &a1))
          {
            INT_CALL(object = GridAxis(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GridAxis_getN(t_GridAxis *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_GridAxis_interpolationIndex(t_GridAxis *self, PyObject *arg)
        {
          jdouble a0;
          jint result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.interpolationIndex(a0));
            return PyLong_FromLong((long) result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolationIndex", arg);
          return NULL;
        }

        static PyObject *t_GridAxis_node(t_GridAxis *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.node(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "node", arg);
          return NULL;
        }

        static PyObject *t_GridAxis_size(t_GridAxis *self)
        {
          jint result;
          OBJ_CALL(result = self->object.size());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_GridAxis_get__n(t_GridAxis *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/TrackingCoordinates.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TrackingCoordinates::class$ = NULL;
      jmethodID *TrackingCoordinates::mids$ = NULL;
      bool TrackingCoordinates::live$ = false;

      jclass TrackingCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TrackingCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_bd28dc6055dc5bbd] = env->getMethodID(cls, "<init>", "(DDD)V");
          mids$[mid_getAzimuth_9981f74b2d109da6] = env->getMethodID(cls, "getAzimuth", "()D");
          mids$[mid_getElevation_9981f74b2d109da6] = env->getMethodID(cls, "getElevation", "()D");
          mids$[mid_getRange_9981f74b2d109da6] = env->getMethodID(cls, "getRange", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TrackingCoordinates::TrackingCoordinates(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bd28dc6055dc5bbd, a0, a1, a2)) {}

      jdouble TrackingCoordinates::getAzimuth() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAzimuth_9981f74b2d109da6]);
      }

      jdouble TrackingCoordinates::getElevation() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getElevation_9981f74b2d109da6]);
      }

      jdouble TrackingCoordinates::getRange() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRange_9981f74b2d109da6]);
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
      static PyObject *t_TrackingCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TrackingCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TrackingCoordinates_init_(t_TrackingCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TrackingCoordinates_getAzimuth(t_TrackingCoordinates *self);
      static PyObject *t_TrackingCoordinates_getElevation(t_TrackingCoordinates *self);
      static PyObject *t_TrackingCoordinates_getRange(t_TrackingCoordinates *self);
      static PyObject *t_TrackingCoordinates_get__azimuth(t_TrackingCoordinates *self, void *data);
      static PyObject *t_TrackingCoordinates_get__elevation(t_TrackingCoordinates *self, void *data);
      static PyObject *t_TrackingCoordinates_get__range(t_TrackingCoordinates *self, void *data);
      static PyGetSetDef t_TrackingCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_TrackingCoordinates, azimuth),
        DECLARE_GET_FIELD(t_TrackingCoordinates, elevation),
        DECLARE_GET_FIELD(t_TrackingCoordinates, range),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TrackingCoordinates__methods_[] = {
        DECLARE_METHOD(t_TrackingCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TrackingCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TrackingCoordinates, getAzimuth, METH_NOARGS),
        DECLARE_METHOD(t_TrackingCoordinates, getElevation, METH_NOARGS),
        DECLARE_METHOD(t_TrackingCoordinates, getRange, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TrackingCoordinates)[] = {
        { Py_tp_methods, t_TrackingCoordinates__methods_ },
        { Py_tp_init, (void *) t_TrackingCoordinates_init_ },
        { Py_tp_getset, t_TrackingCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TrackingCoordinates)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TrackingCoordinates, t_TrackingCoordinates, TrackingCoordinates);

      void t_TrackingCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(TrackingCoordinates), &PY_TYPE_DEF(TrackingCoordinates), module, "TrackingCoordinates", 0);
      }

      void t_TrackingCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TrackingCoordinates), "class_", make_descriptor(TrackingCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TrackingCoordinates), "wrapfn_", make_descriptor(t_TrackingCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TrackingCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TrackingCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TrackingCoordinates::initializeClass, 1)))
          return NULL;
        return t_TrackingCoordinates::wrap_Object(TrackingCoordinates(((t_TrackingCoordinates *) arg)->object.this$));
      }
      static PyObject *t_TrackingCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TrackingCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TrackingCoordinates_init_(t_TrackingCoordinates *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        TrackingCoordinates object((jobject) NULL);

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          INT_CALL(object = TrackingCoordinates(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_TrackingCoordinates_getAzimuth(t_TrackingCoordinates *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAzimuth());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_TrackingCoordinates_getElevation(t_TrackingCoordinates *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getElevation());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_TrackingCoordinates_getRange(t_TrackingCoordinates *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getRange());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_TrackingCoordinates_get__azimuth(t_TrackingCoordinates *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAzimuth());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_TrackingCoordinates_get__elevation(t_TrackingCoordinates *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getElevation());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_TrackingCoordinates_get__range(t_TrackingCoordinates *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getRange());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadata.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *TdmMetadataKey::class$ = NULL;
            jmethodID *TdmMetadataKey::mids$ = NULL;
            bool TdmMetadataKey::live$ = false;
            TdmMetadataKey *TdmMetadataKey::ANGLE_TYPE = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTIONS_APPLIED = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_ABERRATION_DIURNAL = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_ABERRATION_YEARLY = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_ANGLE_1 = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_ANGLE_2 = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_DOPPLER = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_MAG = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_RANGE = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_RCS = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_RECEIVE = NULL;
            TdmMetadataKey *TdmMetadataKey::CORRECTION_TRANSMIT = NULL;
            TdmMetadataKey *TdmMetadataKey::DATA_QUALITY = NULL;
            TdmMetadataKey *TdmMetadataKey::DATA_TYPES = NULL;
            TdmMetadataKey *TdmMetadataKey::DOPPLER_COUNT_BIAS = NULL;
            TdmMetadataKey *TdmMetadataKey::DOPPLER_COUNT_ROLLOVER = NULL;
            TdmMetadataKey *TdmMetadataKey::DOPPLER_COUNT_SCALE = NULL;
            TdmMetadataKey *TdmMetadataKey::EPHEMERIS_NAME_1 = NULL;
            TdmMetadataKey *TdmMetadataKey::EPHEMERIS_NAME_2 = NULL;
            TdmMetadataKey *TdmMetadataKey::EPHEMERIS_NAME_3 = NULL;
            TdmMetadataKey *TdmMetadataKey::EPHEMERIS_NAME_4 = NULL;
            TdmMetadataKey *TdmMetadataKey::EPHEMERIS_NAME_5 = NULL;
            TdmMetadataKey *TdmMetadataKey::FREQ_OFFSET = NULL;
            TdmMetadataKey *TdmMetadataKey::INTEGRATION_INTERVAL = NULL;
            TdmMetadataKey *TdmMetadataKey::INTEGRATION_REF = NULL;
            TdmMetadataKey *TdmMetadataKey::INTERPOLATION = NULL;
            TdmMetadataKey *TdmMetadataKey::INTERPOLATION_DEGREE = NULL;
            TdmMetadataKey *TdmMetadataKey::MODE = NULL;
            TdmMetadataKey *TdmMetadataKey::PARTICIPANT_1 = NULL;
            TdmMetadataKey *TdmMetadataKey::PARTICIPANT_2 = NULL;
            TdmMetadataKey *TdmMetadataKey::PARTICIPANT_3 = NULL;
            TdmMetadataKey *TdmMetadataKey::PARTICIPANT_4 = NULL;
            TdmMetadataKey *TdmMetadataKey::PARTICIPANT_5 = NULL;
            TdmMetadataKey *TdmMetadataKey::PATH = NULL;
            TdmMetadataKey *TdmMetadataKey::PATH_1 = NULL;
            TdmMetadataKey *TdmMetadataKey::PATH_2 = NULL;
            TdmMetadataKey *TdmMetadataKey::RANGE_MODE = NULL;
            TdmMetadataKey *TdmMetadataKey::RANGE_MODULUS = NULL;
            TdmMetadataKey *TdmMetadataKey::RANGE_UNITS = NULL;
            TdmMetadataKey *TdmMetadataKey::RECEIVE_BAND = NULL;
            TdmMetadataKey *TdmMetadataKey::RECEIVE_DELAY_1 = NULL;
            TdmMetadataKey *TdmMetadataKey::RECEIVE_DELAY_2 = NULL;
            TdmMetadataKey *TdmMetadataKey::RECEIVE_DELAY_3 = NULL;
            TdmMetadataKey *TdmMetadataKey::RECEIVE_DELAY_4 = NULL;
            TdmMetadataKey *TdmMetadataKey::RECEIVE_DELAY_5 = NULL;
            TdmMetadataKey *TdmMetadataKey::REFERENCE_FRAME = NULL;
            TdmMetadataKey *TdmMetadataKey::START_TIME = NULL;
            TdmMetadataKey *TdmMetadataKey::STOP_TIME = NULL;
            TdmMetadataKey *TdmMetadataKey::TIMETAG_REF = NULL;
            TdmMetadataKey *TdmMetadataKey::TRACK_ID = NULL;
            TdmMetadataKey *TdmMetadataKey::TRANSMIT_BAND = NULL;
            TdmMetadataKey *TdmMetadataKey::TRANSMIT_DELAY_1 = NULL;
            TdmMetadataKey *TdmMetadataKey::TRANSMIT_DELAY_2 = NULL;
            TdmMetadataKey *TdmMetadataKey::TRANSMIT_DELAY_3 = NULL;
            TdmMetadataKey *TdmMetadataKey::TRANSMIT_DELAY_4 = NULL;
            TdmMetadataKey *TdmMetadataKey::TRANSMIT_DELAY_5 = NULL;
            TdmMetadataKey *TdmMetadataKey::TURNAROUND_DENOMINATOR = NULL;
            TdmMetadataKey *TdmMetadataKey::TURNAROUND_NUMERATOR = NULL;

            jclass TdmMetadataKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/TdmMetadataKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_c32d15e2067cc69a] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadata;)Z");
                mids$[mid_valueOf_a42b3617b95c685c] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;");
                mids$[mid_values_db8e54f3e694e2e5] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                ANGLE_TYPE = new TdmMetadataKey(env->getStaticObjectField(cls, "ANGLE_TYPE", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTIONS_APPLIED = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTIONS_APPLIED", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_ABERRATION_DIURNAL = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_ABERRATION_DIURNAL", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_ABERRATION_YEARLY = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_ABERRATION_YEARLY", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_ANGLE_1 = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_ANGLE_1", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_ANGLE_2 = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_ANGLE_2", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_DOPPLER = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_DOPPLER", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_MAG = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_MAG", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_RANGE = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_RANGE", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_RCS = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_RCS", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_RECEIVE = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_RECEIVE", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                CORRECTION_TRANSMIT = new TdmMetadataKey(env->getStaticObjectField(cls, "CORRECTION_TRANSMIT", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                DATA_QUALITY = new TdmMetadataKey(env->getStaticObjectField(cls, "DATA_QUALITY", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                DATA_TYPES = new TdmMetadataKey(env->getStaticObjectField(cls, "DATA_TYPES", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                DOPPLER_COUNT_BIAS = new TdmMetadataKey(env->getStaticObjectField(cls, "DOPPLER_COUNT_BIAS", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                DOPPLER_COUNT_ROLLOVER = new TdmMetadataKey(env->getStaticObjectField(cls, "DOPPLER_COUNT_ROLLOVER", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                DOPPLER_COUNT_SCALE = new TdmMetadataKey(env->getStaticObjectField(cls, "DOPPLER_COUNT_SCALE", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                EPHEMERIS_NAME_1 = new TdmMetadataKey(env->getStaticObjectField(cls, "EPHEMERIS_NAME_1", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                EPHEMERIS_NAME_2 = new TdmMetadataKey(env->getStaticObjectField(cls, "EPHEMERIS_NAME_2", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                EPHEMERIS_NAME_3 = new TdmMetadataKey(env->getStaticObjectField(cls, "EPHEMERIS_NAME_3", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                EPHEMERIS_NAME_4 = new TdmMetadataKey(env->getStaticObjectField(cls, "EPHEMERIS_NAME_4", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                EPHEMERIS_NAME_5 = new TdmMetadataKey(env->getStaticObjectField(cls, "EPHEMERIS_NAME_5", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                FREQ_OFFSET = new TdmMetadataKey(env->getStaticObjectField(cls, "FREQ_OFFSET", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                INTEGRATION_INTERVAL = new TdmMetadataKey(env->getStaticObjectField(cls, "INTEGRATION_INTERVAL", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                INTEGRATION_REF = new TdmMetadataKey(env->getStaticObjectField(cls, "INTEGRATION_REF", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                INTERPOLATION = new TdmMetadataKey(env->getStaticObjectField(cls, "INTERPOLATION", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                INTERPOLATION_DEGREE = new TdmMetadataKey(env->getStaticObjectField(cls, "INTERPOLATION_DEGREE", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                MODE = new TdmMetadataKey(env->getStaticObjectField(cls, "MODE", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                PARTICIPANT_1 = new TdmMetadataKey(env->getStaticObjectField(cls, "PARTICIPANT_1", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                PARTICIPANT_2 = new TdmMetadataKey(env->getStaticObjectField(cls, "PARTICIPANT_2", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                PARTICIPANT_3 = new TdmMetadataKey(env->getStaticObjectField(cls, "PARTICIPANT_3", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                PARTICIPANT_4 = new TdmMetadataKey(env->getStaticObjectField(cls, "PARTICIPANT_4", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                PARTICIPANT_5 = new TdmMetadataKey(env->getStaticObjectField(cls, "PARTICIPANT_5", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                PATH = new TdmMetadataKey(env->getStaticObjectField(cls, "PATH", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                PATH_1 = new TdmMetadataKey(env->getStaticObjectField(cls, "PATH_1", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                PATH_2 = new TdmMetadataKey(env->getStaticObjectField(cls, "PATH_2", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                RANGE_MODE = new TdmMetadataKey(env->getStaticObjectField(cls, "RANGE_MODE", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                RANGE_MODULUS = new TdmMetadataKey(env->getStaticObjectField(cls, "RANGE_MODULUS", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                RANGE_UNITS = new TdmMetadataKey(env->getStaticObjectField(cls, "RANGE_UNITS", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                RECEIVE_BAND = new TdmMetadataKey(env->getStaticObjectField(cls, "RECEIVE_BAND", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                RECEIVE_DELAY_1 = new TdmMetadataKey(env->getStaticObjectField(cls, "RECEIVE_DELAY_1", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                RECEIVE_DELAY_2 = new TdmMetadataKey(env->getStaticObjectField(cls, "RECEIVE_DELAY_2", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                RECEIVE_DELAY_3 = new TdmMetadataKey(env->getStaticObjectField(cls, "RECEIVE_DELAY_3", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                RECEIVE_DELAY_4 = new TdmMetadataKey(env->getStaticObjectField(cls, "RECEIVE_DELAY_4", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                RECEIVE_DELAY_5 = new TdmMetadataKey(env->getStaticObjectField(cls, "RECEIVE_DELAY_5", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                REFERENCE_FRAME = new TdmMetadataKey(env->getStaticObjectField(cls, "REFERENCE_FRAME", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                START_TIME = new TdmMetadataKey(env->getStaticObjectField(cls, "START_TIME", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                STOP_TIME = new TdmMetadataKey(env->getStaticObjectField(cls, "STOP_TIME", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TIMETAG_REF = new TdmMetadataKey(env->getStaticObjectField(cls, "TIMETAG_REF", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TRACK_ID = new TdmMetadataKey(env->getStaticObjectField(cls, "TRACK_ID", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TRANSMIT_BAND = new TdmMetadataKey(env->getStaticObjectField(cls, "TRANSMIT_BAND", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TRANSMIT_DELAY_1 = new TdmMetadataKey(env->getStaticObjectField(cls, "TRANSMIT_DELAY_1", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TRANSMIT_DELAY_2 = new TdmMetadataKey(env->getStaticObjectField(cls, "TRANSMIT_DELAY_2", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TRANSMIT_DELAY_3 = new TdmMetadataKey(env->getStaticObjectField(cls, "TRANSMIT_DELAY_3", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TRANSMIT_DELAY_4 = new TdmMetadataKey(env->getStaticObjectField(cls, "TRANSMIT_DELAY_4", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TRANSMIT_DELAY_5 = new TdmMetadataKey(env->getStaticObjectField(cls, "TRANSMIT_DELAY_5", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TURNAROUND_DENOMINATOR = new TdmMetadataKey(env->getStaticObjectField(cls, "TURNAROUND_DENOMINATOR", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                TURNAROUND_NUMERATOR = new TdmMetadataKey(env->getStaticObjectField(cls, "TURNAROUND_NUMERATOR", "Lorg/orekit/files/ccsds/ndm/tdm/TdmMetadataKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean TdmMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_c32d15e2067cc69a], a0.this$, a1.this$, a2.this$);
            }

            TdmMetadataKey TdmMetadataKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return TdmMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_a42b3617b95c685c], a0.this$));
            }

            JArray< TdmMetadataKey > TdmMetadataKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< TdmMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_db8e54f3e694e2e5]));
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
            static PyObject *t_TdmMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmMetadataKey_of_(t_TdmMetadataKey *self, PyObject *args);
            static PyObject *t_TdmMetadataKey_process(t_TdmMetadataKey *self, PyObject *args);
            static PyObject *t_TdmMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_TdmMetadataKey_values(PyTypeObject *type);
            static PyObject *t_TdmMetadataKey_get__parameters_(t_TdmMetadataKey *self, void *data);
            static PyGetSetDef t_TdmMetadataKey__fields_[] = {
              DECLARE_GET_FIELD(t_TdmMetadataKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_TdmMetadataKey__methods_[] = {
              DECLARE_METHOD(t_TdmMetadataKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmMetadataKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmMetadataKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_TdmMetadataKey, process, METH_VARARGS),
              DECLARE_METHOD(t_TdmMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_TdmMetadataKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TdmMetadataKey)[] = {
              { Py_tp_methods, t_TdmMetadataKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_TdmMetadataKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TdmMetadataKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(TdmMetadataKey, t_TdmMetadataKey, TdmMetadataKey);
            PyObject *t_TdmMetadataKey::wrap_Object(const TdmMetadataKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TdmMetadataKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TdmMetadataKey *self = (t_TdmMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_TdmMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TdmMetadataKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TdmMetadataKey *self = (t_TdmMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_TdmMetadataKey::install(PyObject *module)
            {
              installType(&PY_TYPE(TdmMetadataKey), &PY_TYPE_DEF(TdmMetadataKey), module, "TdmMetadataKey", 0);
            }

            void t_TdmMetadataKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "class_", make_descriptor(TdmMetadataKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "wrapfn_", make_descriptor(t_TdmMetadataKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(TdmMetadataKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "ANGLE_TYPE", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::ANGLE_TYPE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTIONS_APPLIED", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTIONS_APPLIED)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_ABERRATION_DIURNAL", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_ABERRATION_DIURNAL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_ABERRATION_YEARLY", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_ABERRATION_YEARLY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_ANGLE_1", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_ANGLE_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_ANGLE_2", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_ANGLE_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_DOPPLER", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_DOPPLER)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_MAG", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_MAG)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_RANGE", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_RANGE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_RCS", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_RCS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_RECEIVE", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_RECEIVE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "CORRECTION_TRANSMIT", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::CORRECTION_TRANSMIT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "DATA_QUALITY", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::DATA_QUALITY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "DATA_TYPES", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::DATA_TYPES)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "DOPPLER_COUNT_BIAS", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::DOPPLER_COUNT_BIAS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "DOPPLER_COUNT_ROLLOVER", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::DOPPLER_COUNT_ROLLOVER)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "DOPPLER_COUNT_SCALE", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::DOPPLER_COUNT_SCALE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "EPHEMERIS_NAME_1", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::EPHEMERIS_NAME_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "EPHEMERIS_NAME_2", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::EPHEMERIS_NAME_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "EPHEMERIS_NAME_3", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::EPHEMERIS_NAME_3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "EPHEMERIS_NAME_4", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::EPHEMERIS_NAME_4)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "EPHEMERIS_NAME_5", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::EPHEMERIS_NAME_5)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "FREQ_OFFSET", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::FREQ_OFFSET)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "INTEGRATION_INTERVAL", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::INTEGRATION_INTERVAL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "INTEGRATION_REF", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::INTEGRATION_REF)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "INTERPOLATION", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::INTERPOLATION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "INTERPOLATION_DEGREE", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::INTERPOLATION_DEGREE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "MODE", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::MODE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "PARTICIPANT_1", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::PARTICIPANT_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "PARTICIPANT_2", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::PARTICIPANT_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "PARTICIPANT_3", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::PARTICIPANT_3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "PARTICIPANT_4", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::PARTICIPANT_4)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "PARTICIPANT_5", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::PARTICIPANT_5)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "PATH", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::PATH)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "PATH_1", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::PATH_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "PATH_2", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::PATH_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "RANGE_MODE", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::RANGE_MODE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "RANGE_MODULUS", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::RANGE_MODULUS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "RANGE_UNITS", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::RANGE_UNITS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "RECEIVE_BAND", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::RECEIVE_BAND)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "RECEIVE_DELAY_1", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::RECEIVE_DELAY_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "RECEIVE_DELAY_2", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::RECEIVE_DELAY_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "RECEIVE_DELAY_3", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::RECEIVE_DELAY_3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "RECEIVE_DELAY_4", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::RECEIVE_DELAY_4)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "RECEIVE_DELAY_5", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::RECEIVE_DELAY_5)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "REFERENCE_FRAME", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::REFERENCE_FRAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "START_TIME", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::START_TIME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "STOP_TIME", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::STOP_TIME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TIMETAG_REF", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TIMETAG_REF)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TRACK_ID", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TRACK_ID)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TRANSMIT_BAND", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TRANSMIT_BAND)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TRANSMIT_DELAY_1", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TRANSMIT_DELAY_1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TRANSMIT_DELAY_2", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TRANSMIT_DELAY_2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TRANSMIT_DELAY_3", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TRANSMIT_DELAY_3)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TRANSMIT_DELAY_4", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TRANSMIT_DELAY_4)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TRANSMIT_DELAY_5", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TRANSMIT_DELAY_5)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TURNAROUND_DENOMINATOR", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TURNAROUND_DENOMINATOR)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmMetadataKey), "TURNAROUND_NUMERATOR", make_descriptor(t_TdmMetadataKey::wrap_Object(*TdmMetadataKey::TURNAROUND_NUMERATOR)));
            }

            static PyObject *t_TdmMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TdmMetadataKey::initializeClass, 1)))
                return NULL;
              return t_TdmMetadataKey::wrap_Object(TdmMetadataKey(((t_TdmMetadataKey *) arg)->object.this$));
            }
            static PyObject *t_TdmMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TdmMetadataKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_TdmMetadataKey_of_(t_TdmMetadataKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_TdmMetadataKey_process(t_TdmMetadataKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_TdmMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              TdmMetadataKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::TdmMetadataKey::valueOf(a0));
                return t_TdmMetadataKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_TdmMetadataKey_values(PyTypeObject *type)
            {
              JArray< TdmMetadataKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::TdmMetadataKey::values());
              return JArray<jobject>(result.this$).wrap(t_TdmMetadataKey::wrap_jobject);
            }
            static PyObject *t_TdmMetadataKey_get__parameters_(t_TdmMetadataKey *self, void *data)
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
#include "org/orekit/forces/gravity/potential/GravityFieldFactory.h"
#include "java/util/List.h"
#include "org/orekit/forces/gravity/potential/LazyLoadedGravityFields.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients.h"
#include "org/orekit/forces/gravity/potential/OceanTidesReader.h"
#include "org/orekit/forces/gravity/potential/PotentialCoefficientsReader.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "org/orekit/forces/gravity/potential/OceanTidesWave.h"
#include "java/lang/String.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *GravityFieldFactory::class$ = NULL;
          jmethodID *GravityFieldFactory::mids$ = NULL;
          bool GravityFieldFactory::live$ = false;
          ::java::lang::String *GravityFieldFactory::EGM_FILENAME = NULL;
          ::java::lang::String *GravityFieldFactory::FES_CHAT_EPSILON_FILENAME = NULL;
          ::java::lang::String *GravityFieldFactory::FES_CNM_SNM_FILENAME = NULL;
          ::java::lang::String *GravityFieldFactory::FES_HF_FILENAME = NULL;
          ::java::lang::String *GravityFieldFactory::GRGS_FILENAME = NULL;
          ::java::lang::String *GravityFieldFactory::ICGEM_FILENAME = NULL;
          ::java::lang::String *GravityFieldFactory::SHM_FILENAME = NULL;

          jclass GravityFieldFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/GravityFieldFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_addDefaultOceanTidesReaders_ff7cb6c242604316] = env->getStaticMethodID(cls, "addDefaultOceanTidesReaders", "()V");
              mids$[mid_addDefaultPotentialCoefficientsReaders_ff7cb6c242604316] = env->getStaticMethodID(cls, "addDefaultPotentialCoefficientsReaders", "()V");
              mids$[mid_addOceanTidesReader_ee0d26b4bbabbfbf] = env->getStaticMethodID(cls, "addOceanTidesReader", "(Lorg/orekit/forces/gravity/potential/OceanTidesReader;)V");
              mids$[mid_addPotentialCoefficientsReader_71869fcd17a69cc7] = env->getStaticMethodID(cls, "addPotentialCoefficientsReader", "(Lorg/orekit/forces/gravity/potential/PotentialCoefficientsReader;)V");
              mids$[mid_clearOceanTidesReaders_ff7cb6c242604316] = env->getStaticMethodID(cls, "clearOceanTidesReaders", "()V");
              mids$[mid_clearPotentialCoefficientsReaders_ff7cb6c242604316] = env->getStaticMethodID(cls, "clearPotentialCoefficientsReaders", "()V");
              mids$[mid_configureOceanLoadDeformationCoefficients_c836e871c1d3958a] = env->getStaticMethodID(cls, "configureOceanLoadDeformationCoefficients", "(Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;)V");
              mids$[mid_getConstantNormalizedProvider_bb5918e0884e4ae2] = env->getStaticMethodID(cls, "getConstantNormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getConstantUnnormalizedProvider_c4894db538d805f8] = env->getStaticMethodID(cls, "getConstantUnnormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
              mids$[mid_getGravityFields_0b533a519307756d] = env->getStaticMethodID(cls, "getGravityFields", "()Lorg/orekit/forces/gravity/potential/LazyLoadedGravityFields;");
              mids$[mid_getNormalizedProvider_c4c73ebc544a3972] = env->getStaticMethodID(cls, "getNormalizedProvider", "(Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getNormalizedProvider_47519026ac46bd97] = env->getStaticMethodID(cls, "getNormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getNormalizedProvider_b6f9da14e9666c56] = env->getStaticMethodID(cls, "getNormalizedProvider", "(DDLorg/orekit/forces/gravity/potential/TideSystem;[[D[[D)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getOceanLoadDeformationCoefficients_73c3e0c37fcdfda8] = env->getStaticMethodID(cls, "getOceanLoadDeformationCoefficients", "()Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;");
              mids$[mid_getOceanTidesWaves_4e3c0741dd4bb632] = env->getStaticMethodID(cls, "getOceanTidesWaves", "(II)Ljava/util/List;");
              mids$[mid_getUnnormalizationFactors_257ef40acf1ad25f] = env->getStaticMethodID(cls, "getUnnormalizationFactors", "(II)[[D");
              mids$[mid_getUnnormalizedProvider_0c90473246f89be5] = env->getStaticMethodID(cls, "getUnnormalizedProvider", "(Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
              mids$[mid_getUnnormalizedProvider_bc2bae0b3b31fcf0] = env->getStaticMethodID(cls, "getUnnormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
              mids$[mid_getUnnormalizedProvider_e19081210481e857] = env->getStaticMethodID(cls, "getUnnormalizedProvider", "(DDLorg/orekit/forces/gravity/potential/TideSystem;[[D[[D)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
              mids$[mid_readGravityField_d70c66dab04a3d84] = env->getStaticMethodID(cls, "readGravityField", "(II)Lorg/orekit/forces/gravity/potential/PotentialCoefficientsReader;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              EGM_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "EGM_FILENAME", "Ljava/lang/String;"));
              FES_CHAT_EPSILON_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "FES_CHAT_EPSILON_FILENAME", "Ljava/lang/String;"));
              FES_CNM_SNM_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "FES_CNM_SNM_FILENAME", "Ljava/lang/String;"));
              FES_HF_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "FES_HF_FILENAME", "Ljava/lang/String;"));
              GRGS_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "GRGS_FILENAME", "Ljava/lang/String;"));
              ICGEM_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "ICGEM_FILENAME", "Ljava/lang/String;"));
              SHM_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "SHM_FILENAME", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void GravityFieldFactory::addDefaultOceanTidesReaders()
          {
            jclass cls = env->getClass(initializeClass);
            env->callStaticVoidMethod(cls, mids$[mid_addDefaultOceanTidesReaders_ff7cb6c242604316]);
          }

          void GravityFieldFactory::addDefaultPotentialCoefficientsReaders()
          {
            jclass cls = env->getClass(initializeClass);
            env->callStaticVoidMethod(cls, mids$[mid_addDefaultPotentialCoefficientsReaders_ff7cb6c242604316]);
          }

          void GravityFieldFactory::addOceanTidesReader(const ::org::orekit::forces::gravity::potential::OceanTidesReader & a0)
          {
            jclass cls = env->getClass(initializeClass);
            env->callStaticVoidMethod(cls, mids$[mid_addOceanTidesReader_ee0d26b4bbabbfbf], a0.this$);
          }

          void GravityFieldFactory::addPotentialCoefficientsReader(const ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader & a0)
          {
            jclass cls = env->getClass(initializeClass);
            env->callStaticVoidMethod(cls, mids$[mid_addPotentialCoefficientsReader_71869fcd17a69cc7], a0.this$);
          }

          void GravityFieldFactory::clearOceanTidesReaders()
          {
            jclass cls = env->getClass(initializeClass);
            env->callStaticVoidMethod(cls, mids$[mid_clearOceanTidesReaders_ff7cb6c242604316]);
          }

          void GravityFieldFactory::clearPotentialCoefficientsReaders()
          {
            jclass cls = env->getClass(initializeClass);
            env->callStaticVoidMethod(cls, mids$[mid_clearPotentialCoefficientsReaders_ff7cb6c242604316]);
          }

          void GravityFieldFactory::configureOceanLoadDeformationCoefficients(const ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients & a0)
          {
            jclass cls = env->getClass(initializeClass);
            env->callStaticVoidMethod(cls, mids$[mid_configureOceanLoadDeformationCoefficients_c836e871c1d3958a], a0.this$);
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider GravityFieldFactory::getConstantNormalizedProvider(jint a0, jint a1, const ::org::orekit::time::AbsoluteDate & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider(env->callStaticObjectMethod(cls, mids$[mid_getConstantNormalizedProvider_bb5918e0884e4ae2], a0, a1, a2.this$));
          }

          ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider GravityFieldFactory::getConstantUnnormalizedProvider(jint a0, jint a1, const ::org::orekit::time::AbsoluteDate & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider(env->callStaticObjectMethod(cls, mids$[mid_getConstantUnnormalizedProvider_c4894db538d805f8], a0, a1, a2.this$));
          }

          ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields GravityFieldFactory::getGravityFields()
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields(env->callStaticObjectMethod(cls, mids$[mid_getGravityFields_0b533a519307756d]));
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider GravityFieldFactory::getNormalizedProvider(const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider(env->callStaticObjectMethod(cls, mids$[mid_getNormalizedProvider_c4c73ebc544a3972], a0.this$));
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider GravityFieldFactory::getNormalizedProvider(jint a0, jint a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider(env->callStaticObjectMethod(cls, mids$[mid_getNormalizedProvider_47519026ac46bd97], a0, a1));
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider GravityFieldFactory::getNormalizedProvider(jdouble a0, jdouble a1, const ::org::orekit::forces::gravity::potential::TideSystem & a2, const JArray< JArray< jdouble > > & a3, const JArray< JArray< jdouble > > & a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider(env->callStaticObjectMethod(cls, mids$[mid_getNormalizedProvider_b6f9da14e9666c56], a0, a1, a2.this$, a3.this$, a4.this$));
          }

          ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients GravityFieldFactory::getOceanLoadDeformationCoefficients()
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients(env->callStaticObjectMethod(cls, mids$[mid_getOceanLoadDeformationCoefficients_73c3e0c37fcdfda8]));
          }

          ::java::util::List GravityFieldFactory::getOceanTidesWaves(jint a0, jint a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_getOceanTidesWaves_4e3c0741dd4bb632], a0, a1));
          }

          JArray< JArray< jdouble > > GravityFieldFactory::getUnnormalizationFactors(jint a0, jint a1)
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_getUnnormalizationFactors_257ef40acf1ad25f], a0, a1));
          }

          ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider GravityFieldFactory::getUnnormalizedProvider(const ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider(env->callStaticObjectMethod(cls, mids$[mid_getUnnormalizedProvider_0c90473246f89be5], a0.this$));
          }

          ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider GravityFieldFactory::getUnnormalizedProvider(jint a0, jint a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider(env->callStaticObjectMethod(cls, mids$[mid_getUnnormalizedProvider_bc2bae0b3b31fcf0], a0, a1));
          }

          ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider GravityFieldFactory::getUnnormalizedProvider(jdouble a0, jdouble a1, const ::org::orekit::forces::gravity::potential::TideSystem & a2, const JArray< JArray< jdouble > > & a3, const JArray< JArray< jdouble > > & a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider(env->callStaticObjectMethod(cls, mids$[mid_getUnnormalizedProvider_e19081210481e857], a0, a1, a2.this$, a3.this$, a4.this$));
          }

          ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader GravityFieldFactory::readGravityField(jint a0, jint a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->callStaticObjectMethod(cls, mids$[mid_readGravityField_d70c66dab04a3d84], a0, a1));
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
          static PyObject *t_GravityFieldFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GravityFieldFactory_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GravityFieldFactory_addDefaultOceanTidesReaders(PyTypeObject *type);
          static PyObject *t_GravityFieldFactory_addDefaultPotentialCoefficientsReaders(PyTypeObject *type);
          static PyObject *t_GravityFieldFactory_addOceanTidesReader(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GravityFieldFactory_addPotentialCoefficientsReader(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GravityFieldFactory_clearOceanTidesReaders(PyTypeObject *type);
          static PyObject *t_GravityFieldFactory_clearPotentialCoefficientsReaders(PyTypeObject *type);
          static PyObject *t_GravityFieldFactory_configureOceanLoadDeformationCoefficients(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GravityFieldFactory_getConstantNormalizedProvider(PyTypeObject *type, PyObject *args);
          static PyObject *t_GravityFieldFactory_getConstantUnnormalizedProvider(PyTypeObject *type, PyObject *args);
          static PyObject *t_GravityFieldFactory_getGravityFields(PyTypeObject *type);
          static PyObject *t_GravityFieldFactory_getNormalizedProvider(PyTypeObject *type, PyObject *args);
          static PyObject *t_GravityFieldFactory_getOceanLoadDeformationCoefficients(PyTypeObject *type);
          static PyObject *t_GravityFieldFactory_getOceanTidesWaves(PyTypeObject *type, PyObject *args);
          static PyObject *t_GravityFieldFactory_getUnnormalizationFactors(PyTypeObject *type, PyObject *args);
          static PyObject *t_GravityFieldFactory_getUnnormalizedProvider(PyTypeObject *type, PyObject *args);
          static PyObject *t_GravityFieldFactory_readGravityField(PyTypeObject *type, PyObject *args);
          static PyObject *t_GravityFieldFactory_get__gravityFields(t_GravityFieldFactory *self, void *data);
          static PyObject *t_GravityFieldFactory_get__oceanLoadDeformationCoefficients(t_GravityFieldFactory *self, void *data);
          static PyGetSetDef t_GravityFieldFactory__fields_[] = {
            DECLARE_GET_FIELD(t_GravityFieldFactory, gravityFields),
            DECLARE_GET_FIELD(t_GravityFieldFactory, oceanLoadDeformationCoefficients),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GravityFieldFactory__methods_[] = {
            DECLARE_METHOD(t_GravityFieldFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, addDefaultOceanTidesReaders, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, addDefaultPotentialCoefficientsReaders, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, addOceanTidesReader, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, addPotentialCoefficientsReader, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, clearOceanTidesReaders, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, clearPotentialCoefficientsReaders, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, configureOceanLoadDeformationCoefficients, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, getConstantNormalizedProvider, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, getConstantUnnormalizedProvider, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, getGravityFields, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, getNormalizedProvider, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, getOceanLoadDeformationCoefficients, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, getOceanTidesWaves, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, getUnnormalizationFactors, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, getUnnormalizedProvider, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_GravityFieldFactory, readGravityField, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GravityFieldFactory)[] = {
            { Py_tp_methods, t_GravityFieldFactory__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_GravityFieldFactory__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GravityFieldFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GravityFieldFactory, t_GravityFieldFactory, GravityFieldFactory);

          void t_GravityFieldFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(GravityFieldFactory), &PY_TYPE_DEF(GravityFieldFactory), module, "GravityFieldFactory", 0);
          }

          void t_GravityFieldFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFieldFactory), "class_", make_descriptor(GravityFieldFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFieldFactory), "wrapfn_", make_descriptor(t_GravityFieldFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFieldFactory), "boxfn_", make_descriptor(boxObject));
            env->getClass(GravityFieldFactory::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFieldFactory), "EGM_FILENAME", make_descriptor(j2p(*GravityFieldFactory::EGM_FILENAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFieldFactory), "FES_CHAT_EPSILON_FILENAME", make_descriptor(j2p(*GravityFieldFactory::FES_CHAT_EPSILON_FILENAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFieldFactory), "FES_CNM_SNM_FILENAME", make_descriptor(j2p(*GravityFieldFactory::FES_CNM_SNM_FILENAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFieldFactory), "FES_HF_FILENAME", make_descriptor(j2p(*GravityFieldFactory::FES_HF_FILENAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFieldFactory), "GRGS_FILENAME", make_descriptor(j2p(*GravityFieldFactory::GRGS_FILENAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFieldFactory), "ICGEM_FILENAME", make_descriptor(j2p(*GravityFieldFactory::ICGEM_FILENAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFieldFactory), "SHM_FILENAME", make_descriptor(j2p(*GravityFieldFactory::SHM_FILENAME)));
          }

          static PyObject *t_GravityFieldFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GravityFieldFactory::initializeClass, 1)))
              return NULL;
            return t_GravityFieldFactory::wrap_Object(GravityFieldFactory(((t_GravityFieldFactory *) arg)->object.this$));
          }
          static PyObject *t_GravityFieldFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GravityFieldFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_GravityFieldFactory_addDefaultOceanTidesReaders(PyTypeObject *type)
          {
            OBJ_CALL(::org::orekit::forces::gravity::potential::GravityFieldFactory::addDefaultOceanTidesReaders());
            Py_RETURN_NONE;
          }

          static PyObject *t_GravityFieldFactory_addDefaultPotentialCoefficientsReaders(PyTypeObject *type)
          {
            OBJ_CALL(::org::orekit::forces::gravity::potential::GravityFieldFactory::addDefaultPotentialCoefficientsReaders());
            Py_RETURN_NONE;
          }

          static PyObject *t_GravityFieldFactory_addOceanTidesReader(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::forces::gravity::potential::OceanTidesReader a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::forces::gravity::potential::OceanTidesReader::initializeClass, &a0))
            {
              OBJ_CALL(::org::orekit::forces::gravity::potential::GravityFieldFactory::addOceanTidesReader(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError(type, "addOceanTidesReader", arg);
            return NULL;
          }

          static PyObject *t_GravityFieldFactory_addPotentialCoefficientsReader(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader::initializeClass, &a0))
            {
              OBJ_CALL(::org::orekit::forces::gravity::potential::GravityFieldFactory::addPotentialCoefficientsReader(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError(type, "addPotentialCoefficientsReader", arg);
            return NULL;
          }

          static PyObject *t_GravityFieldFactory_clearOceanTidesReaders(PyTypeObject *type)
          {
            OBJ_CALL(::org::orekit::forces::gravity::potential::GravityFieldFactory::clearOceanTidesReaders());
            Py_RETURN_NONE;
          }

          static PyObject *t_GravityFieldFactory_clearPotentialCoefficientsReaders(PyTypeObject *type)
          {
            OBJ_CALL(::org::orekit::forces::gravity::potential::GravityFieldFactory::clearPotentialCoefficientsReaders());
            Py_RETURN_NONE;
          }

          static PyObject *t_GravityFieldFactory_configureOceanLoadDeformationCoefficients(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients::initializeClass, &a0, &p0, ::org::orekit::forces::gravity::potential::t_OceanLoadDeformationCoefficients::parameters_))
            {
              OBJ_CALL(::org::orekit::forces::gravity::potential::GravityFieldFactory::configureOceanLoadDeformationCoefficients(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError(type, "configureOceanLoadDeformationCoefficients", arg);
            return NULL;
          }

          static PyObject *t_GravityFieldFactory_getConstantNormalizedProvider(PyTypeObject *type, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "IIk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getConstantNormalizedProvider(a0, a1, a2));
              return ::org::orekit::forces::gravity::potential::t_NormalizedSphericalHarmonicsProvider::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getConstantNormalizedProvider", args);
            return NULL;
          }

          static PyObject *t_GravityFieldFactory_getConstantUnnormalizedProvider(PyTypeObject *type, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "IIk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getConstantUnnormalizedProvider(a0, a1, a2));
              return ::org::orekit::forces::gravity::potential::t_UnnormalizedSphericalHarmonicsProvider::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getConstantUnnormalizedProvider", args);
            return NULL;
          }

          static PyObject *t_GravityFieldFactory_getGravityFields(PyTypeObject *type)
          {
            ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getGravityFields());
            return ::org::orekit::forces::gravity::potential::t_LazyLoadedGravityFields::wrap_Object(result);
          }

          static PyObject *t_GravityFieldFactory_getNormalizedProvider(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a0((jobject) NULL);
                ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getNormalizedProvider(a0));
                  return ::org::orekit::forces::gravity::potential::t_NormalizedSphericalHarmonicsProvider::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                jint a0;
                jint a1;
                ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider result((jobject) NULL);

                if (!parseArgs(args, "II", &a0, &a1))
                {
                  OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getNormalizedProvider(a0, a1));
                  return ::org::orekit::forces::gravity::potential::t_NormalizedSphericalHarmonicsProvider::wrap_Object(result);
                }
              }
              break;
             case 5:
              {
                jdouble a0;
                jdouble a1;
                ::org::orekit::forces::gravity::potential::TideSystem a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< JArray< jdouble > > a3((jobject) NULL);
                JArray< JArray< jdouble > > a4((jobject) NULL);
                ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider result((jobject) NULL);

                if (!parseArgs(args, "DDK[[D[[D", ::org::orekit::forces::gravity::potential::TideSystem::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::forces::gravity::potential::t_TideSystem::parameters_, &a3, &a4))
                {
                  OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getNormalizedProvider(a0, a1, a2, a3, a4));
                  return ::org::orekit::forces::gravity::potential::t_NormalizedSphericalHarmonicsProvider::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "getNormalizedProvider", args);
            return NULL;
          }

          static PyObject *t_GravityFieldFactory_getOceanLoadDeformationCoefficients(PyTypeObject *type)
          {
            ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getOceanLoadDeformationCoefficients());
            return ::org::orekit::forces::gravity::potential::t_OceanLoadDeformationCoefficients::wrap_Object(result);
          }

          static PyObject *t_GravityFieldFactory_getOceanTidesWaves(PyTypeObject *type, PyObject *args)
          {
            jint a0;
            jint a1;
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getOceanTidesWaves(a0, a1));
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::forces::gravity::potential::PY_TYPE(OceanTidesWave));
            }

            PyErr_SetArgsError(type, "getOceanTidesWaves", args);
            return NULL;
          }

          static PyObject *t_GravityFieldFactory_getUnnormalizationFactors(PyTypeObject *type, PyObject *args)
          {
            jint a0;
            jint a1;
            JArray< JArray< jdouble > > result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getUnnormalizationFactors(a0, a1));
              return JArray<jobject>(result.this$).wrap(NULL);
            }

            PyErr_SetArgsError(type, "getUnnormalizationFactors", args);
            return NULL;
          }

          static PyObject *t_GravityFieldFactory_getUnnormalizedProvider(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider a0((jobject) NULL);
                ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getUnnormalizedProvider(a0));
                  return ::org::orekit::forces::gravity::potential::t_UnnormalizedSphericalHarmonicsProvider::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                jint a0;
                jint a1;
                ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider result((jobject) NULL);

                if (!parseArgs(args, "II", &a0, &a1))
                {
                  OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getUnnormalizedProvider(a0, a1));
                  return ::org::orekit::forces::gravity::potential::t_UnnormalizedSphericalHarmonicsProvider::wrap_Object(result);
                }
              }
              break;
             case 5:
              {
                jdouble a0;
                jdouble a1;
                ::org::orekit::forces::gravity::potential::TideSystem a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< JArray< jdouble > > a3((jobject) NULL);
                JArray< JArray< jdouble > > a4((jobject) NULL);
                ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider result((jobject) NULL);

                if (!parseArgs(args, "DDK[[D[[D", ::org::orekit::forces::gravity::potential::TideSystem::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::forces::gravity::potential::t_TideSystem::parameters_, &a3, &a4))
                {
                  OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::getUnnormalizedProvider(a0, a1, a2, a3, a4));
                  return ::org::orekit::forces::gravity::potential::t_UnnormalizedSphericalHarmonicsProvider::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "getUnnormalizedProvider", args);
            return NULL;
          }

          static PyObject *t_GravityFieldFactory_readGravityField(PyTypeObject *type, PyObject *args)
          {
            jint a0;
            jint a1;
            ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::forces::gravity::potential::GravityFieldFactory::readGravityField(a0, a1));
              return ::org::orekit::forces::gravity::potential::t_PotentialCoefficientsReader::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "readGravityField", args);
            return NULL;
          }

          static PyObject *t_GravityFieldFactory_get__gravityFields(t_GravityFieldFactory *self, void *data)
          {
            ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields value((jobject) NULL);
            OBJ_CALL(value = self->object.getGravityFields());
            return ::org::orekit::forces::gravity::potential::t_LazyLoadedGravityFields::wrap_Object(value);
          }

          static PyObject *t_GravityFieldFactory_get__oceanLoadDeformationCoefficients(t_GravityFieldFactory *self, void *data)
          {
            ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients value((jobject) NULL);
            OBJ_CALL(value = self->object.getOceanLoadDeformationCoefficients());
            return ::org::orekit::forces::gravity::potential::t_OceanLoadDeformationCoefficients::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ObjectType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ObjectType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *ObjectType::class$ = NULL;
              jmethodID *ObjectType::mids$ = NULL;
              bool ObjectType::live$ = false;
              ObjectType *ObjectType::DEBRIS = NULL;
              ObjectType *ObjectType::OTHER = NULL;
              ObjectType *ObjectType::PAYLOAD = NULL;
              ObjectType *ObjectType::ROCKET_BODY = NULL;
              ObjectType *ObjectType::UNKNOWN = NULL;

              jclass ObjectType::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/ObjectType");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_valueOf_b793eb7d30ebbbf7] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;");
                  mids$[mid_values_7a22d332016f5281] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  DEBRIS = new ObjectType(env->getStaticObjectField(cls, "DEBRIS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;"));
                  OTHER = new ObjectType(env->getStaticObjectField(cls, "OTHER", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;"));
                  PAYLOAD = new ObjectType(env->getStaticObjectField(cls, "PAYLOAD", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;"));
                  ROCKET_BODY = new ObjectType(env->getStaticObjectField(cls, "ROCKET_BODY", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;"));
                  UNKNOWN = new ObjectType(env->getStaticObjectField(cls, "UNKNOWN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ObjectType ObjectType::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return ObjectType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b793eb7d30ebbbf7], a0.this$));
              }

              JArray< ObjectType > ObjectType::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< ObjectType >(env->callStaticObjectMethod(cls, mids$[mid_values_7a22d332016f5281]));
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
              static PyObject *t_ObjectType_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ObjectType_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ObjectType_of_(t_ObjectType *self, PyObject *args);
              static PyObject *t_ObjectType_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_ObjectType_values(PyTypeObject *type);
              static PyObject *t_ObjectType_get__parameters_(t_ObjectType *self, void *data);
              static PyGetSetDef t_ObjectType__fields_[] = {
                DECLARE_GET_FIELD(t_ObjectType, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ObjectType__methods_[] = {
                DECLARE_METHOD(t_ObjectType, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ObjectType, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ObjectType, of_, METH_VARARGS),
                DECLARE_METHOD(t_ObjectType, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_ObjectType, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ObjectType)[] = {
                { Py_tp_methods, t_ObjectType__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_ObjectType__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ObjectType)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(ObjectType, t_ObjectType, ObjectType);
              PyObject *t_ObjectType::wrap_Object(const ObjectType& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ObjectType::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ObjectType *self = (t_ObjectType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_ObjectType::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ObjectType::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ObjectType *self = (t_ObjectType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_ObjectType::install(PyObject *module)
              {
                installType(&PY_TYPE(ObjectType), &PY_TYPE_DEF(ObjectType), module, "ObjectType", 0);
              }

              void t_ObjectType::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectType), "class_", make_descriptor(ObjectType::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectType), "wrapfn_", make_descriptor(t_ObjectType::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectType), "boxfn_", make_descriptor(boxObject));
                env->getClass(ObjectType::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectType), "DEBRIS", make_descriptor(t_ObjectType::wrap_Object(*ObjectType::DEBRIS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectType), "OTHER", make_descriptor(t_ObjectType::wrap_Object(*ObjectType::OTHER)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectType), "PAYLOAD", make_descriptor(t_ObjectType::wrap_Object(*ObjectType::PAYLOAD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectType), "ROCKET_BODY", make_descriptor(t_ObjectType::wrap_Object(*ObjectType::ROCKET_BODY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectType), "UNKNOWN", make_descriptor(t_ObjectType::wrap_Object(*ObjectType::UNKNOWN)));
              }

              static PyObject *t_ObjectType_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ObjectType::initializeClass, 1)))
                  return NULL;
                return t_ObjectType::wrap_Object(ObjectType(((t_ObjectType *) arg)->object.this$));
              }
              static PyObject *t_ObjectType_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ObjectType::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ObjectType_of_(t_ObjectType *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_ObjectType_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                ObjectType result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType::valueOf(a0));
                  return t_ObjectType::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_ObjectType_values(PyTypeObject *type)
              {
                JArray< ObjectType > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType::values());
                return JArray<jobject>(result.this$).wrap(t_ObjectType::wrap_jobject);
              }
              static PyObject *t_ObjectType_get__parameters_(t_ObjectType *self, void *data)
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
#include "org/orekit/files/ilrs/CPF$CPFCoordinate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CPF$CPFCoordinate::class$ = NULL;
        jmethodID *CPF$CPFCoordinate::mids$ = NULL;
        bool CPF$CPFCoordinate::live$ = false;

        jclass CPF$CPFCoordinate::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CPF$CPFCoordinate");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_23fcaf31c7e25438] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;I)V");
            mids$[mid_init$_e7e9b3ade64a28b0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;I)V");
            mids$[mid_getLeap_d6ab429752e7c267] = env->getMethodID(cls, "getLeap", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CPF$CPFCoordinate::CPF$CPFCoordinate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jint a2) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_23fcaf31c7e25438, a0.this$, a1.this$, a2)) {}

        CPF$CPFCoordinate::CPF$CPFCoordinate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jint a3) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_e7e9b3ade64a28b0, a0.this$, a1.this$, a2.this$, a3)) {}

        jint CPF$CPFCoordinate::getLeap() const
        {
          return env->callIntMethod(this$, mids$[mid_getLeap_d6ab429752e7c267]);
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
        static PyObject *t_CPF$CPFCoordinate_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CPF$CPFCoordinate_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CPF$CPFCoordinate_init_(t_CPF$CPFCoordinate *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CPF$CPFCoordinate_getLeap(t_CPF$CPFCoordinate *self);
        static PyObject *t_CPF$CPFCoordinate_get__leap(t_CPF$CPFCoordinate *self, void *data);
        static PyGetSetDef t_CPF$CPFCoordinate__fields_[] = {
          DECLARE_GET_FIELD(t_CPF$CPFCoordinate, leap),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CPF$CPFCoordinate__methods_[] = {
          DECLARE_METHOD(t_CPF$CPFCoordinate, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPF$CPFCoordinate, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPF$CPFCoordinate, getLeap, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CPF$CPFCoordinate)[] = {
          { Py_tp_methods, t_CPF$CPFCoordinate__methods_ },
          { Py_tp_init, (void *) t_CPF$CPFCoordinate_init_ },
          { Py_tp_getset, t_CPF$CPFCoordinate__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CPF$CPFCoordinate)[] = {
          &PY_TYPE_DEF(::org::orekit::utils::TimeStampedPVCoordinates),
          NULL
        };

        DEFINE_TYPE(CPF$CPFCoordinate, t_CPF$CPFCoordinate, CPF$CPFCoordinate);

        void t_CPF$CPFCoordinate::install(PyObject *module)
        {
          installType(&PY_TYPE(CPF$CPFCoordinate), &PY_TYPE_DEF(CPF$CPFCoordinate), module, "CPF$CPFCoordinate", 0);
        }

        void t_CPF$CPFCoordinate::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF$CPFCoordinate), "class_", make_descriptor(CPF$CPFCoordinate::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF$CPFCoordinate), "wrapfn_", make_descriptor(t_CPF$CPFCoordinate::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF$CPFCoordinate), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CPF$CPFCoordinate_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CPF$CPFCoordinate::initializeClass, 1)))
            return NULL;
          return t_CPF$CPFCoordinate::wrap_Object(CPF$CPFCoordinate(((t_CPF$CPFCoordinate *) arg)->object.this$));
        }
        static PyObject *t_CPF$CPFCoordinate_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CPF$CPFCoordinate::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CPF$CPFCoordinate_init_(t_CPF$CPFCoordinate *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              jint a2;
              CPF$CPFCoordinate object((jobject) NULL);

              if (!parseArgs(args, "kkI", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = CPF$CPFCoordinate(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              jint a3;
              CPF$CPFCoordinate object((jobject) NULL);

              if (!parseArgs(args, "kkkI", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = CPF$CPFCoordinate(a0, a1, a2, a3));
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

        static PyObject *t_CPF$CPFCoordinate_getLeap(t_CPF$CPFCoordinate *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getLeap());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CPF$CPFCoordinate_get__leap(t_CPF$CPFCoordinate *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getLeap());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/VectorFormat.h"
#include "java/util/Locale.h"
#include "java/lang/StringBuffer.h"
#include "org/hipparchus/geometry/Vector.h"
#include "java/text/FieldPosition.h"
#include "java/text/NumberFormat.h"
#include "java/lang/Class.h"
#include "java/text/ParsePosition.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {

      ::java::lang::Class *VectorFormat::class$ = NULL;
      jmethodID *VectorFormat::mids$ = NULL;
      bool VectorFormat::live$ = false;
      ::java::lang::String *VectorFormat::DEFAULT_PREFIX = NULL;
      ::java::lang::String *VectorFormat::DEFAULT_SEPARATOR = NULL;
      ::java::lang::String *VectorFormat::DEFAULT_SUFFIX = NULL;

      jclass VectorFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/geometry/VectorFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_format_531b485bbf82fc90] = env->getMethodID(cls, "format", "(Lorg/hipparchus/geometry/Vector;)Ljava/lang/String;");
          mids$[mid_format_dbd94d7f7c5c0aa8] = env->getMethodID(cls, "format", "(Lorg/hipparchus/geometry/Vector;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_getAvailableLocales_faf2576acf90261b] = env->getStaticMethodID(cls, "getAvailableLocales", "()[Ljava/util/Locale;");
          mids$[mid_getFormat_525709eb5c5b5ea6] = env->getMethodID(cls, "getFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_getPrefix_d2c8eb4129821f0e] = env->getMethodID(cls, "getPrefix", "()Ljava/lang/String;");
          mids$[mid_getSeparator_d2c8eb4129821f0e] = env->getMethodID(cls, "getSeparator", "()Ljava/lang/String;");
          mids$[mid_getSuffix_d2c8eb4129821f0e] = env->getMethodID(cls, "getSuffix", "()Ljava/lang/String;");
          mids$[mid_parse_c1049084d032ffba] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/hipparchus/geometry/Vector;");
          mids$[mid_parse_7e66ee88ae4979ad] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/geometry/Vector;");
          mids$[mid_parseCoordinates_a4c7b2a3baeb8801] = env->getMethodID(cls, "parseCoordinates", "(ILjava/lang/String;Ljava/text/ParsePosition;)[D");
          mids$[mid_format_a9f65f4bc646f3a9] = env->getMethodID(cls, "format", "(Ljava/lang/StringBuffer;Ljava/text/FieldPosition;[D)Ljava/lang/StringBuffer;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_PREFIX = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_PREFIX", "Ljava/lang/String;"));
          DEFAULT_SEPARATOR = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SEPARATOR", "Ljava/lang/String;"));
          DEFAULT_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUFFIX", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String VectorFormat::format(const ::org::hipparchus::geometry::Vector & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_format_531b485bbf82fc90], a0.this$));
      }

      ::java::lang::StringBuffer VectorFormat::format(const ::org::hipparchus::geometry::Vector & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_dbd94d7f7c5c0aa8], a0.this$, a1.this$, a2.this$));
      }

      JArray< ::java::util::Locale > VectorFormat::getAvailableLocales()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ::java::util::Locale >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableLocales_faf2576acf90261b]));
      }

      ::java::text::NumberFormat VectorFormat::getFormat() const
      {
        return ::java::text::NumberFormat(env->callObjectMethod(this$, mids$[mid_getFormat_525709eb5c5b5ea6]));
      }

      ::java::lang::String VectorFormat::getPrefix() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPrefix_d2c8eb4129821f0e]));
      }

      ::java::lang::String VectorFormat::getSeparator() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSeparator_d2c8eb4129821f0e]));
      }

      ::java::lang::String VectorFormat::getSuffix() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSuffix_d2c8eb4129821f0e]));
      }

      ::org::hipparchus::geometry::Vector VectorFormat::parse(const ::java::lang::String & a0) const
      {
        return ::org::hipparchus::geometry::Vector(env->callObjectMethod(this$, mids$[mid_parse_c1049084d032ffba], a0.this$));
      }

      ::org::hipparchus::geometry::Vector VectorFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
      {
        return ::org::hipparchus::geometry::Vector(env->callObjectMethod(this$, mids$[mid_parse_7e66ee88ae4979ad], a0.this$, a1.this$));
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
      static PyObject *t_VectorFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_VectorFormat_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_VectorFormat_of_(t_VectorFormat *self, PyObject *args);
      static PyObject *t_VectorFormat_format(t_VectorFormat *self, PyObject *args);
      static PyObject *t_VectorFormat_getAvailableLocales(PyTypeObject *type);
      static PyObject *t_VectorFormat_getFormat(t_VectorFormat *self);
      static PyObject *t_VectorFormat_getPrefix(t_VectorFormat *self);
      static PyObject *t_VectorFormat_getSeparator(t_VectorFormat *self);
      static PyObject *t_VectorFormat_getSuffix(t_VectorFormat *self);
      static PyObject *t_VectorFormat_parse(t_VectorFormat *self, PyObject *args);
      static PyObject *t_VectorFormat_get__availableLocales(t_VectorFormat *self, void *data);
      static PyObject *t_VectorFormat_get__prefix(t_VectorFormat *self, void *data);
      static PyObject *t_VectorFormat_get__separator(t_VectorFormat *self, void *data);
      static PyObject *t_VectorFormat_get__suffix(t_VectorFormat *self, void *data);
      static PyObject *t_VectorFormat_get__parameters_(t_VectorFormat *self, void *data);
      static PyGetSetDef t_VectorFormat__fields_[] = {
        DECLARE_GET_FIELD(t_VectorFormat, availableLocales),
        DECLARE_GET_FIELD(t_VectorFormat, prefix),
        DECLARE_GET_FIELD(t_VectorFormat, separator),
        DECLARE_GET_FIELD(t_VectorFormat, suffix),
        DECLARE_GET_FIELD(t_VectorFormat, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_VectorFormat__methods_[] = {
        DECLARE_METHOD(t_VectorFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_VectorFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_VectorFormat, of_, METH_VARARGS),
        DECLARE_METHOD(t_VectorFormat, format, METH_VARARGS),
        DECLARE_METHOD(t_VectorFormat, getAvailableLocales, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_VectorFormat, getFormat, METH_NOARGS),
        DECLARE_METHOD(t_VectorFormat, getPrefix, METH_NOARGS),
        DECLARE_METHOD(t_VectorFormat, getSeparator, METH_NOARGS),
        DECLARE_METHOD(t_VectorFormat, getSuffix, METH_NOARGS),
        DECLARE_METHOD(t_VectorFormat, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(VectorFormat)[] = {
        { Py_tp_methods, t_VectorFormat__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_VectorFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(VectorFormat)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(VectorFormat, t_VectorFormat, VectorFormat);
      PyObject *t_VectorFormat::wrap_Object(const VectorFormat& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_VectorFormat::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_VectorFormat *self = (t_VectorFormat *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_VectorFormat::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_VectorFormat::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_VectorFormat *self = (t_VectorFormat *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_VectorFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(VectorFormat), &PY_TYPE_DEF(VectorFormat), module, "VectorFormat", 0);
      }

      void t_VectorFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(VectorFormat), "class_", make_descriptor(VectorFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(VectorFormat), "wrapfn_", make_descriptor(t_VectorFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(VectorFormat), "boxfn_", make_descriptor(boxObject));
        env->getClass(VectorFormat::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(VectorFormat), "DEFAULT_PREFIX", make_descriptor(j2p(*VectorFormat::DEFAULT_PREFIX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(VectorFormat), "DEFAULT_SEPARATOR", make_descriptor(j2p(*VectorFormat::DEFAULT_SEPARATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(VectorFormat), "DEFAULT_SUFFIX", make_descriptor(j2p(*VectorFormat::DEFAULT_SUFFIX)));
      }

      static PyObject *t_VectorFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, VectorFormat::initializeClass, 1)))
          return NULL;
        return t_VectorFormat::wrap_Object(VectorFormat(((t_VectorFormat *) arg)->object.this$));
      }
      static PyObject *t_VectorFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, VectorFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_VectorFormat_of_(t_VectorFormat *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_VectorFormat_format(t_VectorFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.format(a0));
              return j2p(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "Kkk", ::org::hipparchus::geometry::Vector::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "format", args);
        return NULL;
      }

      static PyObject *t_VectorFormat_getAvailableLocales(PyTypeObject *type)
      {
        JArray< ::java::util::Locale > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::geometry::VectorFormat::getAvailableLocales());
        return JArray<jobject>(result.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_VectorFormat_getFormat(t_VectorFormat *self)
      {
        ::java::text::NumberFormat result((jobject) NULL);
        OBJ_CALL(result = self->object.getFormat());
        return ::java::text::t_NumberFormat::wrap_Object(result);
      }

      static PyObject *t_VectorFormat_getPrefix(t_VectorFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrefix());
        return j2p(result);
      }

      static PyObject *t_VectorFormat_getSeparator(t_VectorFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSeparator());
        return j2p(result);
      }

      static PyObject *t_VectorFormat_getSuffix(t_VectorFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSuffix());
        return j2p(result);
      }

      static PyObject *t_VectorFormat_parse(t_VectorFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::hipparchus::geometry::Vector result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.parse(a0));
              return ::org::hipparchus::geometry::t_Vector::wrap_Object(result, self->parameters[0], self->parameters[1]);
            }
          }
          break;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::text::ParsePosition a1((jobject) NULL);
            ::org::hipparchus::geometry::Vector result((jobject) NULL);

            if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.parse(a0, a1));
              return ::org::hipparchus::geometry::t_Vector::wrap_Object(result, self->parameters[0], self->parameters[1]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }
      static PyObject *t_VectorFormat_get__parameters_(t_VectorFormat *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_VectorFormat_get__availableLocales(t_VectorFormat *self, void *data)
      {
        JArray< ::java::util::Locale > value((jobject) NULL);
        OBJ_CALL(value = self->object.getAvailableLocales());
        return JArray<jobject>(value.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_VectorFormat_get__prefix(t_VectorFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrefix());
        return j2p(value);
      }

      static PyObject *t_VectorFormat_get__separator(t_VectorFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSeparator());
        return j2p(value);
      }

      static PyObject *t_VectorFormat_get__suffix(t_VectorFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSuffix());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/WeightedEvaluation.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *WeightedEvaluation::class$ = NULL;
        jmethodID *WeightedEvaluation::mids$ = NULL;
        bool WeightedEvaluation::live$ = false;

        jclass WeightedEvaluation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/WeightedEvaluation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_evaluate_b01af8a77d4df96f] = env->getMethodID(cls, "evaluate", "([D[D)D");
            mids$[mid_evaluate_0b039b932db219bf] = env->getMethodID(cls, "evaluate", "([D[DII)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble WeightedEvaluation::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_evaluate_b01af8a77d4df96f], a0.this$, a1.this$);
        }

        jdouble WeightedEvaluation::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jint a2, jint a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_evaluate_0b039b932db219bf], a0.this$, a1.this$, a2, a3);
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
        static PyObject *t_WeightedEvaluation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_WeightedEvaluation_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_WeightedEvaluation_evaluate(t_WeightedEvaluation *self, PyObject *args);

        static PyMethodDef t_WeightedEvaluation__methods_[] = {
          DECLARE_METHOD(t_WeightedEvaluation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_WeightedEvaluation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_WeightedEvaluation, evaluate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(WeightedEvaluation)[] = {
          { Py_tp_methods, t_WeightedEvaluation__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(WeightedEvaluation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(WeightedEvaluation, t_WeightedEvaluation, WeightedEvaluation);

        void t_WeightedEvaluation::install(PyObject *module)
        {
          installType(&PY_TYPE(WeightedEvaluation), &PY_TYPE_DEF(WeightedEvaluation), module, "WeightedEvaluation", 0);
        }

        void t_WeightedEvaluation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(WeightedEvaluation), "class_", make_descriptor(WeightedEvaluation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(WeightedEvaluation), "wrapfn_", make_descriptor(t_WeightedEvaluation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(WeightedEvaluation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_WeightedEvaluation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, WeightedEvaluation::initializeClass, 1)))
            return NULL;
          return t_WeightedEvaluation::wrap_Object(WeightedEvaluation(((t_WeightedEvaluation *) arg)->object.this$));
        }
        static PyObject *t_WeightedEvaluation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, WeightedEvaluation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_WeightedEvaluation_evaluate(t_WeightedEvaluation *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.evaluate(a0, a1));
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

          PyErr_SetArgsError((PyObject *) self, "evaluate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/utils/PythonDSGenerator.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/rugged/utils/DSGenerator.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *PythonDSGenerator::class$ = NULL;
        jmethodID *PythonDSGenerator::mids$ = NULL;
        bool PythonDSGenerator::live$ = false;

        jclass PythonDSGenerator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/PythonDSGenerator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_constant_f7de6915022fec9a] = env->getMethodID(cls, "constant", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getSelected_d751c1a57012b438] = env->getMethodID(cls, "getSelected", "()Ljava/util/List;");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_variable_d6efc665ff46347a] = env->getMethodID(cls, "variable", "(Lorg/orekit/utils/ParameterDriver;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonDSGenerator::PythonDSGenerator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonDSGenerator::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonDSGenerator::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonDSGenerator::pythonExtension(jlong a0) const
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
      namespace utils {
        static PyObject *t_PythonDSGenerator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonDSGenerator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonDSGenerator_init_(t_PythonDSGenerator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonDSGenerator_finalize(t_PythonDSGenerator *self);
        static PyObject *t_PythonDSGenerator_pythonExtension(t_PythonDSGenerator *self, PyObject *args);
        static jobject JNICALL t_PythonDSGenerator_constant0(JNIEnv *jenv, jobject jobj, jdouble a0);
        static jobject JNICALL t_PythonDSGenerator_getSelected1(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonDSGenerator_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonDSGenerator_variable3(JNIEnv *jenv, jobject jobj, jobject a0);
        static PyObject *t_PythonDSGenerator_get__self(t_PythonDSGenerator *self, void *data);
        static PyGetSetDef t_PythonDSGenerator__fields_[] = {
          DECLARE_GET_FIELD(t_PythonDSGenerator, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonDSGenerator__methods_[] = {
          DECLARE_METHOD(t_PythonDSGenerator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonDSGenerator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonDSGenerator, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonDSGenerator, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonDSGenerator)[] = {
          { Py_tp_methods, t_PythonDSGenerator__methods_ },
          { Py_tp_init, (void *) t_PythonDSGenerator_init_ },
          { Py_tp_getset, t_PythonDSGenerator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonDSGenerator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonDSGenerator, t_PythonDSGenerator, PythonDSGenerator);

        void t_PythonDSGenerator::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonDSGenerator), &PY_TYPE_DEF(PythonDSGenerator), module, "PythonDSGenerator", 1);
        }

        void t_PythonDSGenerator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDSGenerator), "class_", make_descriptor(PythonDSGenerator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDSGenerator), "wrapfn_", make_descriptor(t_PythonDSGenerator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDSGenerator), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonDSGenerator::initializeClass);
          JNINativeMethod methods[] = {
            { "constant", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;", (void *) t_PythonDSGenerator_constant0 },
            { "getSelected", "()Ljava/util/List;", (void *) t_PythonDSGenerator_getSelected1 },
            { "pythonDecRef", "()V", (void *) t_PythonDSGenerator_pythonDecRef2 },
            { "variable", "(Lorg/orekit/utils/ParameterDriver;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;", (void *) t_PythonDSGenerator_variable3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonDSGenerator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonDSGenerator::initializeClass, 1)))
            return NULL;
          return t_PythonDSGenerator::wrap_Object(PythonDSGenerator(((t_PythonDSGenerator *) arg)->object.this$));
        }
        static PyObject *t_PythonDSGenerator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonDSGenerator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonDSGenerator_init_(t_PythonDSGenerator *self, PyObject *args, PyObject *kwds)
        {
          PythonDSGenerator object((jobject) NULL);

          INT_CALL(object = PythonDSGenerator());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonDSGenerator_finalize(t_PythonDSGenerator *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonDSGenerator_pythonExtension(t_PythonDSGenerator *self, PyObject *args)
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

        static jobject JNICALL t_PythonDSGenerator_constant0(JNIEnv *jenv, jobject jobj, jdouble a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonDSGenerator::mids$[PythonDSGenerator::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::analysis::differentiation::DerivativeStructure value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "constant", "d", (double) a0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::analysis::differentiation::DerivativeStructure::initializeClass, &value))
          {
            throwTypeError("constant", result);
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

        static jobject JNICALL t_PythonDSGenerator_getSelected1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonDSGenerator::mids$[PythonDSGenerator::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getSelected", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
          {
            throwTypeError("getSelected", result);
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

        static void JNICALL t_PythonDSGenerator_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonDSGenerator::mids$[PythonDSGenerator::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonDSGenerator::mids$[PythonDSGenerator::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonDSGenerator_variable3(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonDSGenerator::mids$[PythonDSGenerator::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::analysis::differentiation::DerivativeStructure value((jobject) NULL);
          PyObject *o0 = ::org::orekit::utils::t_ParameterDriver::wrap_Object(::org::orekit::utils::ParameterDriver(a0));
          PyObject *result = PyObject_CallMethod(obj, "variable", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::analysis::differentiation::DerivativeStructure::initializeClass, &value))
          {
            throwTypeError("variable", result);
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

        static PyObject *t_PythonDSGenerator_get__self(t_PythonDSGenerator *self, void *data)
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
#include "org/hipparchus/util/MultidimensionalCounter$Iterator.h"
#include "java/util/Iterator.h"
#include "java/lang/Class.h"
#include "java/lang/Integer.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MultidimensionalCounter$Iterator::class$ = NULL;
      jmethodID *MultidimensionalCounter$Iterator::mids$ = NULL;
      bool MultidimensionalCounter$Iterator::live$ = false;

      jclass MultidimensionalCounter$Iterator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MultidimensionalCounter$Iterator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getCount_d6ab429752e7c267] = env->getMethodID(cls, "getCount", "()I");
          mids$[mid_getCount_d938fc64e8c6df2d] = env->getMethodID(cls, "getCount", "(I)I");
          mids$[mid_getCounts_d6f20bd740dd34cd] = env->getMethodID(cls, "getCounts", "()[I");
          mids$[mid_hasNext_eee3de00fe971136] = env->getMethodID(cls, "hasNext", "()Z");
          mids$[mid_next_901c88df9bff1f7c] = env->getMethodID(cls, "next", "()Ljava/lang/Integer;");
          mids$[mid_remove_ff7cb6c242604316] = env->getMethodID(cls, "remove", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint MultidimensionalCounter$Iterator::getCount() const
      {
        return env->callIntMethod(this$, mids$[mid_getCount_d6ab429752e7c267]);
      }

      jint MultidimensionalCounter$Iterator::getCount(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_getCount_d938fc64e8c6df2d], a0);
      }

      JArray< jint > MultidimensionalCounter$Iterator::getCounts() const
      {
        return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getCounts_d6f20bd740dd34cd]));
      }

      jboolean MultidimensionalCounter$Iterator::hasNext() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasNext_eee3de00fe971136]);
      }

      ::java::lang::Integer MultidimensionalCounter$Iterator::next() const
      {
        return ::java::lang::Integer(env->callObjectMethod(this$, mids$[mid_next_901c88df9bff1f7c]));
      }

      void MultidimensionalCounter$Iterator::remove() const
      {
        env->callVoidMethod(this$, mids$[mid_remove_ff7cb6c242604316]);
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
      static PyObject *t_MultidimensionalCounter$Iterator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultidimensionalCounter$Iterator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultidimensionalCounter$Iterator_getCount(t_MultidimensionalCounter$Iterator *self, PyObject *args);
      static PyObject *t_MultidimensionalCounter$Iterator_getCounts(t_MultidimensionalCounter$Iterator *self);
      static PyObject *t_MultidimensionalCounter$Iterator_hasNext(t_MultidimensionalCounter$Iterator *self);
      static PyObject *t_MultidimensionalCounter$Iterator_next(t_MultidimensionalCounter$Iterator *self);
      static PyObject *t_MultidimensionalCounter$Iterator_remove(t_MultidimensionalCounter$Iterator *self);
      static PyObject *t_MultidimensionalCounter$Iterator_get__count(t_MultidimensionalCounter$Iterator *self, void *data);
      static PyObject *t_MultidimensionalCounter$Iterator_get__counts(t_MultidimensionalCounter$Iterator *self, void *data);
      static PyGetSetDef t_MultidimensionalCounter$Iterator__fields_[] = {
        DECLARE_GET_FIELD(t_MultidimensionalCounter$Iterator, count),
        DECLARE_GET_FIELD(t_MultidimensionalCounter$Iterator, counts),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MultidimensionalCounter$Iterator__methods_[] = {
        DECLARE_METHOD(t_MultidimensionalCounter$Iterator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultidimensionalCounter$Iterator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultidimensionalCounter$Iterator, getCount, METH_VARARGS),
        DECLARE_METHOD(t_MultidimensionalCounter$Iterator, getCounts, METH_NOARGS),
        DECLARE_METHOD(t_MultidimensionalCounter$Iterator, hasNext, METH_NOARGS),
        DECLARE_METHOD(t_MultidimensionalCounter$Iterator, next, METH_NOARGS),
        DECLARE_METHOD(t_MultidimensionalCounter$Iterator, remove, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultidimensionalCounter$Iterator)[] = {
        { Py_tp_methods, t_MultidimensionalCounter$Iterator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_MultidimensionalCounter$Iterator__fields_ },
        { Py_tp_iter, (void *) PyObject_SelfIter },
        { Py_tp_iternext, (void *) ((PyObject *(*)(::java::util::t_Iterator *)) get_iterator_next< ::java::util::t_Iterator,::java::lang::t_Integer >) },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultidimensionalCounter$Iterator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MultidimensionalCounter$Iterator, t_MultidimensionalCounter$Iterator, MultidimensionalCounter$Iterator);

      void t_MultidimensionalCounter$Iterator::install(PyObject *module)
      {
        installType(&PY_TYPE(MultidimensionalCounter$Iterator), &PY_TYPE_DEF(MultidimensionalCounter$Iterator), module, "MultidimensionalCounter$Iterator", 0);
      }

      void t_MultidimensionalCounter$Iterator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultidimensionalCounter$Iterator), "class_", make_descriptor(MultidimensionalCounter$Iterator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultidimensionalCounter$Iterator), "wrapfn_", make_descriptor(t_MultidimensionalCounter$Iterator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultidimensionalCounter$Iterator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultidimensionalCounter$Iterator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultidimensionalCounter$Iterator::initializeClass, 1)))
          return NULL;
        return t_MultidimensionalCounter$Iterator::wrap_Object(MultidimensionalCounter$Iterator(((t_MultidimensionalCounter$Iterator *) arg)->object.this$));
      }
      static PyObject *t_MultidimensionalCounter$Iterator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultidimensionalCounter$Iterator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MultidimensionalCounter$Iterator_getCount(t_MultidimensionalCounter$Iterator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jint result;
            OBJ_CALL(result = self->object.getCount());
            return PyLong_FromLong((long) result);
          }
          break;
         case 1:
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.getCount(a0));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getCount", args);
        return NULL;
      }

      static PyObject *t_MultidimensionalCounter$Iterator_getCounts(t_MultidimensionalCounter$Iterator *self)
      {
        JArray< jint > result((jobject) NULL);
        OBJ_CALL(result = self->object.getCounts());
        return result.wrap();
      }

      static PyObject *t_MultidimensionalCounter$Iterator_hasNext(t_MultidimensionalCounter$Iterator *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasNext());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_MultidimensionalCounter$Iterator_next(t_MultidimensionalCounter$Iterator *self)
      {
        ::java::lang::Integer result((jobject) NULL);
        OBJ_CALL(result = self->object.next());
        return ::java::lang::t_Integer::wrap_Object(result);
      }

      static PyObject *t_MultidimensionalCounter$Iterator_remove(t_MultidimensionalCounter$Iterator *self)
      {
        OBJ_CALL(self->object.remove());
        Py_RETURN_NONE;
      }

      static PyObject *t_MultidimensionalCounter$Iterator_get__count(t_MultidimensionalCounter$Iterator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getCount());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_MultidimensionalCounter$Iterator_get__counts(t_MultidimensionalCounter$Iterator *self, void *data)
      {
        JArray< jint > value((jobject) NULL);
        OBJ_CALL(value = self->object.getCounts());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/RinexNavigationHeader.h"
#include "org/orekit/files/rinex/navigation/TimeSystemCorrection.h"
#include "org/orekit/files/rinex/navigation/IonosphericCorrectionType.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
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
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_addTimeSystemCorrections_678e8b1af536568c] = env->getMethodID(cls, "addTimeSystemCorrections", "(Lorg/orekit/files/rinex/navigation/TimeSystemCorrection;)V");
              mids$[mid_getIonosphericCorrectionType_cc9732312393a3cc] = env->getMethodID(cls, "getIonosphericCorrectionType", "()Lorg/orekit/files/rinex/navigation/IonosphericCorrectionType;");
              mids$[mid_getMergedFiles_d6ab429752e7c267] = env->getMethodID(cls, "getMergedFiles", "()I");
              mids$[mid_getNumberOfLeapSeconds_d6ab429752e7c267] = env->getMethodID(cls, "getNumberOfLeapSeconds", "()I");
              mids$[mid_getTimeSystemCorrections_d751c1a57012b438] = env->getMethodID(cls, "getTimeSystemCorrections", "()Ljava/util/List;");
              mids$[mid_setIonosphericCorrectionType_7454a45741606645] = env->getMethodID(cls, "setIonosphericCorrectionType", "(Lorg/orekit/files/rinex/navigation/IonosphericCorrectionType;)V");
              mids$[mid_setMergedFiles_8fd427ab23829bf5] = env->getMethodID(cls, "setMergedFiles", "(I)V");
              mids$[mid_setNumberOfLeapSeconds_8fd427ab23829bf5] = env->getMethodID(cls, "setNumberOfLeapSeconds", "(I)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexNavigationHeader::RinexNavigationHeader() : ::org::orekit::files::rinex::section::RinexBaseHeader(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void RinexNavigationHeader::addTimeSystemCorrections(const ::org::orekit::files::rinex::navigation::TimeSystemCorrection & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addTimeSystemCorrections_678e8b1af536568c], a0.this$);
          }

          ::org::orekit::files::rinex::navigation::IonosphericCorrectionType RinexNavigationHeader::getIonosphericCorrectionType() const
          {
            return ::org::orekit::files::rinex::navigation::IonosphericCorrectionType(env->callObjectMethod(this$, mids$[mid_getIonosphericCorrectionType_cc9732312393a3cc]));
          }

          jint RinexNavigationHeader::getMergedFiles() const
          {
            return env->callIntMethod(this$, mids$[mid_getMergedFiles_d6ab429752e7c267]);
          }

          jint RinexNavigationHeader::getNumberOfLeapSeconds() const
          {
            return env->callIntMethod(this$, mids$[mid_getNumberOfLeapSeconds_d6ab429752e7c267]);
          }

          ::java::util::List RinexNavigationHeader::getTimeSystemCorrections() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getTimeSystemCorrections_d751c1a57012b438]));
          }

          void RinexNavigationHeader::setIonosphericCorrectionType(const ::org::orekit::files::rinex::navigation::IonosphericCorrectionType & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setIonosphericCorrectionType_7454a45741606645], a0.this$);
          }

          void RinexNavigationHeader::setMergedFiles(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMergedFiles_8fd427ab23829bf5], a0);
          }

          void RinexNavigationHeader::setNumberOfLeapSeconds(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setNumberOfLeapSeconds_8fd427ab23829bf5], a0);
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
#include "org/hipparchus/stat/regression/AbstractMultipleLinearRegression.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/regression/MultipleLinearRegression.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {

        ::java::lang::Class *AbstractMultipleLinearRegression::class$ = NULL;
        jmethodID *AbstractMultipleLinearRegression::mids$ = NULL;
        bool AbstractMultipleLinearRegression::live$ = false;

        jclass AbstractMultipleLinearRegression::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/regression/AbstractMultipleLinearRegression");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_estimateErrorVariance_9981f74b2d109da6] = env->getMethodID(cls, "estimateErrorVariance", "()D");
            mids$[mid_estimateRegressandVariance_9981f74b2d109da6] = env->getMethodID(cls, "estimateRegressandVariance", "()D");
            mids$[mid_estimateRegressionParameters_be783177b060994b] = env->getMethodID(cls, "estimateRegressionParameters", "()[D");
            mids$[mid_estimateRegressionParametersStandardErrors_be783177b060994b] = env->getMethodID(cls, "estimateRegressionParametersStandardErrors", "()[D");
            mids$[mid_estimateRegressionParametersVariance_eda3f19b8225f78f] = env->getMethodID(cls, "estimateRegressionParametersVariance", "()[[D");
            mids$[mid_estimateRegressionStandardError_9981f74b2d109da6] = env->getMethodID(cls, "estimateRegressionStandardError", "()D");
            mids$[mid_estimateResiduals_be783177b060994b] = env->getMethodID(cls, "estimateResiduals", "()[D");
            mids$[mid_isNoIntercept_eee3de00fe971136] = env->getMethodID(cls, "isNoIntercept", "()Z");
            mids$[mid_newSampleData_40b495c766d36227] = env->getMethodID(cls, "newSampleData", "([DII)V");
            mids$[mid_setNoIntercept_b35db77cae58639e] = env->getMethodID(cls, "setNoIntercept", "(Z)V");
            mids$[mid_getX_b2eebabce70526d8] = env->getMethodID(cls, "getX", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getY_92d7e8d8d3f1dfcf] = env->getMethodID(cls, "getY", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_calculateBeta_92d7e8d8d3f1dfcf] = env->getMethodID(cls, "calculateBeta", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_calculateBetaVariance_b2eebabce70526d8] = env->getMethodID(cls, "calculateBetaVariance", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_calculateErrorVariance_9981f74b2d109da6] = env->getMethodID(cls, "calculateErrorVariance", "()D");
            mids$[mid_validateSampleData_f1517d9a21833345] = env->getMethodID(cls, "validateSampleData", "([[D[D)V");
            mids$[mid_newYSampleData_a71c45509eaf92d1] = env->getMethodID(cls, "newYSampleData", "([D)V");
            mids$[mid_newXSampleData_11ecdbb5af7ed67d] = env->getMethodID(cls, "newXSampleData", "([[D)V");
            mids$[mid_validateCovarianceData_5a4cd41298d36845] = env->getMethodID(cls, "validateCovarianceData", "([[D[[D)V");
            mids$[mid_calculateResiduals_92d7e8d8d3f1dfcf] = env->getMethodID(cls, "calculateResiduals", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_calculateYVariance_9981f74b2d109da6] = env->getMethodID(cls, "calculateYVariance", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AbstractMultipleLinearRegression::AbstractMultipleLinearRegression() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble AbstractMultipleLinearRegression::estimateErrorVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_estimateErrorVariance_9981f74b2d109da6]);
        }

        jdouble AbstractMultipleLinearRegression::estimateRegressandVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_estimateRegressandVariance_9981f74b2d109da6]);
        }

        JArray< jdouble > AbstractMultipleLinearRegression::estimateRegressionParameters() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_estimateRegressionParameters_be783177b060994b]));
        }

        JArray< jdouble > AbstractMultipleLinearRegression::estimateRegressionParametersStandardErrors() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_estimateRegressionParametersStandardErrors_be783177b060994b]));
        }

        JArray< JArray< jdouble > > AbstractMultipleLinearRegression::estimateRegressionParametersVariance() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_estimateRegressionParametersVariance_eda3f19b8225f78f]));
        }

        jdouble AbstractMultipleLinearRegression::estimateRegressionStandardError() const
        {
          return env->callDoubleMethod(this$, mids$[mid_estimateRegressionStandardError_9981f74b2d109da6]);
        }

        JArray< jdouble > AbstractMultipleLinearRegression::estimateResiduals() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_estimateResiduals_be783177b060994b]));
        }

        jboolean AbstractMultipleLinearRegression::isNoIntercept() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isNoIntercept_eee3de00fe971136]);
        }

        void AbstractMultipleLinearRegression::newSampleData(const JArray< jdouble > & a0, jint a1, jint a2) const
        {
          env->callVoidMethod(this$, mids$[mid_newSampleData_40b495c766d36227], a0.this$, a1, a2);
        }

        void AbstractMultipleLinearRegression::setNoIntercept(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setNoIntercept_b35db77cae58639e], a0);
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
      namespace regression {
        static PyObject *t_AbstractMultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractMultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AbstractMultipleLinearRegression_init_(t_AbstractMultipleLinearRegression *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AbstractMultipleLinearRegression_estimateErrorVariance(t_AbstractMultipleLinearRegression *self);
        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressandVariance(t_AbstractMultipleLinearRegression *self);
        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressionParameters(t_AbstractMultipleLinearRegression *self);
        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressionParametersStandardErrors(t_AbstractMultipleLinearRegression *self);
        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressionParametersVariance(t_AbstractMultipleLinearRegression *self);
        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressionStandardError(t_AbstractMultipleLinearRegression *self);
        static PyObject *t_AbstractMultipleLinearRegression_estimateResiduals(t_AbstractMultipleLinearRegression *self);
        static PyObject *t_AbstractMultipleLinearRegression_isNoIntercept(t_AbstractMultipleLinearRegression *self);
        static PyObject *t_AbstractMultipleLinearRegression_newSampleData(t_AbstractMultipleLinearRegression *self, PyObject *args);
        static PyObject *t_AbstractMultipleLinearRegression_setNoIntercept(t_AbstractMultipleLinearRegression *self, PyObject *arg);
        static PyObject *t_AbstractMultipleLinearRegression_get__noIntercept(t_AbstractMultipleLinearRegression *self, void *data);
        static int t_AbstractMultipleLinearRegression_set__noIntercept(t_AbstractMultipleLinearRegression *self, PyObject *arg, void *data);
        static PyGetSetDef t_AbstractMultipleLinearRegression__fields_[] = {
          DECLARE_GETSET_FIELD(t_AbstractMultipleLinearRegression, noIntercept),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractMultipleLinearRegression__methods_[] = {
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, estimateErrorVariance, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, estimateRegressandVariance, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, estimateRegressionParameters, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, estimateRegressionParametersStandardErrors, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, estimateRegressionParametersVariance, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, estimateRegressionStandardError, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, estimateResiduals, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, isNoIntercept, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, newSampleData, METH_VARARGS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, setNoIntercept, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractMultipleLinearRegression)[] = {
          { Py_tp_methods, t_AbstractMultipleLinearRegression__methods_ },
          { Py_tp_init, (void *) t_AbstractMultipleLinearRegression_init_ },
          { Py_tp_getset, t_AbstractMultipleLinearRegression__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractMultipleLinearRegression)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractMultipleLinearRegression, t_AbstractMultipleLinearRegression, AbstractMultipleLinearRegression);

        void t_AbstractMultipleLinearRegression::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractMultipleLinearRegression), &PY_TYPE_DEF(AbstractMultipleLinearRegression), module, "AbstractMultipleLinearRegression", 0);
        }

        void t_AbstractMultipleLinearRegression::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMultipleLinearRegression), "class_", make_descriptor(AbstractMultipleLinearRegression::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMultipleLinearRegression), "wrapfn_", make_descriptor(t_AbstractMultipleLinearRegression::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMultipleLinearRegression), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractMultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractMultipleLinearRegression::initializeClass, 1)))
            return NULL;
          return t_AbstractMultipleLinearRegression::wrap_Object(AbstractMultipleLinearRegression(((t_AbstractMultipleLinearRegression *) arg)->object.this$));
        }
        static PyObject *t_AbstractMultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractMultipleLinearRegression::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AbstractMultipleLinearRegression_init_(t_AbstractMultipleLinearRegression *self, PyObject *args, PyObject *kwds)
        {
          AbstractMultipleLinearRegression object((jobject) NULL);

          INT_CALL(object = AbstractMultipleLinearRegression());
          self->object = object;

          return 0;
        }

        static PyObject *t_AbstractMultipleLinearRegression_estimateErrorVariance(t_AbstractMultipleLinearRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.estimateErrorVariance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressandVariance(t_AbstractMultipleLinearRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.estimateRegressandVariance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressionParameters(t_AbstractMultipleLinearRegression *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.estimateRegressionParameters());
          return result.wrap();
        }

        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressionParametersStandardErrors(t_AbstractMultipleLinearRegression *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.estimateRegressionParametersStandardErrors());
          return result.wrap();
        }

        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressionParametersVariance(t_AbstractMultipleLinearRegression *self)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);
          OBJ_CALL(result = self->object.estimateRegressionParametersVariance());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressionStandardError(t_AbstractMultipleLinearRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.estimateRegressionStandardError());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractMultipleLinearRegression_estimateResiduals(t_AbstractMultipleLinearRegression *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.estimateResiduals());
          return result.wrap();
        }

        static PyObject *t_AbstractMultipleLinearRegression_isNoIntercept(t_AbstractMultipleLinearRegression *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isNoIntercept());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractMultipleLinearRegression_newSampleData(t_AbstractMultipleLinearRegression *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[DII", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.newSampleData(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "newSampleData", args);
          return NULL;
        }

        static PyObject *t_AbstractMultipleLinearRegression_setNoIntercept(t_AbstractMultipleLinearRegression *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setNoIntercept(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setNoIntercept", arg);
          return NULL;
        }

        static PyObject *t_AbstractMultipleLinearRegression_get__noIntercept(t_AbstractMultipleLinearRegression *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isNoIntercept());
          Py_RETURN_BOOL(value);
        }
        static int t_AbstractMultipleLinearRegression_set__noIntercept(t_AbstractMultipleLinearRegression *self, PyObject *arg, void *data)
        {
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object.setNoIntercept(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "noIntercept", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/rank/Percentile.h"
#include "org/hipparchus/stat/descriptive/rank/Percentile.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/ranking/NaNStrategy.h"
#include "org/hipparchus/util/PivotingStrategy.h"
#include "org/hipparchus/stat/descriptive/rank/Percentile$EstimationType.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/KthSelector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {

          ::java::lang::Class *Percentile::class$ = NULL;
          jmethodID *Percentile::mids$ = NULL;
          bool Percentile::live$ = false;

          jclass Percentile::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/rank/Percentile");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_copy_e585142f83051cda] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/rank/Percentile;");
              mids$[mid_evaluate_bf28ed64d6e8576b] = env->getMethodID(cls, "evaluate", "(D)D");
              mids$[mid_evaluate_02811febb145516c] = env->getMethodID(cls, "evaluate", "([DD)D");
              mids$[mid_evaluate_620ea098e5f0da00] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_evaluate_764f25835195d79e] = env->getMethodID(cls, "evaluate", "([DIID)D");
              mids$[mid_getEstimationType_07008c3d622bf167] = env->getMethodID(cls, "getEstimationType", "()Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;");
              mids$[mid_getKthSelector_cc406bafcbb38cb4] = env->getMethodID(cls, "getKthSelector", "()Lorg/hipparchus/util/KthSelector;");
              mids$[mid_getNaNStrategy_7ad66d754bcf87e2] = env->getMethodID(cls, "getNaNStrategy", "()Lorg/hipparchus/stat/ranking/NaNStrategy;");
              mids$[mid_getPivotingStrategy_e19ea4ef6d7ee6b5] = env->getMethodID(cls, "getPivotingStrategy", "()Lorg/hipparchus/util/PivotingStrategy;");
              mids$[mid_getQuantile_9981f74b2d109da6] = env->getMethodID(cls, "getQuantile", "()D");
              mids$[mid_setData_a71c45509eaf92d1] = env->getMethodID(cls, "setData", "([D)V");
              mids$[mid_setData_40b495c766d36227] = env->getMethodID(cls, "setData", "([DII)V");
              mids$[mid_setQuantile_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setQuantile", "(D)V");
              mids$[mid_withEstimationType_720b3dc5c55c248a] = env->getMethodID(cls, "withEstimationType", "(Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;)Lorg/hipparchus/stat/descriptive/rank/Percentile;");
              mids$[mid_withKthSelector_494f8f6ae8574852] = env->getMethodID(cls, "withKthSelector", "(Lorg/hipparchus/util/KthSelector;)Lorg/hipparchus/stat/descriptive/rank/Percentile;");
              mids$[mid_withNaNStrategy_2ccbc67d03d0079d] = env->getMethodID(cls, "withNaNStrategy", "(Lorg/hipparchus/stat/ranking/NaNStrategy;)Lorg/hipparchus/stat/descriptive/rank/Percentile;");
              mids$[mid_getWorkArray_8f6ddc643efefb02] = env->getMethodID(cls, "getWorkArray", "([DII)[D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Percentile::Percentile() : ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          Percentile::Percentile(jdouble a0) : ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

          Percentile Percentile::copy() const
          {
            return Percentile(env->callObjectMethod(this$, mids$[mid_copy_e585142f83051cda]));
          }

          jdouble Percentile::evaluate(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_bf28ed64d6e8576b], a0);
          }

          jdouble Percentile::evaluate(const JArray< jdouble > & a0, jdouble a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_02811febb145516c], a0.this$, a1);
          }

          jdouble Percentile::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_620ea098e5f0da00], a0.this$, a1, a2);
          }

          jdouble Percentile::evaluate(const JArray< jdouble > & a0, jint a1, jint a2, jdouble a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_764f25835195d79e], a0.this$, a1, a2, a3);
          }

          ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType Percentile::getEstimationType() const
          {
            return ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType(env->callObjectMethod(this$, mids$[mid_getEstimationType_07008c3d622bf167]));
          }

          ::org::hipparchus::util::KthSelector Percentile::getKthSelector() const
          {
            return ::org::hipparchus::util::KthSelector(env->callObjectMethod(this$, mids$[mid_getKthSelector_cc406bafcbb38cb4]));
          }

          ::org::hipparchus::stat::ranking::NaNStrategy Percentile::getNaNStrategy() const
          {
            return ::org::hipparchus::stat::ranking::NaNStrategy(env->callObjectMethod(this$, mids$[mid_getNaNStrategy_7ad66d754bcf87e2]));
          }

          ::org::hipparchus::util::PivotingStrategy Percentile::getPivotingStrategy() const
          {
            return ::org::hipparchus::util::PivotingStrategy(env->callObjectMethod(this$, mids$[mid_getPivotingStrategy_e19ea4ef6d7ee6b5]));
          }

          jdouble Percentile::getQuantile() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getQuantile_9981f74b2d109da6]);
          }

          void Percentile::setData(const JArray< jdouble > & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setData_a71c45509eaf92d1], a0.this$);
          }

          void Percentile::setData(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            env->callVoidMethod(this$, mids$[mid_setData_40b495c766d36227], a0.this$, a1, a2);
          }

          void Percentile::setQuantile(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setQuantile_1ad26e8c8c0cd65b], a0);
          }

          Percentile Percentile::withEstimationType(const ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType & a0) const
          {
            return Percentile(env->callObjectMethod(this$, mids$[mid_withEstimationType_720b3dc5c55c248a], a0.this$));
          }

          Percentile Percentile::withKthSelector(const ::org::hipparchus::util::KthSelector & a0) const
          {
            return Percentile(env->callObjectMethod(this$, mids$[mid_withKthSelector_494f8f6ae8574852], a0.this$));
          }

          Percentile Percentile::withNaNStrategy(const ::org::hipparchus::stat::ranking::NaNStrategy & a0) const
          {
            return Percentile(env->callObjectMethod(this$, mids$[mid_withNaNStrategy_2ccbc67d03d0079d], a0.this$));
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
        namespace rank {
          static PyObject *t_Percentile_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Percentile_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Percentile_init_(t_Percentile *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Percentile_copy(t_Percentile *self, PyObject *args);
          static PyObject *t_Percentile_evaluate(t_Percentile *self, PyObject *args);
          static PyObject *t_Percentile_getEstimationType(t_Percentile *self);
          static PyObject *t_Percentile_getKthSelector(t_Percentile *self);
          static PyObject *t_Percentile_getNaNStrategy(t_Percentile *self);
          static PyObject *t_Percentile_getPivotingStrategy(t_Percentile *self);
          static PyObject *t_Percentile_getQuantile(t_Percentile *self);
          static PyObject *t_Percentile_setData(t_Percentile *self, PyObject *args);
          static PyObject *t_Percentile_setQuantile(t_Percentile *self, PyObject *arg);
          static PyObject *t_Percentile_withEstimationType(t_Percentile *self, PyObject *arg);
          static PyObject *t_Percentile_withKthSelector(t_Percentile *self, PyObject *arg);
          static PyObject *t_Percentile_withNaNStrategy(t_Percentile *self, PyObject *arg);
          static int t_Percentile_set__data(t_Percentile *self, PyObject *arg, void *data);
          static PyObject *t_Percentile_get__estimationType(t_Percentile *self, void *data);
          static PyObject *t_Percentile_get__kthSelector(t_Percentile *self, void *data);
          static PyObject *t_Percentile_get__naNStrategy(t_Percentile *self, void *data);
          static PyObject *t_Percentile_get__pivotingStrategy(t_Percentile *self, void *data);
          static PyObject *t_Percentile_get__quantile(t_Percentile *self, void *data);
          static int t_Percentile_set__quantile(t_Percentile *self, PyObject *arg, void *data);
          static PyGetSetDef t_Percentile__fields_[] = {
            DECLARE_SET_FIELD(t_Percentile, data),
            DECLARE_GET_FIELD(t_Percentile, estimationType),
            DECLARE_GET_FIELD(t_Percentile, kthSelector),
            DECLARE_GET_FIELD(t_Percentile, naNStrategy),
            DECLARE_GET_FIELD(t_Percentile, pivotingStrategy),
            DECLARE_GETSET_FIELD(t_Percentile, quantile),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Percentile__methods_[] = {
            DECLARE_METHOD(t_Percentile, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Percentile, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Percentile, copy, METH_VARARGS),
            DECLARE_METHOD(t_Percentile, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Percentile, getEstimationType, METH_NOARGS),
            DECLARE_METHOD(t_Percentile, getKthSelector, METH_NOARGS),
            DECLARE_METHOD(t_Percentile, getNaNStrategy, METH_NOARGS),
            DECLARE_METHOD(t_Percentile, getPivotingStrategy, METH_NOARGS),
            DECLARE_METHOD(t_Percentile, getQuantile, METH_NOARGS),
            DECLARE_METHOD(t_Percentile, setData, METH_VARARGS),
            DECLARE_METHOD(t_Percentile, setQuantile, METH_O),
            DECLARE_METHOD(t_Percentile, withEstimationType, METH_O),
            DECLARE_METHOD(t_Percentile, withKthSelector, METH_O),
            DECLARE_METHOD(t_Percentile, withNaNStrategy, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Percentile)[] = {
            { Py_tp_methods, t_Percentile__methods_ },
            { Py_tp_init, (void *) t_Percentile_init_ },
            { Py_tp_getset, t_Percentile__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Percentile)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(Percentile, t_Percentile, Percentile);

          void t_Percentile::install(PyObject *module)
          {
            installType(&PY_TYPE(Percentile), &PY_TYPE_DEF(Percentile), module, "Percentile", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile), "EstimationType", make_descriptor(&PY_TYPE_DEF(Percentile$EstimationType)));
          }

          void t_Percentile::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile), "class_", make_descriptor(Percentile::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile), "wrapfn_", make_descriptor(t_Percentile::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Percentile), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Percentile_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Percentile::initializeClass, 1)))
              return NULL;
            return t_Percentile::wrap_Object(Percentile(((t_Percentile *) arg)->object.this$));
          }
          static PyObject *t_Percentile_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Percentile::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Percentile_init_(t_Percentile *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                Percentile object((jobject) NULL);

                INT_CALL(object = Percentile());
                self->object = object;
                break;
              }
             case 1:
              {
                jdouble a0;
                Percentile object((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  INT_CALL(object = Percentile(a0));
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

          static PyObject *t_Percentile_copy(t_Percentile *self, PyObject *args)
          {
            Percentile result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_Percentile::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Percentile), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_Percentile_evaluate(t_Percentile *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.evaluate(a0));
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
                  OBJ_CALL(result = self->object.evaluate(a0, a1));
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
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
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
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(Percentile), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_Percentile_getEstimationType(t_Percentile *self)
          {
            ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType result((jobject) NULL);
            OBJ_CALL(result = self->object.getEstimationType());
            return ::org::hipparchus::stat::descriptive::rank::t_Percentile$EstimationType::wrap_Object(result);
          }

          static PyObject *t_Percentile_getKthSelector(t_Percentile *self)
          {
            ::org::hipparchus::util::KthSelector result((jobject) NULL);
            OBJ_CALL(result = self->object.getKthSelector());
            return ::org::hipparchus::util::t_KthSelector::wrap_Object(result);
          }

          static PyObject *t_Percentile_getNaNStrategy(t_Percentile *self)
          {
            ::org::hipparchus::stat::ranking::NaNStrategy result((jobject) NULL);
            OBJ_CALL(result = self->object.getNaNStrategy());
            return ::org::hipparchus::stat::ranking::t_NaNStrategy::wrap_Object(result);
          }

          static PyObject *t_Percentile_getPivotingStrategy(t_Percentile *self)
          {
            ::org::hipparchus::util::PivotingStrategy result((jobject) NULL);
            OBJ_CALL(result = self->object.getPivotingStrategy());
            return ::org::hipparchus::util::t_PivotingStrategy::wrap_Object(result);
          }

          static PyObject *t_Percentile_getQuantile(t_Percentile *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getQuantile());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Percentile_setData(t_Percentile *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                JArray< jdouble > a0((jobject) NULL);

                if (!parseArgs(args, "[D", &a0))
                {
                  OBJ_CALL(self->object.setData(a0));
                  Py_RETURN_NONE;
                }
              }
              break;
             case 3:
              {
                JArray< jdouble > a0((jobject) NULL);
                jint a1;
                jint a2;

                if (!parseArgs(args, "[DII", &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.setData(a0, a1, a2));
                  Py_RETURN_NONE;
                }
              }
            }

            return callSuper(PY_TYPE(Percentile), (PyObject *) self, "setData", args, 2);
          }

          static PyObject *t_Percentile_setQuantile(t_Percentile *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setQuantile(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setQuantile", arg);
            return NULL;
          }

          static PyObject *t_Percentile_withEstimationType(t_Percentile *self, PyObject *arg)
          {
            ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType a0((jobject) NULL);
            PyTypeObject **p0;
            Percentile result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType::initializeClass, &a0, &p0, ::org::hipparchus::stat::descriptive::rank::t_Percentile$EstimationType::parameters_))
            {
              OBJ_CALL(result = self->object.withEstimationType(a0));
              return t_Percentile::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withEstimationType", arg);
            return NULL;
          }

          static PyObject *t_Percentile_withKthSelector(t_Percentile *self, PyObject *arg)
          {
            ::org::hipparchus::util::KthSelector a0((jobject) NULL);
            Percentile result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::util::KthSelector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.withKthSelector(a0));
              return t_Percentile::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withKthSelector", arg);
            return NULL;
          }

          static PyObject *t_Percentile_withNaNStrategy(t_Percentile *self, PyObject *arg)
          {
            ::org::hipparchus::stat::ranking::NaNStrategy a0((jobject) NULL);
            PyTypeObject **p0;
            Percentile result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::stat::ranking::NaNStrategy::initializeClass, &a0, &p0, ::org::hipparchus::stat::ranking::t_NaNStrategy::parameters_))
            {
              OBJ_CALL(result = self->object.withNaNStrategy(a0));
              return t_Percentile::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withNaNStrategy", arg);
            return NULL;
          }

          static int t_Percentile_set__data(t_Percentile *self, PyObject *arg, void *data)
          {
            {
              JArray< jdouble > value((jobject) NULL);
              if (!parseArg(arg, "[D", &value))
              {
                INT_CALL(self->object.setData(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "data", arg);
            return -1;
          }

          static PyObject *t_Percentile_get__estimationType(t_Percentile *self, void *data)
          {
            ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType value((jobject) NULL);
            OBJ_CALL(value = self->object.getEstimationType());
            return ::org::hipparchus::stat::descriptive::rank::t_Percentile$EstimationType::wrap_Object(value);
          }

          static PyObject *t_Percentile_get__kthSelector(t_Percentile *self, void *data)
          {
            ::org::hipparchus::util::KthSelector value((jobject) NULL);
            OBJ_CALL(value = self->object.getKthSelector());
            return ::org::hipparchus::util::t_KthSelector::wrap_Object(value);
          }

          static PyObject *t_Percentile_get__naNStrategy(t_Percentile *self, void *data)
          {
            ::org::hipparchus::stat::ranking::NaNStrategy value((jobject) NULL);
            OBJ_CALL(value = self->object.getNaNStrategy());
            return ::org::hipparchus::stat::ranking::t_NaNStrategy::wrap_Object(value);
          }

          static PyObject *t_Percentile_get__pivotingStrategy(t_Percentile *self, void *data)
          {
            ::org::hipparchus::util::PivotingStrategy value((jobject) NULL);
            OBJ_CALL(value = self->object.getPivotingStrategy());
            return ::org::hipparchus::util::t_PivotingStrategy::wrap_Object(value);
          }

          static PyObject *t_Percentile_get__quantile(t_Percentile *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getQuantile());
            return PyFloat_FromDouble((double) value);
          }
          static int t_Percentile_set__quantile(t_Percentile *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setQuantile(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "quantile", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/ItrfVersionProvider.h"
#include "org/orekit/frames/ITRFVersionLoader$ITRFVersionConfiguration.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *ItrfVersionProvider::class$ = NULL;
      jmethodID *ItrfVersionProvider::mids$ = NULL;
      bool ItrfVersionProvider::live$ = false;

      jclass ItrfVersionProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/ItrfVersionProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getConfiguration_2cd40ae1f6a1f844] = env->getMethodID(cls, "getConfiguration", "(Ljava/lang/String;I)Lorg/orekit/frames/ITRFVersionLoader$ITRFVersionConfiguration;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::ITRFVersionLoader$ITRFVersionConfiguration ItrfVersionProvider::getConfiguration(const ::java::lang::String & a0, jint a1) const
      {
        return ::org::orekit::frames::ITRFVersionLoader$ITRFVersionConfiguration(env->callObjectMethod(this$, mids$[mid_getConfiguration_2cd40ae1f6a1f844], a0.this$, a1));
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
      static PyObject *t_ItrfVersionProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ItrfVersionProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ItrfVersionProvider_getConfiguration(t_ItrfVersionProvider *self, PyObject *args);

      static PyMethodDef t_ItrfVersionProvider__methods_[] = {
        DECLARE_METHOD(t_ItrfVersionProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ItrfVersionProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ItrfVersionProvider, getConfiguration, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ItrfVersionProvider)[] = {
        { Py_tp_methods, t_ItrfVersionProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ItrfVersionProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ItrfVersionProvider, t_ItrfVersionProvider, ItrfVersionProvider);

      void t_ItrfVersionProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(ItrfVersionProvider), &PY_TYPE_DEF(ItrfVersionProvider), module, "ItrfVersionProvider", 0);
      }

      void t_ItrfVersionProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ItrfVersionProvider), "class_", make_descriptor(ItrfVersionProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ItrfVersionProvider), "wrapfn_", make_descriptor(t_ItrfVersionProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ItrfVersionProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ItrfVersionProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ItrfVersionProvider::initializeClass, 1)))
          return NULL;
        return t_ItrfVersionProvider::wrap_Object(ItrfVersionProvider(((t_ItrfVersionProvider *) arg)->object.this$));
      }
      static PyObject *t_ItrfVersionProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ItrfVersionProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ItrfVersionProvider_getConfiguration(t_ItrfVersionProvider *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        jint a1;
        ::org::orekit::frames::ITRFVersionLoader$ITRFVersionConfiguration result((jobject) NULL);

        if (!parseArgs(args, "sI", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getConfiguration(a0, a1));
          return ::org::orekit::frames::t_ITRFVersionLoader$ITRFVersionConfiguration::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getConfiguration", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/EventMultipleHandler.h"
#include "org/hipparchus/ode/events/Action.h"
#include "java/util/List.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/events/handlers/EventMultipleHandler.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *EventMultipleHandler::class$ = NULL;
          jmethodID *EventMultipleHandler::mids$ = NULL;
          bool EventMultipleHandler::live$ = false;

          jclass EventMultipleHandler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/EventMultipleHandler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_addHandler_9d7d27130ee65e7b] = env->getMethodID(cls, "addHandler", "(Lorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/handlers/EventMultipleHandler;");
              mids$[mid_addHandlers_a1f562ed85ac821b] = env->getMethodID(cls, "addHandlers", "([Lorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/handlers/EventMultipleHandler;");
              mids$[mid_eventOccurred_66898681536e4202] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;Z)Lorg/hipparchus/ode/events/Action;");
              mids$[mid_getHandlers_d751c1a57012b438] = env->getMethodID(cls, "getHandlers", "()Ljava/util/List;");
              mids$[mid_init_381d97cc333bc994] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/propagation/events/EventDetector;)V");
              mids$[mid_resetState_556ad75a8c47fba2] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/events/EventDetector;Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");
              mids$[mid_setHandlers_aa335fea495d60e0] = env->getMethodID(cls, "setHandlers", "(Ljava/util/List;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          EventMultipleHandler::EventMultipleHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          EventMultipleHandler EventMultipleHandler::addHandler(const ::org::orekit::propagation::events::handlers::EventHandler & a0) const
          {
            return EventMultipleHandler(env->callObjectMethod(this$, mids$[mid_addHandler_9d7d27130ee65e7b], a0.this$));
          }

          EventMultipleHandler EventMultipleHandler::addHandlers(const JArray< ::org::orekit::propagation::events::handlers::EventHandler > & a0) const
          {
            return EventMultipleHandler(env->callObjectMethod(this$, mids$[mid_addHandlers_a1f562ed85ac821b], a0.this$));
          }

          ::org::hipparchus::ode::events::Action EventMultipleHandler::eventOccurred(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::events::EventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_66898681536e4202], a0.this$, a1.this$, a2));
          }

          ::java::util::List EventMultipleHandler::getHandlers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getHandlers_d751c1a57012b438]));
          }

          void EventMultipleHandler::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::propagation::events::EventDetector & a2) const
          {
            env->callVoidMethod(this$, mids$[mid_init_381d97cc333bc994], a0.this$, a1.this$, a2.this$);
          }

          ::org::orekit::propagation::SpacecraftState EventMultipleHandler::resetState(const ::org::orekit::propagation::events::EventDetector & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
          {
            return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_resetState_556ad75a8c47fba2], a0.this$, a1.this$));
          }

          void EventMultipleHandler::setHandlers(const ::java::util::List & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setHandlers_aa335fea495d60e0], a0.this$);
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
          static PyObject *t_EventMultipleHandler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EventMultipleHandler_instance_(PyTypeObject *type, PyObject *arg);
          static int t_EventMultipleHandler_init_(t_EventMultipleHandler *self, PyObject *args, PyObject *kwds);
          static PyObject *t_EventMultipleHandler_addHandler(t_EventMultipleHandler *self, PyObject *arg);
          static PyObject *t_EventMultipleHandler_addHandlers(t_EventMultipleHandler *self, PyObject *arg);
          static PyObject *t_EventMultipleHandler_eventOccurred(t_EventMultipleHandler *self, PyObject *args);
          static PyObject *t_EventMultipleHandler_getHandlers(t_EventMultipleHandler *self);
          static PyObject *t_EventMultipleHandler_init(t_EventMultipleHandler *self, PyObject *args);
          static PyObject *t_EventMultipleHandler_resetState(t_EventMultipleHandler *self, PyObject *args);
          static PyObject *t_EventMultipleHandler_setHandlers(t_EventMultipleHandler *self, PyObject *arg);
          static PyObject *t_EventMultipleHandler_get__handlers(t_EventMultipleHandler *self, void *data);
          static int t_EventMultipleHandler_set__handlers(t_EventMultipleHandler *self, PyObject *arg, void *data);
          static PyGetSetDef t_EventMultipleHandler__fields_[] = {
            DECLARE_GETSET_FIELD(t_EventMultipleHandler, handlers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_EventMultipleHandler__methods_[] = {
            DECLARE_METHOD(t_EventMultipleHandler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EventMultipleHandler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EventMultipleHandler, addHandler, METH_O),
            DECLARE_METHOD(t_EventMultipleHandler, addHandlers, METH_O),
            DECLARE_METHOD(t_EventMultipleHandler, eventOccurred, METH_VARARGS),
            DECLARE_METHOD(t_EventMultipleHandler, getHandlers, METH_NOARGS),
            DECLARE_METHOD(t_EventMultipleHandler, init, METH_VARARGS),
            DECLARE_METHOD(t_EventMultipleHandler, resetState, METH_VARARGS),
            DECLARE_METHOD(t_EventMultipleHandler, setHandlers, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(EventMultipleHandler)[] = {
            { Py_tp_methods, t_EventMultipleHandler__methods_ },
            { Py_tp_init, (void *) t_EventMultipleHandler_init_ },
            { Py_tp_getset, t_EventMultipleHandler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(EventMultipleHandler)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(EventMultipleHandler, t_EventMultipleHandler, EventMultipleHandler);

          void t_EventMultipleHandler::install(PyObject *module)
          {
            installType(&PY_TYPE(EventMultipleHandler), &PY_TYPE_DEF(EventMultipleHandler), module, "EventMultipleHandler", 0);
          }

          void t_EventMultipleHandler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(EventMultipleHandler), "class_", make_descriptor(EventMultipleHandler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EventMultipleHandler), "wrapfn_", make_descriptor(t_EventMultipleHandler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EventMultipleHandler), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_EventMultipleHandler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, EventMultipleHandler::initializeClass, 1)))
              return NULL;
            return t_EventMultipleHandler::wrap_Object(EventMultipleHandler(((t_EventMultipleHandler *) arg)->object.this$));
          }
          static PyObject *t_EventMultipleHandler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, EventMultipleHandler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_EventMultipleHandler_init_(t_EventMultipleHandler *self, PyObject *args, PyObject *kwds)
          {
            EventMultipleHandler object((jobject) NULL);

            INT_CALL(object = EventMultipleHandler());
            self->object = object;

            return 0;
          }

          static PyObject *t_EventMultipleHandler_addHandler(t_EventMultipleHandler *self, PyObject *arg)
          {
            ::org::orekit::propagation::events::handlers::EventHandler a0((jobject) NULL);
            EventMultipleHandler result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::events::handlers::EventHandler::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.addHandler(a0));
              return t_EventMultipleHandler::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "addHandler", arg);
            return NULL;
          }

          static PyObject *t_EventMultipleHandler_addHandlers(t_EventMultipleHandler *self, PyObject *arg)
          {
            JArray< ::org::orekit::propagation::events::handlers::EventHandler > a0((jobject) NULL);
            EventMultipleHandler result((jobject) NULL);

            if (!parseArg(arg, "[k", ::org::orekit::propagation::events::handlers::EventHandler::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.addHandlers(a0));
              return t_EventMultipleHandler::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "addHandlers", arg);
            return NULL;
          }

          static PyObject *t_EventMultipleHandler_eventOccurred(t_EventMultipleHandler *self, PyObject *args)
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

          static PyObject *t_EventMultipleHandler_getHandlers(t_EventMultipleHandler *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getHandlers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::events::handlers::PY_TYPE(EventHandler));
          }

          static PyObject *t_EventMultipleHandler_init(t_EventMultipleHandler *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::propagation::events::EventDetector a2((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::propagation::events::EventDetector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.init(a0, a1, a2));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }

          static PyObject *t_EventMultipleHandler_resetState(t_EventMultipleHandler *self, PyObject *args)
          {
            ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
            ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
            ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::propagation::events::EventDetector::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.resetState(a0, a1));
              return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "resetState", args);
            return NULL;
          }

          static PyObject *t_EventMultipleHandler_setHandlers(t_EventMultipleHandler *self, PyObject *arg)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(self->object.setHandlers(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setHandlers", arg);
            return NULL;
          }

          static PyObject *t_EventMultipleHandler_get__handlers(t_EventMultipleHandler *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getHandlers());
            return ::java::util::t_List::wrap_Object(value);
          }
          static int t_EventMultipleHandler_set__handlers(t_EventMultipleHandler *self, PyObject *arg, void *data)
          {
            {
              ::java::util::List value((jobject) NULL);
              if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
              {
                INT_CALL(self->object.setHandlers(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "handlers", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/Authentication.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/ntrip/Authentication.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *Authentication::class$ = NULL;
          jmethodID *Authentication::mids$ = NULL;
          bool Authentication::live$ = false;
          Authentication *Authentication::BASIC = NULL;
          Authentication *Authentication::DIGEST = NULL;
          Authentication *Authentication::NONE = NULL;

          jclass Authentication::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/Authentication");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getAuthentication_f3fe34d14a023c7b] = env->getStaticMethodID(cls, "getAuthentication", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/Authentication;");
              mids$[mid_valueOf_f3fe34d14a023c7b] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/Authentication;");
              mids$[mid_values_2d37d87fc0e7939d] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/ntrip/Authentication;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              BASIC = new Authentication(env->getStaticObjectField(cls, "BASIC", "Lorg/orekit/gnss/metric/ntrip/Authentication;"));
              DIGEST = new Authentication(env->getStaticObjectField(cls, "DIGEST", "Lorg/orekit/gnss/metric/ntrip/Authentication;"));
              NONE = new Authentication(env->getStaticObjectField(cls, "NONE", "Lorg/orekit/gnss/metric/ntrip/Authentication;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Authentication Authentication::getAuthentication(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return Authentication(env->callStaticObjectMethod(cls, mids$[mid_getAuthentication_f3fe34d14a023c7b], a0.this$));
          }

          Authentication Authentication::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return Authentication(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f3fe34d14a023c7b], a0.this$));
          }

          JArray< Authentication > Authentication::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< Authentication >(env->callStaticObjectMethod(cls, mids$[mid_values_2d37d87fc0e7939d]));
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
          static PyObject *t_Authentication_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Authentication_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Authentication_of_(t_Authentication *self, PyObject *args);
          static PyObject *t_Authentication_getAuthentication(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Authentication_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_Authentication_values(PyTypeObject *type);
          static PyObject *t_Authentication_get__parameters_(t_Authentication *self, void *data);
          static PyGetSetDef t_Authentication__fields_[] = {
            DECLARE_GET_FIELD(t_Authentication, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Authentication__methods_[] = {
            DECLARE_METHOD(t_Authentication, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Authentication, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Authentication, of_, METH_VARARGS),
            DECLARE_METHOD(t_Authentication, getAuthentication, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Authentication, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Authentication, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Authentication)[] = {
            { Py_tp_methods, t_Authentication__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Authentication__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Authentication)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(Authentication, t_Authentication, Authentication);
          PyObject *t_Authentication::wrap_Object(const Authentication& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Authentication::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Authentication *self = (t_Authentication *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_Authentication::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Authentication::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Authentication *self = (t_Authentication *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_Authentication::install(PyObject *module)
          {
            installType(&PY_TYPE(Authentication), &PY_TYPE_DEF(Authentication), module, "Authentication", 0);
          }

          void t_Authentication::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Authentication), "class_", make_descriptor(Authentication::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Authentication), "wrapfn_", make_descriptor(t_Authentication::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Authentication), "boxfn_", make_descriptor(boxObject));
            env->getClass(Authentication::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Authentication), "BASIC", make_descriptor(t_Authentication::wrap_Object(*Authentication::BASIC)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Authentication), "DIGEST", make_descriptor(t_Authentication::wrap_Object(*Authentication::DIGEST)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Authentication), "NONE", make_descriptor(t_Authentication::wrap_Object(*Authentication::NONE)));
          }

          static PyObject *t_Authentication_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Authentication::initializeClass, 1)))
              return NULL;
            return t_Authentication::wrap_Object(Authentication(((t_Authentication *) arg)->object.this$));
          }
          static PyObject *t_Authentication_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Authentication::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Authentication_of_(t_Authentication *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_Authentication_getAuthentication(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            Authentication result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::Authentication::getAuthentication(a0));
              return t_Authentication::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getAuthentication", arg);
            return NULL;
          }

          static PyObject *t_Authentication_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            Authentication result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::Authentication::valueOf(a0));
              return t_Authentication::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_Authentication_values(PyTypeObject *type)
          {
            JArray< Authentication > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::Authentication::values());
            return JArray<jobject>(result.this$).wrap(t_Authentication::wrap_jobject);
          }
          static PyObject *t_Authentication_get__parameters_(t_Authentication *self, void *data)
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
#include "org/orekit/utils/ConstantPVCoordinatesProvider.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ConstantPVCoordinatesProvider::class$ = NULL;
      jmethodID *ConstantPVCoordinatesProvider::mids$ = NULL;
      bool ConstantPVCoordinatesProvider::live$ = false;

      jclass ConstantPVCoordinatesProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ConstantPVCoordinatesProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_1843aaa1680f622a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/OneAxisEllipsoid;)V");
          mids$[mid_init$_33b2482912e45406] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_8189496ebb480b99] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/frames/Frame;)V");
          mids$[mid_getPVCoordinates_6236a35378ed47a5] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPosition_abe01c75f7e82353] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ConstantPVCoordinatesProvider::ConstantPVCoordinatesProvider(const ::org::orekit::bodies::GeodeticPoint & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1843aaa1680f622a, a0.this$, a1.this$)) {}

      ConstantPVCoordinatesProvider::ConstantPVCoordinatesProvider(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_33b2482912e45406, a0.this$, a1.this$)) {}

      ConstantPVCoordinatesProvider::ConstantPVCoordinatesProvider(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::frames::Frame & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8189496ebb480b99, a0.this$, a1.this$)) {}

      ::org::orekit::utils::TimeStampedPVCoordinates ConstantPVCoordinatesProvider::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_6236a35378ed47a5], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D ConstantPVCoordinatesProvider::getPosition(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_abe01c75f7e82353], a0.this$, a1.this$));
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
      static PyObject *t_ConstantPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ConstantPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ConstantPVCoordinatesProvider_init_(t_ConstantPVCoordinatesProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ConstantPVCoordinatesProvider_getPVCoordinates(t_ConstantPVCoordinatesProvider *self, PyObject *args);
      static PyObject *t_ConstantPVCoordinatesProvider_getPosition(t_ConstantPVCoordinatesProvider *self, PyObject *args);

      static PyMethodDef t_ConstantPVCoordinatesProvider__methods_[] = {
        DECLARE_METHOD(t_ConstantPVCoordinatesProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConstantPVCoordinatesProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConstantPVCoordinatesProvider, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_ConstantPVCoordinatesProvider, getPosition, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ConstantPVCoordinatesProvider)[] = {
        { Py_tp_methods, t_ConstantPVCoordinatesProvider__methods_ },
        { Py_tp_init, (void *) t_ConstantPVCoordinatesProvider_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ConstantPVCoordinatesProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ConstantPVCoordinatesProvider, t_ConstantPVCoordinatesProvider, ConstantPVCoordinatesProvider);

      void t_ConstantPVCoordinatesProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(ConstantPVCoordinatesProvider), &PY_TYPE_DEF(ConstantPVCoordinatesProvider), module, "ConstantPVCoordinatesProvider", 0);
      }

      void t_ConstantPVCoordinatesProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantPVCoordinatesProvider), "class_", make_descriptor(ConstantPVCoordinatesProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantPVCoordinatesProvider), "wrapfn_", make_descriptor(t_ConstantPVCoordinatesProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantPVCoordinatesProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ConstantPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ConstantPVCoordinatesProvider::initializeClass, 1)))
          return NULL;
        return t_ConstantPVCoordinatesProvider::wrap_Object(ConstantPVCoordinatesProvider(((t_ConstantPVCoordinatesProvider *) arg)->object.this$));
      }
      static PyObject *t_ConstantPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ConstantPVCoordinatesProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ConstantPVCoordinatesProvider_init_(t_ConstantPVCoordinatesProvider *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
            ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
            ConstantPVCoordinatesProvider object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ConstantPVCoordinatesProvider(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ConstantPVCoordinatesProvider object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ConstantPVCoordinatesProvider(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ConstantPVCoordinatesProvider object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ConstantPVCoordinatesProvider(a0, a1));
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

      static PyObject *t_ConstantPVCoordinatesProvider_getPVCoordinates(t_ConstantPVCoordinatesProvider *self, PyObject *args)
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

      static PyObject *t_ConstantPVCoordinatesProvider_getPosition(t_ConstantPVCoordinatesProvider *self, PyObject *args)
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
#include "org/orekit/files/rinex/observation/RinexObservationHeader.h"
#include "org/orekit/gnss/SatInSystem.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/files/rinex/observation/GlonassSatelliteChannel.h"
#include "java/lang/Integer.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/orekit/files/rinex/AppliedDCBS.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/files/rinex/observation/ScaleFactorCorrection.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/files/rinex/AppliedPCVS.h"
#include "org/orekit/files/rinex/observation/PhaseShiftCorrection.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/ObservationType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          ::java::lang::Class *RinexObservationHeader::class$ = NULL;
          jmethodID *RinexObservationHeader::mids$ = NULL;
          bool RinexObservationHeader::live$ = false;

          jclass RinexObservationHeader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/observation/RinexObservationHeader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_addAppliedDCBS_cacb67a9e2822f90] = env->getMethodID(cls, "addAppliedDCBS", "(Lorg/orekit/files/rinex/AppliedDCBS;)V");
              mids$[mid_addAppliedPCVS_604ce729c44b1f15] = env->getMethodID(cls, "addAppliedPCVS", "(Lorg/orekit/files/rinex/AppliedPCVS;)V");
              mids$[mid_addGlonassChannel_31dba420c1ba38ab] = env->getMethodID(cls, "addGlonassChannel", "(Lorg/orekit/files/rinex/observation/GlonassSatelliteChannel;)V");
              mids$[mid_addPhaseShiftCorrection_d034c62f8126db5c] = env->getMethodID(cls, "addPhaseShiftCorrection", "(Lorg/orekit/files/rinex/observation/PhaseShiftCorrection;)V");
              mids$[mid_addScaleFactorCorrection_41be978230b54fd6] = env->getMethodID(cls, "addScaleFactorCorrection", "(Lorg/orekit/gnss/SatelliteSystem;Lorg/orekit/files/rinex/observation/ScaleFactorCorrection;)V");
              mids$[mid_getAgencyName_d2c8eb4129821f0e] = env->getMethodID(cls, "getAgencyName", "()Ljava/lang/String;");
              mids$[mid_getAntennaAzimuth_9981f74b2d109da6] = env->getMethodID(cls, "getAntennaAzimuth", "()D");
              mids$[mid_getAntennaBSight_032312bdeb3f2f93] = env->getMethodID(cls, "getAntennaBSight", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getAntennaHeight_9981f74b2d109da6] = env->getMethodID(cls, "getAntennaHeight", "()D");
              mids$[mid_getAntennaNumber_d2c8eb4129821f0e] = env->getMethodID(cls, "getAntennaNumber", "()Ljava/lang/String;");
              mids$[mid_getAntennaPhaseCenter_032312bdeb3f2f93] = env->getMethodID(cls, "getAntennaPhaseCenter", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getAntennaReferencePoint_032312bdeb3f2f93] = env->getMethodID(cls, "getAntennaReferencePoint", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getAntennaType_d2c8eb4129821f0e] = env->getMethodID(cls, "getAntennaType", "()Ljava/lang/String;");
              mids$[mid_getAntennaZeroDirection_032312bdeb3f2f93] = env->getMethodID(cls, "getAntennaZeroDirection", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getApproxPos_032312bdeb3f2f93] = env->getMethodID(cls, "getApproxPos", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getC1cCodePhaseBias_9981f74b2d109da6] = env->getMethodID(cls, "getC1cCodePhaseBias", "()D");
              mids$[mid_getC1pCodePhaseBias_9981f74b2d109da6] = env->getMethodID(cls, "getC1pCodePhaseBias", "()D");
              mids$[mid_getC2cCodePhaseBias_9981f74b2d109da6] = env->getMethodID(cls, "getC2cCodePhaseBias", "()D");
              mids$[mid_getC2pCodePhaseBias_9981f74b2d109da6] = env->getMethodID(cls, "getC2pCodePhaseBias", "()D");
              mids$[mid_getCenterMass_032312bdeb3f2f93] = env->getMethodID(cls, "getCenterMass", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getClkOffset_d6ab429752e7c267] = env->getMethodID(cls, "getClkOffset", "()I");
              mids$[mid_getEccentricities_0490d0574aafb07c] = env->getMethodID(cls, "getEccentricities", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_getGlonassChannels_d751c1a57012b438] = env->getMethodID(cls, "getGlonassChannels", "()Ljava/util/List;");
              mids$[mid_getInterval_9981f74b2d109da6] = env->getMethodID(cls, "getInterval", "()D");
              mids$[mid_getLeapSeconds_d6ab429752e7c267] = env->getMethodID(cls, "getLeapSeconds", "()I");
              mids$[mid_getLeapSecondsDayNum_d6ab429752e7c267] = env->getMethodID(cls, "getLeapSecondsDayNum", "()I");
              mids$[mid_getLeapSecondsFuture_d6ab429752e7c267] = env->getMethodID(cls, "getLeapSecondsFuture", "()I");
              mids$[mid_getLeapSecondsWeekNum_d6ab429752e7c267] = env->getMethodID(cls, "getLeapSecondsWeekNum", "()I");
              mids$[mid_getListAppliedDCBS_d751c1a57012b438] = env->getMethodID(cls, "getListAppliedDCBS", "()Ljava/util/List;");
              mids$[mid_getListAppliedPCVS_d751c1a57012b438] = env->getMethodID(cls, "getListAppliedPCVS", "()Ljava/util/List;");
              mids$[mid_getMarkerName_d2c8eb4129821f0e] = env->getMethodID(cls, "getMarkerName", "()Ljava/lang/String;");
              mids$[mid_getMarkerNumber_d2c8eb4129821f0e] = env->getMethodID(cls, "getMarkerNumber", "()Ljava/lang/String;");
              mids$[mid_getMarkerType_d2c8eb4129821f0e] = env->getMethodID(cls, "getMarkerType", "()Ljava/lang/String;");
              mids$[mid_getNbObsPerSat_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getNbObsPerSat", "()Ljava/util/Map;");
              mids$[mid_getNbSat_d6ab429752e7c267] = env->getMethodID(cls, "getNbSat", "()I");
              mids$[mid_getObservationCode_d2c8eb4129821f0e] = env->getMethodID(cls, "getObservationCode", "()Ljava/lang/String;");
              mids$[mid_getObserverName_d2c8eb4129821f0e] = env->getMethodID(cls, "getObserverName", "()Ljava/lang/String;");
              mids$[mid_getPhaseCenterSystem_fb0bd27fcc3ba9fc] = env->getMethodID(cls, "getPhaseCenterSystem", "()Lorg/orekit/gnss/SatelliteSystem;");
              mids$[mid_getPhaseShiftCorrections_d751c1a57012b438] = env->getMethodID(cls, "getPhaseShiftCorrections", "()Ljava/util/List;");
              mids$[mid_getReceiverNumber_d2c8eb4129821f0e] = env->getMethodID(cls, "getReceiverNumber", "()Ljava/lang/String;");
              mids$[mid_getReceiverType_d2c8eb4129821f0e] = env->getMethodID(cls, "getReceiverType", "()Ljava/lang/String;");
              mids$[mid_getReceiverVersion_d2c8eb4129821f0e] = env->getMethodID(cls, "getReceiverVersion", "()Ljava/lang/String;");
              mids$[mid_getScaleFactorCorrections_25558a74630b541a] = env->getMethodID(cls, "getScaleFactorCorrections", "(Lorg/orekit/gnss/SatelliteSystem;)Ljava/util/List;");
              mids$[mid_getSignalStrengthUnit_d2c8eb4129821f0e] = env->getMethodID(cls, "getSignalStrengthUnit", "()Ljava/lang/String;");
              mids$[mid_getTFirstObs_80e11148db499dda] = env->getMethodID(cls, "getTFirstObs", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTLastObs_80e11148db499dda] = env->getMethodID(cls, "getTLastObs", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTypeObs_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getTypeObs", "()Ljava/util/Map;");
              mids$[mid_setAgencyName_105e1eadb709d9ac] = env->getMethodID(cls, "setAgencyName", "(Ljava/lang/String;)V");
              mids$[mid_setAntennaAzimuth_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setAntennaAzimuth", "(D)V");
              mids$[mid_setAntennaBSight_30f8886dfb88a63c] = env->getMethodID(cls, "setAntennaBSight", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_setAntennaHeight_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setAntennaHeight", "(D)V");
              mids$[mid_setAntennaNumber_105e1eadb709d9ac] = env->getMethodID(cls, "setAntennaNumber", "(Ljava/lang/String;)V");
              mids$[mid_setAntennaPhaseCenter_30f8886dfb88a63c] = env->getMethodID(cls, "setAntennaPhaseCenter", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_setAntennaReferencePoint_30f8886dfb88a63c] = env->getMethodID(cls, "setAntennaReferencePoint", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_setAntennaType_105e1eadb709d9ac] = env->getMethodID(cls, "setAntennaType", "(Ljava/lang/String;)V");
              mids$[mid_setAntennaZeroDirection_30f8886dfb88a63c] = env->getMethodID(cls, "setAntennaZeroDirection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_setApproxPos_30f8886dfb88a63c] = env->getMethodID(cls, "setApproxPos", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_setC1cCodePhaseBias_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setC1cCodePhaseBias", "(D)V");
              mids$[mid_setC1pCodePhaseBias_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setC1pCodePhaseBias", "(D)V");
              mids$[mid_setC2cCodePhaseBias_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setC2cCodePhaseBias", "(D)V");
              mids$[mid_setC2pCodePhaseBias_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setC2pCodePhaseBias", "(D)V");
              mids$[mid_setCenterMass_30f8886dfb88a63c] = env->getMethodID(cls, "setCenterMass", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_setClkOffset_8fd427ab23829bf5] = env->getMethodID(cls, "setClkOffset", "(I)V");
              mids$[mid_setEccentricities_bcb0f1d2f82539d7] = env->getMethodID(cls, "setEccentricities", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_setInterval_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setInterval", "(D)V");
              mids$[mid_setLeapSeconds_8fd427ab23829bf5] = env->getMethodID(cls, "setLeapSeconds", "(I)V");
              mids$[mid_setLeapSecondsDayNum_8fd427ab23829bf5] = env->getMethodID(cls, "setLeapSecondsDayNum", "(I)V");
              mids$[mid_setLeapSecondsFuture_8fd427ab23829bf5] = env->getMethodID(cls, "setLeapSecondsFuture", "(I)V");
              mids$[mid_setLeapSecondsWeekNum_8fd427ab23829bf5] = env->getMethodID(cls, "setLeapSecondsWeekNum", "(I)V");
              mids$[mid_setMarkerName_105e1eadb709d9ac] = env->getMethodID(cls, "setMarkerName", "(Ljava/lang/String;)V");
              mids$[mid_setMarkerNumber_105e1eadb709d9ac] = env->getMethodID(cls, "setMarkerNumber", "(Ljava/lang/String;)V");
              mids$[mid_setMarkerType_105e1eadb709d9ac] = env->getMethodID(cls, "setMarkerType", "(Ljava/lang/String;)V");
              mids$[mid_setNbObsPerSatellite_971cfc972d2d9b4c] = env->getMethodID(cls, "setNbObsPerSatellite", "(Lorg/orekit/gnss/SatInSystem;Lorg/orekit/gnss/ObservationType;I)V");
              mids$[mid_setNbSat_8fd427ab23829bf5] = env->getMethodID(cls, "setNbSat", "(I)V");
              mids$[mid_setObservationCode_105e1eadb709d9ac] = env->getMethodID(cls, "setObservationCode", "(Ljava/lang/String;)V");
              mids$[mid_setObserverName_105e1eadb709d9ac] = env->getMethodID(cls, "setObserverName", "(Ljava/lang/String;)V");
              mids$[mid_setPhaseCenterSystem_b8157be2fa2780f9] = env->getMethodID(cls, "setPhaseCenterSystem", "(Lorg/orekit/gnss/SatelliteSystem;)V");
              mids$[mid_setReceiverNumber_105e1eadb709d9ac] = env->getMethodID(cls, "setReceiverNumber", "(Ljava/lang/String;)V");
              mids$[mid_setReceiverType_105e1eadb709d9ac] = env->getMethodID(cls, "setReceiverType", "(Ljava/lang/String;)V");
              mids$[mid_setReceiverVersion_105e1eadb709d9ac] = env->getMethodID(cls, "setReceiverVersion", "(Ljava/lang/String;)V");
              mids$[mid_setSignalStrengthUnit_105e1eadb709d9ac] = env->getMethodID(cls, "setSignalStrengthUnit", "(Ljava/lang/String;)V");
              mids$[mid_setTFirstObs_8497861b879c83f7] = env->getMethodID(cls, "setTFirstObs", "(Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_setTLastObs_8497861b879c83f7] = env->getMethodID(cls, "setTLastObs", "(Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_setTypeObs_7edf576ce12e7117] = env->getMethodID(cls, "setTypeObs", "(Lorg/orekit/gnss/SatelliteSystem;Ljava/util/List;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexObservationHeader::RinexObservationHeader() : ::org::orekit::files::rinex::section::RinexBaseHeader(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void RinexObservationHeader::addAppliedDCBS(const ::org::orekit::files::rinex::AppliedDCBS & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addAppliedDCBS_cacb67a9e2822f90], a0.this$);
          }

          void RinexObservationHeader::addAppliedPCVS(const ::org::orekit::files::rinex::AppliedPCVS & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addAppliedPCVS_604ce729c44b1f15], a0.this$);
          }

          void RinexObservationHeader::addGlonassChannel(const ::org::orekit::files::rinex::observation::GlonassSatelliteChannel & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addGlonassChannel_31dba420c1ba38ab], a0.this$);
          }

          void RinexObservationHeader::addPhaseShiftCorrection(const ::org::orekit::files::rinex::observation::PhaseShiftCorrection & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addPhaseShiftCorrection_d034c62f8126db5c], a0.this$);
          }

          void RinexObservationHeader::addScaleFactorCorrection(const ::org::orekit::gnss::SatelliteSystem & a0, const ::org::orekit::files::rinex::observation::ScaleFactorCorrection & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addScaleFactorCorrection_41be978230b54fd6], a0.this$, a1.this$);
          }

          ::java::lang::String RinexObservationHeader::getAgencyName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAgencyName_d2c8eb4129821f0e]));
          }

          jdouble RinexObservationHeader::getAntennaAzimuth() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAntennaAzimuth_9981f74b2d109da6]);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D RinexObservationHeader::getAntennaBSight() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAntennaBSight_032312bdeb3f2f93]));
          }

          jdouble RinexObservationHeader::getAntennaHeight() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAntennaHeight_9981f74b2d109da6]);
          }

          ::java::lang::String RinexObservationHeader::getAntennaNumber() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAntennaNumber_d2c8eb4129821f0e]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D RinexObservationHeader::getAntennaPhaseCenter() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAntennaPhaseCenter_032312bdeb3f2f93]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D RinexObservationHeader::getAntennaReferencePoint() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAntennaReferencePoint_032312bdeb3f2f93]));
          }

          ::java::lang::String RinexObservationHeader::getAntennaType() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAntennaType_d2c8eb4129821f0e]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D RinexObservationHeader::getAntennaZeroDirection() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAntennaZeroDirection_032312bdeb3f2f93]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D RinexObservationHeader::getApproxPos() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getApproxPos_032312bdeb3f2f93]));
          }

          jdouble RinexObservationHeader::getC1cCodePhaseBias() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getC1cCodePhaseBias_9981f74b2d109da6]);
          }

          jdouble RinexObservationHeader::getC1pCodePhaseBias() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getC1pCodePhaseBias_9981f74b2d109da6]);
          }

          jdouble RinexObservationHeader::getC2cCodePhaseBias() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getC2cCodePhaseBias_9981f74b2d109da6]);
          }

          jdouble RinexObservationHeader::getC2pCodePhaseBias() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getC2pCodePhaseBias_9981f74b2d109da6]);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D RinexObservationHeader::getCenterMass() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getCenterMass_032312bdeb3f2f93]));
          }

          jint RinexObservationHeader::getClkOffset() const
          {
            return env->callIntMethod(this$, mids$[mid_getClkOffset_d6ab429752e7c267]);
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D RinexObservationHeader::getEccentricities() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_getEccentricities_0490d0574aafb07c]));
          }

          ::java::util::List RinexObservationHeader::getGlonassChannels() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getGlonassChannels_d751c1a57012b438]));
          }

          jdouble RinexObservationHeader::getInterval() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getInterval_9981f74b2d109da6]);
          }

          jint RinexObservationHeader::getLeapSeconds() const
          {
            return env->callIntMethod(this$, mids$[mid_getLeapSeconds_d6ab429752e7c267]);
          }

          jint RinexObservationHeader::getLeapSecondsDayNum() const
          {
            return env->callIntMethod(this$, mids$[mid_getLeapSecondsDayNum_d6ab429752e7c267]);
          }

          jint RinexObservationHeader::getLeapSecondsFuture() const
          {
            return env->callIntMethod(this$, mids$[mid_getLeapSecondsFuture_d6ab429752e7c267]);
          }

          jint RinexObservationHeader::getLeapSecondsWeekNum() const
          {
            return env->callIntMethod(this$, mids$[mid_getLeapSecondsWeekNum_d6ab429752e7c267]);
          }

          ::java::util::List RinexObservationHeader::getListAppliedDCBS() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getListAppliedDCBS_d751c1a57012b438]));
          }

          ::java::util::List RinexObservationHeader::getListAppliedPCVS() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getListAppliedPCVS_d751c1a57012b438]));
          }

          ::java::lang::String RinexObservationHeader::getMarkerName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMarkerName_d2c8eb4129821f0e]));
          }

          ::java::lang::String RinexObservationHeader::getMarkerNumber() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMarkerNumber_d2c8eb4129821f0e]));
          }

          ::java::lang::String RinexObservationHeader::getMarkerType() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMarkerType_d2c8eb4129821f0e]));
          }

          ::java::util::Map RinexObservationHeader::getNbObsPerSat() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getNbObsPerSat_dbcb8bbac6b35e0d]));
          }

          jint RinexObservationHeader::getNbSat() const
          {
            return env->callIntMethod(this$, mids$[mid_getNbSat_d6ab429752e7c267]);
          }

          ::java::lang::String RinexObservationHeader::getObservationCode() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObservationCode_d2c8eb4129821f0e]));
          }

          ::java::lang::String RinexObservationHeader::getObserverName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObserverName_d2c8eb4129821f0e]));
          }

          ::org::orekit::gnss::SatelliteSystem RinexObservationHeader::getPhaseCenterSystem() const
          {
            return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getPhaseCenterSystem_fb0bd27fcc3ba9fc]));
          }

          ::java::util::List RinexObservationHeader::getPhaseShiftCorrections() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getPhaseShiftCorrections_d751c1a57012b438]));
          }

          ::java::lang::String RinexObservationHeader::getReceiverNumber() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getReceiverNumber_d2c8eb4129821f0e]));
          }

          ::java::lang::String RinexObservationHeader::getReceiverType() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getReceiverType_d2c8eb4129821f0e]));
          }

          ::java::lang::String RinexObservationHeader::getReceiverVersion() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getReceiverVersion_d2c8eb4129821f0e]));
          }

          ::java::util::List RinexObservationHeader::getScaleFactorCorrections(const ::org::orekit::gnss::SatelliteSystem & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getScaleFactorCorrections_25558a74630b541a], a0.this$));
          }

          ::java::lang::String RinexObservationHeader::getSignalStrengthUnit() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSignalStrengthUnit_d2c8eb4129821f0e]));
          }

          ::org::orekit::time::AbsoluteDate RinexObservationHeader::getTFirstObs() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getTFirstObs_80e11148db499dda]));
          }

          ::org::orekit::time::AbsoluteDate RinexObservationHeader::getTLastObs() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getTLastObs_80e11148db499dda]));
          }

          ::java::util::Map RinexObservationHeader::getTypeObs() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getTypeObs_dbcb8bbac6b35e0d]));
          }

          void RinexObservationHeader::setAgencyName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAgencyName_105e1eadb709d9ac], a0.this$);
          }

          void RinexObservationHeader::setAntennaAzimuth(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAntennaAzimuth_1ad26e8c8c0cd65b], a0);
          }

          void RinexObservationHeader::setAntennaBSight(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAntennaBSight_30f8886dfb88a63c], a0.this$);
          }

          void RinexObservationHeader::setAntennaHeight(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAntennaHeight_1ad26e8c8c0cd65b], a0);
          }

          void RinexObservationHeader::setAntennaNumber(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAntennaNumber_105e1eadb709d9ac], a0.this$);
          }

          void RinexObservationHeader::setAntennaPhaseCenter(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAntennaPhaseCenter_30f8886dfb88a63c], a0.this$);
          }

          void RinexObservationHeader::setAntennaReferencePoint(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAntennaReferencePoint_30f8886dfb88a63c], a0.this$);
          }

          void RinexObservationHeader::setAntennaType(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAntennaType_105e1eadb709d9ac], a0.this$);
          }

          void RinexObservationHeader::setAntennaZeroDirection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAntennaZeroDirection_30f8886dfb88a63c], a0.this$);
          }

          void RinexObservationHeader::setApproxPos(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setApproxPos_30f8886dfb88a63c], a0.this$);
          }

          void RinexObservationHeader::setC1cCodePhaseBias(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setC1cCodePhaseBias_1ad26e8c8c0cd65b], a0);
          }

          void RinexObservationHeader::setC1pCodePhaseBias(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setC1pCodePhaseBias_1ad26e8c8c0cd65b], a0);
          }

          void RinexObservationHeader::setC2cCodePhaseBias(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setC2cCodePhaseBias_1ad26e8c8c0cd65b], a0);
          }

          void RinexObservationHeader::setC2pCodePhaseBias(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setC2pCodePhaseBias_1ad26e8c8c0cd65b], a0);
          }

          void RinexObservationHeader::setCenterMass(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setCenterMass_30f8886dfb88a63c], a0.this$);
          }

          void RinexObservationHeader::setClkOffset(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setClkOffset_8fd427ab23829bf5], a0);
          }

          void RinexObservationHeader::setEccentricities(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setEccentricities_bcb0f1d2f82539d7], a0.this$);
          }

          void RinexObservationHeader::setInterval(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setInterval_1ad26e8c8c0cd65b], a0);
          }

          void RinexObservationHeader::setLeapSeconds(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setLeapSeconds_8fd427ab23829bf5], a0);
          }

          void RinexObservationHeader::setLeapSecondsDayNum(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setLeapSecondsDayNum_8fd427ab23829bf5], a0);
          }

          void RinexObservationHeader::setLeapSecondsFuture(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setLeapSecondsFuture_8fd427ab23829bf5], a0);
          }

          void RinexObservationHeader::setLeapSecondsWeekNum(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setLeapSecondsWeekNum_8fd427ab23829bf5], a0);
          }

          void RinexObservationHeader::setMarkerName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMarkerName_105e1eadb709d9ac], a0.this$);
          }

          void RinexObservationHeader::setMarkerNumber(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMarkerNumber_105e1eadb709d9ac], a0.this$);
          }

          void RinexObservationHeader::setMarkerType(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMarkerType_105e1eadb709d9ac], a0.this$);
          }

          void RinexObservationHeader::setNbObsPerSatellite(const ::org::orekit::gnss::SatInSystem & a0, const ::org::orekit::gnss::ObservationType & a1, jint a2) const
          {
            env->callVoidMethod(this$, mids$[mid_setNbObsPerSatellite_971cfc972d2d9b4c], a0.this$, a1.this$, a2);
          }

          void RinexObservationHeader::setNbSat(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setNbSat_8fd427ab23829bf5], a0);
          }

          void RinexObservationHeader::setObservationCode(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setObservationCode_105e1eadb709d9ac], a0.this$);
          }

          void RinexObservationHeader::setObserverName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setObserverName_105e1eadb709d9ac], a0.this$);
          }

          void RinexObservationHeader::setPhaseCenterSystem(const ::org::orekit::gnss::SatelliteSystem & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setPhaseCenterSystem_b8157be2fa2780f9], a0.this$);
          }

          void RinexObservationHeader::setReceiverNumber(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setReceiverNumber_105e1eadb709d9ac], a0.this$);
          }

          void RinexObservationHeader::setReceiverType(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setReceiverType_105e1eadb709d9ac], a0.this$);
          }

          void RinexObservationHeader::setReceiverVersion(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setReceiverVersion_105e1eadb709d9ac], a0.this$);
          }

          void RinexObservationHeader::setSignalStrengthUnit(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSignalStrengthUnit_105e1eadb709d9ac], a0.this$);
          }

          void RinexObservationHeader::setTFirstObs(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setTFirstObs_8497861b879c83f7], a0.this$);
          }

          void RinexObservationHeader::setTLastObs(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setTLastObs_8497861b879c83f7], a0.this$);
          }

          void RinexObservationHeader::setTypeObs(const ::org::orekit::gnss::SatelliteSystem & a0, const ::java::util::List & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_setTypeObs_7edf576ce12e7117], a0.this$, a1.this$);
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
          static PyObject *t_RinexObservationHeader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexObservationHeader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexObservationHeader_init_(t_RinexObservationHeader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexObservationHeader_addAppliedDCBS(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_addAppliedPCVS(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_addGlonassChannel(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_addPhaseShiftCorrection(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_addScaleFactorCorrection(t_RinexObservationHeader *self, PyObject *args);
          static PyObject *t_RinexObservationHeader_getAgencyName(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getAntennaAzimuth(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getAntennaBSight(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getAntennaHeight(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getAntennaNumber(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getAntennaPhaseCenter(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getAntennaReferencePoint(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getAntennaType(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getAntennaZeroDirection(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getApproxPos(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getC1cCodePhaseBias(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getC1pCodePhaseBias(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getC2cCodePhaseBias(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getC2pCodePhaseBias(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getCenterMass(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getClkOffset(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getEccentricities(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getGlonassChannels(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getInterval(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getLeapSeconds(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getLeapSecondsDayNum(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getLeapSecondsFuture(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getLeapSecondsWeekNum(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getListAppliedDCBS(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getListAppliedPCVS(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getMarkerName(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getMarkerNumber(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getMarkerType(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getNbObsPerSat(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getNbSat(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getObservationCode(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getObserverName(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getPhaseCenterSystem(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getPhaseShiftCorrections(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getReceiverNumber(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getReceiverType(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getReceiverVersion(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getScaleFactorCorrections(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_getSignalStrengthUnit(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getTFirstObs(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getTLastObs(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getTypeObs(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_setAgencyName(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setAntennaAzimuth(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setAntennaBSight(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setAntennaHeight(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setAntennaNumber(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setAntennaPhaseCenter(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setAntennaReferencePoint(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setAntennaType(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setAntennaZeroDirection(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setApproxPos(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setC1cCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setC1pCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setC2cCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setC2pCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setCenterMass(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setClkOffset(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setEccentricities(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setInterval(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setLeapSeconds(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setLeapSecondsDayNum(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setLeapSecondsFuture(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setLeapSecondsWeekNum(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setMarkerName(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setMarkerNumber(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setMarkerType(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setNbObsPerSatellite(t_RinexObservationHeader *self, PyObject *args);
          static PyObject *t_RinexObservationHeader_setNbSat(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setObservationCode(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setObserverName(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setPhaseCenterSystem(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setReceiverNumber(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setReceiverType(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setReceiverVersion(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setSignalStrengthUnit(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setTFirstObs(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setTLastObs(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setTypeObs(t_RinexObservationHeader *self, PyObject *args);
          static PyObject *t_RinexObservationHeader_get__agencyName(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__agencyName(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__antennaAzimuth(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__antennaAzimuth(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__antennaBSight(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__antennaBSight(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__antennaHeight(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__antennaHeight(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__antennaNumber(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__antennaNumber(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__antennaPhaseCenter(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__antennaPhaseCenter(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__antennaReferencePoint(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__antennaReferencePoint(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__antennaType(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__antennaType(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__antennaZeroDirection(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__antennaZeroDirection(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__approxPos(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__approxPos(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__c1cCodePhaseBias(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__c1cCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__c1pCodePhaseBias(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__c1pCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__c2cCodePhaseBias(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__c2cCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__c2pCodePhaseBias(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__c2pCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__centerMass(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__centerMass(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__clkOffset(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__clkOffset(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__eccentricities(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__eccentricities(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__glonassChannels(t_RinexObservationHeader *self, void *data);
          static PyObject *t_RinexObservationHeader_get__interval(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__interval(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__leapSeconds(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__leapSeconds(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__leapSecondsDayNum(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__leapSecondsDayNum(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__leapSecondsFuture(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__leapSecondsFuture(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__leapSecondsWeekNum(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__leapSecondsWeekNum(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__listAppliedDCBS(t_RinexObservationHeader *self, void *data);
          static PyObject *t_RinexObservationHeader_get__listAppliedPCVS(t_RinexObservationHeader *self, void *data);
          static PyObject *t_RinexObservationHeader_get__markerName(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__markerName(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__markerNumber(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__markerNumber(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__markerType(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__markerType(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__nbObsPerSat(t_RinexObservationHeader *self, void *data);
          static PyObject *t_RinexObservationHeader_get__nbSat(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__nbSat(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__observationCode(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__observationCode(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__observerName(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__observerName(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__phaseCenterSystem(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__phaseCenterSystem(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__phaseShiftCorrections(t_RinexObservationHeader *self, void *data);
          static PyObject *t_RinexObservationHeader_get__receiverNumber(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__receiverNumber(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__receiverType(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__receiverType(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__receiverVersion(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__receiverVersion(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__signalStrengthUnit(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__signalStrengthUnit(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__tFirstObs(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__tFirstObs(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__tLastObs(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__tLastObs(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__typeObs(t_RinexObservationHeader *self, void *data);
          static PyGetSetDef t_RinexObservationHeader__fields_[] = {
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, agencyName),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, antennaAzimuth),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, antennaBSight),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, antennaHeight),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, antennaNumber),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, antennaPhaseCenter),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, antennaReferencePoint),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, antennaType),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, antennaZeroDirection),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, approxPos),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, c1cCodePhaseBias),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, c1pCodePhaseBias),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, c2cCodePhaseBias),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, c2pCodePhaseBias),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, centerMass),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, clkOffset),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, eccentricities),
            DECLARE_GET_FIELD(t_RinexObservationHeader, glonassChannels),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, interval),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, leapSeconds),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, leapSecondsDayNum),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, leapSecondsFuture),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, leapSecondsWeekNum),
            DECLARE_GET_FIELD(t_RinexObservationHeader, listAppliedDCBS),
            DECLARE_GET_FIELD(t_RinexObservationHeader, listAppliedPCVS),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, markerName),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, markerNumber),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, markerType),
            DECLARE_GET_FIELD(t_RinexObservationHeader, nbObsPerSat),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, nbSat),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, observationCode),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, observerName),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, phaseCenterSystem),
            DECLARE_GET_FIELD(t_RinexObservationHeader, phaseShiftCorrections),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, receiverNumber),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, receiverType),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, receiverVersion),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, signalStrengthUnit),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, tFirstObs),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, tLastObs),
            DECLARE_GET_FIELD(t_RinexObservationHeader, typeObs),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexObservationHeader__methods_[] = {
            DECLARE_METHOD(t_RinexObservationHeader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexObservationHeader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexObservationHeader, addAppliedDCBS, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, addAppliedPCVS, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, addGlonassChannel, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, addPhaseShiftCorrection, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, addScaleFactorCorrection, METH_VARARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getAgencyName, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getAntennaAzimuth, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getAntennaBSight, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getAntennaHeight, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getAntennaNumber, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getAntennaPhaseCenter, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getAntennaReferencePoint, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getAntennaType, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getAntennaZeroDirection, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getApproxPos, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getC1cCodePhaseBias, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getC1pCodePhaseBias, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getC2cCodePhaseBias, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getC2pCodePhaseBias, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getCenterMass, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getClkOffset, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getEccentricities, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getGlonassChannels, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getInterval, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getLeapSeconds, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getLeapSecondsDayNum, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getLeapSecondsFuture, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getLeapSecondsWeekNum, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getListAppliedDCBS, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getListAppliedPCVS, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getMarkerName, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getMarkerNumber, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getMarkerType, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getNbObsPerSat, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getNbSat, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getObservationCode, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getObserverName, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getPhaseCenterSystem, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getPhaseShiftCorrections, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getReceiverNumber, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getReceiverType, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getReceiverVersion, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getScaleFactorCorrections, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, getSignalStrengthUnit, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getTFirstObs, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getTLastObs, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getTypeObs, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, setAgencyName, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setAntennaAzimuth, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setAntennaBSight, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setAntennaHeight, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setAntennaNumber, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setAntennaPhaseCenter, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setAntennaReferencePoint, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setAntennaType, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setAntennaZeroDirection, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setApproxPos, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setC1cCodePhaseBias, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setC1pCodePhaseBias, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setC2cCodePhaseBias, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setC2pCodePhaseBias, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setCenterMass, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setClkOffset, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setEccentricities, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setInterval, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setLeapSeconds, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setLeapSecondsDayNum, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setLeapSecondsFuture, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setLeapSecondsWeekNum, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setMarkerName, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setMarkerNumber, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setMarkerType, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setNbObsPerSatellite, METH_VARARGS),
            DECLARE_METHOD(t_RinexObservationHeader, setNbSat, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setObservationCode, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setObserverName, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setPhaseCenterSystem, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setReceiverNumber, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setReceiverType, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setReceiverVersion, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setSignalStrengthUnit, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setTFirstObs, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setTLastObs, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setTypeObs, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexObservationHeader)[] = {
            { Py_tp_methods, t_RinexObservationHeader__methods_ },
            { Py_tp_init, (void *) t_RinexObservationHeader_init_ },
            { Py_tp_getset, t_RinexObservationHeader__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexObservationHeader)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::section::RinexBaseHeader),
            NULL
          };

          DEFINE_TYPE(RinexObservationHeader, t_RinexObservationHeader, RinexObservationHeader);

          void t_RinexObservationHeader::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexObservationHeader), &PY_TYPE_DEF(RinexObservationHeader), module, "RinexObservationHeader", 0);
          }

          void t_RinexObservationHeader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationHeader), "class_", make_descriptor(RinexObservationHeader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationHeader), "wrapfn_", make_descriptor(t_RinexObservationHeader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationHeader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexObservationHeader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexObservationHeader::initializeClass, 1)))
              return NULL;
            return t_RinexObservationHeader::wrap_Object(RinexObservationHeader(((t_RinexObservationHeader *) arg)->object.this$));
          }
          static PyObject *t_RinexObservationHeader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexObservationHeader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexObservationHeader_init_(t_RinexObservationHeader *self, PyObject *args, PyObject *kwds)
          {
            RinexObservationHeader object((jobject) NULL);

            INT_CALL(object = RinexObservationHeader());
            self->object = object;

            return 0;
          }

          static PyObject *t_RinexObservationHeader_addAppliedDCBS(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::AppliedDCBS a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::AppliedDCBS::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addAppliedDCBS(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addAppliedDCBS", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_addAppliedPCVS(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::AppliedPCVS a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::AppliedPCVS::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addAppliedPCVS(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addAppliedPCVS", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_addGlonassChannel(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::GlonassSatelliteChannel a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::observation::GlonassSatelliteChannel::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addGlonassChannel(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addGlonassChannel", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_addPhaseShiftCorrection(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::PhaseShiftCorrection a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::observation::PhaseShiftCorrection::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addPhaseShiftCorrection(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addPhaseShiftCorrection", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_addScaleFactorCorrection(t_RinexObservationHeader *self, PyObject *args)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::files::rinex::observation::ScaleFactorCorrection a1((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::files::rinex::observation::ScaleFactorCorrection::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1))
            {
              OBJ_CALL(self->object.addScaleFactorCorrection(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addScaleFactorCorrection", args);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_getAgencyName(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getAgencyName());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getAntennaAzimuth(t_RinexObservationHeader *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAntennaAzimuth());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexObservationHeader_getAntennaBSight(t_RinexObservationHeader *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getAntennaBSight());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getAntennaHeight(t_RinexObservationHeader *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAntennaHeight());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexObservationHeader_getAntennaNumber(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getAntennaNumber());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getAntennaPhaseCenter(t_RinexObservationHeader *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getAntennaPhaseCenter());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getAntennaReferencePoint(t_RinexObservationHeader *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getAntennaReferencePoint());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getAntennaType(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getAntennaType());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getAntennaZeroDirection(t_RinexObservationHeader *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getAntennaZeroDirection());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getApproxPos(t_RinexObservationHeader *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getApproxPos());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getC1cCodePhaseBias(t_RinexObservationHeader *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getC1cCodePhaseBias());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexObservationHeader_getC1pCodePhaseBias(t_RinexObservationHeader *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getC1pCodePhaseBias());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexObservationHeader_getC2cCodePhaseBias(t_RinexObservationHeader *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getC2cCodePhaseBias());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexObservationHeader_getC2pCodePhaseBias(t_RinexObservationHeader *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getC2pCodePhaseBias());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexObservationHeader_getCenterMass(t_RinexObservationHeader *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getCenterMass());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getClkOffset(t_RinexObservationHeader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getClkOffset());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexObservationHeader_getEccentricities(t_RinexObservationHeader *self)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);
            OBJ_CALL(result = self->object.getEccentricities());
            return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getGlonassChannels(t_RinexObservationHeader *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getGlonassChannels());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::observation::PY_TYPE(GlonassSatelliteChannel));
          }

          static PyObject *t_RinexObservationHeader_getInterval(t_RinexObservationHeader *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getInterval());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexObservationHeader_getLeapSeconds(t_RinexObservationHeader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLeapSeconds());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexObservationHeader_getLeapSecondsDayNum(t_RinexObservationHeader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLeapSecondsDayNum());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexObservationHeader_getLeapSecondsFuture(t_RinexObservationHeader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLeapSecondsFuture());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexObservationHeader_getLeapSecondsWeekNum(t_RinexObservationHeader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLeapSecondsWeekNum());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexObservationHeader_getListAppliedDCBS(t_RinexObservationHeader *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getListAppliedDCBS());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::PY_TYPE(AppliedDCBS));
          }

          static PyObject *t_RinexObservationHeader_getListAppliedPCVS(t_RinexObservationHeader *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getListAppliedPCVS());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::PY_TYPE(AppliedPCVS));
          }

          static PyObject *t_RinexObservationHeader_getMarkerName(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMarkerName());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getMarkerNumber(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMarkerNumber());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getMarkerType(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMarkerType());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getNbObsPerSat(t_RinexObservationHeader *self)
          {
            ::java::util::Map result((jobject) NULL);
            OBJ_CALL(result = self->object.getNbObsPerSat());
            return ::java::util::t_Map::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getNbSat(t_RinexObservationHeader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNbSat());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexObservationHeader_getObservationCode(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getObservationCode());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getObserverName(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getObserverName());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getPhaseCenterSystem(t_RinexObservationHeader *self)
          {
            ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getPhaseCenterSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getPhaseShiftCorrections(t_RinexObservationHeader *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getPhaseShiftCorrections());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::observation::PY_TYPE(PhaseShiftCorrection));
          }

          static PyObject *t_RinexObservationHeader_getReceiverNumber(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getReceiverNumber());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getReceiverType(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getReceiverType());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getReceiverVersion(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getReceiverVersion());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getScaleFactorCorrections(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::List result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = self->object.getScaleFactorCorrections(a0));
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::observation::PY_TYPE(ScaleFactorCorrection));
            }

            PyErr_SetArgsError((PyObject *) self, "getScaleFactorCorrections", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_getSignalStrengthUnit(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSignalStrengthUnit());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getTFirstObs(t_RinexObservationHeader *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getTFirstObs());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getTLastObs(t_RinexObservationHeader *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getTLastObs());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getTypeObs(t_RinexObservationHeader *self)
          {
            ::java::util::Map result((jobject) NULL);
            OBJ_CALL(result = self->object.getTypeObs());
            return ::java::util::t_Map::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_setAgencyName(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setAgencyName(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAgencyName", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setAntennaAzimuth(t_RinexObservationHeader *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setAntennaAzimuth(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAntennaAzimuth", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setAntennaBSight(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setAntennaBSight(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAntennaBSight", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setAntennaHeight(t_RinexObservationHeader *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setAntennaHeight(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAntennaHeight", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setAntennaNumber(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setAntennaNumber(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAntennaNumber", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setAntennaPhaseCenter(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setAntennaPhaseCenter(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAntennaPhaseCenter", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setAntennaReferencePoint(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setAntennaReferencePoint(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAntennaReferencePoint", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setAntennaType(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setAntennaType(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAntennaType", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setAntennaZeroDirection(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setAntennaZeroDirection(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAntennaZeroDirection", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setApproxPos(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setApproxPos(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setApproxPos", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setC1cCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setC1cCodePhaseBias(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setC1cCodePhaseBias", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setC1pCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setC1pCodePhaseBias(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setC1pCodePhaseBias", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setC2cCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setC2cCodePhaseBias(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setC2cCodePhaseBias", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setC2pCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setC2pCodePhaseBias(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setC2pCodePhaseBias", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setCenterMass(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setCenterMass(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setCenterMass", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setClkOffset(t_RinexObservationHeader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setClkOffset(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setClkOffset", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setEccentricities(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setEccentricities(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setEccentricities", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setInterval(t_RinexObservationHeader *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setInterval(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setInterval", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setLeapSeconds(t_RinexObservationHeader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setLeapSeconds(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setLeapSeconds", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setLeapSecondsDayNum(t_RinexObservationHeader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setLeapSecondsDayNum(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setLeapSecondsDayNum", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setLeapSecondsFuture(t_RinexObservationHeader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setLeapSecondsFuture(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setLeapSecondsFuture", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setLeapSecondsWeekNum(t_RinexObservationHeader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setLeapSecondsWeekNum(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setLeapSecondsWeekNum", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setMarkerName(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setMarkerName(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMarkerName", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setMarkerNumber(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setMarkerNumber(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMarkerNumber", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setMarkerType(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setMarkerType(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMarkerType", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setNbObsPerSatellite(t_RinexObservationHeader *self, PyObject *args)
          {
            ::org::orekit::gnss::SatInSystem a0((jobject) NULL);
            ::org::orekit::gnss::ObservationType a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;

            if (!parseArgs(args, "kKI", ::org::orekit::gnss::SatInSystem::initializeClass, ::org::orekit::gnss::ObservationType::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_ObservationType::parameters_, &a2))
            {
              OBJ_CALL(self->object.setNbObsPerSatellite(a0, a1, a2));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setNbObsPerSatellite", args);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setNbSat(t_RinexObservationHeader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setNbSat(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setNbSat", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setObservationCode(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setObservationCode(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setObservationCode", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setObserverName(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setObserverName(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setObserverName", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setPhaseCenterSystem(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(self->object.setPhaseCenterSystem(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setPhaseCenterSystem", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setReceiverNumber(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setReceiverNumber(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setReceiverNumber", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setReceiverType(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setReceiverType(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setReceiverType", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setReceiverVersion(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setReceiverVersion(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setReceiverVersion", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setSignalStrengthUnit(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setSignalStrengthUnit(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setSignalStrengthUnit", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setTFirstObs(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setTFirstObs(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTFirstObs", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setTLastObs(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setTLastObs(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTLastObs", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setTypeObs(t_RinexObservationHeader *self, PyObject *args)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "KK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &p1, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(self->object.setTypeObs(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTypeObs", args);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_get__agencyName(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getAgencyName());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__agencyName(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setAgencyName(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "agencyName", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__antennaAzimuth(t_RinexObservationHeader *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAntennaAzimuth());
            return PyFloat_FromDouble((double) value);
          }
          static int t_RinexObservationHeader_set__antennaAzimuth(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setAntennaAzimuth(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "antennaAzimuth", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__antennaBSight(t_RinexObservationHeader *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getAntennaBSight());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__antennaBSight(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
              {
                INT_CALL(self->object.setAntennaBSight(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "antennaBSight", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__antennaHeight(t_RinexObservationHeader *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAntennaHeight());
            return PyFloat_FromDouble((double) value);
          }
          static int t_RinexObservationHeader_set__antennaHeight(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setAntennaHeight(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "antennaHeight", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__antennaNumber(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getAntennaNumber());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__antennaNumber(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setAntennaNumber(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "antennaNumber", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__antennaPhaseCenter(t_RinexObservationHeader *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getAntennaPhaseCenter());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__antennaPhaseCenter(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
              {
                INT_CALL(self->object.setAntennaPhaseCenter(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "antennaPhaseCenter", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__antennaReferencePoint(t_RinexObservationHeader *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getAntennaReferencePoint());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__antennaReferencePoint(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
              {
                INT_CALL(self->object.setAntennaReferencePoint(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "antennaReferencePoint", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__antennaType(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getAntennaType());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__antennaType(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setAntennaType(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "antennaType", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__antennaZeroDirection(t_RinexObservationHeader *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getAntennaZeroDirection());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__antennaZeroDirection(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
              {
                INT_CALL(self->object.setAntennaZeroDirection(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "antennaZeroDirection", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__approxPos(t_RinexObservationHeader *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getApproxPos());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__approxPos(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
              {
                INT_CALL(self->object.setApproxPos(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "approxPos", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__c1cCodePhaseBias(t_RinexObservationHeader *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getC1cCodePhaseBias());
            return PyFloat_FromDouble((double) value);
          }
          static int t_RinexObservationHeader_set__c1cCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setC1cCodePhaseBias(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "c1cCodePhaseBias", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__c1pCodePhaseBias(t_RinexObservationHeader *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getC1pCodePhaseBias());
            return PyFloat_FromDouble((double) value);
          }
          static int t_RinexObservationHeader_set__c1pCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setC1pCodePhaseBias(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "c1pCodePhaseBias", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__c2cCodePhaseBias(t_RinexObservationHeader *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getC2cCodePhaseBias());
            return PyFloat_FromDouble((double) value);
          }
          static int t_RinexObservationHeader_set__c2cCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setC2cCodePhaseBias(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "c2cCodePhaseBias", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__c2pCodePhaseBias(t_RinexObservationHeader *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getC2pCodePhaseBias());
            return PyFloat_FromDouble((double) value);
          }
          static int t_RinexObservationHeader_set__c2pCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setC2pCodePhaseBias(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "c2pCodePhaseBias", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__centerMass(t_RinexObservationHeader *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getCenterMass());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__centerMass(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
              {
                INT_CALL(self->object.setCenterMass(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "centerMass", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__clkOffset(t_RinexObservationHeader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getClkOffset());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexObservationHeader_set__clkOffset(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setClkOffset(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "clkOffset", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__eccentricities(t_RinexObservationHeader *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D value((jobject) NULL);
            OBJ_CALL(value = self->object.getEccentricities());
            return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__eccentricities(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::hipparchus::geometry::euclidean::twod::Vector2D value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &value))
              {
                INT_CALL(self->object.setEccentricities(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "eccentricities", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__glonassChannels(t_RinexObservationHeader *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getGlonassChannels());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexObservationHeader_get__interval(t_RinexObservationHeader *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getInterval());
            return PyFloat_FromDouble((double) value);
          }
          static int t_RinexObservationHeader_set__interval(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setInterval(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "interval", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__leapSeconds(t_RinexObservationHeader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLeapSeconds());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexObservationHeader_set__leapSeconds(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setLeapSeconds(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "leapSeconds", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__leapSecondsDayNum(t_RinexObservationHeader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLeapSecondsDayNum());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexObservationHeader_set__leapSecondsDayNum(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setLeapSecondsDayNum(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "leapSecondsDayNum", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__leapSecondsFuture(t_RinexObservationHeader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLeapSecondsFuture());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexObservationHeader_set__leapSecondsFuture(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setLeapSecondsFuture(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "leapSecondsFuture", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__leapSecondsWeekNum(t_RinexObservationHeader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLeapSecondsWeekNum());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexObservationHeader_set__leapSecondsWeekNum(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setLeapSecondsWeekNum(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "leapSecondsWeekNum", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__listAppliedDCBS(t_RinexObservationHeader *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getListAppliedDCBS());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexObservationHeader_get__listAppliedPCVS(t_RinexObservationHeader *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getListAppliedPCVS());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexObservationHeader_get__markerName(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getMarkerName());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__markerName(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setMarkerName(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "markerName", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__markerNumber(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getMarkerNumber());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__markerNumber(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setMarkerNumber(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "markerNumber", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__markerType(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getMarkerType());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__markerType(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setMarkerType(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "markerType", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__nbObsPerSat(t_RinexObservationHeader *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getNbObsPerSat());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexObservationHeader_get__nbSat(t_RinexObservationHeader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNbSat());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexObservationHeader_set__nbSat(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setNbSat(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "nbSat", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__observationCode(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getObservationCode());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__observationCode(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setObservationCode(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "observationCode", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__observerName(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getObserverName());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__observerName(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setObserverName(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "observerName", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__phaseCenterSystem(t_RinexObservationHeader *self, void *data)
          {
            ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getPhaseCenterSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__phaseCenterSystem(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::gnss::SatelliteSystem::initializeClass, &value))
              {
                INT_CALL(self->object.setPhaseCenterSystem(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "phaseCenterSystem", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__phaseShiftCorrections(t_RinexObservationHeader *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getPhaseShiftCorrections());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexObservationHeader_get__receiverNumber(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getReceiverNumber());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__receiverNumber(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setReceiverNumber(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "receiverNumber", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__receiverType(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getReceiverType());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__receiverType(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setReceiverType(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "receiverType", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__receiverVersion(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getReceiverVersion());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__receiverVersion(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setReceiverVersion(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "receiverVersion", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__signalStrengthUnit(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSignalStrengthUnit());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__signalStrengthUnit(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setSignalStrengthUnit(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "signalStrengthUnit", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__tFirstObs(t_RinexObservationHeader *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getTFirstObs());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__tFirstObs(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
              {
                INT_CALL(self->object.setTFirstObs(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "tFirstObs", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__tLastObs(t_RinexObservationHeader *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getTLastObs());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__tLastObs(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
              {
                INT_CALL(self->object.setTLastObs(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "tLastObs", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__typeObs(t_RinexObservationHeader *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getTypeObs());
            return ::java::util::t_Map::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/SEMParser.h"
#include "java/util/List.h"
#include "java/io/IOException.h"
#include "java/lang/Integer.h"
#include "java/io/InputStream.h"
#include "java/text/ParseException.h"
#include "org/orekit/propagation/analytical/gnss/data/GPSAlmanac.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataLoader.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/errors/OrekitException.h"
#include "java/lang/String.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *SEMParser::class$ = NULL;
      jmethodID *SEMParser::mids$ = NULL;
      bool SEMParser::live$ = false;

      jclass SEMParser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/SEMParser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_23ada22a1e61cacc] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScales;)V");
          mids$[mid_getAlmanacs_d751c1a57012b438] = env->getMethodID(cls, "getAlmanacs", "()Ljava/util/List;");
          mids$[mid_getPRNNumbers_d751c1a57012b438] = env->getMethodID(cls, "getPRNNumbers", "()Ljava/util/List;");
          mids$[mid_getSupportedNames_d2c8eb4129821f0e] = env->getMethodID(cls, "getSupportedNames", "()Ljava/lang/String;");
          mids$[mid_loadData_ff7cb6c242604316] = env->getMethodID(cls, "loadData", "()V");
          mids$[mid_loadData_bec0f846e5ec73da] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
          mids$[mid_stillAcceptsData_eee3de00fe971136] = env->getMethodID(cls, "stillAcceptsData", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SEMParser::SEMParser(const ::java::lang::String & a0) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

      SEMParser::SEMParser(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1, const ::org::orekit::time::TimeScales & a2) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_23ada22a1e61cacc, a0.this$, a1.this$, a2.this$)) {}

      ::java::util::List SEMParser::getAlmanacs() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAlmanacs_d751c1a57012b438]));
      }

      ::java::util::List SEMParser::getPRNNumbers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getPRNNumbers_d751c1a57012b438]));
      }

      ::java::lang::String SEMParser::getSupportedNames() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSupportedNames_d2c8eb4129821f0e]));
      }

      void SEMParser::loadData() const
      {
        env->callVoidMethod(this$, mids$[mid_loadData_ff7cb6c242604316]);
      }

      void SEMParser::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_loadData_bec0f846e5ec73da], a0.this$, a1.this$);
      }

      jboolean SEMParser::stillAcceptsData() const
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
    namespace gnss {
      static PyObject *t_SEMParser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SEMParser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SEMParser_init_(t_SEMParser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SEMParser_getAlmanacs(t_SEMParser *self);
      static PyObject *t_SEMParser_getPRNNumbers(t_SEMParser *self);
      static PyObject *t_SEMParser_getSupportedNames(t_SEMParser *self);
      static PyObject *t_SEMParser_loadData(t_SEMParser *self, PyObject *args);
      static PyObject *t_SEMParser_stillAcceptsData(t_SEMParser *self);
      static PyObject *t_SEMParser_get__almanacs(t_SEMParser *self, void *data);
      static PyObject *t_SEMParser_get__pRNNumbers(t_SEMParser *self, void *data);
      static PyObject *t_SEMParser_get__supportedNames(t_SEMParser *self, void *data);
      static PyGetSetDef t_SEMParser__fields_[] = {
        DECLARE_GET_FIELD(t_SEMParser, almanacs),
        DECLARE_GET_FIELD(t_SEMParser, pRNNumbers),
        DECLARE_GET_FIELD(t_SEMParser, supportedNames),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SEMParser__methods_[] = {
        DECLARE_METHOD(t_SEMParser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SEMParser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SEMParser, getAlmanacs, METH_NOARGS),
        DECLARE_METHOD(t_SEMParser, getPRNNumbers, METH_NOARGS),
        DECLARE_METHOD(t_SEMParser, getSupportedNames, METH_NOARGS),
        DECLARE_METHOD(t_SEMParser, loadData, METH_VARARGS),
        DECLARE_METHOD(t_SEMParser, stillAcceptsData, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SEMParser)[] = {
        { Py_tp_methods, t_SEMParser__methods_ },
        { Py_tp_init, (void *) t_SEMParser_init_ },
        { Py_tp_getset, t_SEMParser__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SEMParser)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
        NULL
      };

      DEFINE_TYPE(SEMParser, t_SEMParser, SEMParser);

      void t_SEMParser::install(PyObject *module)
      {
        installType(&PY_TYPE(SEMParser), &PY_TYPE_DEF(SEMParser), module, "SEMParser", 0);
      }

      void t_SEMParser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SEMParser), "class_", make_descriptor(SEMParser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SEMParser), "wrapfn_", make_descriptor(t_SEMParser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SEMParser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SEMParser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SEMParser::initializeClass, 1)))
          return NULL;
        return t_SEMParser::wrap_Object(SEMParser(((t_SEMParser *) arg)->object.this$));
      }
      static PyObject *t_SEMParser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SEMParser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SEMParser_init_(t_SEMParser *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            SEMParser object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = SEMParser(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
            ::org::orekit::time::TimeScales a2((jobject) NULL);
            SEMParser object((jobject) NULL);

            if (!parseArgs(args, "skk", ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = SEMParser(a0, a1, a2));
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

      static PyObject *t_SEMParser_getAlmanacs(t_SEMParser *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getAlmanacs());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(GPSAlmanac));
      }

      static PyObject *t_SEMParser_getPRNNumbers(t_SEMParser *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getPRNNumbers());
        return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(Integer));
      }

      static PyObject *t_SEMParser_getSupportedNames(t_SEMParser *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSupportedNames());
        return j2p(result);
      }

      static PyObject *t_SEMParser_loadData(t_SEMParser *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            OBJ_CALL(self->object.loadData());
            Py_RETURN_NONE;
          }
          break;
         case 2:
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "loadData", args);
        return NULL;
      }

      static PyObject *t_SEMParser_stillAcceptsData(t_SEMParser *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.stillAcceptsData());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_SEMParser_get__almanacs(t_SEMParser *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getAlmanacs());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_SEMParser_get__pRNNumbers(t_SEMParser *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getPRNNumbers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_SEMParser_get__supportedNames(t_SEMParser *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSupportedNames());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/AggregateBoundedAttitudeProvider.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/Collection.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/Attitude.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *AggregateBoundedAttitudeProvider::class$ = NULL;
      jmethodID *AggregateBoundedAttitudeProvider::mids$ = NULL;
      bool AggregateBoundedAttitudeProvider::live$ = false;

      jclass AggregateBoundedAttitudeProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/AggregateBoundedAttitudeProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_82af91bc8dfb5029] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;)V");
          mids$[mid_getAttitude_a02177519e1b6a45] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitude_aab1c6ab68ffdcbb] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitudeRotation_267252ddff45220c] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getAttitudeRotation_494718838b66cf03] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getMaxDate_80e11148db499dda] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMinDate_80e11148db499dda] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AggregateBoundedAttitudeProvider::AggregateBoundedAttitudeProvider(const ::java::util::Collection & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_82af91bc8dfb5029, a0.this$)) {}

      ::org::orekit::attitudes::Attitude AggregateBoundedAttitudeProvider::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_a02177519e1b6a45], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::FieldAttitude AggregateBoundedAttitudeProvider::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_aab1c6ab68ffdcbb], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation AggregateBoundedAttitudeProvider::getAttitudeRotation(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_267252ddff45220c], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation AggregateBoundedAttitudeProvider::getAttitudeRotation(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_494718838b66cf03], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::time::AbsoluteDate AggregateBoundedAttitudeProvider::getMaxDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_80e11148db499dda]));
      }

      ::org::orekit::time::AbsoluteDate AggregateBoundedAttitudeProvider::getMinDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_80e11148db499dda]));
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
      static PyObject *t_AggregateBoundedAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AggregateBoundedAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AggregateBoundedAttitudeProvider_init_(t_AggregateBoundedAttitudeProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AggregateBoundedAttitudeProvider_getAttitude(t_AggregateBoundedAttitudeProvider *self, PyObject *args);
      static PyObject *t_AggregateBoundedAttitudeProvider_getAttitudeRotation(t_AggregateBoundedAttitudeProvider *self, PyObject *args);
      static PyObject *t_AggregateBoundedAttitudeProvider_getMaxDate(t_AggregateBoundedAttitudeProvider *self);
      static PyObject *t_AggregateBoundedAttitudeProvider_getMinDate(t_AggregateBoundedAttitudeProvider *self);
      static PyObject *t_AggregateBoundedAttitudeProvider_get__maxDate(t_AggregateBoundedAttitudeProvider *self, void *data);
      static PyObject *t_AggregateBoundedAttitudeProvider_get__minDate(t_AggregateBoundedAttitudeProvider *self, void *data);
      static PyGetSetDef t_AggregateBoundedAttitudeProvider__fields_[] = {
        DECLARE_GET_FIELD(t_AggregateBoundedAttitudeProvider, maxDate),
        DECLARE_GET_FIELD(t_AggregateBoundedAttitudeProvider, minDate),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AggregateBoundedAttitudeProvider__methods_[] = {
        DECLARE_METHOD(t_AggregateBoundedAttitudeProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AggregateBoundedAttitudeProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AggregateBoundedAttitudeProvider, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_AggregateBoundedAttitudeProvider, getAttitudeRotation, METH_VARARGS),
        DECLARE_METHOD(t_AggregateBoundedAttitudeProvider, getMaxDate, METH_NOARGS),
        DECLARE_METHOD(t_AggregateBoundedAttitudeProvider, getMinDate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AggregateBoundedAttitudeProvider)[] = {
        { Py_tp_methods, t_AggregateBoundedAttitudeProvider__methods_ },
        { Py_tp_init, (void *) t_AggregateBoundedAttitudeProvider_init_ },
        { Py_tp_getset, t_AggregateBoundedAttitudeProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AggregateBoundedAttitudeProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AggregateBoundedAttitudeProvider, t_AggregateBoundedAttitudeProvider, AggregateBoundedAttitudeProvider);

      void t_AggregateBoundedAttitudeProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(AggregateBoundedAttitudeProvider), &PY_TYPE_DEF(AggregateBoundedAttitudeProvider), module, "AggregateBoundedAttitudeProvider", 0);
      }

      void t_AggregateBoundedAttitudeProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregateBoundedAttitudeProvider), "class_", make_descriptor(AggregateBoundedAttitudeProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregateBoundedAttitudeProvider), "wrapfn_", make_descriptor(t_AggregateBoundedAttitudeProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregateBoundedAttitudeProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AggregateBoundedAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AggregateBoundedAttitudeProvider::initializeClass, 1)))
          return NULL;
        return t_AggregateBoundedAttitudeProvider::wrap_Object(AggregateBoundedAttitudeProvider(((t_AggregateBoundedAttitudeProvider *) arg)->object.this$));
      }
      static PyObject *t_AggregateBoundedAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AggregateBoundedAttitudeProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AggregateBoundedAttitudeProvider_init_(t_AggregateBoundedAttitudeProvider *self, PyObject *args, PyObject *kwds)
      {
        ::java::util::Collection a0((jobject) NULL);
        PyTypeObject **p0;
        AggregateBoundedAttitudeProvider object((jobject) NULL);

        if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
        {
          INT_CALL(object = AggregateBoundedAttitudeProvider(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_AggregateBoundedAttitudeProvider_getAttitude(t_AggregateBoundedAttitudeProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
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
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
        return NULL;
      }

      static PyObject *t_AggregateBoundedAttitudeProvider_getAttitudeRotation(t_AggregateBoundedAttitudeProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitudeRotation(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitudeRotation(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitudeRotation", args);
        return NULL;
      }

      static PyObject *t_AggregateBoundedAttitudeProvider_getMaxDate(t_AggregateBoundedAttitudeProvider *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AggregateBoundedAttitudeProvider_getMinDate(t_AggregateBoundedAttitudeProvider *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AggregateBoundedAttitudeProvider_get__maxDate(t_AggregateBoundedAttitudeProvider *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AggregateBoundedAttitudeProvider_get__minDate(t_AggregateBoundedAttitudeProvider *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/Header.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *Header::class$ = NULL;
          jmethodID *Header::mids$ = NULL;
          bool Header::live$ = false;

          jclass Header::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/Header");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
              mids$[mid_getClassification_d2c8eb4129821f0e] = env->getMethodID(cls, "getClassification", "()Ljava/lang/String;");
              mids$[mid_getCreationDate_80e11148db499dda] = env->getMethodID(cls, "getCreationDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getFormatVersion_9981f74b2d109da6] = env->getMethodID(cls, "getFormatVersion", "()D");
              mids$[mid_getMessageId_d2c8eb4129821f0e] = env->getMethodID(cls, "getMessageId", "()Ljava/lang/String;");
              mids$[mid_getOriginator_d2c8eb4129821f0e] = env->getMethodID(cls, "getOriginator", "()Ljava/lang/String;");
              mids$[mid_setClassification_105e1eadb709d9ac] = env->getMethodID(cls, "setClassification", "(Ljava/lang/String;)V");
              mids$[mid_setCreationDate_8497861b879c83f7] = env->getMethodID(cls, "setCreationDate", "(Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_setFormatVersion_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setFormatVersion", "(D)V");
              mids$[mid_setMessageId_105e1eadb709d9ac] = env->getMethodID(cls, "setMessageId", "(Ljava/lang/String;)V");
              mids$[mid_setOriginator_105e1eadb709d9ac] = env->getMethodID(cls, "setOriginator", "(Ljava/lang/String;)V");
              mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Header::Header(jdouble a0, jdouble a1) : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

          ::java::lang::String Header::getClassification() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getClassification_d2c8eb4129821f0e]));
          }

          ::org::orekit::time::AbsoluteDate Header::getCreationDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCreationDate_80e11148db499dda]));
          }

          jdouble Header::getFormatVersion() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFormatVersion_9981f74b2d109da6]);
          }

          ::java::lang::String Header::getMessageId() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessageId_d2c8eb4129821f0e]));
          }

          ::java::lang::String Header::getOriginator() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginator_d2c8eb4129821f0e]));
          }

          void Header::setClassification(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setClassification_105e1eadb709d9ac], a0.this$);
          }

          void Header::setCreationDate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setCreationDate_8497861b879c83f7], a0.this$);
          }

          void Header::setFormatVersion(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setFormatVersion_1ad26e8c8c0cd65b], a0);
          }

          void Header::setMessageId(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMessageId_105e1eadb709d9ac], a0.this$);
          }

          void Header::setOriginator(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOriginator_105e1eadb709d9ac], a0.this$);
          }

          void Header::validate(jdouble a0) const
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
          static PyObject *t_Header_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Header_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Header_init_(t_Header *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Header_getClassification(t_Header *self);
          static PyObject *t_Header_getCreationDate(t_Header *self);
          static PyObject *t_Header_getFormatVersion(t_Header *self);
          static PyObject *t_Header_getMessageId(t_Header *self);
          static PyObject *t_Header_getOriginator(t_Header *self);
          static PyObject *t_Header_setClassification(t_Header *self, PyObject *arg);
          static PyObject *t_Header_setCreationDate(t_Header *self, PyObject *arg);
          static PyObject *t_Header_setFormatVersion(t_Header *self, PyObject *arg);
          static PyObject *t_Header_setMessageId(t_Header *self, PyObject *arg);
          static PyObject *t_Header_setOriginator(t_Header *self, PyObject *arg);
          static PyObject *t_Header_validate(t_Header *self, PyObject *args);
          static PyObject *t_Header_get__classification(t_Header *self, void *data);
          static int t_Header_set__classification(t_Header *self, PyObject *arg, void *data);
          static PyObject *t_Header_get__creationDate(t_Header *self, void *data);
          static int t_Header_set__creationDate(t_Header *self, PyObject *arg, void *data);
          static PyObject *t_Header_get__formatVersion(t_Header *self, void *data);
          static int t_Header_set__formatVersion(t_Header *self, PyObject *arg, void *data);
          static PyObject *t_Header_get__messageId(t_Header *self, void *data);
          static int t_Header_set__messageId(t_Header *self, PyObject *arg, void *data);
          static PyObject *t_Header_get__originator(t_Header *self, void *data);
          static int t_Header_set__originator(t_Header *self, PyObject *arg, void *data);
          static PyGetSetDef t_Header__fields_[] = {
            DECLARE_GETSET_FIELD(t_Header, classification),
            DECLARE_GETSET_FIELD(t_Header, creationDate),
            DECLARE_GETSET_FIELD(t_Header, formatVersion),
            DECLARE_GETSET_FIELD(t_Header, messageId),
            DECLARE_GETSET_FIELD(t_Header, originator),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Header__methods_[] = {
            DECLARE_METHOD(t_Header, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Header, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Header, getClassification, METH_NOARGS),
            DECLARE_METHOD(t_Header, getCreationDate, METH_NOARGS),
            DECLARE_METHOD(t_Header, getFormatVersion, METH_NOARGS),
            DECLARE_METHOD(t_Header, getMessageId, METH_NOARGS),
            DECLARE_METHOD(t_Header, getOriginator, METH_NOARGS),
            DECLARE_METHOD(t_Header, setClassification, METH_O),
            DECLARE_METHOD(t_Header, setCreationDate, METH_O),
            DECLARE_METHOD(t_Header, setFormatVersion, METH_O),
            DECLARE_METHOD(t_Header, setMessageId, METH_O),
            DECLARE_METHOD(t_Header, setOriginator, METH_O),
            DECLARE_METHOD(t_Header, validate, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Header)[] = {
            { Py_tp_methods, t_Header__methods_ },
            { Py_tp_init, (void *) t_Header_init_ },
            { Py_tp_getset, t_Header__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Header)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
            NULL
          };

          DEFINE_TYPE(Header, t_Header, Header);

          void t_Header::install(PyObject *module)
          {
            installType(&PY_TYPE(Header), &PY_TYPE_DEF(Header), module, "Header", 0);
          }

          void t_Header::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Header), "class_", make_descriptor(Header::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Header), "wrapfn_", make_descriptor(t_Header::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Header), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Header_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Header::initializeClass, 1)))
              return NULL;
            return t_Header::wrap_Object(Header(((t_Header *) arg)->object.this$));
          }
          static PyObject *t_Header_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Header::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Header_init_(t_Header *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            Header object((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              INT_CALL(object = Header(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Header_getClassification(t_Header *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getClassification());
            return j2p(result);
          }

          static PyObject *t_Header_getCreationDate(t_Header *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getCreationDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_Header_getFormatVersion(t_Header *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getFormatVersion());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Header_getMessageId(t_Header *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMessageId());
            return j2p(result);
          }

          static PyObject *t_Header_getOriginator(t_Header *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getOriginator());
            return j2p(result);
          }

          static PyObject *t_Header_setClassification(t_Header *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setClassification(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setClassification", arg);
            return NULL;
          }

          static PyObject *t_Header_setCreationDate(t_Header *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setCreationDate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setCreationDate", arg);
            return NULL;
          }

          static PyObject *t_Header_setFormatVersion(t_Header *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setFormatVersion(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setFormatVersion", arg);
            return NULL;
          }

          static PyObject *t_Header_setMessageId(t_Header *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setMessageId(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMessageId", arg);
            return NULL;
          }

          static PyObject *t_Header_setOriginator(t_Header *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setOriginator(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOriginator", arg);
            return NULL;
          }

          static PyObject *t_Header_validate(t_Header *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.validate(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Header), (PyObject *) self, "validate", args, 2);
          }

          static PyObject *t_Header_get__classification(t_Header *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getClassification());
            return j2p(value);
          }
          static int t_Header_set__classification(t_Header *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setClassification(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "classification", arg);
            return -1;
          }

          static PyObject *t_Header_get__creationDate(t_Header *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getCreationDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
          static int t_Header_set__creationDate(t_Header *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
              {
                INT_CALL(self->object.setCreationDate(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "creationDate", arg);
            return -1;
          }

          static PyObject *t_Header_get__formatVersion(t_Header *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getFormatVersion());
            return PyFloat_FromDouble((double) value);
          }
          static int t_Header_set__formatVersion(t_Header *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setFormatVersion(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "formatVersion", arg);
            return -1;
          }

          static PyObject *t_Header_get__messageId(t_Header *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getMessageId());
            return j2p(value);
          }
          static int t_Header_set__messageId(t_Header *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setMessageId(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "messageId", arg);
            return -1;
          }

          static PyObject *t_Header_get__originator(t_Header *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getOriginator());
            return j2p(value);
          }
          static int t_Header_set__originator(t_Header *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setOriginator(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "originator", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *FieldTimeShiftable::class$ = NULL;
      jmethodID *FieldTimeShiftable::mids$ = NULL;
      bool FieldTimeShiftable::live$ = false;

      jclass FieldTimeShiftable::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/FieldTimeShiftable");

          mids$ = new jmethodID[max_mid];
          mids$[mid_shiftedBy_af95a6985c82d852] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/time/FieldTimeShiftable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldTimeShiftable FieldTimeShiftable::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldTimeShiftable(env->callObjectMethod(this$, mids$[mid_shiftedBy_af95a6985c82d852], a0.this$));
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
      static PyObject *t_FieldTimeShiftable_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeShiftable_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeShiftable_of_(t_FieldTimeShiftable *self, PyObject *args);
      static PyObject *t_FieldTimeShiftable_shiftedBy(t_FieldTimeShiftable *self, PyObject *args);
      static PyObject *t_FieldTimeShiftable_get__parameters_(t_FieldTimeShiftable *self, void *data);
      static PyGetSetDef t_FieldTimeShiftable__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTimeShiftable, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTimeShiftable__methods_[] = {
        DECLARE_METHOD(t_FieldTimeShiftable, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeShiftable, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeShiftable, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTimeShiftable, shiftedBy, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTimeShiftable)[] = {
        { Py_tp_methods, t_FieldTimeShiftable__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldTimeShiftable__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTimeShiftable)[] = {
        &PY_TYPE_DEF(::org::orekit::time::TimeShiftable),
        NULL
      };

      DEFINE_TYPE(FieldTimeShiftable, t_FieldTimeShiftable, FieldTimeShiftable);
      PyObject *t_FieldTimeShiftable::wrap_Object(const FieldTimeShiftable& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldTimeShiftable::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeShiftable *self = (t_FieldTimeShiftable *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_FieldTimeShiftable::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldTimeShiftable::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeShiftable *self = (t_FieldTimeShiftable *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_FieldTimeShiftable::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTimeShiftable), &PY_TYPE_DEF(FieldTimeShiftable), module, "FieldTimeShiftable", 0);
      }

      void t_FieldTimeShiftable::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeShiftable), "class_", make_descriptor(FieldTimeShiftable::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeShiftable), "wrapfn_", make_descriptor(t_FieldTimeShiftable::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeShiftable), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldTimeShiftable_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTimeShiftable::initializeClass, 1)))
          return NULL;
        return t_FieldTimeShiftable::wrap_Object(FieldTimeShiftable(((t_FieldTimeShiftable *) arg)->object.this$));
      }
      static PyObject *t_FieldTimeShiftable_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTimeShiftable::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTimeShiftable_of_(t_FieldTimeShiftable *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldTimeShiftable_shiftedBy(t_FieldTimeShiftable *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldTimeShiftable result((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldTimeShiftable::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldTimeShiftable), (PyObject *) self, "shiftedBy", args, 2);
      }
      static PyObject *t_FieldTimeShiftable_get__parameters_(t_FieldTimeShiftable *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/MultivariateRealDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {

      ::java::lang::Class *MultivariateRealDistribution::class$ = NULL;
      jmethodID *MultivariateRealDistribution::mids$ = NULL;
      bool MultivariateRealDistribution::live$ = false;

      jclass MultivariateRealDistribution::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/distribution/MultivariateRealDistribution");

          mids$ = new jmethodID[max_mid];
          mids$[mid_density_a40ce4fdf6559ac0] = env->getMethodID(cls, "density", "([D)D");
          mids$[mid_getDimension_d6ab429752e7c267] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_reseedRandomGenerator_f5bbab7e97879358] = env->getMethodID(cls, "reseedRandomGenerator", "(J)V");
          mids$[mid_sample_be783177b060994b] = env->getMethodID(cls, "sample", "()[D");
          mids$[mid_sample_45c1754ef74fe1b8] = env->getMethodID(cls, "sample", "(I)[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble MultivariateRealDistribution::density(const JArray< jdouble > & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_density_a40ce4fdf6559ac0], a0.this$);
      }

      jint MultivariateRealDistribution::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_d6ab429752e7c267]);
      }

      void MultivariateRealDistribution::reseedRandomGenerator(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_reseedRandomGenerator_f5bbab7e97879358], a0);
      }

      JArray< jdouble > MultivariateRealDistribution::sample() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_sample_be783177b060994b]));
      }

      JArray< JArray< jdouble > > MultivariateRealDistribution::sample(jint a0) const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_sample_45c1754ef74fe1b8], a0));
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
      static PyObject *t_MultivariateRealDistribution_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultivariateRealDistribution_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultivariateRealDistribution_density(t_MultivariateRealDistribution *self, PyObject *arg);
      static PyObject *t_MultivariateRealDistribution_getDimension(t_MultivariateRealDistribution *self);
      static PyObject *t_MultivariateRealDistribution_reseedRandomGenerator(t_MultivariateRealDistribution *self, PyObject *arg);
      static PyObject *t_MultivariateRealDistribution_sample(t_MultivariateRealDistribution *self, PyObject *args);
      static PyObject *t_MultivariateRealDistribution_get__dimension(t_MultivariateRealDistribution *self, void *data);
      static PyGetSetDef t_MultivariateRealDistribution__fields_[] = {
        DECLARE_GET_FIELD(t_MultivariateRealDistribution, dimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MultivariateRealDistribution__methods_[] = {
        DECLARE_METHOD(t_MultivariateRealDistribution, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultivariateRealDistribution, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultivariateRealDistribution, density, METH_O),
        DECLARE_METHOD(t_MultivariateRealDistribution, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_MultivariateRealDistribution, reseedRandomGenerator, METH_O),
        DECLARE_METHOD(t_MultivariateRealDistribution, sample, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultivariateRealDistribution)[] = {
        { Py_tp_methods, t_MultivariateRealDistribution__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_MultivariateRealDistribution__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultivariateRealDistribution)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MultivariateRealDistribution, t_MultivariateRealDistribution, MultivariateRealDistribution);

      void t_MultivariateRealDistribution::install(PyObject *module)
      {
        installType(&PY_TYPE(MultivariateRealDistribution), &PY_TYPE_DEF(MultivariateRealDistribution), module, "MultivariateRealDistribution", 0);
      }

      void t_MultivariateRealDistribution::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateRealDistribution), "class_", make_descriptor(MultivariateRealDistribution::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateRealDistribution), "wrapfn_", make_descriptor(t_MultivariateRealDistribution::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateRealDistribution), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultivariateRealDistribution_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultivariateRealDistribution::initializeClass, 1)))
          return NULL;
        return t_MultivariateRealDistribution::wrap_Object(MultivariateRealDistribution(((t_MultivariateRealDistribution *) arg)->object.this$));
      }
      static PyObject *t_MultivariateRealDistribution_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultivariateRealDistribution::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MultivariateRealDistribution_density(t_MultivariateRealDistribution *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = self->object.density(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "density", arg);
        return NULL;
      }

      static PyObject *t_MultivariateRealDistribution_getDimension(t_MultivariateRealDistribution *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_MultivariateRealDistribution_reseedRandomGenerator(t_MultivariateRealDistribution *self, PyObject *arg)
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

      static PyObject *t_MultivariateRealDistribution_sample(t_MultivariateRealDistribution *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.sample());
            return result.wrap();
          }
          break;
         case 1:
          {
            jint a0;
            JArray< JArray< jdouble > > result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.sample(a0));
              return JArray<jobject>(result.this$).wrap(NULL);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "sample", args);
        return NULL;
      }

      static PyObject *t_MultivariateRealDistribution_get__dimension(t_MultivariateRealDistribution *self, void *data)
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
#include "org/orekit/time/TimeScalarFunction.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeScalarFunction::class$ = NULL;
      jmethodID *TimeScalarFunction::mids$ = NULL;
      bool TimeScalarFunction::live$ = false;

      jclass TimeScalarFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeScalarFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_209f08246d708042] = env->getMethodID(cls, "value", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_value_cf010978f3c5a913] = env->getMethodID(cls, "value", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble TimeScalarFunction::value(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_209f08246d708042], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement TimeScalarFunction::value(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_cf010978f3c5a913], a0.this$));
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
      static PyObject *t_TimeScalarFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeScalarFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeScalarFunction_value(t_TimeScalarFunction *self, PyObject *args);

      static PyMethodDef t_TimeScalarFunction__methods_[] = {
        DECLARE_METHOD(t_TimeScalarFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeScalarFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeScalarFunction, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeScalarFunction)[] = {
        { Py_tp_methods, t_TimeScalarFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeScalarFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeScalarFunction, t_TimeScalarFunction, TimeScalarFunction);

      void t_TimeScalarFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeScalarFunction), &PY_TYPE_DEF(TimeScalarFunction), module, "TimeScalarFunction", 0);
      }

      void t_TimeScalarFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScalarFunction), "class_", make_descriptor(TimeScalarFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScalarFunction), "wrapfn_", make_descriptor(t_TimeScalarFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScalarFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeScalarFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeScalarFunction::initializeClass, 1)))
          return NULL;
        return t_TimeScalarFunction::wrap_Object(TimeScalarFunction(((t_TimeScalarFunction *) arg)->object.this$));
      }
      static PyObject *t_TimeScalarFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeScalarFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeScalarFunction_value(t_TimeScalarFunction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.value(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.value(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "value", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sp3/SP3Segment.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/files/general/EphemerisFile$EphemerisSegment.h"
#include "java/lang/Class.h"
#include "org/orekit/files/sp3/SP3Coordinate.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3Segment::class$ = NULL;
        jmethodID *SP3Segment::mids$ = NULL;
        bool SP3Segment::live$ = false;

        jclass SP3Segment::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3Segment");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ed9d9be9f8a499ad] = env->getMethodID(cls, "<init>", "(DLorg/orekit/frames/Frame;ILorg/orekit/utils/CartesianDerivativesFilter;)V");
            mids$[mid_addCoordinate_97cd3576e5040d2f] = env->getMethodID(cls, "addCoordinate", "(Lorg/orekit/files/sp3/SP3Coordinate;)V");
            mids$[mid_getAvailableDerivatives_b9dfc27d8c56b5de] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
            mids$[mid_getCoordinates_d751c1a57012b438] = env->getMethodID(cls, "getCoordinates", "()Ljava/util/List;");
            mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInterpolationSamples_d6ab429752e7c267] = env->getMethodID(cls, "getInterpolationSamples", "()I");
            mids$[mid_getMu_9981f74b2d109da6] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getPropagator_6c7bb9da59d24b03] = env->getMethodID(cls, "getPropagator", "()Lorg/orekit/propagation/BoundedPropagator;");
            mids$[mid_getPropagator_b59efa08d1230cd1] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/attitudes/AttitudeProvider;)Lorg/orekit/propagation/BoundedPropagator;");
            mids$[mid_getStart_80e11148db499dda] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_80e11148db499dda] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SP3Segment::SP3Segment(jdouble a0, const ::org::orekit::frames::Frame & a1, jint a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ed9d9be9f8a499ad, a0, a1.this$, a2, a3.this$)) {}

        void SP3Segment::addCoordinate(const ::org::orekit::files::sp3::SP3Coordinate & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addCoordinate_97cd3576e5040d2f], a0.this$);
        }

        ::org::orekit::utils::CartesianDerivativesFilter SP3Segment::getAvailableDerivatives() const
        {
          return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_b9dfc27d8c56b5de]));
        }

        ::java::util::List SP3Segment::getCoordinates() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCoordinates_d751c1a57012b438]));
        }

        ::org::orekit::frames::Frame SP3Segment::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
        }

        jint SP3Segment::getInterpolationSamples() const
        {
          return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_d6ab429752e7c267]);
        }

        jdouble SP3Segment::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_9981f74b2d109da6]);
        }

        ::org::orekit::propagation::BoundedPropagator SP3Segment::getPropagator() const
        {
          return ::org::orekit::propagation::BoundedPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_6c7bb9da59d24b03]));
        }

        ::org::orekit::propagation::BoundedPropagator SP3Segment::getPropagator(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          return ::org::orekit::propagation::BoundedPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_b59efa08d1230cd1], a0.this$));
        }

        ::org::orekit::time::AbsoluteDate SP3Segment::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_80e11148db499dda]));
        }

        ::org::orekit::time::AbsoluteDate SP3Segment::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_80e11148db499dda]));
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
        static PyObject *t_SP3Segment_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3Segment_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SP3Segment_init_(t_SP3Segment *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SP3Segment_addCoordinate(t_SP3Segment *self, PyObject *arg);
        static PyObject *t_SP3Segment_getAvailableDerivatives(t_SP3Segment *self);
        static PyObject *t_SP3Segment_getCoordinates(t_SP3Segment *self);
        static PyObject *t_SP3Segment_getFrame(t_SP3Segment *self);
        static PyObject *t_SP3Segment_getInterpolationSamples(t_SP3Segment *self);
        static PyObject *t_SP3Segment_getMu(t_SP3Segment *self);
        static PyObject *t_SP3Segment_getPropagator(t_SP3Segment *self, PyObject *args);
        static PyObject *t_SP3Segment_getStart(t_SP3Segment *self);
        static PyObject *t_SP3Segment_getStop(t_SP3Segment *self);
        static PyObject *t_SP3Segment_get__availableDerivatives(t_SP3Segment *self, void *data);
        static PyObject *t_SP3Segment_get__coordinates(t_SP3Segment *self, void *data);
        static PyObject *t_SP3Segment_get__frame(t_SP3Segment *self, void *data);
        static PyObject *t_SP3Segment_get__interpolationSamples(t_SP3Segment *self, void *data);
        static PyObject *t_SP3Segment_get__mu(t_SP3Segment *self, void *data);
        static PyObject *t_SP3Segment_get__propagator(t_SP3Segment *self, void *data);
        static PyObject *t_SP3Segment_get__start(t_SP3Segment *self, void *data);
        static PyObject *t_SP3Segment_get__stop(t_SP3Segment *self, void *data);
        static PyGetSetDef t_SP3Segment__fields_[] = {
          DECLARE_GET_FIELD(t_SP3Segment, availableDerivatives),
          DECLARE_GET_FIELD(t_SP3Segment, coordinates),
          DECLARE_GET_FIELD(t_SP3Segment, frame),
          DECLARE_GET_FIELD(t_SP3Segment, interpolationSamples),
          DECLARE_GET_FIELD(t_SP3Segment, mu),
          DECLARE_GET_FIELD(t_SP3Segment, propagator),
          DECLARE_GET_FIELD(t_SP3Segment, start),
          DECLARE_GET_FIELD(t_SP3Segment, stop),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SP3Segment__methods_[] = {
          DECLARE_METHOD(t_SP3Segment, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Segment, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Segment, addCoordinate, METH_O),
          DECLARE_METHOD(t_SP3Segment, getAvailableDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_SP3Segment, getCoordinates, METH_NOARGS),
          DECLARE_METHOD(t_SP3Segment, getFrame, METH_NOARGS),
          DECLARE_METHOD(t_SP3Segment, getInterpolationSamples, METH_NOARGS),
          DECLARE_METHOD(t_SP3Segment, getMu, METH_NOARGS),
          DECLARE_METHOD(t_SP3Segment, getPropagator, METH_VARARGS),
          DECLARE_METHOD(t_SP3Segment, getStart, METH_NOARGS),
          DECLARE_METHOD(t_SP3Segment, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3Segment)[] = {
          { Py_tp_methods, t_SP3Segment__methods_ },
          { Py_tp_init, (void *) t_SP3Segment_init_ },
          { Py_tp_getset, t_SP3Segment__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3Segment)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SP3Segment, t_SP3Segment, SP3Segment);

        void t_SP3Segment::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3Segment), &PY_TYPE_DEF(SP3Segment), module, "SP3Segment", 0);
        }

        void t_SP3Segment::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Segment), "class_", make_descriptor(SP3Segment::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Segment), "wrapfn_", make_descriptor(t_SP3Segment::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Segment), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SP3Segment_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3Segment::initializeClass, 1)))
            return NULL;
          return t_SP3Segment::wrap_Object(SP3Segment(((t_SP3Segment *) arg)->object.this$));
        }
        static PyObject *t_SP3Segment_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3Segment::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SP3Segment_init_(t_SP3Segment *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ::org::orekit::frames::Frame a1((jobject) NULL);
          jint a2;
          ::org::orekit::utils::CartesianDerivativesFilter a3((jobject) NULL);
          PyTypeObject **p3;
          SP3Segment object((jobject) NULL);

          if (!parseArgs(args, "DkIK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
          {
            INT_CALL(object = SP3Segment(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SP3Segment_addCoordinate(t_SP3Segment *self, PyObject *arg)
        {
          ::org::orekit::files::sp3::SP3Coordinate a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::sp3::SP3Coordinate::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addCoordinate(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addCoordinate", arg);
          return NULL;
        }

        static PyObject *t_SP3Segment_getAvailableDerivatives(t_SP3Segment *self)
        {
          ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
          OBJ_CALL(result = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
        }

        static PyObject *t_SP3Segment_getCoordinates(t_SP3Segment *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoordinates());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::sp3::PY_TYPE(SP3Coordinate));
        }

        static PyObject *t_SP3Segment_getFrame(t_SP3Segment *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_SP3Segment_getInterpolationSamples(t_SP3Segment *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SP3Segment_getMu(t_SP3Segment *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Segment_getPropagator(t_SP3Segment *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::propagation::BoundedPropagator result((jobject) NULL);
              OBJ_CALL(result = self->object.getPropagator());
              return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
              ::org::orekit::propagation::BoundedPropagator result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getPropagator(a0));
                return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getPropagator", args);
          return NULL;
        }

        static PyObject *t_SP3Segment_getStart(t_SP3Segment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SP3Segment_getStop(t_SP3Segment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SP3Segment_get__availableDerivatives(t_SP3Segment *self, void *data)
        {
          ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
          OBJ_CALL(value = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
        }

        static PyObject *t_SP3Segment_get__coordinates(t_SP3Segment *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoordinates());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_SP3Segment_get__frame(t_SP3Segment *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_SP3Segment_get__interpolationSamples(t_SP3Segment *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SP3Segment_get__mu(t_SP3Segment *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SP3Segment_get__propagator(t_SP3Segment *self, void *data)
        {
          ::org::orekit::propagation::BoundedPropagator value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagator());
          return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(value);
        }

        static PyObject *t_SP3Segment_get__start(t_SP3Segment *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SP3Segment_get__stop(t_SP3Segment *self, void *data)
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
#include "org/orekit/propagation/sampling/FieldOrekitStepNormalizer.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepHandler.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepInterpolator.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/sampling/FieldOrekitFixedStepHandler.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *FieldOrekitStepNormalizer::class$ = NULL;
        jmethodID *FieldOrekitStepNormalizer::mids$ = NULL;
        bool FieldOrekitStepNormalizer::live$ = false;

        jclass FieldOrekitStepNormalizer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/FieldOrekitStepNormalizer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b6d4e0fa68ea09a5] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/propagation/sampling/FieldOrekitFixedStepHandler;)V");
            mids$[mid_finish_8062511934471166] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_getFixedStepHandler_eedcac4540424e57] = env->getMethodID(cls, "getFixedStepHandler", "()Lorg/orekit/propagation/sampling/FieldOrekitFixedStepHandler;");
            mids$[mid_getFixedTimeStep_08d37e3f77b7239d] = env->getMethodID(cls, "getFixedTimeStep", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_handleStep_33c76379cdb8499a] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;)V");
            mids$[mid_init_357211ab77703f3f] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_requiresDenseOutput_eee3de00fe971136] = env->getMethodID(cls, "requiresDenseOutput", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldOrekitStepNormalizer::FieldOrekitStepNormalizer(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b6d4e0fa68ea09a5, a0.this$, a1.this$)) {}

        void FieldOrekitStepNormalizer::finish(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_8062511934471166], a0.this$);
        }

        ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler FieldOrekitStepNormalizer::getFixedStepHandler() const
        {
          return ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler(env->callObjectMethod(this$, mids$[mid_getFixedStepHandler_eedcac4540424e57]));
        }

        ::org::hipparchus::CalculusFieldElement FieldOrekitStepNormalizer::getFixedTimeStep() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFixedTimeStep_08d37e3f77b7239d]));
        }

        void FieldOrekitStepNormalizer::handleStep(const ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_33c76379cdb8499a], a0.this$);
        }

        void FieldOrekitStepNormalizer::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_357211ab77703f3f], a0.this$, a1.this$);
        }

        jboolean FieldOrekitStepNormalizer::requiresDenseOutput() const
        {
          return env->callBooleanMethod(this$, mids$[mid_requiresDenseOutput_eee3de00fe971136]);
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
        static PyObject *t_FieldOrekitStepNormalizer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOrekitStepNormalizer_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOrekitStepNormalizer_of_(t_FieldOrekitStepNormalizer *self, PyObject *args);
        static int t_FieldOrekitStepNormalizer_init_(t_FieldOrekitStepNormalizer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldOrekitStepNormalizer_finish(t_FieldOrekitStepNormalizer *self, PyObject *arg);
        static PyObject *t_FieldOrekitStepNormalizer_getFixedStepHandler(t_FieldOrekitStepNormalizer *self);
        static PyObject *t_FieldOrekitStepNormalizer_getFixedTimeStep(t_FieldOrekitStepNormalizer *self);
        static PyObject *t_FieldOrekitStepNormalizer_handleStep(t_FieldOrekitStepNormalizer *self, PyObject *arg);
        static PyObject *t_FieldOrekitStepNormalizer_init(t_FieldOrekitStepNormalizer *self, PyObject *args);
        static PyObject *t_FieldOrekitStepNormalizer_requiresDenseOutput(t_FieldOrekitStepNormalizer *self);
        static PyObject *t_FieldOrekitStepNormalizer_get__fixedStepHandler(t_FieldOrekitStepNormalizer *self, void *data);
        static PyObject *t_FieldOrekitStepNormalizer_get__fixedTimeStep(t_FieldOrekitStepNormalizer *self, void *data);
        static PyObject *t_FieldOrekitStepNormalizer_get__parameters_(t_FieldOrekitStepNormalizer *self, void *data);
        static PyGetSetDef t_FieldOrekitStepNormalizer__fields_[] = {
          DECLARE_GET_FIELD(t_FieldOrekitStepNormalizer, fixedStepHandler),
          DECLARE_GET_FIELD(t_FieldOrekitStepNormalizer, fixedTimeStep),
          DECLARE_GET_FIELD(t_FieldOrekitStepNormalizer, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldOrekitStepNormalizer__methods_[] = {
          DECLARE_METHOD(t_FieldOrekitStepNormalizer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOrekitStepNormalizer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOrekitStepNormalizer, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldOrekitStepNormalizer, finish, METH_O),
          DECLARE_METHOD(t_FieldOrekitStepNormalizer, getFixedStepHandler, METH_NOARGS),
          DECLARE_METHOD(t_FieldOrekitStepNormalizer, getFixedTimeStep, METH_NOARGS),
          DECLARE_METHOD(t_FieldOrekitStepNormalizer, handleStep, METH_O),
          DECLARE_METHOD(t_FieldOrekitStepNormalizer, init, METH_VARARGS),
          DECLARE_METHOD(t_FieldOrekitStepNormalizer, requiresDenseOutput, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldOrekitStepNormalizer)[] = {
          { Py_tp_methods, t_FieldOrekitStepNormalizer__methods_ },
          { Py_tp_init, (void *) t_FieldOrekitStepNormalizer_init_ },
          { Py_tp_getset, t_FieldOrekitStepNormalizer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldOrekitStepNormalizer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldOrekitStepNormalizer, t_FieldOrekitStepNormalizer, FieldOrekitStepNormalizer);
        PyObject *t_FieldOrekitStepNormalizer::wrap_Object(const FieldOrekitStepNormalizer& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldOrekitStepNormalizer::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldOrekitStepNormalizer *self = (t_FieldOrekitStepNormalizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldOrekitStepNormalizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldOrekitStepNormalizer::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldOrekitStepNormalizer *self = (t_FieldOrekitStepNormalizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldOrekitStepNormalizer::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldOrekitStepNormalizer), &PY_TYPE_DEF(FieldOrekitStepNormalizer), module, "FieldOrekitStepNormalizer", 0);
        }

        void t_FieldOrekitStepNormalizer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitStepNormalizer), "class_", make_descriptor(FieldOrekitStepNormalizer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitStepNormalizer), "wrapfn_", make_descriptor(t_FieldOrekitStepNormalizer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitStepNormalizer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldOrekitStepNormalizer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldOrekitStepNormalizer::initializeClass, 1)))
            return NULL;
          return t_FieldOrekitStepNormalizer::wrap_Object(FieldOrekitStepNormalizer(((t_FieldOrekitStepNormalizer *) arg)->object.this$));
        }
        static PyObject *t_FieldOrekitStepNormalizer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldOrekitStepNormalizer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldOrekitStepNormalizer_of_(t_FieldOrekitStepNormalizer *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldOrekitStepNormalizer_init_(t_FieldOrekitStepNormalizer *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler a1((jobject) NULL);
          PyTypeObject **p1;
          FieldOrekitStepNormalizer object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::propagation::sampling::t_FieldOrekitFixedStepHandler::parameters_))
          {
            INT_CALL(object = FieldOrekitStepNormalizer(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldOrekitStepNormalizer_finish(t_FieldOrekitStepNormalizer *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_FieldOrekitStepNormalizer_getFixedStepHandler(t_FieldOrekitStepNormalizer *self)
        {
          ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getFixedStepHandler());
          return ::org::orekit::propagation::sampling::t_FieldOrekitFixedStepHandler::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldOrekitStepNormalizer_getFixedTimeStep(t_FieldOrekitStepNormalizer *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getFixedTimeStep());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldOrekitStepNormalizer_handleStep(t_FieldOrekitStepNormalizer *self, PyObject *arg)
        {
          ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator::initializeClass, &a0, &p0, ::org::orekit::propagation::sampling::t_FieldOrekitStepInterpolator::parameters_))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_FieldOrekitStepNormalizer_init(t_FieldOrekitStepNormalizer *self, PyObject *args)
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

        static PyObject *t_FieldOrekitStepNormalizer_requiresDenseOutput(t_FieldOrekitStepNormalizer *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.requiresDenseOutput());
          Py_RETURN_BOOL(result);
        }
        static PyObject *t_FieldOrekitStepNormalizer_get__parameters_(t_FieldOrekitStepNormalizer *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldOrekitStepNormalizer_get__fixedStepHandler(t_FieldOrekitStepNormalizer *self, void *data)
        {
          ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getFixedStepHandler());
          return ::org::orekit::propagation::sampling::t_FieldOrekitFixedStepHandler::wrap_Object(value);
        }

        static PyObject *t_FieldOrekitStepNormalizer_get__fixedTimeStep(t_FieldOrekitStepNormalizer *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getFixedTimeStep());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
