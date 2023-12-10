#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeElementsType::class$ = NULL;
              jmethodID *AttitudeElementsType::mids$ = NULL;
              bool AttitudeElementsType::live$ = false;
              AttitudeElementsType *AttitudeElementsType::DCM = NULL;
              AttitudeElementsType *AttitudeElementsType::EULER_ANGLES = NULL;
              AttitudeElementsType *AttitudeElementsType::QUATERNION = NULL;

              jclass AttitudeElementsType::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_getUnits_2afa36052df4765d] = env->getMethodID(cls, "getUnits", "()Ljava/util/List;");
                  mids$[mid_toRotation_6bb62df9eca4ac1d] = env->getMethodID(cls, "toRotation", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;[D)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
                  mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
                  mids$[mid_valueOf_92ba6852dab7e267] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;");
                  mids$[mid_values_55b6b8bc8018ba0b] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  DCM = new AttitudeElementsType(env->getStaticObjectField(cls, "DCM", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;"));
                  EULER_ANGLES = new AttitudeElementsType(env->getStaticObjectField(cls, "EULER_ANGLES", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;"));
                  QUATERNION = new AttitudeElementsType(env->getStaticObjectField(cls, "QUATERNION", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::java::util::List AttitudeElementsType::getUnits() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getUnits_2afa36052df4765d]));
              }

              ::org::hipparchus::geometry::euclidean::threed::Rotation AttitudeElementsType::toRotation(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0, const JArray< jdouble > & a1) const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_toRotation_6bb62df9eca4ac1d], a0.this$, a1.this$));
              }

              ::java::lang::String AttitudeElementsType::toString() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
              }

              AttitudeElementsType AttitudeElementsType::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AttitudeElementsType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_92ba6852dab7e267], a0.this$));
              }

              JArray< AttitudeElementsType > AttitudeElementsType::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AttitudeElementsType >(env->callStaticObjectMethod(cls, mids$[mid_values_55b6b8bc8018ba0b]));
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
              static PyObject *t_AttitudeElementsType_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeElementsType_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeElementsType_of_(t_AttitudeElementsType *self, PyObject *args);
              static PyObject *t_AttitudeElementsType_getUnits(t_AttitudeElementsType *self);
              static PyObject *t_AttitudeElementsType_toRotation(t_AttitudeElementsType *self, PyObject *args);
              static PyObject *t_AttitudeElementsType_toString(t_AttitudeElementsType *self, PyObject *args);
              static PyObject *t_AttitudeElementsType_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AttitudeElementsType_values(PyTypeObject *type);
              static PyObject *t_AttitudeElementsType_get__units(t_AttitudeElementsType *self, void *data);
              static PyObject *t_AttitudeElementsType_get__parameters_(t_AttitudeElementsType *self, void *data);
              static PyGetSetDef t_AttitudeElementsType__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeElementsType, units),
                DECLARE_GET_FIELD(t_AttitudeElementsType, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeElementsType__methods_[] = {
                DECLARE_METHOD(t_AttitudeElementsType, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeElementsType, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeElementsType, of_, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeElementsType, getUnits, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeElementsType, toRotation, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeElementsType, toString, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeElementsType, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AttitudeElementsType, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeElementsType)[] = {
                { Py_tp_methods, t_AttitudeElementsType__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AttitudeElementsType__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeElementsType)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AttitudeElementsType, t_AttitudeElementsType, AttitudeElementsType);
              PyObject *t_AttitudeElementsType::wrap_Object(const AttitudeElementsType& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeElementsType::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeElementsType *self = (t_AttitudeElementsType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AttitudeElementsType::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeElementsType::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeElementsType *self = (t_AttitudeElementsType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AttitudeElementsType::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeElementsType), &PY_TYPE_DEF(AttitudeElementsType), module, "AttitudeElementsType", 0);
              }

              void t_AttitudeElementsType::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeElementsType), "class_", make_descriptor(AttitudeElementsType::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeElementsType), "wrapfn_", make_descriptor(t_AttitudeElementsType::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeElementsType), "boxfn_", make_descriptor(boxObject));
                env->getClass(AttitudeElementsType::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeElementsType), "DCM", make_descriptor(t_AttitudeElementsType::wrap_Object(*AttitudeElementsType::DCM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeElementsType), "EULER_ANGLES", make_descriptor(t_AttitudeElementsType::wrap_Object(*AttitudeElementsType::EULER_ANGLES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeElementsType), "QUATERNION", make_descriptor(t_AttitudeElementsType::wrap_Object(*AttitudeElementsType::QUATERNION)));
              }

              static PyObject *t_AttitudeElementsType_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeElementsType::initializeClass, 1)))
                  return NULL;
                return t_AttitudeElementsType::wrap_Object(AttitudeElementsType(((t_AttitudeElementsType *) arg)->object.this$));
              }
              static PyObject *t_AttitudeElementsType_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeElementsType::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AttitudeElementsType_of_(t_AttitudeElementsType *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AttitudeElementsType_getUnits(t_AttitudeElementsType *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getUnits());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::units::PY_TYPE(Unit));
              }

              static PyObject *t_AttitudeElementsType_toRotation(t_AttitudeElementsType *self, PyObject *args)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< jdouble > a1((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

                if (!parseArgs(args, "K[D", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a1))
                {
                  OBJ_CALL(result = self->object.toRotation(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "toRotation", args);
                return NULL;
              }

              static PyObject *t_AttitudeElementsType_toString(t_AttitudeElementsType *self, PyObject *args)
              {
                ::java::lang::String result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.toString());
                  return j2p(result);
                }

                return callSuper(PY_TYPE(AttitudeElementsType), (PyObject *) self, "toString", args, 2);
              }

              static PyObject *t_AttitudeElementsType_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AttitudeElementsType result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType::valueOf(a0));
                  return t_AttitudeElementsType::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AttitudeElementsType_values(PyTypeObject *type)
              {
                JArray< AttitudeElementsType > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType::values());
                return JArray<jobject>(result.this$).wrap(t_AttitudeElementsType::wrap_jobject);
              }
              static PyObject *t_AttitudeElementsType_get__parameters_(t_AttitudeElementsType *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_AttitudeElementsType_get__units(t_AttitudeElementsType *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getUnits());
                return ::java::util::t_List::wrap_Object(value);
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
#include "java/io/StringReader.h"
#include "java/io/IOException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *StringReader::class$ = NULL;
    jmethodID *StringReader::mids$ = NULL;
    bool StringReader::live$ = false;

    jclass StringReader::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/StringReader");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_close_0fa09c18fee449d5] = env->getMethodID(cls, "close", "()V");
        mids$[mid_mark_99803b0791f320ff] = env->getMethodID(cls, "mark", "(I)V");
        mids$[mid_markSupported_b108b35ef48e27bd] = env->getMethodID(cls, "markSupported", "()Z");
        mids$[mid_read_570ce0828f81a2c1] = env->getMethodID(cls, "read", "()I");
        mids$[mid_read_e1525dbb996fb0b1] = env->getMethodID(cls, "read", "([CII)I");
        mids$[mid_ready_b108b35ef48e27bd] = env->getMethodID(cls, "ready", "()Z");
        mids$[mid_reset_0fa09c18fee449d5] = env->getMethodID(cls, "reset", "()V");
        mids$[mid_skip_02b241598e254a3f] = env->getMethodID(cls, "skip", "(J)J");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    StringReader::StringReader(const ::java::lang::String & a0) : ::java::io::Reader(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

    void StringReader::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_0fa09c18fee449d5]);
    }

    void StringReader::mark(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_mark_99803b0791f320ff], a0);
    }

    jboolean StringReader::markSupported() const
    {
      return env->callBooleanMethod(this$, mids$[mid_markSupported_b108b35ef48e27bd]);
    }

    jint StringReader::read() const
    {
      return env->callIntMethod(this$, mids$[mid_read_570ce0828f81a2c1]);
    }

    jint StringReader::read(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      return env->callIntMethod(this$, mids$[mid_read_e1525dbb996fb0b1], a0.this$, a1, a2);
    }

    jboolean StringReader::ready() const
    {
      return env->callBooleanMethod(this$, mids$[mid_ready_b108b35ef48e27bd]);
    }

    void StringReader::reset() const
    {
      env->callVoidMethod(this$, mids$[mid_reset_0fa09c18fee449d5]);
    }

    jlong StringReader::skip(jlong a0) const
    {
      return env->callLongMethod(this$, mids$[mid_skip_02b241598e254a3f], a0);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_StringReader_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_StringReader_instance_(PyTypeObject *type, PyObject *arg);
    static int t_StringReader_init_(t_StringReader *self, PyObject *args, PyObject *kwds);
    static PyObject *t_StringReader_close(t_StringReader *self, PyObject *args);
    static PyObject *t_StringReader_mark(t_StringReader *self, PyObject *args);
    static PyObject *t_StringReader_markSupported(t_StringReader *self, PyObject *args);
    static PyObject *t_StringReader_read(t_StringReader *self, PyObject *args);
    static PyObject *t_StringReader_ready(t_StringReader *self, PyObject *args);
    static PyObject *t_StringReader_reset(t_StringReader *self, PyObject *args);
    static PyObject *t_StringReader_skip(t_StringReader *self, PyObject *args);

    static PyMethodDef t_StringReader__methods_[] = {
      DECLARE_METHOD(t_StringReader, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_StringReader, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_StringReader, close, METH_VARARGS),
      DECLARE_METHOD(t_StringReader, mark, METH_VARARGS),
      DECLARE_METHOD(t_StringReader, markSupported, METH_VARARGS),
      DECLARE_METHOD(t_StringReader, read, METH_VARARGS),
      DECLARE_METHOD(t_StringReader, ready, METH_VARARGS),
      DECLARE_METHOD(t_StringReader, reset, METH_VARARGS),
      DECLARE_METHOD(t_StringReader, skip, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(StringReader)[] = {
      { Py_tp_methods, t_StringReader__methods_ },
      { Py_tp_init, (void *) t_StringReader_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(StringReader)[] = {
      &PY_TYPE_DEF(::java::io::Reader),
      NULL
    };

    DEFINE_TYPE(StringReader, t_StringReader, StringReader);

    void t_StringReader::install(PyObject *module)
    {
      installType(&PY_TYPE(StringReader), &PY_TYPE_DEF(StringReader), module, "StringReader", 0);
    }

    void t_StringReader::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(StringReader), "class_", make_descriptor(StringReader::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(StringReader), "wrapfn_", make_descriptor(t_StringReader::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(StringReader), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_StringReader_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, StringReader::initializeClass, 1)))
        return NULL;
      return t_StringReader::wrap_Object(StringReader(((t_StringReader *) arg)->object.this$));
    }
    static PyObject *t_StringReader_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, StringReader::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_StringReader_init_(t_StringReader *self, PyObject *args, PyObject *kwds)
    {
      ::java::lang::String a0((jobject) NULL);
      StringReader object((jobject) NULL);

      if (!parseArgs(args, "s", &a0))
      {
        INT_CALL(object = StringReader(a0));
        self->object = object;
      }
      else
      {
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_StringReader_close(t_StringReader *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(StringReader), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_StringReader_mark(t_StringReader *self, PyObject *args)
    {
      jint a0;

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(self->object.mark(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(StringReader), (PyObject *) self, "mark", args, 2);
    }

    static PyObject *t_StringReader_markSupported(t_StringReader *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.markSupported());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(StringReader), (PyObject *) self, "markSupported", args, 2);
    }

    static PyObject *t_StringReader_read(t_StringReader *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          jint result;
          OBJ_CALL(result = self->object.read());
          return PyLong_FromLong((long) result);
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

      return callSuper(PY_TYPE(StringReader), (PyObject *) self, "read", args, 2);
    }

    static PyObject *t_StringReader_ready(t_StringReader *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.ready());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(StringReader), (PyObject *) self, "ready", args, 2);
    }

    static PyObject *t_StringReader_reset(t_StringReader *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.reset());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(StringReader), (PyObject *) self, "reset", args, 2);
    }

    static PyObject *t_StringReader_skip(t_StringReader *self, PyObject *args)
    {
      jlong a0;
      jlong result;

      if (!parseArgs(args, "J", &a0))
      {
        OBJ_CALL(result = self->object.skip(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      return callSuper(PY_TYPE(StringReader), (PyObject *) self, "skip", args, 2);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/RTNCovarianceWriter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *RTNCovarianceWriter::class$ = NULL;
            jmethodID *RTNCovarianceWriter::mids$ = NULL;
            bool RTNCovarianceWriter::live$ = false;

            jclass RTNCovarianceWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/RTNCovarianceWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_writeContent_6d745cf7b26e9f5d] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

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
            static PyObject *t_RTNCovarianceWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RTNCovarianceWriter_instance_(PyTypeObject *type, PyObject *arg);

            static PyMethodDef t_RTNCovarianceWriter__methods_[] = {
              DECLARE_METHOD(t_RTNCovarianceWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RTNCovarianceWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RTNCovarianceWriter)[] = {
              { Py_tp_methods, t_RTNCovarianceWriter__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RTNCovarianceWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(RTNCovarianceWriter, t_RTNCovarianceWriter, RTNCovarianceWriter);

            void t_RTNCovarianceWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(RTNCovarianceWriter), &PY_TYPE_DEF(RTNCovarianceWriter), module, "RTNCovarianceWriter", 0);
            }

            void t_RTNCovarianceWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceWriter), "class_", make_descriptor(RTNCovarianceWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceWriter), "wrapfn_", make_descriptor(t_RTNCovarianceWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_RTNCovarianceWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RTNCovarianceWriter::initializeClass, 1)))
                return NULL;
              return t_RTNCovarianceWriter::wrap_Object(RTNCovarianceWriter(((t_RTNCovarianceWriter *) arg)->object.this$));
            }
            static PyObject *t_RTNCovarianceWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RTNCovarianceWriter::initializeClass, 0))
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
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmMetadata.h"
#include "java/util/List.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmElements.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AcmMetadata::class$ = NULL;
              jmethodID *AcmMetadata::mids$ = NULL;
              bool AcmMetadata::live$ = false;

              jclass AcmMetadata::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AcmMetadata");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_47d99c12e4a42886] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataContext;)V");
                  mids$[mid_getAcmDataElements_2afa36052df4765d] = env->getMethodID(cls, "getAcmDataElements", "()Ljava/util/List;");
                  mids$[mid_getCatalogName_11b109bd155ca898] = env->getMethodID(cls, "getCatalogName", "()Ljava/lang/String;");
                  mids$[mid_getEpochT0_85703d13e302437e] = env->getMethodID(cls, "getEpochT0", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getInternationalDesignator_11b109bd155ca898] = env->getMethodID(cls, "getInternationalDesignator", "()Ljava/lang/String;");
                  mids$[mid_getNextLeapEpoch_85703d13e302437e] = env->getMethodID(cls, "getNextLeapEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getNextLeapTaimutc_dff5885c2c873297] = env->getMethodID(cls, "getNextLeapTaimutc", "()D");
                  mids$[mid_getObjectDesignator_11b109bd155ca898] = env->getMethodID(cls, "getObjectDesignator", "()Ljava/lang/String;");
                  mids$[mid_getOdmMessageLink_11b109bd155ca898] = env->getMethodID(cls, "getOdmMessageLink", "()Ljava/lang/String;");
                  mids$[mid_getOriginatorAddress_11b109bd155ca898] = env->getMethodID(cls, "getOriginatorAddress", "()Ljava/lang/String;");
                  mids$[mid_getOriginatorEmail_11b109bd155ca898] = env->getMethodID(cls, "getOriginatorEmail", "()Ljava/lang/String;");
                  mids$[mid_getOriginatorPOC_11b109bd155ca898] = env->getMethodID(cls, "getOriginatorPOC", "()Ljava/lang/String;");
                  mids$[mid_getOriginatorPhone_11b109bd155ca898] = env->getMethodID(cls, "getOriginatorPhone", "()Ljava/lang/String;");
                  mids$[mid_getOriginatorPosition_11b109bd155ca898] = env->getMethodID(cls, "getOriginatorPosition", "()Ljava/lang/String;");
                  mids$[mid_getStartTime_85703d13e302437e] = env->getMethodID(cls, "getStartTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStopTime_85703d13e302437e] = env->getMethodID(cls, "getStopTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getTaimutcT0_dff5885c2c873297] = env->getMethodID(cls, "getTaimutcT0", "()D");
                  mids$[mid_setAcmDataElements_de3e021e7266b71e] = env->getMethodID(cls, "setAcmDataElements", "(Ljava/util/List;)V");
                  mids$[mid_setCatalogName_d0bc48d5b00dc40c] = env->getMethodID(cls, "setCatalogName", "(Ljava/lang/String;)V");
                  mids$[mid_setEpochT0_600a2a61652bc473] = env->getMethodID(cls, "setEpochT0", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setInternationalDesignator_d0bc48d5b00dc40c] = env->getMethodID(cls, "setInternationalDesignator", "(Ljava/lang/String;)V");
                  mids$[mid_setNextLeapEpoch_600a2a61652bc473] = env->getMethodID(cls, "setNextLeapEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setNextLeapTaimutc_17db3a65980d3441] = env->getMethodID(cls, "setNextLeapTaimutc", "(D)V");
                  mids$[mid_setObjectDesignator_d0bc48d5b00dc40c] = env->getMethodID(cls, "setObjectDesignator", "(Ljava/lang/String;)V");
                  mids$[mid_setOdmMessageLink_d0bc48d5b00dc40c] = env->getMethodID(cls, "setOdmMessageLink", "(Ljava/lang/String;)V");
                  mids$[mid_setOriginatorAddress_d0bc48d5b00dc40c] = env->getMethodID(cls, "setOriginatorAddress", "(Ljava/lang/String;)V");
                  mids$[mid_setOriginatorEmail_d0bc48d5b00dc40c] = env->getMethodID(cls, "setOriginatorEmail", "(Ljava/lang/String;)V");
                  mids$[mid_setOriginatorPOC_d0bc48d5b00dc40c] = env->getMethodID(cls, "setOriginatorPOC", "(Ljava/lang/String;)V");
                  mids$[mid_setOriginatorPhone_d0bc48d5b00dc40c] = env->getMethodID(cls, "setOriginatorPhone", "(Ljava/lang/String;)V");
                  mids$[mid_setOriginatorPosition_d0bc48d5b00dc40c] = env->getMethodID(cls, "setOriginatorPosition", "(Ljava/lang/String;)V");
                  mids$[mid_setStartTime_600a2a61652bc473] = env->getMethodID(cls, "setStartTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setStopTime_600a2a61652bc473] = env->getMethodID(cls, "setStopTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setTaimutcT0_17db3a65980d3441] = env->getMethodID(cls, "setTaimutcT0", "(D)V");
                  mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AcmMetadata::AcmMetadata(const ::org::orekit::data::DataContext & a0) : ::org::orekit::files::ccsds::ndm::adm::AdmMetadata(env->newObject(initializeClass, &mids$, mid_init$_47d99c12e4a42886, a0.this$)) {}

              ::java::util::List AcmMetadata::getAcmDataElements() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAcmDataElements_2afa36052df4765d]));
              }

              ::java::lang::String AcmMetadata::getCatalogName() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCatalogName_11b109bd155ca898]));
              }

              ::org::orekit::time::AbsoluteDate AcmMetadata::getEpochT0() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpochT0_85703d13e302437e]));
              }

              ::java::lang::String AcmMetadata::getInternationalDesignator() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInternationalDesignator_11b109bd155ca898]));
              }

              ::org::orekit::time::AbsoluteDate AcmMetadata::getNextLeapEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getNextLeapEpoch_85703d13e302437e]));
              }

              jdouble AcmMetadata::getNextLeapTaimutc() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getNextLeapTaimutc_dff5885c2c873297]);
              }

              ::java::lang::String AcmMetadata::getObjectDesignator() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObjectDesignator_11b109bd155ca898]));
              }

              ::java::lang::String AcmMetadata::getOdmMessageLink() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOdmMessageLink_11b109bd155ca898]));
              }

              ::java::lang::String AcmMetadata::getOriginatorAddress() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorAddress_11b109bd155ca898]));
              }

              ::java::lang::String AcmMetadata::getOriginatorEmail() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorEmail_11b109bd155ca898]));
              }

              ::java::lang::String AcmMetadata::getOriginatorPOC() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorPOC_11b109bd155ca898]));
              }

              ::java::lang::String AcmMetadata::getOriginatorPhone() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorPhone_11b109bd155ca898]));
              }

              ::java::lang::String AcmMetadata::getOriginatorPosition() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginatorPosition_11b109bd155ca898]));
              }

              ::org::orekit::time::AbsoluteDate AcmMetadata::getStartTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartTime_85703d13e302437e]));
              }

              ::org::orekit::time::AbsoluteDate AcmMetadata::getStopTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStopTime_85703d13e302437e]));
              }

              jdouble AcmMetadata::getTaimutcT0() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTaimutcT0_dff5885c2c873297]);
              }

              void AcmMetadata::setAcmDataElements(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAcmDataElements_de3e021e7266b71e], a0.this$);
              }

              void AcmMetadata::setCatalogName(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCatalogName_d0bc48d5b00dc40c], a0.this$);
              }

              void AcmMetadata::setEpochT0(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEpochT0_600a2a61652bc473], a0.this$);
              }

              void AcmMetadata::setInternationalDesignator(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInternationalDesignator_d0bc48d5b00dc40c], a0.this$);
              }

              void AcmMetadata::setNextLeapEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNextLeapEpoch_600a2a61652bc473], a0.this$);
              }

              void AcmMetadata::setNextLeapTaimutc(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNextLeapTaimutc_17db3a65980d3441], a0);
              }

              void AcmMetadata::setObjectDesignator(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setObjectDesignator_d0bc48d5b00dc40c], a0.this$);
              }

              void AcmMetadata::setOdmMessageLink(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOdmMessageLink_d0bc48d5b00dc40c], a0.this$);
              }

              void AcmMetadata::setOriginatorAddress(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorAddress_d0bc48d5b00dc40c], a0.this$);
              }

              void AcmMetadata::setOriginatorEmail(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorEmail_d0bc48d5b00dc40c], a0.this$);
              }

              void AcmMetadata::setOriginatorPOC(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorPOC_d0bc48d5b00dc40c], a0.this$);
              }

              void AcmMetadata::setOriginatorPhone(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorPhone_d0bc48d5b00dc40c], a0.this$);
              }

              void AcmMetadata::setOriginatorPosition(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOriginatorPosition_d0bc48d5b00dc40c], a0.this$);
              }

              void AcmMetadata::setStartTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setStartTime_600a2a61652bc473], a0.this$);
              }

              void AcmMetadata::setStopTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setStopTime_600a2a61652bc473], a0.this$);
              }

              void AcmMetadata::setTaimutcT0(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTaimutcT0_17db3a65980d3441], a0);
              }

              void AcmMetadata::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_17db3a65980d3441], a0);
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
              static PyObject *t_AcmMetadata_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmMetadata_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AcmMetadata_init_(t_AcmMetadata *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AcmMetadata_getAcmDataElements(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getCatalogName(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getEpochT0(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getInternationalDesignator(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getNextLeapEpoch(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getNextLeapTaimutc(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getObjectDesignator(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getOdmMessageLink(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getOriginatorAddress(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getOriginatorEmail(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getOriginatorPOC(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getOriginatorPhone(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getOriginatorPosition(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getStartTime(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getStopTime(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_getTaimutcT0(t_AcmMetadata *self);
              static PyObject *t_AcmMetadata_setAcmDataElements(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setCatalogName(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setEpochT0(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setInternationalDesignator(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setNextLeapEpoch(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setNextLeapTaimutc(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setObjectDesignator(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setOdmMessageLink(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setOriginatorAddress(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setOriginatorEmail(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setOriginatorPOC(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setOriginatorPhone(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setOriginatorPosition(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setStartTime(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setStopTime(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_setTaimutcT0(t_AcmMetadata *self, PyObject *arg);
              static PyObject *t_AcmMetadata_validate(t_AcmMetadata *self, PyObject *args);
              static PyObject *t_AcmMetadata_get__acmDataElements(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__acmDataElements(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__catalogName(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__catalogName(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__epochT0(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__epochT0(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__internationalDesignator(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__internationalDesignator(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__nextLeapEpoch(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__nextLeapEpoch(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__nextLeapTaimutc(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__nextLeapTaimutc(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__objectDesignator(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__objectDesignator(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__odmMessageLink(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__odmMessageLink(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__originatorAddress(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__originatorAddress(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__originatorEmail(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__originatorEmail(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__originatorPOC(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__originatorPOC(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__originatorPhone(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__originatorPhone(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__originatorPosition(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__originatorPosition(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__startTime(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__startTime(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__stopTime(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__stopTime(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AcmMetadata_get__taimutcT0(t_AcmMetadata *self, void *data);
              static int t_AcmMetadata_set__taimutcT0(t_AcmMetadata *self, PyObject *arg, void *data);
              static PyGetSetDef t_AcmMetadata__fields_[] = {
                DECLARE_GETSET_FIELD(t_AcmMetadata, acmDataElements),
                DECLARE_GETSET_FIELD(t_AcmMetadata, catalogName),
                DECLARE_GETSET_FIELD(t_AcmMetadata, epochT0),
                DECLARE_GETSET_FIELD(t_AcmMetadata, internationalDesignator),
                DECLARE_GETSET_FIELD(t_AcmMetadata, nextLeapEpoch),
                DECLARE_GETSET_FIELD(t_AcmMetadata, nextLeapTaimutc),
                DECLARE_GETSET_FIELD(t_AcmMetadata, objectDesignator),
                DECLARE_GETSET_FIELD(t_AcmMetadata, odmMessageLink),
                DECLARE_GETSET_FIELD(t_AcmMetadata, originatorAddress),
                DECLARE_GETSET_FIELD(t_AcmMetadata, originatorEmail),
                DECLARE_GETSET_FIELD(t_AcmMetadata, originatorPOC),
                DECLARE_GETSET_FIELD(t_AcmMetadata, originatorPhone),
                DECLARE_GETSET_FIELD(t_AcmMetadata, originatorPosition),
                DECLARE_GETSET_FIELD(t_AcmMetadata, startTime),
                DECLARE_GETSET_FIELD(t_AcmMetadata, stopTime),
                DECLARE_GETSET_FIELD(t_AcmMetadata, taimutcT0),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AcmMetadata__methods_[] = {
                DECLARE_METHOD(t_AcmMetadata, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmMetadata, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmMetadata, getAcmDataElements, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getCatalogName, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getEpochT0, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getInternationalDesignator, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getNextLeapEpoch, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getNextLeapTaimutc, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getObjectDesignator, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getOdmMessageLink, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getOriginatorAddress, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getOriginatorEmail, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getOriginatorPOC, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getOriginatorPhone, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getOriginatorPosition, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getStartTime, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getStopTime, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, getTaimutcT0, METH_NOARGS),
                DECLARE_METHOD(t_AcmMetadata, setAcmDataElements, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setCatalogName, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setEpochT0, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setInternationalDesignator, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setNextLeapEpoch, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setNextLeapTaimutc, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setObjectDesignator, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setOdmMessageLink, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setOriginatorAddress, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setOriginatorEmail, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setOriginatorPOC, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setOriginatorPhone, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setOriginatorPosition, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setStartTime, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setStopTime, METH_O),
                DECLARE_METHOD(t_AcmMetadata, setTaimutcT0, METH_O),
                DECLARE_METHOD(t_AcmMetadata, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AcmMetadata)[] = {
                { Py_tp_methods, t_AcmMetadata__methods_ },
                { Py_tp_init, (void *) t_AcmMetadata_init_ },
                { Py_tp_getset, t_AcmMetadata__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AcmMetadata)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::adm::AdmMetadata),
                NULL
              };

              DEFINE_TYPE(AcmMetadata, t_AcmMetadata, AcmMetadata);

              void t_AcmMetadata::install(PyObject *module)
              {
                installType(&PY_TYPE(AcmMetadata), &PY_TYPE_DEF(AcmMetadata), module, "AcmMetadata", 0);
              }

              void t_AcmMetadata::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadata), "class_", make_descriptor(AcmMetadata::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadata), "wrapfn_", make_descriptor(t_AcmMetadata::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadata), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AcmMetadata_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AcmMetadata::initializeClass, 1)))
                  return NULL;
                return t_AcmMetadata::wrap_Object(AcmMetadata(((t_AcmMetadata *) arg)->object.this$));
              }
              static PyObject *t_AcmMetadata_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AcmMetadata::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AcmMetadata_init_(t_AcmMetadata *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::data::DataContext a0((jobject) NULL);
                AcmMetadata object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::data::DataContext::initializeClass, &a0))
                {
                  INT_CALL(object = AcmMetadata(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AcmMetadata_getAcmDataElements(t_AcmMetadata *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getAcmDataElements());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::acm::PY_TYPE(AcmElements));
              }

              static PyObject *t_AcmMetadata_getCatalogName(t_AcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getCatalogName());
                return j2p(result);
              }

              static PyObject *t_AcmMetadata_getEpochT0(t_AcmMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getEpochT0());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AcmMetadata_getInternationalDesignator(t_AcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getInternationalDesignator());
                return j2p(result);
              }

              static PyObject *t_AcmMetadata_getNextLeapEpoch(t_AcmMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getNextLeapEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AcmMetadata_getNextLeapTaimutc(t_AcmMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getNextLeapTaimutc());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AcmMetadata_getObjectDesignator(t_AcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getObjectDesignator());
                return j2p(result);
              }

              static PyObject *t_AcmMetadata_getOdmMessageLink(t_AcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOdmMessageLink());
                return j2p(result);
              }

              static PyObject *t_AcmMetadata_getOriginatorAddress(t_AcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOriginatorAddress());
                return j2p(result);
              }

              static PyObject *t_AcmMetadata_getOriginatorEmail(t_AcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOriginatorEmail());
                return j2p(result);
              }

              static PyObject *t_AcmMetadata_getOriginatorPOC(t_AcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOriginatorPOC());
                return j2p(result);
              }

              static PyObject *t_AcmMetadata_getOriginatorPhone(t_AcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOriginatorPhone());
                return j2p(result);
              }

              static PyObject *t_AcmMetadata_getOriginatorPosition(t_AcmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOriginatorPosition());
                return j2p(result);
              }

              static PyObject *t_AcmMetadata_getStartTime(t_AcmMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AcmMetadata_getStopTime(t_AcmMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AcmMetadata_getTaimutcT0(t_AcmMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getTaimutcT0());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AcmMetadata_setAcmDataElements(t_AcmMetadata *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setAcmDataElements(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAcmDataElements", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setCatalogName(t_AcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setCatalogName(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCatalogName", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setEpochT0(t_AcmMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setEpochT0(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEpochT0", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setInternationalDesignator(t_AcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setInternationalDesignator(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInternationalDesignator", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setNextLeapEpoch(t_AcmMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setNextLeapEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNextLeapEpoch", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setNextLeapTaimutc(t_AcmMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setNextLeapTaimutc(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNextLeapTaimutc", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setObjectDesignator(t_AcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setObjectDesignator(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setObjectDesignator", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setOdmMessageLink(t_AcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setOdmMessageLink(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOdmMessageLink", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setOriginatorAddress(t_AcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setOriginatorAddress(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOriginatorAddress", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setOriginatorEmail(t_AcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setOriginatorEmail(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOriginatorEmail", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setOriginatorPOC(t_AcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setOriginatorPOC(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOriginatorPOC", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setOriginatorPhone(t_AcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setOriginatorPhone(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOriginatorPhone", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setOriginatorPosition(t_AcmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setOriginatorPosition(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOriginatorPosition", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setStartTime(t_AcmMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setStartTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setStartTime", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setStopTime(t_AcmMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setStopTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setStopTime", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_setTaimutcT0(t_AcmMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setTaimutcT0(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTaimutcT0", arg);
                return NULL;
              }

              static PyObject *t_AcmMetadata_validate(t_AcmMetadata *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AcmMetadata), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_AcmMetadata_get__acmDataElements(t_AcmMetadata *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getAcmDataElements());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_AcmMetadata_set__acmDataElements(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setAcmDataElements(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "acmDataElements", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__catalogName(t_AcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getCatalogName());
                return j2p(value);
              }
              static int t_AcmMetadata_set__catalogName(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setCatalogName(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "catalogName", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__epochT0(t_AcmMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getEpochT0());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_AcmMetadata_set__epochT0(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setEpochT0(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "epochT0", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__internationalDesignator(t_AcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getInternationalDesignator());
                return j2p(value);
              }
              static int t_AcmMetadata_set__internationalDesignator(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setInternationalDesignator(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "internationalDesignator", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__nextLeapEpoch(t_AcmMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getNextLeapEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_AcmMetadata_set__nextLeapEpoch(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setNextLeapEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nextLeapEpoch", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__nextLeapTaimutc(t_AcmMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getNextLeapTaimutc());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AcmMetadata_set__nextLeapTaimutc(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setNextLeapTaimutc(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nextLeapTaimutc", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__objectDesignator(t_AcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getObjectDesignator());
                return j2p(value);
              }
              static int t_AcmMetadata_set__objectDesignator(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setObjectDesignator(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "objectDesignator", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__odmMessageLink(t_AcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOdmMessageLink());
                return j2p(value);
              }
              static int t_AcmMetadata_set__odmMessageLink(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setOdmMessageLink(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "odmMessageLink", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__originatorAddress(t_AcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOriginatorAddress());
                return j2p(value);
              }
              static int t_AcmMetadata_set__originatorAddress(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setOriginatorAddress(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "originatorAddress", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__originatorEmail(t_AcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOriginatorEmail());
                return j2p(value);
              }
              static int t_AcmMetadata_set__originatorEmail(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setOriginatorEmail(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "originatorEmail", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__originatorPOC(t_AcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOriginatorPOC());
                return j2p(value);
              }
              static int t_AcmMetadata_set__originatorPOC(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setOriginatorPOC(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "originatorPOC", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__originatorPhone(t_AcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOriginatorPhone());
                return j2p(value);
              }
              static int t_AcmMetadata_set__originatorPhone(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setOriginatorPhone(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "originatorPhone", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__originatorPosition(t_AcmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOriginatorPosition());
                return j2p(value);
              }
              static int t_AcmMetadata_set__originatorPosition(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setOriginatorPosition(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "originatorPosition", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__startTime(t_AcmMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_AcmMetadata_set__startTime(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setStartTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "startTime", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__stopTime(t_AcmMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_AcmMetadata_set__stopTime(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setStopTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "stopTime", arg);
                return -1;
              }

              static PyObject *t_AcmMetadata_get__taimutcT0(t_AcmMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getTaimutcT0());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AcmMetadata_set__taimutcT0(t_AcmMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setTaimutcT0(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "taimutcT0", arg);
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
#include "org/hipparchus/stat/descriptive/rank/Min.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/rank/Min.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {

          ::java::lang::Class *Min::class$ = NULL;
          jmethodID *Min::mids$ = NULL;
          bool Min::live$ = false;

          jclass Min::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/rank/Min");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_aggregate_df93bc83cfd71cf0] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/rank/Min;)V");
              mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_020b1c0847b99859] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/rank/Min;");
              mids$[mid_evaluate_556bede10daac330] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_getN_492808a339bfa35f] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_dff5885c2c873297] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_17db3a65980d3441] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Min::Min() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void Min::aggregate(const Min & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_df93bc83cfd71cf0], a0.this$);
          }

          void Min::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
          }

          Min Min::copy() const
          {
            return Min(env->callObjectMethod(this$, mids$[mid_copy_020b1c0847b99859]));
          }

          jdouble Min::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_556bede10daac330], a0.this$, a1, a2);
          }

          jlong Min::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_492808a339bfa35f]);
          }

          jdouble Min::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_dff5885c2c873297]);
          }

          void Min::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_17db3a65980d3441], a0);
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
          static PyObject *t_Min_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Min_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Min_init_(t_Min *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Min_aggregate(t_Min *self, PyObject *arg);
          static PyObject *t_Min_clear(t_Min *self, PyObject *args);
          static PyObject *t_Min_copy(t_Min *self, PyObject *args);
          static PyObject *t_Min_evaluate(t_Min *self, PyObject *args);
          static PyObject *t_Min_getN(t_Min *self, PyObject *args);
          static PyObject *t_Min_getResult(t_Min *self, PyObject *args);
          static PyObject *t_Min_increment(t_Min *self, PyObject *args);
          static PyObject *t_Min_get__n(t_Min *self, void *data);
          static PyObject *t_Min_get__result(t_Min *self, void *data);
          static PyGetSetDef t_Min__fields_[] = {
            DECLARE_GET_FIELD(t_Min, n),
            DECLARE_GET_FIELD(t_Min, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Min__methods_[] = {
            DECLARE_METHOD(t_Min, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Min, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Min, aggregate, METH_O),
            DECLARE_METHOD(t_Min, clear, METH_VARARGS),
            DECLARE_METHOD(t_Min, copy, METH_VARARGS),
            DECLARE_METHOD(t_Min, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Min, getN, METH_VARARGS),
            DECLARE_METHOD(t_Min, getResult, METH_VARARGS),
            DECLARE_METHOD(t_Min, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Min)[] = {
            { Py_tp_methods, t_Min__methods_ },
            { Py_tp_init, (void *) t_Min_init_ },
            { Py_tp_getset, t_Min__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Min)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(Min, t_Min, Min);

          void t_Min::install(PyObject *module)
          {
            installType(&PY_TYPE(Min), &PY_TYPE_DEF(Min), module, "Min", 0);
          }

          void t_Min::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Min), "class_", make_descriptor(Min::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Min), "wrapfn_", make_descriptor(t_Min::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Min), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Min_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Min::initializeClass, 1)))
              return NULL;
            return t_Min::wrap_Object(Min(((t_Min *) arg)->object.this$));
          }
          static PyObject *t_Min_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Min::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Min_init_(t_Min *self, PyObject *args, PyObject *kwds)
          {
            Min object((jobject) NULL);

            INT_CALL(object = Min());
            self->object = object;

            return 0;
          }

          static PyObject *t_Min_aggregate(t_Min *self, PyObject *arg)
          {
            Min a0((jobject) NULL);

            if (!parseArg(arg, "k", Min::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_Min_clear(t_Min *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Min), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_Min_copy(t_Min *self, PyObject *args)
          {
            Min result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_Min::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Min), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_Min_evaluate(t_Min *self, PyObject *args)
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

            return callSuper(PY_TYPE(Min), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_Min_getN(t_Min *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(Min), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_Min_getResult(t_Min *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(Min), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_Min_increment(t_Min *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Min), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_Min_get__n(t_Min *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_Min_get__result(t_Min *self, void *data)
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
#include "org/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GLONASSOrbitalElements::class$ = NULL;
            jmethodID *GLONASSOrbitalElements::mids$ = NULL;
            bool GLONASSOrbitalElements::live$ = false;

            jclass GLONASSOrbitalElements::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getDeltaI_dff5885c2c873297] = env->getMethodID(cls, "getDeltaI", "()D");
                mids$[mid_getDeltaT_dff5885c2c873297] = env->getMethodID(cls, "getDeltaT", "()D");
                mids$[mid_getDeltaTDot_dff5885c2c873297] = env->getMethodID(cls, "getDeltaTDot", "()D");
                mids$[mid_getE_dff5885c2c873297] = env->getMethodID(cls, "getE", "()D");
                mids$[mid_getGammaN_dff5885c2c873297] = env->getMethodID(cls, "getGammaN", "()D");
                mids$[mid_getIOD_570ce0828f81a2c1] = env->getMethodID(cls, "getIOD", "()I");
                mids$[mid_getLambda_dff5885c2c873297] = env->getMethodID(cls, "getLambda", "()D");
                mids$[mid_getN4_570ce0828f81a2c1] = env->getMethodID(cls, "getN4", "()I");
                mids$[mid_getNa_570ce0828f81a2c1] = env->getMethodID(cls, "getNa", "()I");
                mids$[mid_getPa_dff5885c2c873297] = env->getMethodID(cls, "getPa", "()D");
                mids$[mid_getTN_dff5885c2c873297] = env->getMethodID(cls, "getTN", "()D");
                mids$[mid_getTime_dff5885c2c873297] = env->getMethodID(cls, "getTime", "()D");
                mids$[mid_getX_dff5885c2c873297] = env->getMethodID(cls, "getX", "()D");
                mids$[mid_getXDot_dff5885c2c873297] = env->getMethodID(cls, "getXDot", "()D");
                mids$[mid_getXDotDot_dff5885c2c873297] = env->getMethodID(cls, "getXDotDot", "()D");
                mids$[mid_getY_dff5885c2c873297] = env->getMethodID(cls, "getY", "()D");
                mids$[mid_getYDot_dff5885c2c873297] = env->getMethodID(cls, "getYDot", "()D");
                mids$[mid_getYDotDot_dff5885c2c873297] = env->getMethodID(cls, "getYDotDot", "()D");
                mids$[mid_getZ_dff5885c2c873297] = env->getMethodID(cls, "getZ", "()D");
                mids$[mid_getZDot_dff5885c2c873297] = env->getMethodID(cls, "getZDot", "()D");
                mids$[mid_getZDotDot_dff5885c2c873297] = env->getMethodID(cls, "getZDotDot", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble GLONASSOrbitalElements::getDeltaI() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaI_dff5885c2c873297]);
            }

            jdouble GLONASSOrbitalElements::getDeltaT() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaT_dff5885c2c873297]);
            }

            jdouble GLONASSOrbitalElements::getDeltaTDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaTDot_dff5885c2c873297]);
            }

            jdouble GLONASSOrbitalElements::getE() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getE_dff5885c2c873297]);
            }

            jdouble GLONASSOrbitalElements::getGammaN() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGammaN_dff5885c2c873297]);
            }

            jint GLONASSOrbitalElements::getIOD() const
            {
              return env->callIntMethod(this$, mids$[mid_getIOD_570ce0828f81a2c1]);
            }

            jdouble GLONASSOrbitalElements::getLambda() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getLambda_dff5885c2c873297]);
            }

            jint GLONASSOrbitalElements::getN4() const
            {
              return env->callIntMethod(this$, mids$[mid_getN4_570ce0828f81a2c1]);
            }

            jint GLONASSOrbitalElements::getNa() const
            {
              return env->callIntMethod(this$, mids$[mid_getNa_570ce0828f81a2c1]);
            }

            jdouble GLONASSOrbitalElements::getPa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getPa_dff5885c2c873297]);
            }

            jdouble GLONASSOrbitalElements::getTN() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTN_dff5885c2c873297]);
            }

            jdouble GLONASSOrbitalElements::getTime() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTime_dff5885c2c873297]);
            }

            jdouble GLONASSOrbitalElements::getX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getX_dff5885c2c873297]);
            }

            jdouble GLONASSOrbitalElements::getXDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXDot_dff5885c2c873297]);
            }

            jdouble GLONASSOrbitalElements::getXDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXDotDot_dff5885c2c873297]);
            }

            jdouble GLONASSOrbitalElements::getY() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getY_dff5885c2c873297]);
            }

            jdouble GLONASSOrbitalElements::getYDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getYDot_dff5885c2c873297]);
            }

            jdouble GLONASSOrbitalElements::getYDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getYDotDot_dff5885c2c873297]);
            }

            jdouble GLONASSOrbitalElements::getZ() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZ_dff5885c2c873297]);
            }

            jdouble GLONASSOrbitalElements::getZDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZDot_dff5885c2c873297]);
            }

            jdouble GLONASSOrbitalElements::getZDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZDotDot_dff5885c2c873297]);
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
            static PyObject *t_GLONASSOrbitalElements_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GLONASSOrbitalElements_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GLONASSOrbitalElements_getDeltaI(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getDeltaT(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getDeltaTDot(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getE(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getGammaN(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getIOD(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getLambda(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getN4(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getNa(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getPa(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getTN(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getTime(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getX(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getXDot(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getXDotDot(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getY(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getYDot(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getYDotDot(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getZ(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getZDot(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getZDotDot(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_get__deltaI(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__deltaT(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__deltaTDot(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__e(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__gammaN(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__iOD(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__lambda(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__n4(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__na(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__pa(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__tN(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__time(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__x(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__xDot(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__xDotDot(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__y(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__yDot(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__yDotDot(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__z(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__zDot(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__zDotDot(t_GLONASSOrbitalElements *self, void *data);
            static PyGetSetDef t_GLONASSOrbitalElements__fields_[] = {
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, deltaI),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, deltaT),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, deltaTDot),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, e),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, gammaN),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, iOD),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, lambda),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, n4),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, na),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, pa),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, tN),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, time),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, x),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, xDot),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, xDotDot),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, y),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, yDot),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, yDotDot),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, z),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, zDot),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, zDotDot),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GLONASSOrbitalElements__methods_[] = {
              DECLARE_METHOD(t_GLONASSOrbitalElements, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getDeltaI, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getDeltaT, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getDeltaTDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getE, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getGammaN, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getIOD, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getLambda, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getN4, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getNa, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getPa, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getTN, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getTime, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getX, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getXDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getXDotDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getY, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getYDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getYDotDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getZ, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getZDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getZDotDot, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GLONASSOrbitalElements)[] = {
              { Py_tp_methods, t_GLONASSOrbitalElements__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_GLONASSOrbitalElements__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GLONASSOrbitalElements)[] = {
              &PY_TYPE_DEF(::org::orekit::time::TimeStamped),
              NULL
            };

            DEFINE_TYPE(GLONASSOrbitalElements, t_GLONASSOrbitalElements, GLONASSOrbitalElements);

            void t_GLONASSOrbitalElements::install(PyObject *module)
            {
              installType(&PY_TYPE(GLONASSOrbitalElements), &PY_TYPE_DEF(GLONASSOrbitalElements), module, "GLONASSOrbitalElements", 0);
            }

            void t_GLONASSOrbitalElements::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSOrbitalElements), "class_", make_descriptor(GLONASSOrbitalElements::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSOrbitalElements), "wrapfn_", make_descriptor(t_GLONASSOrbitalElements::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSOrbitalElements), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GLONASSOrbitalElements_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GLONASSOrbitalElements::initializeClass, 1)))
                return NULL;
              return t_GLONASSOrbitalElements::wrap_Object(GLONASSOrbitalElements(((t_GLONASSOrbitalElements *) arg)->object.this$));
            }
            static PyObject *t_GLONASSOrbitalElements_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GLONASSOrbitalElements::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_GLONASSOrbitalElements_getDeltaI(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaI());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getDeltaT(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaT());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getDeltaTDot(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaTDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getE(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getE());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getGammaN(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getGammaN());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getIOD(t_GLONASSOrbitalElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIOD());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getLambda(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getLambda());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getN4(t_GLONASSOrbitalElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getN4());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getNa(t_GLONASSOrbitalElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getNa());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getPa(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getPa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getTN(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTN());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getTime(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTime());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getX(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getXDot(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getXDotDot(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getY(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getY());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getYDot(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getYDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getYDotDot(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getYDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getZ(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZ());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getZDot(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getZDotDot(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_get__deltaI(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaI());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__deltaT(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaT());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__deltaTDot(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaTDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__e(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getE());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__gammaN(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getGammaN());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__iOD(t_GLONASSOrbitalElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIOD());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__lambda(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getLambda());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__n4(t_GLONASSOrbitalElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getN4());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__na(t_GLONASSOrbitalElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getNa());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__pa(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getPa());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__tN(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTN());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__time(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTime());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__x(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getX());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__xDot(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__xDotDot(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXDotDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__y(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getY());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__yDot(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getYDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__yDotDot(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getYDotDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__z(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZ());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__zDot(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__zDotDot(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZDotDot());
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
#include "org/orekit/time/PythonParser.h"
#include "java/util/List.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/OffsetModel.h"
#include "java/lang/Class.h"
#include "org/orekit/time/UTCTAIOffsetsLoader$Parser.h"
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
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_parse_19eef1cf230063a6] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/List;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonParser::PythonParser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonParser::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonParser::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonParser::pythonExtension(jlong a0) const
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonParser::mids$[PythonParser::mid_pythonExtension_492808a339bfa35f]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonParser::mids$[PythonParser::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonParser::mids$[PythonParser::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
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
#include "java/io/Reader.h"
#include "java/io/IOException.h"
#include "java/lang/Readable.h"
#include "java/io/Closeable.h"
#include "java/lang/Class.h"
#include "java/io/Writer.h"
#include "java/io/Reader.h"
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
        mids$[mid_close_0fa09c18fee449d5] = env->getMethodID(cls, "close", "()V");
        mids$[mid_mark_99803b0791f320ff] = env->getMethodID(cls, "mark", "(I)V");
        mids$[mid_markSupported_b108b35ef48e27bd] = env->getMethodID(cls, "markSupported", "()Z");
        mids$[mid_nullReader_26c6a3f16521a493] = env->getStaticMethodID(cls, "nullReader", "()Ljava/io/Reader;");
        mids$[mid_read_570ce0828f81a2c1] = env->getMethodID(cls, "read", "()I");
        mids$[mid_read_881698425abcbe49] = env->getMethodID(cls, "read", "([C)I");
        mids$[mid_read_e1525dbb996fb0b1] = env->getMethodID(cls, "read", "([CII)I");
        mids$[mid_ready_b108b35ef48e27bd] = env->getMethodID(cls, "ready", "()Z");
        mids$[mid_reset_0fa09c18fee449d5] = env->getMethodID(cls, "reset", "()V");
        mids$[mid_skip_02b241598e254a3f] = env->getMethodID(cls, "skip", "(J)J");
        mids$[mid_transferTo_a3aea31848e09c40] = env->getMethodID(cls, "transferTo", "(Ljava/io/Writer;)J");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Reader::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_0fa09c18fee449d5]);
    }

    void Reader::mark(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_mark_99803b0791f320ff], a0);
    }

    jboolean Reader::markSupported() const
    {
      return env->callBooleanMethod(this$, mids$[mid_markSupported_b108b35ef48e27bd]);
    }

    Reader Reader::nullReader()
    {
      jclass cls = env->getClass(initializeClass);
      return Reader(env->callStaticObjectMethod(cls, mids$[mid_nullReader_26c6a3f16521a493]));
    }

    jint Reader::read() const
    {
      return env->callIntMethod(this$, mids$[mid_read_570ce0828f81a2c1]);
    }

    jint Reader::read(const JArray< jchar > & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_read_881698425abcbe49], a0.this$);
    }

    jint Reader::read(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      return env->callIntMethod(this$, mids$[mid_read_e1525dbb996fb0b1], a0.this$, a1, a2);
    }

    jboolean Reader::ready() const
    {
      return env->callBooleanMethod(this$, mids$[mid_ready_b108b35ef48e27bd]);
    }

    void Reader::reset() const
    {
      env->callVoidMethod(this$, mids$[mid_reset_0fa09c18fee449d5]);
    }

    jlong Reader::skip(jlong a0) const
    {
      return env->callLongMethod(this$, mids$[mid_skip_02b241598e254a3f], a0);
    }

    jlong Reader::transferTo(const ::java::io::Writer & a0) const
    {
      return env->callLongMethod(this$, mids$[mid_transferTo_a3aea31848e09c40], a0.this$);
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
#include "org/orekit/propagation/FieldAdditionalStateProvider.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *FieldAdditionalStateProvider::class$ = NULL;
      jmethodID *FieldAdditionalStateProvider::mids$ = NULL;
      bool FieldAdditionalStateProvider::live$ = false;

      jclass FieldAdditionalStateProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/FieldAdditionalStateProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getAdditionalState_567ea49d447f98c8] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/FieldSpacecraftState;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_init_8e8de2be1664674a] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
          mids$[mid_yields_1b0abd4f90ebd0eb] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldAdditionalStateProvider::getAdditionalState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_567ea49d447f98c8], a0.this$));
      }

      ::java::lang::String FieldAdditionalStateProvider::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
      }

      void FieldAdditionalStateProvider::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_init_8e8de2be1664674a], a0.this$, a1.this$);
      }

      jboolean FieldAdditionalStateProvider::yields(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_yields_1b0abd4f90ebd0eb], a0.this$);
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
      static PyObject *t_FieldAdditionalStateProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAdditionalStateProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAdditionalStateProvider_of_(t_FieldAdditionalStateProvider *self, PyObject *args);
      static PyObject *t_FieldAdditionalStateProvider_getAdditionalState(t_FieldAdditionalStateProvider *self, PyObject *arg);
      static PyObject *t_FieldAdditionalStateProvider_getName(t_FieldAdditionalStateProvider *self);
      static PyObject *t_FieldAdditionalStateProvider_init(t_FieldAdditionalStateProvider *self, PyObject *args);
      static PyObject *t_FieldAdditionalStateProvider_yields(t_FieldAdditionalStateProvider *self, PyObject *arg);
      static PyObject *t_FieldAdditionalStateProvider_get__name(t_FieldAdditionalStateProvider *self, void *data);
      static PyObject *t_FieldAdditionalStateProvider_get__parameters_(t_FieldAdditionalStateProvider *self, void *data);
      static PyGetSetDef t_FieldAdditionalStateProvider__fields_[] = {
        DECLARE_GET_FIELD(t_FieldAdditionalStateProvider, name),
        DECLARE_GET_FIELD(t_FieldAdditionalStateProvider, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldAdditionalStateProvider__methods_[] = {
        DECLARE_METHOD(t_FieldAdditionalStateProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAdditionalStateProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAdditionalStateProvider, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldAdditionalStateProvider, getAdditionalState, METH_O),
        DECLARE_METHOD(t_FieldAdditionalStateProvider, getName, METH_NOARGS),
        DECLARE_METHOD(t_FieldAdditionalStateProvider, init, METH_VARARGS),
        DECLARE_METHOD(t_FieldAdditionalStateProvider, yields, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldAdditionalStateProvider)[] = {
        { Py_tp_methods, t_FieldAdditionalStateProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldAdditionalStateProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldAdditionalStateProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldAdditionalStateProvider, t_FieldAdditionalStateProvider, FieldAdditionalStateProvider);
      PyObject *t_FieldAdditionalStateProvider::wrap_Object(const FieldAdditionalStateProvider& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAdditionalStateProvider::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAdditionalStateProvider *self = (t_FieldAdditionalStateProvider *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldAdditionalStateProvider::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAdditionalStateProvider::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAdditionalStateProvider *self = (t_FieldAdditionalStateProvider *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldAdditionalStateProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldAdditionalStateProvider), &PY_TYPE_DEF(FieldAdditionalStateProvider), module, "FieldAdditionalStateProvider", 0);
      }

      void t_FieldAdditionalStateProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdditionalStateProvider), "class_", make_descriptor(FieldAdditionalStateProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdditionalStateProvider), "wrapfn_", make_descriptor(t_FieldAdditionalStateProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdditionalStateProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldAdditionalStateProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldAdditionalStateProvider::initializeClass, 1)))
          return NULL;
        return t_FieldAdditionalStateProvider::wrap_Object(FieldAdditionalStateProvider(((t_FieldAdditionalStateProvider *) arg)->object.this$));
      }
      static PyObject *t_FieldAdditionalStateProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldAdditionalStateProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldAdditionalStateProvider_of_(t_FieldAdditionalStateProvider *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldAdditionalStateProvider_getAdditionalState(t_FieldAdditionalStateProvider *self, PyObject *arg)
      {
        ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
        {
          OBJ_CALL(result = self->object.getAdditionalState(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getAdditionalState", arg);
        return NULL;
      }

      static PyObject *t_FieldAdditionalStateProvider_getName(t_FieldAdditionalStateProvider *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_FieldAdditionalStateProvider_init(t_FieldAdditionalStateProvider *self, PyObject *args)
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

      static PyObject *t_FieldAdditionalStateProvider_yields(t_FieldAdditionalStateProvider *self, PyObject *arg)
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
      static PyObject *t_FieldAdditionalStateProvider_get__parameters_(t_FieldAdditionalStateProvider *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldAdditionalStateProvider_get__name(t_FieldAdditionalStateProvider *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/DatesSelector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *DatesSelector::class$ = NULL;
      jmethodID *DatesSelector::mids$ = NULL;
      bool DatesSelector::live$ = false;

      jclass DatesSelector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/DatesSelector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_selectDates_8060cef9318d72e3] = env->getMethodID(cls, "selectDates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::List DatesSelector::selectDates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_selectDates_8060cef9318d72e3], a0.this$, a1.this$));
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
      static PyObject *t_DatesSelector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DatesSelector_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DatesSelector_selectDates(t_DatesSelector *self, PyObject *args);

      static PyMethodDef t_DatesSelector__methods_[] = {
        DECLARE_METHOD(t_DatesSelector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DatesSelector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DatesSelector, selectDates, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DatesSelector)[] = {
        { Py_tp_methods, t_DatesSelector__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DatesSelector)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DatesSelector, t_DatesSelector, DatesSelector);

      void t_DatesSelector::install(PyObject *module)
      {
        installType(&PY_TYPE(DatesSelector), &PY_TYPE_DEF(DatesSelector), module, "DatesSelector", 0);
      }

      void t_DatesSelector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DatesSelector), "class_", make_descriptor(DatesSelector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DatesSelector), "wrapfn_", make_descriptor(t_DatesSelector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DatesSelector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DatesSelector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DatesSelector::initializeClass, 1)))
          return NULL;
        return t_DatesSelector::wrap_Object(DatesSelector(((t_DatesSelector *) arg)->object.this$));
      }
      static PyObject *t_DatesSelector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DatesSelector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DatesSelector_selectDates(t_DatesSelector *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.selectDates(a0, a1));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(AbsoluteDate));
        }

        PyErr_SetArgsError((PyObject *) self, "selectDates", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/BDTScale.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/DateComponents.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *BDTScale::class$ = NULL;
      jmethodID *BDTScale::mids$ = NULL;
      bool BDTScale::live$ = false;

      jclass BDTScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/BDTScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_bf1d7732f1acb697] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_2a5f05be83ff251d] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_56358b00ba005b52] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String BDTScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
      }

      jdouble BDTScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_bf1d7732f1acb697], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement BDTScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_2a5f05be83ff251d], a0.this$));
      }

      jdouble BDTScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_56358b00ba005b52], a0.this$, a1.this$);
      }

      ::java::lang::String BDTScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
      static PyObject *t_BDTScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BDTScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BDTScale_getName(t_BDTScale *self);
      static PyObject *t_BDTScale_offsetFromTAI(t_BDTScale *self, PyObject *args);
      static PyObject *t_BDTScale_offsetToTAI(t_BDTScale *self, PyObject *args);
      static PyObject *t_BDTScale_toString(t_BDTScale *self, PyObject *args);
      static PyObject *t_BDTScale_get__name(t_BDTScale *self, void *data);
      static PyGetSetDef t_BDTScale__fields_[] = {
        DECLARE_GET_FIELD(t_BDTScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BDTScale__methods_[] = {
        DECLARE_METHOD(t_BDTScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BDTScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BDTScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_BDTScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_BDTScale, offsetToTAI, METH_VARARGS),
        DECLARE_METHOD(t_BDTScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BDTScale)[] = {
        { Py_tp_methods, t_BDTScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_BDTScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BDTScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BDTScale, t_BDTScale, BDTScale);

      void t_BDTScale::install(PyObject *module)
      {
        installType(&PY_TYPE(BDTScale), &PY_TYPE_DEF(BDTScale), module, "BDTScale", 0);
      }

      void t_BDTScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BDTScale), "class_", make_descriptor(BDTScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BDTScale), "wrapfn_", make_descriptor(t_BDTScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BDTScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BDTScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BDTScale::initializeClass, 1)))
          return NULL;
        return t_BDTScale::wrap_Object(BDTScale(((t_BDTScale *) arg)->object.this$));
      }
      static PyObject *t_BDTScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BDTScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BDTScale_getName(t_BDTScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_BDTScale_offsetFromTAI(t_BDTScale *self, PyObject *args)
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

      static PyObject *t_BDTScale_offsetToTAI(t_BDTScale *self, PyObject *args)
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

      static PyObject *t_BDTScale_toString(t_BDTScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(BDTScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_BDTScale_get__name(t_BDTScale *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/FDSFactory.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/FDSFactory$DerivativeField.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/DSCompiler.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FDSFactory::class$ = NULL;
        jmethodID *FDSFactory::mids$ = NULL;
        bool FDSFactory::live$ = false;

        jclass FDSFactory::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FDSFactory");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7dbd657fb2d34563] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;II)V");
            mids$[mid_build_418b3af1711b43e6] = env->getMethodID(cls, "build", "([D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_build_44d0136f1427ef1d] = env->getMethodID(cls, "build", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_constant_629ba89773b89477] = env->getMethodID(cls, "constant", "(D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_constant_dc82eda6d2eed253] = env->getMethodID(cls, "constant", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_getCompiler_ae6f9f9cc48aac48] = env->getMethodID(cls, "getCompiler", "()Lorg/hipparchus/analysis/differentiation/DSCompiler;");
            mids$[mid_getDerivativeField_b3afcca7dbbddb7f] = env->getMethodID(cls, "getDerivativeField", "()Lorg/hipparchus/analysis/differentiation/FDSFactory$DerivativeField;");
            mids$[mid_getValueField_5b28be2d3632a5dc] = env->getMethodID(cls, "getValueField", "()Lorg/hipparchus/Field;");
            mids$[mid_variable_3f218e91648e4931] = env->getMethodID(cls, "variable", "(ID)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_variable_695a5b8d4ec495cc] = env->getMethodID(cls, "variable", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FDSFactory::FDSFactory(const ::org::hipparchus::Field & a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7dbd657fb2d34563, a0.this$, a1, a2)) {}

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FDSFactory::build(const JArray< jdouble > & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_build_418b3af1711b43e6], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FDSFactory::build(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_build_44d0136f1427ef1d], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FDSFactory::constant(jdouble a0) const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_constant_629ba89773b89477], a0));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FDSFactory::constant(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_constant_dc82eda6d2eed253], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::DSCompiler FDSFactory::getCompiler() const
        {
          return ::org::hipparchus::analysis::differentiation::DSCompiler(env->callObjectMethod(this$, mids$[mid_getCompiler_ae6f9f9cc48aac48]));
        }

        ::org::hipparchus::analysis::differentiation::FDSFactory$DerivativeField FDSFactory::getDerivativeField() const
        {
          return ::org::hipparchus::analysis::differentiation::FDSFactory$DerivativeField(env->callObjectMethod(this$, mids$[mid_getDerivativeField_b3afcca7dbbddb7f]));
        }

        ::org::hipparchus::Field FDSFactory::getValueField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getValueField_5b28be2d3632a5dc]));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FDSFactory::variable(jint a0, jdouble a1) const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_variable_3f218e91648e4931], a0, a1));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FDSFactory::variable(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_variable_695a5b8d4ec495cc], a0, a1.this$));
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
        static PyObject *t_FDSFactory_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FDSFactory_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FDSFactory_of_(t_FDSFactory *self, PyObject *args);
        static int t_FDSFactory_init_(t_FDSFactory *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FDSFactory_build(t_FDSFactory *self, PyObject *args);
        static PyObject *t_FDSFactory_constant(t_FDSFactory *self, PyObject *args);
        static PyObject *t_FDSFactory_getCompiler(t_FDSFactory *self);
        static PyObject *t_FDSFactory_getDerivativeField(t_FDSFactory *self);
        static PyObject *t_FDSFactory_getValueField(t_FDSFactory *self);
        static PyObject *t_FDSFactory_variable(t_FDSFactory *self, PyObject *args);
        static PyObject *t_FDSFactory_get__compiler(t_FDSFactory *self, void *data);
        static PyObject *t_FDSFactory_get__derivativeField(t_FDSFactory *self, void *data);
        static PyObject *t_FDSFactory_get__valueField(t_FDSFactory *self, void *data);
        static PyObject *t_FDSFactory_get__parameters_(t_FDSFactory *self, void *data);
        static PyGetSetDef t_FDSFactory__fields_[] = {
          DECLARE_GET_FIELD(t_FDSFactory, compiler),
          DECLARE_GET_FIELD(t_FDSFactory, derivativeField),
          DECLARE_GET_FIELD(t_FDSFactory, valueField),
          DECLARE_GET_FIELD(t_FDSFactory, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FDSFactory__methods_[] = {
          DECLARE_METHOD(t_FDSFactory, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FDSFactory, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FDSFactory, of_, METH_VARARGS),
          DECLARE_METHOD(t_FDSFactory, build, METH_VARARGS),
          DECLARE_METHOD(t_FDSFactory, constant, METH_VARARGS),
          DECLARE_METHOD(t_FDSFactory, getCompiler, METH_NOARGS),
          DECLARE_METHOD(t_FDSFactory, getDerivativeField, METH_NOARGS),
          DECLARE_METHOD(t_FDSFactory, getValueField, METH_NOARGS),
          DECLARE_METHOD(t_FDSFactory, variable, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FDSFactory)[] = {
          { Py_tp_methods, t_FDSFactory__methods_ },
          { Py_tp_init, (void *) t_FDSFactory_init_ },
          { Py_tp_getset, t_FDSFactory__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FDSFactory)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FDSFactory, t_FDSFactory, FDSFactory);
        PyObject *t_FDSFactory::wrap_Object(const FDSFactory& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FDSFactory::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FDSFactory *self = (t_FDSFactory *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FDSFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FDSFactory::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FDSFactory *self = (t_FDSFactory *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FDSFactory::install(PyObject *module)
        {
          installType(&PY_TYPE(FDSFactory), &PY_TYPE_DEF(FDSFactory), module, "FDSFactory", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDSFactory), "DerivativeField", make_descriptor(&PY_TYPE_DEF(FDSFactory$DerivativeField)));
        }

        void t_FDSFactory::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDSFactory), "class_", make_descriptor(FDSFactory::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDSFactory), "wrapfn_", make_descriptor(t_FDSFactory::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDSFactory), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FDSFactory_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FDSFactory::initializeClass, 1)))
            return NULL;
          return t_FDSFactory::wrap_Object(FDSFactory(((t_FDSFactory *) arg)->object.this$));
        }
        static PyObject *t_FDSFactory_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FDSFactory::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FDSFactory_of_(t_FDSFactory *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FDSFactory_init_(t_FDSFactory *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          jint a2;
          FDSFactory object((jobject) NULL);

          if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
          {
            INT_CALL(object = FDSFactory(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FDSFactory_build(t_FDSFactory *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);
              ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                OBJ_CALL(result = self->object.build(a0));
                return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.build(a0));
                return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "build", args);
          return NULL;
        }

        static PyObject *t_FDSFactory_constant(t_FDSFactory *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.constant(a0));
                return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.constant(a0));
                return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "constant", args);
          return NULL;
        }

        static PyObject *t_FDSFactory_getCompiler(t_FDSFactory *self)
        {
          ::org::hipparchus::analysis::differentiation::DSCompiler result((jobject) NULL);
          OBJ_CALL(result = self->object.getCompiler());
          return ::org::hipparchus::analysis::differentiation::t_DSCompiler::wrap_Object(result);
        }

        static PyObject *t_FDSFactory_getDerivativeField(t_FDSFactory *self)
        {
          ::org::hipparchus::analysis::differentiation::FDSFactory$DerivativeField result((jobject) NULL);
          OBJ_CALL(result = self->object.getDerivativeField());
          return ::org::hipparchus::analysis::differentiation::t_FDSFactory$DerivativeField::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FDSFactory_getValueField(t_FDSFactory *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getValueField());
          return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FDSFactory_variable(t_FDSFactory *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jint a0;
              jdouble a1;
              ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "ID", &a0, &a1))
              {
                OBJ_CALL(result = self->object.variable(a0, a1));
                return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.variable(a0, a1));
                return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "variable", args);
          return NULL;
        }
        static PyObject *t_FDSFactory_get__parameters_(t_FDSFactory *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FDSFactory_get__compiler(t_FDSFactory *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::DSCompiler value((jobject) NULL);
          OBJ_CALL(value = self->object.getCompiler());
          return ::org::hipparchus::analysis::differentiation::t_DSCompiler::wrap_Object(value);
        }

        static PyObject *t_FDSFactory_get__derivativeField(t_FDSFactory *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FDSFactory$DerivativeField value((jobject) NULL);
          OBJ_CALL(value = self->object.getDerivativeField());
          return ::org::hipparchus::analysis::differentiation::t_FDSFactory$DerivativeField::wrap_Object(value);
        }

        static PyObject *t_FDSFactory_get__valueField(t_FDSFactory *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getValueField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/MidpointFieldIntegratorBuilder.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *MidpointFieldIntegratorBuilder::class$ = NULL;
        jmethodID *MidpointFieldIntegratorBuilder::mids$ = NULL;
        bool MidpointFieldIntegratorBuilder::live$ = false;

        jclass MidpointFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/MidpointFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_072c8635f2164db9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_buildIntegrator_048f7039a7622a2b] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MidpointFieldIntegratorBuilder::MidpointFieldIntegratorBuilder(jdouble a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        MidpointFieldIntegratorBuilder::MidpointFieldIntegratorBuilder(const ::org::hipparchus::CalculusFieldElement & a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_072c8635f2164db9, a0.this$)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator MidpointFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_048f7039a7622a2b], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_MidpointFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MidpointFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MidpointFieldIntegratorBuilder_of_(t_MidpointFieldIntegratorBuilder *self, PyObject *args);
        static int t_MidpointFieldIntegratorBuilder_init_(t_MidpointFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MidpointFieldIntegratorBuilder_buildIntegrator(t_MidpointFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_MidpointFieldIntegratorBuilder_get__parameters_(t_MidpointFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_MidpointFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_MidpointFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MidpointFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_MidpointFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MidpointFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MidpointFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_MidpointFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MidpointFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_MidpointFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_MidpointFieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_MidpointFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MidpointFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(MidpointFieldIntegratorBuilder, t_MidpointFieldIntegratorBuilder, MidpointFieldIntegratorBuilder);
        PyObject *t_MidpointFieldIntegratorBuilder::wrap_Object(const MidpointFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MidpointFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MidpointFieldIntegratorBuilder *self = (t_MidpointFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_MidpointFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MidpointFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MidpointFieldIntegratorBuilder *self = (t_MidpointFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_MidpointFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(MidpointFieldIntegratorBuilder), &PY_TYPE_DEF(MidpointFieldIntegratorBuilder), module, "MidpointFieldIntegratorBuilder", 0);
        }

        void t_MidpointFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointFieldIntegratorBuilder), "class_", make_descriptor(MidpointFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_MidpointFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MidpointFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MidpointFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_MidpointFieldIntegratorBuilder::wrap_Object(MidpointFieldIntegratorBuilder(((t_MidpointFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_MidpointFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MidpointFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MidpointFieldIntegratorBuilder_of_(t_MidpointFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_MidpointFieldIntegratorBuilder_init_(t_MidpointFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              MidpointFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = MidpointFieldIntegratorBuilder(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              MidpointFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = MidpointFieldIntegratorBuilder(a0));
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

        static PyObject *t_MidpointFieldIntegratorBuilder_buildIntegrator(t_MidpointFieldIntegratorBuilder *self, PyObject *args)
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

          return callSuper(PY_TYPE(MidpointFieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_MidpointFieldIntegratorBuilder_get__parameters_(t_MidpointFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/PythonDiscreteTroposphericModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "java/lang/Throwable.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *PythonDiscreteTroposphericModel::class$ = NULL;
          jmethodID *PythonDiscreteTroposphericModel::mids$ = NULL;
          bool PythonDiscreteTroposphericModel::live$ = false;

          jclass PythonDiscreteTroposphericModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/PythonDiscreteTroposphericModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getParameters_60c7040667a7dc5c] = env->getMethodID(cls, "getParameters", "()[D");
              mids$[mid_getParameters_f040a403cffae196] = env->getMethodID(cls, "getParameters", "(Lorg/hipparchus/Field;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pathDelay_fe3b5c46874ab115] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_pathDelay_ff7a895eb6f0af2e] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonDiscreteTroposphericModel::PythonDiscreteTroposphericModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void PythonDiscreteTroposphericModel::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonDiscreteTroposphericModel::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonDiscreteTroposphericModel::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
          static PyObject *t_PythonDiscreteTroposphericModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonDiscreteTroposphericModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonDiscreteTroposphericModel_init_(t_PythonDiscreteTroposphericModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonDiscreteTroposphericModel_finalize(t_PythonDiscreteTroposphericModel *self);
          static PyObject *t_PythonDiscreteTroposphericModel_pythonExtension(t_PythonDiscreteTroposphericModel *self, PyObject *args);
          static jobject JNICALL t_PythonDiscreteTroposphericModel_getParameters0(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonDiscreteTroposphericModel_getParameters1(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonDiscreteTroposphericModel_getParametersDrivers2(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonDiscreteTroposphericModel_pathDelay3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
          static jdouble JNICALL t_PythonDiscreteTroposphericModel_pathDelay4(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1, jobject a2, jobject a3);
          static void JNICALL t_PythonDiscreteTroposphericModel_pythonDecRef5(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonDiscreteTroposphericModel_get__self(t_PythonDiscreteTroposphericModel *self, void *data);
          static PyGetSetDef t_PythonDiscreteTroposphericModel__fields_[] = {
            DECLARE_GET_FIELD(t_PythonDiscreteTroposphericModel, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonDiscreteTroposphericModel__methods_[] = {
            DECLARE_METHOD(t_PythonDiscreteTroposphericModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonDiscreteTroposphericModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonDiscreteTroposphericModel, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonDiscreteTroposphericModel, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonDiscreteTroposphericModel)[] = {
            { Py_tp_methods, t_PythonDiscreteTroposphericModel__methods_ },
            { Py_tp_init, (void *) t_PythonDiscreteTroposphericModel_init_ },
            { Py_tp_getset, t_PythonDiscreteTroposphericModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonDiscreteTroposphericModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonDiscreteTroposphericModel, t_PythonDiscreteTroposphericModel, PythonDiscreteTroposphericModel);

          void t_PythonDiscreteTroposphericModel::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonDiscreteTroposphericModel), &PY_TYPE_DEF(PythonDiscreteTroposphericModel), module, "PythonDiscreteTroposphericModel", 1);
          }

          void t_PythonDiscreteTroposphericModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDiscreteTroposphericModel), "class_", make_descriptor(PythonDiscreteTroposphericModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDiscreteTroposphericModel), "wrapfn_", make_descriptor(t_PythonDiscreteTroposphericModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDiscreteTroposphericModel), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonDiscreteTroposphericModel::initializeClass);
            JNINativeMethod methods[] = {
              { "getParameters", "()[D", (void *) t_PythonDiscreteTroposphericModel_getParameters0 },
              { "getParameters", "(Lorg/hipparchus/Field;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonDiscreteTroposphericModel_getParameters1 },
              { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonDiscreteTroposphericModel_getParametersDrivers2 },
              { "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonDiscreteTroposphericModel_pathDelay3 },
              { "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonDiscreteTroposphericModel_pathDelay4 },
              { "pythonDecRef", "()V", (void *) t_PythonDiscreteTroposphericModel_pythonDecRef5 },
            };
            env->registerNatives(cls, methods, 6);
          }

          static PyObject *t_PythonDiscreteTroposphericModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonDiscreteTroposphericModel::initializeClass, 1)))
              return NULL;
            return t_PythonDiscreteTroposphericModel::wrap_Object(PythonDiscreteTroposphericModel(((t_PythonDiscreteTroposphericModel *) arg)->object.this$));
          }
          static PyObject *t_PythonDiscreteTroposphericModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonDiscreteTroposphericModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonDiscreteTroposphericModel_init_(t_PythonDiscreteTroposphericModel *self, PyObject *args, PyObject *kwds)
          {
            PythonDiscreteTroposphericModel object((jobject) NULL);

            INT_CALL(object = PythonDiscreteTroposphericModel());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonDiscreteTroposphericModel_finalize(t_PythonDiscreteTroposphericModel *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonDiscreteTroposphericModel_pythonExtension(t_PythonDiscreteTroposphericModel *self, PyObject *args)
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

          static jobject JNICALL t_PythonDiscreteTroposphericModel_getParameters0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDiscreteTroposphericModel::mids$[PythonDiscreteTroposphericModel::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            JArray< jdouble > value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getParameters", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "[D", &value))
            {
              throwTypeError("getParameters", result);
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

          static jobject JNICALL t_PythonDiscreteTroposphericModel_getParameters1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDiscreteTroposphericModel::mids$[PythonDiscreteTroposphericModel::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
            PyObject *result = PyObject_CallMethod(obj, "getParameters", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("getParameters", result);
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

          static jobject JNICALL t_PythonDiscreteTroposphericModel_getParametersDrivers2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDiscreteTroposphericModel::mids$[PythonDiscreteTroposphericModel::mid_pythonExtension_492808a339bfa35f]);
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

          static jobject JNICALL t_PythonDiscreteTroposphericModel_pathDelay3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDiscreteTroposphericModel::mids$[PythonDiscreteTroposphericModel::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
            PyObject *o1 = ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(::org::orekit::bodies::FieldGeodeticPoint(a1));
            PyObject *o2 = JArray<jobject>(a2).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            PyObject *o3 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a3));
            PyObject *result = PyObject_CallMethod(obj, "pathDelay", "OOOO", o0, o1, o2, o3);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            Py_DECREF(o3);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("pathDelay", result);
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

          static jdouble JNICALL t_PythonDiscreteTroposphericModel_pathDelay4(JNIEnv *jenv, jobject jobj, jdouble a0, jobject a1, jobject a2, jobject a3)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDiscreteTroposphericModel::mids$[PythonDiscreteTroposphericModel::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o1 = ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(::org::orekit::bodies::GeodeticPoint(a1));
            PyObject *o2 = JArray<jdouble>(a2).wrap();
            PyObject *o3 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a3));
            PyObject *result = PyObject_CallMethod(obj, "pathDelay", "dOOO", (double) a0, o1, o2, o3);
            Py_DECREF(o1);
            Py_DECREF(o2);
            Py_DECREF(o3);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("pathDelay", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static void JNICALL t_PythonDiscreteTroposphericModel_pythonDecRef5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDiscreteTroposphericModel::mids$[PythonDiscreteTroposphericModel::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonDiscreteTroposphericModel::mids$[PythonDiscreteTroposphericModel::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonDiscreteTroposphericModel_get__self(t_PythonDiscreteTroposphericModel *self, void *data)
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
#include "org/orekit/estimation/measurements/PythonEstimationsProvider.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/EstimationsProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *PythonEstimationsProvider::class$ = NULL;
        jmethodID *PythonEstimationsProvider::mids$ = NULL;
        bool PythonEstimationsProvider::live$ = false;

        jclass PythonEstimationsProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/PythonEstimationsProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getEstimatedMeasurement_978ac7593c1405c5] = env->getMethodID(cls, "getEstimatedMeasurement", "(I)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getNumber_570ce0828f81a2c1] = env->getMethodID(cls, "getNumber", "()I");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEstimationsProvider::PythonEstimationsProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonEstimationsProvider::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonEstimationsProvider::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonEstimationsProvider::pythonExtension(jlong a0) const
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
    namespace estimation {
      namespace measurements {
        static PyObject *t_PythonEstimationsProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEstimationsProvider_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonEstimationsProvider_init_(t_PythonEstimationsProvider *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEstimationsProvider_finalize(t_PythonEstimationsProvider *self);
        static PyObject *t_PythonEstimationsProvider_pythonExtension(t_PythonEstimationsProvider *self, PyObject *args);
        static jobject JNICALL t_PythonEstimationsProvider_getEstimatedMeasurement0(JNIEnv *jenv, jobject jobj, jint a0);
        static jint JNICALL t_PythonEstimationsProvider_getNumber1(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonEstimationsProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonEstimationsProvider_get__self(t_PythonEstimationsProvider *self, void *data);
        static PyGetSetDef t_PythonEstimationsProvider__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEstimationsProvider, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEstimationsProvider__methods_[] = {
          DECLARE_METHOD(t_PythonEstimationsProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEstimationsProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEstimationsProvider, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEstimationsProvider, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEstimationsProvider)[] = {
          { Py_tp_methods, t_PythonEstimationsProvider__methods_ },
          { Py_tp_init, (void *) t_PythonEstimationsProvider_init_ },
          { Py_tp_getset, t_PythonEstimationsProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEstimationsProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEstimationsProvider, t_PythonEstimationsProvider, PythonEstimationsProvider);

        void t_PythonEstimationsProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEstimationsProvider), &PY_TYPE_DEF(PythonEstimationsProvider), module, "PythonEstimationsProvider", 1);
        }

        void t_PythonEstimationsProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEstimationsProvider), "class_", make_descriptor(PythonEstimationsProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEstimationsProvider), "wrapfn_", make_descriptor(t_PythonEstimationsProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEstimationsProvider), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEstimationsProvider::initializeClass);
          JNINativeMethod methods[] = {
            { "getEstimatedMeasurement", "(I)Lorg/orekit/estimation/measurements/EstimatedMeasurement;", (void *) t_PythonEstimationsProvider_getEstimatedMeasurement0 },
            { "getNumber", "()I", (void *) t_PythonEstimationsProvider_getNumber1 },
            { "pythonDecRef", "()V", (void *) t_PythonEstimationsProvider_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonEstimationsProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEstimationsProvider::initializeClass, 1)))
            return NULL;
          return t_PythonEstimationsProvider::wrap_Object(PythonEstimationsProvider(((t_PythonEstimationsProvider *) arg)->object.this$));
        }
        static PyObject *t_PythonEstimationsProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEstimationsProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonEstimationsProvider_init_(t_PythonEstimationsProvider *self, PyObject *args, PyObject *kwds)
        {
          PythonEstimationsProvider object((jobject) NULL);

          INT_CALL(object = PythonEstimationsProvider());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEstimationsProvider_finalize(t_PythonEstimationsProvider *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEstimationsProvider_pythonExtension(t_PythonEstimationsProvider *self, PyObject *args)
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

        static jobject JNICALL t_PythonEstimationsProvider_getEstimatedMeasurement0(JNIEnv *jenv, jobject jobj, jint a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEstimationsProvider::mids$[PythonEstimationsProvider::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getEstimatedMeasurement", "i", (int) a0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &value))
          {
            throwTypeError("getEstimatedMeasurement", result);
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

        static jint JNICALL t_PythonEstimationsProvider_getNumber1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEstimationsProvider::mids$[PythonEstimationsProvider::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getNumber", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getNumber", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static void JNICALL t_PythonEstimationsProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEstimationsProvider::mids$[PythonEstimationsProvider::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEstimationsProvider::mids$[PythonEstimationsProvider::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonEstimationsProvider_get__self(t_PythonEstimationsProvider *self, void *data)
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
#include "org/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagator.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {

          ::java::lang::Class *GLONASSAnalyticalPropagator::class$ = NULL;
          jmethodID *GLONASSAnalyticalPropagator::mids$ = NULL;
          bool GLONASSAnalyticalPropagator::live$ = false;

          jclass GLONASSAnalyticalPropagator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getECEF_b86f9f61d97a7244] = env->getMethodID(cls, "getECEF", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getECI_b86f9f61d97a7244] = env->getMethodID(cls, "getECI", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getGLONASSOrbitalElements_44dc208271d1b6f9] = env->getMethodID(cls, "getGLONASSOrbitalElements", "()Lorg/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements;");
              mids$[mid_getMU_dff5885c2c873297] = env->getStaticMethodID(cls, "getMU", "()D");
              mids$[mid_propagateInEcef_38efe74c9e3a1286] = env->getMethodID(cls, "propagateInEcef", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/PVCoordinates;");
              mids$[mid_resetInitialState_0ee5c56004643a2e] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
              mids$[mid_propagateOrbit_7a8f4c854607bed6] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");
              mids$[mid_getMass_bf1d7732f1acb697] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_resetIntermediateState_33f4696e4edaa03c] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::frames::Frame GLONASSAnalyticalPropagator::getECEF() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getECEF_b86f9f61d97a7244]));
          }

          ::org::orekit::frames::Frame GLONASSAnalyticalPropagator::getECI() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getECI_b86f9f61d97a7244]));
          }

          ::org::orekit::frames::Frame GLONASSAnalyticalPropagator::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
          }

          ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements GLONASSAnalyticalPropagator::getGLONASSOrbitalElements() const
          {
            return ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements(env->callObjectMethod(this$, mids$[mid_getGLONASSOrbitalElements_44dc208271d1b6f9]));
          }

          jdouble GLONASSAnalyticalPropagator::getMU()
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_getMU_dff5885c2c873297]);
          }

          ::org::orekit::utils::PVCoordinates GLONASSAnalyticalPropagator::propagateInEcef(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_propagateInEcef_38efe74c9e3a1286], a0.this$));
          }

          void GLONASSAnalyticalPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_resetInitialState_0ee5c56004643a2e], a0.this$);
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
          static PyObject *t_GLONASSAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GLONASSAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GLONASSAnalyticalPropagator_getECEF(t_GLONASSAnalyticalPropagator *self);
          static PyObject *t_GLONASSAnalyticalPropagator_getECI(t_GLONASSAnalyticalPropagator *self);
          static PyObject *t_GLONASSAnalyticalPropagator_getFrame(t_GLONASSAnalyticalPropagator *self, PyObject *args);
          static PyObject *t_GLONASSAnalyticalPropagator_getGLONASSOrbitalElements(t_GLONASSAnalyticalPropagator *self);
          static PyObject *t_GLONASSAnalyticalPropagator_getMU(PyTypeObject *type);
          static PyObject *t_GLONASSAnalyticalPropagator_propagateInEcef(t_GLONASSAnalyticalPropagator *self, PyObject *arg);
          static PyObject *t_GLONASSAnalyticalPropagator_resetInitialState(t_GLONASSAnalyticalPropagator *self, PyObject *args);
          static PyObject *t_GLONASSAnalyticalPropagator_get__eCEF(t_GLONASSAnalyticalPropagator *self, void *data);
          static PyObject *t_GLONASSAnalyticalPropagator_get__eCI(t_GLONASSAnalyticalPropagator *self, void *data);
          static PyObject *t_GLONASSAnalyticalPropagator_get__frame(t_GLONASSAnalyticalPropagator *self, void *data);
          static PyObject *t_GLONASSAnalyticalPropagator_get__gLONASSOrbitalElements(t_GLONASSAnalyticalPropagator *self, void *data);
          static PyObject *t_GLONASSAnalyticalPropagator_get__mU(t_GLONASSAnalyticalPropagator *self, void *data);
          static PyGetSetDef t_GLONASSAnalyticalPropagator__fields_[] = {
            DECLARE_GET_FIELD(t_GLONASSAnalyticalPropagator, eCEF),
            DECLARE_GET_FIELD(t_GLONASSAnalyticalPropagator, eCI),
            DECLARE_GET_FIELD(t_GLONASSAnalyticalPropagator, frame),
            DECLARE_GET_FIELD(t_GLONASSAnalyticalPropagator, gLONASSOrbitalElements),
            DECLARE_GET_FIELD(t_GLONASSAnalyticalPropagator, mU),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GLONASSAnalyticalPropagator__methods_[] = {
            DECLARE_METHOD(t_GLONASSAnalyticalPropagator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagator, getECEF, METH_NOARGS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagator, getECI, METH_NOARGS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagator, getFrame, METH_VARARGS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagator, getGLONASSOrbitalElements, METH_NOARGS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagator, getMU, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagator, propagateInEcef, METH_O),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagator, resetInitialState, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GLONASSAnalyticalPropagator)[] = {
            { Py_tp_methods, t_GLONASSAnalyticalPropagator__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_GLONASSAnalyticalPropagator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GLONASSAnalyticalPropagator)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
            NULL
          };

          DEFINE_TYPE(GLONASSAnalyticalPropagator, t_GLONASSAnalyticalPropagator, GLONASSAnalyticalPropagator);

          void t_GLONASSAnalyticalPropagator::install(PyObject *module)
          {
            installType(&PY_TYPE(GLONASSAnalyticalPropagator), &PY_TYPE_DEF(GLONASSAnalyticalPropagator), module, "GLONASSAnalyticalPropagator", 0);
          }

          void t_GLONASSAnalyticalPropagator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSAnalyticalPropagator), "class_", make_descriptor(GLONASSAnalyticalPropagator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSAnalyticalPropagator), "wrapfn_", make_descriptor(t_GLONASSAnalyticalPropagator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSAnalyticalPropagator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GLONASSAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GLONASSAnalyticalPropagator::initializeClass, 1)))
              return NULL;
            return t_GLONASSAnalyticalPropagator::wrap_Object(GLONASSAnalyticalPropagator(((t_GLONASSAnalyticalPropagator *) arg)->object.this$));
          }
          static PyObject *t_GLONASSAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GLONASSAnalyticalPropagator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_GLONASSAnalyticalPropagator_getECEF(t_GLONASSAnalyticalPropagator *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getECEF());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_getECI(t_GLONASSAnalyticalPropagator *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getECI());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_getFrame(t_GLONASSAnalyticalPropagator *self, PyObject *args)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }

            return callSuper(PY_TYPE(GLONASSAnalyticalPropagator), (PyObject *) self, "getFrame", args, 2);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_getGLONASSOrbitalElements(t_GLONASSAnalyticalPropagator *self)
          {
            ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements result((jobject) NULL);
            OBJ_CALL(result = self->object.getGLONASSOrbitalElements());
            return ::org::orekit::propagation::analytical::gnss::data::t_GLONASSOrbitalElements::wrap_Object(result);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_getMU(PyTypeObject *type)
          {
            jdouble result;
            OBJ_CALL(result = ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator::getMU());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_propagateInEcef(t_GLONASSAnalyticalPropagator *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.propagateInEcef(a0));
              return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "propagateInEcef", arg);
            return NULL;
          }

          static PyObject *t_GLONASSAnalyticalPropagator_resetInitialState(t_GLONASSAnalyticalPropagator *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(self->object.resetInitialState(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(GLONASSAnalyticalPropagator), (PyObject *) self, "resetInitialState", args, 2);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_get__eCEF(t_GLONASSAnalyticalPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getECEF());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_get__eCI(t_GLONASSAnalyticalPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getECI());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_get__frame(t_GLONASSAnalyticalPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_get__gLONASSOrbitalElements(t_GLONASSAnalyticalPropagator *self, void *data)
          {
            ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements value((jobject) NULL);
            OBJ_CALL(value = self->object.getGLONASSOrbitalElements());
            return ::org::orekit::propagation::analytical::gnss::data::t_GLONASSOrbitalElements::wrap_Object(value);
          }

          static PyObject *t_GLONASSAnalyticalPropagator_get__mU(t_GLONASSAnalyticalPropagator *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMU());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/oned/IntervalsSet.h"
#include "java/util/Iterator.h"
#include "java/lang/Iterable.h"
#include "org/hipparchus/geometry/euclidean/oned/Interval.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/euclidean/oned/IntervalsSet.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/BoundaryProjection.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {

          ::java::lang::Class *IntervalsSet::class$ = NULL;
          jmethodID *IntervalsSet::mids$ = NULL;
          bool IntervalsSet::live$ = false;

          jclass IntervalsSet::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/oned/IntervalsSet");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_init$_748cd2c51a955d77] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/BSPTree;D)V");
              mids$[mid_init$_1f4d55383238fbb5] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;D)V");
              mids$[mid_init$_2c56b6dd4d4b1dec] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_asList_2afa36052df4765d] = env->getMethodID(cls, "asList", "()Ljava/util/List;");
              mids$[mid_buildNew_478602e2978d50f1] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Lorg/hipparchus/geometry/euclidean/oned/IntervalsSet;");
              mids$[mid_getInf_dff5885c2c873297] = env->getMethodID(cls, "getInf", "()D");
              mids$[mid_getSup_dff5885c2c873297] = env->getMethodID(cls, "getSup", "()D");
              mids$[mid_iterator_4d23511a9f0db098] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
              mids$[mid_projectToBoundary_e9baadaaf6c2e7eb] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/partitioning/BoundaryProjection;");
              mids$[mid_computeGeometricalProperties_0fa09c18fee449d5] = env->getMethodID(cls, "computeGeometricalProperties", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IntervalsSet::IntervalsSet(jdouble a0) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

          IntervalsSet::IntervalsSet(const ::org::hipparchus::geometry::partitioning::BSPTree & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_748cd2c51a955d77, a0.this$, a1)) {}

          IntervalsSet::IntervalsSet(const ::java::util::Collection & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_1f4d55383238fbb5, a0.this$, a1)) {}

          IntervalsSet::IntervalsSet(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_2c56b6dd4d4b1dec, a0, a1, a2)) {}

          ::java::util::List IntervalsSet::asList() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_asList_2afa36052df4765d]));
          }

          IntervalsSet IntervalsSet::buildNew(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
          {
            return IntervalsSet(env->callObjectMethod(this$, mids$[mid_buildNew_478602e2978d50f1], a0.this$));
          }

          jdouble IntervalsSet::getInf() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getInf_dff5885c2c873297]);
          }

          jdouble IntervalsSet::getSup() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSup_dff5885c2c873297]);
          }

          ::java::util::Iterator IntervalsSet::iterator() const
          {
            return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_4d23511a9f0db098]));
          }

          ::org::hipparchus::geometry::partitioning::BoundaryProjection IntervalsSet::projectToBoundary(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::partitioning::BoundaryProjection(env->callObjectMethod(this$, mids$[mid_projectToBoundary_e9baadaaf6c2e7eb], a0.this$));
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
        namespace oned {
          static PyObject *t_IntervalsSet_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IntervalsSet_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IntervalsSet_of_(t_IntervalsSet *self, PyObject *args);
          static int t_IntervalsSet_init_(t_IntervalsSet *self, PyObject *args, PyObject *kwds);
          static PyObject *t_IntervalsSet_asList(t_IntervalsSet *self);
          static PyObject *t_IntervalsSet_buildNew(t_IntervalsSet *self, PyObject *args);
          static PyObject *t_IntervalsSet_getInf(t_IntervalsSet *self);
          static PyObject *t_IntervalsSet_getSup(t_IntervalsSet *self);
          static PyObject *t_IntervalsSet_iterator(t_IntervalsSet *self);
          static PyObject *t_IntervalsSet_projectToBoundary(t_IntervalsSet *self, PyObject *args);
          static PyObject *t_IntervalsSet_get__inf(t_IntervalsSet *self, void *data);
          static PyObject *t_IntervalsSet_get__sup(t_IntervalsSet *self, void *data);
          static PyObject *t_IntervalsSet_get__parameters_(t_IntervalsSet *self, void *data);
          static PyGetSetDef t_IntervalsSet__fields_[] = {
            DECLARE_GET_FIELD(t_IntervalsSet, inf),
            DECLARE_GET_FIELD(t_IntervalsSet, sup),
            DECLARE_GET_FIELD(t_IntervalsSet, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IntervalsSet__methods_[] = {
            DECLARE_METHOD(t_IntervalsSet, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntervalsSet, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntervalsSet, of_, METH_VARARGS),
            DECLARE_METHOD(t_IntervalsSet, asList, METH_NOARGS),
            DECLARE_METHOD(t_IntervalsSet, buildNew, METH_VARARGS),
            DECLARE_METHOD(t_IntervalsSet, getInf, METH_NOARGS),
            DECLARE_METHOD(t_IntervalsSet, getSup, METH_NOARGS),
            DECLARE_METHOD(t_IntervalsSet, iterator, METH_NOARGS),
            DECLARE_METHOD(t_IntervalsSet, projectToBoundary, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IntervalsSet)[] = {
            { Py_tp_methods, t_IntervalsSet__methods_ },
            { Py_tp_init, (void *) t_IntervalsSet_init_ },
            { Py_tp_getset, t_IntervalsSet__fields_ },
            { Py_tp_iter, (void *) ((PyObject *(*)(t_IntervalsSet *)) get_generic_iterator< t_IntervalsSet >) },
            { Py_tp_iternext, (void *) 0 },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IntervalsSet)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractRegion),
            NULL
          };

          DEFINE_TYPE(IntervalsSet, t_IntervalsSet, IntervalsSet);
          PyObject *t_IntervalsSet::wrap_Object(const IntervalsSet& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_IntervalsSet::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IntervalsSet *self = (t_IntervalsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_IntervalsSet::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_IntervalsSet::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IntervalsSet *self = (t_IntervalsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_IntervalsSet::install(PyObject *module)
          {
            installType(&PY_TYPE(IntervalsSet), &PY_TYPE_DEF(IntervalsSet), module, "IntervalsSet", 0);
          }

          void t_IntervalsSet::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntervalsSet), "class_", make_descriptor(IntervalsSet::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntervalsSet), "wrapfn_", make_descriptor(t_IntervalsSet::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntervalsSet), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IntervalsSet_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IntervalsSet::initializeClass, 1)))
              return NULL;
            return t_IntervalsSet::wrap_Object(IntervalsSet(((t_IntervalsSet *) arg)->object.this$));
          }
          static PyObject *t_IntervalsSet_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IntervalsSet::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_IntervalsSet_of_(t_IntervalsSet *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_IntervalsSet_init_(t_IntervalsSet *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                IntervalsSet object((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  INT_CALL(object = IntervalsSet(a0));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                IntervalsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_, &a1))
                {
                  INT_CALL(object = IntervalsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  break;
                }
              }
              {
                ::java::util::Collection a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                IntervalsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
                {
                  INT_CALL(object = IntervalsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  break;
                }
              }
              goto err;
             case 3:
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                IntervalsSet object((jobject) NULL);

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  INT_CALL(object = IntervalsSet(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
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

          static PyObject *t_IntervalsSet_asList(t_IntervalsSet *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.asList());
            return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Interval));
          }

          static PyObject *t_IntervalsSet_buildNew(t_IntervalsSet *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
            PyTypeObject **p0;
            IntervalsSet result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
            {
              OBJ_CALL(result = self->object.buildNew(a0));
              return t_IntervalsSet::wrap_Object(result);
            }

            return callSuper(PY_TYPE(IntervalsSet), (PyObject *) self, "buildNew", args, 2);
          }

          static PyObject *t_IntervalsSet_getInf(t_IntervalsSet *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getInf());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_IntervalsSet_getSup(t_IntervalsSet *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getSup());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_IntervalsSet_iterator(t_IntervalsSet *self)
          {
            ::java::util::Iterator result((jobject) NULL);
            OBJ_CALL(result = self->object.iterator());
            return ::java::util::t_Iterator::wrap_Object(result, ::java::lang::PY_TYPE(Object));
          }

          static PyObject *t_IntervalsSet_projectToBoundary(t_IntervalsSet *self, PyObject *args)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::BoundaryProjection result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.projectToBoundary(a0));
              return ::org::hipparchus::geometry::partitioning::t_BoundaryProjection::wrap_Object(result, ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D));
            }

            return callSuper(PY_TYPE(IntervalsSet), (PyObject *) self, "projectToBoundary", args, 2);
          }
          static PyObject *t_IntervalsSet_get__parameters_(t_IntervalsSet *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_IntervalsSet_get__inf(t_IntervalsSet *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getInf());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_IntervalsSet_get__sup(t_IntervalsSet *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSup());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Logistic.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Logistic::class$ = NULL;
        jmethodID *Logistic::mids$ = NULL;
        bool Logistic::live$ = false;

        jclass Logistic::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Logistic");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e42c7d2e3ddfb2c2] = env->getMethodID(cls, "<init>", "(DDDDDD)V");
            mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_73d6acaa8ebd2b7d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Logistic::Logistic(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e42c7d2e3ddfb2c2, a0, a1, a2, a3, a4, a5)) {}

        jdouble Logistic::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_dcbc7ce2902fa136], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Logistic::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_73d6acaa8ebd2b7d], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/analysis/function/Logistic$Parametric.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Logistic_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Logistic_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Logistic_init_(t_Logistic *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Logistic_value(t_Logistic *self, PyObject *args);

        static PyMethodDef t_Logistic__methods_[] = {
          DECLARE_METHOD(t_Logistic, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Logistic, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Logistic, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Logistic)[] = {
          { Py_tp_methods, t_Logistic__methods_ },
          { Py_tp_init, (void *) t_Logistic_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Logistic)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Logistic, t_Logistic, Logistic);

        void t_Logistic::install(PyObject *module)
        {
          installType(&PY_TYPE(Logistic), &PY_TYPE_DEF(Logistic), module, "Logistic", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logistic), "Parametric", make_descriptor(&PY_TYPE_DEF(Logistic$Parametric)));
        }

        void t_Logistic::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logistic), "class_", make_descriptor(Logistic::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logistic), "wrapfn_", make_descriptor(t_Logistic::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logistic), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Logistic_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Logistic::initializeClass, 1)))
            return NULL;
          return t_Logistic::wrap_Object(Logistic(((t_Logistic *) arg)->object.this$));
        }
        static PyObject *t_Logistic_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Logistic::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Logistic_init_(t_Logistic *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          jdouble a4;
          jdouble a5;
          Logistic object((jobject) NULL);

          if (!parseArgs(args, "DDDDDD", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = Logistic(a0, a1, a2, a3, a4, a5));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_Logistic_value(t_Logistic *self, PyObject *args)
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
#include "org/orekit/utils/DateDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *DateDriver::class$ = NULL;
      jmethodID *DateDriver::mids$ = NULL;
      bool DateDriver::live$ = false;

      jclass DateDriver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/DateDriver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_75586423df931f63] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Ljava/lang/String;Z)V");
          mids$[mid_getBaseDate_85703d13e302437e] = env->getMethodID(cls, "getBaseDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_isStart_b108b35ef48e27bd] = env->getMethodID(cls, "isStart", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DateDriver::DateDriver(const ::org::orekit::time::AbsoluteDate & a0, const ::java::lang::String & a1, jboolean a2) : ::org::orekit::utils::ParameterDriver(env->newObject(initializeClass, &mids$, mid_init$_75586423df931f63, a0.this$, a1.this$, a2)) {}

      ::org::orekit::time::AbsoluteDate DateDriver::getBaseDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getBaseDate_85703d13e302437e]));
      }

      ::org::orekit::time::AbsoluteDate DateDriver::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
      }

      jboolean DateDriver::isStart() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isStart_b108b35ef48e27bd]);
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
      static PyObject *t_DateDriver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DateDriver_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DateDriver_init_(t_DateDriver *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DateDriver_getBaseDate(t_DateDriver *self);
      static PyObject *t_DateDriver_getDate(t_DateDriver *self);
      static PyObject *t_DateDriver_isStart(t_DateDriver *self);
      static PyObject *t_DateDriver_get__baseDate(t_DateDriver *self, void *data);
      static PyObject *t_DateDriver_get__date(t_DateDriver *self, void *data);
      static PyObject *t_DateDriver_get__start(t_DateDriver *self, void *data);
      static PyGetSetDef t_DateDriver__fields_[] = {
        DECLARE_GET_FIELD(t_DateDriver, baseDate),
        DECLARE_GET_FIELD(t_DateDriver, date),
        DECLARE_GET_FIELD(t_DateDriver, start),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DateDriver__methods_[] = {
        DECLARE_METHOD(t_DateDriver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DateDriver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DateDriver, getBaseDate, METH_NOARGS),
        DECLARE_METHOD(t_DateDriver, getDate, METH_NOARGS),
        DECLARE_METHOD(t_DateDriver, isStart, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DateDriver)[] = {
        { Py_tp_methods, t_DateDriver__methods_ },
        { Py_tp_init, (void *) t_DateDriver_init_ },
        { Py_tp_getset, t_DateDriver__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DateDriver)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::ParameterDriver),
        NULL
      };

      DEFINE_TYPE(DateDriver, t_DateDriver, DateDriver);

      void t_DateDriver::install(PyObject *module)
      {
        installType(&PY_TYPE(DateDriver), &PY_TYPE_DEF(DateDriver), module, "DateDriver", 0);
      }

      void t_DateDriver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateDriver), "class_", make_descriptor(DateDriver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateDriver), "wrapfn_", make_descriptor(t_DateDriver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateDriver), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DateDriver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DateDriver::initializeClass, 1)))
          return NULL;
        return t_DateDriver::wrap_Object(DateDriver(((t_DateDriver *) arg)->object.this$));
      }
      static PyObject *t_DateDriver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DateDriver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DateDriver_init_(t_DateDriver *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        jboolean a2;
        DateDriver object((jobject) NULL);

        if (!parseArgs(args, "ksZ", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = DateDriver(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_DateDriver_getBaseDate(t_DateDriver *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getBaseDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_DateDriver_getDate(t_DateDriver *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_DateDriver_isStart(t_DateDriver *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isStart());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_DateDriver_get__baseDate(t_DateDriver *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getBaseDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_DateDriver_get__date(t_DateDriver *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_DateDriver_get__start(t_DateDriver *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isStart());
        Py_RETURN_BOOL(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1240.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionData.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *Rtcm1240::class$ = NULL;
              jmethodID *Rtcm1240::mids$ = NULL;
              bool Rtcm1240::live$ = false;

              jclass Rtcm1240::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1240");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_c862bfeb63a17bd5] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader;Ljava/util/List;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1240::Rtcm1240(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(env->newObject(initializeClass, &mids$, mid_init$_c862bfeb63a17bd5, a0, a1.this$, a2.this$)) {}
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
              static PyObject *t_Rtcm1240_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1240_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1240_of_(t_Rtcm1240 *self, PyObject *args);
              static int t_Rtcm1240_init_(t_Rtcm1240 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1240_get__parameters_(t_Rtcm1240 *self, void *data);
              static PyGetSetDef t_Rtcm1240__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1240, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1240__methods_[] = {
                DECLARE_METHOD(t_Rtcm1240, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1240, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1240, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1240)[] = {
                { Py_tp_methods, t_Rtcm1240__methods_ },
                { Py_tp_init, (void *) t_Rtcm1240_init_ },
                { Py_tp_getset, t_Rtcm1240__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1240)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1240, t_Rtcm1240, Rtcm1240);
              PyObject *t_Rtcm1240::wrap_Object(const Rtcm1240& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1240::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1240 *self = (t_Rtcm1240 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Rtcm1240::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1240::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1240 *self = (t_Rtcm1240 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Rtcm1240::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1240), &PY_TYPE_DEF(Rtcm1240), module, "Rtcm1240", 0);
              }

              void t_Rtcm1240::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1240), "class_", make_descriptor(Rtcm1240::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1240), "wrapfn_", make_descriptor(t_Rtcm1240::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1240), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1240_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1240::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1240::wrap_Object(Rtcm1240(((t_Rtcm1240 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1240_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1240::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1240_of_(t_Rtcm1240 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1240_init_(t_Rtcm1240 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                Rtcm1240 object((jobject) NULL);

                if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = Rtcm1240(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmOrbitCorrectionHeader);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmOrbitCorrectionData);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1240_get__parameters_(t_Rtcm1240 *self, void *data)
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
#include "org/orekit/data/FieldDelaunayArguments.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *FieldDelaunayArguments::class$ = NULL;
      jmethodID *FieldDelaunayArguments::mids$ = NULL;
      bool FieldDelaunayArguments::live$ = false;

      jclass FieldDelaunayArguments::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/FieldDelaunayArguments");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d6694262f79a2a57] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getD_eba8e72a22c984ac] = env->getMethodID(cls, "getD", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getDDot_eba8e72a22c984ac] = env->getMethodID(cls, "getDDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getDate_51da00d5b8a3b5df] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getF_eba8e72a22c984ac] = env->getMethodID(cls, "getF", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getFDot_eba8e72a22c984ac] = env->getMethodID(cls, "getFDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getGamma_eba8e72a22c984ac] = env->getMethodID(cls, "getGamma", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getGammaDot_eba8e72a22c984ac] = env->getMethodID(cls, "getGammaDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getL_eba8e72a22c984ac] = env->getMethodID(cls, "getL", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLDot_eba8e72a22c984ac] = env->getMethodID(cls, "getLDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLPrime_eba8e72a22c984ac] = env->getMethodID(cls, "getLPrime", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLPrimeDot_eba8e72a22c984ac] = env->getMethodID(cls, "getLPrimeDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getOmega_eba8e72a22c984ac] = env->getMethodID(cls, "getOmega", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getOmegaDot_eba8e72a22c984ac] = env->getMethodID(cls, "getOmegaDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getTC_eba8e72a22c984ac] = env->getMethodID(cls, "getTC", "()Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldDelaunayArguments::FieldDelaunayArguments(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::hipparchus::CalculusFieldElement & a6, const ::org::hipparchus::CalculusFieldElement & a7, const ::org::hipparchus::CalculusFieldElement & a8, const ::org::hipparchus::CalculusFieldElement & a9, const ::org::hipparchus::CalculusFieldElement & a10, const ::org::hipparchus::CalculusFieldElement & a11, const ::org::hipparchus::CalculusFieldElement & a12, const ::org::hipparchus::CalculusFieldElement & a13) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d6694262f79a2a57, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$)) {}

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getD() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getD_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getDDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDDot_eba8e72a22c984ac]));
      }

      ::org::orekit::time::FieldAbsoluteDate FieldDelaunayArguments::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_51da00d5b8a3b5df]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getF() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getF_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getFDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getGamma() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getGamma_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getGammaDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getGammaDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getL() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getL_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getLDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getLPrime() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLPrime_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getLPrimeDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLPrimeDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getOmega() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOmega_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getOmegaDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOmegaDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDelaunayArguments::getTC() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getTC_eba8e72a22c984ac]));
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
      static PyObject *t_FieldDelaunayArguments_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldDelaunayArguments_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldDelaunayArguments_of_(t_FieldDelaunayArguments *self, PyObject *args);
      static int t_FieldDelaunayArguments_init_(t_FieldDelaunayArguments *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldDelaunayArguments_getD(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getDDot(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getDate(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getF(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getFDot(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getGamma(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getGammaDot(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getL(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getLDot(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getLPrime(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getLPrimeDot(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getOmega(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getOmegaDot(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_getTC(t_FieldDelaunayArguments *self);
      static PyObject *t_FieldDelaunayArguments_get__d(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__dDot(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__date(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__f(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__fDot(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__gamma(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__gammaDot(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__l(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__lDot(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__lPrime(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__lPrimeDot(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__omega(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__omegaDot(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__tC(t_FieldDelaunayArguments *self, void *data);
      static PyObject *t_FieldDelaunayArguments_get__parameters_(t_FieldDelaunayArguments *self, void *data);
      static PyGetSetDef t_FieldDelaunayArguments__fields_[] = {
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, d),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, dDot),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, date),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, f),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, fDot),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, gamma),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, gammaDot),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, l),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, lDot),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, lPrime),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, lPrimeDot),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, omega),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, omegaDot),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, tC),
        DECLARE_GET_FIELD(t_FieldDelaunayArguments, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldDelaunayArguments__methods_[] = {
        DECLARE_METHOD(t_FieldDelaunayArguments, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldDelaunayArguments, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldDelaunayArguments, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getD, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getDDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getF, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getFDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getGamma, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getGammaDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getL, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getLDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getLPrime, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getLPrimeDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getOmega, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getOmegaDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldDelaunayArguments, getTC, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldDelaunayArguments)[] = {
        { Py_tp_methods, t_FieldDelaunayArguments__methods_ },
        { Py_tp_init, (void *) t_FieldDelaunayArguments_init_ },
        { Py_tp_getset, t_FieldDelaunayArguments__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldDelaunayArguments)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldDelaunayArguments, t_FieldDelaunayArguments, FieldDelaunayArguments);
      PyObject *t_FieldDelaunayArguments::wrap_Object(const FieldDelaunayArguments& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldDelaunayArguments::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldDelaunayArguments *self = (t_FieldDelaunayArguments *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldDelaunayArguments::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldDelaunayArguments::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldDelaunayArguments *self = (t_FieldDelaunayArguments *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldDelaunayArguments::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldDelaunayArguments), &PY_TYPE_DEF(FieldDelaunayArguments), module, "FieldDelaunayArguments", 0);
      }

      void t_FieldDelaunayArguments::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDelaunayArguments), "class_", make_descriptor(FieldDelaunayArguments::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDelaunayArguments), "wrapfn_", make_descriptor(t_FieldDelaunayArguments::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDelaunayArguments), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldDelaunayArguments_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldDelaunayArguments::initializeClass, 1)))
          return NULL;
        return t_FieldDelaunayArguments::wrap_Object(FieldDelaunayArguments(((t_FieldDelaunayArguments *) arg)->object.this$));
      }
      static PyObject *t_FieldDelaunayArguments_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldDelaunayArguments::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldDelaunayArguments_of_(t_FieldDelaunayArguments *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldDelaunayArguments_init_(t_FieldDelaunayArguments *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
        PyTypeObject **p3;
        ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
        PyTypeObject **p4;
        ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
        PyTypeObject **p5;
        ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
        PyTypeObject **p6;
        ::org::hipparchus::CalculusFieldElement a7((jobject) NULL);
        PyTypeObject **p7;
        ::org::hipparchus::CalculusFieldElement a8((jobject) NULL);
        PyTypeObject **p8;
        ::org::hipparchus::CalculusFieldElement a9((jobject) NULL);
        PyTypeObject **p9;
        ::org::hipparchus::CalculusFieldElement a10((jobject) NULL);
        PyTypeObject **p10;
        ::org::hipparchus::CalculusFieldElement a11((jobject) NULL);
        PyTypeObject **p11;
        ::org::hipparchus::CalculusFieldElement a12((jobject) NULL);
        PyTypeObject **p12;
        ::org::hipparchus::CalculusFieldElement a13((jobject) NULL);
        PyTypeObject **p13;
        FieldDelaunayArguments object((jobject) NULL);

        if (!parseArgs(args, "KKKKKKKKKKKKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &p8, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10, &p10, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a11, &p11, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a12, &p12, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a13, &p13, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          INT_CALL(object = FieldDelaunayArguments(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldDelaunayArguments_getD(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getD());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getDDot(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getDDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getDate(t_FieldDelaunayArguments *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldDelaunayArguments_getF(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getF());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getFDot(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getFDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getGamma(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getGamma());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getGammaDot(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getGammaDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getL(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getL());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getLDot(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getLPrime(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLPrime());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getLPrimeDot(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLPrimeDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getOmega(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getOmega());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getOmegaDot(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getOmegaDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDelaunayArguments_getTC(t_FieldDelaunayArguments *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getTC());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }
      static PyObject *t_FieldDelaunayArguments_get__parameters_(t_FieldDelaunayArguments *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldDelaunayArguments_get__d(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getD());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__dDot(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getDDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__date(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__f(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getF());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__fDot(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getFDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__gamma(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getGamma());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__gammaDot(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getGammaDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__l(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getL());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__lDot(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__lPrime(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLPrime());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__lPrimeDot(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLPrimeDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__omega(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getOmega());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__omegaDot(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getOmegaDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDelaunayArguments_get__tC(t_FieldDelaunayArguments *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getTC());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/BaseRangeRateIonosphericDelayModifier.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *BaseRangeRateIonosphericDelayModifier::class$ = NULL;
          jmethodID *BaseRangeRateIonosphericDelayModifier::mids$ = NULL;
          bool BaseRangeRateIonosphericDelayModifier::live$ = false;

          jclass BaseRangeRateIonosphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/BaseRangeRateIonosphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getIonoModel_f6314816f66aaed0] = env->getMethodID(cls, "getIonoModel", "()Lorg/orekit/models/earth/ionosphere/IonosphericModel;");
              mids$[mid_rangeRateErrorIonosphericModel_03cd5a2e88a0f0f6] = env->getMethodID(cls, "rangeRateErrorIonosphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_rangeRateErrorIonosphericModel_08d2a35aee39232b] = env->getMethodID(cls, "rangeRateErrorIonosphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/SpacecraftState;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::List BaseRangeRateIonosphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
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
          static PyObject *t_BaseRangeRateIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BaseRangeRateIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BaseRangeRateIonosphericDelayModifier_getParametersDrivers(t_BaseRangeRateIonosphericDelayModifier *self);
          static PyObject *t_BaseRangeRateIonosphericDelayModifier_get__parametersDrivers(t_BaseRangeRateIonosphericDelayModifier *self, void *data);
          static PyGetSetDef t_BaseRangeRateIonosphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_BaseRangeRateIonosphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_BaseRangeRateIonosphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_BaseRangeRateIonosphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BaseRangeRateIonosphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BaseRangeRateIonosphericDelayModifier, getParametersDrivers, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BaseRangeRateIonosphericDelayModifier)[] = {
            { Py_tp_methods, t_BaseRangeRateIonosphericDelayModifier__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_BaseRangeRateIonosphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BaseRangeRateIonosphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(BaseRangeRateIonosphericDelayModifier, t_BaseRangeRateIonosphericDelayModifier, BaseRangeRateIonosphericDelayModifier);

          void t_BaseRangeRateIonosphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(BaseRangeRateIonosphericDelayModifier), &PY_TYPE_DEF(BaseRangeRateIonosphericDelayModifier), module, "BaseRangeRateIonosphericDelayModifier", 0);
          }

          void t_BaseRangeRateIonosphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeRateIonosphericDelayModifier), "class_", make_descriptor(BaseRangeRateIonosphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeRateIonosphericDelayModifier), "wrapfn_", make_descriptor(t_BaseRangeRateIonosphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeRateIonosphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BaseRangeRateIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BaseRangeRateIonosphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_BaseRangeRateIonosphericDelayModifier::wrap_Object(BaseRangeRateIonosphericDelayModifier(((t_BaseRangeRateIonosphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_BaseRangeRateIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BaseRangeRateIonosphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_BaseRangeRateIonosphericDelayModifier_getParametersDrivers(t_BaseRangeRateIonosphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_BaseRangeRateIonosphericDelayModifier_get__parametersDrivers(t_BaseRangeRateIonosphericDelayModifier *self, void *data)
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
#include "org/hipparchus/util/FieldTuple.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/FieldTuple.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *FieldTuple::class$ = NULL;
      jmethodID *FieldTuple::mids$ = NULL;
      bool FieldTuple::live$ = false;

      jclass FieldTuple::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/FieldTuple");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_72479ee08453ef97] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_abs_c6f44995fb640946] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_acos_c6f44995fb640946] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_acosh_c6f44995fb640946] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_add_1d3be396d6aaf49a] = env->getMethodID(cls, "add", "(Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_add_9d00348fb504e444] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_asin_c6f44995fb640946] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_asinh_c6f44995fb640946] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_atan_c6f44995fb640946] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_atan2_1d3be396d6aaf49a] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_atanh_c6f44995fb640946] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_cbrt_c6f44995fb640946] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_ceil_c6f44995fb640946] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_copySign_1d3be396d6aaf49a] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_copySign_9d00348fb504e444] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_cos_c6f44995fb640946] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_cosh_c6f44995fb640946] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_divide_1d3be396d6aaf49a] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_divide_9d00348fb504e444] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_exp_c6f44995fb640946] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_expm1_c6f44995fb640946] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_floor_c6f44995fb640946] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_getComponent_93058f0552012043] = env->getMethodID(cls, "getComponent", "(I)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getComponents_226a0b2040b1d2e1] = env->getMethodID(cls, "getComponents", "()[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getField_5b28be2d3632a5dc] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getPi_c6f44995fb640946] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_getReal_dff5885c2c873297] = env->getMethodID(cls, "getReal", "()D");
          mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_hypot_1d3be396d6aaf49a] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_linearCombination_5f11403806f495fb] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_linearCombination_b905f923649a6e2a] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/util/FieldTuple;[Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_linearCombination_8aed902754f7deb3] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_linearCombination_771c499b2e7405bc] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/util/FieldTuple;DLorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_linearCombination_93faa82c80f2f2d1] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_linearCombination_1536b6a58fc7d47d] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/util/FieldTuple;DLorg/hipparchus/util/FieldTuple;DLorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_linearCombination_e8eec0295bba03ca] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_linearCombination_2a46ddadd8de494f] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/util/FieldTuple;DLorg/hipparchus/util/FieldTuple;DLorg/hipparchus/util/FieldTuple;DLorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_log_c6f44995fb640946] = env->getMethodID(cls, "log", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_log10_c6f44995fb640946] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_log1p_c6f44995fb640946] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_multiply_1d3be396d6aaf49a] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_multiply_9d00348fb504e444] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_multiply_a7c5131bda8e71dd] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_negate_c6f44995fb640946] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_newInstance_9d00348fb504e444] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_pow_1d3be396d6aaf49a] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_pow_9d00348fb504e444] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_pow_a7c5131bda8e71dd] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_reciprocal_c6f44995fb640946] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_remainder_1d3be396d6aaf49a] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_remainder_9d00348fb504e444] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_rint_c6f44995fb640946] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_rootN_a7c5131bda8e71dd] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_scalb_a7c5131bda8e71dd] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_sign_c6f44995fb640946] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_sin_c6f44995fb640946] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_sinCos_a447b7ca640e6b68] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
          mids$[mid_sinh_c6f44995fb640946] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_sinhCosh_eef733c8a50b276f] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
          mids$[mid_sqrt_c6f44995fb640946] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_subtract_1d3be396d6aaf49a] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/util/FieldTuple;)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_subtract_9d00348fb504e444] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_tan_c6f44995fb640946] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_tanh_c6f44995fb640946] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_toDegrees_c6f44995fb640946] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_toRadians_c6f44995fb640946] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/util/FieldTuple;");
          mids$[mid_ulp_c6f44995fb640946] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/util/FieldTuple;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldTuple::FieldTuple(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_72479ee08453ef97, a0.this$)) {}

      FieldTuple FieldTuple::abs() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_abs_c6f44995fb640946]));
      }

      FieldTuple FieldTuple::acos() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_acos_c6f44995fb640946]));
      }

      FieldTuple FieldTuple::acosh() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_acosh_c6f44995fb640946]));
      }

      FieldTuple FieldTuple::add(const FieldTuple & a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_add_1d3be396d6aaf49a], a0.this$));
      }

      FieldTuple FieldTuple::add(jdouble a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_add_9d00348fb504e444], a0));
      }

      FieldTuple FieldTuple::asin() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_asin_c6f44995fb640946]));
      }

      FieldTuple FieldTuple::asinh() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_asinh_c6f44995fb640946]));
      }

      FieldTuple FieldTuple::atan() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_atan_c6f44995fb640946]));
      }

      FieldTuple FieldTuple::atan2(const FieldTuple & a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_atan2_1d3be396d6aaf49a], a0.this$));
      }

      FieldTuple FieldTuple::atanh() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_atanh_c6f44995fb640946]));
      }

      FieldTuple FieldTuple::cbrt() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_cbrt_c6f44995fb640946]));
      }

      FieldTuple FieldTuple::ceil() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_ceil_c6f44995fb640946]));
      }

      FieldTuple FieldTuple::copySign(const FieldTuple & a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_copySign_1d3be396d6aaf49a], a0.this$));
      }

      FieldTuple FieldTuple::copySign(jdouble a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_copySign_9d00348fb504e444], a0));
      }

      FieldTuple FieldTuple::cos() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_cos_c6f44995fb640946]));
      }

      FieldTuple FieldTuple::cosh() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_cosh_c6f44995fb640946]));
      }

      FieldTuple FieldTuple::divide(const FieldTuple & a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_divide_1d3be396d6aaf49a], a0.this$));
      }

      FieldTuple FieldTuple::divide(jdouble a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_divide_9d00348fb504e444], a0));
      }

      jboolean FieldTuple::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
      }

      FieldTuple FieldTuple::exp() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_exp_c6f44995fb640946]));
      }

      FieldTuple FieldTuple::expm1() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_expm1_c6f44995fb640946]));
      }

      FieldTuple FieldTuple::floor() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_floor_c6f44995fb640946]));
      }

      ::org::hipparchus::CalculusFieldElement FieldTuple::getComponent(jint a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getComponent_93058f0552012043], a0));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldTuple::getComponents() const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getComponents_226a0b2040b1d2e1]));
      }

      jint FieldTuple::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_570ce0828f81a2c1]);
      }

      ::org::hipparchus::Field FieldTuple::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_5b28be2d3632a5dc]));
      }

      FieldTuple FieldTuple::getPi() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_getPi_c6f44995fb640946]));
      }

      jdouble FieldTuple::getReal() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_dff5885c2c873297]);
      }

      jint FieldTuple::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
      }

      FieldTuple FieldTuple::hypot(const FieldTuple & a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_hypot_1d3be396d6aaf49a], a0.this$));
      }

      FieldTuple FieldTuple::linearCombination(const JArray< jdouble > & a0, const JArray< FieldTuple > & a1) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_linearCombination_5f11403806f495fb], a0.this$, a1.this$));
      }

      FieldTuple FieldTuple::linearCombination(const JArray< FieldTuple > & a0, const JArray< FieldTuple > & a1) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_linearCombination_b905f923649a6e2a], a0.this$, a1.this$));
      }

      FieldTuple FieldTuple::linearCombination(const FieldTuple & a0, const FieldTuple & a1, const FieldTuple & a2, const FieldTuple & a3) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_linearCombination_8aed902754f7deb3], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      FieldTuple FieldTuple::linearCombination(jdouble a0, const FieldTuple & a1, jdouble a2, const FieldTuple & a3) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_linearCombination_771c499b2e7405bc], a0, a1.this$, a2, a3.this$));
      }

      FieldTuple FieldTuple::linearCombination(const FieldTuple & a0, const FieldTuple & a1, const FieldTuple & a2, const FieldTuple & a3, const FieldTuple & a4, const FieldTuple & a5) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_linearCombination_93faa82c80f2f2d1], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
      }

      FieldTuple FieldTuple::linearCombination(jdouble a0, const FieldTuple & a1, jdouble a2, const FieldTuple & a3, jdouble a4, const FieldTuple & a5) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_linearCombination_1536b6a58fc7d47d], a0, a1.this$, a2, a3.this$, a4, a5.this$));
      }

      FieldTuple FieldTuple::linearCombination(const FieldTuple & a0, const FieldTuple & a1, const FieldTuple & a2, const FieldTuple & a3, const FieldTuple & a4, const FieldTuple & a5, const FieldTuple & a6, const FieldTuple & a7) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_linearCombination_e8eec0295bba03ca], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
      }

      FieldTuple FieldTuple::linearCombination(jdouble a0, const FieldTuple & a1, jdouble a2, const FieldTuple & a3, jdouble a4, const FieldTuple & a5, jdouble a6, const FieldTuple & a7) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_linearCombination_2a46ddadd8de494f], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
      }

      FieldTuple FieldTuple::log() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_log_c6f44995fb640946]));
      }

      FieldTuple FieldTuple::log10() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_log10_c6f44995fb640946]));
      }

      FieldTuple FieldTuple::log1p() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_log1p_c6f44995fb640946]));
      }

      FieldTuple FieldTuple::multiply(const FieldTuple & a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_multiply_1d3be396d6aaf49a], a0.this$));
      }

      FieldTuple FieldTuple::multiply(jdouble a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_multiply_9d00348fb504e444], a0));
      }

      FieldTuple FieldTuple::multiply(jint a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_multiply_a7c5131bda8e71dd], a0));
      }

      FieldTuple FieldTuple::negate() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_negate_c6f44995fb640946]));
      }

      FieldTuple FieldTuple::newInstance(jdouble a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_newInstance_9d00348fb504e444], a0));
      }

      FieldTuple FieldTuple::pow(const FieldTuple & a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_pow_1d3be396d6aaf49a], a0.this$));
      }

      FieldTuple FieldTuple::pow(jdouble a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_pow_9d00348fb504e444], a0));
      }

      FieldTuple FieldTuple::pow(jint a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_pow_a7c5131bda8e71dd], a0));
      }

      FieldTuple FieldTuple::reciprocal() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_reciprocal_c6f44995fb640946]));
      }

      FieldTuple FieldTuple::remainder(const FieldTuple & a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_remainder_1d3be396d6aaf49a], a0.this$));
      }

      FieldTuple FieldTuple::remainder(jdouble a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_remainder_9d00348fb504e444], a0));
      }

      FieldTuple FieldTuple::rint() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_rint_c6f44995fb640946]));
      }

      FieldTuple FieldTuple::rootN(jint a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_rootN_a7c5131bda8e71dd], a0));
      }

      FieldTuple FieldTuple::scalb(jint a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_scalb_a7c5131bda8e71dd], a0));
      }

      FieldTuple FieldTuple::sign() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_sign_c6f44995fb640946]));
      }

      FieldTuple FieldTuple::sin() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_sin_c6f44995fb640946]));
      }

      ::org::hipparchus::util::FieldSinCos FieldTuple::sinCos() const
      {
        return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_a447b7ca640e6b68]));
      }

      FieldTuple FieldTuple::sinh() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_sinh_c6f44995fb640946]));
      }

      ::org::hipparchus::util::FieldSinhCosh FieldTuple::sinhCosh() const
      {
        return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_eef733c8a50b276f]));
      }

      FieldTuple FieldTuple::sqrt() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_sqrt_c6f44995fb640946]));
      }

      FieldTuple FieldTuple::subtract(const FieldTuple & a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_subtract_1d3be396d6aaf49a], a0.this$));
      }

      FieldTuple FieldTuple::subtract(jdouble a0) const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_subtract_9d00348fb504e444], a0));
      }

      FieldTuple FieldTuple::tan() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_tan_c6f44995fb640946]));
      }

      FieldTuple FieldTuple::tanh() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_tanh_c6f44995fb640946]));
      }

      FieldTuple FieldTuple::toDegrees() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_toDegrees_c6f44995fb640946]));
      }

      FieldTuple FieldTuple::toRadians() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_toRadians_c6f44995fb640946]));
      }

      FieldTuple FieldTuple::ulp() const
      {
        return FieldTuple(env->callObjectMethod(this$, mids$[mid_ulp_c6f44995fb640946]));
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
      static PyObject *t_FieldTuple_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTuple_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTuple_of_(t_FieldTuple *self, PyObject *args);
      static int t_FieldTuple_init_(t_FieldTuple *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldTuple_abs(t_FieldTuple *self);
      static PyObject *t_FieldTuple_acos(t_FieldTuple *self);
      static PyObject *t_FieldTuple_acosh(t_FieldTuple *self);
      static PyObject *t_FieldTuple_add(t_FieldTuple *self, PyObject *args);
      static PyObject *t_FieldTuple_asin(t_FieldTuple *self);
      static PyObject *t_FieldTuple_asinh(t_FieldTuple *self);
      static PyObject *t_FieldTuple_atan(t_FieldTuple *self);
      static PyObject *t_FieldTuple_atan2(t_FieldTuple *self, PyObject *arg);
      static PyObject *t_FieldTuple_atanh(t_FieldTuple *self);
      static PyObject *t_FieldTuple_cbrt(t_FieldTuple *self);
      static PyObject *t_FieldTuple_ceil(t_FieldTuple *self);
      static PyObject *t_FieldTuple_copySign(t_FieldTuple *self, PyObject *args);
      static PyObject *t_FieldTuple_cos(t_FieldTuple *self);
      static PyObject *t_FieldTuple_cosh(t_FieldTuple *self);
      static PyObject *t_FieldTuple_divide(t_FieldTuple *self, PyObject *args);
      static PyObject *t_FieldTuple_equals(t_FieldTuple *self, PyObject *args);
      static PyObject *t_FieldTuple_exp(t_FieldTuple *self);
      static PyObject *t_FieldTuple_expm1(t_FieldTuple *self);
      static PyObject *t_FieldTuple_floor(t_FieldTuple *self);
      static PyObject *t_FieldTuple_getComponent(t_FieldTuple *self, PyObject *arg);
      static PyObject *t_FieldTuple_getComponents(t_FieldTuple *self);
      static PyObject *t_FieldTuple_getDimension(t_FieldTuple *self);
      static PyObject *t_FieldTuple_getField(t_FieldTuple *self);
      static PyObject *t_FieldTuple_getPi(t_FieldTuple *self);
      static PyObject *t_FieldTuple_getReal(t_FieldTuple *self);
      static PyObject *t_FieldTuple_hashCode(t_FieldTuple *self, PyObject *args);
      static PyObject *t_FieldTuple_hypot(t_FieldTuple *self, PyObject *arg);
      static PyObject *t_FieldTuple_linearCombination(t_FieldTuple *self, PyObject *args);
      static PyObject *t_FieldTuple_log(t_FieldTuple *self);
      static PyObject *t_FieldTuple_log10(t_FieldTuple *self);
      static PyObject *t_FieldTuple_log1p(t_FieldTuple *self);
      static PyObject *t_FieldTuple_multiply(t_FieldTuple *self, PyObject *args);
      static PyObject *t_FieldTuple_negate(t_FieldTuple *self);
      static PyObject *t_FieldTuple_newInstance(t_FieldTuple *self, PyObject *arg);
      static PyObject *t_FieldTuple_pow(t_FieldTuple *self, PyObject *args);
      static PyObject *t_FieldTuple_reciprocal(t_FieldTuple *self);
      static PyObject *t_FieldTuple_remainder(t_FieldTuple *self, PyObject *args);
      static PyObject *t_FieldTuple_rint(t_FieldTuple *self);
      static PyObject *t_FieldTuple_rootN(t_FieldTuple *self, PyObject *arg);
      static PyObject *t_FieldTuple_scalb(t_FieldTuple *self, PyObject *arg);
      static PyObject *t_FieldTuple_sign(t_FieldTuple *self);
      static PyObject *t_FieldTuple_sin(t_FieldTuple *self);
      static PyObject *t_FieldTuple_sinCos(t_FieldTuple *self);
      static PyObject *t_FieldTuple_sinh(t_FieldTuple *self);
      static PyObject *t_FieldTuple_sinhCosh(t_FieldTuple *self);
      static PyObject *t_FieldTuple_sqrt(t_FieldTuple *self);
      static PyObject *t_FieldTuple_subtract(t_FieldTuple *self, PyObject *args);
      static PyObject *t_FieldTuple_tan(t_FieldTuple *self);
      static PyObject *t_FieldTuple_tanh(t_FieldTuple *self);
      static PyObject *t_FieldTuple_toDegrees(t_FieldTuple *self);
      static PyObject *t_FieldTuple_toRadians(t_FieldTuple *self);
      static PyObject *t_FieldTuple_ulp(t_FieldTuple *self);
      static PyObject *t_FieldTuple_get__components(t_FieldTuple *self, void *data);
      static PyObject *t_FieldTuple_get__dimension(t_FieldTuple *self, void *data);
      static PyObject *t_FieldTuple_get__field(t_FieldTuple *self, void *data);
      static PyObject *t_FieldTuple_get__pi(t_FieldTuple *self, void *data);
      static PyObject *t_FieldTuple_get__real(t_FieldTuple *self, void *data);
      static PyObject *t_FieldTuple_get__parameters_(t_FieldTuple *self, void *data);
      static PyGetSetDef t_FieldTuple__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTuple, components),
        DECLARE_GET_FIELD(t_FieldTuple, dimension),
        DECLARE_GET_FIELD(t_FieldTuple, field),
        DECLARE_GET_FIELD(t_FieldTuple, pi),
        DECLARE_GET_FIELD(t_FieldTuple, real),
        DECLARE_GET_FIELD(t_FieldTuple, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTuple__methods_[] = {
        DECLARE_METHOD(t_FieldTuple, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTuple, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTuple, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTuple, abs, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, acos, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, acosh, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, add, METH_VARARGS),
        DECLARE_METHOD(t_FieldTuple, asin, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, asinh, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, atan, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, atan2, METH_O),
        DECLARE_METHOD(t_FieldTuple, atanh, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, cbrt, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, ceil, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, copySign, METH_VARARGS),
        DECLARE_METHOD(t_FieldTuple, cos, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, cosh, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, divide, METH_VARARGS),
        DECLARE_METHOD(t_FieldTuple, equals, METH_VARARGS),
        DECLARE_METHOD(t_FieldTuple, exp, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, expm1, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, floor, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, getComponent, METH_O),
        DECLARE_METHOD(t_FieldTuple, getComponents, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, getField, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, getPi, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, getReal, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_FieldTuple, hypot, METH_O),
        DECLARE_METHOD(t_FieldTuple, linearCombination, METH_VARARGS),
        DECLARE_METHOD(t_FieldTuple, log, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, log10, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, log1p, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, multiply, METH_VARARGS),
        DECLARE_METHOD(t_FieldTuple, negate, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, newInstance, METH_O),
        DECLARE_METHOD(t_FieldTuple, pow, METH_VARARGS),
        DECLARE_METHOD(t_FieldTuple, reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, remainder, METH_VARARGS),
        DECLARE_METHOD(t_FieldTuple, rint, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, rootN, METH_O),
        DECLARE_METHOD(t_FieldTuple, scalb, METH_O),
        DECLARE_METHOD(t_FieldTuple, sign, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, sin, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, sinCos, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, sinh, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, sinhCosh, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, sqrt, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, subtract, METH_VARARGS),
        DECLARE_METHOD(t_FieldTuple, tan, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, tanh, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, toDegrees, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, toRadians, METH_NOARGS),
        DECLARE_METHOD(t_FieldTuple, ulp, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTuple)[] = {
        { Py_tp_methods, t_FieldTuple__methods_ },
        { Py_tp_init, (void *) t_FieldTuple_init_ },
        { Py_tp_getset, t_FieldTuple__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTuple)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldTuple, t_FieldTuple, FieldTuple);
      PyObject *t_FieldTuple::wrap_Object(const FieldTuple& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldTuple::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTuple *self = (t_FieldTuple *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldTuple::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldTuple::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTuple *self = (t_FieldTuple *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldTuple::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTuple), &PY_TYPE_DEF(FieldTuple), module, "FieldTuple", 0);
      }

      void t_FieldTuple::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTuple), "class_", make_descriptor(FieldTuple::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTuple), "wrapfn_", make_descriptor(t_FieldTuple::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTuple), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldTuple_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTuple::initializeClass, 1)))
          return NULL;
        return t_FieldTuple::wrap_Object(FieldTuple(((t_FieldTuple *) arg)->object.this$));
      }
      static PyObject *t_FieldTuple_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTuple::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTuple_of_(t_FieldTuple *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldTuple_init_(t_FieldTuple *self, PyObject *args, PyObject *kwds)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        FieldTuple object((jobject) NULL);

        if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          INT_CALL(object = FieldTuple(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldTuple_abs(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.abs());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_acos(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.acos());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_acosh(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.acosh());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_add(t_FieldTuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldTuple a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "K", FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_FieldTuple_asin(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.asin());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_asinh(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.asinh());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_atan(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.atan());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_atan2(t_FieldTuple *self, PyObject *arg)
      {
        FieldTuple a0((jobject) NULL);
        PyTypeObject **p0;
        FieldTuple result((jobject) NULL);

        if (!parseArg(arg, "K", FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_))
        {
          OBJ_CALL(result = self->object.atan2(a0));
          return t_FieldTuple::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "atan2", arg);
        return NULL;
      }

      static PyObject *t_FieldTuple_atanh(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.atanh());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_cbrt(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.cbrt());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_ceil(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.ceil());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_copySign(t_FieldTuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldTuple a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "K", FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "copySign", args);
        return NULL;
      }

      static PyObject *t_FieldTuple_cos(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.cos());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_cosh(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.cosh());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_divide(t_FieldTuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldTuple a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "K", FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "divide", args);
        return NULL;
      }

      static PyObject *t_FieldTuple_equals(t_FieldTuple *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(FieldTuple), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_FieldTuple_exp(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.exp());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_expm1(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.expm1());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_floor(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.floor());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_getComponent(t_FieldTuple *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getComponent(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getComponent", arg);
        return NULL;
      }

      static PyObject *t_FieldTuple_getComponents(t_FieldTuple *self)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
        OBJ_CALL(result = self->object.getComponents());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }

      static PyObject *t_FieldTuple_getDimension(t_FieldTuple *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldTuple_getField(t_FieldTuple *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result);
      }

      static PyObject *t_FieldTuple_getPi(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.getPi());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_getReal(t_FieldTuple *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReal());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_FieldTuple_hashCode(t_FieldTuple *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(FieldTuple), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_FieldTuple_hypot(t_FieldTuple *self, PyObject *arg)
      {
        FieldTuple a0((jobject) NULL);
        PyTypeObject **p0;
        FieldTuple result((jobject) NULL);

        if (!parseArg(arg, "K", FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_))
        {
          OBJ_CALL(result = self->object.hypot(a0));
          return t_FieldTuple::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "hypot", arg);
        return NULL;
      }

      static PyObject *t_FieldTuple_linearCombination(t_FieldTuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< FieldTuple > a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "[D[K", FieldTuple::initializeClass, &a0, &a1, &p1, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            JArray< FieldTuple > a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< FieldTuple > a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "[K[K", FieldTuple::initializeClass, FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_, &a1, &p1, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 4:
          {
            FieldTuple a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTuple a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTuple a2((jobject) NULL);
            PyTypeObject **p2;
            FieldTuple a3((jobject) NULL);
            PyTypeObject **p3;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "KKKK", FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_, &a1, &p1, t_FieldTuple::parameters_, &a2, &p2, t_FieldTuple::parameters_, &a3, &p3, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldTuple a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldTuple a3((jobject) NULL);
            PyTypeObject **p3;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "DKDK", FieldTuple::initializeClass, FieldTuple::initializeClass, &a0, &a1, &p1, t_FieldTuple::parameters_, &a2, &a3, &p3, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 6:
          {
            FieldTuple a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTuple a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTuple a2((jobject) NULL);
            PyTypeObject **p2;
            FieldTuple a3((jobject) NULL);
            PyTypeObject **p3;
            FieldTuple a4((jobject) NULL);
            PyTypeObject **p4;
            FieldTuple a5((jobject) NULL);
            PyTypeObject **p5;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "KKKKKK", FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_, &a1, &p1, t_FieldTuple::parameters_, &a2, &p2, t_FieldTuple::parameters_, &a3, &p3, t_FieldTuple::parameters_, &a4, &p4, t_FieldTuple::parameters_, &a5, &p5, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldTuple a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldTuple a3((jobject) NULL);
            PyTypeObject **p3;
            jdouble a4;
            FieldTuple a5((jobject) NULL);
            PyTypeObject **p5;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "DKDKDK", FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, &a0, &a1, &p1, t_FieldTuple::parameters_, &a2, &a3, &p3, t_FieldTuple::parameters_, &a4, &a5, &p5, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 8:
          {
            FieldTuple a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTuple a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTuple a2((jobject) NULL);
            PyTypeObject **p2;
            FieldTuple a3((jobject) NULL);
            PyTypeObject **p3;
            FieldTuple a4((jobject) NULL);
            PyTypeObject **p4;
            FieldTuple a5((jobject) NULL);
            PyTypeObject **p5;
            FieldTuple a6((jobject) NULL);
            PyTypeObject **p6;
            FieldTuple a7((jobject) NULL);
            PyTypeObject **p7;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKK", FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_, &a1, &p1, t_FieldTuple::parameters_, &a2, &p2, t_FieldTuple::parameters_, &a3, &p3, t_FieldTuple::parameters_, &a4, &p4, t_FieldTuple::parameters_, &a5, &p5, t_FieldTuple::parameters_, &a6, &p6, t_FieldTuple::parameters_, &a7, &p7, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldTuple a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldTuple a3((jobject) NULL);
            PyTypeObject **p3;
            jdouble a4;
            FieldTuple a5((jobject) NULL);
            PyTypeObject **p5;
            jdouble a6;
            FieldTuple a7((jobject) NULL);
            PyTypeObject **p7;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "DKDKDKDK", FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, FieldTuple::initializeClass, &a0, &a1, &p1, t_FieldTuple::parameters_, &a2, &a3, &p3, t_FieldTuple::parameters_, &a4, &a5, &p5, t_FieldTuple::parameters_, &a6, &a7, &p7, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
        return NULL;
      }

      static PyObject *t_FieldTuple_log(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.log());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_log10(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.log10());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_log1p(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.log1p());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_multiply(t_FieldTuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldTuple a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "K", FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jint a0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_FieldTuple_negate(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_newInstance(t_FieldTuple *self, PyObject *arg)
      {
        jdouble a0;
        FieldTuple result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.newInstance(a0));
          return t_FieldTuple::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "newInstance", arg);
        return NULL;
      }

      static PyObject *t_FieldTuple_pow(t_FieldTuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldTuple a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "K", FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jint a0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pow", args);
        return NULL;
      }

      static PyObject *t_FieldTuple_reciprocal(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.reciprocal());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_remainder(t_FieldTuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldTuple a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "K", FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "remainder", args);
        return NULL;
      }

      static PyObject *t_FieldTuple_rint(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.rint());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_rootN(t_FieldTuple *self, PyObject *arg)
      {
        jint a0;
        FieldTuple result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.rootN(a0));
          return t_FieldTuple::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "rootN", arg);
        return NULL;
      }

      static PyObject *t_FieldTuple_scalb(t_FieldTuple *self, PyObject *arg)
      {
        jint a0;
        FieldTuple result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.scalb(a0));
          return t_FieldTuple::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "scalb", arg);
        return NULL;
      }

      static PyObject *t_FieldTuple_sign(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.sign());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_sin(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.sin());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_sinCos(t_FieldTuple *self)
      {
        ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
        OBJ_CALL(result = self->object.sinCos());
        return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result);
      }

      static PyObject *t_FieldTuple_sinh(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.sinh());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_sinhCosh(t_FieldTuple *self)
      {
        ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
        OBJ_CALL(result = self->object.sinhCosh());
        return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result);
      }

      static PyObject *t_FieldTuple_sqrt(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.sqrt());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_subtract(t_FieldTuple *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldTuple a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "K", FieldTuple::initializeClass, &a0, &p0, t_FieldTuple::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldTuple result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_FieldTuple::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_FieldTuple_tan(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.tan());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_tanh(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.tanh());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_toDegrees(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.toDegrees());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_toRadians(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.toRadians());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTuple_ulp(t_FieldTuple *self)
      {
        FieldTuple result((jobject) NULL);
        OBJ_CALL(result = self->object.ulp());
        return t_FieldTuple::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldTuple_get__parameters_(t_FieldTuple *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldTuple_get__components(t_FieldTuple *self, void *data)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
        OBJ_CALL(value = self->object.getComponents());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }

      static PyObject *t_FieldTuple_get__dimension(t_FieldTuple *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_FieldTuple_get__field(t_FieldTuple *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_FieldTuple_get__pi(t_FieldTuple *self, void *data)
      {
        FieldTuple value((jobject) NULL);
        OBJ_CALL(value = self->object.getPi());
        return t_FieldTuple::wrap_Object(value);
      }

      static PyObject *t_FieldTuple_get__real(t_FieldTuple *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReal());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/GaussIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/Pair.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *GaussIntegrator::class$ = NULL;
          jmethodID *GaussIntegrator::mids$ = NULL;
          bool GaussIntegrator::live$ = false;

          jclass GaussIntegrator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/GaussIntegrator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_3fca46bb93fd3e69] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/util/Pair;)V");
              mids$[mid_init$_e1f4b15468f5564a] = env->getMethodID(cls, "<init>", "([D[D)V");
              mids$[mid_getNumberOfPoints_570ce0828f81a2c1] = env->getMethodID(cls, "getNumberOfPoints", "()I");
              mids$[mid_getPoint_46f85b53d9aedd96] = env->getMethodID(cls, "getPoint", "(I)D");
              mids$[mid_getWeight_46f85b53d9aedd96] = env->getMethodID(cls, "getWeight", "(I)D");
              mids$[mid_integrate_c2aa72fb3bbda68c] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/analysis/UnivariateFunction;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GaussIntegrator::GaussIntegrator(const ::org::hipparchus::util::Pair & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3fca46bb93fd3e69, a0.this$)) {}

          GaussIntegrator::GaussIntegrator(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e1f4b15468f5564a, a0.this$, a1.this$)) {}

          jint GaussIntegrator::getNumberOfPoints() const
          {
            return env->callIntMethod(this$, mids$[mid_getNumberOfPoints_570ce0828f81a2c1]);
          }

          jdouble GaussIntegrator::getPoint(jint a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getPoint_46f85b53d9aedd96], a0);
          }

          jdouble GaussIntegrator::getWeight(jint a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getWeight_46f85b53d9aedd96], a0);
          }

          jdouble GaussIntegrator::integrate(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_integrate_c2aa72fb3bbda68c], a0.this$);
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
    namespace analysis {
      namespace integration {
        namespace gauss {
          static PyObject *t_GaussIntegrator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GaussIntegrator_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GaussIntegrator_init_(t_GaussIntegrator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GaussIntegrator_getNumberOfPoints(t_GaussIntegrator *self);
          static PyObject *t_GaussIntegrator_getPoint(t_GaussIntegrator *self, PyObject *arg);
          static PyObject *t_GaussIntegrator_getWeight(t_GaussIntegrator *self, PyObject *arg);
          static PyObject *t_GaussIntegrator_integrate(t_GaussIntegrator *self, PyObject *arg);
          static PyObject *t_GaussIntegrator_get__numberOfPoints(t_GaussIntegrator *self, void *data);
          static PyGetSetDef t_GaussIntegrator__fields_[] = {
            DECLARE_GET_FIELD(t_GaussIntegrator, numberOfPoints),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GaussIntegrator__methods_[] = {
            DECLARE_METHOD(t_GaussIntegrator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GaussIntegrator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GaussIntegrator, getNumberOfPoints, METH_NOARGS),
            DECLARE_METHOD(t_GaussIntegrator, getPoint, METH_O),
            DECLARE_METHOD(t_GaussIntegrator, getWeight, METH_O),
            DECLARE_METHOD(t_GaussIntegrator, integrate, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GaussIntegrator)[] = {
            { Py_tp_methods, t_GaussIntegrator__methods_ },
            { Py_tp_init, (void *) t_GaussIntegrator_init_ },
            { Py_tp_getset, t_GaussIntegrator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GaussIntegrator)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GaussIntegrator, t_GaussIntegrator, GaussIntegrator);

          void t_GaussIntegrator::install(PyObject *module)
          {
            installType(&PY_TYPE(GaussIntegrator), &PY_TYPE_DEF(GaussIntegrator), module, "GaussIntegrator", 0);
          }

          void t_GaussIntegrator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GaussIntegrator), "class_", make_descriptor(GaussIntegrator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GaussIntegrator), "wrapfn_", make_descriptor(t_GaussIntegrator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GaussIntegrator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GaussIntegrator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GaussIntegrator::initializeClass, 1)))
              return NULL;
            return t_GaussIntegrator::wrap_Object(GaussIntegrator(((t_GaussIntegrator *) arg)->object.this$));
          }
          static PyObject *t_GaussIntegrator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GaussIntegrator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GaussIntegrator_init_(t_GaussIntegrator *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::util::Pair a0((jobject) NULL);
                PyTypeObject **p0;
                GaussIntegrator object((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::util::Pair::initializeClass, &a0, &p0, ::org::hipparchus::util::t_Pair::parameters_))
                {
                  INT_CALL(object = GaussIntegrator(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                GaussIntegrator object((jobject) NULL);

                if (!parseArgs(args, "[D[D", &a0, &a1))
                {
                  INT_CALL(object = GaussIntegrator(a0, a1));
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

          static PyObject *t_GaussIntegrator_getNumberOfPoints(t_GaussIntegrator *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNumberOfPoints());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_GaussIntegrator_getPoint(t_GaussIntegrator *self, PyObject *arg)
          {
            jint a0;
            jdouble result;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getPoint(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getPoint", arg);
            return NULL;
          }

          static PyObject *t_GaussIntegrator_getWeight(t_GaussIntegrator *self, PyObject *arg)
          {
            jint a0;
            jdouble result;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getWeight(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getWeight", arg);
            return NULL;
          }

          static PyObject *t_GaussIntegrator_integrate(t_GaussIntegrator *self, PyObject *arg)
          {
            ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.integrate(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "integrate", arg);
            return NULL;
          }

          static PyObject *t_GaussIntegrator_get__numberOfPoints(t_GaussIntegrator *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNumberOfPoints());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/IAUPole.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *IAUPole::class$ = NULL;
      jmethodID *IAUPole::mids$ = NULL;
      bool IAUPole::live$ = false;

      jclass IAUPole::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/IAUPole");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getNode_24461752d0eea1e3] = env->getMethodID(cls, "getNode", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getNode_e81fa067750860a1] = env->getMethodID(cls, "getNode", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getPole_24461752d0eea1e3] = env->getMethodID(cls, "getPole", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getPole_e81fa067750860a1] = env->getMethodID(cls, "getPole", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getPrimeMeridianAngle_bf1d7732f1acb697] = env->getMethodID(cls, "getPrimeMeridianAngle", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getPrimeMeridianAngle_2a5f05be83ff251d] = env->getMethodID(cls, "getPrimeMeridianAngle", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D IAUPole::getNode(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNode_24461752d0eea1e3], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D IAUPole::getNode(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getNode_e81fa067750860a1], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D IAUPole::getPole(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPole_24461752d0eea1e3], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D IAUPole::getPole(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getPole_e81fa067750860a1], a0.this$));
      }

      jdouble IAUPole::getPrimeMeridianAngle(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPrimeMeridianAngle_bf1d7732f1acb697], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement IAUPole::getPrimeMeridianAngle(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPrimeMeridianAngle_2a5f05be83ff251d], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace bodies {
      static PyObject *t_IAUPole_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IAUPole_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IAUPole_getNode(t_IAUPole *self, PyObject *args);
      static PyObject *t_IAUPole_getPole(t_IAUPole *self, PyObject *args);
      static PyObject *t_IAUPole_getPrimeMeridianAngle(t_IAUPole *self, PyObject *args);

      static PyMethodDef t_IAUPole__methods_[] = {
        DECLARE_METHOD(t_IAUPole, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IAUPole, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IAUPole, getNode, METH_VARARGS),
        DECLARE_METHOD(t_IAUPole, getPole, METH_VARARGS),
        DECLARE_METHOD(t_IAUPole, getPrimeMeridianAngle, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IAUPole)[] = {
        { Py_tp_methods, t_IAUPole__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IAUPole)[] = {
        &PY_TYPE_DEF(::java::io::Serializable),
        NULL
      };

      DEFINE_TYPE(IAUPole, t_IAUPole, IAUPole);

      void t_IAUPole::install(PyObject *module)
      {
        installType(&PY_TYPE(IAUPole), &PY_TYPE_DEF(IAUPole), module, "IAUPole", 0);
      }

      void t_IAUPole::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IAUPole), "class_", make_descriptor(IAUPole::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IAUPole), "wrapfn_", make_descriptor(t_IAUPole::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IAUPole), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IAUPole_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IAUPole::initializeClass, 1)))
          return NULL;
        return t_IAUPole::wrap_Object(IAUPole(((t_IAUPole *) arg)->object.this$));
      }
      static PyObject *t_IAUPole_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IAUPole::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_IAUPole_getNode(t_IAUPole *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNode(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getNode(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getNode", args);
        return NULL;
      }

      static PyObject *t_IAUPole_getPole(t_IAUPole *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPole(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getPole(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPole", args);
        return NULL;
      }

      static PyObject *t_IAUPole_getPrimeMeridianAngle(t_IAUPole *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPrimeMeridianAngle(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getPrimeMeridianAngle(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPrimeMeridianAngle", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/BeidouCivilianNavigationMessage.h"
#include "org/orekit/gnss/Frequency.h"
#include "org/orekit/propagation/analytical/gnss/data/BeidouSatelliteType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *BeidouCivilianNavigationMessage::class$ = NULL;
            jmethodID *BeidouCivilianNavigationMessage::mids$ = NULL;
            bool BeidouCivilianNavigationMessage::live$ = false;
            ::java::lang::String *BeidouCivilianNavigationMessage::CNV1 = NULL;
            ::java::lang::String *BeidouCivilianNavigationMessage::CNV2 = NULL;
            ::java::lang::String *BeidouCivilianNavigationMessage::CNV3 = NULL;

            jclass BeidouCivilianNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/BeidouCivilianNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_c02d4d25db4aa7bf] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/Frequency;)V");
                mids$[mid_getADot_dff5885c2c873297] = env->getMethodID(cls, "getADot", "()D");
                mids$[mid_getDeltaN0Dot_dff5885c2c873297] = env->getMethodID(cls, "getDeltaN0Dot", "()D");
                mids$[mid_getHealth_570ce0828f81a2c1] = env->getMethodID(cls, "getHealth", "()I");
                mids$[mid_getIODC_570ce0828f81a2c1] = env->getMethodID(cls, "getIODC", "()I");
                mids$[mid_getIODE_570ce0828f81a2c1] = env->getMethodID(cls, "getIODE", "()I");
                mids$[mid_getIntegrityFlags_570ce0828f81a2c1] = env->getMethodID(cls, "getIntegrityFlags", "()I");
                mids$[mid_getIscB1CD_dff5885c2c873297] = env->getMethodID(cls, "getIscB1CD", "()D");
                mids$[mid_getIscB1CP_dff5885c2c873297] = env->getMethodID(cls, "getIscB1CP", "()D");
                mids$[mid_getIscB2AD_dff5885c2c873297] = env->getMethodID(cls, "getIscB2AD", "()D");
                mids$[mid_getSatelliteType_133274f115d01889] = env->getMethodID(cls, "getSatelliteType", "()Lorg/orekit/propagation/analytical/gnss/data/BeidouSatelliteType;");
                mids$[mid_getSignal_1257519d3e6e03ef] = env->getMethodID(cls, "getSignal", "()Lorg/orekit/gnss/Frequency;");
                mids$[mid_getSisaiOc1_570ce0828f81a2c1] = env->getMethodID(cls, "getSisaiOc1", "()I");
                mids$[mid_getSisaiOc2_570ce0828f81a2c1] = env->getMethodID(cls, "getSisaiOc2", "()I");
                mids$[mid_getSisaiOcb_570ce0828f81a2c1] = env->getMethodID(cls, "getSisaiOcb", "()I");
                mids$[mid_getSisaiOe_570ce0828f81a2c1] = env->getMethodID(cls, "getSisaiOe", "()I");
                mids$[mid_getSismai_570ce0828f81a2c1] = env->getMethodID(cls, "getSismai", "()I");
                mids$[mid_getTgdB1Cp_dff5885c2c873297] = env->getMethodID(cls, "getTgdB1Cp", "()D");
                mids$[mid_getTgdB2ap_dff5885c2c873297] = env->getMethodID(cls, "getTgdB2ap", "()D");
                mids$[mid_getTgdB2bI_dff5885c2c873297] = env->getMethodID(cls, "getTgdB2bI", "()D");
                mids$[mid_setADot_17db3a65980d3441] = env->getMethodID(cls, "setADot", "(D)V");
                mids$[mid_setDeltaN0Dot_17db3a65980d3441] = env->getMethodID(cls, "setDeltaN0Dot", "(D)V");
                mids$[mid_setHealth_99803b0791f320ff] = env->getMethodID(cls, "setHealth", "(I)V");
                mids$[mid_setIODC_99803b0791f320ff] = env->getMethodID(cls, "setIODC", "(I)V");
                mids$[mid_setIODE_99803b0791f320ff] = env->getMethodID(cls, "setIODE", "(I)V");
                mids$[mid_setIntegrityFlags_99803b0791f320ff] = env->getMethodID(cls, "setIntegrityFlags", "(I)V");
                mids$[mid_setIscB1CD_17db3a65980d3441] = env->getMethodID(cls, "setIscB1CD", "(D)V");
                mids$[mid_setIscB1CP_17db3a65980d3441] = env->getMethodID(cls, "setIscB1CP", "(D)V");
                mids$[mid_setIscB2AD_17db3a65980d3441] = env->getMethodID(cls, "setIscB2AD", "(D)V");
                mids$[mid_setSatelliteType_df86f241905e164c] = env->getMethodID(cls, "setSatelliteType", "(Lorg/orekit/propagation/analytical/gnss/data/BeidouSatelliteType;)V");
                mids$[mid_setSisaiOc1_99803b0791f320ff] = env->getMethodID(cls, "setSisaiOc1", "(I)V");
                mids$[mid_setSisaiOc2_99803b0791f320ff] = env->getMethodID(cls, "setSisaiOc2", "(I)V");
                mids$[mid_setSisaiOcb_99803b0791f320ff] = env->getMethodID(cls, "setSisaiOcb", "(I)V");
                mids$[mid_setSisaiOe_99803b0791f320ff] = env->getMethodID(cls, "setSisaiOe", "(I)V");
                mids$[mid_setSismai_99803b0791f320ff] = env->getMethodID(cls, "setSismai", "(I)V");
                mids$[mid_setTgdB1Cp_17db3a65980d3441] = env->getMethodID(cls, "setTgdB1Cp", "(D)V");
                mids$[mid_setTgdB2ap_17db3a65980d3441] = env->getMethodID(cls, "setTgdB2ap", "(D)V");
                mids$[mid_setTgdB2bI_17db3a65980d3441] = env->getMethodID(cls, "setTgdB2bI", "(D)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CNV1 = new ::java::lang::String(env->getStaticObjectField(cls, "CNV1", "Ljava/lang/String;"));
                CNV2 = new ::java::lang::String(env->getStaticObjectField(cls, "CNV2", "Ljava/lang/String;"));
                CNV3 = new ::java::lang::String(env->getStaticObjectField(cls, "CNV3", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            BeidouCivilianNavigationMessage::BeidouCivilianNavigationMessage(const ::org::orekit::gnss::Frequency & a0) : ::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage(env->newObject(initializeClass, &mids$, mid_init$_c02d4d25db4aa7bf, a0.this$)) {}

            jdouble BeidouCivilianNavigationMessage::getADot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getADot_dff5885c2c873297]);
            }

            jdouble BeidouCivilianNavigationMessage::getDeltaN0Dot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaN0Dot_dff5885c2c873297]);
            }

            jint BeidouCivilianNavigationMessage::getHealth() const
            {
              return env->callIntMethod(this$, mids$[mid_getHealth_570ce0828f81a2c1]);
            }

            jint BeidouCivilianNavigationMessage::getIODC() const
            {
              return env->callIntMethod(this$, mids$[mid_getIODC_570ce0828f81a2c1]);
            }

            jint BeidouCivilianNavigationMessage::getIODE() const
            {
              return env->callIntMethod(this$, mids$[mid_getIODE_570ce0828f81a2c1]);
            }

            jint BeidouCivilianNavigationMessage::getIntegrityFlags() const
            {
              return env->callIntMethod(this$, mids$[mid_getIntegrityFlags_570ce0828f81a2c1]);
            }

            jdouble BeidouCivilianNavigationMessage::getIscB1CD() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIscB1CD_dff5885c2c873297]);
            }

            jdouble BeidouCivilianNavigationMessage::getIscB1CP() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIscB1CP_dff5885c2c873297]);
            }

            jdouble BeidouCivilianNavigationMessage::getIscB2AD() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIscB2AD_dff5885c2c873297]);
            }

            ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType BeidouCivilianNavigationMessage::getSatelliteType() const
            {
              return ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType(env->callObjectMethod(this$, mids$[mid_getSatelliteType_133274f115d01889]));
            }

            ::org::orekit::gnss::Frequency BeidouCivilianNavigationMessage::getSignal() const
            {
              return ::org::orekit::gnss::Frequency(env->callObjectMethod(this$, mids$[mid_getSignal_1257519d3e6e03ef]));
            }

            jint BeidouCivilianNavigationMessage::getSisaiOc1() const
            {
              return env->callIntMethod(this$, mids$[mid_getSisaiOc1_570ce0828f81a2c1]);
            }

            jint BeidouCivilianNavigationMessage::getSisaiOc2() const
            {
              return env->callIntMethod(this$, mids$[mid_getSisaiOc2_570ce0828f81a2c1]);
            }

            jint BeidouCivilianNavigationMessage::getSisaiOcb() const
            {
              return env->callIntMethod(this$, mids$[mid_getSisaiOcb_570ce0828f81a2c1]);
            }

            jint BeidouCivilianNavigationMessage::getSisaiOe() const
            {
              return env->callIntMethod(this$, mids$[mid_getSisaiOe_570ce0828f81a2c1]);
            }

            jint BeidouCivilianNavigationMessage::getSismai() const
            {
              return env->callIntMethod(this$, mids$[mid_getSismai_570ce0828f81a2c1]);
            }

            jdouble BeidouCivilianNavigationMessage::getTgdB1Cp() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTgdB1Cp_dff5885c2c873297]);
            }

            jdouble BeidouCivilianNavigationMessage::getTgdB2ap() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTgdB2ap_dff5885c2c873297]);
            }

            jdouble BeidouCivilianNavigationMessage::getTgdB2bI() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTgdB2bI_dff5885c2c873297]);
            }

            void BeidouCivilianNavigationMessage::setADot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setADot_17db3a65980d3441], a0);
            }

            void BeidouCivilianNavigationMessage::setDeltaN0Dot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDeltaN0Dot_17db3a65980d3441], a0);
            }

            void BeidouCivilianNavigationMessage::setHealth(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHealth_99803b0791f320ff], a0);
            }

            void BeidouCivilianNavigationMessage::setIODC(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIODC_99803b0791f320ff], a0);
            }

            void BeidouCivilianNavigationMessage::setIODE(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIODE_99803b0791f320ff], a0);
            }

            void BeidouCivilianNavigationMessage::setIntegrityFlags(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIntegrityFlags_99803b0791f320ff], a0);
            }

            void BeidouCivilianNavigationMessage::setIscB1CD(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIscB1CD_17db3a65980d3441], a0);
            }

            void BeidouCivilianNavigationMessage::setIscB1CP(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIscB1CP_17db3a65980d3441], a0);
            }

            void BeidouCivilianNavigationMessage::setIscB2AD(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIscB2AD_17db3a65980d3441], a0);
            }

            void BeidouCivilianNavigationMessage::setSatelliteType(const ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSatelliteType_df86f241905e164c], a0.this$);
            }

            void BeidouCivilianNavigationMessage::setSisaiOc1(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSisaiOc1_99803b0791f320ff], a0);
            }

            void BeidouCivilianNavigationMessage::setSisaiOc2(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSisaiOc2_99803b0791f320ff], a0);
            }

            void BeidouCivilianNavigationMessage::setSisaiOcb(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSisaiOcb_99803b0791f320ff], a0);
            }

            void BeidouCivilianNavigationMessage::setSisaiOe(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSisaiOe_99803b0791f320ff], a0);
            }

            void BeidouCivilianNavigationMessage::setSismai(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSismai_99803b0791f320ff], a0);
            }

            void BeidouCivilianNavigationMessage::setTgdB1Cp(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTgdB1Cp_17db3a65980d3441], a0);
            }

            void BeidouCivilianNavigationMessage::setTgdB2ap(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTgdB2ap_17db3a65980d3441], a0);
            }

            void BeidouCivilianNavigationMessage::setTgdB2bI(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTgdB2bI_17db3a65980d3441], a0);
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
            static PyObject *t_BeidouCivilianNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_BeidouCivilianNavigationMessage_init_(t_BeidouCivilianNavigationMessage *self, PyObject *args, PyObject *kwds);
            static PyObject *t_BeidouCivilianNavigationMessage_getADot(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getDeltaN0Dot(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getHealth(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getIODC(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getIODE(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getIntegrityFlags(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getIscB1CD(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getIscB1CP(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getIscB2AD(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getSatelliteType(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getSignal(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getSisaiOc1(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getSisaiOc2(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getSisaiOcb(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getSisaiOe(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getSismai(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getTgdB1Cp(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getTgdB2ap(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getTgdB2bI(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_setADot(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setDeltaN0Dot(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setHealth(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setIODC(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setIODE(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setIntegrityFlags(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setIscB1CD(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setIscB1CP(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setIscB2AD(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setSatelliteType(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setSisaiOc1(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setSisaiOc2(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setSisaiOcb(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setSisaiOe(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setSismai(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setTgdB1Cp(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setTgdB2ap(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setTgdB2bI(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_get__aDot(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__aDot(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__deltaN0Dot(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__deltaN0Dot(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__health(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__health(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__iODC(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__iODC(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__iODE(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__iODE(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__integrityFlags(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__integrityFlags(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__iscB1CD(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__iscB1CD(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__iscB1CP(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__iscB1CP(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__iscB2AD(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__iscB2AD(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__satelliteType(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__satelliteType(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__signal(t_BeidouCivilianNavigationMessage *self, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__sisaiOc1(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__sisaiOc1(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__sisaiOc2(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__sisaiOc2(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__sisaiOcb(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__sisaiOcb(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__sisaiOe(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__sisaiOe(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__sismai(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__sismai(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__tgdB1Cp(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__tgdB1Cp(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__tgdB2ap(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__tgdB2ap(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__tgdB2bI(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__tgdB2bI(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyGetSetDef t_BeidouCivilianNavigationMessage__fields_[] = {
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, aDot),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, deltaN0Dot),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, health),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, iODC),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, iODE),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, integrityFlags),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, iscB1CD),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, iscB1CP),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, iscB2AD),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, satelliteType),
              DECLARE_GET_FIELD(t_BeidouCivilianNavigationMessage, signal),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, sisaiOc1),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, sisaiOc2),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, sisaiOcb),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, sisaiOe),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, sismai),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, tgdB1Cp),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, tgdB2ap),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, tgdB2bI),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_BeidouCivilianNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getADot, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getDeltaN0Dot, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getHealth, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getIODC, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getIODE, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getIntegrityFlags, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getIscB1CD, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getIscB1CP, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getIscB2AD, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getSatelliteType, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getSignal, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getSisaiOc1, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getSisaiOc2, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getSisaiOcb, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getSisaiOe, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getSismai, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getTgdB1Cp, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getTgdB2ap, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getTgdB2bI, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setADot, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setDeltaN0Dot, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setHealth, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setIODC, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setIODE, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setIntegrityFlags, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setIscB1CD, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setIscB1CP, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setIscB2AD, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setSatelliteType, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setSisaiOc1, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setSisaiOc2, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setSisaiOcb, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setSisaiOe, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setSismai, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setTgdB1Cp, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setTgdB2ap, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setTgdB2bI, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(BeidouCivilianNavigationMessage)[] = {
              { Py_tp_methods, t_BeidouCivilianNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_BeidouCivilianNavigationMessage_init_ },
              { Py_tp_getset, t_BeidouCivilianNavigationMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(BeidouCivilianNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage),
              NULL
            };

            DEFINE_TYPE(BeidouCivilianNavigationMessage, t_BeidouCivilianNavigationMessage, BeidouCivilianNavigationMessage);

            void t_BeidouCivilianNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(BeidouCivilianNavigationMessage), &PY_TYPE_DEF(BeidouCivilianNavigationMessage), module, "BeidouCivilianNavigationMessage", 0);
            }

            void t_BeidouCivilianNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouCivilianNavigationMessage), "class_", make_descriptor(BeidouCivilianNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouCivilianNavigationMessage), "wrapfn_", make_descriptor(t_BeidouCivilianNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouCivilianNavigationMessage), "boxfn_", make_descriptor(boxObject));
              env->getClass(BeidouCivilianNavigationMessage::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouCivilianNavigationMessage), "CNV1", make_descriptor(j2p(*BeidouCivilianNavigationMessage::CNV1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouCivilianNavigationMessage), "CNV2", make_descriptor(j2p(*BeidouCivilianNavigationMessage::CNV2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouCivilianNavigationMessage), "CNV3", make_descriptor(j2p(*BeidouCivilianNavigationMessage::CNV3)));
            }

            static PyObject *t_BeidouCivilianNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, BeidouCivilianNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_BeidouCivilianNavigationMessage::wrap_Object(BeidouCivilianNavigationMessage(((t_BeidouCivilianNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_BeidouCivilianNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, BeidouCivilianNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_BeidouCivilianNavigationMessage_init_(t_BeidouCivilianNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::gnss::Frequency a0((jobject) NULL);
              PyTypeObject **p0;
              BeidouCivilianNavigationMessage object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::gnss::Frequency::initializeClass, &a0, &p0, ::org::orekit::gnss::t_Frequency::parameters_))
              {
                INT_CALL(object = BeidouCivilianNavigationMessage(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getADot(t_BeidouCivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getADot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getDeltaN0Dot(t_BeidouCivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaN0Dot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getHealth(t_BeidouCivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getHealth());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getIODC(t_BeidouCivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIODC());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getIODE(t_BeidouCivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIODE());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getIntegrityFlags(t_BeidouCivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIntegrityFlags());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getIscB1CD(t_BeidouCivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIscB1CD());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getIscB1CP(t_BeidouCivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIscB1CP());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getIscB2AD(t_BeidouCivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIscB2AD());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getSatelliteType(t_BeidouCivilianNavigationMessage *self)
            {
              ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType result((jobject) NULL);
              OBJ_CALL(result = self->object.getSatelliteType());
              return ::org::orekit::propagation::analytical::gnss::data::t_BeidouSatelliteType::wrap_Object(result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getSignal(t_BeidouCivilianNavigationMessage *self)
            {
              ::org::orekit::gnss::Frequency result((jobject) NULL);
              OBJ_CALL(result = self->object.getSignal());
              return ::org::orekit::gnss::t_Frequency::wrap_Object(result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getSisaiOc1(t_BeidouCivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSisaiOc1());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getSisaiOc2(t_BeidouCivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSisaiOc2());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getSisaiOcb(t_BeidouCivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSisaiOcb());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getSisaiOe(t_BeidouCivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSisaiOe());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getSismai(t_BeidouCivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSismai());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getTgdB1Cp(t_BeidouCivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTgdB1Cp());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getTgdB2ap(t_BeidouCivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTgdB2ap());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getTgdB2bI(t_BeidouCivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTgdB2bI());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setADot(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
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

            static PyObject *t_BeidouCivilianNavigationMessage_setDeltaN0Dot(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
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

            static PyObject *t_BeidouCivilianNavigationMessage_setHealth(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setHealth(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHealth", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setIODC(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setIODC(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIODC", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setIODE(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setIODE(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIODE", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setIntegrityFlags(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setIntegrityFlags(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIntegrityFlags", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setIscB1CD(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIscB1CD(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIscB1CD", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setIscB1CP(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIscB1CP(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIscB1CP", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setIscB2AD(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIscB2AD(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIscB2AD", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setSatelliteType(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType::initializeClass, &a0, &p0, ::org::orekit::propagation::analytical::gnss::data::t_BeidouSatelliteType::parameters_))
              {
                OBJ_CALL(self->object.setSatelliteType(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSatelliteType", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setSisaiOc1(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSisaiOc1(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSisaiOc1", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setSisaiOc2(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSisaiOc2(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSisaiOc2", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setSisaiOcb(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSisaiOcb(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSisaiOcb", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setSisaiOe(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSisaiOe(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSisaiOe", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setSismai(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSismai(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSismai", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setTgdB1Cp(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTgdB1Cp(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTgdB1Cp", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setTgdB2ap(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTgdB2ap(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTgdB2ap", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setTgdB2bI(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTgdB2bI(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTgdB2bI", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__aDot(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getADot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__aDot(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
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

            static PyObject *t_BeidouCivilianNavigationMessage_get__deltaN0Dot(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaN0Dot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__deltaN0Dot(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
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

            static PyObject *t_BeidouCivilianNavigationMessage_get__health(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getHealth());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__health(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setHealth(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "health", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__iODC(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIODC());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__iODC(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setIODC(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iODC", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__iODE(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIODE());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__iODE(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setIODE(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iODE", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__integrityFlags(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIntegrityFlags());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__integrityFlags(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setIntegrityFlags(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "integrityFlags", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__iscB1CD(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIscB1CD());
              return PyFloat_FromDouble((double) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__iscB1CD(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIscB1CD(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iscB1CD", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__iscB1CP(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIscB1CP());
              return PyFloat_FromDouble((double) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__iscB1CP(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIscB1CP(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iscB1CP", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__iscB2AD(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIscB2AD());
              return PyFloat_FromDouble((double) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__iscB2AD(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIscB2AD(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iscB2AD", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__satelliteType(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType value((jobject) NULL);
              OBJ_CALL(value = self->object.getSatelliteType());
              return ::org::orekit::propagation::analytical::gnss::data::t_BeidouSatelliteType::wrap_Object(value);
            }
            static int t_BeidouCivilianNavigationMessage_set__satelliteType(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType::initializeClass, &value))
                {
                  INT_CALL(self->object.setSatelliteType(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "satelliteType", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__signal(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              ::org::orekit::gnss::Frequency value((jobject) NULL);
              OBJ_CALL(value = self->object.getSignal());
              return ::org::orekit::gnss::t_Frequency::wrap_Object(value);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__sisaiOc1(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSisaiOc1());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__sisaiOc1(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSisaiOc1(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sisaiOc1", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__sisaiOc2(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSisaiOc2());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__sisaiOc2(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSisaiOc2(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sisaiOc2", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__sisaiOcb(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSisaiOcb());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__sisaiOcb(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSisaiOcb(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sisaiOcb", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__sisaiOe(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSisaiOe());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__sisaiOe(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSisaiOe(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sisaiOe", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__sismai(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSismai());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__sismai(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSismai(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sismai", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__tgdB1Cp(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTgdB1Cp());
              return PyFloat_FromDouble((double) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__tgdB1Cp(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTgdB1Cp(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "tgdB1Cp", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__tgdB2ap(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTgdB2ap());
              return PyFloat_FromDouble((double) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__tgdB2ap(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTgdB2ap(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "tgdB2ap", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__tgdB2bI(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTgdB2bI());
              return PyFloat_FromDouble((double) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__tgdB2bI(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTgdB2bI(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "tgdB2bI", arg);
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
#include "org/orekit/models/earth/atmosphere/data/DtcDataLoader.h"
#include "java/text/ParseException.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "org/orekit/data/DataLoader.h"
#include "org/orekit/errors/OrekitException.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/util/SortedSet.h"
#include "org/orekit/models/earth/atmosphere/data/DtcDataLoader$LineParameters.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *DtcDataLoader::class$ = NULL;
            jmethodID *DtcDataLoader::mids$ = NULL;
            bool DtcDataLoader::live$ = false;

            jclass DtcDataLoader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/DtcDataLoader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_e93d77ad761aa1f2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScale;)V");
                mids$[mid_getDataSet_917725130bbb61f1] = env->getMethodID(cls, "getDataSet", "()Ljava/util/SortedSet;");
                mids$[mid_getMaxDate_85703d13e302437e] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getMinDate_85703d13e302437e] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_loadData_1815f85c118161ad] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
                mids$[mid_stillAcceptsData_b108b35ef48e27bd] = env->getMethodID(cls, "stillAcceptsData", "()Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DtcDataLoader::DtcDataLoader(const ::org::orekit::time::TimeScale & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e93d77ad761aa1f2, a0.this$)) {}

            ::java::util::SortedSet DtcDataLoader::getDataSet() const
            {
              return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_getDataSet_917725130bbb61f1]));
            }

            ::org::orekit::time::AbsoluteDate DtcDataLoader::getMaxDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_85703d13e302437e]));
            }

            ::org::orekit::time::AbsoluteDate DtcDataLoader::getMinDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_85703d13e302437e]));
            }

            void DtcDataLoader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_loadData_1815f85c118161ad], a0.this$, a1.this$);
            }

            jboolean DtcDataLoader::stillAcceptsData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_b108b35ef48e27bd]);
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
            static PyObject *t_DtcDataLoader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DtcDataLoader_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DtcDataLoader_init_(t_DtcDataLoader *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DtcDataLoader_getDataSet(t_DtcDataLoader *self);
            static PyObject *t_DtcDataLoader_getMaxDate(t_DtcDataLoader *self);
            static PyObject *t_DtcDataLoader_getMinDate(t_DtcDataLoader *self);
            static PyObject *t_DtcDataLoader_loadData(t_DtcDataLoader *self, PyObject *args);
            static PyObject *t_DtcDataLoader_stillAcceptsData(t_DtcDataLoader *self);
            static PyObject *t_DtcDataLoader_get__dataSet(t_DtcDataLoader *self, void *data);
            static PyObject *t_DtcDataLoader_get__maxDate(t_DtcDataLoader *self, void *data);
            static PyObject *t_DtcDataLoader_get__minDate(t_DtcDataLoader *self, void *data);
            static PyGetSetDef t_DtcDataLoader__fields_[] = {
              DECLARE_GET_FIELD(t_DtcDataLoader, dataSet),
              DECLARE_GET_FIELD(t_DtcDataLoader, maxDate),
              DECLARE_GET_FIELD(t_DtcDataLoader, minDate),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DtcDataLoader__methods_[] = {
              DECLARE_METHOD(t_DtcDataLoader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DtcDataLoader, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DtcDataLoader, getDataSet, METH_NOARGS),
              DECLARE_METHOD(t_DtcDataLoader, getMaxDate, METH_NOARGS),
              DECLARE_METHOD(t_DtcDataLoader, getMinDate, METH_NOARGS),
              DECLARE_METHOD(t_DtcDataLoader, loadData, METH_VARARGS),
              DECLARE_METHOD(t_DtcDataLoader, stillAcceptsData, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DtcDataLoader)[] = {
              { Py_tp_methods, t_DtcDataLoader__methods_ },
              { Py_tp_init, (void *) t_DtcDataLoader_init_ },
              { Py_tp_getset, t_DtcDataLoader__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DtcDataLoader)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(DtcDataLoader, t_DtcDataLoader, DtcDataLoader);

            void t_DtcDataLoader::install(PyObject *module)
            {
              installType(&PY_TYPE(DtcDataLoader), &PY_TYPE_DEF(DtcDataLoader), module, "DtcDataLoader", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(DtcDataLoader), "LineParameters", make_descriptor(&PY_TYPE_DEF(DtcDataLoader$LineParameters)));
            }

            void t_DtcDataLoader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DtcDataLoader), "class_", make_descriptor(DtcDataLoader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DtcDataLoader), "wrapfn_", make_descriptor(t_DtcDataLoader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DtcDataLoader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DtcDataLoader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DtcDataLoader::initializeClass, 1)))
                return NULL;
              return t_DtcDataLoader::wrap_Object(DtcDataLoader(((t_DtcDataLoader *) arg)->object.this$));
            }
            static PyObject *t_DtcDataLoader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DtcDataLoader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DtcDataLoader_init_(t_DtcDataLoader *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::time::TimeScale a0((jobject) NULL);
              DtcDataLoader object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
              {
                INT_CALL(object = DtcDataLoader(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_DtcDataLoader_getDataSet(t_DtcDataLoader *self)
            {
              ::java::util::SortedSet result((jobject) NULL);
              OBJ_CALL(result = self->object.getDataSet());
              return ::java::util::t_SortedSet::wrap_Object(result, ::org::orekit::models::earth::atmosphere::data::PY_TYPE(DtcDataLoader$LineParameters));
            }

            static PyObject *t_DtcDataLoader_getMaxDate(t_DtcDataLoader *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMaxDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_DtcDataLoader_getMinDate(t_DtcDataLoader *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMinDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_DtcDataLoader_loadData(t_DtcDataLoader *self, PyObject *args)
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

            static PyObject *t_DtcDataLoader_stillAcceptsData(t_DtcDataLoader *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.stillAcceptsData());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_DtcDataLoader_get__dataSet(t_DtcDataLoader *self, void *data)
            {
              ::java::util::SortedSet value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataSet());
              return ::java::util::t_SortedSet::wrap_Object(value);
            }

            static PyObject *t_DtcDataLoader_get__maxDate(t_DtcDataLoader *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMaxDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_DtcDataLoader_get__minDate(t_DtcDataLoader *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMinDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
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
#include "org/hipparchus/stat/descriptive/StatisticalSummary.h"
#include "java/lang/Class.h"
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
            mids$[mid_init$_7cf26d2aa668662f] = env->getMethodID(cls, "<init>", "(DDJDDD)V");
            mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getMax_dff5885c2c873297] = env->getMethodID(cls, "getMax", "()D");
            mids$[mid_getMean_dff5885c2c873297] = env->getMethodID(cls, "getMean", "()D");
            mids$[mid_getMin_dff5885c2c873297] = env->getMethodID(cls, "getMin", "()D");
            mids$[mid_getN_492808a339bfa35f] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getStandardDeviation_dff5885c2c873297] = env->getMethodID(cls, "getStandardDeviation", "()D");
            mids$[mid_getSum_dff5885c2c873297] = env->getMethodID(cls, "getSum", "()D");
            mids$[mid_getVariance_dff5885c2c873297] = env->getMethodID(cls, "getVariance", "()D");
            mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StatisticalSummaryValues::StatisticalSummaryValues(jdouble a0, jdouble a1, jlong a2, jdouble a3, jdouble a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7cf26d2aa668662f, a0, a1, a2, a3, a4, a5)) {}

        jboolean StatisticalSummaryValues::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
        }

        jdouble StatisticalSummaryValues::getMax() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMax_dff5885c2c873297]);
        }

        jdouble StatisticalSummaryValues::getMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMean_dff5885c2c873297]);
        }

        jdouble StatisticalSummaryValues::getMin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMin_dff5885c2c873297]);
        }

        jlong StatisticalSummaryValues::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_492808a339bfa35f]);
        }

        jdouble StatisticalSummaryValues::getStandardDeviation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStandardDeviation_dff5885c2c873297]);
        }

        jdouble StatisticalSummaryValues::getSum() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSum_dff5885c2c873297]);
        }

        jdouble StatisticalSummaryValues::getVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getVariance_dff5885c2c873297]);
        }

        jint StatisticalSummaryValues::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
        }

        ::java::lang::String StatisticalSummaryValues::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
#include "org/hipparchus/stat/inference/InferenceTestUtils.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/util/Collection.h"
#include "org/hipparchus/stat/descriptive/StatisticalSummary.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/distribution/RealDistribution.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *InferenceTestUtils::class$ = NULL;
        jmethodID *InferenceTestUtils::mids$ = NULL;
        bool InferenceTestUtils::live$ = false;

        jclass InferenceTestUtils::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/InferenceTestUtils");

            mids$ = new jmethodID[max_mid];
            mids$[mid_approximateP_7a492dc1edd19b72] = env->getStaticMethodID(cls, "approximateP", "(DII)D");
            mids$[mid_chiSquare_b90ef0962fb208c4] = env->getStaticMethodID(cls, "chiSquare", "([[J)D");
            mids$[mid_chiSquare_830834389f7bbf30] = env->getStaticMethodID(cls, "chiSquare", "([D[J)D");
            mids$[mid_chiSquareDataSetsComparison_d498b5cc5125fdcb] = env->getStaticMethodID(cls, "chiSquareDataSetsComparison", "([J[J)D");
            mids$[mid_chiSquareTest_b90ef0962fb208c4] = env->getStaticMethodID(cls, "chiSquareTest", "([[J)D");
            mids$[mid_chiSquareTest_830834389f7bbf30] = env->getStaticMethodID(cls, "chiSquareTest", "([D[J)D");
            mids$[mid_chiSquareTest_b37d0c4bca3b7c28] = env->getStaticMethodID(cls, "chiSquareTest", "([[JD)Z");
            mids$[mid_chiSquareTest_d2b6ad91862e3050] = env->getStaticMethodID(cls, "chiSquareTest", "([D[JD)Z");
            mids$[mid_chiSquareTestDataSetsComparison_d498b5cc5125fdcb] = env->getStaticMethodID(cls, "chiSquareTestDataSetsComparison", "([J[J)D");
            mids$[mid_chiSquareTestDataSetsComparison_9c57b9c7c3ffd7eb] = env->getStaticMethodID(cls, "chiSquareTestDataSetsComparison", "([J[JD)Z");
            mids$[mid_exactP_7cb31c5b5c5fe800] = env->getStaticMethodID(cls, "exactP", "(DIIZ)D");
            mids$[mid_g_830834389f7bbf30] = env->getStaticMethodID(cls, "g", "([D[J)D");
            mids$[mid_gDataSetsComparison_d498b5cc5125fdcb] = env->getStaticMethodID(cls, "gDataSetsComparison", "([J[J)D");
            mids$[mid_gTest_830834389f7bbf30] = env->getStaticMethodID(cls, "gTest", "([D[J)D");
            mids$[mid_gTest_d2b6ad91862e3050] = env->getStaticMethodID(cls, "gTest", "([D[JD)Z");
            mids$[mid_gTestDataSetsComparison_d498b5cc5125fdcb] = env->getStaticMethodID(cls, "gTestDataSetsComparison", "([J[J)D");
            mids$[mid_gTestDataSetsComparison_9c57b9c7c3ffd7eb] = env->getStaticMethodID(cls, "gTestDataSetsComparison", "([J[JD)Z");
            mids$[mid_gTestIntrinsic_830834389f7bbf30] = env->getStaticMethodID(cls, "gTestIntrinsic", "([D[J)D");
            mids$[mid_homoscedasticT_b561c6892e9976f8] = env->getStaticMethodID(cls, "homoscedasticT", "([D[D)D");
            mids$[mid_homoscedasticT_a6a21e289ffe5810] = env->getStaticMethodID(cls, "homoscedasticT", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_homoscedasticTTest_b561c6892e9976f8] = env->getStaticMethodID(cls, "homoscedasticTTest", "([D[D)D");
            mids$[mid_homoscedasticTTest_a6a21e289ffe5810] = env->getStaticMethodID(cls, "homoscedasticTTest", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_homoscedasticTTest_ed0fb6ee68c33cca] = env->getStaticMethodID(cls, "homoscedasticTTest", "([D[DD)Z");
            mids$[mid_kolmogorovSmirnovStatistic_b561c6892e9976f8] = env->getStaticMethodID(cls, "kolmogorovSmirnovStatistic", "([D[D)D");
            mids$[mid_kolmogorovSmirnovStatistic_c12bc4bf7b12344d] = env->getStaticMethodID(cls, "kolmogorovSmirnovStatistic", "(Lorg/hipparchus/distribution/RealDistribution;[D)D");
            mids$[mid_kolmogorovSmirnovTest_b561c6892e9976f8] = env->getStaticMethodID(cls, "kolmogorovSmirnovTest", "([D[D)D");
            mids$[mid_kolmogorovSmirnovTest_c12bc4bf7b12344d] = env->getStaticMethodID(cls, "kolmogorovSmirnovTest", "(Lorg/hipparchus/distribution/RealDistribution;[D)D");
            mids$[mid_kolmogorovSmirnovTest_c98cc76e0ea0aa4c] = env->getStaticMethodID(cls, "kolmogorovSmirnovTest", "([D[DZ)D");
            mids$[mid_kolmogorovSmirnovTest_9a58ab94185971d6] = env->getStaticMethodID(cls, "kolmogorovSmirnovTest", "(Lorg/hipparchus/distribution/RealDistribution;[DZ)D");
            mids$[mid_kolmogorovSmirnovTest_ad738ebacbd28f66] = env->getStaticMethodID(cls, "kolmogorovSmirnovTest", "(Lorg/hipparchus/distribution/RealDistribution;[DD)Z");
            mids$[mid_oneWayAnovaFValue_7076a671f4259cfe] = env->getStaticMethodID(cls, "oneWayAnovaFValue", "(Ljava/util/Collection;)D");
            mids$[mid_oneWayAnovaPValue_7076a671f4259cfe] = env->getStaticMethodID(cls, "oneWayAnovaPValue", "(Ljava/util/Collection;)D");
            mids$[mid_oneWayAnovaTest_c02897b462a4df37] = env->getStaticMethodID(cls, "oneWayAnovaTest", "(Ljava/util/Collection;D)Z");
            mids$[mid_pairedT_b561c6892e9976f8] = env->getStaticMethodID(cls, "pairedT", "([D[D)D");
            mids$[mid_pairedTTest_b561c6892e9976f8] = env->getStaticMethodID(cls, "pairedTTest", "([D[D)D");
            mids$[mid_pairedTTest_ed0fb6ee68c33cca] = env->getStaticMethodID(cls, "pairedTTest", "([D[DD)Z");
            mids$[mid_rootLogLikelihoodRatio_4a76c08ca752718a] = env->getStaticMethodID(cls, "rootLogLikelihoodRatio", "(JJJJ)D");
            mids$[mid_t_b561c6892e9976f8] = env->getStaticMethodID(cls, "t", "([D[D)D");
            mids$[mid_t_19285de97bbc7eea] = env->getStaticMethodID(cls, "t", "(D[D)D");
            mids$[mid_t_0951dfc4a2f63f29] = env->getStaticMethodID(cls, "t", "(DLorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_t_a6a21e289ffe5810] = env->getStaticMethodID(cls, "t", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_tTest_b561c6892e9976f8] = env->getStaticMethodID(cls, "tTest", "([D[D)D");
            mids$[mid_tTest_19285de97bbc7eea] = env->getStaticMethodID(cls, "tTest", "(D[D)D");
            mids$[mid_tTest_0951dfc4a2f63f29] = env->getStaticMethodID(cls, "tTest", "(DLorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_tTest_a6a21e289ffe5810] = env->getStaticMethodID(cls, "tTest", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_tTest_ed0fb6ee68c33cca] = env->getStaticMethodID(cls, "tTest", "([D[DD)Z");
            mids$[mid_tTest_97483ecb885b04db] = env->getStaticMethodID(cls, "tTest", "(D[DD)Z");
            mids$[mid_tTest_d69003036bf27add] = env->getStaticMethodID(cls, "tTest", "(DLorg/hipparchus/stat/descriptive/StatisticalSummary;D)Z");
            mids$[mid_tTest_92d1c61945f36e5b] = env->getStaticMethodID(cls, "tTest", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;D)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble InferenceTestUtils::approximateP(jdouble a0, jint a1, jint a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_approximateP_7a492dc1edd19b72], a0, a1, a2);
        }

        jdouble InferenceTestUtils::chiSquare(const JArray< JArray< jlong > > & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_chiSquare_b90ef0962fb208c4], a0.this$);
        }

        jdouble InferenceTestUtils::chiSquare(const JArray< jdouble > & a0, const JArray< jlong > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_chiSquare_830834389f7bbf30], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::chiSquareDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_chiSquareDataSetsComparison_d498b5cc5125fdcb], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::chiSquareTest(const JArray< JArray< jlong > > & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_chiSquareTest_b90ef0962fb208c4], a0.this$);
        }

        jdouble InferenceTestUtils::chiSquareTest(const JArray< jdouble > & a0, const JArray< jlong > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_chiSquareTest_830834389f7bbf30], a0.this$, a1.this$);
        }

        jboolean InferenceTestUtils::chiSquareTest(const JArray< JArray< jlong > > & a0, jdouble a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_chiSquareTest_b37d0c4bca3b7c28], a0.this$, a1);
        }

        jboolean InferenceTestUtils::chiSquareTest(const JArray< jdouble > & a0, const JArray< jlong > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_chiSquareTest_d2b6ad91862e3050], a0.this$, a1.this$, a2);
        }

        jdouble InferenceTestUtils::chiSquareTestDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_chiSquareTestDataSetsComparison_d498b5cc5125fdcb], a0.this$, a1.this$);
        }

        jboolean InferenceTestUtils::chiSquareTestDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_chiSquareTestDataSetsComparison_9c57b9c7c3ffd7eb], a0.this$, a1.this$, a2);
        }

        jdouble InferenceTestUtils::exactP(jdouble a0, jint a1, jint a2, jboolean a3)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_exactP_7cb31c5b5c5fe800], a0, a1, a2, a3);
        }

        jdouble InferenceTestUtils::g(const JArray< jdouble > & a0, const JArray< jlong > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_g_830834389f7bbf30], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::gDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_gDataSetsComparison_d498b5cc5125fdcb], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::gTest(const JArray< jdouble > & a0, const JArray< jlong > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_gTest_830834389f7bbf30], a0.this$, a1.this$);
        }

        jboolean InferenceTestUtils::gTest(const JArray< jdouble > & a0, const JArray< jlong > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_gTest_d2b6ad91862e3050], a0.this$, a1.this$, a2);
        }

        jdouble InferenceTestUtils::gTestDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_gTestDataSetsComparison_d498b5cc5125fdcb], a0.this$, a1.this$);
        }

        jboolean InferenceTestUtils::gTestDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_gTestDataSetsComparison_9c57b9c7c3ffd7eb], a0.this$, a1.this$, a2);
        }

        jdouble InferenceTestUtils::gTestIntrinsic(const JArray< jdouble > & a0, const JArray< jlong > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_gTestIntrinsic_830834389f7bbf30], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::homoscedasticT(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_homoscedasticT_b561c6892e9976f8], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::homoscedasticT(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_homoscedasticT_a6a21e289ffe5810], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::homoscedasticTTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_homoscedasticTTest_b561c6892e9976f8], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::homoscedasticTTest(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_homoscedasticTTest_a6a21e289ffe5810], a0.this$, a1.this$);
        }

        jboolean InferenceTestUtils::homoscedasticTTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_homoscedasticTTest_ed0fb6ee68c33cca], a0.this$, a1.this$, a2);
        }

        jdouble InferenceTestUtils::kolmogorovSmirnovStatistic(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_kolmogorovSmirnovStatistic_b561c6892e9976f8], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::kolmogorovSmirnovStatistic(const ::org::hipparchus::distribution::RealDistribution & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_kolmogorovSmirnovStatistic_c12bc4bf7b12344d], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::kolmogorovSmirnovTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_kolmogorovSmirnovTest_b561c6892e9976f8], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::kolmogorovSmirnovTest(const ::org::hipparchus::distribution::RealDistribution & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_kolmogorovSmirnovTest_c12bc4bf7b12344d], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::kolmogorovSmirnovTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jboolean a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_kolmogorovSmirnovTest_c98cc76e0ea0aa4c], a0.this$, a1.this$, a2);
        }

        jdouble InferenceTestUtils::kolmogorovSmirnovTest(const ::org::hipparchus::distribution::RealDistribution & a0, const JArray< jdouble > & a1, jboolean a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_kolmogorovSmirnovTest_9a58ab94185971d6], a0.this$, a1.this$, a2);
        }

        jboolean InferenceTestUtils::kolmogorovSmirnovTest(const ::org::hipparchus::distribution::RealDistribution & a0, const JArray< jdouble > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_kolmogorovSmirnovTest_ad738ebacbd28f66], a0.this$, a1.this$, a2);
        }

        jdouble InferenceTestUtils::oneWayAnovaFValue(const ::java::util::Collection & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_oneWayAnovaFValue_7076a671f4259cfe], a0.this$);
        }

        jdouble InferenceTestUtils::oneWayAnovaPValue(const ::java::util::Collection & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_oneWayAnovaPValue_7076a671f4259cfe], a0.this$);
        }

        jboolean InferenceTestUtils::oneWayAnovaTest(const ::java::util::Collection & a0, jdouble a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_oneWayAnovaTest_c02897b462a4df37], a0.this$, a1);
        }

        jdouble InferenceTestUtils::pairedT(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_pairedT_b561c6892e9976f8], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::pairedTTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_pairedTTest_b561c6892e9976f8], a0.this$, a1.this$);
        }

        jboolean InferenceTestUtils::pairedTTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_pairedTTest_ed0fb6ee68c33cca], a0.this$, a1.this$, a2);
        }

        jdouble InferenceTestUtils::rootLogLikelihoodRatio(jlong a0, jlong a1, jlong a2, jlong a3)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_rootLogLikelihoodRatio_4a76c08ca752718a], a0, a1, a2, a3);
        }

        jdouble InferenceTestUtils::t(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_t_b561c6892e9976f8], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::t(jdouble a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_t_19285de97bbc7eea], a0, a1.this$);
        }

        jdouble InferenceTestUtils::t(jdouble a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_t_0951dfc4a2f63f29], a0, a1.this$);
        }

        jdouble InferenceTestUtils::t(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_t_a6a21e289ffe5810], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::tTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_tTest_b561c6892e9976f8], a0.this$, a1.this$);
        }

        jdouble InferenceTestUtils::tTest(jdouble a0, const JArray< jdouble > & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_tTest_19285de97bbc7eea], a0, a1.this$);
        }

        jdouble InferenceTestUtils::tTest(jdouble a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_tTest_0951dfc4a2f63f29], a0, a1.this$);
        }

        jdouble InferenceTestUtils::tTest(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_tTest_a6a21e289ffe5810], a0.this$, a1.this$);
        }

        jboolean InferenceTestUtils::tTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_tTest_ed0fb6ee68c33cca], a0.this$, a1.this$, a2);
        }

        jboolean InferenceTestUtils::tTest(jdouble a0, const JArray< jdouble > & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_tTest_97483ecb885b04db], a0, a1.this$, a2);
        }

        jboolean InferenceTestUtils::tTest(jdouble a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_tTest_d69003036bf27add], a0, a1.this$, a2);
        }

        jboolean InferenceTestUtils::tTest(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_tTest_92d1c61945f36e5b], a0.this$, a1.this$, a2);
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
      namespace inference {
        static PyObject *t_InferenceTestUtils_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InferenceTestUtils_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InferenceTestUtils_approximateP(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_chiSquare(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_chiSquareDataSetsComparison(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_chiSquareTest(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_chiSquareTestDataSetsComparison(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_exactP(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_g(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_gDataSetsComparison(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_gTest(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_gTestDataSetsComparison(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_gTestIntrinsic(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_homoscedasticT(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_homoscedasticTTest(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_kolmogorovSmirnovStatistic(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_kolmogorovSmirnovTest(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_oneWayAnovaFValue(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InferenceTestUtils_oneWayAnovaPValue(PyTypeObject *type, PyObject *arg);
        static PyObject *t_InferenceTestUtils_oneWayAnovaTest(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_pairedT(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_pairedTTest(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_rootLogLikelihoodRatio(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_t(PyTypeObject *type, PyObject *args);
        static PyObject *t_InferenceTestUtils_tTest(PyTypeObject *type, PyObject *args);

        static PyMethodDef t_InferenceTestUtils__methods_[] = {
          DECLARE_METHOD(t_InferenceTestUtils, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, approximateP, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, chiSquare, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, chiSquareDataSetsComparison, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, chiSquareTest, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, chiSquareTestDataSetsComparison, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, exactP, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, g, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, gDataSetsComparison, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, gTest, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, gTestDataSetsComparison, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, gTestIntrinsic, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, homoscedasticT, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, homoscedasticTTest, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, kolmogorovSmirnovStatistic, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, kolmogorovSmirnovTest, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, oneWayAnovaFValue, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, oneWayAnovaPValue, METH_O | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, oneWayAnovaTest, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, pairedT, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, pairedTTest, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, rootLogLikelihoodRatio, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, t, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_InferenceTestUtils, tTest, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(InferenceTestUtils)[] = {
          { Py_tp_methods, t_InferenceTestUtils__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(InferenceTestUtils)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(InferenceTestUtils, t_InferenceTestUtils, InferenceTestUtils);

        void t_InferenceTestUtils::install(PyObject *module)
        {
          installType(&PY_TYPE(InferenceTestUtils), &PY_TYPE_DEF(InferenceTestUtils), module, "InferenceTestUtils", 0);
        }

        void t_InferenceTestUtils::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(InferenceTestUtils), "class_", make_descriptor(InferenceTestUtils::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InferenceTestUtils), "wrapfn_", make_descriptor(t_InferenceTestUtils::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(InferenceTestUtils), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_InferenceTestUtils_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, InferenceTestUtils::initializeClass, 1)))
            return NULL;
          return t_InferenceTestUtils::wrap_Object(InferenceTestUtils(((t_InferenceTestUtils *) arg)->object.this$));
        }
        static PyObject *t_InferenceTestUtils_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, InferenceTestUtils::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_InferenceTestUtils_approximateP(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          jint a1;
          jint a2;
          jdouble result;

          if (!parseArgs(args, "DII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::approximateP(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "approximateP", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_chiSquare(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< JArray< jlong > > a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[[J", &a0))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::chiSquare(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[J", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::chiSquare(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError(type, "chiSquare", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_chiSquareDataSetsComparison(PyTypeObject *type, PyObject *args)
        {
          JArray< jlong > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[J[J", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::chiSquareDataSetsComparison(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "chiSquareDataSetsComparison", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_chiSquareTest(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< JArray< jlong > > a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[[J", &a0))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::chiSquareTest(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[J", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::chiSquareTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              JArray< JArray< jlong > > a0((jobject) NULL);
              jdouble a1;
              jboolean result;

              if (!parseArgs(args, "[[JD", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::chiSquareTest(a0, a1));
                Py_RETURN_BOOL(result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[D[JD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::chiSquareTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError(type, "chiSquareTest", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_chiSquareTestDataSetsComparison(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jlong > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[J[J", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::chiSquareTestDataSetsComparison(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jlong > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[J[JD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::chiSquareTestDataSetsComparison(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError(type, "chiSquareTestDataSetsComparison", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_exactP(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          jint a1;
          jint a2;
          jboolean a3;
          jdouble result;

          if (!parseArgs(args, "DIIZ", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::exactP(a0, a1, a2, a3));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "exactP", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_g(PyTypeObject *type, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[J", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::g(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "g", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_gDataSetsComparison(PyTypeObject *type, PyObject *args)
        {
          JArray< jlong > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[J[J", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::gDataSetsComparison(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "gDataSetsComparison", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_gTest(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[J", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::gTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[D[JD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::gTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError(type, "gTest", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_gTestDataSetsComparison(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jlong > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[J[J", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::gTestDataSetsComparison(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jlong > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[J[JD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::gTestDataSetsComparison(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError(type, "gTestDataSetsComparison", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_gTestIntrinsic(PyTypeObject *type, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[J", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::gTestIntrinsic(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "gTestIntrinsic", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_homoscedasticT(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::homoscedasticT(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "kk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::homoscedasticT(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError(type, "homoscedasticT", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_homoscedasticTTest(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::homoscedasticTTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "kk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::homoscedasticTTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::homoscedasticTTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError(type, "homoscedasticTTest", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_kolmogorovSmirnovStatistic(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::kolmogorovSmirnovStatistic(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::distribution::RealDistribution a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k[D", ::org::hipparchus::distribution::RealDistribution::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::kolmogorovSmirnovStatistic(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError(type, "kolmogorovSmirnovStatistic", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_kolmogorovSmirnovTest(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::kolmogorovSmirnovTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::distribution::RealDistribution a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k[D", ::org::hipparchus::distribution::RealDistribution::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::kolmogorovSmirnovTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jboolean a2;
              jdouble result;

              if (!parseArgs(args, "[D[DZ", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::kolmogorovSmirnovTest(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::distribution::RealDistribution a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jboolean a2;
              jdouble result;

              if (!parseArgs(args, "k[DZ", ::org::hipparchus::distribution::RealDistribution::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::kolmogorovSmirnovTest(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::distribution::RealDistribution a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "k[DD", ::org::hipparchus::distribution::RealDistribution::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::kolmogorovSmirnovTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError(type, "kolmogorovSmirnovTest", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_oneWayAnovaFValue(PyTypeObject *type, PyObject *arg)
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble result;

          if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::oneWayAnovaFValue(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "oneWayAnovaFValue", arg);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_oneWayAnovaPValue(PyTypeObject *type, PyObject *arg)
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble result;

          if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::oneWayAnovaPValue(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "oneWayAnovaPValue", arg);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_oneWayAnovaTest(PyTypeObject *type, PyObject *args)
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble a1;
          jboolean result;

          if (!parseArgs(args, "KD", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::oneWayAnovaTest(a0, a1));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError(type, "oneWayAnovaTest", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_pairedT(PyTypeObject *type, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::pairedT(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "pairedT", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_pairedTTest(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::pairedTTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::pairedTTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError(type, "pairedTTest", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_rootLogLikelihoodRatio(PyTypeObject *type, PyObject *args)
        {
          jlong a0;
          jlong a1;
          jlong a2;
          jlong a3;
          jdouble result;

          if (!parseArgs(args, "JJJJ", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::rootLogLikelihoodRatio(a0, a1, a2, a3));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "rootLogLikelihoodRatio", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_t(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::t(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "D[D", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::t(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "Dk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::t(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "kk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::t(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError(type, "t", args);
          return NULL;
        }

        static PyObject *t_InferenceTestUtils_tTest(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::tTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "D[D", &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::tTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "Dk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::tTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "kk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::tTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::tTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "D[DD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::tTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
            {
              jdouble a0;
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "DkD", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::tTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "kkD", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::inference::InferenceTestUtils::tTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError(type, "tTest", args);
          return NULL;
        }
      }
    }
  }
}
