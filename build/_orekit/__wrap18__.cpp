#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PythonStreamOpener.h"
#include "java/io/IOException.h"
#include "java/lang/Throwable.h"
#include "java/io/InputStream.h"
#include "org/orekit/data/DataSource$StreamOpener.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PythonStreamOpener::class$ = NULL;
      jmethodID *PythonStreamOpener::mids$ = NULL;
      bool PythonStreamOpener::live$ = false;

      jclass PythonStreamOpener::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PythonStreamOpener");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_openOnce_af9d97da329e95d9] = env->getMethodID(cls, "openOnce", "()Ljava/io/InputStream;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonStreamOpener::PythonStreamOpener() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonStreamOpener::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonStreamOpener::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonStreamOpener::pythonExtension(jlong a0) const
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
      static PyObject *t_PythonStreamOpener_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonStreamOpener_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonStreamOpener_init_(t_PythonStreamOpener *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonStreamOpener_finalize(t_PythonStreamOpener *self);
      static PyObject *t_PythonStreamOpener_pythonExtension(t_PythonStreamOpener *self, PyObject *args);
      static jobject JNICALL t_PythonStreamOpener_openOnce0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonStreamOpener_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonStreamOpener_get__self(t_PythonStreamOpener *self, void *data);
      static PyGetSetDef t_PythonStreamOpener__fields_[] = {
        DECLARE_GET_FIELD(t_PythonStreamOpener, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonStreamOpener__methods_[] = {
        DECLARE_METHOD(t_PythonStreamOpener, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonStreamOpener, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonStreamOpener, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonStreamOpener, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonStreamOpener)[] = {
        { Py_tp_methods, t_PythonStreamOpener__methods_ },
        { Py_tp_init, (void *) t_PythonStreamOpener_init_ },
        { Py_tp_getset, t_PythonStreamOpener__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonStreamOpener)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonStreamOpener, t_PythonStreamOpener, PythonStreamOpener);

      void t_PythonStreamOpener::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonStreamOpener), &PY_TYPE_DEF(PythonStreamOpener), module, "PythonStreamOpener", 1);
      }

      void t_PythonStreamOpener::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStreamOpener), "class_", make_descriptor(PythonStreamOpener::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStreamOpener), "wrapfn_", make_descriptor(t_PythonStreamOpener::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStreamOpener), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonStreamOpener::initializeClass);
        JNINativeMethod methods[] = {
          { "openOnce", "()Ljava/io/InputStream;", (void *) t_PythonStreamOpener_openOnce0 },
          { "pythonDecRef", "()V", (void *) t_PythonStreamOpener_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonStreamOpener_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonStreamOpener::initializeClass, 1)))
          return NULL;
        return t_PythonStreamOpener::wrap_Object(PythonStreamOpener(((t_PythonStreamOpener *) arg)->object.this$));
      }
      static PyObject *t_PythonStreamOpener_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonStreamOpener::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonStreamOpener_init_(t_PythonStreamOpener *self, PyObject *args, PyObject *kwds)
      {
        PythonStreamOpener object((jobject) NULL);

        INT_CALL(object = PythonStreamOpener());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonStreamOpener_finalize(t_PythonStreamOpener *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonStreamOpener_pythonExtension(t_PythonStreamOpener *self, PyObject *args)
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

      static jobject JNICALL t_PythonStreamOpener_openOnce0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStreamOpener::mids$[PythonStreamOpener::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::io::InputStream value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "openOnce", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::io::InputStream::initializeClass, &value))
        {
          throwTypeError("openOnce", result);
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

      static void JNICALL t_PythonStreamOpener_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStreamOpener::mids$[PythonStreamOpener::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonStreamOpener::mids$[PythonStreamOpener::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonStreamOpener_get__self(t_PythonStreamOpener *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/AttitudeType.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeType.h"
#include "java/lang/String.h"
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
                mids$[mid_build_b0e32e6dddc8fbd7] = env->getMethodID(cls, "build", "(ZZLorg/hipparchus/geometry/euclidean/threed/RotationOrder;ZLorg/orekit/time/AbsoluteDate;[D)Lorg/orekit/utils/TimeStampedAngularCoordinates;");
                mids$[mid_createDataFields_0824da81bd406675] = env->getMethodID(cls, "createDataFields", "(ZZLorg/hipparchus/geometry/euclidean/threed/RotationOrder;ZLorg/orekit/utils/TimeStampedAngularCoordinates;)[Ljava/lang/String;");
                mids$[mid_generateData_79347019e65030e1] = env->getMethodID(cls, "generateData", "(ZZLorg/hipparchus/geometry/euclidean/threed/RotationOrder;ZLorg/orekit/utils/TimeStampedAngularCoordinates;)[D");
                mids$[mid_getAngularDerivativesFilter_410860c8cd87dc25] = env->getMethodID(cls, "getAngularDerivativesFilter", "()Lorg/orekit/utils/AngularDerivativesFilter;");
                mids$[mid_getName_e3ac8af686594d08] = env->getMethodID(cls, "getName", "(D)Ljava/lang/String;");
                mids$[mid_parse_620904f1a5e16ef4] = env->getMethodID(cls, "parse", "(ZZLorg/hipparchus/geometry/euclidean/threed/RotationOrder;ZLorg/orekit/files/ccsds/utils/ContextBinding;[Ljava/lang/String;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");
                mids$[mid_parseType_e3a89303af880502] = env->getStaticMethodID(cls, "parseType", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;");
                mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
                mids$[mid_valueOf_e3a89303af880502] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;");
                mids$[mid_values_1e48a216b06fc34e] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;");

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
              return ::org::orekit::utils::TimeStampedAngularCoordinates(env->callObjectMethod(this$, mids$[mid_build_b0e32e6dddc8fbd7], a0, a1, a2.this$, a3, a4.this$, a5.this$));
            }

            JArray< ::java::lang::String > AttitudeType::createDataFields(jboolean a0, jboolean a1, const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a2, jboolean a3, const ::org::orekit::utils::TimeStampedAngularCoordinates & a4) const
            {
              return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_createDataFields_0824da81bd406675], a0, a1, a2.this$, a3, a4.this$));
            }

            JArray< jdouble > AttitudeType::generateData(jboolean a0, jboolean a1, const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a2, jboolean a3, const ::org::orekit::utils::TimeStampedAngularCoordinates & a4) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_generateData_79347019e65030e1], a0, a1, a2.this$, a3, a4.this$));
            }

            ::org::orekit::utils::AngularDerivativesFilter AttitudeType::getAngularDerivativesFilter() const
            {
              return ::org::orekit::utils::AngularDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAngularDerivativesFilter_410860c8cd87dc25]));
            }

            ::java::lang::String AttitudeType::getName(jdouble a0) const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_e3ac8af686594d08], a0));
            }

            ::org::orekit::utils::TimeStampedAngularCoordinates AttitudeType::parse(jboolean a0, jboolean a1, const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a2, jboolean a3, const ::org::orekit::files::ccsds::utils::ContextBinding & a4, const JArray< ::java::lang::String > & a5) const
            {
              return ::org::orekit::utils::TimeStampedAngularCoordinates(env->callObjectMethod(this$, mids$[mid_parse_620904f1a5e16ef4], a0, a1, a2.this$, a3, a4.this$, a5.this$));
            }

            AttitudeType AttitudeType::parseType(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return AttitudeType(env->callStaticObjectMethod(cls, mids$[mid_parseType_e3a89303af880502], a0.this$));
            }

            ::java::lang::String AttitudeType::toString() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
            }

            AttitudeType AttitudeType::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return AttitudeType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e3a89303af880502], a0.this$));
            }

            JArray< AttitudeType > AttitudeType::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< AttitudeType >(env->callStaticObjectMethod(cls, mids$[mid_values_1e48a216b06fc34e]));
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
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTTesseralContext.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *FieldDSSTTesseralContext::class$ = NULL;
            jmethodID *FieldDSSTTesseralContext::mids$ = NULL;
            bool FieldDSSTTesseralContext::live$ = false;

            jclass FieldDSSTTesseralContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTTesseralContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getAx2oA_08d37e3f77b7239d] = env->getMethodID(cls, "getAx2oA", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBoA_08d37e3f77b7239d] = env->getMethodID(cls, "getBoA", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBoABpo_08d37e3f77b7239d] = env->getMethodID(cls, "getBoABpo", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getChi_08d37e3f77b7239d] = env->getMethodID(cls, "getChi", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getChi2_08d37e3f77b7239d] = env->getMethodID(cls, "getChi2", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getCo2AB_08d37e3f77b7239d] = env->getMethodID(cls, "getCo2AB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getE2_08d37e3f77b7239d] = env->getMethodID(cls, "getE2", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanMotion_08d37e3f77b7239d] = env->getMethodID(cls, "getMeanMotion", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMoa_08d37e3f77b7239d] = env->getMethodID(cls, "getMoa", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOoAB_08d37e3f77b7239d] = env->getMethodID(cls, "getOoAB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOrbitPeriod_08d37e3f77b7239d] = env->getMethodID(cls, "getOrbitPeriod", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getRatio_08d37e3f77b7239d] = env->getMethodID(cls, "getRatio", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getRoa_08d37e3f77b7239d] = env->getMethodID(cls, "getRoa", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getTheta_08d37e3f77b7239d] = env->getMethodID(cls, "getTheta", "()Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getAx2oA() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAx2oA_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getBoA() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBoA_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getBoABpo() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBoABpo_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getChi() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getChi_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getChi2() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getChi2_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getCo2AB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCo2AB_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getE2() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getE2_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getMeanMotion() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanMotion_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getMoa() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMoa_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getOoAB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOoAB_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getOrbitPeriod() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOrbitPeriod_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getRatio() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRatio_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getRoa() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRoa_08d37e3f77b7239d]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getTheta() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getTheta_08d37e3f77b7239d]));
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
            static PyObject *t_FieldDSSTTesseralContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTTesseralContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTTesseralContext_of_(t_FieldDSSTTesseralContext *self, PyObject *args);
            static PyObject *t_FieldDSSTTesseralContext_getAx2oA(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getBoA(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getBoABpo(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getChi(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getChi2(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getCo2AB(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getE2(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getMeanMotion(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getMoa(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getOoAB(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getOrbitPeriod(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getRatio(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getRoa(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getTheta(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_get__ax2oA(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__boA(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__boABpo(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__chi(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__chi2(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__co2AB(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__e2(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__meanMotion(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__moa(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__ooAB(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__orbitPeriod(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__ratio(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__roa(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__theta(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__parameters_(t_FieldDSSTTesseralContext *self, void *data);
            static PyGetSetDef t_FieldDSSTTesseralContext__fields_[] = {
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, ax2oA),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, boA),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, boABpo),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, chi),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, chi2),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, co2AB),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, e2),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, meanMotion),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, moa),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, ooAB),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, orbitPeriod),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, ratio),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, roa),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, theta),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldDSSTTesseralContext__methods_[] = {
              DECLARE_METHOD(t_FieldDSSTTesseralContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getAx2oA, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getBoA, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getBoABpo, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getChi, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getChi2, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getCo2AB, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getE2, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getMoa, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getOoAB, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getOrbitPeriod, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getRatio, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getRoa, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getTheta, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldDSSTTesseralContext)[] = {
              { Py_tp_methods, t_FieldDSSTTesseralContext__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_FieldDSSTTesseralContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldDSSTTesseralContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext),
              NULL
            };

            DEFINE_TYPE(FieldDSSTTesseralContext, t_FieldDSSTTesseralContext, FieldDSSTTesseralContext);
            PyObject *t_FieldDSSTTesseralContext::wrap_Object(const FieldDSSTTesseralContext& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTTesseralContext::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTTesseralContext *self = (t_FieldDSSTTesseralContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldDSSTTesseralContext::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTTesseralContext::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTTesseralContext *self = (t_FieldDSSTTesseralContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldDSSTTesseralContext::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldDSSTTesseralContext), &PY_TYPE_DEF(FieldDSSTTesseralContext), module, "FieldDSSTTesseralContext", 0);
            }

            void t_FieldDSSTTesseralContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTTesseralContext), "class_", make_descriptor(FieldDSSTTesseralContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTTesseralContext), "wrapfn_", make_descriptor(t_FieldDSSTTesseralContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTTesseralContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldDSSTTesseralContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldDSSTTesseralContext::initializeClass, 1)))
                return NULL;
              return t_FieldDSSTTesseralContext::wrap_Object(FieldDSSTTesseralContext(((t_FieldDSSTTesseralContext *) arg)->object.this$));
            }
            static PyObject *t_FieldDSSTTesseralContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldDSSTTesseralContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldDSSTTesseralContext_of_(t_FieldDSSTTesseralContext *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_FieldDSSTTesseralContext_getAx2oA(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getAx2oA());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getBoA(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBoA());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getBoABpo(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBoABpo());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getChi(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getChi());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getChi2(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getChi2());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getCo2AB(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getCo2AB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getE2(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getE2());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getMeanMotion(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMeanMotion());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getMoa(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMoa());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getOoAB(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getOoAB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getOrbitPeriod(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getOrbitPeriod());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getRatio(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getRatio());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getRoa(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getRoa());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getTheta(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getTheta());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
            static PyObject *t_FieldDSSTTesseralContext_get__parameters_(t_FieldDSSTTesseralContext *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_FieldDSSTTesseralContext_get__ax2oA(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getAx2oA());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__boA(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBoA());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__boABpo(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBoABpo());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__chi(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getChi());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__chi2(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getChi2());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__co2AB(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getCo2AB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__e2(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getE2());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__meanMotion(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMeanMotion());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__moa(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMoa());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__ooAB(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getOoAB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__orbitPeriod(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getOrbitPeriod());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__ratio(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getRatio());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__roa(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getRoa());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__theta(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getTheta());
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
#include "org/orekit/rugged/raster/TileFactory.h"
#include "org/orekit/rugged/raster/Tile.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        ::java::lang::Class *TileFactory::class$ = NULL;
        jmethodID *TileFactory::mids$ = NULL;
        bool TileFactory::live$ = false;

        jclass TileFactory::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/raster/TileFactory");

            mids$ = new jmethodID[max_mid];
            mids$[mid_createTile_d40b50c92d1487cb] = env->getMethodID(cls, "createTile", "()Lorg/orekit/rugged/raster/Tile;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::rugged::raster::Tile TileFactory::createTile() const
        {
          return ::org::orekit::rugged::raster::Tile(env->callObjectMethod(this$, mids$[mid_createTile_d40b50c92d1487cb]));
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
        static PyObject *t_TileFactory_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TileFactory_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TileFactory_of_(t_TileFactory *self, PyObject *args);
        static PyObject *t_TileFactory_createTile(t_TileFactory *self);
        static PyObject *t_TileFactory_get__parameters_(t_TileFactory *self, void *data);
        static PyGetSetDef t_TileFactory__fields_[] = {
          DECLARE_GET_FIELD(t_TileFactory, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TileFactory__methods_[] = {
          DECLARE_METHOD(t_TileFactory, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TileFactory, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TileFactory, of_, METH_VARARGS),
          DECLARE_METHOD(t_TileFactory, createTile, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TileFactory)[] = {
          { Py_tp_methods, t_TileFactory__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_TileFactory__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TileFactory)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TileFactory, t_TileFactory, TileFactory);
        PyObject *t_TileFactory::wrap_Object(const TileFactory& object, PyTypeObject *p0)
        {
          PyObject *obj = t_TileFactory::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_TileFactory *self = (t_TileFactory *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_TileFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_TileFactory::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_TileFactory *self = (t_TileFactory *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_TileFactory::install(PyObject *module)
        {
          installType(&PY_TYPE(TileFactory), &PY_TYPE_DEF(TileFactory), module, "TileFactory", 0);
        }

        void t_TileFactory::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TileFactory), "class_", make_descriptor(TileFactory::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TileFactory), "wrapfn_", make_descriptor(t_TileFactory::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TileFactory), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TileFactory_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TileFactory::initializeClass, 1)))
            return NULL;
          return t_TileFactory::wrap_Object(TileFactory(((t_TileFactory *) arg)->object.this$));
        }
        static PyObject *t_TileFactory_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TileFactory::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TileFactory_of_(t_TileFactory *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_TileFactory_createTile(t_TileFactory *self)
        {
          ::org::orekit::rugged::raster::Tile result((jobject) NULL);
          OBJ_CALL(result = self->object.createTile());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::rugged::raster::t_Tile::wrap_Object(result);
        }
        static PyObject *t_TileFactory_get__parameters_(t_TileFactory *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
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
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealVector.h"
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
          mids$[mid_init$_d202a20516e33d93] = env->getMethodID(cls, "<init>", "([DZ)V");
          mids$[mid_create_f1f78ca70ac9cda9] = env->getStaticMethodID(cls, "create", "(Lorg/hipparchus/linear/RealLinearOperator;)Lorg/hipparchus/linear/JacobiPreconditioner;");
          mids$[mid_getColumnDimension_d6ab429752e7c267] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getRowDimension_d6ab429752e7c267] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_operate_bf8d75e459632544] = env->getMethodID(cls, "operate", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_sqrt_001c93b1f96cd016] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/linear/RealLinearOperator;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JacobiPreconditioner::JacobiPreconditioner(const JArray< jdouble > & a0, jboolean a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d202a20516e33d93, a0.this$, a1)) {}

      JacobiPreconditioner JacobiPreconditioner::create(const ::org::hipparchus::linear::RealLinearOperator & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JacobiPreconditioner(env->callStaticObjectMethod(cls, mids$[mid_create_f1f78ca70ac9cda9], a0.this$));
      }

      jint JacobiPreconditioner::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_d6ab429752e7c267]);
      }

      jint JacobiPreconditioner::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_d6ab429752e7c267]);
      }

      ::org::hipparchus::linear::RealVector JacobiPreconditioner::operate(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_operate_bf8d75e459632544], a0.this$));
      }

      ::org::hipparchus::linear::RealLinearOperator JacobiPreconditioner::sqrt() const
      {
        return ::org::hipparchus::linear::RealLinearOperator(env->callObjectMethod(this$, mids$[mid_sqrt_001c93b1f96cd016]));
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
#include "org/hipparchus/analysis/function/Atanh.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Atanh::class$ = NULL;
        jmethodID *Atanh::mids$ = NULL;
        bool Atanh::live$ = false;

        jclass Atanh::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Atanh");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_ba85b555c6f0b809] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Atanh::Atanh() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble Atanh::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_bf28ed64d6e8576b], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Atanh::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_ba85b555c6f0b809], a0.this$));
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
        static PyObject *t_Atanh_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Atanh_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Atanh_init_(t_Atanh *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Atanh_value(t_Atanh *self, PyObject *args);

        static PyMethodDef t_Atanh__methods_[] = {
          DECLARE_METHOD(t_Atanh, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Atanh, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Atanh, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Atanh)[] = {
          { Py_tp_methods, t_Atanh__methods_ },
          { Py_tp_init, (void *) t_Atanh_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Atanh)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Atanh, t_Atanh, Atanh);

        void t_Atanh::install(PyObject *module)
        {
          installType(&PY_TYPE(Atanh), &PY_TYPE_DEF(Atanh), module, "Atanh", 0);
        }

        void t_Atanh::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Atanh), "class_", make_descriptor(Atanh::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Atanh), "wrapfn_", make_descriptor(t_Atanh::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Atanh), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Atanh_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Atanh::initializeClass, 1)))
            return NULL;
          return t_Atanh::wrap_Object(Atanh(((t_Atanh *) arg)->object.this$));
        }
        static PyObject *t_Atanh_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Atanh::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Atanh_init_(t_Atanh *self, PyObject *args, PyObject *kwds)
        {
          Atanh object((jobject) NULL);

          INT_CALL(object = Atanh());
          self->object = object;

          return 0;
        }

        static PyObject *t_Atanh_value(t_Atanh *self, PyObject *args)
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
#include "org/hipparchus/analysis/solvers/LaguerreSolver.h"
#include "org/hipparchus/complex/Complex.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *LaguerreSolver::class$ = NULL;
        jmethodID *LaguerreSolver::mids$ = NULL;
        bool LaguerreSolver::live$ = false;

        jclass LaguerreSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/LaguerreSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_bd28dc6055dc5bbd] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_doSolve_9981f74b2d109da6] = env->getMethodID(cls, "doSolve", "()D");
            mids$[mid_solveAllComplex_7f22089056a01719] = env->getMethodID(cls, "solveAllComplex", "([DD)[Lorg/hipparchus/complex/Complex;");
            mids$[mid_solveComplex_07f41f0cd53f1903] = env->getMethodID(cls, "solveComplex", "([DD)Lorg/hipparchus/complex/Complex;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LaguerreSolver::LaguerreSolver() : ::org::hipparchus::analysis::solvers::AbstractPolynomialSolver(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        LaguerreSolver::LaguerreSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::AbstractPolynomialSolver(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        LaguerreSolver::LaguerreSolver(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::AbstractPolynomialSolver(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

        LaguerreSolver::LaguerreSolver(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::analysis::solvers::AbstractPolynomialSolver(env->newObject(initializeClass, &mids$, mid_init$_bd28dc6055dc5bbd, a0, a1, a2)) {}

        jdouble LaguerreSolver::doSolve() const
        {
          return env->callDoubleMethod(this$, mids$[mid_doSolve_9981f74b2d109da6]);
        }

        JArray< ::org::hipparchus::complex::Complex > LaguerreSolver::solveAllComplex(const JArray< jdouble > & a0, jdouble a1) const
        {
          return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_solveAllComplex_7f22089056a01719], a0.this$, a1));
        }

        ::org::hipparchus::complex::Complex LaguerreSolver::solveComplex(const JArray< jdouble > & a0, jdouble a1) const
        {
          return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_solveComplex_07f41f0cd53f1903], a0.this$, a1));
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
        static PyObject *t_LaguerreSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LaguerreSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LaguerreSolver_of_(t_LaguerreSolver *self, PyObject *args);
        static int t_LaguerreSolver_init_(t_LaguerreSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LaguerreSolver_doSolve(t_LaguerreSolver *self);
        static PyObject *t_LaguerreSolver_solveAllComplex(t_LaguerreSolver *self, PyObject *args);
        static PyObject *t_LaguerreSolver_solveComplex(t_LaguerreSolver *self, PyObject *args);
        static PyObject *t_LaguerreSolver_get__parameters_(t_LaguerreSolver *self, void *data);
        static PyGetSetDef t_LaguerreSolver__fields_[] = {
          DECLARE_GET_FIELD(t_LaguerreSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LaguerreSolver__methods_[] = {
          DECLARE_METHOD(t_LaguerreSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LaguerreSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LaguerreSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_LaguerreSolver, doSolve, METH_NOARGS),
          DECLARE_METHOD(t_LaguerreSolver, solveAllComplex, METH_VARARGS),
          DECLARE_METHOD(t_LaguerreSolver, solveComplex, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LaguerreSolver)[] = {
          { Py_tp_methods, t_LaguerreSolver__methods_ },
          { Py_tp_init, (void *) t_LaguerreSolver_init_ },
          { Py_tp_getset, t_LaguerreSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LaguerreSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractPolynomialSolver),
          NULL
        };

        DEFINE_TYPE(LaguerreSolver, t_LaguerreSolver, LaguerreSolver);
        PyObject *t_LaguerreSolver::wrap_Object(const LaguerreSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LaguerreSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LaguerreSolver *self = (t_LaguerreSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_LaguerreSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LaguerreSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LaguerreSolver *self = (t_LaguerreSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_LaguerreSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(LaguerreSolver), &PY_TYPE_DEF(LaguerreSolver), module, "LaguerreSolver", 0);
        }

        void t_LaguerreSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LaguerreSolver), "class_", make_descriptor(LaguerreSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LaguerreSolver), "wrapfn_", make_descriptor(t_LaguerreSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LaguerreSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LaguerreSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LaguerreSolver::initializeClass, 1)))
            return NULL;
          return t_LaguerreSolver::wrap_Object(LaguerreSolver(((t_LaguerreSolver *) arg)->object.this$));
        }
        static PyObject *t_LaguerreSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LaguerreSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_LaguerreSolver_of_(t_LaguerreSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_LaguerreSolver_init_(t_LaguerreSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              LaguerreSolver object((jobject) NULL);

              INT_CALL(object = LaguerreSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::polynomials::PY_TYPE(PolynomialFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              LaguerreSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = LaguerreSolver(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::polynomials::PY_TYPE(PolynomialFunction);
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              LaguerreSolver object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = LaguerreSolver(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::polynomials::PY_TYPE(PolynomialFunction);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              LaguerreSolver object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = LaguerreSolver(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::polynomials::PY_TYPE(PolynomialFunction);
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

        static PyObject *t_LaguerreSolver_doSolve(t_LaguerreSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.doSolve());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LaguerreSolver_solveAllComplex(t_LaguerreSolver *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble a1;
          JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);

          if (!parseArgs(args, "[DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.solveAllComplex(a0, a1));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "solveAllComplex", args);
          return NULL;
        }

        static PyObject *t_LaguerreSolver_solveComplex(t_LaguerreSolver *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble a1;
          ::org::hipparchus::complex::Complex result((jobject) NULL);

          if (!parseArgs(args, "[DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.solveComplex(a0, a1));
            return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "solveComplex", args);
          return NULL;
        }
        static PyObject *t_LaguerreSolver_get__parameters_(t_LaguerreSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/attitude/GPSBlockIIF.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *GPSBlockIIF::class$ = NULL;
        jmethodID *GPSBlockIIF::mids$ = NULL;
        bool GPSBlockIIF::live$ = false;
        jdouble GPSBlockIIF::DEFAULT_YAW_BIAS = (jdouble) 0;
        jdouble GPSBlockIIF::DEFAULT_YAW_RATE = (jdouble) 0;

        jclass GPSBlockIIF::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/GPSBlockIIF");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6747e305f69aea0f] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_correctedYaw_3bb932fc0c863341] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSFieldAttitudeContext;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
            mids$[mid_correctedYaw_7e83c4f910737b79] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSAttitudeContext;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_YAW_BIAS = env->getStaticDoubleField(cls, "DEFAULT_YAW_BIAS");
            DEFAULT_YAW_RATE = env->getStaticDoubleField(cls, "DEFAULT_YAW_RATE");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GPSBlockIIF::GPSBlockIIF(jdouble a0, jdouble a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::time::AbsoluteDate & a3, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a4, const ::org::orekit::frames::Frame & a5) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(env->newObject(initializeClass, &mids$, mid_init$_6747e305f69aea0f, a0, a1, a2.this$, a3.this$, a4.this$, a5.this$)) {}
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
      namespace attitude {
        static PyObject *t_GPSBlockIIF_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GPSBlockIIF_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GPSBlockIIF_init_(t_GPSBlockIIF *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_GPSBlockIIF__methods_[] = {
          DECLARE_METHOD(t_GPSBlockIIF, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GPSBlockIIF, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GPSBlockIIF)[] = {
          { Py_tp_methods, t_GPSBlockIIF__methods_ },
          { Py_tp_init, (void *) t_GPSBlockIIF_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GPSBlockIIF)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider),
          NULL
        };

        DEFINE_TYPE(GPSBlockIIF, t_GPSBlockIIF, GPSBlockIIF);

        void t_GPSBlockIIF::install(PyObject *module)
        {
          installType(&PY_TYPE(GPSBlockIIF), &PY_TYPE_DEF(GPSBlockIIF), module, "GPSBlockIIF", 0);
        }

        void t_GPSBlockIIF::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIF), "class_", make_descriptor(GPSBlockIIF::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIF), "wrapfn_", make_descriptor(t_GPSBlockIIF::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIF), "boxfn_", make_descriptor(boxObject));
          env->getClass(GPSBlockIIF::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIF), "DEFAULT_YAW_BIAS", make_descriptor(GPSBlockIIF::DEFAULT_YAW_BIAS));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIF), "DEFAULT_YAW_RATE", make_descriptor(GPSBlockIIF::DEFAULT_YAW_RATE));
        }

        static PyObject *t_GPSBlockIIF_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GPSBlockIIF::initializeClass, 1)))
            return NULL;
          return t_GPSBlockIIF::wrap_Object(GPSBlockIIF(((t_GPSBlockIIF *) arg)->object.this$));
        }
        static PyObject *t_GPSBlockIIF_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GPSBlockIIF::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GPSBlockIIF_init_(t_GPSBlockIIF *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a4((jobject) NULL);
          ::org::orekit::frames::Frame a5((jobject) NULL);
          GPSBlockIIF object((jobject) NULL);

          if (!parseArgs(args, "DDkkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = GPSBlockIIF(a0, a1, a2, a3, a4, a5));
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
#include "org/orekit/propagation/analytical/gnss/data/IRNSSAlmanac.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *IRNSSAlmanac::class$ = NULL;
            jmethodID *IRNSSAlmanac::mids$ = NULL;
            bool IRNSSAlmanac::live$ = false;

            jclass IRNSSAlmanac::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/IRNSSAlmanac");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_setSqrtA_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setSqrtA", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            IRNSSAlmanac::IRNSSAlmanac() : ::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            void IRNSSAlmanac::setSqrtA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSqrtA_1ad26e8c8c0cd65b], a0);
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
            static PyObject *t_IRNSSAlmanac_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_IRNSSAlmanac_instance_(PyTypeObject *type, PyObject *arg);
            static int t_IRNSSAlmanac_init_(t_IRNSSAlmanac *self, PyObject *args, PyObject *kwds);
            static PyObject *t_IRNSSAlmanac_setSqrtA(t_IRNSSAlmanac *self, PyObject *arg);
            static int t_IRNSSAlmanac_set__sqrtA(t_IRNSSAlmanac *self, PyObject *arg, void *data);
            static PyGetSetDef t_IRNSSAlmanac__fields_[] = {
              DECLARE_SET_FIELD(t_IRNSSAlmanac, sqrtA),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_IRNSSAlmanac__methods_[] = {
              DECLARE_METHOD(t_IRNSSAlmanac, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_IRNSSAlmanac, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_IRNSSAlmanac, setSqrtA, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(IRNSSAlmanac)[] = {
              { Py_tp_methods, t_IRNSSAlmanac__methods_ },
              { Py_tp_init, (void *) t_IRNSSAlmanac_init_ },
              { Py_tp_getset, t_IRNSSAlmanac__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(IRNSSAlmanac)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac),
              NULL
            };

            DEFINE_TYPE(IRNSSAlmanac, t_IRNSSAlmanac, IRNSSAlmanac);

            void t_IRNSSAlmanac::install(PyObject *module)
            {
              installType(&PY_TYPE(IRNSSAlmanac), &PY_TYPE_DEF(IRNSSAlmanac), module, "IRNSSAlmanac", 0);
            }

            void t_IRNSSAlmanac::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(IRNSSAlmanac), "class_", make_descriptor(IRNSSAlmanac::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(IRNSSAlmanac), "wrapfn_", make_descriptor(t_IRNSSAlmanac::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(IRNSSAlmanac), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_IRNSSAlmanac_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, IRNSSAlmanac::initializeClass, 1)))
                return NULL;
              return t_IRNSSAlmanac::wrap_Object(IRNSSAlmanac(((t_IRNSSAlmanac *) arg)->object.this$));
            }
            static PyObject *t_IRNSSAlmanac_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, IRNSSAlmanac::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_IRNSSAlmanac_init_(t_IRNSSAlmanac *self, PyObject *args, PyObject *kwds)
            {
              IRNSSAlmanac object((jobject) NULL);

              INT_CALL(object = IRNSSAlmanac());
              self->object = object;

              return 0;
            }

            static PyObject *t_IRNSSAlmanac_setSqrtA(t_IRNSSAlmanac *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSqrtA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSqrtA", arg);
              return NULL;
            }

            static int t_IRNSSAlmanac_set__sqrtA(t_IRNSSAlmanac *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSqrtA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sqrtA", arg);
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
#include "org/orekit/estimation/measurements/EstimationsProvider.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *EstimationsProvider::class$ = NULL;
        jmethodID *EstimationsProvider::mids$ = NULL;
        bool EstimationsProvider::live$ = false;

        jclass EstimationsProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/EstimationsProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getEstimatedMeasurement_a0080ef23630d9a1] = env->getMethodID(cls, "getEstimatedMeasurement", "(I)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getNumber_d6ab429752e7c267] = env->getMethodID(cls, "getNumber", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement EstimationsProvider::getEstimatedMeasurement(jint a0) const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getEstimatedMeasurement_a0080ef23630d9a1], a0));
        }

        jint EstimationsProvider::getNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumber_d6ab429752e7c267]);
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
        static PyObject *t_EstimationsProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimationsProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimationsProvider_getEstimatedMeasurement(t_EstimationsProvider *self, PyObject *arg);
        static PyObject *t_EstimationsProvider_getNumber(t_EstimationsProvider *self);
        static PyObject *t_EstimationsProvider_get__number(t_EstimationsProvider *self, void *data);
        static PyGetSetDef t_EstimationsProvider__fields_[] = {
          DECLARE_GET_FIELD(t_EstimationsProvider, number),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EstimationsProvider__methods_[] = {
          DECLARE_METHOD(t_EstimationsProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimationsProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimationsProvider, getEstimatedMeasurement, METH_O),
          DECLARE_METHOD(t_EstimationsProvider, getNumber, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EstimationsProvider)[] = {
          { Py_tp_methods, t_EstimationsProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EstimationsProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EstimationsProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EstimationsProvider, t_EstimationsProvider, EstimationsProvider);

        void t_EstimationsProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(EstimationsProvider), &PY_TYPE_DEF(EstimationsProvider), module, "EstimationsProvider", 0);
        }

        void t_EstimationsProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimationsProvider), "class_", make_descriptor(EstimationsProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimationsProvider), "wrapfn_", make_descriptor(t_EstimationsProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimationsProvider), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EstimationsProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EstimationsProvider::initializeClass, 1)))
            return NULL;
          return t_EstimationsProvider::wrap_Object(EstimationsProvider(((t_EstimationsProvider *) arg)->object.this$));
        }
        static PyObject *t_EstimationsProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EstimationsProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EstimationsProvider_getEstimatedMeasurement(t_EstimationsProvider *self, PyObject *arg)
        {
          jint a0;
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getEstimatedMeasurement(a0));
            return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getEstimatedMeasurement", arg);
          return NULL;
        }

        static PyObject *t_EstimationsProvider_getNumber(t_EstimationsProvider *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EstimationsProvider_get__number(t_EstimationsProvider *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumber());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/AbstractShapiroBaseModifier.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *AbstractShapiroBaseModifier::class$ = NULL;
          jmethodID *AbstractShapiroBaseModifier::mids$ = NULL;
          bool AbstractShapiroBaseModifier::live$ = false;

          jclass AbstractShapiroBaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/AbstractShapiroBaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_doModify_ecce216dce506020] = env->getMethodID(cls, "doModify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");
              mids$[mid_shapiroCorrection_c8803ee4cc2f2d51] = env->getMethodID(cls, "shapiroCorrection", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/utils/TimeStampedPVCoordinates;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AbstractShapiroBaseModifier::AbstractShapiroBaseModifier(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}
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
          static PyObject *t_AbstractShapiroBaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractShapiroBaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AbstractShapiroBaseModifier_init_(t_AbstractShapiroBaseModifier *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_AbstractShapiroBaseModifier__methods_[] = {
            DECLARE_METHOD(t_AbstractShapiroBaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractShapiroBaseModifier, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractShapiroBaseModifier)[] = {
            { Py_tp_methods, t_AbstractShapiroBaseModifier__methods_ },
            { Py_tp_init, (void *) t_AbstractShapiroBaseModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractShapiroBaseModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractShapiroBaseModifier, t_AbstractShapiroBaseModifier, AbstractShapiroBaseModifier);

          void t_AbstractShapiroBaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractShapiroBaseModifier), &PY_TYPE_DEF(AbstractShapiroBaseModifier), module, "AbstractShapiroBaseModifier", 0);
          }

          void t_AbstractShapiroBaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractShapiroBaseModifier), "class_", make_descriptor(AbstractShapiroBaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractShapiroBaseModifier), "wrapfn_", make_descriptor(t_AbstractShapiroBaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractShapiroBaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractShapiroBaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractShapiroBaseModifier::initializeClass, 1)))
              return NULL;
            return t_AbstractShapiroBaseModifier::wrap_Object(AbstractShapiroBaseModifier(((t_AbstractShapiroBaseModifier *) arg)->object.this$));
          }
          static PyObject *t_AbstractShapiroBaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractShapiroBaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AbstractShapiroBaseModifier_init_(t_AbstractShapiroBaseModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            AbstractShapiroBaseModifier object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = AbstractShapiroBaseModifier(a0));
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
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/stream/Collectors.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {
    namespace stream {

      ::java::lang::Class *Collectors::class$ = NULL;
      jmethodID *Collectors::mids$ = NULL;
      bool Collectors::live$ = false;

      jclass Collectors::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("java/util/stream/Collectors");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    namespace stream {
      static PyObject *t_Collectors_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Collectors_instance_(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_Collectors__methods_[] = {
        DECLARE_METHOD(t_Collectors, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Collectors, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Collectors)[] = {
        { Py_tp_methods, t_Collectors__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Collectors)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Collectors, t_Collectors, Collectors);

      void t_Collectors::install(PyObject *module)
      {
        installType(&PY_TYPE(Collectors), &PY_TYPE_DEF(Collectors), module, "Collectors", 0);
      }

      void t_Collectors::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Collectors), "class_", make_descriptor(Collectors::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Collectors), "wrapfn_", make_descriptor(t_Collectors::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Collectors), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Collectors_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Collectors::initializeClass, 1)))
          return NULL;
        return t_Collectors::wrap_Object(Collectors(((t_Collectors *) arg)->object.this$));
      }
      static PyObject *t_Collectors_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Collectors::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/FieldUnivariateVectorFunction.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateVectorFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *FieldUnivariateVectorFunction::class$ = NULL;
      jmethodID *FieldUnivariateVectorFunction::mids$ = NULL;
      bool FieldUnivariateVectorFunction::live$ = false;

      jclass FieldUnivariateVectorFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/FieldUnivariateVectorFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_toCalculusFieldUnivariateVectorFunction_ba377e0352aec53c] = env->getMethodID(cls, "toCalculusFieldUnivariateVectorFunction", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/CalculusFieldUnivariateVectorFunction;");
          mids$[mid_value_0e260a9870cb2bbf] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::analysis::CalculusFieldUnivariateVectorFunction FieldUnivariateVectorFunction::toCalculusFieldUnivariateVectorFunction(const ::org::hipparchus::Field & a0) const
      {
        return ::org::hipparchus::analysis::CalculusFieldUnivariateVectorFunction(env->callObjectMethod(this$, mids$[mid_toCalculusFieldUnivariateVectorFunction_ba377e0352aec53c], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldUnivariateVectorFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
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
      static PyObject *t_FieldUnivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldUnivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldUnivariateVectorFunction_toCalculusFieldUnivariateVectorFunction(t_FieldUnivariateVectorFunction *self, PyObject *arg);
      static PyObject *t_FieldUnivariateVectorFunction_value(t_FieldUnivariateVectorFunction *self, PyObject *arg);

      static PyMethodDef t_FieldUnivariateVectorFunction__methods_[] = {
        DECLARE_METHOD(t_FieldUnivariateVectorFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldUnivariateVectorFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldUnivariateVectorFunction, toCalculusFieldUnivariateVectorFunction, METH_O),
        DECLARE_METHOD(t_FieldUnivariateVectorFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateVectorFunction)[] = {
        { Py_tp_methods, t_FieldUnivariateVectorFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldUnivariateVectorFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldUnivariateVectorFunction, t_FieldUnivariateVectorFunction, FieldUnivariateVectorFunction);

      void t_FieldUnivariateVectorFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldUnivariateVectorFunction), &PY_TYPE_DEF(FieldUnivariateVectorFunction), module, "FieldUnivariateVectorFunction", 0);
      }

      void t_FieldUnivariateVectorFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateVectorFunction), "class_", make_descriptor(FieldUnivariateVectorFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateVectorFunction), "wrapfn_", make_descriptor(t_FieldUnivariateVectorFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateVectorFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldUnivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldUnivariateVectorFunction::initializeClass, 1)))
          return NULL;
        return t_FieldUnivariateVectorFunction::wrap_Object(FieldUnivariateVectorFunction(((t_FieldUnivariateVectorFunction *) arg)->object.this$));
      }
      static PyObject *t_FieldUnivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldUnivariateVectorFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldUnivariateVectorFunction_toCalculusFieldUnivariateVectorFunction(t_FieldUnivariateVectorFunction *self, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::analysis::CalculusFieldUnivariateVectorFunction result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = self->object.toCalculusFieldUnivariateVectorFunction(a0));
          return ::org::hipparchus::analysis::t_CalculusFieldUnivariateVectorFunction::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toCalculusFieldUnivariateVectorFunction", arg);
        return NULL;
      }

      static PyObject *t_FieldUnivariateVectorFunction_value(t_FieldUnivariateVectorFunction *self, PyObject *arg)
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
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeStampedAngularCoordinates::class$ = NULL;
      jmethodID *TimeStampedAngularCoordinates::mids$ = NULL;
      bool TimeStampedAngularCoordinates::live$ = false;

      jclass TimeStampedAngularCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeStampedAngularCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b30400bebd43ad7f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)V");
          mids$[mid_init$_74a905f732d238fd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_9086b91a3588262e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_28772f23acc6e057] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;D)V");
          mids$[mid_addOffset_5221dae25a052562] = env->getMethodID(cls, "addOffset", "(Lorg/orekit/utils/AngularCoordinates;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");
          mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_revert_f61c26acc5bceebd] = env->getMethodID(cls, "revert", "()Lorg/orekit/utils/TimeStampedAngularCoordinates;");
          mids$[mid_shiftedBy_3a6e64bcd855d02b] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/TimeStampedAngularCoordinates;");
          mids$[mid_subtractOffset_5221dae25a052562] = env->getMethodID(cls, "subtractOffset", "(Lorg/orekit/utils/AngularCoordinates;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedAngularCoordinates::TimeStampedAngularCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1) : ::org::orekit::utils::AngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_b30400bebd43ad7f, a0.this$, a1.this$)) {}

      TimeStampedAngularCoordinates::TimeStampedAngularCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1, const ::org::orekit::utils::PVCoordinates & a2) : ::org::orekit::utils::AngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_74a905f732d238fd, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedAngularCoordinates::TimeStampedAngularCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) : ::org::orekit::utils::AngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_9086b91a3588262e, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      TimeStampedAngularCoordinates::TimeStampedAngularCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1, const ::org::orekit::utils::PVCoordinates & a2, const ::org::orekit::utils::PVCoordinates & a3, const ::org::orekit::utils::PVCoordinates & a4, jdouble a5) : ::org::orekit::utils::AngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_28772f23acc6e057, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5)) {}

      TimeStampedAngularCoordinates TimeStampedAngularCoordinates::addOffset(const ::org::orekit::utils::AngularCoordinates & a0) const
      {
        return TimeStampedAngularCoordinates(env->callObjectMethod(this$, mids$[mid_addOffset_5221dae25a052562], a0.this$));
      }

      ::org::orekit::time::AbsoluteDate TimeStampedAngularCoordinates::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
      }

      TimeStampedAngularCoordinates TimeStampedAngularCoordinates::revert() const
      {
        return TimeStampedAngularCoordinates(env->callObjectMethod(this$, mids$[mid_revert_f61c26acc5bceebd]));
      }

      TimeStampedAngularCoordinates TimeStampedAngularCoordinates::shiftedBy(jdouble a0) const
      {
        return TimeStampedAngularCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_3a6e64bcd855d02b], a0));
      }

      TimeStampedAngularCoordinates TimeStampedAngularCoordinates::subtractOffset(const ::org::orekit::utils::AngularCoordinates & a0) const
      {
        return TimeStampedAngularCoordinates(env->callObjectMethod(this$, mids$[mid_subtractOffset_5221dae25a052562], a0.this$));
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
      static PyObject *t_TimeStampedAngularCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedAngularCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TimeStampedAngularCoordinates_init_(t_TimeStampedAngularCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedAngularCoordinates_addOffset(t_TimeStampedAngularCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedAngularCoordinates_getDate(t_TimeStampedAngularCoordinates *self);
      static PyObject *t_TimeStampedAngularCoordinates_revert(t_TimeStampedAngularCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedAngularCoordinates_shiftedBy(t_TimeStampedAngularCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedAngularCoordinates_subtractOffset(t_TimeStampedAngularCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedAngularCoordinates_get__date(t_TimeStampedAngularCoordinates *self, void *data);
      static PyGetSetDef t_TimeStampedAngularCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedAngularCoordinates, date),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedAngularCoordinates__methods_[] = {
        DECLARE_METHOD(t_TimeStampedAngularCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedAngularCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedAngularCoordinates, addOffset, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedAngularCoordinates, getDate, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedAngularCoordinates, revert, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedAngularCoordinates, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedAngularCoordinates, subtractOffset, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedAngularCoordinates)[] = {
        { Py_tp_methods, t_TimeStampedAngularCoordinates__methods_ },
        { Py_tp_init, (void *) t_TimeStampedAngularCoordinates_init_ },
        { Py_tp_getset, t_TimeStampedAngularCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedAngularCoordinates)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::AngularCoordinates),
        NULL
      };

      DEFINE_TYPE(TimeStampedAngularCoordinates, t_TimeStampedAngularCoordinates, TimeStampedAngularCoordinates);

      void t_TimeStampedAngularCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedAngularCoordinates), &PY_TYPE_DEF(TimeStampedAngularCoordinates), module, "TimeStampedAngularCoordinates", 0);
      }

      void t_TimeStampedAngularCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedAngularCoordinates), "class_", make_descriptor(TimeStampedAngularCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedAngularCoordinates), "wrapfn_", make_descriptor(t_TimeStampedAngularCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedAngularCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedAngularCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedAngularCoordinates::initializeClass, 1)))
          return NULL;
        return t_TimeStampedAngularCoordinates::wrap_Object(TimeStampedAngularCoordinates(((t_TimeStampedAngularCoordinates *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedAngularCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedAngularCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TimeStampedAngularCoordinates_init_(t_TimeStampedAngularCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_))
            {
              INT_CALL(object = TimeStampedAngularCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            TimeStampedAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = TimeStampedAngularCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
            TimeStampedAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = TimeStampedAngularCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a3((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a4((jobject) NULL);
            jdouble a5;
            TimeStampedAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkkkkD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = TimeStampedAngularCoordinates(a0, a1, a2, a3, a4, a5));
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

      static PyObject *t_TimeStampedAngularCoordinates_addOffset(t_TimeStampedAngularCoordinates *self, PyObject *args)
      {
        ::org::orekit::utils::AngularCoordinates a0((jobject) NULL);
        TimeStampedAngularCoordinates result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::utils::AngularCoordinates::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.addOffset(a0));
          return t_TimeStampedAngularCoordinates::wrap_Object(result);
        }

        return callSuper(PY_TYPE(TimeStampedAngularCoordinates), (PyObject *) self, "addOffset", args, 2);
      }

      static PyObject *t_TimeStampedAngularCoordinates_getDate(t_TimeStampedAngularCoordinates *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeStampedAngularCoordinates_revert(t_TimeStampedAngularCoordinates *self, PyObject *args)
      {
        TimeStampedAngularCoordinates result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.revert());
          return t_TimeStampedAngularCoordinates::wrap_Object(result);
        }

        return callSuper(PY_TYPE(TimeStampedAngularCoordinates), (PyObject *) self, "revert", args, 2);
      }

      static PyObject *t_TimeStampedAngularCoordinates_shiftedBy(t_TimeStampedAngularCoordinates *self, PyObject *args)
      {
        jdouble a0;
        TimeStampedAngularCoordinates result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_TimeStampedAngularCoordinates::wrap_Object(result);
        }

        return callSuper(PY_TYPE(TimeStampedAngularCoordinates), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_TimeStampedAngularCoordinates_subtractOffset(t_TimeStampedAngularCoordinates *self, PyObject *args)
      {
        ::org::orekit::utils::AngularCoordinates a0((jobject) NULL);
        TimeStampedAngularCoordinates result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::utils::AngularCoordinates::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtractOffset(a0));
          return t_TimeStampedAngularCoordinates::wrap_Object(result);
        }

        return callSuper(PY_TYPE(TimeStampedAngularCoordinates), (PyObject *) self, "subtractOffset", args, 2);
      }

      static PyObject *t_TimeStampedAngularCoordinates_get__date(t_TimeStampedAngularCoordinates *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrame.h"
#include "org/orekit/gnss/rflink/gps/SubFrame.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame::class$ = NULL;
          jmethodID *SubFrame::mids$ = NULL;
          bool SubFrame::live$ = false;
          jint SubFrame::PREAMBLE_VALUE = (jint) 0;

          jclass SubFrame::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame");

              mids$ = new jmethodID[max_mid];
              mids$[mid_checkParity_905dfe1f877a03f0] = env->getStaticMethodID(cls, "checkParity", "(II)Z");
              mids$[mid_getAlert_d6ab429752e7c267] = env->getMethodID(cls, "getAlert", "()I");
              mids$[mid_getAntiSpoofing_d6ab429752e7c267] = env->getMethodID(cls, "getAntiSpoofing", "()I");
              mids$[mid_getId_d6ab429752e7c267] = env->getMethodID(cls, "getId", "()I");
              mids$[mid_getIntegrityStatus_d6ab429752e7c267] = env->getMethodID(cls, "getIntegrityStatus", "()I");
              mids$[mid_getMessage_d6ab429752e7c267] = env->getMethodID(cls, "getMessage", "()I");
              mids$[mid_getPreamble_d6ab429752e7c267] = env->getMethodID(cls, "getPreamble", "()I");
              mids$[mid_getTow_d6ab429752e7c267] = env->getMethodID(cls, "getTow", "()I");
              mids$[mid_hasParityErrors_eee3de00fe971136] = env->getMethodID(cls, "hasParityErrors", "()Z");
              mids$[mid_parse_864a31960b2549e6] = env->getStaticMethodID(cls, "parse", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)Lorg/orekit/gnss/rflink/gps/SubFrame;");
              mids$[mid_setField_e080df48b0affee3] = env->getMethodID(cls, "setField", "(IIII[I)V");
              mids$[mid_setField_335b1e2c249b9526] = env->getMethodID(cls, "setField", "(IIIIIII[I)V");
              mids$[mid_getField_d938fc64e8c6df2d] = env->getMethodID(cls, "getField", "(I)I");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              PREAMBLE_VALUE = env->getStaticIntField(cls, "PREAMBLE_VALUE");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jboolean SubFrame::checkParity(jint a0, jint a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticBooleanMethod(cls, mids$[mid_checkParity_905dfe1f877a03f0], a0, a1);
          }

          jint SubFrame::getAlert() const
          {
            return env->callIntMethod(this$, mids$[mid_getAlert_d6ab429752e7c267]);
          }

          jint SubFrame::getAntiSpoofing() const
          {
            return env->callIntMethod(this$, mids$[mid_getAntiSpoofing_d6ab429752e7c267]);
          }

          jint SubFrame::getId() const
          {
            return env->callIntMethod(this$, mids$[mid_getId_d6ab429752e7c267]);
          }

          jint SubFrame::getIntegrityStatus() const
          {
            return env->callIntMethod(this$, mids$[mid_getIntegrityStatus_d6ab429752e7c267]);
          }

          jint SubFrame::getMessage() const
          {
            return env->callIntMethod(this$, mids$[mid_getMessage_d6ab429752e7c267]);
          }

          jint SubFrame::getPreamble() const
          {
            return env->callIntMethod(this$, mids$[mid_getPreamble_d6ab429752e7c267]);
          }

          jint SubFrame::getTow() const
          {
            return env->callIntMethod(this$, mids$[mid_getTow_d6ab429752e7c267]);
          }

          jboolean SubFrame::hasParityErrors() const
          {
            return env->callBooleanMethod(this$, mids$[mid_hasParityErrors_eee3de00fe971136]);
          }

          SubFrame SubFrame::parse(const ::org::orekit::gnss::metric::parser::EncodedMessage & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return SubFrame(env->callStaticObjectMethod(cls, mids$[mid_parse_864a31960b2549e6], a0.this$));
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
          static PyObject *t_SubFrame_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame_checkParity(PyTypeObject *type, PyObject *args);
          static PyObject *t_SubFrame_getAlert(t_SubFrame *self);
          static PyObject *t_SubFrame_getAntiSpoofing(t_SubFrame *self);
          static PyObject *t_SubFrame_getId(t_SubFrame *self);
          static PyObject *t_SubFrame_getIntegrityStatus(t_SubFrame *self);
          static PyObject *t_SubFrame_getMessage(t_SubFrame *self);
          static PyObject *t_SubFrame_getPreamble(t_SubFrame *self);
          static PyObject *t_SubFrame_getTow(t_SubFrame *self);
          static PyObject *t_SubFrame_hasParityErrors(t_SubFrame *self);
          static PyObject *t_SubFrame_parse(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame_get__alert(t_SubFrame *self, void *data);
          static PyObject *t_SubFrame_get__antiSpoofing(t_SubFrame *self, void *data);
          static PyObject *t_SubFrame_get__id(t_SubFrame *self, void *data);
          static PyObject *t_SubFrame_get__integrityStatus(t_SubFrame *self, void *data);
          static PyObject *t_SubFrame_get__message(t_SubFrame *self, void *data);
          static PyObject *t_SubFrame_get__preamble(t_SubFrame *self, void *data);
          static PyObject *t_SubFrame_get__tow(t_SubFrame *self, void *data);
          static PyGetSetDef t_SubFrame__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame, alert),
            DECLARE_GET_FIELD(t_SubFrame, antiSpoofing),
            DECLARE_GET_FIELD(t_SubFrame, id),
            DECLARE_GET_FIELD(t_SubFrame, integrityStatus),
            DECLARE_GET_FIELD(t_SubFrame, message),
            DECLARE_GET_FIELD(t_SubFrame, preamble),
            DECLARE_GET_FIELD(t_SubFrame, tow),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame__methods_[] = {
            DECLARE_METHOD(t_SubFrame, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame, checkParity, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_SubFrame, getAlert, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame, getAntiSpoofing, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame, getId, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame, getIntegrityStatus, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame, getMessage, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame, getPreamble, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame, getTow, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame, hasParityErrors, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame, parse, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame)[] = {
            { Py_tp_methods, t_SubFrame__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SubFrame, t_SubFrame, SubFrame);

          void t_SubFrame::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame), &PY_TYPE_DEF(SubFrame), module, "SubFrame", 0);
          }

          void t_SubFrame::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame), "class_", make_descriptor(SubFrame::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame), "wrapfn_", make_descriptor(t_SubFrame::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame), "boxfn_", make_descriptor(boxObject));
            env->getClass(SubFrame::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame), "PREAMBLE_VALUE", make_descriptor(SubFrame::PREAMBLE_VALUE));
          }

          static PyObject *t_SubFrame_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame::initializeClass, 1)))
              return NULL;
            return t_SubFrame::wrap_Object(SubFrame(((t_SubFrame *) arg)->object.this$));
          }
          static PyObject *t_SubFrame_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame_checkParity(PyTypeObject *type, PyObject *args)
          {
            jint a0;
            jint a1;
            jboolean result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::gnss::rflink::gps::SubFrame::checkParity(a0, a1));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError(type, "checkParity", args);
            return NULL;
          }

          static PyObject *t_SubFrame_getAlert(t_SubFrame *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getAlert());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame_getAntiSpoofing(t_SubFrame *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getAntiSpoofing());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame_getId(t_SubFrame *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getId());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame_getIntegrityStatus(t_SubFrame *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getIntegrityStatus());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame_getMessage(t_SubFrame *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMessage());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame_getPreamble(t_SubFrame *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getPreamble());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame_getTow(t_SubFrame *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getTow());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame_hasParityErrors(t_SubFrame *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.hasParityErrors());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_SubFrame_parse(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::gnss::metric::parser::EncodedMessage a0((jobject) NULL);
            SubFrame result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::gnss::metric::parser::EncodedMessage::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::rflink::gps::SubFrame::parse(a0));
              return t_SubFrame::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parse", arg);
            return NULL;
          }

          static PyObject *t_SubFrame_get__alert(t_SubFrame *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getAlert());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame_get__antiSpoofing(t_SubFrame *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getAntiSpoofing());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame_get__id(t_SubFrame *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getId());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame_get__integrityStatus(t_SubFrame *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getIntegrityStatus());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame_get__message(t_SubFrame *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMessage());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame_get__preamble(t_SubFrame *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getPreamble());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame_get__tow(t_SubFrame *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getTow());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/SecondOrderODE.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *SecondOrderODE::class$ = NULL;
      jmethodID *SecondOrderODE::mids$ = NULL;
      bool SecondOrderODE::live$ = false;

      jclass SecondOrderODE::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/SecondOrderODE");

          mids$ = new jmethodID[max_mid];
          mids$[mid_computeSecondDerivatives_18ba607b9243309a] = env->getMethodID(cls, "computeSecondDerivatives", "(D[D[D)[D");
          mids$[mid_getDimension_d6ab429752e7c267] = env->getMethodID(cls, "getDimension", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > SecondOrderODE::computeSecondDerivatives(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeSecondDerivatives_18ba607b9243309a], a0, a1.this$, a2.this$));
      }

      jint SecondOrderODE::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_d6ab429752e7c267]);
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
      static PyObject *t_SecondOrderODE_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SecondOrderODE_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SecondOrderODE_computeSecondDerivatives(t_SecondOrderODE *self, PyObject *args);
      static PyObject *t_SecondOrderODE_getDimension(t_SecondOrderODE *self);
      static PyObject *t_SecondOrderODE_get__dimension(t_SecondOrderODE *self, void *data);
      static PyGetSetDef t_SecondOrderODE__fields_[] = {
        DECLARE_GET_FIELD(t_SecondOrderODE, dimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SecondOrderODE__methods_[] = {
        DECLARE_METHOD(t_SecondOrderODE, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SecondOrderODE, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SecondOrderODE, computeSecondDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_SecondOrderODE, getDimension, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SecondOrderODE)[] = {
        { Py_tp_methods, t_SecondOrderODE__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_SecondOrderODE__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SecondOrderODE)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SecondOrderODE, t_SecondOrderODE, SecondOrderODE);

      void t_SecondOrderODE::install(PyObject *module)
      {
        installType(&PY_TYPE(SecondOrderODE), &PY_TYPE_DEF(SecondOrderODE), module, "SecondOrderODE", 0);
      }

      void t_SecondOrderODE::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SecondOrderODE), "class_", make_descriptor(SecondOrderODE::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SecondOrderODE), "wrapfn_", make_descriptor(t_SecondOrderODE::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SecondOrderODE), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SecondOrderODE_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SecondOrderODE::initializeClass, 1)))
          return NULL;
        return t_SecondOrderODE::wrap_Object(SecondOrderODE(((t_SecondOrderODE *) arg)->object.this$));
      }
      static PyObject *t_SecondOrderODE_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SecondOrderODE::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SecondOrderODE_computeSecondDerivatives(t_SecondOrderODE *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > a2((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "D[D[D", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.computeSecondDerivatives(a0, a1, a2));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "computeSecondDerivatives", args);
        return NULL;
      }

      static PyObject *t_SecondOrderODE_getDimension(t_SecondOrderODE *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_SecondOrderODE_get__dimension(t_SecondOrderODE *self, void *data)
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
#include "java/util/EventObject.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *EventObject::class$ = NULL;
    jmethodID *EventObject::mids$ = NULL;
    bool EventObject::live$ = false;

    jclass EventObject::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/EventObject");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_83ee235bb1e64e94] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;)V");
        mids$[mid_getSource_704a5bee58538972] = env->getMethodID(cls, "getSource", "()Ljava/lang/Object;");
        mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    EventObject::EventObject(const ::java::lang::Object & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_83ee235bb1e64e94, a0.this$)) {}

    ::java::lang::Object EventObject::getSource() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getSource_704a5bee58538972]));
    }

    ::java::lang::String EventObject::toString() const
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
    static PyObject *t_EventObject_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_EventObject_instance_(PyTypeObject *type, PyObject *arg);
    static int t_EventObject_init_(t_EventObject *self, PyObject *args, PyObject *kwds);
    static PyObject *t_EventObject_getSource(t_EventObject *self);
    static PyObject *t_EventObject_toString(t_EventObject *self, PyObject *args);
    static PyObject *t_EventObject_get__source(t_EventObject *self, void *data);
    static PyGetSetDef t_EventObject__fields_[] = {
      DECLARE_GET_FIELD(t_EventObject, source),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_EventObject__methods_[] = {
      DECLARE_METHOD(t_EventObject, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_EventObject, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_EventObject, getSource, METH_NOARGS),
      DECLARE_METHOD(t_EventObject, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(EventObject)[] = {
      { Py_tp_methods, t_EventObject__methods_ },
      { Py_tp_init, (void *) t_EventObject_init_ },
      { Py_tp_getset, t_EventObject__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(EventObject)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(EventObject, t_EventObject, EventObject);

    void t_EventObject::install(PyObject *module)
    {
      installType(&PY_TYPE(EventObject), &PY_TYPE_DEF(EventObject), module, "EventObject", 0);
    }

    void t_EventObject::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(EventObject), "class_", make_descriptor(EventObject::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(EventObject), "wrapfn_", make_descriptor(t_EventObject::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(EventObject), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_EventObject_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, EventObject::initializeClass, 1)))
        return NULL;
      return t_EventObject::wrap_Object(EventObject(((t_EventObject *) arg)->object.this$));
    }
    static PyObject *t_EventObject_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, EventObject::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_EventObject_init_(t_EventObject *self, PyObject *args, PyObject *kwds)
    {
      ::java::lang::Object a0((jobject) NULL);
      EventObject object((jobject) NULL);

      if (!parseArgs(args, "o", &a0))
      {
        INT_CALL(object = EventObject(a0));
        self->object = object;
      }
      else
      {
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_EventObject_getSource(t_EventObject *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.getSource());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_EventObject_toString(t_EventObject *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(EventObject), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_EventObject_get__source(t_EventObject *self, void *data)
    {
      ::java::lang::Object value((jobject) NULL);
      OBJ_CALL(value = self->object.getSource());
      return ::java::lang::t_Object::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/DetectorBasedEventState.h"
#include "org/hipparchus/ode/sampling/ODEStateInterpolator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/events/EventOccurrence.h"
#include "org/hipparchus/ode/events/ODEEventDetector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/ode/events/EventState.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *DetectorBasedEventState::class$ = NULL;
        jmethodID *DetectorBasedEventState::mids$ = NULL;
        bool DetectorBasedEventState::live$ = false;

        jclass DetectorBasedEventState::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/DetectorBasedEventState");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4cad2771a2849140] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/events/ODEEventDetector;)V");
            mids$[mid_doEvent_85cb4cee6c2ee34d] = env->getMethodID(cls, "doEvent", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)Lorg/hipparchus/ode/events/EventOccurrence;");
            mids$[mid_evaluateStep_a2d4078e6169b71f] = env->getMethodID(cls, "evaluateStep", "(Lorg/hipparchus/ode/sampling/ODEStateInterpolator;)Z");
            mids$[mid_getEventDetector_da847cbf3fa2cbbf] = env->getMethodID(cls, "getEventDetector", "()Lorg/hipparchus/ode/events/ODEEventDetector;");
            mids$[mid_getEventTime_9981f74b2d109da6] = env->getMethodID(cls, "getEventTime", "()D");
            mids$[mid_init_25005604bcb94d07] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");
            mids$[mid_reinitializeBegin_4f79f5048423f318] = env->getMethodID(cls, "reinitializeBegin", "(Lorg/hipparchus/ode/sampling/ODEStateInterpolator;)V");
            mids$[mid_tryAdvance_62fc75c986772aad] = env->getMethodID(cls, "tryAdvance", "(Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/sampling/ODEStateInterpolator;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DetectorBasedEventState::DetectorBasedEventState(const ::org::hipparchus::ode::events::ODEEventDetector & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4cad2771a2849140, a0.this$)) {}

        ::org::hipparchus::ode::events::EventOccurrence DetectorBasedEventState::doEvent(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::ode::events::EventOccurrence(env->callObjectMethod(this$, mids$[mid_doEvent_85cb4cee6c2ee34d], a0.this$));
        }

        jboolean DetectorBasedEventState::evaluateStep(const ::org::hipparchus::ode::sampling::ODEStateInterpolator & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_evaluateStep_a2d4078e6169b71f], a0.this$);
        }

        ::org::hipparchus::ode::events::ODEEventDetector DetectorBasedEventState::getEventDetector() const
        {
          return ::org::hipparchus::ode::events::ODEEventDetector(env->callObjectMethod(this$, mids$[mid_getEventDetector_da847cbf3fa2cbbf]));
        }

        jdouble DetectorBasedEventState::getEventTime() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getEventTime_9981f74b2d109da6]);
        }

        void DetectorBasedEventState::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_25005604bcb94d07], a0.this$, a1);
        }

        void DetectorBasedEventState::reinitializeBegin(const ::org::hipparchus::ode::sampling::ODEStateInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_reinitializeBegin_4f79f5048423f318], a0.this$);
        }

        jboolean DetectorBasedEventState::tryAdvance(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, const ::org::hipparchus::ode::sampling::ODEStateInterpolator & a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_tryAdvance_62fc75c986772aad], a0.this$, a1.this$);
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
        static PyObject *t_DetectorBasedEventState_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DetectorBasedEventState_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DetectorBasedEventState_init_(t_DetectorBasedEventState *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DetectorBasedEventState_doEvent(t_DetectorBasedEventState *self, PyObject *arg);
        static PyObject *t_DetectorBasedEventState_evaluateStep(t_DetectorBasedEventState *self, PyObject *arg);
        static PyObject *t_DetectorBasedEventState_getEventDetector(t_DetectorBasedEventState *self);
        static PyObject *t_DetectorBasedEventState_getEventTime(t_DetectorBasedEventState *self);
        static PyObject *t_DetectorBasedEventState_init(t_DetectorBasedEventState *self, PyObject *args);
        static PyObject *t_DetectorBasedEventState_reinitializeBegin(t_DetectorBasedEventState *self, PyObject *arg);
        static PyObject *t_DetectorBasedEventState_tryAdvance(t_DetectorBasedEventState *self, PyObject *args);
        static PyObject *t_DetectorBasedEventState_get__eventDetector(t_DetectorBasedEventState *self, void *data);
        static PyObject *t_DetectorBasedEventState_get__eventTime(t_DetectorBasedEventState *self, void *data);
        static PyGetSetDef t_DetectorBasedEventState__fields_[] = {
          DECLARE_GET_FIELD(t_DetectorBasedEventState, eventDetector),
          DECLARE_GET_FIELD(t_DetectorBasedEventState, eventTime),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DetectorBasedEventState__methods_[] = {
          DECLARE_METHOD(t_DetectorBasedEventState, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DetectorBasedEventState, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DetectorBasedEventState, doEvent, METH_O),
          DECLARE_METHOD(t_DetectorBasedEventState, evaluateStep, METH_O),
          DECLARE_METHOD(t_DetectorBasedEventState, getEventDetector, METH_NOARGS),
          DECLARE_METHOD(t_DetectorBasedEventState, getEventTime, METH_NOARGS),
          DECLARE_METHOD(t_DetectorBasedEventState, init, METH_VARARGS),
          DECLARE_METHOD(t_DetectorBasedEventState, reinitializeBegin, METH_O),
          DECLARE_METHOD(t_DetectorBasedEventState, tryAdvance, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DetectorBasedEventState)[] = {
          { Py_tp_methods, t_DetectorBasedEventState__methods_ },
          { Py_tp_init, (void *) t_DetectorBasedEventState_init_ },
          { Py_tp_getset, t_DetectorBasedEventState__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DetectorBasedEventState)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DetectorBasedEventState, t_DetectorBasedEventState, DetectorBasedEventState);

        void t_DetectorBasedEventState::install(PyObject *module)
        {
          installType(&PY_TYPE(DetectorBasedEventState), &PY_TYPE_DEF(DetectorBasedEventState), module, "DetectorBasedEventState", 0);
        }

        void t_DetectorBasedEventState::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DetectorBasedEventState), "class_", make_descriptor(DetectorBasedEventState::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DetectorBasedEventState), "wrapfn_", make_descriptor(t_DetectorBasedEventState::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DetectorBasedEventState), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DetectorBasedEventState_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DetectorBasedEventState::initializeClass, 1)))
            return NULL;
          return t_DetectorBasedEventState::wrap_Object(DetectorBasedEventState(((t_DetectorBasedEventState *) arg)->object.this$));
        }
        static PyObject *t_DetectorBasedEventState_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DetectorBasedEventState::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DetectorBasedEventState_init_(t_DetectorBasedEventState *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::ode::events::ODEEventDetector a0((jobject) NULL);
          DetectorBasedEventState object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::ode::events::ODEEventDetector::initializeClass, &a0))
          {
            INT_CALL(object = DetectorBasedEventState(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DetectorBasedEventState_doEvent(t_DetectorBasedEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          ::org::hipparchus::ode::events::EventOccurrence result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.doEvent(a0));
            return ::org::hipparchus::ode::events::t_EventOccurrence::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "doEvent", arg);
          return NULL;
        }

        static PyObject *t_DetectorBasedEventState_evaluateStep(t_DetectorBasedEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::ODEStateInterpolator a0((jobject) NULL);
          jboolean result;

          if (!parseArg(arg, "k", ::org::hipparchus::ode::sampling::ODEStateInterpolator::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.evaluateStep(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "evaluateStep", arg);
          return NULL;
        }

        static PyObject *t_DetectorBasedEventState_getEventDetector(t_DetectorBasedEventState *self)
        {
          ::org::hipparchus::ode::events::ODEEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetector());
          return ::org::hipparchus::ode::events::t_ODEEventDetector::wrap_Object(result);
        }

        static PyObject *t_DetectorBasedEventState_getEventTime(t_DetectorBasedEventState *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getEventTime());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DetectorBasedEventState_init(t_DetectorBasedEventState *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "kD", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_DetectorBasedEventState_reinitializeBegin(t_DetectorBasedEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::ODEStateInterpolator a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::ode::sampling::ODEStateInterpolator::initializeClass, &a0))
          {
            OBJ_CALL(self->object.reinitializeBegin(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "reinitializeBegin", arg);
          return NULL;
        }

        static PyObject *t_DetectorBasedEventState_tryAdvance(t_DetectorBasedEventState *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          ::org::hipparchus::ode::sampling::ODEStateInterpolator a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "kk", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, ::org::hipparchus::ode::sampling::ODEStateInterpolator::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.tryAdvance(a0, a1));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "tryAdvance", args);
          return NULL;
        }

        static PyObject *t_DetectorBasedEventState_get__eventDetector(t_DetectorBasedEventState *self, void *data)
        {
          ::org::hipparchus::ode::events::ODEEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetector());
          return ::org::hipparchus::ode::events::t_ODEEventDetector::wrap_Object(value);
        }

        static PyObject *t_DetectorBasedEventState_get__eventTime(t_DetectorBasedEventState *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getEventTime());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/AbstractParameterizable.h"
#include "java/util/List.h"
#include "org/hipparchus/ode/Parameterizable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *AbstractParameterizable::class$ = NULL;
      jmethodID *AbstractParameterizable::mids$ = NULL;
      bool AbstractParameterizable::live$ = false;

      jclass AbstractParameterizable::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/AbstractParameterizable");

          mids$ = new jmethodID[max_mid];
          mids$[mid_complainIfNotSupported_105e1eadb709d9ac] = env->getMethodID(cls, "complainIfNotSupported", "(Ljava/lang/String;)V");
          mids$[mid_getParametersNames_d751c1a57012b438] = env->getMethodID(cls, "getParametersNames", "()Ljava/util/List;");
          mids$[mid_isSupported_df4c65b2aede5c41] = env->getMethodID(cls, "isSupported", "(Ljava/lang/String;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void AbstractParameterizable::complainIfNotSupported(const ::java::lang::String & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_complainIfNotSupported_105e1eadb709d9ac], a0.this$);
      }

      ::java::util::List AbstractParameterizable::getParametersNames() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersNames_d751c1a57012b438]));
      }

      jboolean AbstractParameterizable::isSupported(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSupported_df4c65b2aede5c41], a0.this$);
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
      static PyObject *t_AbstractParameterizable_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractParameterizable_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractParameterizable_complainIfNotSupported(t_AbstractParameterizable *self, PyObject *arg);
      static PyObject *t_AbstractParameterizable_getParametersNames(t_AbstractParameterizable *self);
      static PyObject *t_AbstractParameterizable_isSupported(t_AbstractParameterizable *self, PyObject *arg);
      static PyObject *t_AbstractParameterizable_get__parametersNames(t_AbstractParameterizable *self, void *data);
      static PyGetSetDef t_AbstractParameterizable__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractParameterizable, parametersNames),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractParameterizable__methods_[] = {
        DECLARE_METHOD(t_AbstractParameterizable, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractParameterizable, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractParameterizable, complainIfNotSupported, METH_O),
        DECLARE_METHOD(t_AbstractParameterizable, getParametersNames, METH_NOARGS),
        DECLARE_METHOD(t_AbstractParameterizable, isSupported, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractParameterizable)[] = {
        { Py_tp_methods, t_AbstractParameterizable__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractParameterizable__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractParameterizable)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractParameterizable, t_AbstractParameterizable, AbstractParameterizable);

      void t_AbstractParameterizable::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractParameterizable), &PY_TYPE_DEF(AbstractParameterizable), module, "AbstractParameterizable", 0);
      }

      void t_AbstractParameterizable::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractParameterizable), "class_", make_descriptor(AbstractParameterizable::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractParameterizable), "wrapfn_", make_descriptor(t_AbstractParameterizable::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractParameterizable), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractParameterizable_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractParameterizable::initializeClass, 1)))
          return NULL;
        return t_AbstractParameterizable::wrap_Object(AbstractParameterizable(((t_AbstractParameterizable *) arg)->object.this$));
      }
      static PyObject *t_AbstractParameterizable_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractParameterizable::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractParameterizable_complainIfNotSupported(t_AbstractParameterizable *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(self->object.complainIfNotSupported(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "complainIfNotSupported", arg);
        return NULL;
      }

      static PyObject *t_AbstractParameterizable_getParametersNames(t_AbstractParameterizable *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getParametersNames());
        return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
      }

      static PyObject *t_AbstractParameterizable_isSupported(t_AbstractParameterizable *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.isSupported(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isSupported", arg);
        return NULL;
      }

      static PyObject *t_AbstractParameterizable_get__parametersNames(t_AbstractParameterizable *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getParametersNames());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/PolyhedronsSet$BRep.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *PolyhedronsSet$BRep::class$ = NULL;
          jmethodID *PolyhedronsSet$BRep::mids$ = NULL;
          bool PolyhedronsSet$BRep::live$ = false;

          jclass PolyhedronsSet$BRep::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/PolyhedronsSet$BRep");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a7e27987d82c9ab2] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Ljava/util/List;)V");
              mids$[mid_getFacets_d751c1a57012b438] = env->getMethodID(cls, "getFacets", "()Ljava/util/List;");
              mids$[mid_getVertices_d751c1a57012b438] = env->getMethodID(cls, "getVertices", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PolyhedronsSet$BRep::PolyhedronsSet$BRep(const ::java::util::List & a0, const ::java::util::List & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a7e27987d82c9ab2, a0.this$, a1.this$)) {}

          ::java::util::List PolyhedronsSet$BRep::getFacets() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getFacets_d751c1a57012b438]));
          }

          ::java::util::List PolyhedronsSet$BRep::getVertices() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getVertices_d751c1a57012b438]));
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
          static PyObject *t_PolyhedronsSet$BRep_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PolyhedronsSet$BRep_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PolyhedronsSet$BRep_of_(t_PolyhedronsSet$BRep *self, PyObject *args);
          static int t_PolyhedronsSet$BRep_init_(t_PolyhedronsSet$BRep *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PolyhedronsSet$BRep_getFacets(t_PolyhedronsSet$BRep *self);
          static PyObject *t_PolyhedronsSet$BRep_getVertices(t_PolyhedronsSet$BRep *self);
          static PyObject *t_PolyhedronsSet$BRep_get__facets(t_PolyhedronsSet$BRep *self, void *data);
          static PyObject *t_PolyhedronsSet$BRep_get__vertices(t_PolyhedronsSet$BRep *self, void *data);
          static PyObject *t_PolyhedronsSet$BRep_get__parameters_(t_PolyhedronsSet$BRep *self, void *data);
          static PyGetSetDef t_PolyhedronsSet$BRep__fields_[] = {
            DECLARE_GET_FIELD(t_PolyhedronsSet$BRep, facets),
            DECLARE_GET_FIELD(t_PolyhedronsSet$BRep, vertices),
            DECLARE_GET_FIELD(t_PolyhedronsSet$BRep, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PolyhedronsSet$BRep__methods_[] = {
            DECLARE_METHOD(t_PolyhedronsSet$BRep, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PolyhedronsSet$BRep, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PolyhedronsSet$BRep, of_, METH_VARARGS),
            DECLARE_METHOD(t_PolyhedronsSet$BRep, getFacets, METH_NOARGS),
            DECLARE_METHOD(t_PolyhedronsSet$BRep, getVertices, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PolyhedronsSet$BRep)[] = {
            { Py_tp_methods, t_PolyhedronsSet$BRep__methods_ },
            { Py_tp_init, (void *) t_PolyhedronsSet$BRep_init_ },
            { Py_tp_getset, t_PolyhedronsSet$BRep__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PolyhedronsSet$BRep)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PolyhedronsSet$BRep, t_PolyhedronsSet$BRep, PolyhedronsSet$BRep);
          PyObject *t_PolyhedronsSet$BRep::wrap_Object(const PolyhedronsSet$BRep& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PolyhedronsSet$BRep::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PolyhedronsSet$BRep *self = (t_PolyhedronsSet$BRep *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_PolyhedronsSet$BRep::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PolyhedronsSet$BRep::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PolyhedronsSet$BRep *self = (t_PolyhedronsSet$BRep *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_PolyhedronsSet$BRep::install(PyObject *module)
          {
            installType(&PY_TYPE(PolyhedronsSet$BRep), &PY_TYPE_DEF(PolyhedronsSet$BRep), module, "PolyhedronsSet$BRep", 0);
          }

          void t_PolyhedronsSet$BRep::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolyhedronsSet$BRep), "class_", make_descriptor(PolyhedronsSet$BRep::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolyhedronsSet$BRep), "wrapfn_", make_descriptor(t_PolyhedronsSet$BRep::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolyhedronsSet$BRep), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PolyhedronsSet$BRep_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PolyhedronsSet$BRep::initializeClass, 1)))
              return NULL;
            return t_PolyhedronsSet$BRep::wrap_Object(PolyhedronsSet$BRep(((t_PolyhedronsSet$BRep *) arg)->object.this$));
          }
          static PyObject *t_PolyhedronsSet$BRep_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PolyhedronsSet$BRep::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PolyhedronsSet$BRep_of_(t_PolyhedronsSet$BRep *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PolyhedronsSet$BRep_init_(t_PolyhedronsSet$BRep *self, PyObject *args, PyObject *kwds)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;
            PolyhedronsSet$BRep object((jobject) NULL);

            if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = PolyhedronsSet$BRep(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
              self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PolyhedronsSet$BRep_getFacets(t_PolyhedronsSet$BRep *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getFacets());
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(Object));
          }

          static PyObject *t_PolyhedronsSet$BRep_getVertices(t_PolyhedronsSet$BRep *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getVertices());
            return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Vector3D));
          }
          static PyObject *t_PolyhedronsSet$BRep_get__parameters_(t_PolyhedronsSet$BRep *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_PolyhedronsSet$BRep_get__facets(t_PolyhedronsSet$BRep *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getFacets());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_PolyhedronsSet$BRep_get__vertices(t_PolyhedronsSet$BRep *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getVertices());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PythonAbstractMatricesHarvester.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/DoubleArrayDictionary.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/String.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonAbstractMatricesHarvester::class$ = NULL;
      jmethodID *PythonAbstractMatricesHarvester::mids$ = NULL;
      bool PythonAbstractMatricesHarvester::live$ = false;

      jclass PythonAbstractMatricesHarvester::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonAbstractMatricesHarvester");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_aa25a7bd8018a8a8] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_freezeColumnsNames_ff7cb6c242604316] = env->getMethodID(cls, "freezeColumnsNames", "()V");
          mids$[mid_getJacobiansColumnsNames_d751c1a57012b438] = env->getMethodID(cls, "getJacobiansColumnsNames", "()Ljava/util/List;");
          mids$[mid_getOrbitType_495f818d3570b7f5] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_getPositionAngleType_a6db4e6edefda4be] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAbstractMatricesHarvester::PythonAbstractMatricesHarvester(const ::java::lang::String & a0, const ::org::hipparchus::linear::RealMatrix & a1, const ::org::orekit::utils::DoubleArrayDictionary & a2) : ::org::orekit::propagation::AbstractMatricesHarvester(env->newObject(initializeClass, &mids$, mid_init$_aa25a7bd8018a8a8, a0.this$, a1.this$, a2.this$)) {}

      void PythonAbstractMatricesHarvester::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonAbstractMatricesHarvester::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonAbstractMatricesHarvester::pythonExtension(jlong a0) const
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
      static PyObject *t_PythonAbstractMatricesHarvester_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAbstractMatricesHarvester_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAbstractMatricesHarvester_init_(t_PythonAbstractMatricesHarvester *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAbstractMatricesHarvester_finalize(t_PythonAbstractMatricesHarvester *self);
      static PyObject *t_PythonAbstractMatricesHarvester_pythonExtension(t_PythonAbstractMatricesHarvester *self, PyObject *args);
      static void JNICALL t_PythonAbstractMatricesHarvester_freezeColumnsNames0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractMatricesHarvester_getJacobiansColumnsNames1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractMatricesHarvester_getOrbitType2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractMatricesHarvester_getPositionAngleType3(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonAbstractMatricesHarvester_pythonDecRef4(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAbstractMatricesHarvester_get__self(t_PythonAbstractMatricesHarvester *self, void *data);
      static PyGetSetDef t_PythonAbstractMatricesHarvester__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAbstractMatricesHarvester, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAbstractMatricesHarvester__methods_[] = {
        DECLARE_METHOD(t_PythonAbstractMatricesHarvester, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractMatricesHarvester, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractMatricesHarvester, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAbstractMatricesHarvester, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAbstractMatricesHarvester)[] = {
        { Py_tp_methods, t_PythonAbstractMatricesHarvester__methods_ },
        { Py_tp_init, (void *) t_PythonAbstractMatricesHarvester_init_ },
        { Py_tp_getset, t_PythonAbstractMatricesHarvester__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAbstractMatricesHarvester)[] = {
        &PY_TYPE_DEF(::org::orekit::propagation::AbstractMatricesHarvester),
        NULL
      };

      DEFINE_TYPE(PythonAbstractMatricesHarvester, t_PythonAbstractMatricesHarvester, PythonAbstractMatricesHarvester);

      void t_PythonAbstractMatricesHarvester::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAbstractMatricesHarvester), &PY_TYPE_DEF(PythonAbstractMatricesHarvester), module, "PythonAbstractMatricesHarvester", 1);
      }

      void t_PythonAbstractMatricesHarvester::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMatricesHarvester), "class_", make_descriptor(PythonAbstractMatricesHarvester::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMatricesHarvester), "wrapfn_", make_descriptor(t_PythonAbstractMatricesHarvester::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMatricesHarvester), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAbstractMatricesHarvester::initializeClass);
        JNINativeMethod methods[] = {
          { "freezeColumnsNames", "()V", (void *) t_PythonAbstractMatricesHarvester_freezeColumnsNames0 },
          { "getJacobiansColumnsNames", "()Ljava/util/List;", (void *) t_PythonAbstractMatricesHarvester_getJacobiansColumnsNames1 },
          { "getOrbitType", "()Lorg/orekit/orbits/OrbitType;", (void *) t_PythonAbstractMatricesHarvester_getOrbitType2 },
          { "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;", (void *) t_PythonAbstractMatricesHarvester_getPositionAngleType3 },
          { "pythonDecRef", "()V", (void *) t_PythonAbstractMatricesHarvester_pythonDecRef4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonAbstractMatricesHarvester_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAbstractMatricesHarvester::initializeClass, 1)))
          return NULL;
        return t_PythonAbstractMatricesHarvester::wrap_Object(PythonAbstractMatricesHarvester(((t_PythonAbstractMatricesHarvester *) arg)->object.this$));
      }
      static PyObject *t_PythonAbstractMatricesHarvester_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAbstractMatricesHarvester::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAbstractMatricesHarvester_init_(t_PythonAbstractMatricesHarvester *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
        ::org::orekit::utils::DoubleArrayDictionary a2((jobject) NULL);
        PythonAbstractMatricesHarvester object((jobject) NULL);

        if (!parseArgs(args, "skk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = PythonAbstractMatricesHarvester(a0, a1, a2));
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

      static PyObject *t_PythonAbstractMatricesHarvester_finalize(t_PythonAbstractMatricesHarvester *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAbstractMatricesHarvester_pythonExtension(t_PythonAbstractMatricesHarvester *self, PyObject *args)
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

      static void JNICALL t_PythonAbstractMatricesHarvester_freezeColumnsNames0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMatricesHarvester::mids$[PythonAbstractMatricesHarvester::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *result = PyObject_CallMethod(obj, "freezeColumnsNames", "");
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jobject JNICALL t_PythonAbstractMatricesHarvester_getJacobiansColumnsNames1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMatricesHarvester::mids$[PythonAbstractMatricesHarvester::mid_pythonExtension_42c72b98e3c2e08a]);
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

      static jobject JNICALL t_PythonAbstractMatricesHarvester_getOrbitType2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMatricesHarvester::mids$[PythonAbstractMatricesHarvester::mid_pythonExtension_42c72b98e3c2e08a]);
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

      static jobject JNICALL t_PythonAbstractMatricesHarvester_getPositionAngleType3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMatricesHarvester::mids$[PythonAbstractMatricesHarvester::mid_pythonExtension_42c72b98e3c2e08a]);
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

      static void JNICALL t_PythonAbstractMatricesHarvester_pythonDecRef4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMatricesHarvester::mids$[PythonAbstractMatricesHarvester::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAbstractMatricesHarvester::mids$[PythonAbstractMatricesHarvester::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAbstractMatricesHarvester_get__self(t_PythonAbstractMatricesHarvester *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmParser.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Apm.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmParser.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *ApmParser::class$ = NULL;
              jmethodID *ApmParser::mids$ = NULL;
              bool ApmParser::live$ = false;

              jclass ApmParser::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/ApmParser");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_build_c3db7d0fc733a402] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/adm/apm/Apm;");
                  mids$[mid_finalizeData_eee3de00fe971136] = env->getMethodID(cls, "finalizeData", "()Z");
                  mids$[mid_finalizeHeader_eee3de00fe971136] = env->getMethodID(cls, "finalizeHeader", "()Z");
                  mids$[mid_finalizeMetadata_eee3de00fe971136] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                  mids$[mid_getHeader_6b8c194dac7b9184] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;");
                  mids$[mid_inData_eee3de00fe971136] = env->getMethodID(cls, "inData", "()Z");
                  mids$[mid_inHeader_eee3de00fe971136] = env->getMethodID(cls, "inHeader", "()Z");
                  mids$[mid_inMetadata_eee3de00fe971136] = env->getMethodID(cls, "inMetadata", "()Z");
                  mids$[mid_prepareData_eee3de00fe971136] = env->getMethodID(cls, "prepareData", "()Z");
                  mids$[mid_prepareHeader_eee3de00fe971136] = env->getMethodID(cls, "prepareHeader", "()Z");
                  mids$[mid_prepareMetadata_eee3de00fe971136] = env->getMethodID(cls, "prepareMetadata", "()Z");
                  mids$[mid_reset_a23f5f7531d9b583] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::files::ccsds::ndm::adm::apm::Apm ApmParser::build() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::apm::Apm(env->callObjectMethod(this$, mids$[mid_build_c3db7d0fc733a402]));
              }

              jboolean ApmParser::finalizeData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeData_eee3de00fe971136]);
              }

              jboolean ApmParser::finalizeHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_eee3de00fe971136]);
              }

              jboolean ApmParser::finalizeMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_eee3de00fe971136]);
              }

              ::org::orekit::files::ccsds::ndm::adm::AdmHeader ApmParser::getHeader() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AdmHeader(env->callObjectMethod(this$, mids$[mid_getHeader_6b8c194dac7b9184]));
              }

              jboolean ApmParser::inData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inData_eee3de00fe971136]);
              }

              jboolean ApmParser::inHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inHeader_eee3de00fe971136]);
              }

              jboolean ApmParser::inMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inMetadata_eee3de00fe971136]);
              }

              jboolean ApmParser::prepareData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareData_eee3de00fe971136]);
              }

              jboolean ApmParser::prepareHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareHeader_eee3de00fe971136]);
              }

              jboolean ApmParser::prepareMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_eee3de00fe971136]);
              }

              void ApmParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_reset_a23f5f7531d9b583], a0.this$);
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
              static PyObject *t_ApmParser_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ApmParser_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ApmParser_of_(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_build(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_finalizeData(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_finalizeHeader(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_finalizeMetadata(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_getHeader(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_inData(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_inHeader(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_inMetadata(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_prepareData(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_prepareHeader(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_prepareMetadata(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_reset(t_ApmParser *self, PyObject *args);
              static PyObject *t_ApmParser_get__header(t_ApmParser *self, void *data);
              static PyObject *t_ApmParser_get__parameters_(t_ApmParser *self, void *data);
              static PyGetSetDef t_ApmParser__fields_[] = {
                DECLARE_GET_FIELD(t_ApmParser, header),
                DECLARE_GET_FIELD(t_ApmParser, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ApmParser__methods_[] = {
                DECLARE_METHOD(t_ApmParser, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmParser, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmParser, of_, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, build, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, finalizeData, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, finalizeHeader, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, finalizeMetadata, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, getHeader, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, inData, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, inHeader, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, inMetadata, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, prepareData, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, prepareHeader, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, prepareMetadata, METH_VARARGS),
                DECLARE_METHOD(t_ApmParser, reset, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ApmParser)[] = {
                { Py_tp_methods, t_ApmParser__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_ApmParser__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ApmParser)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::adm::AdmParser),
                NULL
              };

              DEFINE_TYPE(ApmParser, t_ApmParser, ApmParser);
              PyObject *t_ApmParser::wrap_Object(const ApmParser& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_ApmParser::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ApmParser *self = (t_ApmParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_ApmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_ApmParser::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ApmParser *self = (t_ApmParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_ApmParser::install(PyObject *module)
              {
                installType(&PY_TYPE(ApmParser), &PY_TYPE_DEF(ApmParser), module, "ApmParser", 0);
              }

              void t_ApmParser::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmParser), "class_", make_descriptor(ApmParser::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmParser), "wrapfn_", make_descriptor(t_ApmParser::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmParser), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_ApmParser_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ApmParser::initializeClass, 1)))
                  return NULL;
                return t_ApmParser::wrap_Object(ApmParser(((t_ApmParser *) arg)->object.this$));
              }
              static PyObject *t_ApmParser_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ApmParser::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ApmParser_of_(t_ApmParser *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_ApmParser_build(t_ApmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::Apm result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.build());
                  return ::org::orekit::files::ccsds::ndm::adm::apm::t_Apm::wrap_Object(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "build", args, 2);
              }

              static PyObject *t_ApmParser_finalizeData(t_ApmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "finalizeData", args, 2);
              }

              static PyObject *t_ApmParser_finalizeHeader(t_ApmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "finalizeHeader", args, 2);
              }

              static PyObject *t_ApmParser_finalizeMetadata(t_ApmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "finalizeMetadata", args, 2);
              }

              static PyObject *t_ApmParser_getHeader(t_ApmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getHeader());
                  return ::org::orekit::files::ccsds::ndm::adm::t_AdmHeader::wrap_Object(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "getHeader", args, 2);
              }

              static PyObject *t_ApmParser_inData(t_ApmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "inData", args, 2);
              }

              static PyObject *t_ApmParser_inHeader(t_ApmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "inHeader", args, 2);
              }

              static PyObject *t_ApmParser_inMetadata(t_ApmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "inMetadata", args, 2);
              }

              static PyObject *t_ApmParser_prepareData(t_ApmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "prepareData", args, 2);
              }

              static PyObject *t_ApmParser_prepareHeader(t_ApmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "prepareHeader", args, 2);
              }

              static PyObject *t_ApmParser_prepareMetadata(t_ApmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "prepareMetadata", args, 2);
              }

              static PyObject *t_ApmParser_reset(t_ApmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
                {
                  OBJ_CALL(self->object.reset(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(ApmParser), (PyObject *) self, "reset", args, 2);
              }
              static PyObject *t_ApmParser_get__parameters_(t_ApmParser *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_ApmParser_get__header(t_ApmParser *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader value((jobject) NULL);
                OBJ_CALL(value = self->object.getHeader());
                return ::org::orekit::files::ccsds::ndm::adm::t_AdmHeader::wrap_Object(value);
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
#include "org/orekit/rugged/utils/DSGenerator.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *DSGenerator::class$ = NULL;
        jmethodID *DSGenerator::mids$ = NULL;
        bool DSGenerator::live$ = false;

        jclass DSGenerator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/DSGenerator");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
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
        static PyObject *t_DSGenerator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DSGenerator_instance_(PyTypeObject *type, PyObject *arg);

        static PyMethodDef t_DSGenerator__methods_[] = {
          DECLARE_METHOD(t_DSGenerator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSGenerator, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DSGenerator)[] = {
          { Py_tp_methods, t_DSGenerator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DSGenerator)[] = {
          &PY_TYPE_DEF(::org::orekit::rugged::utils::DerivativeGenerator),
          NULL
        };

        DEFINE_TYPE(DSGenerator, t_DSGenerator, DSGenerator);

        void t_DSGenerator::install(PyObject *module)
        {
          installType(&PY_TYPE(DSGenerator), &PY_TYPE_DEF(DSGenerator), module, "DSGenerator", 0);
        }

        void t_DSGenerator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSGenerator), "class_", make_descriptor(DSGenerator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSGenerator), "wrapfn_", make_descriptor(t_DSGenerator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSGenerator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DSGenerator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DSGenerator::initializeClass, 1)))
            return NULL;
          return t_DSGenerator::wrap_Object(DSGenerator(((t_DSGenerator *) arg)->object.this$));
        }
        static PyObject *t_DSGenerator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DSGenerator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/refraction/MultiLayerModel.h"
#include "java/util/List.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/refraction/ConstantRefractionLayer.h"
#include "org/orekit/rugged/intersection/IntersectionAlgorithm.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace refraction {

        ::java::lang::Class *MultiLayerModel::class$ = NULL;
        jmethodID *MultiLayerModel::mids$ = NULL;
        bool MultiLayerModel::live$ = false;

        jclass MultiLayerModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/refraction/MultiLayerModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_669bd2fe21c4893e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;)V");
            mids$[mid_init$_c732f1a5333887fb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Ljava/util/List;)V");
            mids$[mid_applyCorrection_1ebaacadb4fd5fdc] = env->getMethodID(cls, "applyCorrection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;Lorg/orekit/rugged/intersection/IntersectionAlgorithm;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MultiLayerModel::MultiLayerModel(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0) : ::org::orekit::rugged::refraction::AtmosphericRefraction(env->newObject(initializeClass, &mids$, mid_init$_669bd2fe21c4893e, a0.this$)) {}

        MultiLayerModel::MultiLayerModel(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::java::util::List & a1) : ::org::orekit::rugged::refraction::AtmosphericRefraction(env->newObject(initializeClass, &mids$, mid_init$_c732f1a5333887fb, a0.this$, a1.this$)) {}

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint MultiLayerModel::applyCorrection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::rugged::utils::NormalizedGeodeticPoint & a2, const ::org::orekit::rugged::intersection::IntersectionAlgorithm & a3) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_applyCorrection_1ebaacadb4fd5fdc], a0.this$, a1.this$, a2.this$, a3.this$));
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
      namespace refraction {
        static PyObject *t_MultiLayerModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultiLayerModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MultiLayerModel_init_(t_MultiLayerModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MultiLayerModel_applyCorrection(t_MultiLayerModel *self, PyObject *args);

        static PyMethodDef t_MultiLayerModel__methods_[] = {
          DECLARE_METHOD(t_MultiLayerModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultiLayerModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultiLayerModel, applyCorrection, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultiLayerModel)[] = {
          { Py_tp_methods, t_MultiLayerModel__methods_ },
          { Py_tp_init, (void *) t_MultiLayerModel_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultiLayerModel)[] = {
          &PY_TYPE_DEF(::org::orekit::rugged::refraction::AtmosphericRefraction),
          NULL
        };

        DEFINE_TYPE(MultiLayerModel, t_MultiLayerModel, MultiLayerModel);

        void t_MultiLayerModel::install(PyObject *module)
        {
          installType(&PY_TYPE(MultiLayerModel), &PY_TYPE_DEF(MultiLayerModel), module, "MultiLayerModel", 0);
        }

        void t_MultiLayerModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiLayerModel), "class_", make_descriptor(MultiLayerModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiLayerModel), "wrapfn_", make_descriptor(t_MultiLayerModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiLayerModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultiLayerModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultiLayerModel::initializeClass, 1)))
            return NULL;
          return t_MultiLayerModel::wrap_Object(MultiLayerModel(((t_MultiLayerModel *) arg)->object.this$));
        }
        static PyObject *t_MultiLayerModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultiLayerModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MultiLayerModel_init_(t_MultiLayerModel *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);
              MultiLayerModel object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, &a0))
              {
                INT_CALL(object = MultiLayerModel(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);
              ::java::util::List a1((jobject) NULL);
              PyTypeObject **p1;
              MultiLayerModel object((jobject) NULL);

              if (!parseArgs(args, "kK", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
              {
                INT_CALL(object = MultiLayerModel(a0, a1));
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

        static PyObject *t_MultiLayerModel_applyCorrection(t_MultiLayerModel *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint a2((jobject) NULL);
          ::org::orekit::rugged::intersection::IntersectionAlgorithm a3((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::rugged::utils::NormalizedGeodeticPoint::initializeClass, ::org::orekit::rugged::intersection::IntersectionAlgorithm::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.applyCorrection(a0, a1, a2, a3));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          return callSuper(PY_TYPE(MultiLayerModel), (PyObject *) self, "applyCorrection", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/geometry/fov/CircularFieldOfView.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *CircularFieldOfView::class$ = NULL;
        jmethodID *CircularFieldOfView::mids$ = NULL;
        bool CircularFieldOfView::live$ = false;

        jclass CircularFieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/CircularFieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_9024e173b17a6d85] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DD)V");
            mids$[mid_getHalfAperture_9981f74b2d109da6] = env->getMethodID(cls, "getHalfAperture", "()D");
            mids$[mid_offsetFromBoundary_7ed10fb0bfbbf1c4] = env->getMethodID(cls, "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D");
            mids$[mid_projectToBoundary_53c542efd8574582] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_directionAt_98a3eeef43dce47a] = env->getMethodID(cls, "directionAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CircularFieldOfView::CircularFieldOfView(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1, jdouble a2) : ::org::orekit::geometry::fov::SmoothFieldOfView(env->newObject(initializeClass, &mids$, mid_init$_9024e173b17a6d85, a0.this$, a1, a2)) {}

        jdouble CircularFieldOfView::getHalfAperture() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getHalfAperture_9981f74b2d109da6]);
        }

        jdouble CircularFieldOfView::offsetFromBoundary(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1, const ::org::orekit::propagation::events::VisibilityTrigger & a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_offsetFromBoundary_7ed10fb0bfbbf1c4], a0.this$, a1, a2.this$);
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D CircularFieldOfView::projectToBoundary(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_projectToBoundary_53c542efd8574582], a0.this$));
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
        static PyObject *t_CircularFieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CircularFieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CircularFieldOfView_init_(t_CircularFieldOfView *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CircularFieldOfView_getHalfAperture(t_CircularFieldOfView *self);
        static PyObject *t_CircularFieldOfView_offsetFromBoundary(t_CircularFieldOfView *self, PyObject *args);
        static PyObject *t_CircularFieldOfView_projectToBoundary(t_CircularFieldOfView *self, PyObject *args);
        static PyObject *t_CircularFieldOfView_get__halfAperture(t_CircularFieldOfView *self, void *data);
        static PyGetSetDef t_CircularFieldOfView__fields_[] = {
          DECLARE_GET_FIELD(t_CircularFieldOfView, halfAperture),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CircularFieldOfView__methods_[] = {
          DECLARE_METHOD(t_CircularFieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CircularFieldOfView, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CircularFieldOfView, getHalfAperture, METH_NOARGS),
          DECLARE_METHOD(t_CircularFieldOfView, offsetFromBoundary, METH_VARARGS),
          DECLARE_METHOD(t_CircularFieldOfView, projectToBoundary, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CircularFieldOfView)[] = {
          { Py_tp_methods, t_CircularFieldOfView__methods_ },
          { Py_tp_init, (void *) t_CircularFieldOfView_init_ },
          { Py_tp_getset, t_CircularFieldOfView__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CircularFieldOfView)[] = {
          &PY_TYPE_DEF(::org::orekit::geometry::fov::SmoothFieldOfView),
          NULL
        };

        DEFINE_TYPE(CircularFieldOfView, t_CircularFieldOfView, CircularFieldOfView);

        void t_CircularFieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(CircularFieldOfView), &PY_TYPE_DEF(CircularFieldOfView), module, "CircularFieldOfView", 0);
        }

        void t_CircularFieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CircularFieldOfView), "class_", make_descriptor(CircularFieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CircularFieldOfView), "wrapfn_", make_descriptor(t_CircularFieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CircularFieldOfView), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CircularFieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CircularFieldOfView::initializeClass, 1)))
            return NULL;
          return t_CircularFieldOfView::wrap_Object(CircularFieldOfView(((t_CircularFieldOfView *) arg)->object.this$));
        }
        static PyObject *t_CircularFieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CircularFieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CircularFieldOfView_init_(t_CircularFieldOfView *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          jdouble a1;
          jdouble a2;
          CircularFieldOfView object((jobject) NULL);

          if (!parseArgs(args, "kDD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = CircularFieldOfView(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CircularFieldOfView_getHalfAperture(t_CircularFieldOfView *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getHalfAperture());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CircularFieldOfView_offsetFromBoundary(t_CircularFieldOfView *self, PyObject *args)
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

          return callSuper(PY_TYPE(CircularFieldOfView), (PyObject *) self, "offsetFromBoundary", args, 2);
        }

        static PyObject *t_CircularFieldOfView_projectToBoundary(t_CircularFieldOfView *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.projectToBoundary(a0));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          return callSuper(PY_TYPE(CircularFieldOfView), (PyObject *) self, "projectToBoundary", args, 2);
        }

        static PyObject *t_CircularFieldOfView_get__halfAperture(t_CircularFieldOfView *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getHalfAperture());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/io/Serializable.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeComponents::class$ = NULL;
      jmethodID *TimeComponents::mids$ = NULL;
      bool TimeComponents::live$ = false;
      TimeComponents *TimeComponents::H00 = NULL;
      TimeComponents *TimeComponents::H12 = NULL;

      jclass TimeComponents::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeComponents");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_init$_4320462275d66e78] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_init$_e98d7b3e971b6087] = env->getMethodID(cls, "<init>", "(IID)V");
          mids$[mid_init$_0d135c802a561a69] = env->getMethodID(cls, "<init>", "(IIDI)V");
          mids$[mid_compareTo_18d2c487028e75d5] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/time/TimeComponents;)I");
          mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_formatUtcOffset_d2c8eb4129821f0e] = env->getMethodID(cls, "formatUtcOffset", "()Ljava/lang/String;");
          mids$[mid_fromSeconds_693426a46930f812] = env->getStaticMethodID(cls, "fromSeconds", "(IDDI)Lorg/orekit/time/TimeComponents;");
          mids$[mid_getHour_d6ab429752e7c267] = env->getMethodID(cls, "getHour", "()I");
          mids$[mid_getMinute_d6ab429752e7c267] = env->getMethodID(cls, "getMinute", "()I");
          mids$[mid_getMinutesFromUTC_d6ab429752e7c267] = env->getMethodID(cls, "getMinutesFromUTC", "()I");
          mids$[mid_getSecond_9981f74b2d109da6] = env->getMethodID(cls, "getSecond", "()D");
          mids$[mid_getSecondsInLocalDay_9981f74b2d109da6] = env->getMethodID(cls, "getSecondsInLocalDay", "()D");
          mids$[mid_getSecondsInUTCDay_9981f74b2d109da6] = env->getMethodID(cls, "getSecondsInUTCDay", "()D");
          mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_parseTime_c1986b8f8b7a73dd] = env->getStaticMethodID(cls, "parseTime", "(Ljava/lang/String;)Lorg/orekit/time/TimeComponents;");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toStringWithoutUtcOffset_d2c8eb4129821f0e] = env->getMethodID(cls, "toStringWithoutUtcOffset", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          H00 = new TimeComponents(env->getStaticObjectField(cls, "H00", "Lorg/orekit/time/TimeComponents;"));
          H12 = new TimeComponents(env->getStaticObjectField(cls, "H12", "Lorg/orekit/time/TimeComponents;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeComponents::TimeComponents(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

      TimeComponents::TimeComponents(jint a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4320462275d66e78, a0, a1)) {}

      TimeComponents::TimeComponents(jint a0, jint a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e98d7b3e971b6087, a0, a1, a2)) {}

      TimeComponents::TimeComponents(jint a0, jint a1, jdouble a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0d135c802a561a69, a0, a1, a2, a3)) {}

      jint TimeComponents::compareTo(const TimeComponents & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_18d2c487028e75d5], a0.this$);
      }

      jboolean TimeComponents::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
      }

      ::java::lang::String TimeComponents::formatUtcOffset() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_formatUtcOffset_d2c8eb4129821f0e]));
      }

      TimeComponents TimeComponents::fromSeconds(jint a0, jdouble a1, jdouble a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return TimeComponents(env->callStaticObjectMethod(cls, mids$[mid_fromSeconds_693426a46930f812], a0, a1, a2, a3));
      }

      jint TimeComponents::getHour() const
      {
        return env->callIntMethod(this$, mids$[mid_getHour_d6ab429752e7c267]);
      }

      jint TimeComponents::getMinute() const
      {
        return env->callIntMethod(this$, mids$[mid_getMinute_d6ab429752e7c267]);
      }

      jint TimeComponents::getMinutesFromUTC() const
      {
        return env->callIntMethod(this$, mids$[mid_getMinutesFromUTC_d6ab429752e7c267]);
      }

      jdouble TimeComponents::getSecond() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSecond_9981f74b2d109da6]);
      }

      jdouble TimeComponents::getSecondsInLocalDay() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSecondsInLocalDay_9981f74b2d109da6]);
      }

      jdouble TimeComponents::getSecondsInUTCDay() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSecondsInUTCDay_9981f74b2d109da6]);
      }

      jint TimeComponents::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
      }

      TimeComponents TimeComponents::parseTime(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return TimeComponents(env->callStaticObjectMethod(cls, mids$[mid_parseTime_c1986b8f8b7a73dd], a0.this$));
      }

      ::java::lang::String TimeComponents::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
      }

      ::java::lang::String TimeComponents::toStringWithoutUtcOffset() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toStringWithoutUtcOffset_d2c8eb4129821f0e]));
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
      static PyObject *t_TimeComponents_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeComponents_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TimeComponents_init_(t_TimeComponents *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeComponents_compareTo(t_TimeComponents *self, PyObject *arg);
      static PyObject *t_TimeComponents_equals(t_TimeComponents *self, PyObject *args);
      static PyObject *t_TimeComponents_formatUtcOffset(t_TimeComponents *self);
      static PyObject *t_TimeComponents_fromSeconds(PyTypeObject *type, PyObject *args);
      static PyObject *t_TimeComponents_getHour(t_TimeComponents *self);
      static PyObject *t_TimeComponents_getMinute(t_TimeComponents *self);
      static PyObject *t_TimeComponents_getMinutesFromUTC(t_TimeComponents *self);
      static PyObject *t_TimeComponents_getSecond(t_TimeComponents *self);
      static PyObject *t_TimeComponents_getSecondsInLocalDay(t_TimeComponents *self);
      static PyObject *t_TimeComponents_getSecondsInUTCDay(t_TimeComponents *self);
      static PyObject *t_TimeComponents_hashCode(t_TimeComponents *self, PyObject *args);
      static PyObject *t_TimeComponents_parseTime(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeComponents_toString(t_TimeComponents *self, PyObject *args);
      static PyObject *t_TimeComponents_toStringWithoutUtcOffset(t_TimeComponents *self);
      static PyObject *t_TimeComponents_get__hour(t_TimeComponents *self, void *data);
      static PyObject *t_TimeComponents_get__minute(t_TimeComponents *self, void *data);
      static PyObject *t_TimeComponents_get__minutesFromUTC(t_TimeComponents *self, void *data);
      static PyObject *t_TimeComponents_get__second(t_TimeComponents *self, void *data);
      static PyObject *t_TimeComponents_get__secondsInLocalDay(t_TimeComponents *self, void *data);
      static PyObject *t_TimeComponents_get__secondsInUTCDay(t_TimeComponents *self, void *data);
      static PyGetSetDef t_TimeComponents__fields_[] = {
        DECLARE_GET_FIELD(t_TimeComponents, hour),
        DECLARE_GET_FIELD(t_TimeComponents, minute),
        DECLARE_GET_FIELD(t_TimeComponents, minutesFromUTC),
        DECLARE_GET_FIELD(t_TimeComponents, second),
        DECLARE_GET_FIELD(t_TimeComponents, secondsInLocalDay),
        DECLARE_GET_FIELD(t_TimeComponents, secondsInUTCDay),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeComponents__methods_[] = {
        DECLARE_METHOD(t_TimeComponents, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeComponents, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeComponents, compareTo, METH_O),
        DECLARE_METHOD(t_TimeComponents, equals, METH_VARARGS),
        DECLARE_METHOD(t_TimeComponents, formatUtcOffset, METH_NOARGS),
        DECLARE_METHOD(t_TimeComponents, fromSeconds, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeComponents, getHour, METH_NOARGS),
        DECLARE_METHOD(t_TimeComponents, getMinute, METH_NOARGS),
        DECLARE_METHOD(t_TimeComponents, getMinutesFromUTC, METH_NOARGS),
        DECLARE_METHOD(t_TimeComponents, getSecond, METH_NOARGS),
        DECLARE_METHOD(t_TimeComponents, getSecondsInLocalDay, METH_NOARGS),
        DECLARE_METHOD(t_TimeComponents, getSecondsInUTCDay, METH_NOARGS),
        DECLARE_METHOD(t_TimeComponents, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_TimeComponents, parseTime, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeComponents, toString, METH_VARARGS),
        DECLARE_METHOD(t_TimeComponents, toStringWithoutUtcOffset, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeComponents)[] = {
        { Py_tp_methods, t_TimeComponents__methods_ },
        { Py_tp_init, (void *) t_TimeComponents_init_ },
        { Py_tp_getset, t_TimeComponents__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeComponents)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeComponents, t_TimeComponents, TimeComponents);

      void t_TimeComponents::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeComponents), &PY_TYPE_DEF(TimeComponents), module, "TimeComponents", 0);
      }

      void t_TimeComponents::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeComponents), "class_", make_descriptor(TimeComponents::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeComponents), "wrapfn_", make_descriptor(t_TimeComponents::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeComponents), "boxfn_", make_descriptor(boxObject));
        env->getClass(TimeComponents::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeComponents), "H00", make_descriptor(t_TimeComponents::wrap_Object(*TimeComponents::H00)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeComponents), "H12", make_descriptor(t_TimeComponents::wrap_Object(*TimeComponents::H12)));
      }

      static PyObject *t_TimeComponents_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeComponents::initializeClass, 1)))
          return NULL;
        return t_TimeComponents::wrap_Object(TimeComponents(((t_TimeComponents *) arg)->object.this$));
      }
      static PyObject *t_TimeComponents_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeComponents::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TimeComponents_init_(t_TimeComponents *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            TimeComponents object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = TimeComponents(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            jdouble a1;
            TimeComponents object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = TimeComponents(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            jint a1;
            jdouble a2;
            TimeComponents object((jobject) NULL);

            if (!parseArgs(args, "IID", &a0, &a1, &a2))
            {
              INT_CALL(object = TimeComponents(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jint a1;
            jdouble a2;
            jint a3;
            TimeComponents object((jobject) NULL);

            if (!parseArgs(args, "IIDI", &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = TimeComponents(a0, a1, a2, a3));
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

      static PyObject *t_TimeComponents_compareTo(t_TimeComponents *self, PyObject *arg)
      {
        TimeComponents a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", TimeComponents::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_TimeComponents_equals(t_TimeComponents *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(TimeComponents), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_TimeComponents_formatUtcOffset(t_TimeComponents *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.formatUtcOffset());
        return j2p(result);
      }

      static PyObject *t_TimeComponents_fromSeconds(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jdouble a1;
        jdouble a2;
        jint a3;
        TimeComponents result((jobject) NULL);

        if (!parseArgs(args, "IDDI", &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = ::org::orekit::time::TimeComponents::fromSeconds(a0, a1, a2, a3));
          return t_TimeComponents::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "fromSeconds", args);
        return NULL;
      }

      static PyObject *t_TimeComponents_getHour(t_TimeComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getHour());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_TimeComponents_getMinute(t_TimeComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMinute());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_TimeComponents_getMinutesFromUTC(t_TimeComponents *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMinutesFromUTC());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_TimeComponents_getSecond(t_TimeComponents *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSecond());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_TimeComponents_getSecondsInLocalDay(t_TimeComponents *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSecondsInLocalDay());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_TimeComponents_getSecondsInUTCDay(t_TimeComponents *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSecondsInUTCDay());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_TimeComponents_hashCode(t_TimeComponents *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(TimeComponents), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_TimeComponents_parseTime(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        TimeComponents result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::time::TimeComponents::parseTime(a0));
          return t_TimeComponents::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseTime", arg);
        return NULL;
      }

      static PyObject *t_TimeComponents_toString(t_TimeComponents *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(TimeComponents), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_TimeComponents_toStringWithoutUtcOffset(t_TimeComponents *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.toStringWithoutUtcOffset());
        return j2p(result);
      }

      static PyObject *t_TimeComponents_get__hour(t_TimeComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getHour());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_TimeComponents_get__minute(t_TimeComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMinute());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_TimeComponents_get__minutesFromUTC(t_TimeComponents *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMinutesFromUTC());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_TimeComponents_get__second(t_TimeComponents *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSecond());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_TimeComponents_get__secondsInLocalDay(t_TimeComponents *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSecondsInLocalDay());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_TimeComponents_get__secondsInUTCDay(t_TimeComponents *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSecondsInUTCDay());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/filtering/DualFrequencyHatchFilter.h"
#include "java/util/ArrayList.h"
#include "java/lang/Class.h"
#include "java/lang/Double.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *DualFrequencyHatchFilter::class$ = NULL;
          jmethodID *DualFrequencyHatchFilter::mids$ = NULL;
          bool DualFrequencyHatchFilter::live$ = false;

          jclass DualFrequencyHatchFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/DualFrequencyHatchFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_15ff097e4ab56a61] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;DDDI)V");
              mids$[mid_filterData_acd670ac11837f24] = env->getMethodID(cls, "filterData", "(Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;)Lorg/orekit/files/rinex/observation/ObservationData;");
              mids$[mid_getFirstFrequencyPhaseHistory_4aaa6fa02985280c] = env->getMethodID(cls, "getFirstFrequencyPhaseHistory", "()Ljava/util/ArrayList;");
              mids$[mid_getSecondFrequencyPhaseHistory_4aaa6fa02985280c] = env->getMethodID(cls, "getSecondFrequencyPhaseHistory", "()Ljava/util/ArrayList;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DualFrequencyHatchFilter::DualFrequencyHatchFilter(const ::org::orekit::files::rinex::observation::ObservationData & a0, const ::org::orekit::files::rinex::observation::ObservationData & a1, const ::org::orekit::files::rinex::observation::ObservationData & a2, jdouble a3, jdouble a4, jdouble a5, jint a6) : ::org::orekit::estimation::measurements::filtering::HatchFilter(env->newObject(initializeClass, &mids$, mid_init$_15ff097e4ab56a61, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6)) {}

          ::org::orekit::files::rinex::observation::ObservationData DualFrequencyHatchFilter::filterData(const ::org::orekit::files::rinex::observation::ObservationData & a0, const ::org::orekit::files::rinex::observation::ObservationData & a1, const ::org::orekit::files::rinex::observation::ObservationData & a2) const
          {
            return ::org::orekit::files::rinex::observation::ObservationData(env->callObjectMethod(this$, mids$[mid_filterData_acd670ac11837f24], a0.this$, a1.this$, a2.this$));
          }

          ::java::util::ArrayList DualFrequencyHatchFilter::getFirstFrequencyPhaseHistory() const
          {
            return ::java::util::ArrayList(env->callObjectMethod(this$, mids$[mid_getFirstFrequencyPhaseHistory_4aaa6fa02985280c]));
          }

          ::java::util::ArrayList DualFrequencyHatchFilter::getSecondFrequencyPhaseHistory() const
          {
            return ::java::util::ArrayList(env->callObjectMethod(this$, mids$[mid_getSecondFrequencyPhaseHistory_4aaa6fa02985280c]));
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
          static PyObject *t_DualFrequencyHatchFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DualFrequencyHatchFilter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_DualFrequencyHatchFilter_init_(t_DualFrequencyHatchFilter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DualFrequencyHatchFilter_filterData(t_DualFrequencyHatchFilter *self, PyObject *args);
          static PyObject *t_DualFrequencyHatchFilter_getFirstFrequencyPhaseHistory(t_DualFrequencyHatchFilter *self);
          static PyObject *t_DualFrequencyHatchFilter_getSecondFrequencyPhaseHistory(t_DualFrequencyHatchFilter *self);
          static PyObject *t_DualFrequencyHatchFilter_get__firstFrequencyPhaseHistory(t_DualFrequencyHatchFilter *self, void *data);
          static PyObject *t_DualFrequencyHatchFilter_get__secondFrequencyPhaseHistory(t_DualFrequencyHatchFilter *self, void *data);
          static PyGetSetDef t_DualFrequencyHatchFilter__fields_[] = {
            DECLARE_GET_FIELD(t_DualFrequencyHatchFilter, firstFrequencyPhaseHistory),
            DECLARE_GET_FIELD(t_DualFrequencyHatchFilter, secondFrequencyPhaseHistory),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DualFrequencyHatchFilter__methods_[] = {
            DECLARE_METHOD(t_DualFrequencyHatchFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DualFrequencyHatchFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DualFrequencyHatchFilter, filterData, METH_VARARGS),
            DECLARE_METHOD(t_DualFrequencyHatchFilter, getFirstFrequencyPhaseHistory, METH_NOARGS),
            DECLARE_METHOD(t_DualFrequencyHatchFilter, getSecondFrequencyPhaseHistory, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DualFrequencyHatchFilter)[] = {
            { Py_tp_methods, t_DualFrequencyHatchFilter__methods_ },
            { Py_tp_init, (void *) t_DualFrequencyHatchFilter_init_ },
            { Py_tp_getset, t_DualFrequencyHatchFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DualFrequencyHatchFilter)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::filtering::HatchFilter),
            NULL
          };

          DEFINE_TYPE(DualFrequencyHatchFilter, t_DualFrequencyHatchFilter, DualFrequencyHatchFilter);

          void t_DualFrequencyHatchFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(DualFrequencyHatchFilter), &PY_TYPE_DEF(DualFrequencyHatchFilter), module, "DualFrequencyHatchFilter", 0);
          }

          void t_DualFrequencyHatchFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DualFrequencyHatchFilter), "class_", make_descriptor(DualFrequencyHatchFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DualFrequencyHatchFilter), "wrapfn_", make_descriptor(t_DualFrequencyHatchFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DualFrequencyHatchFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DualFrequencyHatchFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DualFrequencyHatchFilter::initializeClass, 1)))
              return NULL;
            return t_DualFrequencyHatchFilter::wrap_Object(DualFrequencyHatchFilter(((t_DualFrequencyHatchFilter *) arg)->object.this$));
          }
          static PyObject *t_DualFrequencyHatchFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DualFrequencyHatchFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_DualFrequencyHatchFilter_init_(t_DualFrequencyHatchFilter *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData a1((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData a2((jobject) NULL);
            jdouble a3;
            jdouble a4;
            jdouble a5;
            jint a6;
            DualFrequencyHatchFilter object((jobject) NULL);

            if (!parseArgs(args, "kkkDDDI", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = DualFrequencyHatchFilter(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_DualFrequencyHatchFilter_filterData(t_DualFrequencyHatchFilter *self, PyObject *args)
          {
            ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData a1((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData a2((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.filterData(a0, a1, a2));
              return ::org::orekit::files::rinex::observation::t_ObservationData::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "filterData", args);
            return NULL;
          }

          static PyObject *t_DualFrequencyHatchFilter_getFirstFrequencyPhaseHistory(t_DualFrequencyHatchFilter *self)
          {
            ::java::util::ArrayList result((jobject) NULL);
            OBJ_CALL(result = self->object.getFirstFrequencyPhaseHistory());
            return ::java::util::t_ArrayList::wrap_Object(result, ::java::lang::PY_TYPE(Double));
          }

          static PyObject *t_DualFrequencyHatchFilter_getSecondFrequencyPhaseHistory(t_DualFrequencyHatchFilter *self)
          {
            ::java::util::ArrayList result((jobject) NULL);
            OBJ_CALL(result = self->object.getSecondFrequencyPhaseHistory());
            return ::java::util::t_ArrayList::wrap_Object(result, ::java::lang::PY_TYPE(Double));
          }

          static PyObject *t_DualFrequencyHatchFilter_get__firstFrequencyPhaseHistory(t_DualFrequencyHatchFilter *self, void *data)
          {
            ::java::util::ArrayList value((jobject) NULL);
            OBJ_CALL(value = self->object.getFirstFrequencyPhaseHistory());
            return ::java::util::t_ArrayList::wrap_Object(value);
          }

          static PyObject *t_DualFrequencyHatchFilter_get__secondFrequencyPhaseHistory(t_DualFrequencyHatchFilter *self, void *data)
          {
            ::java::util::ArrayList value((jobject) NULL);
            OBJ_CALL(value = self->object.getSecondFrequencyPhaseHistory());
            return ::java::util::t_ArrayList::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/OpenIntToDoubleHashMap.h"
#include "org/hipparchus/util/OpenIntToDoubleHashMap$Iterator.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *OpenIntToDoubleHashMap::class$ = NULL;
      jmethodID *OpenIntToDoubleHashMap::mids$ = NULL;
      bool OpenIntToDoubleHashMap::live$ = false;

      jclass OpenIntToDoubleHashMap::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/OpenIntToDoubleHashMap");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_4320462275d66e78] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_containsKey_e24caac814db1df5] = env->getMethodID(cls, "containsKey", "(I)Z");
          mids$[mid_get_ce4c02d583456bc9] = env->getMethodID(cls, "get", "(I)D");
          mids$[mid_iterator_8e10fa69861a3eb8] = env->getMethodID(cls, "iterator", "()Lorg/hipparchus/util/OpenIntToDoubleHashMap$Iterator;");
          mids$[mid_put_5540210c7d309f18] = env->getMethodID(cls, "put", "(ID)D");
          mids$[mid_remove_ce4c02d583456bc9] = env->getMethodID(cls, "remove", "(I)D");
          mids$[mid_size_d6ab429752e7c267] = env->getMethodID(cls, "size", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OpenIntToDoubleHashMap::OpenIntToDoubleHashMap() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      OpenIntToDoubleHashMap::OpenIntToDoubleHashMap(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

      OpenIntToDoubleHashMap::OpenIntToDoubleHashMap(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

      OpenIntToDoubleHashMap::OpenIntToDoubleHashMap(jint a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4320462275d66e78, a0, a1)) {}

      jboolean OpenIntToDoubleHashMap::containsKey(jint a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_containsKey_e24caac814db1df5], a0);
      }

      jdouble OpenIntToDoubleHashMap::get$(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_get_ce4c02d583456bc9], a0);
      }

      ::org::hipparchus::util::OpenIntToDoubleHashMap$Iterator OpenIntToDoubleHashMap::iterator() const
      {
        return ::org::hipparchus::util::OpenIntToDoubleHashMap$Iterator(env->callObjectMethod(this$, mids$[mid_iterator_8e10fa69861a3eb8]));
      }

      jdouble OpenIntToDoubleHashMap::put(jint a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_put_5540210c7d309f18], a0, a1);
      }

      jdouble OpenIntToDoubleHashMap::remove(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_remove_ce4c02d583456bc9], a0);
      }

      jint OpenIntToDoubleHashMap::size() const
      {
        return env->callIntMethod(this$, mids$[mid_size_d6ab429752e7c267]);
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
      static PyObject *t_OpenIntToDoubleHashMap_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OpenIntToDoubleHashMap_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OpenIntToDoubleHashMap_init_(t_OpenIntToDoubleHashMap *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OpenIntToDoubleHashMap_containsKey(t_OpenIntToDoubleHashMap *self, PyObject *arg);
      static PyObject *t_OpenIntToDoubleHashMap_get(t_OpenIntToDoubleHashMap *self, PyObject *arg);
      static PyObject *t_OpenIntToDoubleHashMap_iterator(t_OpenIntToDoubleHashMap *self);
      static PyObject *t_OpenIntToDoubleHashMap_put(t_OpenIntToDoubleHashMap *self, PyObject *args);
      static PyObject *t_OpenIntToDoubleHashMap_remove(t_OpenIntToDoubleHashMap *self, PyObject *arg);
      static PyObject *t_OpenIntToDoubleHashMap_size(t_OpenIntToDoubleHashMap *self);

      static PyMethodDef t_OpenIntToDoubleHashMap__methods_[] = {
        DECLARE_METHOD(t_OpenIntToDoubleHashMap, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap, containsKey, METH_O),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap, get, METH_O),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap, iterator, METH_NOARGS),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap, put, METH_VARARGS),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap, remove, METH_O),
        DECLARE_METHOD(t_OpenIntToDoubleHashMap, size, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OpenIntToDoubleHashMap)[] = {
        { Py_tp_methods, t_OpenIntToDoubleHashMap__methods_ },
        { Py_tp_init, (void *) t_OpenIntToDoubleHashMap_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OpenIntToDoubleHashMap)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OpenIntToDoubleHashMap, t_OpenIntToDoubleHashMap, OpenIntToDoubleHashMap);

      void t_OpenIntToDoubleHashMap::install(PyObject *module)
      {
        installType(&PY_TYPE(OpenIntToDoubleHashMap), &PY_TYPE_DEF(OpenIntToDoubleHashMap), module, "OpenIntToDoubleHashMap", 0);
      }

      void t_OpenIntToDoubleHashMap::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToDoubleHashMap), "class_", make_descriptor(OpenIntToDoubleHashMap::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToDoubleHashMap), "wrapfn_", make_descriptor(t_OpenIntToDoubleHashMap::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToDoubleHashMap), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OpenIntToDoubleHashMap_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OpenIntToDoubleHashMap::initializeClass, 1)))
          return NULL;
        return t_OpenIntToDoubleHashMap::wrap_Object(OpenIntToDoubleHashMap(((t_OpenIntToDoubleHashMap *) arg)->object.this$));
      }
      static PyObject *t_OpenIntToDoubleHashMap_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OpenIntToDoubleHashMap::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OpenIntToDoubleHashMap_init_(t_OpenIntToDoubleHashMap *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            OpenIntToDoubleHashMap object((jobject) NULL);

            INT_CALL(object = OpenIntToDoubleHashMap());
            self->object = object;
            break;
          }
         case 1:
          {
            jdouble a0;
            OpenIntToDoubleHashMap object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = OpenIntToDoubleHashMap(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            OpenIntToDoubleHashMap object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = OpenIntToDoubleHashMap(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            jdouble a1;
            OpenIntToDoubleHashMap object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = OpenIntToDoubleHashMap(a0, a1));
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

      static PyObject *t_OpenIntToDoubleHashMap_containsKey(t_OpenIntToDoubleHashMap *self, PyObject *arg)
      {
        jint a0;
        jboolean result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.containsKey(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "containsKey", arg);
        return NULL;
      }

      static PyObject *t_OpenIntToDoubleHashMap_get(t_OpenIntToDoubleHashMap *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.get$(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "get", arg);
        return NULL;
      }

      static PyObject *t_OpenIntToDoubleHashMap_iterator(t_OpenIntToDoubleHashMap *self)
      {
        ::org::hipparchus::util::OpenIntToDoubleHashMap$Iterator result((jobject) NULL);
        OBJ_CALL(result = self->object.iterator());
        return ::org::hipparchus::util::t_OpenIntToDoubleHashMap$Iterator::wrap_Object(result);
      }

      static PyObject *t_OpenIntToDoubleHashMap_put(t_OpenIntToDoubleHashMap *self, PyObject *args)
      {
        jint a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(result = self->object.put(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "put", args);
        return NULL;
      }

      static PyObject *t_OpenIntToDoubleHashMap_remove(t_OpenIntToDoubleHashMap *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.remove(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "remove", arg);
        return NULL;
      }

      static PyObject *t_OpenIntToDoubleHashMap_size(t_OpenIntToDoubleHashMap *self)
      {
        jint result;
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/los/PythonTimeDependentLOS.h"
#include "java/util/stream/Stream.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/rugged/los/TimeDependentLOS.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace los {

        ::java::lang::Class *PythonTimeDependentLOS::class$ = NULL;
        jmethodID *PythonTimeDependentLOS::mids$ = NULL;
        bool PythonTimeDependentLOS::live$ = false;

        jclass PythonTimeDependentLOS::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/los/PythonTimeDependentLOS");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getLOS_a5eda1966a92bc34] = env->getMethodID(cls, "getLOS", "(ILorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getLOSDerivatives_f9ac050f4f50d612] = env->getMethodID(cls, "getLOSDerivatives", "(ILorg/orekit/time/AbsoluteDate;Lorg/orekit/rugged/utils/DerivativeGenerator;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getNbPixels_d6ab429752e7c267] = env->getMethodID(cls, "getNbPixels", "()I");
            mids$[mid_getParametersDrivers_11e4ca8182c1933d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/stream/Stream;");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonTimeDependentLOS::PythonTimeDependentLOS() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonTimeDependentLOS::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonTimeDependentLOS::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonTimeDependentLOS::pythonExtension(jlong a0) const
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
      namespace los {
        static PyObject *t_PythonTimeDependentLOS_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonTimeDependentLOS_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonTimeDependentLOS_init_(t_PythonTimeDependentLOS *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonTimeDependentLOS_finalize(t_PythonTimeDependentLOS *self);
        static PyObject *t_PythonTimeDependentLOS_pythonExtension(t_PythonTimeDependentLOS *self, PyObject *args);
        static jobject JNICALL t_PythonTimeDependentLOS_getLOS0(JNIEnv *jenv, jobject jobj, jint a0, jobject a1);
        static jobject JNICALL t_PythonTimeDependentLOS_getLOSDerivatives1(JNIEnv *jenv, jobject jobj, jint a0, jobject a1, jobject a2);
        static jint JNICALL t_PythonTimeDependentLOS_getNbPixels2(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonTimeDependentLOS_getParametersDrivers3(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonTimeDependentLOS_pythonDecRef4(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonTimeDependentLOS_get__self(t_PythonTimeDependentLOS *self, void *data);
        static PyGetSetDef t_PythonTimeDependentLOS__fields_[] = {
          DECLARE_GET_FIELD(t_PythonTimeDependentLOS, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonTimeDependentLOS__methods_[] = {
          DECLARE_METHOD(t_PythonTimeDependentLOS, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonTimeDependentLOS, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonTimeDependentLOS, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonTimeDependentLOS, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonTimeDependentLOS)[] = {
          { Py_tp_methods, t_PythonTimeDependentLOS__methods_ },
          { Py_tp_init, (void *) t_PythonTimeDependentLOS_init_ },
          { Py_tp_getset, t_PythonTimeDependentLOS__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonTimeDependentLOS)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonTimeDependentLOS, t_PythonTimeDependentLOS, PythonTimeDependentLOS);

        void t_PythonTimeDependentLOS::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonTimeDependentLOS), &PY_TYPE_DEF(PythonTimeDependentLOS), module, "PythonTimeDependentLOS", 1);
        }

        void t_PythonTimeDependentLOS::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeDependentLOS), "class_", make_descriptor(PythonTimeDependentLOS::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeDependentLOS), "wrapfn_", make_descriptor(t_PythonTimeDependentLOS::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeDependentLOS), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonTimeDependentLOS::initializeClass);
          JNINativeMethod methods[] = {
            { "getLOS", "(ILorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonTimeDependentLOS_getLOS0 },
            { "getLOSDerivatives", "(ILorg/orekit/time/AbsoluteDate;Lorg/orekit/rugged/utils/DerivativeGenerator;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonTimeDependentLOS_getLOSDerivatives1 },
            { "getNbPixels", "()I", (void *) t_PythonTimeDependentLOS_getNbPixels2 },
            { "getParametersDrivers", "()Ljava/util/stream/Stream;", (void *) t_PythonTimeDependentLOS_getParametersDrivers3 },
            { "pythonDecRef", "()V", (void *) t_PythonTimeDependentLOS_pythonDecRef4 },
          };
          env->registerNatives(cls, methods, 5);
        }

        static PyObject *t_PythonTimeDependentLOS_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonTimeDependentLOS::initializeClass, 1)))
            return NULL;
          return t_PythonTimeDependentLOS::wrap_Object(PythonTimeDependentLOS(((t_PythonTimeDependentLOS *) arg)->object.this$));
        }
        static PyObject *t_PythonTimeDependentLOS_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonTimeDependentLOS::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonTimeDependentLOS_init_(t_PythonTimeDependentLOS *self, PyObject *args, PyObject *kwds)
        {
          PythonTimeDependentLOS object((jobject) NULL);

          INT_CALL(object = PythonTimeDependentLOS());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonTimeDependentLOS_finalize(t_PythonTimeDependentLOS *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonTimeDependentLOS_pythonExtension(t_PythonTimeDependentLOS *self, PyObject *args)
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

        static jobject JNICALL t_PythonTimeDependentLOS_getLOS0(JNIEnv *jenv, jobject jobj, jint a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTimeDependentLOS::mids$[PythonTimeDependentLOS::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
          PyObject *result = PyObject_CallMethod(obj, "getLOS", "iO", (int) a0, o1);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("getLOS", result);
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

        static jobject JNICALL t_PythonTimeDependentLOS_getLOSDerivatives1(JNIEnv *jenv, jobject jobj, jint a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTimeDependentLOS::mids$[PythonTimeDependentLOS::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
          PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
          PyObject *o2 = ::org::orekit::rugged::utils::t_DerivativeGenerator::wrap_Object(::org::orekit::rugged::utils::DerivativeGenerator(a2));
          PyObject *result = PyObject_CallMethod(obj, "getLOSDerivatives", "iOO", (int) a0, o1, o2);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
          {
            throwTypeError("getLOSDerivatives", result);
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

        static jint JNICALL t_PythonTimeDependentLOS_getNbPixels2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTimeDependentLOS::mids$[PythonTimeDependentLOS::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getNbPixels", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getNbPixels", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jobject JNICALL t_PythonTimeDependentLOS_getParametersDrivers3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTimeDependentLOS::mids$[PythonTimeDependentLOS::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::stream::Stream value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getParametersDrivers", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::stream::Stream::initializeClass, &value))
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

        static void JNICALL t_PythonTimeDependentLOS_pythonDecRef4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTimeDependentLOS::mids$[PythonTimeDependentLOS::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonTimeDependentLOS::mids$[PythonTimeDependentLOS::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonTimeDependentLOS_get__self(t_PythonTimeDependentLOS *self, void *data)
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
#include "org/hipparchus/util/RyuDouble.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *RyuDouble::class$ = NULL;
      jmethodID *RyuDouble::mids$ = NULL;
      bool RyuDouble::live$ = false;
      jint RyuDouble::DEFAULT_HIGH_EXP = (jint) 0;
      jint RyuDouble::DEFAULT_LOW_EXP = (jint) 0;

      jclass RyuDouble::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/RyuDouble");

          mids$ = new jmethodID[max_mid];
          mids$[mid_doubleToString_e3ac8af686594d08] = env->getStaticMethodID(cls, "doubleToString", "(D)Ljava/lang/String;");
          mids$[mid_doubleToString_6276cd8106be1d74] = env->getStaticMethodID(cls, "doubleToString", "(DII)Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_HIGH_EXP = env->getStaticIntField(cls, "DEFAULT_HIGH_EXP");
          DEFAULT_LOW_EXP = env->getStaticIntField(cls, "DEFAULT_LOW_EXP");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String RyuDouble::doubleToString(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_doubleToString_e3ac8af686594d08], a0));
      }

      ::java::lang::String RyuDouble::doubleToString(jdouble a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_doubleToString_6276cd8106be1d74], a0, a1, a2));
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
      static PyObject *t_RyuDouble_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RyuDouble_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RyuDouble_doubleToString(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_RyuDouble__methods_[] = {
        DECLARE_METHOD(t_RyuDouble, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RyuDouble, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RyuDouble, doubleToString, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RyuDouble)[] = {
        { Py_tp_methods, t_RyuDouble__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RyuDouble)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RyuDouble, t_RyuDouble, RyuDouble);

      void t_RyuDouble::install(PyObject *module)
      {
        installType(&PY_TYPE(RyuDouble), &PY_TYPE_DEF(RyuDouble), module, "RyuDouble", 0);
      }

      void t_RyuDouble::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RyuDouble), "class_", make_descriptor(RyuDouble::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RyuDouble), "wrapfn_", make_descriptor(t_RyuDouble::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RyuDouble), "boxfn_", make_descriptor(boxObject));
        env->getClass(RyuDouble::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(RyuDouble), "DEFAULT_HIGH_EXP", make_descriptor(RyuDouble::DEFAULT_HIGH_EXP));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RyuDouble), "DEFAULT_LOW_EXP", make_descriptor(RyuDouble::DEFAULT_LOW_EXP));
      }

      static PyObject *t_RyuDouble_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RyuDouble::initializeClass, 1)))
          return NULL;
        return t_RyuDouble::wrap_Object(RyuDouble(((t_RyuDouble *) arg)->object.this$));
      }
      static PyObject *t_RyuDouble_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RyuDouble::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RyuDouble_doubleToString(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::RyuDouble::doubleToString(a0));
              return j2p(result);
            }
          }
          break;
         case 3:
          {
            jdouble a0;
            jint a1;
            jint a2;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::RyuDouble::doubleToString(a0, a1, a2));
              return j2p(result);
            }
          }
        }

        PyErr_SetArgsError(type, "doubleToString", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType.h"
#include "java/util/List.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType.h"
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

              ::java::lang::Class *AttitudeCovarianceType::class$ = NULL;
              jmethodID *AttitudeCovarianceType::mids$ = NULL;
              bool AttitudeCovarianceType::live$ = false;
              AttitudeCovarianceType *AttitudeCovarianceType::ANGLE = NULL;
              AttitudeCovarianceType *AttitudeCovarianceType::ANGLE_ANGVEL = NULL;
              AttitudeCovarianceType *AttitudeCovarianceType::ANGLE_GYROBIAS = NULL;
              AttitudeCovarianceType *AttitudeCovarianceType::QUATERNION = NULL;
              AttitudeCovarianceType *AttitudeCovarianceType::QUATERNION_ANGVEL = NULL;
              AttitudeCovarianceType *AttitudeCovarianceType::QUATERNION_GYROBIAS = NULL;

              jclass AttitudeCovarianceType::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_getUnits_d751c1a57012b438] = env->getMethodID(cls, "getUnits", "()Ljava/util/List;");
                  mids$[mid_valueOf_ea19bd44f1992a2d] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;");
                  mids$[mid_values_10ae62aeb815a9aa] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ANGLE = new AttitudeCovarianceType(env->getStaticObjectField(cls, "ANGLE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;"));
                  ANGLE_ANGVEL = new AttitudeCovarianceType(env->getStaticObjectField(cls, "ANGLE_ANGVEL", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;"));
                  ANGLE_GYROBIAS = new AttitudeCovarianceType(env->getStaticObjectField(cls, "ANGLE_GYROBIAS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;"));
                  QUATERNION = new AttitudeCovarianceType(env->getStaticObjectField(cls, "QUATERNION", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;"));
                  QUATERNION_ANGVEL = new AttitudeCovarianceType(env->getStaticObjectField(cls, "QUATERNION_ANGVEL", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;"));
                  QUATERNION_GYROBIAS = new AttitudeCovarianceType(env->getStaticObjectField(cls, "QUATERNION_GYROBIAS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::java::util::List AttitudeCovarianceType::getUnits() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getUnits_d751c1a57012b438]));
              }

              AttitudeCovarianceType AttitudeCovarianceType::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AttitudeCovarianceType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ea19bd44f1992a2d], a0.this$));
              }

              JArray< AttitudeCovarianceType > AttitudeCovarianceType::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AttitudeCovarianceType >(env->callStaticObjectMethod(cls, mids$[mid_values_10ae62aeb815a9aa]));
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
              static PyObject *t_AttitudeCovarianceType_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeCovarianceType_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeCovarianceType_of_(t_AttitudeCovarianceType *self, PyObject *args);
              static PyObject *t_AttitudeCovarianceType_getUnits(t_AttitudeCovarianceType *self);
              static PyObject *t_AttitudeCovarianceType_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AttitudeCovarianceType_values(PyTypeObject *type);
              static PyObject *t_AttitudeCovarianceType_get__units(t_AttitudeCovarianceType *self, void *data);
              static PyObject *t_AttitudeCovarianceType_get__parameters_(t_AttitudeCovarianceType *self, void *data);
              static PyGetSetDef t_AttitudeCovarianceType__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeCovarianceType, units),
                DECLARE_GET_FIELD(t_AttitudeCovarianceType, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeCovarianceType__methods_[] = {
                DECLARE_METHOD(t_AttitudeCovarianceType, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceType, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceType, of_, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeCovarianceType, getUnits, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovarianceType, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceType, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeCovarianceType)[] = {
                { Py_tp_methods, t_AttitudeCovarianceType__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AttitudeCovarianceType__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeCovarianceType)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AttitudeCovarianceType, t_AttitudeCovarianceType, AttitudeCovarianceType);
              PyObject *t_AttitudeCovarianceType::wrap_Object(const AttitudeCovarianceType& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeCovarianceType::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeCovarianceType *self = (t_AttitudeCovarianceType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AttitudeCovarianceType::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeCovarianceType::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeCovarianceType *self = (t_AttitudeCovarianceType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AttitudeCovarianceType::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeCovarianceType), &PY_TYPE_DEF(AttitudeCovarianceType), module, "AttitudeCovarianceType", 0);
              }

              void t_AttitudeCovarianceType::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceType), "class_", make_descriptor(AttitudeCovarianceType::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceType), "wrapfn_", make_descriptor(t_AttitudeCovarianceType::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceType), "boxfn_", make_descriptor(boxObject));
                env->getClass(AttitudeCovarianceType::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceType), "ANGLE", make_descriptor(t_AttitudeCovarianceType::wrap_Object(*AttitudeCovarianceType::ANGLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceType), "ANGLE_ANGVEL", make_descriptor(t_AttitudeCovarianceType::wrap_Object(*AttitudeCovarianceType::ANGLE_ANGVEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceType), "ANGLE_GYROBIAS", make_descriptor(t_AttitudeCovarianceType::wrap_Object(*AttitudeCovarianceType::ANGLE_GYROBIAS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceType), "QUATERNION", make_descriptor(t_AttitudeCovarianceType::wrap_Object(*AttitudeCovarianceType::QUATERNION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceType), "QUATERNION_ANGVEL", make_descriptor(t_AttitudeCovarianceType::wrap_Object(*AttitudeCovarianceType::QUATERNION_ANGVEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceType), "QUATERNION_GYROBIAS", make_descriptor(t_AttitudeCovarianceType::wrap_Object(*AttitudeCovarianceType::QUATERNION_GYROBIAS)));
              }

              static PyObject *t_AttitudeCovarianceType_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeCovarianceType::initializeClass, 1)))
                  return NULL;
                return t_AttitudeCovarianceType::wrap_Object(AttitudeCovarianceType(((t_AttitudeCovarianceType *) arg)->object.this$));
              }
              static PyObject *t_AttitudeCovarianceType_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeCovarianceType::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AttitudeCovarianceType_of_(t_AttitudeCovarianceType *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AttitudeCovarianceType_getUnits(t_AttitudeCovarianceType *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getUnits());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::units::PY_TYPE(Unit));
              }

              static PyObject *t_AttitudeCovarianceType_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AttitudeCovarianceType result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType::valueOf(a0));
                  return t_AttitudeCovarianceType::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AttitudeCovarianceType_values(PyTypeObject *type)
              {
                JArray< AttitudeCovarianceType > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType::values());
                return JArray<jobject>(result.this$).wrap(t_AttitudeCovarianceType::wrap_jobject);
              }
              static PyObject *t_AttitudeCovarianceType_get__parameters_(t_AttitudeCovarianceType *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_AttitudeCovarianceType_get__units(t_AttitudeCovarianceType *self, void *data)
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
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm02Header.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm02Header::class$ = NULL;
              jmethodID *SsrIgm02Header::mids$ = NULL;
              bool SsrIgm02Header::live$ = false;

              jclass SsrIgm02Header::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm02Header");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm02Header::SsrIgm02Header() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}
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
              static PyObject *t_SsrIgm02Header_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm02Header_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm02Header_init_(t_SsrIgm02Header *self, PyObject *args, PyObject *kwds);

              static PyMethodDef t_SsrIgm02Header__methods_[] = {
                DECLARE_METHOD(t_SsrIgm02Header, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm02Header, instance_, METH_O | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm02Header)[] = {
                { Py_tp_methods, t_SsrIgm02Header__methods_ },
                { Py_tp_init, (void *) t_SsrIgm02Header_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm02Header)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader),
                NULL
              };

              DEFINE_TYPE(SsrIgm02Header, t_SsrIgm02Header, SsrIgm02Header);

              void t_SsrIgm02Header::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm02Header), &PY_TYPE_DEF(SsrIgm02Header), module, "SsrIgm02Header", 0);
              }

              void t_SsrIgm02Header::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm02Header), "class_", make_descriptor(SsrIgm02Header::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm02Header), "wrapfn_", make_descriptor(t_SsrIgm02Header::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm02Header), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm02Header_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm02Header::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm02Header::wrap_Object(SsrIgm02Header(((t_SsrIgm02Header *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm02Header_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm02Header::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm02Header_init_(t_SsrIgm02Header *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm02Header object((jobject) NULL);

                INT_CALL(object = SsrIgm02Header());
                self->object = object;

                return 0;
              }
            }
          }
        }
      }
    }
  }
}
