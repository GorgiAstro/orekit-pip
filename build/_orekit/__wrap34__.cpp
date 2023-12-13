#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PythonTimeStampedGenerator.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/TimeStampedGenerator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonTimeStampedGenerator::class$ = NULL;
      jmethodID *PythonTimeStampedGenerator::mids$ = NULL;
      bool PythonTimeStampedGenerator::live$ = false;

      jclass PythonTimeStampedGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonTimeStampedGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_generate_50850a0bb1306a34] = env->getMethodID(cls, "generate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTimeStampedGenerator::PythonTimeStampedGenerator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonTimeStampedGenerator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonTimeStampedGenerator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonTimeStampedGenerator::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
      static PyObject *t_PythonTimeStampedGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeStampedGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeStampedGenerator_of_(t_PythonTimeStampedGenerator *self, PyObject *args);
      static int t_PythonTimeStampedGenerator_init_(t_PythonTimeStampedGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTimeStampedGenerator_finalize(t_PythonTimeStampedGenerator *self);
      static PyObject *t_PythonTimeStampedGenerator_pythonExtension(t_PythonTimeStampedGenerator *self, PyObject *args);
      static jobject JNICALL t_PythonTimeStampedGenerator_generate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonTimeStampedGenerator_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonTimeStampedGenerator_get__self(t_PythonTimeStampedGenerator *self, void *data);
      static PyObject *t_PythonTimeStampedGenerator_get__parameters_(t_PythonTimeStampedGenerator *self, void *data);
      static PyGetSetDef t_PythonTimeStampedGenerator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTimeStampedGenerator, self),
        DECLARE_GET_FIELD(t_PythonTimeStampedGenerator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTimeStampedGenerator__methods_[] = {
        DECLARE_METHOD(t_PythonTimeStampedGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeStampedGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeStampedGenerator, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonTimeStampedGenerator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTimeStampedGenerator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTimeStampedGenerator)[] = {
        { Py_tp_methods, t_PythonTimeStampedGenerator__methods_ },
        { Py_tp_init, (void *) t_PythonTimeStampedGenerator_init_ },
        { Py_tp_getset, t_PythonTimeStampedGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTimeStampedGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTimeStampedGenerator, t_PythonTimeStampedGenerator, PythonTimeStampedGenerator);
      PyObject *t_PythonTimeStampedGenerator::wrap_Object(const PythonTimeStampedGenerator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonTimeStampedGenerator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonTimeStampedGenerator *self = (t_PythonTimeStampedGenerator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonTimeStampedGenerator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonTimeStampedGenerator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonTimeStampedGenerator *self = (t_PythonTimeStampedGenerator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonTimeStampedGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTimeStampedGenerator), &PY_TYPE_DEF(PythonTimeStampedGenerator), module, "PythonTimeStampedGenerator", 1);
      }

      void t_PythonTimeStampedGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeStampedGenerator), "class_", make_descriptor(PythonTimeStampedGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeStampedGenerator), "wrapfn_", make_descriptor(t_PythonTimeStampedGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeStampedGenerator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTimeStampedGenerator::initializeClass);
        JNINativeMethod methods[] = {
          { "generate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;", (void *) t_PythonTimeStampedGenerator_generate0 },
          { "pythonDecRef", "()V", (void *) t_PythonTimeStampedGenerator_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonTimeStampedGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTimeStampedGenerator::initializeClass, 1)))
          return NULL;
        return t_PythonTimeStampedGenerator::wrap_Object(PythonTimeStampedGenerator(((t_PythonTimeStampedGenerator *) arg)->object.this$));
      }
      static PyObject *t_PythonTimeStampedGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTimeStampedGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonTimeStampedGenerator_of_(t_PythonTimeStampedGenerator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonTimeStampedGenerator_init_(t_PythonTimeStampedGenerator *self, PyObject *args, PyObject *kwds)
      {
        PythonTimeStampedGenerator object((jobject) NULL);

        INT_CALL(object = PythonTimeStampedGenerator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTimeStampedGenerator_finalize(t_PythonTimeStampedGenerator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTimeStampedGenerator_pythonExtension(t_PythonTimeStampedGenerator *self, PyObject *args)
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

      static jobject JNICALL t_PythonTimeStampedGenerator_generate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStampedGenerator::mids$[PythonTimeStampedGenerator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "generate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("generate", result);
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

      static void JNICALL t_PythonTimeStampedGenerator_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStampedGenerator::mids$[PythonTimeStampedGenerator::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTimeStampedGenerator::mids$[PythonTimeStampedGenerator::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonTimeStampedGenerator_get__self(t_PythonTimeStampedGenerator *self, void *data)
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
      static PyObject *t_PythonTimeStampedGenerator_get__parameters_(t_PythonTimeStampedGenerator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeStampedFieldHermiteInterpolator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeStampedFieldHermiteInterpolator::class$ = NULL;
      jmethodID *TimeStampedFieldHermiteInterpolator::mids$ = NULL;
      bool TimeStampedFieldHermiteInterpolator::live$ = false;

      jclass TimeStampedFieldHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeStampedFieldHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_d5322b8b512aeb26] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_interpolate_076ee78ae4a1ac17] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractFieldTimeInterpolator$InterpolationData;)Lorg/orekit/time/TimeStampedField;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedFieldHermiteInterpolator::TimeStampedFieldHermiteInterpolator() : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      TimeStampedFieldHermiteInterpolator::TimeStampedFieldHermiteInterpolator(jint a0) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

      TimeStampedFieldHermiteInterpolator::TimeStampedFieldHermiteInterpolator(jint a0, jdouble a1) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_d5322b8b512aeb26, a0, a1)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_TimeStampedFieldHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldHermiteInterpolator_of_(t_TimeStampedFieldHermiteInterpolator *self, PyObject *args);
      static int t_TimeStampedFieldHermiteInterpolator_init_(t_TimeStampedFieldHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedFieldHermiteInterpolator_get__parameters_(t_TimeStampedFieldHermiteInterpolator *self, void *data);
      static PyGetSetDef t_TimeStampedFieldHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedFieldHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedFieldHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_TimeStampedFieldHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldHermiteInterpolator, of_, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedFieldHermiteInterpolator)[] = {
        { Py_tp_methods, t_TimeStampedFieldHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_TimeStampedFieldHermiteInterpolator_init_ },
        { Py_tp_getset, t_TimeStampedFieldHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedFieldHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractFieldTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(TimeStampedFieldHermiteInterpolator, t_TimeStampedFieldHermiteInterpolator, TimeStampedFieldHermiteInterpolator);
      PyObject *t_TimeStampedFieldHermiteInterpolator::wrap_Object(const TimeStampedFieldHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldHermiteInterpolator *self = (t_TimeStampedFieldHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedFieldHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldHermiteInterpolator *self = (t_TimeStampedFieldHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedFieldHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedFieldHermiteInterpolator), &PY_TYPE_DEF(TimeStampedFieldHermiteInterpolator), module, "TimeStampedFieldHermiteInterpolator", 0);
      }

      void t_TimeStampedFieldHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldHermiteInterpolator), "class_", make_descriptor(TimeStampedFieldHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldHermiteInterpolator), "wrapfn_", make_descriptor(t_TimeStampedFieldHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedFieldHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedFieldHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_TimeStampedFieldHermiteInterpolator::wrap_Object(TimeStampedFieldHermiteInterpolator(((t_TimeStampedFieldHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedFieldHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedFieldHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedFieldHermiteInterpolator_of_(t_TimeStampedFieldHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedFieldHermiteInterpolator_init_(t_TimeStampedFieldHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            TimeStampedFieldHermiteInterpolator object((jobject) NULL);

            INT_CALL(object = TimeStampedFieldHermiteInterpolator());
            self->object = object;
            break;
          }
         case 1:
          {
            jint a0;
            TimeStampedFieldHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = TimeStampedFieldHermiteInterpolator(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            jdouble a1;
            TimeStampedFieldHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = TimeStampedFieldHermiteInterpolator(a0, a1));
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
      static PyObject *t_TimeStampedFieldHermiteInterpolator_get__parameters_(t_TimeStampedFieldHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmTleKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmTle.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmTleKey.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace omm {

              ::java::lang::Class *OmmTleKey::class$ = NULL;
              jmethodID *OmmTleKey::mids$ = NULL;
              bool OmmTleKey::live$ = false;
              OmmTleKey *OmmTleKey::AGOM = NULL;
              OmmTleKey *OmmTleKey::BSTAR = NULL;
              OmmTleKey *OmmTleKey::BTERM = NULL;
              OmmTleKey *OmmTleKey::CLASSIFICATION_TYPE = NULL;
              OmmTleKey *OmmTleKey::COMMENT = NULL;
              OmmTleKey *OmmTleKey::ELEMENT_SET_NO = NULL;
              OmmTleKey *OmmTleKey::EPHEMERIS_TYPE = NULL;
              OmmTleKey *OmmTleKey::MEAN_MOTION_DDOT = NULL;
              OmmTleKey *OmmTleKey::MEAN_MOTION_DOT = NULL;
              OmmTleKey *OmmTleKey::NORAD_CAT_ID = NULL;
              OmmTleKey *OmmTleKey::REV_AT_EPOCH = NULL;

              jclass OmmTleKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/omm/OmmTleKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_250186570e98f950] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTle;)Z");
                  mids$[mid_valueOf_4961e07f15cc3b9e] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;");
                  mids$[mid_values_57d6ceb70677fa7a] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  AGOM = new OmmTleKey(env->getStaticObjectField(cls, "AGOM", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;"));
                  BSTAR = new OmmTleKey(env->getStaticObjectField(cls, "BSTAR", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;"));
                  BTERM = new OmmTleKey(env->getStaticObjectField(cls, "BTERM", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;"));
                  CLASSIFICATION_TYPE = new OmmTleKey(env->getStaticObjectField(cls, "CLASSIFICATION_TYPE", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;"));
                  COMMENT = new OmmTleKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;"));
                  ELEMENT_SET_NO = new OmmTleKey(env->getStaticObjectField(cls, "ELEMENT_SET_NO", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;"));
                  EPHEMERIS_TYPE = new OmmTleKey(env->getStaticObjectField(cls, "EPHEMERIS_TYPE", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;"));
                  MEAN_MOTION_DDOT = new OmmTleKey(env->getStaticObjectField(cls, "MEAN_MOTION_DDOT", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;"));
                  MEAN_MOTION_DOT = new OmmTleKey(env->getStaticObjectField(cls, "MEAN_MOTION_DOT", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;"));
                  NORAD_CAT_ID = new OmmTleKey(env->getStaticObjectField(cls, "NORAD_CAT_ID", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;"));
                  REV_AT_EPOCH = new OmmTleKey(env->getStaticObjectField(cls, "REV_AT_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean OmmTleKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::omm::OmmTle & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_250186570e98f950], a0.this$, a1.this$, a2.this$);
              }

              OmmTleKey OmmTleKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OmmTleKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_4961e07f15cc3b9e], a0.this$));
              }

              JArray< OmmTleKey > OmmTleKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OmmTleKey >(env->callStaticObjectMethod(cls, mids$[mid_values_57d6ceb70677fa7a]));
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
            namespace omm {
              static PyObject *t_OmmTleKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmTleKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmTleKey_of_(t_OmmTleKey *self, PyObject *args);
              static PyObject *t_OmmTleKey_process(t_OmmTleKey *self, PyObject *args);
              static PyObject *t_OmmTleKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OmmTleKey_values(PyTypeObject *type);
              static PyObject *t_OmmTleKey_get__parameters_(t_OmmTleKey *self, void *data);
              static PyGetSetDef t_OmmTleKey__fields_[] = {
                DECLARE_GET_FIELD(t_OmmTleKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OmmTleKey__methods_[] = {
                DECLARE_METHOD(t_OmmTleKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmTleKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmTleKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_OmmTleKey, process, METH_VARARGS),
                DECLARE_METHOD(t_OmmTleKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OmmTleKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OmmTleKey)[] = {
                { Py_tp_methods, t_OmmTleKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OmmTleKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OmmTleKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OmmTleKey, t_OmmTleKey, OmmTleKey);
              PyObject *t_OmmTleKey::wrap_Object(const OmmTleKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OmmTleKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OmmTleKey *self = (t_OmmTleKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OmmTleKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OmmTleKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OmmTleKey *self = (t_OmmTleKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OmmTleKey::install(PyObject *module)
              {
                installType(&PY_TYPE(OmmTleKey), &PY_TYPE_DEF(OmmTleKey), module, "OmmTleKey", 0);
              }

              void t_OmmTleKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "class_", make_descriptor(OmmTleKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "wrapfn_", make_descriptor(t_OmmTleKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(OmmTleKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "AGOM", make_descriptor(t_OmmTleKey::wrap_Object(*OmmTleKey::AGOM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "BSTAR", make_descriptor(t_OmmTleKey::wrap_Object(*OmmTleKey::BSTAR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "BTERM", make_descriptor(t_OmmTleKey::wrap_Object(*OmmTleKey::BTERM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "CLASSIFICATION_TYPE", make_descriptor(t_OmmTleKey::wrap_Object(*OmmTleKey::CLASSIFICATION_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "COMMENT", make_descriptor(t_OmmTleKey::wrap_Object(*OmmTleKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "ELEMENT_SET_NO", make_descriptor(t_OmmTleKey::wrap_Object(*OmmTleKey::ELEMENT_SET_NO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "EPHEMERIS_TYPE", make_descriptor(t_OmmTleKey::wrap_Object(*OmmTleKey::EPHEMERIS_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "MEAN_MOTION_DDOT", make_descriptor(t_OmmTleKey::wrap_Object(*OmmTleKey::MEAN_MOTION_DDOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "MEAN_MOTION_DOT", make_descriptor(t_OmmTleKey::wrap_Object(*OmmTleKey::MEAN_MOTION_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "NORAD_CAT_ID", make_descriptor(t_OmmTleKey::wrap_Object(*OmmTleKey::NORAD_CAT_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTleKey), "REV_AT_EPOCH", make_descriptor(t_OmmTleKey::wrap_Object(*OmmTleKey::REV_AT_EPOCH)));
              }

              static PyObject *t_OmmTleKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OmmTleKey::initializeClass, 1)))
                  return NULL;
                return t_OmmTleKey::wrap_Object(OmmTleKey(((t_OmmTleKey *) arg)->object.this$));
              }
              static PyObject *t_OmmTleKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OmmTleKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OmmTleKey_of_(t_OmmTleKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OmmTleKey_process(t_OmmTleKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::omm::OmmTle a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::omm::OmmTle::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_OmmTleKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OmmTleKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::omm::OmmTleKey::valueOf(a0));
                  return t_OmmTleKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OmmTleKey_values(PyTypeObject *type)
              {
                JArray< OmmTleKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::omm::OmmTleKey::values());
                return JArray<jobject>(result.this$).wrap(t_OmmTleKey::wrap_jobject);
              }
              static PyObject *t_OmmTleKey_get__parameters_(t_OmmTleKey *self, void *data)
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
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace exception {

      ::java::lang::Class *MathIllegalArgumentException::class$ = NULL;
      jmethodID *MathIllegalArgumentException::mids$ = NULL;
      bool MathIllegalArgumentException::live$ = false;

      jclass MathIllegalArgumentException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/exception/MathIllegalArgumentException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_9b3ada3301b0db8c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_init$_4d462b77e7e55a0d] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MathIllegalArgumentException::MathIllegalArgumentException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::org::hipparchus::exception::MathRuntimeException(env->newObject(initializeClass, &mids$, mid_init$_9b3ada3301b0db8c, a0.this$, a1.this$)) {}

      MathIllegalArgumentException::MathIllegalArgumentException(const ::java::lang::Throwable & a0, const ::org::hipparchus::exception::Localizable & a1, const JArray< ::java::lang::Object > & a2) : ::org::hipparchus::exception::MathRuntimeException(env->newObject(initializeClass, &mids$, mid_init$_4d462b77e7e55a0d, a0.this$, a1.this$, a2.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      static PyObject *t_MathIllegalArgumentException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathIllegalArgumentException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_MathIllegalArgumentException_init_(t_MathIllegalArgumentException *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_MathIllegalArgumentException__methods_[] = {
        DECLARE_METHOD(t_MathIllegalArgumentException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathIllegalArgumentException, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathIllegalArgumentException)[] = {
        { Py_tp_methods, t_MathIllegalArgumentException__methods_ },
        { Py_tp_init, (void *) t_MathIllegalArgumentException_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathIllegalArgumentException)[] = {
        &PY_TYPE_DEF(::org::hipparchus::exception::MathRuntimeException),
        NULL
      };

      DEFINE_TYPE(MathIllegalArgumentException, t_MathIllegalArgumentException, MathIllegalArgumentException);

      void t_MathIllegalArgumentException::install(PyObject *module)
      {
        installType(&PY_TYPE(MathIllegalArgumentException), &PY_TYPE_DEF(MathIllegalArgumentException), module, "MathIllegalArgumentException", 0);
      }

      void t_MathIllegalArgumentException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathIllegalArgumentException), "class_", make_descriptor(MathIllegalArgumentException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathIllegalArgumentException), "wrapfn_", make_descriptor(t_MathIllegalArgumentException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathIllegalArgumentException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MathIllegalArgumentException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathIllegalArgumentException::initializeClass, 1)))
          return NULL;
        return t_MathIllegalArgumentException::wrap_Object(MathIllegalArgumentException(((t_MathIllegalArgumentException *) arg)->object.this$));
      }
      static PyObject *t_MathIllegalArgumentException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathIllegalArgumentException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_MathIllegalArgumentException_init_(t_MathIllegalArgumentException *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::exception::Localizable a0((jobject) NULL);
            JArray< ::java::lang::Object > a1((jobject) NULL);
            MathIllegalArgumentException object((jobject) NULL);

            if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
            {
              INT_CALL(object = MathIllegalArgumentException(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::lang::Throwable a0((jobject) NULL);
            ::org::hipparchus::exception::Localizable a1((jobject) NULL);
            JArray< ::java::lang::Object > a2((jobject) NULL);
            MathIllegalArgumentException object((jobject) NULL);

            if (!parseArgs(args, "kk[o", ::java::lang::Throwable::initializeClass, ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = MathIllegalArgumentException(a0, a1, a2));
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
#include "org/orekit/files/ccsds/utils/lexical/RegularXmlTokenBuilder.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *RegularXmlTokenBuilder::class$ = NULL;
            jmethodID *RegularXmlTokenBuilder::mids$ = NULL;
            bool RegularXmlTokenBuilder::live$ = false;

            jclass RegularXmlTokenBuilder::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/RegularXmlTokenBuilder");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_buildTokens_2c588550a962bd9d] = env->getMethodID(cls, "buildTokens", "(ZZLjava/lang/String;Ljava/lang/String;Ljava/util/Map;ILjava/lang/String;)Ljava/util/List;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            RegularXmlTokenBuilder::RegularXmlTokenBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            ::java::util::List RegularXmlTokenBuilder::buildTokens(jboolean a0, jboolean a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::util::Map & a4, jint a5, const ::java::lang::String & a6) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_buildTokens_2c588550a962bd9d], a0, a1, a2.this$, a3.this$, a4.this$, a5, a6.this$));
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
            static PyObject *t_RegularXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RegularXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg);
            static int t_RegularXmlTokenBuilder_init_(t_RegularXmlTokenBuilder *self, PyObject *args, PyObject *kwds);
            static PyObject *t_RegularXmlTokenBuilder_buildTokens(t_RegularXmlTokenBuilder *self, PyObject *args);

            static PyMethodDef t_RegularXmlTokenBuilder__methods_[] = {
              DECLARE_METHOD(t_RegularXmlTokenBuilder, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RegularXmlTokenBuilder, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RegularXmlTokenBuilder, buildTokens, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RegularXmlTokenBuilder)[] = {
              { Py_tp_methods, t_RegularXmlTokenBuilder__methods_ },
              { Py_tp_init, (void *) t_RegularXmlTokenBuilder_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RegularXmlTokenBuilder)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(RegularXmlTokenBuilder, t_RegularXmlTokenBuilder, RegularXmlTokenBuilder);

            void t_RegularXmlTokenBuilder::install(PyObject *module)
            {
              installType(&PY_TYPE(RegularXmlTokenBuilder), &PY_TYPE_DEF(RegularXmlTokenBuilder), module, "RegularXmlTokenBuilder", 0);
            }

            void t_RegularXmlTokenBuilder::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RegularXmlTokenBuilder), "class_", make_descriptor(RegularXmlTokenBuilder::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RegularXmlTokenBuilder), "wrapfn_", make_descriptor(t_RegularXmlTokenBuilder::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RegularXmlTokenBuilder), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_RegularXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RegularXmlTokenBuilder::initializeClass, 1)))
                return NULL;
              return t_RegularXmlTokenBuilder::wrap_Object(RegularXmlTokenBuilder(((t_RegularXmlTokenBuilder *) arg)->object.this$));
            }
            static PyObject *t_RegularXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RegularXmlTokenBuilder::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_RegularXmlTokenBuilder_init_(t_RegularXmlTokenBuilder *self, PyObject *args, PyObject *kwds)
            {
              RegularXmlTokenBuilder object((jobject) NULL);

              INT_CALL(object = RegularXmlTokenBuilder());
              self->object = object;

              return 0;
            }

            static PyObject *t_RegularXmlTokenBuilder_buildTokens(t_RegularXmlTokenBuilder *self, PyObject *args)
            {
              jboolean a0;
              jboolean a1;
              ::java::lang::String a2((jobject) NULL);
              ::java::lang::String a3((jobject) NULL);
              ::java::util::Map a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              ::java::lang::String a6((jobject) NULL);
              ::java::util::List result((jobject) NULL);

              if (!parseArgs(args, "ZZssKIs", ::java::util::Map::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::java::util::t_Map::parameters_, &a5, &a6))
              {
                OBJ_CALL(result = self->object.buildTokens(a0, a1, a2, a3, a4, a5, a6));
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(ParseToken));
              }

              PyErr_SetArgsError((PyObject *) self, "buildTokens", args);
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
#include "org/orekit/estimation/iod/IodGauss.h"
#include "org/orekit/estimation/measurements/AngularRaDec.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/estimation/measurements/AngularAzEl.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace iod {

        ::java::lang::Class *IodGauss::class$ = NULL;
        jmethodID *IodGauss::mids$ = NULL;
        bool IodGauss::live$ = false;

        jclass IodGauss::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/iod/IodGauss");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_estimate_14e3a21de9c1f0bf] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/AngularAzEl;Lorg/orekit/estimation/measurements/AngularAzEl;Lorg/orekit/estimation/measurements/AngularAzEl;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_2c2b31d5e422b743] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/AngularRaDec;Lorg/orekit/estimation/measurements/AngularRaDec;Lorg/orekit/estimation/measurements/AngularRaDec;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_488933f0a2ce410b] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/orbits/Orbit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IodGauss::IodGauss(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        ::org::orekit::orbits::Orbit IodGauss::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::AngularAzEl & a1, const ::org::orekit::estimation::measurements::AngularAzEl & a2, const ::org::orekit::estimation::measurements::AngularAzEl & a3) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_14e3a21de9c1f0bf], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::orbits::Orbit IodGauss::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::AngularRaDec & a1, const ::org::orekit::estimation::measurements::AngularRaDec & a2, const ::org::orekit::estimation::measurements::AngularRaDec & a3) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_2c2b31d5e422b743], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::orbits::Orbit IodGauss::estimate(const ::org::orekit::frames::Frame & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4, const ::org::orekit::time::AbsoluteDate & a5, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a6, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a7, const ::org::orekit::time::AbsoluteDate & a8, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a9) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_488933f0a2ce410b], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$));
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
      namespace iod {
        static PyObject *t_IodGauss_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IodGauss_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IodGauss_init_(t_IodGauss *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IodGauss_estimate(t_IodGauss *self, PyObject *args);

        static PyMethodDef t_IodGauss__methods_[] = {
          DECLARE_METHOD(t_IodGauss, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IodGauss, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IodGauss, estimate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IodGauss)[] = {
          { Py_tp_methods, t_IodGauss__methods_ },
          { Py_tp_init, (void *) t_IodGauss_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IodGauss)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IodGauss, t_IodGauss, IodGauss);

        void t_IodGauss::install(PyObject *module)
        {
          installType(&PY_TYPE(IodGauss), &PY_TYPE_DEF(IodGauss), module, "IodGauss", 0);
        }

        void t_IodGauss::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodGauss), "class_", make_descriptor(IodGauss::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodGauss), "wrapfn_", make_descriptor(t_IodGauss::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodGauss), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IodGauss_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IodGauss::initializeClass, 1)))
            return NULL;
          return t_IodGauss::wrap_Object(IodGauss(((t_IodGauss *) arg)->object.this$));
        }
        static PyObject *t_IodGauss_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IodGauss::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IodGauss_init_(t_IodGauss *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          IodGauss object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = IodGauss(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_IodGauss_estimate(t_IodGauss *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::estimation::measurements::AngularAzEl a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::estimation::measurements::AngularAzEl a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::estimation::measurements::AngularAzEl a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kKKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_, &a2, &p2, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_, &a3, &p3, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::estimation::measurements::AngularRaDec a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::estimation::measurements::AngularRaDec a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::estimation::measurements::AngularRaDec a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kKKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_, &a2, &p2, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_, &a3, &p3, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            break;
           case 10:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a5((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a6((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a7((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a8((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a9((jobject) NULL);
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kkkkkkkkkk", ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "estimate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/OrbitBlender.h"
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *OrbitBlender::class$ = NULL;
      jmethodID *OrbitBlender::mids$ = NULL;
      bool OrbitBlender::live$ = false;

      jclass OrbitBlender::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/OrbitBlender");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0b8cd9596e67e602] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction;Lorg/orekit/propagation/Propagator;Lorg/orekit/frames/Frame;)V");
          mids$[mid_interpolate_ea364fd17b3fd043] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/orbits/Orbit;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrbitBlender::OrbitBlender(const ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction & a0, const ::org::orekit::propagation::Propagator & a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::orbits::AbstractOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_0b8cd9596e67e602, a0.this$, a1.this$, a2.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_OrbitBlender_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrbitBlender_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrbitBlender_of_(t_OrbitBlender *self, PyObject *args);
      static int t_OrbitBlender_init_(t_OrbitBlender *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrbitBlender_get__parameters_(t_OrbitBlender *self, void *data);
      static PyGetSetDef t_OrbitBlender__fields_[] = {
        DECLARE_GET_FIELD(t_OrbitBlender, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrbitBlender__methods_[] = {
        DECLARE_METHOD(t_OrbitBlender, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrbitBlender, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrbitBlender, of_, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrbitBlender)[] = {
        { Py_tp_methods, t_OrbitBlender__methods_ },
        { Py_tp_init, (void *) t_OrbitBlender_init_ },
        { Py_tp_getset, t_OrbitBlender__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrbitBlender)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::AbstractOrbitInterpolator),
        NULL
      };

      DEFINE_TYPE(OrbitBlender, t_OrbitBlender, OrbitBlender);
      PyObject *t_OrbitBlender::wrap_Object(const OrbitBlender& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OrbitBlender::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OrbitBlender *self = (t_OrbitBlender *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_OrbitBlender::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OrbitBlender::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OrbitBlender *self = (t_OrbitBlender *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_OrbitBlender::install(PyObject *module)
      {
        installType(&PY_TYPE(OrbitBlender), &PY_TYPE_DEF(OrbitBlender), module, "OrbitBlender", 0);
      }

      void t_OrbitBlender::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitBlender), "class_", make_descriptor(OrbitBlender::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitBlender), "wrapfn_", make_descriptor(t_OrbitBlender::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitBlender), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrbitBlender_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrbitBlender::initializeClass, 1)))
          return NULL;
        return t_OrbitBlender::wrap_Object(OrbitBlender(((t_OrbitBlender *) arg)->object.this$));
      }
      static PyObject *t_OrbitBlender_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrbitBlender::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OrbitBlender_of_(t_OrbitBlender *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_OrbitBlender_init_(t_OrbitBlender *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction a0((jobject) NULL);
        ::org::orekit::propagation::Propagator a1((jobject) NULL);
        ::org::orekit::frames::Frame a2((jobject) NULL);
        OrbitBlender object((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction::initializeClass, ::org::orekit::propagation::Propagator::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = OrbitBlender(a0, a1, a2));
          self->object = object;
          self->parameters[0] = ::org::orekit::orbits::PY_TYPE(Orbit);
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }
      static PyObject *t_OrbitBlender_get__parameters_(t_OrbitBlender *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *Derivative::class$ = NULL;
        jmethodID *Derivative::mids$ = NULL;
        bool Derivative::live$ = false;

        jclass Derivative::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/Derivative");

            mids$ = new jmethodID[max_mid];
            mids$[mid_compose_447413902a94c4ea] = env->getMethodID(cls, "compose", "([D)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getFreeParameters_55546ef6a647f39b] = env->getMethodID(cls, "getFreeParameters", "()I");
            mids$[mid_getOrder_55546ef6a647f39b] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPartialDerivative_bff393394ab19dc1] = env->getMethodID(cls, "getPartialDerivative", "([I)D");
            mids$[mid_getValue_b74f83833fdad017] = env->getMethodID(cls, "getValue", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement Derivative::compose(const JArray< jdouble > & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_compose_447413902a94c4ea], a0.this$));
        }

        jint Derivative::getFreeParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeParameters_55546ef6a647f39b]);
        }

        jint Derivative::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_55546ef6a647f39b]);
        }

        jdouble Derivative::getPartialDerivative(const JArray< jint > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPartialDerivative_bff393394ab19dc1], a0.this$);
        }

        jdouble Derivative::getValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getValue_b74f83833fdad017]);
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
        static PyObject *t_Derivative_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Derivative_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Derivative_of_(t_Derivative *self, PyObject *args);
        static PyObject *t_Derivative_compose(t_Derivative *self, PyObject *arg);
        static PyObject *t_Derivative_getFreeParameters(t_Derivative *self);
        static PyObject *t_Derivative_getOrder(t_Derivative *self);
        static PyObject *t_Derivative_getPartialDerivative(t_Derivative *self, PyObject *arg);
        static PyObject *t_Derivative_getValue(t_Derivative *self);
        static PyObject *t_Derivative_get__freeParameters(t_Derivative *self, void *data);
        static PyObject *t_Derivative_get__order(t_Derivative *self, void *data);
        static PyObject *t_Derivative_get__value(t_Derivative *self, void *data);
        static PyObject *t_Derivative_get__parameters_(t_Derivative *self, void *data);
        static PyGetSetDef t_Derivative__fields_[] = {
          DECLARE_GET_FIELD(t_Derivative, freeParameters),
          DECLARE_GET_FIELD(t_Derivative, order),
          DECLARE_GET_FIELD(t_Derivative, value),
          DECLARE_GET_FIELD(t_Derivative, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Derivative__methods_[] = {
          DECLARE_METHOD(t_Derivative, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Derivative, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Derivative, of_, METH_VARARGS),
          DECLARE_METHOD(t_Derivative, compose, METH_O),
          DECLARE_METHOD(t_Derivative, getFreeParameters, METH_NOARGS),
          DECLARE_METHOD(t_Derivative, getOrder, METH_NOARGS),
          DECLARE_METHOD(t_Derivative, getPartialDerivative, METH_O),
          DECLARE_METHOD(t_Derivative, getValue, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Derivative)[] = {
          { Py_tp_methods, t_Derivative__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Derivative__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Derivative)[] = {
          &PY_TYPE_DEF(::org::hipparchus::CalculusFieldElement),
          NULL
        };

        DEFINE_TYPE(Derivative, t_Derivative, Derivative);
        PyObject *t_Derivative::wrap_Object(const Derivative& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Derivative::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Derivative *self = (t_Derivative *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Derivative::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Derivative::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Derivative *self = (t_Derivative *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Derivative::install(PyObject *module)
        {
          installType(&PY_TYPE(Derivative), &PY_TYPE_DEF(Derivative), module, "Derivative", 0);
        }

        void t_Derivative::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Derivative), "class_", make_descriptor(Derivative::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Derivative), "wrapfn_", make_descriptor(t_Derivative::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Derivative), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Derivative_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Derivative::initializeClass, 1)))
            return NULL;
          return t_Derivative::wrap_Object(Derivative(((t_Derivative *) arg)->object.this$));
        }
        static PyObject *t_Derivative_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Derivative::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Derivative_of_(t_Derivative *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Derivative_compose(t_Derivative *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.compose(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "compose", arg);
          return NULL;
        }

        static PyObject *t_Derivative_getFreeParameters(t_Derivative *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Derivative_getOrder(t_Derivative *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Derivative_getPartialDerivative(t_Derivative *self, PyObject *arg)
        {
          JArray< jint > a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "[I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialDerivative(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivative", arg);
          return NULL;
        }

        static PyObject *t_Derivative_getValue(t_Derivative *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getValue());
          return PyFloat_FromDouble((double) result);
        }
        static PyObject *t_Derivative_get__parameters_(t_Derivative *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_Derivative_get__freeParameters(t_Derivative *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Derivative_get__order(t_Derivative *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Derivative_get__value(t_Derivative *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/BrouwerLyddanePropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/KeplerianOrbit.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
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
            mids$[mid_init$_0bbb089293bc4a88] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;D)V");
            mids$[mid_init$_8a2d9c584fe29945] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/propagation/PropagationType;D)V");
            mids$[mid_init$_728615302266739c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;D)V");
            mids$[mid_init$_d9dbf61a012914dd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;D)V");
            mids$[mid_init$_72b4effae4c01625] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;D)V");
            mids$[mid_init$_faf0d800c8f6e365] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/propagation/PropagationType;D)V");
            mids$[mid_init$_c16ad5c95c13d840] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;D)V");
            mids$[mid_init$_6c81fde1ab8df027] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;Lorg/orekit/propagation/PropagationType;D)V");
            mids$[mid_init$_aa6e6da4b4001fdc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;DDDDDDD)V");
            mids$[mid_init$_c2b0e265375635a9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;DDDDDDDD)V");
            mids$[mid_init$_f485802d763f13ed] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DDDDDDD)V");
            mids$[mid_init$_a5f830cc0aa5c9db] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DDDDDDDD)V");
            mids$[mid_init$_21f4c27413777dd7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DDDDDDDLorg/orekit/propagation/PropagationType;D)V");
            mids$[mid_init$_f13a908cbdc32ee1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/AttitudeProvider;DDDDDDDLorg/orekit/propagation/PropagationType;DDI)V");
            mids$[mid_computeMeanOrbit_c35a3d7f9cccaea0] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;D)Lorg/orekit/orbits/KeplerianOrbit;");
            mids$[mid_computeMeanOrbit_e039e89fdb8e6640] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;DDI)Lorg/orekit/orbits/KeplerianOrbit;");
            mids$[mid_computeMeanOrbit_970bb7109236d90c] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/Orbit;DDDDDDDDI)Lorg/orekit/orbits/KeplerianOrbit;");
            mids$[mid_getCk0_25e1757a36c4dde2] = env->getMethodID(cls, "getCk0", "()[D");
            mids$[mid_getM2_b74f83833fdad017] = env->getMethodID(cls, "getM2", "()D");
            mids$[mid_getMu_b74f83833fdad017] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_getReferenceRadius_b74f83833fdad017] = env->getMethodID(cls, "getReferenceRadius", "()D");
            mids$[mid_propagateOrbit_4904353d33ab9854] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/KeplerianOrbit;");
            mids$[mid_resetInitialState_280c3390961e0a50] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_resetInitialState_5cc6a7fd8ae54bf5] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_resetInitialState_37269bbd67e095aa] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/PropagationType;DI)V");
            mids$[mid_getMass_fd347811007a6ba3] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getJacobiansColumnsNames_e62d3bb06d56d7e3] = env->getMethodID(cls, "getJacobiansColumnsNames", "()Ljava/util/List;");
            mids$[mid_resetIntermediateState_3e9d696c5e44e513] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;ZDI)V");
            mids$[mid_resetIntermediateState_1c47c97cdbc7e206] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
            mids$[mid_createHarvester_f85b53b28e0fe6bb] = env->getMethodID(cls, "createHarvester", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/AbstractMatricesHarvester;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            M2 = env->getStaticDoubleField(cls, "M2");
            M2_NAME = new ::java::lang::String(env->getStaticObjectField(cls, "M2_NAME", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, jdouble a2) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_0bbb089293bc4a88, a0.this$, a1.this$, a2)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::propagation::PropagationType & a2, jdouble a3) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_8a2d9c584fe29945, a0.this$, a1.this$, a2.this$, a3)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, jdouble a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2, jdouble a3) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_728615302266739c, a0.this$, a1, a2.this$, a3)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2, jdouble a3) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_d9dbf61a012914dd, a0.this$, a1.this$, a2.this$, a3)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, jdouble a4) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_72b4effae4c01625, a0.this$, a1.this$, a2, a3.this$, a4)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::propagation::PropagationType & a4, jdouble a5) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_faf0d800c8f6e365, a0.this$, a1.this$, a2, a3.this$, a4.this$, a5)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a4, jdouble a5) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_c16ad5c95c13d840, a0.this$, a1.this$, a2, a3.this$, a4.this$, a5)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a4, const ::org::orekit::propagation::PropagationType & a5, jdouble a6) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_6c81fde1ab8df027, a0.this$, a1.this$, a2, a3.this$, a4.this$, a5.this$, a6)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_aa6e6da4b4001fdc, a0.this$, a1, a2, a3, a4, a5, a6, a7)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_c2b0e265375635a9, a0.this$, a1, a2, a3, a4, a5, a6, a7, a8)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_f485802d763f13ed, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_a5f830cc0aa5c9db, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8, a9)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, const ::org::orekit::propagation::PropagationType & a9, jdouble a10) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_21f4c27413777dd7, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8, a9.this$, a10)) {}

        BrouwerLyddanePropagator::BrouwerLyddanePropagator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, const ::org::orekit::propagation::PropagationType & a9, jdouble a10, jdouble a11, jint a12) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_f13a908cbdc32ee1, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7, a8, a9.this$, a10, a11, a12)) {}

        ::org::orekit::orbits::KeplerianOrbit BrouwerLyddanePropagator::computeMeanOrbit(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a2, jdouble a3)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::KeplerianOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_c35a3d7f9cccaea0], a0.this$, a1.this$, a2.this$, a3));
        }

        ::org::orekit::orbits::KeplerianOrbit BrouwerLyddanePropagator::computeMeanOrbit(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a2, jdouble a3, jdouble a4, jint a5)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::KeplerianOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_e039e89fdb8e6640], a0.this$, a1.this$, a2.this$, a3, a4, a5));
        }

        ::org::orekit::orbits::KeplerianOrbit BrouwerLyddanePropagator::computeMeanOrbit(const ::org::orekit::orbits::Orbit & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jint a9)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::KeplerianOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_970bb7109236d90c], a0.this$, a1, a2, a3, a4, a5, a6, a7, a8, a9));
        }

        JArray< jdouble > BrouwerLyddanePropagator::getCk0() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCk0_25e1757a36c4dde2]));
        }

        jdouble BrouwerLyddanePropagator::getM2() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getM2_b74f83833fdad017]);
        }

        jdouble BrouwerLyddanePropagator::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_b74f83833fdad017]);
        }

        ::java::util::List BrouwerLyddanePropagator::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
        }

        jdouble BrouwerLyddanePropagator::getReferenceRadius() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReferenceRadius_b74f83833fdad017]);
        }

        ::org::orekit::orbits::KeplerianOrbit BrouwerLyddanePropagator::propagateOrbit(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::orbits::KeplerianOrbit(env->callObjectMethod(this$, mids$[mid_propagateOrbit_4904353d33ab9854], a0.this$));
        }

        void BrouwerLyddanePropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_280c3390961e0a50], a0.this$);
        }

        void BrouwerLyddanePropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_5cc6a7fd8ae54bf5], a0.this$, a1.this$);
        }

        void BrouwerLyddanePropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1, jdouble a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_37269bbd67e095aa], a0.this$, a1.this$, a2, a3);
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
#include "org/hipparchus/analysis/integration/gauss/FieldGaussIntegrator.h"
#include "org/hipparchus/util/Pair.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *FieldGaussIntegrator::class$ = NULL;
          jmethodID *FieldGaussIntegrator::mids$ = NULL;
          bool FieldGaussIntegrator::live$ = false;

          jclass FieldGaussIntegrator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/FieldGaussIntegrator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_24d37c4bbd61d20e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/util/Pair;)V");
              mids$[mid_init$_2d4b2d13ddc9fb6a] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_getNumberOfPoints_55546ef6a647f39b] = env->getMethodID(cls, "getNumberOfPoints", "()I");
              mids$[mid_getPoint_21e6b3c521b9c768] = env->getMethodID(cls, "getPoint", "(I)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getWeight_21e6b3c521b9c768] = env->getMethodID(cls, "getWeight", "(I)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_integrate_f7872a0c37da2960] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/analysis/CalculusFieldUnivariateFunction;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldGaussIntegrator::FieldGaussIntegrator(const ::org::hipparchus::util::Pair & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_24d37c4bbd61d20e, a0.this$)) {}

          FieldGaussIntegrator::FieldGaussIntegrator(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2d4b2d13ddc9fb6a, a0.this$, a1.this$)) {}

          jint FieldGaussIntegrator::getNumberOfPoints() const
          {
            return env->callIntMethod(this$, mids$[mid_getNumberOfPoints_55546ef6a647f39b]);
          }

          ::org::hipparchus::CalculusFieldElement FieldGaussIntegrator::getPoint(jint a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPoint_21e6b3c521b9c768], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldGaussIntegrator::getWeight(jint a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getWeight_21e6b3c521b9c768], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldGaussIntegrator::integrate(const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_integrate_f7872a0c37da2960], a0.this$));
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
          static PyObject *t_FieldGaussIntegrator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldGaussIntegrator_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldGaussIntegrator_of_(t_FieldGaussIntegrator *self, PyObject *args);
          static int t_FieldGaussIntegrator_init_(t_FieldGaussIntegrator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldGaussIntegrator_getNumberOfPoints(t_FieldGaussIntegrator *self);
          static PyObject *t_FieldGaussIntegrator_getPoint(t_FieldGaussIntegrator *self, PyObject *arg);
          static PyObject *t_FieldGaussIntegrator_getWeight(t_FieldGaussIntegrator *self, PyObject *arg);
          static PyObject *t_FieldGaussIntegrator_integrate(t_FieldGaussIntegrator *self, PyObject *arg);
          static PyObject *t_FieldGaussIntegrator_get__numberOfPoints(t_FieldGaussIntegrator *self, void *data);
          static PyObject *t_FieldGaussIntegrator_get__parameters_(t_FieldGaussIntegrator *self, void *data);
          static PyGetSetDef t_FieldGaussIntegrator__fields_[] = {
            DECLARE_GET_FIELD(t_FieldGaussIntegrator, numberOfPoints),
            DECLARE_GET_FIELD(t_FieldGaussIntegrator, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldGaussIntegrator__methods_[] = {
            DECLARE_METHOD(t_FieldGaussIntegrator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldGaussIntegrator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldGaussIntegrator, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldGaussIntegrator, getNumberOfPoints, METH_NOARGS),
            DECLARE_METHOD(t_FieldGaussIntegrator, getPoint, METH_O),
            DECLARE_METHOD(t_FieldGaussIntegrator, getWeight, METH_O),
            DECLARE_METHOD(t_FieldGaussIntegrator, integrate, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldGaussIntegrator)[] = {
            { Py_tp_methods, t_FieldGaussIntegrator__methods_ },
            { Py_tp_init, (void *) t_FieldGaussIntegrator_init_ },
            { Py_tp_getset, t_FieldGaussIntegrator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldGaussIntegrator)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldGaussIntegrator, t_FieldGaussIntegrator, FieldGaussIntegrator);
          PyObject *t_FieldGaussIntegrator::wrap_Object(const FieldGaussIntegrator& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldGaussIntegrator::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldGaussIntegrator *self = (t_FieldGaussIntegrator *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldGaussIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldGaussIntegrator::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldGaussIntegrator *self = (t_FieldGaussIntegrator *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldGaussIntegrator::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldGaussIntegrator), &PY_TYPE_DEF(FieldGaussIntegrator), module, "FieldGaussIntegrator", 0);
          }

          void t_FieldGaussIntegrator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGaussIntegrator), "class_", make_descriptor(FieldGaussIntegrator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGaussIntegrator), "wrapfn_", make_descriptor(t_FieldGaussIntegrator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGaussIntegrator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldGaussIntegrator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldGaussIntegrator::initializeClass, 1)))
              return NULL;
            return t_FieldGaussIntegrator::wrap_Object(FieldGaussIntegrator(((t_FieldGaussIntegrator *) arg)->object.this$));
          }
          static PyObject *t_FieldGaussIntegrator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldGaussIntegrator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldGaussIntegrator_of_(t_FieldGaussIntegrator *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldGaussIntegrator_init_(t_FieldGaussIntegrator *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::util::Pair a0((jobject) NULL);
                PyTypeObject **p0;
                FieldGaussIntegrator object((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::util::Pair::initializeClass, &a0, &p0, ::org::hipparchus::util::t_Pair::parameters_))
                {
                  INT_CALL(object = FieldGaussIntegrator(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                FieldGaussIntegrator object((jobject) NULL);

                if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldGaussIntegrator(a0, a1));
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

          static PyObject *t_FieldGaussIntegrator_getNumberOfPoints(t_FieldGaussIntegrator *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNumberOfPoints());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_FieldGaussIntegrator_getPoint(t_FieldGaussIntegrator *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getPoint(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getPoint", arg);
            return NULL;
          }

          static PyObject *t_FieldGaussIntegrator_getWeight(t_FieldGaussIntegrator *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getWeight(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getWeight", arg);
            return NULL;
          }

          static PyObject *t_FieldGaussIntegrator_integrate(t_FieldGaussIntegrator *self, PyObject *arg)
          {
            ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, &a0, &p0, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_))
            {
              OBJ_CALL(result = self->object.integrate(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "integrate", arg);
            return NULL;
          }
          static PyObject *t_FieldGaussIntegrator_get__parameters_(t_FieldGaussIntegrator *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldGaussIntegrator_get__numberOfPoints(t_FieldGaussIntegrator *self, void *data)
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
#include "org/orekit/models/earth/troposphere/TimeSpanEstimatedTroposphericModel.h"
#include "java/util/List.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/utils/TimeSpanMap$Span.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/models/earth/troposphere/EstimatedTroposphericModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *TimeSpanEstimatedTroposphericModel::class$ = NULL;
          jmethodID *TimeSpanEstimatedTroposphericModel::mids$ = NULL;
          bool TimeSpanEstimatedTroposphericModel::live$ = false;
          ::java::lang::String *TimeSpanEstimatedTroposphericModel::DATE_AFTER = NULL;
          ::java::lang::String *TimeSpanEstimatedTroposphericModel::DATE_BEFORE = NULL;

          jclass TimeSpanEstimatedTroposphericModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/TimeSpanEstimatedTroposphericModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e4decacb2b1b0d4e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/EstimatedTroposphericModel;)V");
              mids$[mid_init$_da6156174acb8778] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/EstimatedTroposphericModel;Lorg/orekit/time/TimeScale;)V");
              mids$[mid_addTroposphericModelValidAfter_ad0495186ecc4e93] = env->getMethodID(cls, "addTroposphericModelValidAfter", "(Lorg/orekit/models/earth/troposphere/EstimatedTroposphericModel;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_addTroposphericModelValidBefore_ad0495186ecc4e93] = env->getMethodID(cls, "addTroposphericModelValidBefore", "(Lorg/orekit/models/earth/troposphere/EstimatedTroposphericModel;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_extractParameters_5417afc1212505b6] = env->getMethodID(cls, "extractParameters", "([DLorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_extractParameters_afb90c8392ccc216] = env->getMethodID(cls, "extractParameters", "([Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFirstSpan_5290b219f9ebfd63] = env->getMethodID(cls, "getFirstSpan", "()Lorg/orekit/utils/TimeSpanMap$Span;");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getTroposphericModel_b8fed425d07d8042] = env->getMethodID(cls, "getTroposphericModel", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/models/earth/troposphere/EstimatedTroposphericModel;");
              mids$[mid_pathDelay_6f66c6b7094d6f08] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_2edbfa177156ee09] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DATE_AFTER = new ::java::lang::String(env->getStaticObjectField(cls, "DATE_AFTER", "Ljava/lang/String;"));
              DATE_BEFORE = new ::java::lang::String(env->getStaticObjectField(cls, "DATE_BEFORE", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TimeSpanEstimatedTroposphericModel::TimeSpanEstimatedTroposphericModel(const ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e4decacb2b1b0d4e, a0.this$)) {}

          TimeSpanEstimatedTroposphericModel::TimeSpanEstimatedTroposphericModel(const ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_da6156174acb8778, a0.this$, a1.this$)) {}

          void TimeSpanEstimatedTroposphericModel::addTroposphericModelValidAfter(const ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addTroposphericModelValidAfter_ad0495186ecc4e93], a0.this$, a1.this$);
          }

          void TimeSpanEstimatedTroposphericModel::addTroposphericModelValidBefore(const ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addTroposphericModelValidBefore_ad0495186ecc4e93], a0.this$, a1.this$);
          }

          JArray< jdouble > TimeSpanEstimatedTroposphericModel::extractParameters(const JArray< jdouble > & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_extractParameters_5417afc1212505b6], a0.this$, a1.this$));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > TimeSpanEstimatedTroposphericModel::extractParameters(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_extractParameters_afb90c8392ccc216], a0.this$, a1.this$));
          }

          ::org::orekit::utils::TimeSpanMap$Span TimeSpanEstimatedTroposphericModel::getFirstSpan() const
          {
            return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getFirstSpan_5290b219f9ebfd63]));
          }

          ::java::util::List TimeSpanEstimatedTroposphericModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel TimeSpanEstimatedTroposphericModel::getTroposphericModel(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel(env->callObjectMethod(this$, mids$[mid_getTroposphericModel_b8fed425d07d8042], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement TimeSpanEstimatedTroposphericModel::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_6f66c6b7094d6f08], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          jdouble TimeSpanEstimatedTroposphericModel::pathDelay(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< jdouble > & a2, const ::org::orekit::time::AbsoluteDate & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_2edbfa177156ee09], a0, a1.this$, a2.this$, a3.this$);
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
          static PyObject *t_TimeSpanEstimatedTroposphericModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TimeSpanEstimatedTroposphericModel_init_(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_addTroposphericModelValidAfter(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_addTroposphericModelValidBefore(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_extractParameters(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_getFirstSpan(t_TimeSpanEstimatedTroposphericModel *self);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_getParametersDrivers(t_TimeSpanEstimatedTroposphericModel *self);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_getTroposphericModel(t_TimeSpanEstimatedTroposphericModel *self, PyObject *arg);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_pathDelay(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_get__firstSpan(t_TimeSpanEstimatedTroposphericModel *self, void *data);
          static PyObject *t_TimeSpanEstimatedTroposphericModel_get__parametersDrivers(t_TimeSpanEstimatedTroposphericModel *self, void *data);
          static PyGetSetDef t_TimeSpanEstimatedTroposphericModel__fields_[] = {
            DECLARE_GET_FIELD(t_TimeSpanEstimatedTroposphericModel, firstSpan),
            DECLARE_GET_FIELD(t_TimeSpanEstimatedTroposphericModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TimeSpanEstimatedTroposphericModel__methods_[] = {
            DECLARE_METHOD(t_TimeSpanEstimatedTroposphericModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TimeSpanEstimatedTroposphericModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TimeSpanEstimatedTroposphericModel, addTroposphericModelValidAfter, METH_VARARGS),
            DECLARE_METHOD(t_TimeSpanEstimatedTroposphericModel, addTroposphericModelValidBefore, METH_VARARGS),
            DECLARE_METHOD(t_TimeSpanEstimatedTroposphericModel, extractParameters, METH_VARARGS),
            DECLARE_METHOD(t_TimeSpanEstimatedTroposphericModel, getFirstSpan, METH_NOARGS),
            DECLARE_METHOD(t_TimeSpanEstimatedTroposphericModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_TimeSpanEstimatedTroposphericModel, getTroposphericModel, METH_O),
            DECLARE_METHOD(t_TimeSpanEstimatedTroposphericModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TimeSpanEstimatedTroposphericModel)[] = {
            { Py_tp_methods, t_TimeSpanEstimatedTroposphericModel__methods_ },
            { Py_tp_init, (void *) t_TimeSpanEstimatedTroposphericModel_init_ },
            { Py_tp_getset, t_TimeSpanEstimatedTroposphericModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TimeSpanEstimatedTroposphericModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TimeSpanEstimatedTroposphericModel, t_TimeSpanEstimatedTroposphericModel, TimeSpanEstimatedTroposphericModel);

          void t_TimeSpanEstimatedTroposphericModel::install(PyObject *module)
          {
            installType(&PY_TYPE(TimeSpanEstimatedTroposphericModel), &PY_TYPE_DEF(TimeSpanEstimatedTroposphericModel), module, "TimeSpanEstimatedTroposphericModel", 0);
          }

          void t_TimeSpanEstimatedTroposphericModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanEstimatedTroposphericModel), "class_", make_descriptor(TimeSpanEstimatedTroposphericModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanEstimatedTroposphericModel), "wrapfn_", make_descriptor(t_TimeSpanEstimatedTroposphericModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanEstimatedTroposphericModel), "boxfn_", make_descriptor(boxObject));
            env->getClass(TimeSpanEstimatedTroposphericModel::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanEstimatedTroposphericModel), "DATE_AFTER", make_descriptor(j2p(*TimeSpanEstimatedTroposphericModel::DATE_AFTER)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanEstimatedTroposphericModel), "DATE_BEFORE", make_descriptor(j2p(*TimeSpanEstimatedTroposphericModel::DATE_BEFORE)));
          }

          static PyObject *t_TimeSpanEstimatedTroposphericModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TimeSpanEstimatedTroposphericModel::initializeClass, 1)))
              return NULL;
            return t_TimeSpanEstimatedTroposphericModel::wrap_Object(TimeSpanEstimatedTroposphericModel(((t_TimeSpanEstimatedTroposphericModel *) arg)->object.this$));
          }
          static PyObject *t_TimeSpanEstimatedTroposphericModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TimeSpanEstimatedTroposphericModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TimeSpanEstimatedTroposphericModel_init_(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel a0((jobject) NULL);
                TimeSpanEstimatedTroposphericModel object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel::initializeClass, &a0))
                {
                  INT_CALL(object = TimeSpanEstimatedTroposphericModel(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel a0((jobject) NULL);
                ::org::orekit::time::TimeScale a1((jobject) NULL);
                TimeSpanEstimatedTroposphericModel object((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = TimeSpanEstimatedTroposphericModel(a0, a1));
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

          static PyObject *t_TimeSpanEstimatedTroposphericModel_addTroposphericModelValidAfter(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args)
          {
            ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.addTroposphericModelValidAfter(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addTroposphericModelValidAfter", args);
            return NULL;
          }

          static PyObject *t_TimeSpanEstimatedTroposphericModel_addTroposphericModelValidBefore(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args)
          {
            ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.addTroposphericModelValidBefore(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addTroposphericModelValidBefore", args);
            return NULL;
          }

          static PyObject *t_TimeSpanEstimatedTroposphericModel_extractParameters(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                JArray< jdouble > result((jobject) NULL);

                if (!parseArgs(args, "[Dk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.extractParameters(a0, a1));
                  return result.wrap();
                }
              }
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                if (!parseArgs(args, "[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.extractParameters(a0, a1));
                  return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "extractParameters", args);
            return NULL;
          }

          static PyObject *t_TimeSpanEstimatedTroposphericModel_getFirstSpan(t_TimeSpanEstimatedTroposphericModel *self)
          {
            ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);
            OBJ_CALL(result = self->object.getFirstSpan());
            return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, ::org::orekit::models::earth::troposphere::PY_TYPE(EstimatedTroposphericModel));
          }

          static PyObject *t_TimeSpanEstimatedTroposphericModel_getParametersDrivers(t_TimeSpanEstimatedTroposphericModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_TimeSpanEstimatedTroposphericModel_getTroposphericModel(t_TimeSpanEstimatedTroposphericModel *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::models::earth::troposphere::EstimatedTroposphericModel result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getTroposphericModel(a0));
              return ::org::orekit::models::earth::troposphere::t_EstimatedTroposphericModel::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getTroposphericModel", arg);
            return NULL;
          }

          static PyObject *t_TimeSpanEstimatedTroposphericModel_pathDelay(t_TimeSpanEstimatedTroposphericModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
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
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_TimeSpanEstimatedTroposphericModel_get__firstSpan(t_TimeSpanEstimatedTroposphericModel *self, void *data)
          {
            ::org::orekit::utils::TimeSpanMap$Span value((jobject) NULL);
            OBJ_CALL(value = self->object.getFirstSpan());
            return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(value);
          }

          static PyObject *t_TimeSpanEstimatedTroposphericModel_get__parametersDrivers(t_TimeSpanEstimatedTroposphericModel *self, void *data)
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
#include "org/orekit/errors/OrekitParseException.h"
#include "java/util/Locale.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "org/orekit/errors/LocalizedException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *OrekitParseException::class$ = NULL;
      jmethodID *OrekitParseException::mids$ = NULL;
      bool OrekitParseException::live$ = false;

      jclass OrekitParseException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/OrekitParseException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_9b3ada3301b0db8c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_getLocalizedMessage_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_26070c28e6ea354d] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_24e2edd6319f4c5a] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_d8f5056e4f45c9a6] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrekitParseException::OrekitParseException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::java::text::ParseException(env->newObject(initializeClass, &mids$, mid_init$_9b3ada3301b0db8c, a0.this$, a1.this$)) {}

      ::java::lang::String OrekitParseException::getLocalizedMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_1c1fa1e935d6cdcf]));
      }

      ::java::lang::String OrekitParseException::getMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_1c1fa1e935d6cdcf]));
      }

      ::java::lang::String OrekitParseException::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_26070c28e6ea354d], a0.this$));
      }

      JArray< ::java::lang::Object > OrekitParseException::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_24e2edd6319f4c5a]));
      }

      ::org::hipparchus::exception::Localizable OrekitParseException::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_d8f5056e4f45c9a6]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace errors {
      static PyObject *t_OrekitParseException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitParseException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OrekitParseException_init_(t_OrekitParseException *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrekitParseException_getLocalizedMessage(t_OrekitParseException *self, PyObject *args);
      static PyObject *t_OrekitParseException_getMessage(t_OrekitParseException *self, PyObject *args);
      static PyObject *t_OrekitParseException_getParts(t_OrekitParseException *self);
      static PyObject *t_OrekitParseException_getSpecifier(t_OrekitParseException *self);
      static PyObject *t_OrekitParseException_get__localizedMessage(t_OrekitParseException *self, void *data);
      static PyObject *t_OrekitParseException_get__message(t_OrekitParseException *self, void *data);
      static PyObject *t_OrekitParseException_get__parts(t_OrekitParseException *self, void *data);
      static PyObject *t_OrekitParseException_get__specifier(t_OrekitParseException *self, void *data);
      static PyGetSetDef t_OrekitParseException__fields_[] = {
        DECLARE_GET_FIELD(t_OrekitParseException, localizedMessage),
        DECLARE_GET_FIELD(t_OrekitParseException, message),
        DECLARE_GET_FIELD(t_OrekitParseException, parts),
        DECLARE_GET_FIELD(t_OrekitParseException, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrekitParseException__methods_[] = {
        DECLARE_METHOD(t_OrekitParseException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitParseException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitParseException, getLocalizedMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitParseException, getMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitParseException, getParts, METH_NOARGS),
        DECLARE_METHOD(t_OrekitParseException, getSpecifier, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrekitParseException)[] = {
        { Py_tp_methods, t_OrekitParseException__methods_ },
        { Py_tp_init, (void *) t_OrekitParseException_init_ },
        { Py_tp_getset, t_OrekitParseException__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrekitParseException)[] = {
        &PY_TYPE_DEF(::java::text::ParseException),
        NULL
      };

      DEFINE_TYPE(OrekitParseException, t_OrekitParseException, OrekitParseException);

      void t_OrekitParseException::install(PyObject *module)
      {
        installType(&PY_TYPE(OrekitParseException), &PY_TYPE_DEF(OrekitParseException), module, "OrekitParseException", 0);
      }

      void t_OrekitParseException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitParseException), "class_", make_descriptor(OrekitParseException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitParseException), "wrapfn_", make_descriptor(t_OrekitParseException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitParseException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrekitParseException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrekitParseException::initializeClass, 1)))
          return NULL;
        return t_OrekitParseException::wrap_Object(OrekitParseException(((t_OrekitParseException *) arg)->object.this$));
      }
      static PyObject *t_OrekitParseException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrekitParseException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OrekitParseException_init_(t_OrekitParseException *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::exception::Localizable a0((jobject) NULL);
        JArray< ::java::lang::Object > a1((jobject) NULL);
        OrekitParseException object((jobject) NULL);

        if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
        {
          INT_CALL(object = OrekitParseException(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_OrekitParseException_getLocalizedMessage(t_OrekitParseException *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLocalizedMessage());
          return j2p(result);
        }

        return callSuper(PY_TYPE(OrekitParseException), (PyObject *) self, "getLocalizedMessage", args, 2);
      }

      static PyObject *t_OrekitParseException_getMessage(t_OrekitParseException *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMessage());
            return j2p(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getMessage(a0));
              return j2p(result);
            }
          }
        }

        return callSuper(PY_TYPE(OrekitParseException), (PyObject *) self, "getMessage", args, 2);
      }

      static PyObject *t_OrekitParseException_getParts(t_OrekitParseException *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitParseException_getSpecifier(t_OrekitParseException *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_OrekitParseException_get__localizedMessage(t_OrekitParseException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLocalizedMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitParseException_get__message(t_OrekitParseException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitParseException_get__parts(t_OrekitParseException *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitParseException_get__specifier(t_OrekitParseException *self, void *data)
      {
        ::org::hipparchus::exception::Localizable value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/units/Parser.h"
#include "org/orekit/utils/units/PowerTerm.h"
#include "java/lang/String.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {
      namespace units {

        ::java::lang::Class *Parser::class$ = NULL;
        jmethodID *Parser::mids$ = NULL;
        bool Parser::live$ = false;

        jclass Parser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/utils/units/Parser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_buildTermsList_abe6e889bc24795d] = env->getStaticMethodID(cls, "buildTermsList", "(Ljava/lang/String;)Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::util::List Parser::buildTermsList(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_buildTermsList_abe6e889bc24795d], a0.this$));
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
        static PyObject *t_Parser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Parser_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Parser_buildTermsList(PyTypeObject *type, PyObject *arg);

        static PyMethodDef t_Parser__methods_[] = {
          DECLARE_METHOD(t_Parser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Parser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Parser, buildTermsList, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Parser)[] = {
          { Py_tp_methods, t_Parser__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Parser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Parser, t_Parser, Parser);

        void t_Parser::install(PyObject *module)
        {
          installType(&PY_TYPE(Parser), &PY_TYPE_DEF(Parser), module, "Parser", 0);
        }

        void t_Parser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Parser), "class_", make_descriptor(Parser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Parser), "wrapfn_", make_descriptor(t_Parser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Parser), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Parser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Parser::initializeClass, 1)))
            return NULL;
          return t_Parser::wrap_Object(Parser(((t_Parser *) arg)->object.this$));
        }
        static PyObject *t_Parser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Parser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Parser_buildTermsList(PyTypeObject *type, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::List result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::utils::units::Parser::buildTermsList(a0));
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::units::PY_TYPE(PowerTerm));
          }

          PyErr_SetArgsError(type, "buildTermsList", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonTimeScales.h"
#include "org/orekit/time/TDBScale.h"
#include "org/orekit/time/GLONASSScale.h"
#include "org/orekit/time/IRNSSScale.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/time/GMSTScale.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/TTScale.h"
#include "org/orekit/time/QZSSScale.h"
#include "org/orekit/time/TAIScale.h"
#include "org/orekit/time/TCBScale.h"
#include "java/lang/Class.h"
#include "org/orekit/time/UTCScale.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/time/TCGScale.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/GPSScale.h"
#include "org/orekit/time/BDTScale.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/GalileoScale.h"
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
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_createBesselianEpoch_f359a0110559347a] = env->getMethodID(cls, "createBesselianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_createJulianEpoch_f359a0110559347a] = env->getMethodID(cls, "createJulianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getBDT_e66ecc29d9b0858a] = env->getMethodID(cls, "getBDT", "()Lorg/orekit/time/BDTScale;");
          mids$[mid_getBeidouEpoch_c325492395d89b24] = env->getMethodID(cls, "getBeidouEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getCcsdsEpoch_c325492395d89b24] = env->getMethodID(cls, "getCcsdsEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getFiftiesEpoch_c325492395d89b24] = env->getMethodID(cls, "getFiftiesEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getFutureInfinity_c325492395d89b24] = env->getMethodID(cls, "getFutureInfinity", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGLONASS_75a06d4a3e06af34] = env->getMethodID(cls, "getGLONASS", "()Lorg/orekit/time/GLONASSScale;");
          mids$[mid_getGMST_375ab849f7e3d9ee] = env->getMethodID(cls, "getGMST", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/GMSTScale;");
          mids$[mid_getGPS_a74060fc815076a7] = env->getMethodID(cls, "getGPS", "()Lorg/orekit/time/GPSScale;");
          mids$[mid_getGST_935fd284aa6ccd53] = env->getMethodID(cls, "getGST", "()Lorg/orekit/time/GalileoScale;");
          mids$[mid_getGalileoEpoch_c325492395d89b24] = env->getMethodID(cls, "getGalileoEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGlonassEpoch_c325492395d89b24] = env->getMethodID(cls, "getGlonassEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGpsEpoch_c325492395d89b24] = env->getMethodID(cls, "getGpsEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getIRNSS_d7fbef15a3374e78] = env->getMethodID(cls, "getIRNSS", "()Lorg/orekit/time/IRNSSScale;");
          mids$[mid_getIrnssEpoch_c325492395d89b24] = env->getMethodID(cls, "getIrnssEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getJ2000Epoch_c325492395d89b24] = env->getMethodID(cls, "getJ2000Epoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getJavaEpoch_c325492395d89b24] = env->getMethodID(cls, "getJavaEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getJulianEpoch_c325492395d89b24] = env->getMethodID(cls, "getJulianEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getModifiedJulianEpoch_c325492395d89b24] = env->getMethodID(cls, "getModifiedJulianEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getPastInfinity_c325492395d89b24] = env->getMethodID(cls, "getPastInfinity", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getQZSS_f801e6f0b9a78872] = env->getMethodID(cls, "getQZSS", "()Lorg/orekit/time/QZSSScale;");
          mids$[mid_getQzssEpoch_c325492395d89b24] = env->getMethodID(cls, "getQzssEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getTAI_700cdb40469496d6] = env->getMethodID(cls, "getTAI", "()Lorg/orekit/time/TAIScale;");
          mids$[mid_getTCB_e0443055c5547bea] = env->getMethodID(cls, "getTCB", "()Lorg/orekit/time/TCBScale;");
          mids$[mid_getTCG_9ccd709f9ae42bbc] = env->getMethodID(cls, "getTCG", "()Lorg/orekit/time/TCGScale;");
          mids$[mid_getTDB_61ba58ac615801fa] = env->getMethodID(cls, "getTDB", "()Lorg/orekit/time/TDBScale;");
          mids$[mid_getTT_68d743a8c670f6cb] = env->getMethodID(cls, "getTT", "()Lorg/orekit/time/TTScale;");
          mids$[mid_getUT1_246820b70f2cddeb] = env->getMethodID(cls, "getUT1", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/UT1Scale;");
          mids$[mid_getUTC_1e4acbbebd50858e] = env->getMethodID(cls, "getUTC", "()Lorg/orekit/time/UTCScale;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTimeScales::PythonTimeScales() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonTimeScales::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonTimeScales::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonTimeScales::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_6c0ce7e438e5ded4]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_6c0ce7e438e5ded4]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_6c0ce7e438e5ded4]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_6c0ce7e438e5ded4]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_6c0ce7e438e5ded4]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_6c0ce7e438e5ded4]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_6c0ce7e438e5ded4]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_6c0ce7e438e5ded4]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_6c0ce7e438e5ded4]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_6c0ce7e438e5ded4]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_6c0ce7e438e5ded4]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_6c0ce7e438e5ded4]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_6c0ce7e438e5ded4]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_6c0ce7e438e5ded4]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_6c0ce7e438e5ded4]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_6c0ce7e438e5ded4]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_6c0ce7e438e5ded4]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_6c0ce7e438e5ded4]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_6c0ce7e438e5ded4]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_6c0ce7e438e5ded4]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_6c0ce7e438e5ded4]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_6c0ce7e438e5ded4]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_6c0ce7e438e5ded4]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_6c0ce7e438e5ded4]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_6c0ce7e438e5ded4]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_6c0ce7e438e5ded4]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_6c0ce7e438e5ded4]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_6c0ce7e438e5ded4]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_6c0ce7e438e5ded4]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_6c0ce7e438e5ded4]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTimeScales::mids$[PythonTimeScales::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
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
#include "org/hipparchus/stat/descriptive/rank/Percentile.h"
#include "org/hipparchus/stat/ranking/NaNStrategy.h"
#include "org/hipparchus/stat/descriptive/rank/Percentile.h"
#include "org/hipparchus/stat/descriptive/rank/Percentile$EstimationType.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/PivotingStrategy.h"
#include "org/hipparchus/util/KthSelector.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
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
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_copy_6f8e2276efd5ffa7] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/rank/Percentile;");
              mids$[mid_evaluate_04fd0666b613d2ab] = env->getMethodID(cls, "evaluate", "(D)D");
              mids$[mid_evaluate_79e4db9e1e3d84c9] = env->getMethodID(cls, "evaluate", "([DD)D");
              mids$[mid_evaluate_1567a80062adb31b] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_evaluate_86463cae6c6d5697] = env->getMethodID(cls, "evaluate", "([DIID)D");
              mids$[mid_getEstimationType_243f7211bd3660bc] = env->getMethodID(cls, "getEstimationType", "()Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;");
              mids$[mid_getKthSelector_5930553957d5187e] = env->getMethodID(cls, "getKthSelector", "()Lorg/hipparchus/util/KthSelector;");
              mids$[mid_getNaNStrategy_9ae875326a45f3e9] = env->getMethodID(cls, "getNaNStrategy", "()Lorg/hipparchus/stat/ranking/NaNStrategy;");
              mids$[mid_getPivotingStrategy_ba4eca3a4b36ce9e] = env->getMethodID(cls, "getPivotingStrategy", "()Lorg/hipparchus/util/PivotingStrategy;");
              mids$[mid_getQuantile_b74f83833fdad017] = env->getMethodID(cls, "getQuantile", "()D");
              mids$[mid_setData_ab69da052b88f50c] = env->getMethodID(cls, "setData", "([D)V");
              mids$[mid_setData_4484ad1f15b73c7a] = env->getMethodID(cls, "setData", "([DII)V");
              mids$[mid_setQuantile_8ba9fe7a847cecad] = env->getMethodID(cls, "setQuantile", "(D)V");
              mids$[mid_withEstimationType_1ec06e0f941503f2] = env->getMethodID(cls, "withEstimationType", "(Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;)Lorg/hipparchus/stat/descriptive/rank/Percentile;");
              mids$[mid_withKthSelector_43dbccb83ddf0e67] = env->getMethodID(cls, "withKthSelector", "(Lorg/hipparchus/util/KthSelector;)Lorg/hipparchus/stat/descriptive/rank/Percentile;");
              mids$[mid_withNaNStrategy_4c4577d1348367d8] = env->getMethodID(cls, "withNaNStrategy", "(Lorg/hipparchus/stat/ranking/NaNStrategy;)Lorg/hipparchus/stat/descriptive/rank/Percentile;");
              mids$[mid_getWorkArray_4ab5393b410e04fc] = env->getMethodID(cls, "getWorkArray", "([DII)[D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Percentile::Percentile() : ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          Percentile::Percentile(jdouble a0) : ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

          Percentile Percentile::copy() const
          {
            return Percentile(env->callObjectMethod(this$, mids$[mid_copy_6f8e2276efd5ffa7]));
          }

          jdouble Percentile::evaluate(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_04fd0666b613d2ab], a0);
          }

          jdouble Percentile::evaluate(const JArray< jdouble > & a0, jdouble a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_79e4db9e1e3d84c9], a0.this$, a1);
          }

          jdouble Percentile::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_1567a80062adb31b], a0.this$, a1, a2);
          }

          jdouble Percentile::evaluate(const JArray< jdouble > & a0, jint a1, jint a2, jdouble a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_86463cae6c6d5697], a0.this$, a1, a2, a3);
          }

          ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType Percentile::getEstimationType() const
          {
            return ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType(env->callObjectMethod(this$, mids$[mid_getEstimationType_243f7211bd3660bc]));
          }

          ::org::hipparchus::util::KthSelector Percentile::getKthSelector() const
          {
            return ::org::hipparchus::util::KthSelector(env->callObjectMethod(this$, mids$[mid_getKthSelector_5930553957d5187e]));
          }

          ::org::hipparchus::stat::ranking::NaNStrategy Percentile::getNaNStrategy() const
          {
            return ::org::hipparchus::stat::ranking::NaNStrategy(env->callObjectMethod(this$, mids$[mid_getNaNStrategy_9ae875326a45f3e9]));
          }

          ::org::hipparchus::util::PivotingStrategy Percentile::getPivotingStrategy() const
          {
            return ::org::hipparchus::util::PivotingStrategy(env->callObjectMethod(this$, mids$[mid_getPivotingStrategy_ba4eca3a4b36ce9e]));
          }

          jdouble Percentile::getQuantile() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getQuantile_b74f83833fdad017]);
          }

          void Percentile::setData(const JArray< jdouble > & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setData_ab69da052b88f50c], a0.this$);
          }

          void Percentile::setData(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            env->callVoidMethod(this$, mids$[mid_setData_4484ad1f15b73c7a], a0.this$, a1, a2);
          }

          void Percentile::setQuantile(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setQuantile_8ba9fe7a847cecad], a0);
          }

          Percentile Percentile::withEstimationType(const ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType & a0) const
          {
            return Percentile(env->callObjectMethod(this$, mids$[mid_withEstimationType_1ec06e0f941503f2], a0.this$));
          }

          Percentile Percentile::withKthSelector(const ::org::hipparchus::util::KthSelector & a0) const
          {
            return Percentile(env->callObjectMethod(this$, mids$[mid_withKthSelector_43dbccb83ddf0e67], a0.this$));
          }

          Percentile Percentile::withNaNStrategy(const ::org::hipparchus::stat::ranking::NaNStrategy & a0) const
          {
            return Percentile(env->callObjectMethod(this$, mids$[mid_withNaNStrategy_4c4577d1348367d8], a0.this$));
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
#include "org/orekit/models/earth/atmosphere/data/JB2008SpaceEnvironmentData.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/models/earth/atmosphere/JB2008InputParameters.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvidersManager.h"
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

            ::java::lang::Class *JB2008SpaceEnvironmentData::class$ = NULL;
            jmethodID *JB2008SpaceEnvironmentData::mids$ = NULL;
            bool JB2008SpaceEnvironmentData::live$ = false;
            ::java::lang::String *JB2008SpaceEnvironmentData::DEFAULT_SUPPORTED_NAMES_DTC = NULL;
            ::java::lang::String *JB2008SpaceEnvironmentData::DEFAULT_SUPPORTED_NAMES_SOLFSMY = NULL;

            jclass JB2008SpaceEnvironmentData::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/JB2008SpaceEnvironmentData");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a627ad9c5959309d] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
                mids$[mid_init$_62070bed3354d731] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/data/DataSource;)V");
                mids$[mid_init$_15b43ded5c01e378] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/data/DataSource;Lorg/orekit/time/TimeScale;)V");
                mids$[mid_init$_b6beea6626bd5e48] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;)V");
                mids$[mid_getDSTDTC_fd347811007a6ba3] = env->getMethodID(cls, "getDSTDTC", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getF10_fd347811007a6ba3] = env->getMethodID(cls, "getF10", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getF10B_fd347811007a6ba3] = env->getMethodID(cls, "getF10B", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getMaxDate_c325492395d89b24] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getMinDate_c325492395d89b24] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getS10_fd347811007a6ba3] = env->getMethodID(cls, "getS10", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getS10B_fd347811007a6ba3] = env->getMethodID(cls, "getS10B", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getXM10_fd347811007a6ba3] = env->getMethodID(cls, "getXM10", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getXM10B_fd347811007a6ba3] = env->getMethodID(cls, "getXM10B", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getY10_fd347811007a6ba3] = env->getMethodID(cls, "getY10", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getY10B_fd347811007a6ba3] = env->getMethodID(cls, "getY10B", "(Lorg/orekit/time/AbsoluteDate;)D");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                DEFAULT_SUPPORTED_NAMES_DTC = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUPPORTED_NAMES_DTC", "Ljava/lang/String;"));
                DEFAULT_SUPPORTED_NAMES_SOLFSMY = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUPPORTED_NAMES_SOLFSMY", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            JB2008SpaceEnvironmentData::JB2008SpaceEnvironmentData(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a627ad9c5959309d, a0.this$, a1.this$)) {}

            JB2008SpaceEnvironmentData::JB2008SpaceEnvironmentData(const ::org::orekit::data::DataSource & a0, const ::org::orekit::data::DataSource & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_62070bed3354d731, a0.this$, a1.this$)) {}

            JB2008SpaceEnvironmentData::JB2008SpaceEnvironmentData(const ::org::orekit::data::DataSource & a0, const ::org::orekit::data::DataSource & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_15b43ded5c01e378, a0.this$, a1.this$, a2.this$)) {}

            JB2008SpaceEnvironmentData::JB2008SpaceEnvironmentData(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::data::DataProvidersManager & a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b6beea6626bd5e48, a0.this$, a1.this$, a2.this$, a3.this$)) {}

            jdouble JB2008SpaceEnvironmentData::getDSTDTC(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDSTDTC_fd347811007a6ba3], a0.this$);
            }

            jdouble JB2008SpaceEnvironmentData::getF10(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getF10_fd347811007a6ba3], a0.this$);
            }

            jdouble JB2008SpaceEnvironmentData::getF10B(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getF10B_fd347811007a6ba3], a0.this$);
            }

            ::org::orekit::time::AbsoluteDate JB2008SpaceEnvironmentData::getMaxDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_c325492395d89b24]));
            }

            ::org::orekit::time::AbsoluteDate JB2008SpaceEnvironmentData::getMinDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_c325492395d89b24]));
            }

            jdouble JB2008SpaceEnvironmentData::getS10(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getS10_fd347811007a6ba3], a0.this$);
            }

            jdouble JB2008SpaceEnvironmentData::getS10B(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getS10B_fd347811007a6ba3], a0.this$);
            }

            jdouble JB2008SpaceEnvironmentData::getXM10(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXM10_fd347811007a6ba3], a0.this$);
            }

            jdouble JB2008SpaceEnvironmentData::getXM10B(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXM10B_fd347811007a6ba3], a0.this$);
            }

            jdouble JB2008SpaceEnvironmentData::getY10(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getY10_fd347811007a6ba3], a0.this$);
            }

            jdouble JB2008SpaceEnvironmentData::getY10B(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getY10B_fd347811007a6ba3], a0.this$);
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
            static PyObject *t_JB2008SpaceEnvironmentData_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_JB2008SpaceEnvironmentData_instance_(PyTypeObject *type, PyObject *arg);
            static int t_JB2008SpaceEnvironmentData_init_(t_JB2008SpaceEnvironmentData *self, PyObject *args, PyObject *kwds);
            static PyObject *t_JB2008SpaceEnvironmentData_getDSTDTC(t_JB2008SpaceEnvironmentData *self, PyObject *arg);
            static PyObject *t_JB2008SpaceEnvironmentData_getF10(t_JB2008SpaceEnvironmentData *self, PyObject *arg);
            static PyObject *t_JB2008SpaceEnvironmentData_getF10B(t_JB2008SpaceEnvironmentData *self, PyObject *arg);
            static PyObject *t_JB2008SpaceEnvironmentData_getMaxDate(t_JB2008SpaceEnvironmentData *self);
            static PyObject *t_JB2008SpaceEnvironmentData_getMinDate(t_JB2008SpaceEnvironmentData *self);
            static PyObject *t_JB2008SpaceEnvironmentData_getS10(t_JB2008SpaceEnvironmentData *self, PyObject *arg);
            static PyObject *t_JB2008SpaceEnvironmentData_getS10B(t_JB2008SpaceEnvironmentData *self, PyObject *arg);
            static PyObject *t_JB2008SpaceEnvironmentData_getXM10(t_JB2008SpaceEnvironmentData *self, PyObject *arg);
            static PyObject *t_JB2008SpaceEnvironmentData_getXM10B(t_JB2008SpaceEnvironmentData *self, PyObject *arg);
            static PyObject *t_JB2008SpaceEnvironmentData_getY10(t_JB2008SpaceEnvironmentData *self, PyObject *arg);
            static PyObject *t_JB2008SpaceEnvironmentData_getY10B(t_JB2008SpaceEnvironmentData *self, PyObject *arg);
            static PyObject *t_JB2008SpaceEnvironmentData_get__maxDate(t_JB2008SpaceEnvironmentData *self, void *data);
            static PyObject *t_JB2008SpaceEnvironmentData_get__minDate(t_JB2008SpaceEnvironmentData *self, void *data);
            static PyGetSetDef t_JB2008SpaceEnvironmentData__fields_[] = {
              DECLARE_GET_FIELD(t_JB2008SpaceEnvironmentData, maxDate),
              DECLARE_GET_FIELD(t_JB2008SpaceEnvironmentData, minDate),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_JB2008SpaceEnvironmentData__methods_[] = {
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, getDSTDTC, METH_O),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, getF10, METH_O),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, getF10B, METH_O),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, getMaxDate, METH_NOARGS),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, getMinDate, METH_NOARGS),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, getS10, METH_O),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, getS10B, METH_O),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, getXM10, METH_O),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, getXM10B, METH_O),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, getY10, METH_O),
              DECLARE_METHOD(t_JB2008SpaceEnvironmentData, getY10B, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(JB2008SpaceEnvironmentData)[] = {
              { Py_tp_methods, t_JB2008SpaceEnvironmentData__methods_ },
              { Py_tp_init, (void *) t_JB2008SpaceEnvironmentData_init_ },
              { Py_tp_getset, t_JB2008SpaceEnvironmentData__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(JB2008SpaceEnvironmentData)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(JB2008SpaceEnvironmentData, t_JB2008SpaceEnvironmentData, JB2008SpaceEnvironmentData);

            void t_JB2008SpaceEnvironmentData::install(PyObject *module)
            {
              installType(&PY_TYPE(JB2008SpaceEnvironmentData), &PY_TYPE_DEF(JB2008SpaceEnvironmentData), module, "JB2008SpaceEnvironmentData", 0);
            }

            void t_JB2008SpaceEnvironmentData::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008SpaceEnvironmentData), "class_", make_descriptor(JB2008SpaceEnvironmentData::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008SpaceEnvironmentData), "wrapfn_", make_descriptor(t_JB2008SpaceEnvironmentData::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008SpaceEnvironmentData), "boxfn_", make_descriptor(boxObject));
              env->getClass(JB2008SpaceEnvironmentData::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008SpaceEnvironmentData), "DEFAULT_SUPPORTED_NAMES_DTC", make_descriptor(j2p(*JB2008SpaceEnvironmentData::DEFAULT_SUPPORTED_NAMES_DTC)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008SpaceEnvironmentData), "DEFAULT_SUPPORTED_NAMES_SOLFSMY", make_descriptor(j2p(*JB2008SpaceEnvironmentData::DEFAULT_SUPPORTED_NAMES_SOLFSMY)));
            }

            static PyObject *t_JB2008SpaceEnvironmentData_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, JB2008SpaceEnvironmentData::initializeClass, 1)))
                return NULL;
              return t_JB2008SpaceEnvironmentData::wrap_Object(JB2008SpaceEnvironmentData(((t_JB2008SpaceEnvironmentData *) arg)->object.this$));
            }
            static PyObject *t_JB2008SpaceEnvironmentData_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, JB2008SpaceEnvironmentData::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_JB2008SpaceEnvironmentData_init_(t_JB2008SpaceEnvironmentData *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::java::lang::String a1((jobject) NULL);
                  JB2008SpaceEnvironmentData object((jobject) NULL);

                  if (!parseArgs(args, "ss", &a0, &a1))
                  {
                    INT_CALL(object = JB2008SpaceEnvironmentData(a0, a1));
                    self->object = object;
                    break;
                  }
                }
                {
                  ::org::orekit::data::DataSource a0((jobject) NULL);
                  ::org::orekit::data::DataSource a1((jobject) NULL);
                  JB2008SpaceEnvironmentData object((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::data::DataSource::initializeClass, &a0, &a1))
                  {
                    INT_CALL(object = JB2008SpaceEnvironmentData(a0, a1));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 3:
                {
                  ::org::orekit::data::DataSource a0((jobject) NULL);
                  ::org::orekit::data::DataSource a1((jobject) NULL);
                  ::org::orekit::time::TimeScale a2((jobject) NULL);
                  JB2008SpaceEnvironmentData object((jobject) NULL);

                  if (!parseArgs(args, "kkk", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::data::DataSource::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                  {
                    INT_CALL(object = JB2008SpaceEnvironmentData(a0, a1, a2));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 4:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::java::lang::String a1((jobject) NULL);
                  ::org::orekit::data::DataProvidersManager a2((jobject) NULL);
                  ::org::orekit::time::TimeScale a3((jobject) NULL);
                  JB2008SpaceEnvironmentData object((jobject) NULL);

                  if (!parseArgs(args, "sskk", ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    INT_CALL(object = JB2008SpaceEnvironmentData(a0, a1, a2, a3));
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

            static PyObject *t_JB2008SpaceEnvironmentData_getDSTDTC(t_JB2008SpaceEnvironmentData *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getDSTDTC(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDSTDTC", arg);
              return NULL;
            }

            static PyObject *t_JB2008SpaceEnvironmentData_getF10(t_JB2008SpaceEnvironmentData *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getF10(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getF10", arg);
              return NULL;
            }

            static PyObject *t_JB2008SpaceEnvironmentData_getF10B(t_JB2008SpaceEnvironmentData *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getF10B(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getF10B", arg);
              return NULL;
            }

            static PyObject *t_JB2008SpaceEnvironmentData_getMaxDate(t_JB2008SpaceEnvironmentData *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMaxDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_JB2008SpaceEnvironmentData_getMinDate(t_JB2008SpaceEnvironmentData *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMinDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_JB2008SpaceEnvironmentData_getS10(t_JB2008SpaceEnvironmentData *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getS10(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getS10", arg);
              return NULL;
            }

            static PyObject *t_JB2008SpaceEnvironmentData_getS10B(t_JB2008SpaceEnvironmentData *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getS10B(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getS10B", arg);
              return NULL;
            }

            static PyObject *t_JB2008SpaceEnvironmentData_getXM10(t_JB2008SpaceEnvironmentData *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getXM10(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getXM10", arg);
              return NULL;
            }

            static PyObject *t_JB2008SpaceEnvironmentData_getXM10B(t_JB2008SpaceEnvironmentData *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getXM10B(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getXM10B", arg);
              return NULL;
            }

            static PyObject *t_JB2008SpaceEnvironmentData_getY10(t_JB2008SpaceEnvironmentData *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getY10(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getY10", arg);
              return NULL;
            }

            static PyObject *t_JB2008SpaceEnvironmentData_getY10B(t_JB2008SpaceEnvironmentData *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getY10B(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getY10B", arg);
              return NULL;
            }

            static PyObject *t_JB2008SpaceEnvironmentData_get__maxDate(t_JB2008SpaceEnvironmentData *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMaxDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_JB2008SpaceEnvironmentData_get__minDate(t_JB2008SpaceEnvironmentData *self, void *data)
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
#include "org/hipparchus/analysis/function/Subtract.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Subtract::class$ = NULL;
        jmethodID *Subtract::mids$ = NULL;
        bool Subtract::live$ = false;

        jclass Subtract::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Subtract");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_99e3200dafc19573] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Subtract::Subtract() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble Subtract::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_99e3200dafc19573], a0, a1);
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
        static PyObject *t_Subtract_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Subtract_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Subtract_init_(t_Subtract *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Subtract_value(t_Subtract *self, PyObject *args);

        static PyMethodDef t_Subtract__methods_[] = {
          DECLARE_METHOD(t_Subtract, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Subtract, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Subtract, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Subtract)[] = {
          { Py_tp_methods, t_Subtract__methods_ },
          { Py_tp_init, (void *) t_Subtract_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Subtract)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Subtract, t_Subtract, Subtract);

        void t_Subtract::install(PyObject *module)
        {
          installType(&PY_TYPE(Subtract), &PY_TYPE_DEF(Subtract), module, "Subtract", 0);
        }

        void t_Subtract::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Subtract), "class_", make_descriptor(Subtract::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Subtract), "wrapfn_", make_descriptor(t_Subtract::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Subtract), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Subtract_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Subtract::initializeClass, 1)))
            return NULL;
          return t_Subtract::wrap_Object(Subtract(((t_Subtract *) arg)->object.this$));
        }
        static PyObject *t_Subtract_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Subtract::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Subtract_init_(t_Subtract *self, PyObject *args, PyObject *kwds)
        {
          Subtract object((jobject) NULL);

          INT_CALL(object = Subtract());
          self->object = object;

          return 0;
        }

        static PyObject *t_Subtract_value(t_Subtract *self, PyObject *args)
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
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/propagation/PropagationType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PropagationType::class$ = NULL;
      jmethodID *PropagationType::mids$ = NULL;
      bool PropagationType::live$ = false;
      PropagationType *PropagationType::MEAN = NULL;
      PropagationType *PropagationType::OSCULATING = NULL;

      jclass PropagationType::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PropagationType");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_c82481982cc2f4b7] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/propagation/PropagationType;");
          mids$[mid_values_387f389f53924998] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/propagation/PropagationType;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          MEAN = new PropagationType(env->getStaticObjectField(cls, "MEAN", "Lorg/orekit/propagation/PropagationType;"));
          OSCULATING = new PropagationType(env->getStaticObjectField(cls, "OSCULATING", "Lorg/orekit/propagation/PropagationType;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PropagationType PropagationType::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return PropagationType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c82481982cc2f4b7], a0.this$));
      }

      JArray< PropagationType > PropagationType::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< PropagationType >(env->callStaticObjectMethod(cls, mids$[mid_values_387f389f53924998]));
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
      static PyObject *t_PropagationType_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PropagationType_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PropagationType_of_(t_PropagationType *self, PyObject *args);
      static PyObject *t_PropagationType_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_PropagationType_values(PyTypeObject *type);
      static PyObject *t_PropagationType_get__parameters_(t_PropagationType *self, void *data);
      static PyGetSetDef t_PropagationType__fields_[] = {
        DECLARE_GET_FIELD(t_PropagationType, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PropagationType__methods_[] = {
        DECLARE_METHOD(t_PropagationType, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PropagationType, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PropagationType, of_, METH_VARARGS),
        DECLARE_METHOD(t_PropagationType, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_PropagationType, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PropagationType)[] = {
        { Py_tp_methods, t_PropagationType__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_PropagationType__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PropagationType)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(PropagationType, t_PropagationType, PropagationType);
      PyObject *t_PropagationType::wrap_Object(const PropagationType& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PropagationType::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PropagationType *self = (t_PropagationType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PropagationType::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PropagationType::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PropagationType *self = (t_PropagationType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PropagationType::install(PyObject *module)
      {
        installType(&PY_TYPE(PropagationType), &PY_TYPE_DEF(PropagationType), module, "PropagationType", 0);
      }

      void t_PropagationType::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PropagationType), "class_", make_descriptor(PropagationType::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PropagationType), "wrapfn_", make_descriptor(t_PropagationType::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PropagationType), "boxfn_", make_descriptor(boxObject));
        env->getClass(PropagationType::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(PropagationType), "MEAN", make_descriptor(t_PropagationType::wrap_Object(*PropagationType::MEAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PropagationType), "OSCULATING", make_descriptor(t_PropagationType::wrap_Object(*PropagationType::OSCULATING)));
      }

      static PyObject *t_PropagationType_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PropagationType::initializeClass, 1)))
          return NULL;
        return t_PropagationType::wrap_Object(PropagationType(((t_PropagationType *) arg)->object.this$));
      }
      static PyObject *t_PropagationType_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PropagationType::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PropagationType_of_(t_PropagationType *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_PropagationType_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        PropagationType result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::propagation::PropagationType::valueOf(a0));
          return t_PropagationType::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_PropagationType_values(PyTypeObject *type)
      {
        JArray< PropagationType > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::propagation::PropagationType::values());
        return JArray<jobject>(result.this$).wrap(t_PropagationType::wrap_jobject);
      }
      static PyObject *t_PropagationType_get__parameters_(t_PropagationType *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/StableRandomGenerator.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/random/NormalizedRandomGenerator.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *StableRandomGenerator::class$ = NULL;
      jmethodID *StableRandomGenerator::mids$ = NULL;
      bool StableRandomGenerator::live$ = false;

      jclass StableRandomGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/StableRandomGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_c3896a42bf2f005f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;DD)V");
          mids$[mid_nextNormalizedDouble_b74f83833fdad017] = env->getMethodID(cls, "nextNormalizedDouble", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      StableRandomGenerator::StableRandomGenerator(const ::org::hipparchus::random::RandomGenerator & a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c3896a42bf2f005f, a0.this$, a1, a2)) {}

      jdouble StableRandomGenerator::nextNormalizedDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextNormalizedDouble_b74f83833fdad017]);
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
      static PyObject *t_StableRandomGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StableRandomGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_StableRandomGenerator_init_(t_StableRandomGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_StableRandomGenerator_nextNormalizedDouble(t_StableRandomGenerator *self);

      static PyMethodDef t_StableRandomGenerator__methods_[] = {
        DECLARE_METHOD(t_StableRandomGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StableRandomGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StableRandomGenerator, nextNormalizedDouble, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(StableRandomGenerator)[] = {
        { Py_tp_methods, t_StableRandomGenerator__methods_ },
        { Py_tp_init, (void *) t_StableRandomGenerator_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(StableRandomGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(StableRandomGenerator, t_StableRandomGenerator, StableRandomGenerator);

      void t_StableRandomGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(StableRandomGenerator), &PY_TYPE_DEF(StableRandomGenerator), module, "StableRandomGenerator", 0);
      }

      void t_StableRandomGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(StableRandomGenerator), "class_", make_descriptor(StableRandomGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StableRandomGenerator), "wrapfn_", make_descriptor(t_StableRandomGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StableRandomGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_StableRandomGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, StableRandomGenerator::initializeClass, 1)))
          return NULL;
        return t_StableRandomGenerator::wrap_Object(StableRandomGenerator(((t_StableRandomGenerator *) arg)->object.this$));
      }
      static PyObject *t_StableRandomGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, StableRandomGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_StableRandomGenerator_init_(t_StableRandomGenerator *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
        jdouble a1;
        jdouble a2;
        StableRandomGenerator object((jobject) NULL);

        if (!parseArgs(args, "kDD", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = StableRandomGenerator(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_StableRandomGenerator_nextNormalizedDouble(t_StableRandomGenerator *self)
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
#include "org/hipparchus/special/elliptic/jacobi/JacobiEllipticBuilder.h"
#include "org/hipparchus/complex/FieldComplex.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/complex/Complex.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldJacobiElliptic.h"
#include "java/lang/Class.h"
#include "org/hipparchus/special/elliptic/jacobi/JacobiElliptic.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *JacobiEllipticBuilder::class$ = NULL;
          jmethodID *JacobiEllipticBuilder::mids$ = NULL;
          bool JacobiEllipticBuilder::live$ = false;

          jclass JacobiEllipticBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/JacobiEllipticBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_build_fec4e665deb28f28] = env->getStaticMethodID(cls, "build", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/special/elliptic/jacobi/FieldJacobiElliptic;");
              mids$[mid_build_00ba82734bfbeb6e] = env->getStaticMethodID(cls, "build", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/special/elliptic/jacobi/FieldJacobiElliptic;");
              mids$[mid_build_b7a786fccc7ec71c] = env->getStaticMethodID(cls, "build", "(D)Lorg/hipparchus/special/elliptic/jacobi/JacobiElliptic;");
              mids$[mid_build_823b53f843669fcc] = env->getStaticMethodID(cls, "build", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/special/elliptic/jacobi/FieldJacobiElliptic;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic JacobiEllipticBuilder::build(const ::org::hipparchus::complex::Complex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic(env->callStaticObjectMethod(cls, mids$[mid_build_fec4e665deb28f28], a0.this$));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic JacobiEllipticBuilder::build(const ::org::hipparchus::complex::FieldComplex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic(env->callStaticObjectMethod(cls, mids$[mid_build_00ba82734bfbeb6e], a0.this$));
          }

          ::org::hipparchus::special::elliptic::jacobi::JacobiElliptic JacobiEllipticBuilder::build(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::special::elliptic::jacobi::JacobiElliptic(env->callStaticObjectMethod(cls, mids$[mid_build_b7a786fccc7ec71c], a0));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic JacobiEllipticBuilder::build(const ::org::hipparchus::CalculusFieldElement & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic(env->callStaticObjectMethod(cls, mids$[mid_build_823b53f843669fcc], a0.this$));
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
          static PyObject *t_JacobiEllipticBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_JacobiEllipticBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_JacobiEllipticBuilder_build(PyTypeObject *type, PyObject *args);

          static PyMethodDef t_JacobiEllipticBuilder__methods_[] = {
            DECLARE_METHOD(t_JacobiEllipticBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JacobiEllipticBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JacobiEllipticBuilder, build, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(JacobiEllipticBuilder)[] = {
            { Py_tp_methods, t_JacobiEllipticBuilder__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(JacobiEllipticBuilder)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(JacobiEllipticBuilder, t_JacobiEllipticBuilder, JacobiEllipticBuilder);

          void t_JacobiEllipticBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(JacobiEllipticBuilder), &PY_TYPE_DEF(JacobiEllipticBuilder), module, "JacobiEllipticBuilder", 0);
          }

          void t_JacobiEllipticBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiEllipticBuilder), "class_", make_descriptor(JacobiEllipticBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiEllipticBuilder), "wrapfn_", make_descriptor(t_JacobiEllipticBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiEllipticBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_JacobiEllipticBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, JacobiEllipticBuilder::initializeClass, 1)))
              return NULL;
            return t_JacobiEllipticBuilder::wrap_Object(JacobiEllipticBuilder(((t_JacobiEllipticBuilder *) arg)->object.this$));
          }
          static PyObject *t_JacobiEllipticBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, JacobiEllipticBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_JacobiEllipticBuilder_build(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::complex::Complex::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::jacobi::JacobiEllipticBuilder::build(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldJacobiElliptic::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::jacobi::JacobiEllipticBuilder::build(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldJacobiElliptic::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                ::org::hipparchus::special::elliptic::jacobi::JacobiElliptic result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::jacobi::JacobiEllipticBuilder::build(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_JacobiElliptic::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::jacobi::JacobiEllipticBuilder::build(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldJacobiElliptic::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "build", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/ranking/TiesStrategy.h"
#include "java/lang/String.h"
#include "org/hipparchus/stat/ranking/TiesStrategy.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace ranking {

        ::java::lang::Class *TiesStrategy::class$ = NULL;
        jmethodID *TiesStrategy::mids$ = NULL;
        bool TiesStrategy::live$ = false;
        TiesStrategy *TiesStrategy::AVERAGE = NULL;
        TiesStrategy *TiesStrategy::MAXIMUM = NULL;
        TiesStrategy *TiesStrategy::MINIMUM = NULL;
        TiesStrategy *TiesStrategy::RANDOM = NULL;
        TiesStrategy *TiesStrategy::SEQUENTIAL = NULL;

        jclass TiesStrategy::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/ranking/TiesStrategy");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_945f6f2e5278395c] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/stat/ranking/TiesStrategy;");
            mids$[mid_values_430f0c464ac95da6] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/stat/ranking/TiesStrategy;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            AVERAGE = new TiesStrategy(env->getStaticObjectField(cls, "AVERAGE", "Lorg/hipparchus/stat/ranking/TiesStrategy;"));
            MAXIMUM = new TiesStrategy(env->getStaticObjectField(cls, "MAXIMUM", "Lorg/hipparchus/stat/ranking/TiesStrategy;"));
            MINIMUM = new TiesStrategy(env->getStaticObjectField(cls, "MINIMUM", "Lorg/hipparchus/stat/ranking/TiesStrategy;"));
            RANDOM = new TiesStrategy(env->getStaticObjectField(cls, "RANDOM", "Lorg/hipparchus/stat/ranking/TiesStrategy;"));
            SEQUENTIAL = new TiesStrategy(env->getStaticObjectField(cls, "SEQUENTIAL", "Lorg/hipparchus/stat/ranking/TiesStrategy;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TiesStrategy TiesStrategy::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return TiesStrategy(env->callStaticObjectMethod(cls, mids$[mid_valueOf_945f6f2e5278395c], a0.this$));
        }

        JArray< TiesStrategy > TiesStrategy::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< TiesStrategy >(env->callStaticObjectMethod(cls, mids$[mid_values_430f0c464ac95da6]));
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
      namespace ranking {
        static PyObject *t_TiesStrategy_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TiesStrategy_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TiesStrategy_of_(t_TiesStrategy *self, PyObject *args);
        static PyObject *t_TiesStrategy_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_TiesStrategy_values(PyTypeObject *type);
        static PyObject *t_TiesStrategy_get__parameters_(t_TiesStrategy *self, void *data);
        static PyGetSetDef t_TiesStrategy__fields_[] = {
          DECLARE_GET_FIELD(t_TiesStrategy, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TiesStrategy__methods_[] = {
          DECLARE_METHOD(t_TiesStrategy, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TiesStrategy, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TiesStrategy, of_, METH_VARARGS),
          DECLARE_METHOD(t_TiesStrategy, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_TiesStrategy, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TiesStrategy)[] = {
          { Py_tp_methods, t_TiesStrategy__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_TiesStrategy__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TiesStrategy)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(TiesStrategy, t_TiesStrategy, TiesStrategy);
        PyObject *t_TiesStrategy::wrap_Object(const TiesStrategy& object, PyTypeObject *p0)
        {
          PyObject *obj = t_TiesStrategy::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_TiesStrategy *self = (t_TiesStrategy *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_TiesStrategy::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_TiesStrategy::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_TiesStrategy *self = (t_TiesStrategy *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_TiesStrategy::install(PyObject *module)
        {
          installType(&PY_TYPE(TiesStrategy), &PY_TYPE_DEF(TiesStrategy), module, "TiesStrategy", 0);
        }

        void t_TiesStrategy::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TiesStrategy), "class_", make_descriptor(TiesStrategy::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TiesStrategy), "wrapfn_", make_descriptor(t_TiesStrategy::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TiesStrategy), "boxfn_", make_descriptor(boxObject));
          env->getClass(TiesStrategy::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(TiesStrategy), "AVERAGE", make_descriptor(t_TiesStrategy::wrap_Object(*TiesStrategy::AVERAGE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TiesStrategy), "MAXIMUM", make_descriptor(t_TiesStrategy::wrap_Object(*TiesStrategy::MAXIMUM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TiesStrategy), "MINIMUM", make_descriptor(t_TiesStrategy::wrap_Object(*TiesStrategy::MINIMUM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TiesStrategy), "RANDOM", make_descriptor(t_TiesStrategy::wrap_Object(*TiesStrategy::RANDOM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TiesStrategy), "SEQUENTIAL", make_descriptor(t_TiesStrategy::wrap_Object(*TiesStrategy::SEQUENTIAL)));
        }

        static PyObject *t_TiesStrategy_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TiesStrategy::initializeClass, 1)))
            return NULL;
          return t_TiesStrategy::wrap_Object(TiesStrategy(((t_TiesStrategy *) arg)->object.this$));
        }
        static PyObject *t_TiesStrategy_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TiesStrategy::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TiesStrategy_of_(t_TiesStrategy *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_TiesStrategy_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          TiesStrategy result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::ranking::TiesStrategy::valueOf(a0));
            return t_TiesStrategy::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_TiesStrategy_values(PyTypeObject *type)
        {
          JArray< TiesStrategy > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::stat::ranking::TiesStrategy::values());
          return JArray<jobject>(result.this$).wrap(t_TiesStrategy::wrap_jobject);
        }
        static PyObject *t_TiesStrategy_get__parameters_(t_TiesStrategy *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/BSPTreeVisitor.h"
#include "org/hipparchus/geometry/partitioning/BSPTreeVisitor$Order.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *BSPTreeVisitor::class$ = NULL;
        jmethodID *BSPTreeVisitor::mids$ = NULL;
        bool BSPTreeVisitor::live$ = false;

        jclass BSPTreeVisitor::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/BSPTreeVisitor");

            mids$ = new jmethodID[max_mid];
            mids$[mid_visitInternalNode_3a739bdb8ed3db11] = env->getMethodID(cls, "visitInternalNode", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)V");
            mids$[mid_visitLeafNode_3a739bdb8ed3db11] = env->getMethodID(cls, "visitLeafNode", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)V");
            mids$[mid_visitOrder_56267f1970076165] = env->getMethodID(cls, "visitOrder", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor$Order;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void BSPTreeVisitor::visitInternalNode(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_visitInternalNode_3a739bdb8ed3db11], a0.this$);
        }

        void BSPTreeVisitor::visitLeafNode(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_visitLeafNode_3a739bdb8ed3db11], a0.this$);
        }

        ::org::hipparchus::geometry::partitioning::BSPTreeVisitor$Order BSPTreeVisitor::visitOrder(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::BSPTreeVisitor$Order(env->callObjectMethod(this$, mids$[mid_visitOrder_56267f1970076165], a0.this$));
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
        static PyObject *t_BSPTreeVisitor_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTreeVisitor_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTreeVisitor_of_(t_BSPTreeVisitor *self, PyObject *args);
        static PyObject *t_BSPTreeVisitor_visitInternalNode(t_BSPTreeVisitor *self, PyObject *arg);
        static PyObject *t_BSPTreeVisitor_visitLeafNode(t_BSPTreeVisitor *self, PyObject *arg);
        static PyObject *t_BSPTreeVisitor_visitOrder(t_BSPTreeVisitor *self, PyObject *arg);
        static PyObject *t_BSPTreeVisitor_get__parameters_(t_BSPTreeVisitor *self, void *data);
        static PyGetSetDef t_BSPTreeVisitor__fields_[] = {
          DECLARE_GET_FIELD(t_BSPTreeVisitor, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BSPTreeVisitor__methods_[] = {
          DECLARE_METHOD(t_BSPTreeVisitor, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTreeVisitor, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTreeVisitor, of_, METH_VARARGS),
          DECLARE_METHOD(t_BSPTreeVisitor, visitInternalNode, METH_O),
          DECLARE_METHOD(t_BSPTreeVisitor, visitLeafNode, METH_O),
          DECLARE_METHOD(t_BSPTreeVisitor, visitOrder, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BSPTreeVisitor)[] = {
          { Py_tp_methods, t_BSPTreeVisitor__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BSPTreeVisitor__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BSPTreeVisitor)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BSPTreeVisitor, t_BSPTreeVisitor, BSPTreeVisitor);
        PyObject *t_BSPTreeVisitor::wrap_Object(const BSPTreeVisitor& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTreeVisitor::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTreeVisitor *self = (t_BSPTreeVisitor *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BSPTreeVisitor::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTreeVisitor::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTreeVisitor *self = (t_BSPTreeVisitor *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BSPTreeVisitor::install(PyObject *module)
        {
          installType(&PY_TYPE(BSPTreeVisitor), &PY_TYPE_DEF(BSPTreeVisitor), module, "BSPTreeVisitor", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor), "Order", make_descriptor(&PY_TYPE_DEF(BSPTreeVisitor$Order)));
        }

        void t_BSPTreeVisitor::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor), "class_", make_descriptor(BSPTreeVisitor::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor), "wrapfn_", make_descriptor(t_BSPTreeVisitor::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BSPTreeVisitor_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BSPTreeVisitor::initializeClass, 1)))
            return NULL;
          return t_BSPTreeVisitor::wrap_Object(BSPTreeVisitor(((t_BSPTreeVisitor *) arg)->object.this$));
        }
        static PyObject *t_BSPTreeVisitor_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BSPTreeVisitor::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BSPTreeVisitor_of_(t_BSPTreeVisitor *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BSPTreeVisitor_visitInternalNode(t_BSPTreeVisitor *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
          {
            OBJ_CALL(self->object.visitInternalNode(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "visitInternalNode", arg);
          return NULL;
        }

        static PyObject *t_BSPTreeVisitor_visitLeafNode(t_BSPTreeVisitor *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
          {
            OBJ_CALL(self->object.visitLeafNode(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "visitLeafNode", arg);
          return NULL;
        }

        static PyObject *t_BSPTreeVisitor_visitOrder(t_BSPTreeVisitor *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::BSPTreeVisitor$Order result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
          {
            OBJ_CALL(result = self->object.visitOrder(a0));
            return ::org::hipparchus::geometry::partitioning::t_BSPTreeVisitor$Order::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "visitOrder", arg);
          return NULL;
        }
        static PyObject *t_BSPTreeVisitor_get__parameters_(t_BSPTreeVisitor *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/ImmutableTimeStampedCache.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/util/List.h"
#include "org/orekit/utils/ImmutableTimeStampedCache.h"
#include "java/util/Collection.h"
#include "org/orekit/utils/TimeStampedCache.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/stream/Stream.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ImmutableTimeStampedCache::class$ = NULL;
      jmethodID *ImmutableTimeStampedCache::mids$ = NULL;
      bool ImmutableTimeStampedCache::live$ = false;

      jclass ImmutableTimeStampedCache::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ImmutableTimeStampedCache");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_36a24b5e65508672] = env->getMethodID(cls, "<init>", "(ILjava/util/Collection;)V");
          mids$[mid_emptyCache_2902dff7f102e3bf] = env->getStaticMethodID(cls, "emptyCache", "()Lorg/orekit/utils/ImmutableTimeStampedCache;");
          mids$[mid_getAll_e62d3bb06d56d7e3] = env->getMethodID(cls, "getAll", "()Ljava/util/List;");
          mids$[mid_getEarliest_a63f3f151ca9e302] = env->getMethodID(cls, "getEarliest", "()Lorg/orekit/time/TimeStamped;");
          mids$[mid_getLatest_a63f3f151ca9e302] = env->getMethodID(cls, "getLatest", "()Lorg/orekit/time/TimeStamped;");
          mids$[mid_getMaxNeighborsSize_55546ef6a647f39b] = env->getMethodID(cls, "getMaxNeighborsSize", "()I");
          mids$[mid_getNeighbors_70177eb25c19b8d4] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/AbsoluteDate;I)Ljava/util/stream/Stream;");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ImmutableTimeStampedCache::ImmutableTimeStampedCache(jint a0, const ::java::util::Collection & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_36a24b5e65508672, a0, a1.this$)) {}

      ImmutableTimeStampedCache ImmutableTimeStampedCache::emptyCache()
      {
        jclass cls = env->getClass(initializeClass);
        return ImmutableTimeStampedCache(env->callStaticObjectMethod(cls, mids$[mid_emptyCache_2902dff7f102e3bf]));
      }

      ::java::util::List ImmutableTimeStampedCache::getAll() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAll_e62d3bb06d56d7e3]));
      }

      ::org::orekit::time::TimeStamped ImmutableTimeStampedCache::getEarliest() const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_getEarliest_a63f3f151ca9e302]));
      }

      ::org::orekit::time::TimeStamped ImmutableTimeStampedCache::getLatest() const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_getLatest_a63f3f151ca9e302]));
      }

      jint ImmutableTimeStampedCache::getMaxNeighborsSize() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxNeighborsSize_55546ef6a647f39b]);
      }

      ::java::util::stream::Stream ImmutableTimeStampedCache::getNeighbors(const ::org::orekit::time::AbsoluteDate & a0, jint a1) const
      {
        return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getNeighbors_70177eb25c19b8d4], a0.this$, a1));
      }

      ::java::lang::String ImmutableTimeStampedCache::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
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
      static PyObject *t_ImmutableTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ImmutableTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ImmutableTimeStampedCache_of_(t_ImmutableTimeStampedCache *self, PyObject *args);
      static int t_ImmutableTimeStampedCache_init_(t_ImmutableTimeStampedCache *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ImmutableTimeStampedCache_emptyCache(PyTypeObject *type);
      static PyObject *t_ImmutableTimeStampedCache_getAll(t_ImmutableTimeStampedCache *self);
      static PyObject *t_ImmutableTimeStampedCache_getEarliest(t_ImmutableTimeStampedCache *self);
      static PyObject *t_ImmutableTimeStampedCache_getLatest(t_ImmutableTimeStampedCache *self);
      static PyObject *t_ImmutableTimeStampedCache_getMaxNeighborsSize(t_ImmutableTimeStampedCache *self);
      static PyObject *t_ImmutableTimeStampedCache_getNeighbors(t_ImmutableTimeStampedCache *self, PyObject *args);
      static PyObject *t_ImmutableTimeStampedCache_toString(t_ImmutableTimeStampedCache *self, PyObject *args);
      static PyObject *t_ImmutableTimeStampedCache_get__all(t_ImmutableTimeStampedCache *self, void *data);
      static PyObject *t_ImmutableTimeStampedCache_get__earliest(t_ImmutableTimeStampedCache *self, void *data);
      static PyObject *t_ImmutableTimeStampedCache_get__latest(t_ImmutableTimeStampedCache *self, void *data);
      static PyObject *t_ImmutableTimeStampedCache_get__maxNeighborsSize(t_ImmutableTimeStampedCache *self, void *data);
      static PyObject *t_ImmutableTimeStampedCache_get__parameters_(t_ImmutableTimeStampedCache *self, void *data);
      static PyGetSetDef t_ImmutableTimeStampedCache__fields_[] = {
        DECLARE_GET_FIELD(t_ImmutableTimeStampedCache, all),
        DECLARE_GET_FIELD(t_ImmutableTimeStampedCache, earliest),
        DECLARE_GET_FIELD(t_ImmutableTimeStampedCache, latest),
        DECLARE_GET_FIELD(t_ImmutableTimeStampedCache, maxNeighborsSize),
        DECLARE_GET_FIELD(t_ImmutableTimeStampedCache, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ImmutableTimeStampedCache__methods_[] = {
        DECLARE_METHOD(t_ImmutableTimeStampedCache, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ImmutableTimeStampedCache, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ImmutableTimeStampedCache, of_, METH_VARARGS),
        DECLARE_METHOD(t_ImmutableTimeStampedCache, emptyCache, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_ImmutableTimeStampedCache, getAll, METH_NOARGS),
        DECLARE_METHOD(t_ImmutableTimeStampedCache, getEarliest, METH_NOARGS),
        DECLARE_METHOD(t_ImmutableTimeStampedCache, getLatest, METH_NOARGS),
        DECLARE_METHOD(t_ImmutableTimeStampedCache, getMaxNeighborsSize, METH_NOARGS),
        DECLARE_METHOD(t_ImmutableTimeStampedCache, getNeighbors, METH_VARARGS),
        DECLARE_METHOD(t_ImmutableTimeStampedCache, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ImmutableTimeStampedCache)[] = {
        { Py_tp_methods, t_ImmutableTimeStampedCache__methods_ },
        { Py_tp_init, (void *) t_ImmutableTimeStampedCache_init_ },
        { Py_tp_getset, t_ImmutableTimeStampedCache__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ImmutableTimeStampedCache)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ImmutableTimeStampedCache, t_ImmutableTimeStampedCache, ImmutableTimeStampedCache);
      PyObject *t_ImmutableTimeStampedCache::wrap_Object(const ImmutableTimeStampedCache& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ImmutableTimeStampedCache::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ImmutableTimeStampedCache *self = (t_ImmutableTimeStampedCache *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ImmutableTimeStampedCache::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ImmutableTimeStampedCache::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ImmutableTimeStampedCache *self = (t_ImmutableTimeStampedCache *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ImmutableTimeStampedCache::install(PyObject *module)
      {
        installType(&PY_TYPE(ImmutableTimeStampedCache), &PY_TYPE_DEF(ImmutableTimeStampedCache), module, "ImmutableTimeStampedCache", 0);
      }

      void t_ImmutableTimeStampedCache::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ImmutableTimeStampedCache), "class_", make_descriptor(ImmutableTimeStampedCache::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ImmutableTimeStampedCache), "wrapfn_", make_descriptor(t_ImmutableTimeStampedCache::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ImmutableTimeStampedCache), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ImmutableTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ImmutableTimeStampedCache::initializeClass, 1)))
          return NULL;
        return t_ImmutableTimeStampedCache::wrap_Object(ImmutableTimeStampedCache(((t_ImmutableTimeStampedCache *) arg)->object.this$));
      }
      static PyObject *t_ImmutableTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ImmutableTimeStampedCache::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ImmutableTimeStampedCache_of_(t_ImmutableTimeStampedCache *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_ImmutableTimeStampedCache_init_(t_ImmutableTimeStampedCache *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        ::java::util::Collection a1((jobject) NULL);
        PyTypeObject **p1;
        ImmutableTimeStampedCache object((jobject) NULL);

        if (!parseArgs(args, "IK", ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
        {
          INT_CALL(object = ImmutableTimeStampedCache(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ImmutableTimeStampedCache_emptyCache(PyTypeObject *type)
      {
        ImmutableTimeStampedCache result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::utils::ImmutableTimeStampedCache::emptyCache());
        return t_ImmutableTimeStampedCache::wrap_Object(result);
      }

      static PyObject *t_ImmutableTimeStampedCache_getAll(t_ImmutableTimeStampedCache *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getAll());
        return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_ImmutableTimeStampedCache_getEarliest(t_ImmutableTimeStampedCache *self)
      {
        ::org::orekit::time::TimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getEarliest());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
      }

      static PyObject *t_ImmutableTimeStampedCache_getLatest(t_ImmutableTimeStampedCache *self)
      {
        ::org::orekit::time::TimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getLatest());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
      }

      static PyObject *t_ImmutableTimeStampedCache_getMaxNeighborsSize(t_ImmutableTimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxNeighborsSize());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ImmutableTimeStampedCache_getNeighbors(t_ImmutableTimeStampedCache *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jint a1;
        ::java::util::stream::Stream result((jobject) NULL);

        if (!parseArgs(args, "kI", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.getNeighbors(a0, a1));
          return ::java::util::stream::t_Stream::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getNeighbors", args);
        return NULL;
      }

      static PyObject *t_ImmutableTimeStampedCache_toString(t_ImmutableTimeStampedCache *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(ImmutableTimeStampedCache), (PyObject *) self, "toString", args, 2);
      }
      static PyObject *t_ImmutableTimeStampedCache_get__parameters_(t_ImmutableTimeStampedCache *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_ImmutableTimeStampedCache_get__all(t_ImmutableTimeStampedCache *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getAll());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_ImmutableTimeStampedCache_get__earliest(t_ImmutableTimeStampedCache *self, void *data)
      {
        ::org::orekit::time::TimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarliest());
        return ::org::orekit::time::t_TimeStamped::wrap_Object(value);
      }

      static PyObject *t_ImmutableTimeStampedCache_get__latest(t_ImmutableTimeStampedCache *self, void *data)
      {
        ::org::orekit::time::TimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getLatest());
        return ::org::orekit::time::t_TimeStamped::wrap_Object(value);
      }

      static PyObject *t_ImmutableTimeStampedCache_get__maxNeighborsSize(t_ImmutableTimeStampedCache *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxNeighborsSize());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/FieldButcherArrayProvider.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *FieldButcherArrayProvider::class$ = NULL;
        jmethodID *FieldButcherArrayProvider::mids$ = NULL;
        bool FieldButcherArrayProvider::live$ = false;

        jclass FieldButcherArrayProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/FieldButcherArrayProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getA_34ce7b2f6a50059b] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_883be608cfc68c26] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_883be608cfc68c26] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > FieldButcherArrayProvider::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_34ce7b2f6a50059b]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldButcherArrayProvider::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_883be608cfc68c26]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldButcherArrayProvider::getC() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getC_883be608cfc68c26]));
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
        static PyObject *t_FieldButcherArrayProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldButcherArrayProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldButcherArrayProvider_of_(t_FieldButcherArrayProvider *self, PyObject *args);
        static PyObject *t_FieldButcherArrayProvider_getA(t_FieldButcherArrayProvider *self);
        static PyObject *t_FieldButcherArrayProvider_getB(t_FieldButcherArrayProvider *self);
        static PyObject *t_FieldButcherArrayProvider_getC(t_FieldButcherArrayProvider *self);
        static PyObject *t_FieldButcherArrayProvider_get__a(t_FieldButcherArrayProvider *self, void *data);
        static PyObject *t_FieldButcherArrayProvider_get__b(t_FieldButcherArrayProvider *self, void *data);
        static PyObject *t_FieldButcherArrayProvider_get__c(t_FieldButcherArrayProvider *self, void *data);
        static PyObject *t_FieldButcherArrayProvider_get__parameters_(t_FieldButcherArrayProvider *self, void *data);
        static PyGetSetDef t_FieldButcherArrayProvider__fields_[] = {
          DECLARE_GET_FIELD(t_FieldButcherArrayProvider, a),
          DECLARE_GET_FIELD(t_FieldButcherArrayProvider, b),
          DECLARE_GET_FIELD(t_FieldButcherArrayProvider, c),
          DECLARE_GET_FIELD(t_FieldButcherArrayProvider, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldButcherArrayProvider__methods_[] = {
          DECLARE_METHOD(t_FieldButcherArrayProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldButcherArrayProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldButcherArrayProvider, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldButcherArrayProvider, getA, METH_NOARGS),
          DECLARE_METHOD(t_FieldButcherArrayProvider, getB, METH_NOARGS),
          DECLARE_METHOD(t_FieldButcherArrayProvider, getC, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldButcherArrayProvider)[] = {
          { Py_tp_methods, t_FieldButcherArrayProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldButcherArrayProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldButcherArrayProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldButcherArrayProvider, t_FieldButcherArrayProvider, FieldButcherArrayProvider);
        PyObject *t_FieldButcherArrayProvider::wrap_Object(const FieldButcherArrayProvider& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldButcherArrayProvider::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldButcherArrayProvider *self = (t_FieldButcherArrayProvider *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldButcherArrayProvider::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldButcherArrayProvider::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldButcherArrayProvider *self = (t_FieldButcherArrayProvider *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldButcherArrayProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldButcherArrayProvider), &PY_TYPE_DEF(FieldButcherArrayProvider), module, "FieldButcherArrayProvider", 0);
        }

        void t_FieldButcherArrayProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldButcherArrayProvider), "class_", make_descriptor(FieldButcherArrayProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldButcherArrayProvider), "wrapfn_", make_descriptor(t_FieldButcherArrayProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldButcherArrayProvider), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldButcherArrayProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldButcherArrayProvider::initializeClass, 1)))
            return NULL;
          return t_FieldButcherArrayProvider::wrap_Object(FieldButcherArrayProvider(((t_FieldButcherArrayProvider *) arg)->object.this$));
        }
        static PyObject *t_FieldButcherArrayProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldButcherArrayProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldButcherArrayProvider_of_(t_FieldButcherArrayProvider *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldButcherArrayProvider_getA(t_FieldButcherArrayProvider *self)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);
          OBJ_CALL(result = self->object.getA());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        static PyObject *t_FieldButcherArrayProvider_getB(t_FieldButcherArrayProvider *self)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getB());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldButcherArrayProvider_getC(t_FieldButcherArrayProvider *self)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getC());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }
        static PyObject *t_FieldButcherArrayProvider_get__parameters_(t_FieldButcherArrayProvider *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldButcherArrayProvider_get__a(t_FieldButcherArrayProvider *self, void *data)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_FieldButcherArrayProvider_get__b(t_FieldButcherArrayProvider *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldButcherArrayProvider_get__c(t_FieldButcherArrayProvider *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Collection.h"
#include "java/util/Iterator.h"
#include "java/util/Spliterator.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/util/stream/Stream.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Collection::class$ = NULL;
    jmethodID *Collection::mids$ = NULL;
    bool Collection::live$ = false;

    jclass Collection::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Collection");

        mids$ = new jmethodID[max_mid];
        mids$[mid_add_460c5e2d9d51c6cc] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_addAll_801a92d34e44726e] = env->getMethodID(cls, "addAll", "(Ljava/util/Collection;)Z");
        mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_contains_460c5e2d9d51c6cc] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_containsAll_801a92d34e44726e] = env->getMethodID(cls, "containsAll", "(Ljava/util/Collection;)Z");
        mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isEmpty_9ab94ac1dc23b105] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_iterator_fc7780bc5d5b73b0] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_parallelStream_14e21bf777ff0ccf] = env->getMethodID(cls, "parallelStream", "()Ljava/util/stream/Stream;");
        mids$[mid_remove_460c5e2d9d51c6cc] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
        mids$[mid_removeAll_801a92d34e44726e] = env->getMethodID(cls, "removeAll", "(Ljava/util/Collection;)Z");
        mids$[mid_retainAll_801a92d34e44726e] = env->getMethodID(cls, "retainAll", "(Ljava/util/Collection;)Z");
        mids$[mid_size_55546ef6a647f39b] = env->getMethodID(cls, "size", "()I");
        mids$[mid_spliterator_fe8f811ebd6e639a] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator;");
        mids$[mid_stream_14e21bf777ff0ccf] = env->getMethodID(cls, "stream", "()Ljava/util/stream/Stream;");
        mids$[mid_toArray_24e2edd6319f4c5a] = env->getMethodID(cls, "toArray", "()[Ljava/lang/Object;");
        mids$[mid_toArray_70d423ae061f83d5] = env->getMethodID(cls, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean Collection::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_460c5e2d9d51c6cc], a0.this$);
    }

    jboolean Collection::addAll(const Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_801a92d34e44726e], a0.this$);
    }

    void Collection::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
    }

    jboolean Collection::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_460c5e2d9d51c6cc], a0.this$);
    }

    jboolean Collection::containsAll(const Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsAll_801a92d34e44726e], a0.this$);
    }

    jboolean Collection::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
    }

    jint Collection::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
    }

    jboolean Collection::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_9ab94ac1dc23b105]);
    }

    ::java::util::Iterator Collection::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_fc7780bc5d5b73b0]));
    }

    ::java::util::stream::Stream Collection::parallelStream() const
    {
      return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_parallelStream_14e21bf777ff0ccf]));
    }

    jboolean Collection::remove(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_460c5e2d9d51c6cc], a0.this$);
    }

    jboolean Collection::removeAll(const Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeAll_801a92d34e44726e], a0.this$);
    }

    jboolean Collection::retainAll(const Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_retainAll_801a92d34e44726e], a0.this$);
    }

    jint Collection::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_55546ef6a647f39b]);
    }

    ::java::util::Spliterator Collection::spliterator() const
    {
      return ::java::util::Spliterator(env->callObjectMethod(this$, mids$[mid_spliterator_fe8f811ebd6e639a]));
    }

    ::java::util::stream::Stream Collection::stream() const
    {
      return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_stream_14e21bf777ff0ccf]));
    }

    JArray< ::java::lang::Object > Collection::toArray() const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_24e2edd6319f4c5a]));
    }

    JArray< ::java::lang::Object > Collection::toArray(const JArray< ::java::lang::Object > & a0) const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_70d423ae061f83d5], a0.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Collection_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collection_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collection_of_(t_Collection *self, PyObject *args);
    static PyObject *t_Collection_add(t_Collection *self, PyObject *arg);
    static PyObject *t_Collection_addAll(t_Collection *self, PyObject *arg);
    static PyObject *t_Collection_clear(t_Collection *self);
    static PyObject *t_Collection_contains(t_Collection *self, PyObject *arg);
    static PyObject *t_Collection_containsAll(t_Collection *self, PyObject *arg);
    static PyObject *t_Collection_equals(t_Collection *self, PyObject *arg);
    static PyObject *t_Collection_hashCode(t_Collection *self);
    static PyObject *t_Collection_isEmpty(t_Collection *self);
    static PyObject *t_Collection_iterator(t_Collection *self, PyObject *args);
    static PyObject *t_Collection_parallelStream(t_Collection *self);
    static PyObject *t_Collection_remove(t_Collection *self, PyObject *arg);
    static PyObject *t_Collection_removeAll(t_Collection *self, PyObject *arg);
    static PyObject *t_Collection_retainAll(t_Collection *self, PyObject *arg);
    static PyObject *t_Collection_size(t_Collection *self);
    static PyObject *t_Collection_spliterator(t_Collection *self, PyObject *args);
    static PyObject *t_Collection_stream(t_Collection *self);
    static PyObject *t_Collection_toArray(t_Collection *self, PyObject *args);
    static PyObject *t_Collection_get__empty(t_Collection *self, void *data);
    static PyObject *t_Collection_get__parameters_(t_Collection *self, void *data);
    static PyGetSetDef t_Collection__fields_[] = {
      DECLARE_GET_FIELD(t_Collection, empty),
      DECLARE_GET_FIELD(t_Collection, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Collection__methods_[] = {
      DECLARE_METHOD(t_Collection, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collection, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collection, of_, METH_VARARGS),
      DECLARE_METHOD(t_Collection, add, METH_O),
      DECLARE_METHOD(t_Collection, addAll, METH_O),
      DECLARE_METHOD(t_Collection, clear, METH_NOARGS),
      DECLARE_METHOD(t_Collection, contains, METH_O),
      DECLARE_METHOD(t_Collection, containsAll, METH_O),
      DECLARE_METHOD(t_Collection, equals, METH_O),
      DECLARE_METHOD(t_Collection, hashCode, METH_NOARGS),
      DECLARE_METHOD(t_Collection, isEmpty, METH_NOARGS),
      DECLARE_METHOD(t_Collection, iterator, METH_VARARGS),
      DECLARE_METHOD(t_Collection, parallelStream, METH_NOARGS),
      DECLARE_METHOD(t_Collection, remove, METH_O),
      DECLARE_METHOD(t_Collection, removeAll, METH_O),
      DECLARE_METHOD(t_Collection, retainAll, METH_O),
      DECLARE_METHOD(t_Collection, size, METH_NOARGS),
      DECLARE_METHOD(t_Collection, spliterator, METH_VARARGS),
      DECLARE_METHOD(t_Collection, stream, METH_NOARGS),
      DECLARE_METHOD(t_Collection, toArray, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Collection)[] = {
      { Py_tp_methods, t_Collection__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Collection__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_Collection *)) get_generic_iterator< t_Collection >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Collection)[] = {
      &PY_TYPE_DEF(::java::lang::Iterable),
      NULL
    };

    DEFINE_TYPE(Collection, t_Collection, Collection);
    PyObject *t_Collection::wrap_Object(const Collection& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Collection::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Collection *self = (t_Collection *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Collection::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Collection::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Collection *self = (t_Collection *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Collection::install(PyObject *module)
    {
      installType(&PY_TYPE(Collection), &PY_TYPE_DEF(Collection), module, "Collection", 0);
    }

    void t_Collection::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Collection), "class_", make_descriptor(Collection::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Collection), "wrapfn_", make_descriptor(t_Collection::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Collection), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Collection_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Collection::initializeClass, 1)))
        return NULL;
      return t_Collection::wrap_Object(Collection(((t_Collection *) arg)->object.this$));
    }
    static PyObject *t_Collection_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Collection::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Collection_of_(t_Collection *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Collection_add(t_Collection *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.add(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "add", arg);
      return NULL;
    }

    static PyObject *t_Collection_addAll(t_Collection *self, PyObject *arg)
    {
      Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", Collection::initializeClass, &a0, &p0, t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.addAll(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "addAll", arg);
      return NULL;
    }

    static PyObject *t_Collection_clear(t_Collection *self)
    {
      OBJ_CALL(self->object.clear());
      Py_RETURN_NONE;
    }

    static PyObject *t_Collection_contains(t_Collection *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "contains", arg);
      return NULL;
    }

    static PyObject *t_Collection_containsAll(t_Collection *self, PyObject *arg)
    {
      Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", Collection::initializeClass, &a0, &p0, t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.containsAll(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "containsAll", arg);
      return NULL;
    }

    static PyObject *t_Collection_equals(t_Collection *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "equals", arg);
      return NULL;
    }

    static PyObject *t_Collection_hashCode(t_Collection *self)
    {
      jint result;
      OBJ_CALL(result = self->object.hashCode());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Collection_isEmpty(t_Collection *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isEmpty());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Collection_iterator(t_Collection *self, PyObject *args)
    {
      ::java::util::Iterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(Collection), (PyObject *) self, "iterator", args, 2);
    }

    static PyObject *t_Collection_parallelStream(t_Collection *self)
    {
      ::java::util::stream::Stream result((jobject) NULL);
      OBJ_CALL(result = self->object.parallelStream());
      return ::java::util::stream::t_Stream::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_Collection_remove(t_Collection *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.remove(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "remove", arg);
      return NULL;
    }

    static PyObject *t_Collection_removeAll(t_Collection *self, PyObject *arg)
    {
      Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", Collection::initializeClass, &a0, &p0, t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.removeAll(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "removeAll", arg);
      return NULL;
    }

    static PyObject *t_Collection_retainAll(t_Collection *self, PyObject *arg)
    {
      Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", Collection::initializeClass, &a0, &p0, t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.retainAll(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "retainAll", arg);
      return NULL;
    }

    static PyObject *t_Collection_size(t_Collection *self)
    {
      jint result;
      OBJ_CALL(result = self->object.size());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Collection_spliterator(t_Collection *self, PyObject *args)
    {
      ::java::util::Spliterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.spliterator());
        return ::java::util::t_Spliterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(Collection), (PyObject *) self, "spliterator", args, 2);
    }

    static PyObject *t_Collection_stream(t_Collection *self)
    {
      ::java::util::stream::Stream result((jobject) NULL);
      OBJ_CALL(result = self->object.stream());
      return ::java::util::stream::t_Stream::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_Collection_toArray(t_Collection *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          JArray< ::java::lang::Object > result((jobject) NULL);
          OBJ_CALL(result = self->object.toArray());
          return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
        }
        break;
       case 1:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          JArray< ::java::lang::Object > result((jobject) NULL);

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(result = self->object.toArray(a0));
            return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "toArray", args);
      return NULL;
    }
    static PyObject *t_Collection_get__parameters_(t_Collection *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_Collection_get__empty(t_Collection *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
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
          mids$[mid_computeSecondDerivatives_cfe5741fd8aa4262] = env->getMethodID(cls, "computeSecondDerivatives", "(D[D[D)[D");
          mids$[mid_getDimension_55546ef6a647f39b] = env->getMethodID(cls, "getDimension", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > SecondOrderODE::computeSecondDerivatives(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeSecondDerivatives_cfe5741fd8aa4262], a0, a1.this$, a2.this$));
      }

      jint SecondOrderODE::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_55546ef6a647f39b]);
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
#include "org/orekit/propagation/conversion/EphemerisPropagatorBuilder.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/time/TimeStampedPair.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/propagation/conversion/EphemerisPropagatorBuilder.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "java/lang/Object.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *EphemerisPropagatorBuilder::class$ = NULL;
        jmethodID *EphemerisPropagatorBuilder::mids$ = NULL;
        bool EphemerisPropagatorBuilder::live$ = false;

        jclass EphemerisPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/EphemerisPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a270f372b14e8ccf] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/time/TimeInterpolator;)V");
            mids$[mid_init$_76b7d84534d086f1] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_init$_29c95222b0ba8aa4] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/time/TimeInterpolator;Ljava/util/List;Lorg/orekit/time/TimeInterpolator;)V");
            mids$[mid_init$_1984a4ea061303a5] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/time/TimeInterpolator;Ljava/util/List;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_buildLeastSquaresModel_1a4dd1f247347a8f] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;");
            mids$[mid_buildPropagator_708cc138373fff03] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/Propagator;");
            mids$[mid_copy_f0747279000167ed] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/EphemerisPropagatorBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EphemerisPropagatorBuilder::EphemerisPropagatorBuilder(const ::java::util::List & a0, const ::org::orekit::time::TimeInterpolator & a1) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_a270f372b14e8ccf, a0.this$, a1.this$)) {}

        EphemerisPropagatorBuilder::EphemerisPropagatorBuilder(const ::java::util::List & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::org::orekit::attitudes::AttitudeProvider & a2) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_76b7d84534d086f1, a0.this$, a1.this$, a2.this$)) {}

        EphemerisPropagatorBuilder::EphemerisPropagatorBuilder(const ::java::util::List & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::java::util::List & a2, const ::org::orekit::time::TimeInterpolator & a3) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_29c95222b0ba8aa4, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        EphemerisPropagatorBuilder::EphemerisPropagatorBuilder(const ::java::util::List & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::java::util::List & a2, const ::org::orekit::time::TimeInterpolator & a3, const ::org::orekit::attitudes::AttitudeProvider & a4) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_1984a4ea061303a5, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

        ::org::orekit::estimation::leastsquares::AbstractBatchLSModel EphemerisPropagatorBuilder::buildLeastSquaresModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) const
        {
          return ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(env->callObjectMethod(this$, mids$[mid_buildLeastSquaresModel_1a4dd1f247347a8f], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::Propagator EphemerisPropagatorBuilder::buildPropagator(const JArray< jdouble > & a0) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_buildPropagator_708cc138373fff03], a0.this$));
        }

        EphemerisPropagatorBuilder EphemerisPropagatorBuilder::copy() const
        {
          return EphemerisPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_copy_f0747279000167ed]));
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
        static PyObject *t_EphemerisPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EphemerisPropagatorBuilder_init_(t_EphemerisPropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EphemerisPropagatorBuilder_buildLeastSquaresModel(t_EphemerisPropagatorBuilder *self, PyObject *args);
        static PyObject *t_EphemerisPropagatorBuilder_buildPropagator(t_EphemerisPropagatorBuilder *self, PyObject *args);
        static PyObject *t_EphemerisPropagatorBuilder_copy(t_EphemerisPropagatorBuilder *self, PyObject *args);

        static PyMethodDef t_EphemerisPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_EphemerisPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisPropagatorBuilder, buildLeastSquaresModel, METH_VARARGS),
          DECLARE_METHOD(t_EphemerisPropagatorBuilder, buildPropagator, METH_VARARGS),
          DECLARE_METHOD(t_EphemerisPropagatorBuilder, copy, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EphemerisPropagatorBuilder)[] = {
          { Py_tp_methods, t_EphemerisPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_EphemerisPropagatorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EphemerisPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorBuilder),
          NULL
        };

        DEFINE_TYPE(EphemerisPropagatorBuilder, t_EphemerisPropagatorBuilder, EphemerisPropagatorBuilder);

        void t_EphemerisPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(EphemerisPropagatorBuilder), &PY_TYPE_DEF(EphemerisPropagatorBuilder), module, "EphemerisPropagatorBuilder", 0);
        }

        void t_EphemerisPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisPropagatorBuilder), "class_", make_descriptor(EphemerisPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisPropagatorBuilder), "wrapfn_", make_descriptor(t_EphemerisPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EphemerisPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EphemerisPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_EphemerisPropagatorBuilder::wrap_Object(EphemerisPropagatorBuilder(((t_EphemerisPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_EphemerisPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EphemerisPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EphemerisPropagatorBuilder_init_(t_EphemerisPropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
              PyTypeObject **p1;
              EphemerisPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_))
              {
                INT_CALL(object = EphemerisPropagatorBuilder(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
              EphemerisPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "KKk", ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2))
              {
                INT_CALL(object = EphemerisPropagatorBuilder(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::util::List a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::time::TimeInterpolator a3((jobject) NULL);
              PyTypeObject **p3;
              EphemerisPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "KKKK", ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::java::util::t_List::parameters_, &a3, &p3, ::org::orekit::time::t_TimeInterpolator::parameters_))
              {
                INT_CALL(object = EphemerisPropagatorBuilder(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::util::List a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::time::TimeInterpolator a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
              EphemerisPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "KKKKk", ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::java::util::t_List::parameters_, &a3, &p3, ::org::orekit::time::t_TimeInterpolator::parameters_, &a4))
              {
                INT_CALL(object = EphemerisPropagatorBuilder(a0, a1, a2, a3, a4));
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

        static PyObject *t_EphemerisPropagatorBuilder_buildLeastSquaresModel(t_EphemerisPropagatorBuilder *self, PyObject *args)
        {
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          ::org::orekit::estimation::leastsquares::AbstractBatchLSModel result((jobject) NULL);

          if (!parseArgs(args, "[kKkk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            OBJ_CALL(result = self->object.buildLeastSquaresModel(a0, a1, a2, a3));
            return ::org::orekit::estimation::leastsquares::t_AbstractBatchLSModel::wrap_Object(result);
          }

          return callSuper(PY_TYPE(EphemerisPropagatorBuilder), (PyObject *) self, "buildLeastSquaresModel", args, 2);
        }

        static PyObject *t_EphemerisPropagatorBuilder_buildPropagator(t_EphemerisPropagatorBuilder *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          ::org::orekit::propagation::Propagator result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.buildPropagator(a0));
            return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
          }

          return callSuper(PY_TYPE(EphemerisPropagatorBuilder), (PyObject *) self, "buildPropagator", args, 2);
        }

        static PyObject *t_EphemerisPropagatorBuilder_copy(t_EphemerisPropagatorBuilder *self, PyObject *args)
        {
          EphemerisPropagatorBuilder result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.copy());
            return t_EphemerisPropagatorBuilder::wrap_Object(result);
          }

          return callSuper(PY_TYPE(EphemerisPropagatorBuilder), (PyObject *) self, "copy", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/PythonAbstractAnalyticalGradientConverter.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"
#include "org/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *PythonAbstractAnalyticalGradientConverter::class$ = NULL;
        jmethodID *PythonAbstractAnalyticalGradientConverter::mids$ = NULL;
        bool PythonAbstractAnalyticalGradientConverter::live$ = false;

        jclass PythonAbstractAnalyticalGradientConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/PythonAbstractAnalyticalGradientConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_296566653f57b5ed] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/AbstractAnalyticalPropagator;DI)V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_getPropagator_50636e1e84d390e7] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator;");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractAnalyticalGradientConverter::PythonAbstractAnalyticalGradientConverter(const ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator & a0, jdouble a1, jint a2) : ::org::orekit::propagation::analytical::AbstractAnalyticalGradientConverter(env->newObject(initializeClass, &mids$, mid_init$_296566653f57b5ed, a0.this$, a1, a2)) {}

        void PythonAbstractAnalyticalGradientConverter::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonAbstractAnalyticalGradientConverter::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonAbstractAnalyticalGradientConverter::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
        static PyObject *t_PythonAbstractAnalyticalGradientConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractAnalyticalGradientConverter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractAnalyticalGradientConverter_init_(t_PythonAbstractAnalyticalGradientConverter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractAnalyticalGradientConverter_finalize(t_PythonAbstractAnalyticalGradientConverter *self);
        static PyObject *t_PythonAbstractAnalyticalGradientConverter_pythonExtension(t_PythonAbstractAnalyticalGradientConverter *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractAnalyticalGradientConverter_getParametersDrivers0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAbstractAnalyticalGradientConverter_getPropagator1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonAbstractAnalyticalGradientConverter_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractAnalyticalGradientConverter_get__self(t_PythonAbstractAnalyticalGradientConverter *self, void *data);
        static PyGetSetDef t_PythonAbstractAnalyticalGradientConverter__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractAnalyticalGradientConverter, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractAnalyticalGradientConverter__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractAnalyticalGradientConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractAnalyticalGradientConverter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractAnalyticalGradientConverter, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractAnalyticalGradientConverter, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractAnalyticalGradientConverter)[] = {
          { Py_tp_methods, t_PythonAbstractAnalyticalGradientConverter__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractAnalyticalGradientConverter_init_ },
          { Py_tp_getset, t_PythonAbstractAnalyticalGradientConverter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractAnalyticalGradientConverter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalGradientConverter),
          NULL
        };

        DEFINE_TYPE(PythonAbstractAnalyticalGradientConverter, t_PythonAbstractAnalyticalGradientConverter, PythonAbstractAnalyticalGradientConverter);

        void t_PythonAbstractAnalyticalGradientConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractAnalyticalGradientConverter), &PY_TYPE_DEF(PythonAbstractAnalyticalGradientConverter), module, "PythonAbstractAnalyticalGradientConverter", 1);
        }

        void t_PythonAbstractAnalyticalGradientConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAnalyticalGradientConverter), "class_", make_descriptor(PythonAbstractAnalyticalGradientConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAnalyticalGradientConverter), "wrapfn_", make_descriptor(t_PythonAbstractAnalyticalGradientConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAnalyticalGradientConverter), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractAnalyticalGradientConverter::initializeClass);
          JNINativeMethod methods[] = {
            { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonAbstractAnalyticalGradientConverter_getParametersDrivers0 },
            { "getPropagator", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator;", (void *) t_PythonAbstractAnalyticalGradientConverter_getPropagator1 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractAnalyticalGradientConverter_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonAbstractAnalyticalGradientConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractAnalyticalGradientConverter::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractAnalyticalGradientConverter::wrap_Object(PythonAbstractAnalyticalGradientConverter(((t_PythonAbstractAnalyticalGradientConverter *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractAnalyticalGradientConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractAnalyticalGradientConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractAnalyticalGradientConverter_init_(t_PythonAbstractAnalyticalGradientConverter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator a0((jobject) NULL);
          jdouble a1;
          jint a2;
          PythonAbstractAnalyticalGradientConverter object((jobject) NULL);

          if (!parseArgs(args, "kDI", ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = PythonAbstractAnalyticalGradientConverter(a0, a1, a2));
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

        static PyObject *t_PythonAbstractAnalyticalGradientConverter_finalize(t_PythonAbstractAnalyticalGradientConverter *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractAnalyticalGradientConverter_pythonExtension(t_PythonAbstractAnalyticalGradientConverter *self, PyObject *args)
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

        static jobject JNICALL t_PythonAbstractAnalyticalGradientConverter_getParametersDrivers0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAnalyticalGradientConverter::mids$[PythonAbstractAnalyticalGradientConverter::mid_pythonExtension_6c0ce7e438e5ded4]);
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

        static jobject JNICALL t_PythonAbstractAnalyticalGradientConverter_getPropagator1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAnalyticalGradientConverter::mids$[PythonAbstractAnalyticalGradientConverter::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::analysis::differentiation::t_Gradient::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "getPropagator", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator::initializeClass, &value))
          {
            throwTypeError("getPropagator", result);
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

        static void JNICALL t_PythonAbstractAnalyticalGradientConverter_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAnalyticalGradientConverter::mids$[PythonAbstractAnalyticalGradientConverter::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractAnalyticalGradientConverter::mids$[PythonAbstractAnalyticalGradientConverter::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractAnalyticalGradientConverter_get__self(t_PythonAbstractAnalyticalGradientConverter *self, void *data)
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
#include "org/hipparchus/linear/SparseFieldVector.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/linear/FieldVectorPreservingVisitor.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/linear/FieldVectorChangingVisitor.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/linear/SparseFieldVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *SparseFieldVector::class$ = NULL;
      jmethodID *SparseFieldVector::mids$ = NULL;
      bool SparseFieldVector::live$ = false;

      jclass SparseFieldVector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/SparseFieldVector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_02ab84aa7626616d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
          mids$[mid_init$_a1e449a87301face] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_9127f23cedcce237] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;I)V");
          mids$[mid_init$_b6c946d1cbf160f0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;II)V");
          mids$[mid_add_850938212cbcebbc] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/SparseFieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_add_0c912ec1e9dd9ed7] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_append_850938212cbcebbc] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/SparseFieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_append_9105020ef45172b7] = env->getMethodID(cls, "append", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_append_0c912ec1e9dd9ed7] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_copy_b8b88195d3642875] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_dotProduct_8b189f525aa86de4] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/FieldElement;");
          mids$[mid_ebeDivide_0c912ec1e9dd9ed7] = env->getMethodID(cls, "ebeDivide", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_ebeMultiply_0c912ec1e9dd9ed7] = env->getMethodID(cls, "ebeMultiply", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getDimension_55546ef6a647f39b] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getEntry_6c5caf579ccf9ce5] = env->getMethodID(cls, "getEntry", "(I)Lorg/hipparchus/FieldElement;");
          mids$[mid_getField_04d1f63e17d5c5d4] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getSubVector_b42960a5471f10ed] = env->getMethodID(cls, "getSubVector", "(II)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_mapAdd_9105020ef45172b7] = env->getMethodID(cls, "mapAdd", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapAddToSelf_9105020ef45172b7] = env->getMethodID(cls, "mapAddToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapDivide_9105020ef45172b7] = env->getMethodID(cls, "mapDivide", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapDivideToSelf_9105020ef45172b7] = env->getMethodID(cls, "mapDivideToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapInv_b8b88195d3642875] = env->getMethodID(cls, "mapInv", "()Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapInvToSelf_b8b88195d3642875] = env->getMethodID(cls, "mapInvToSelf", "()Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapMultiply_9105020ef45172b7] = env->getMethodID(cls, "mapMultiply", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapMultiplyToSelf_9105020ef45172b7] = env->getMethodID(cls, "mapMultiplyToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapSubtract_9105020ef45172b7] = env->getMethodID(cls, "mapSubtract", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapSubtractToSelf_9105020ef45172b7] = env->getMethodID(cls, "mapSubtractToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_outerProduct_00df9023db23fdc5] = env->getMethodID(cls, "outerProduct", "(Lorg/hipparchus/linear/SparseFieldVector;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_outerProduct_8dfd3dc5a728ee60] = env->getMethodID(cls, "outerProduct", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_projection_0c912ec1e9dd9ed7] = env->getMethodID(cls, "projection", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_set_8d8d85cc6e14d2f7] = env->getMethodID(cls, "set", "(Lorg/hipparchus/FieldElement;)V");
          mids$[mid_setEntry_3e5e9beae9eb3b27] = env->getMethodID(cls, "setEntry", "(ILorg/hipparchus/FieldElement;)V");
          mids$[mid_setSubVector_cd62bfbc5992c85f] = env->getMethodID(cls, "setSubVector", "(ILorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_subtract_546a6c273c5fbab3] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/SparseFieldVector;)Lorg/hipparchus/linear/SparseFieldVector;");
          mids$[mid_subtract_0c912ec1e9dd9ed7] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_toArray_ae860dc2d782e386] = env->getMethodID(cls, "toArray", "()[Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInDefaultOrder_902d02ebed1c011e] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/FieldVectorChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInDefaultOrder_7d08c02ef3ca9df3] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/FieldVectorPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInDefaultOrder_07dcd460c79c870d] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/FieldVectorChangingVisitor;II)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInDefaultOrder_5b32a72c59f76929] = env->getMethodID(cls, "walkInDefaultOrder", "(Lorg/hipparchus/linear/FieldVectorPreservingVisitor;II)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_902d02ebed1c011e] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldVectorChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_7d08c02ef3ca9df3] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldVectorPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_07dcd460c79c870d] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldVectorChangingVisitor;II)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_5b32a72c59f76929] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldVectorPreservingVisitor;II)Lorg/hipparchus/FieldElement;");
          mids$[mid_checkVectorDimensions_44ed599e93e8a30c] = env->getMethodID(cls, "checkVectorDimensions", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SparseFieldVector::SparseFieldVector(const ::org::hipparchus::Field & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_02ab84aa7626616d, a0.this$)) {}

      SparseFieldVector::SparseFieldVector(const ::org::hipparchus::Field & a0, const JArray< ::org::hipparchus::FieldElement > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1e449a87301face, a0.this$, a1.this$)) {}

      SparseFieldVector::SparseFieldVector(const ::org::hipparchus::Field & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9127f23cedcce237, a0.this$, a1)) {}

      SparseFieldVector::SparseFieldVector(const ::org::hipparchus::Field & a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b6c946d1cbf160f0, a0.this$, a1, a2)) {}

      ::org::hipparchus::linear::FieldVector SparseFieldVector::add(const SparseFieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_add_850938212cbcebbc], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::add(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_add_0c912ec1e9dd9ed7], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::append(const SparseFieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_append_850938212cbcebbc], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::append(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_append_9105020ef45172b7], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::append(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_append_0c912ec1e9dd9ed7], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::copy() const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_copy_b8b88195d3642875]));
      }

      ::org::hipparchus::FieldElement SparseFieldVector::dotProduct(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_dotProduct_8b189f525aa86de4], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::ebeDivide(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_ebeDivide_0c912ec1e9dd9ed7], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::ebeMultiply(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_ebeMultiply_0c912ec1e9dd9ed7], a0.this$));
      }

      jboolean SparseFieldVector::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
      }

      jint SparseFieldVector::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_55546ef6a647f39b]);
      }

      ::org::hipparchus::FieldElement SparseFieldVector::getEntry(jint a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getEntry_6c5caf579ccf9ce5], a0));
      }

      ::org::hipparchus::Field SparseFieldVector::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_04d1f63e17d5c5d4]));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::getSubVector(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getSubVector_b42960a5471f10ed], a0, a1));
      }

      jint SparseFieldVector::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapAdd(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapAdd_9105020ef45172b7], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapAddToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapAddToSelf_9105020ef45172b7], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapDivide(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapDivide_9105020ef45172b7], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapDivideToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapDivideToSelf_9105020ef45172b7], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapInv() const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapInv_b8b88195d3642875]));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapInvToSelf() const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapInvToSelf_b8b88195d3642875]));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapMultiply(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapMultiply_9105020ef45172b7], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapMultiplyToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapMultiplyToSelf_9105020ef45172b7], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapSubtract(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapSubtract_9105020ef45172b7], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::mapSubtractToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_mapSubtractToSelf_9105020ef45172b7], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix SparseFieldVector::outerProduct(const SparseFieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_outerProduct_00df9023db23fdc5], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix SparseFieldVector::outerProduct(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_outerProduct_8dfd3dc5a728ee60], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::projection(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_projection_0c912ec1e9dd9ed7], a0.this$));
      }

      void SparseFieldVector::set(const ::org::hipparchus::FieldElement & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_set_8d8d85cc6e14d2f7], a0.this$);
      }

      void SparseFieldVector::setEntry(jint a0, const ::org::hipparchus::FieldElement & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_3e5e9beae9eb3b27], a0, a1.this$);
      }

      void SparseFieldVector::setSubVector(jint a0, const ::org::hipparchus::linear::FieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubVector_cd62bfbc5992c85f], a0, a1.this$);
      }

      SparseFieldVector SparseFieldVector::subtract(const SparseFieldVector & a0) const
      {
        return SparseFieldVector(env->callObjectMethod(this$, mids$[mid_subtract_546a6c273c5fbab3], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector SparseFieldVector::subtract(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_subtract_0c912ec1e9dd9ed7], a0.this$));
      }

      JArray< ::org::hipparchus::FieldElement > SparseFieldVector::toArray() const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_toArray_ae860dc2d782e386]));
      }

      ::org::hipparchus::FieldElement SparseFieldVector::walkInDefaultOrder(const ::org::hipparchus::linear::FieldVectorChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInDefaultOrder_902d02ebed1c011e], a0.this$));
      }

      ::org::hipparchus::FieldElement SparseFieldVector::walkInDefaultOrder(const ::org::hipparchus::linear::FieldVectorPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInDefaultOrder_7d08c02ef3ca9df3], a0.this$));
      }

      ::org::hipparchus::FieldElement SparseFieldVector::walkInDefaultOrder(const ::org::hipparchus::linear::FieldVectorChangingVisitor & a0, jint a1, jint a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInDefaultOrder_07dcd460c79c870d], a0.this$, a1, a2));
      }

      ::org::hipparchus::FieldElement SparseFieldVector::walkInDefaultOrder(const ::org::hipparchus::linear::FieldVectorPreservingVisitor & a0, jint a1, jint a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInDefaultOrder_5b32a72c59f76929], a0.this$, a1, a2));
      }

      ::org::hipparchus::FieldElement SparseFieldVector::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldVectorChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_902d02ebed1c011e], a0.this$));
      }

      ::org::hipparchus::FieldElement SparseFieldVector::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldVectorPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_7d08c02ef3ca9df3], a0.this$));
      }

      ::org::hipparchus::FieldElement SparseFieldVector::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldVectorChangingVisitor & a0, jint a1, jint a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_07dcd460c79c870d], a0.this$, a1, a2));
      }

      ::org::hipparchus::FieldElement SparseFieldVector::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldVectorPreservingVisitor & a0, jint a1, jint a2) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_5b32a72c59f76929], a0.this$, a1, a2));
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
      static PyObject *t_SparseFieldVector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SparseFieldVector_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SparseFieldVector_of_(t_SparseFieldVector *self, PyObject *args);
      static int t_SparseFieldVector_init_(t_SparseFieldVector *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SparseFieldVector_add(t_SparseFieldVector *self, PyObject *args);
      static PyObject *t_SparseFieldVector_append(t_SparseFieldVector *self, PyObject *args);
      static PyObject *t_SparseFieldVector_copy(t_SparseFieldVector *self);
      static PyObject *t_SparseFieldVector_dotProduct(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_ebeDivide(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_ebeMultiply(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_equals(t_SparseFieldVector *self, PyObject *args);
      static PyObject *t_SparseFieldVector_getDimension(t_SparseFieldVector *self);
      static PyObject *t_SparseFieldVector_getEntry(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_getField(t_SparseFieldVector *self);
      static PyObject *t_SparseFieldVector_getSubVector(t_SparseFieldVector *self, PyObject *args);
      static PyObject *t_SparseFieldVector_hashCode(t_SparseFieldVector *self, PyObject *args);
      static PyObject *t_SparseFieldVector_mapAdd(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_mapAddToSelf(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_mapDivide(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_mapDivideToSelf(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_mapInv(t_SparseFieldVector *self);
      static PyObject *t_SparseFieldVector_mapInvToSelf(t_SparseFieldVector *self);
      static PyObject *t_SparseFieldVector_mapMultiply(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_mapMultiplyToSelf(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_mapSubtract(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_mapSubtractToSelf(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_outerProduct(t_SparseFieldVector *self, PyObject *args);
      static PyObject *t_SparseFieldVector_projection(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_set(t_SparseFieldVector *self, PyObject *arg);
      static PyObject *t_SparseFieldVector_setEntry(t_SparseFieldVector *self, PyObject *args);
      static PyObject *t_SparseFieldVector_setSubVector(t_SparseFieldVector *self, PyObject *args);
      static PyObject *t_SparseFieldVector_subtract(t_SparseFieldVector *self, PyObject *args);
      static PyObject *t_SparseFieldVector_toArray(t_SparseFieldVector *self);
      static PyObject *t_SparseFieldVector_walkInDefaultOrder(t_SparseFieldVector *self, PyObject *args);
      static PyObject *t_SparseFieldVector_walkInOptimizedOrder(t_SparseFieldVector *self, PyObject *args);
      static PyObject *t_SparseFieldVector_get__dimension(t_SparseFieldVector *self, void *data);
      static PyObject *t_SparseFieldVector_get__field(t_SparseFieldVector *self, void *data);
      static PyObject *t_SparseFieldVector_get__parameters_(t_SparseFieldVector *self, void *data);
      static PyGetSetDef t_SparseFieldVector__fields_[] = {
        DECLARE_GET_FIELD(t_SparseFieldVector, dimension),
        DECLARE_GET_FIELD(t_SparseFieldVector, field),
        DECLARE_GET_FIELD(t_SparseFieldVector, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SparseFieldVector__methods_[] = {
        DECLARE_METHOD(t_SparseFieldVector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SparseFieldVector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SparseFieldVector, of_, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldVector, add, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldVector, append, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldVector, copy, METH_NOARGS),
        DECLARE_METHOD(t_SparseFieldVector, dotProduct, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, ebeDivide, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, ebeMultiply, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, equals, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldVector, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_SparseFieldVector, getEntry, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, getField, METH_NOARGS),
        DECLARE_METHOD(t_SparseFieldVector, getSubVector, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldVector, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldVector, mapAdd, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, mapAddToSelf, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, mapDivide, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, mapDivideToSelf, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, mapInv, METH_NOARGS),
        DECLARE_METHOD(t_SparseFieldVector, mapInvToSelf, METH_NOARGS),
        DECLARE_METHOD(t_SparseFieldVector, mapMultiply, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, mapMultiplyToSelf, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, mapSubtract, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, mapSubtractToSelf, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, outerProduct, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldVector, projection, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, set, METH_O),
        DECLARE_METHOD(t_SparseFieldVector, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldVector, setSubVector, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldVector, subtract, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldVector, toArray, METH_NOARGS),
        DECLARE_METHOD(t_SparseFieldVector, walkInDefaultOrder, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldVector, walkInOptimizedOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SparseFieldVector)[] = {
        { Py_tp_methods, t_SparseFieldVector__methods_ },
        { Py_tp_init, (void *) t_SparseFieldVector_init_ },
        { Py_tp_getset, t_SparseFieldVector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SparseFieldVector)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SparseFieldVector, t_SparseFieldVector, SparseFieldVector);
      PyObject *t_SparseFieldVector::wrap_Object(const SparseFieldVector& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SparseFieldVector::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SparseFieldVector *self = (t_SparseFieldVector *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SparseFieldVector::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SparseFieldVector::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SparseFieldVector *self = (t_SparseFieldVector *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SparseFieldVector::install(PyObject *module)
      {
        installType(&PY_TYPE(SparseFieldVector), &PY_TYPE_DEF(SparseFieldVector), module, "SparseFieldVector", 0);
      }

      void t_SparseFieldVector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseFieldVector), "class_", make_descriptor(SparseFieldVector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseFieldVector), "wrapfn_", make_descriptor(t_SparseFieldVector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseFieldVector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SparseFieldVector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SparseFieldVector::initializeClass, 1)))
          return NULL;
        return t_SparseFieldVector::wrap_Object(SparseFieldVector(((t_SparseFieldVector *) arg)->object.this$));
      }
      static PyObject *t_SparseFieldVector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SparseFieldVector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SparseFieldVector_of_(t_SparseFieldVector *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_SparseFieldVector_init_(t_SparseFieldVector *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            SparseFieldVector object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = SparseFieldVector(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            SparseFieldVector object((jobject) NULL);

            if (!parseArgs(args, "K[K", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = SparseFieldVector(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            SparseFieldVector object((jobject) NULL);

            if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = SparseFieldVector(a0, a1));
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
            SparseFieldVector object((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              INT_CALL(object = SparseFieldVector(a0, a1, a2));
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

      static PyObject *t_SparseFieldVector_add(t_SparseFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            SparseFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", SparseFieldVector::initializeClass, &a0, &p0, t_SparseFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_append(t_SparseFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            SparseFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", SparseFieldVector::initializeClass, &a0, &p0, t_SparseFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.append(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::FieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.append(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.append(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "append", args);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_copy(t_SparseFieldVector *self)
      {
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);
        OBJ_CALL(result = self->object.copy());
        return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_SparseFieldVector_dotProduct(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.dotProduct(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "dotProduct", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_ebeDivide(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.ebeDivide(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "ebeDivide", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_ebeMultiply(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.ebeMultiply(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "ebeMultiply", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_equals(t_SparseFieldVector *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(SparseFieldVector), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_SparseFieldVector_getDimension(t_SparseFieldVector *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_SparseFieldVector_getEntry(t_SparseFieldVector *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEntry(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEntry", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_getField(t_SparseFieldVector *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_SparseFieldVector_getSubVector(t_SparseFieldVector *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getSubVector(a0, a1));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getSubVector", args);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_hashCode(t_SparseFieldVector *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(SparseFieldVector), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_SparseFieldVector_mapAdd(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapAdd(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapAdd", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_mapAddToSelf(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapAddToSelf(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapAddToSelf", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_mapDivide(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapDivide(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapDivide", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_mapDivideToSelf(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapDivideToSelf(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapDivideToSelf", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_mapInv(t_SparseFieldVector *self)
      {
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);
        OBJ_CALL(result = self->object.mapInv());
        return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_SparseFieldVector_mapInvToSelf(t_SparseFieldVector *self)
      {
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);
        OBJ_CALL(result = self->object.mapInvToSelf());
        return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_SparseFieldVector_mapMultiply(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapMultiply(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapMultiply", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_mapMultiplyToSelf(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapMultiplyToSelf(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapMultiplyToSelf", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_mapSubtract(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapSubtract(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapSubtract", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_mapSubtractToSelf(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapSubtractToSelf(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapSubtractToSelf", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_outerProduct(t_SparseFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            SparseFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", SparseFieldVector::initializeClass, &a0, &p0, t_SparseFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.outerProduct(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.outerProduct(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "outerProduct", args);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_projection(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.projection(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "projection", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_set(t_SparseFieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.set(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "set", arg);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_setEntry(t_SparseFieldVector *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::FieldElement a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setEntry(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setEntry", args);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_setSubVector(t_SparseFieldVector *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(self->object.setSubVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSubVector", args);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_subtract(t_SparseFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            SparseFieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            SparseFieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", SparseFieldVector::initializeClass, &a0, &p0, t_SparseFieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_SparseFieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_toArray(t_SparseFieldVector *self)
      {
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);
        OBJ_CALL(result = self->object.toArray());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
      }

      static PyObject *t_SparseFieldVector_walkInDefaultOrder(t_SparseFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldVectorChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVectorChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldVectorPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVectorPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::FieldVectorChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::linear::FieldVectorChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorChangingVisitor::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0, a1, a2));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldVectorPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::linear::FieldVectorPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorPreservingVisitor::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInDefaultOrder(a0, a1, a2));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInDefaultOrder", args);
        return NULL;
      }

      static PyObject *t_SparseFieldVector_walkInOptimizedOrder(t_SparseFieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldVectorChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVectorChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldVectorPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVectorPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::FieldVectorChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::linear::FieldVectorChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorChangingVisitor::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldVectorPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::linear::FieldVectorPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVectorPreservingVisitor::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInOptimizedOrder", args);
        return NULL;
      }
      static PyObject *t_SparseFieldVector_get__parameters_(t_SparseFieldVector *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_SparseFieldVector_get__dimension(t_SparseFieldVector *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_SparseFieldVector_get__field(t_SparseFieldVector *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/propulsion/ProfileThrustPropulsionModel.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustPropulsionModel.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/forces/maneuvers/propulsion/PolynomialThrustSegment.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *ProfileThrustPropulsionModel::class$ = NULL;
          jmethodID *ProfileThrustPropulsionModel::mids$ = NULL;
          bool ProfileThrustPropulsionModel::live$ = false;

          jclass ProfileThrustPropulsionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/ProfileThrustPropulsionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b86ecb38dfd5497e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeSpanMap;DLorg/orekit/forces/maneuvers/Control3DVectorCostType;Ljava/lang/String;)V");
              mids$[mid_getControl3DVectorCostType_2eba60c257188b83] = env->getMethodID(cls, "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");
              mids$[mid_getEventDetectors_14e21bf777ff0ccf] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
              mids$[mid_getFieldEventDetectors_283ad33581c047a0] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
              mids$[mid_getFlowRate_a17ea857ce74d258] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_getFlowRate_f867476668f8eb00] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFlowRate_8e86371c61460f23] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;[D)D");
              mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getThrustVector_9019a5b32b11453a] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_0ce449c67b5ffd9c] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getThrustVector_20bded0292328743] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ProfileThrustPropulsionModel::ProfileThrustPropulsionModel(const ::org::orekit::utils::TimeSpanMap & a0, jdouble a1, const ::org::orekit::forces::maneuvers::Control3DVectorCostType & a2, const ::java::lang::String & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b86ecb38dfd5497e, a0.this$, a1, a2.this$, a3.this$)) {}

          ::org::orekit::forces::maneuvers::Control3DVectorCostType ProfileThrustPropulsionModel::getControl3DVectorCostType() const
          {
            return ::org::orekit::forces::maneuvers::Control3DVectorCostType(env->callObjectMethod(this$, mids$[mid_getControl3DVectorCostType_2eba60c257188b83]));
          }

          ::java::util::stream::Stream ProfileThrustPropulsionModel::getEventDetectors() const
          {
            return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_14e21bf777ff0ccf]));
          }

          ::java::util::stream::Stream ProfileThrustPropulsionModel::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
          {
            return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_283ad33581c047a0], a0.this$));
          }

          jdouble ProfileThrustPropulsionModel::getFlowRate(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_a17ea857ce74d258], a0.this$);
          }

          ::org::hipparchus::CalculusFieldElement ProfileThrustPropulsionModel::getFlowRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFlowRate_f867476668f8eb00], a0.this$, a1.this$));
          }

          jdouble ProfileThrustPropulsionModel::getFlowRate(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_8e86371c61460f23], a0.this$, a1.this$);
          }

          ::java::lang::String ProfileThrustPropulsionModel::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
          }

          ::java::util::List ProfileThrustPropulsionModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ProfileThrustPropulsionModel::getThrustVector(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_9019a5b32b11453a], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ProfileThrustPropulsionModel::getThrustVector(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_0ce449c67b5ffd9c], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ProfileThrustPropulsionModel::getThrustVector(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_20bded0292328743], a0.this$, a1.this$));
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
          static PyObject *t_ProfileThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ProfileThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ProfileThrustPropulsionModel_init_(t_ProfileThrustPropulsionModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ProfileThrustPropulsionModel_getControl3DVectorCostType(t_ProfileThrustPropulsionModel *self);
          static PyObject *t_ProfileThrustPropulsionModel_getEventDetectors(t_ProfileThrustPropulsionModel *self);
          static PyObject *t_ProfileThrustPropulsionModel_getFieldEventDetectors(t_ProfileThrustPropulsionModel *self, PyObject *arg);
          static PyObject *t_ProfileThrustPropulsionModel_getFlowRate(t_ProfileThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_ProfileThrustPropulsionModel_getName(t_ProfileThrustPropulsionModel *self);
          static PyObject *t_ProfileThrustPropulsionModel_getParametersDrivers(t_ProfileThrustPropulsionModel *self);
          static PyObject *t_ProfileThrustPropulsionModel_getThrustVector(t_ProfileThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_ProfileThrustPropulsionModel_get__control3DVectorCostType(t_ProfileThrustPropulsionModel *self, void *data);
          static PyObject *t_ProfileThrustPropulsionModel_get__eventDetectors(t_ProfileThrustPropulsionModel *self, void *data);
          static PyObject *t_ProfileThrustPropulsionModel_get__name(t_ProfileThrustPropulsionModel *self, void *data);
          static PyObject *t_ProfileThrustPropulsionModel_get__parametersDrivers(t_ProfileThrustPropulsionModel *self, void *data);
          static PyGetSetDef t_ProfileThrustPropulsionModel__fields_[] = {
            DECLARE_GET_FIELD(t_ProfileThrustPropulsionModel, control3DVectorCostType),
            DECLARE_GET_FIELD(t_ProfileThrustPropulsionModel, eventDetectors),
            DECLARE_GET_FIELD(t_ProfileThrustPropulsionModel, name),
            DECLARE_GET_FIELD(t_ProfileThrustPropulsionModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ProfileThrustPropulsionModel__methods_[] = {
            DECLARE_METHOD(t_ProfileThrustPropulsionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ProfileThrustPropulsionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ProfileThrustPropulsionModel, getControl3DVectorCostType, METH_NOARGS),
            DECLARE_METHOD(t_ProfileThrustPropulsionModel, getEventDetectors, METH_NOARGS),
            DECLARE_METHOD(t_ProfileThrustPropulsionModel, getFieldEventDetectors, METH_O),
            DECLARE_METHOD(t_ProfileThrustPropulsionModel, getFlowRate, METH_VARARGS),
            DECLARE_METHOD(t_ProfileThrustPropulsionModel, getName, METH_NOARGS),
            DECLARE_METHOD(t_ProfileThrustPropulsionModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_ProfileThrustPropulsionModel, getThrustVector, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ProfileThrustPropulsionModel)[] = {
            { Py_tp_methods, t_ProfileThrustPropulsionModel__methods_ },
            { Py_tp_init, (void *) t_ProfileThrustPropulsionModel_init_ },
            { Py_tp_getset, t_ProfileThrustPropulsionModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ProfileThrustPropulsionModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ProfileThrustPropulsionModel, t_ProfileThrustPropulsionModel, ProfileThrustPropulsionModel);

          void t_ProfileThrustPropulsionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(ProfileThrustPropulsionModel), &PY_TYPE_DEF(ProfileThrustPropulsionModel), module, "ProfileThrustPropulsionModel", 0);
          }

          void t_ProfileThrustPropulsionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ProfileThrustPropulsionModel), "class_", make_descriptor(ProfileThrustPropulsionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ProfileThrustPropulsionModel), "wrapfn_", make_descriptor(t_ProfileThrustPropulsionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ProfileThrustPropulsionModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ProfileThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ProfileThrustPropulsionModel::initializeClass, 1)))
              return NULL;
            return t_ProfileThrustPropulsionModel::wrap_Object(ProfileThrustPropulsionModel(((t_ProfileThrustPropulsionModel *) arg)->object.this$));
          }
          static PyObject *t_ProfileThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ProfileThrustPropulsionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ProfileThrustPropulsionModel_init_(t_ProfileThrustPropulsionModel *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::utils::TimeSpanMap a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::orekit::forces::maneuvers::Control3DVectorCostType a2((jobject) NULL);
            PyTypeObject **p2;
            ::java::lang::String a3((jobject) NULL);
            ProfileThrustPropulsionModel object((jobject) NULL);

            if (!parseArgs(args, "KDKs", ::org::orekit::utils::TimeSpanMap::initializeClass, ::org::orekit::forces::maneuvers::Control3DVectorCostType::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeSpanMap::parameters_, &a1, &a2, &p2, ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::parameters_, &a3))
            {
              INT_CALL(object = ProfileThrustPropulsionModel(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ProfileThrustPropulsionModel_getControl3DVectorCostType(t_ProfileThrustPropulsionModel *self)
          {
            ::org::orekit::forces::maneuvers::Control3DVectorCostType result((jobject) NULL);
            OBJ_CALL(result = self->object.getControl3DVectorCostType());
            return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(result);
          }

          static PyObject *t_ProfileThrustPropulsionModel_getEventDetectors(t_ProfileThrustPropulsionModel *self)
          {
            ::java::util::stream::Stream result((jobject) NULL);
            OBJ_CALL(result = self->object.getEventDetectors());
            return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
          }

          static PyObject *t_ProfileThrustPropulsionModel_getFieldEventDetectors(t_ProfileThrustPropulsionModel *self, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::stream::Stream result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
              return ::java::util::stream::t_Stream::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getFieldEventDetectors", arg);
            return NULL;
          }

          static PyObject *t_ProfileThrustPropulsionModel_getFlowRate(t_ProfileThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 2:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getFlowRate", args);
            return NULL;
          }

          static PyObject *t_ProfileThrustPropulsionModel_getName(t_ProfileThrustPropulsionModel *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_ProfileThrustPropulsionModel_getParametersDrivers(t_ProfileThrustPropulsionModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_ProfileThrustPropulsionModel_getThrustVector(t_ProfileThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0, a1));
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
                  OBJ_CALL(result = self->object.getThrustVector(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getThrustVector", args);
            return NULL;
          }

          static PyObject *t_ProfileThrustPropulsionModel_get__control3DVectorCostType(t_ProfileThrustPropulsionModel *self, void *data)
          {
            ::org::orekit::forces::maneuvers::Control3DVectorCostType value((jobject) NULL);
            OBJ_CALL(value = self->object.getControl3DVectorCostType());
            return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(value);
          }

          static PyObject *t_ProfileThrustPropulsionModel_get__eventDetectors(t_ProfileThrustPropulsionModel *self, void *data)
          {
            ::java::util::stream::Stream value((jobject) NULL);
            OBJ_CALL(value = self->object.getEventDetectors());
            return ::java::util::stream::t_Stream::wrap_Object(value);
          }

          static PyObject *t_ProfileThrustPropulsionModel_get__name(t_ProfileThrustPropulsionModel *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }

          static PyObject *t_ProfileThrustPropulsionModel_get__parametersDrivers(t_ProfileThrustPropulsionModel *self, void *data)
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
#include "org/orekit/estimation/leastsquares/PythonAbstractBatchLSModel.h"
#include "org/hipparchus/util/Pair.h"
#include "org/hipparchus/util/Incrementor.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "java/util/List.h"
#include "org/orekit/propagation/MatricesHarvester.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/integration/AbstractIntegratedPropagator.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        ::java::lang::Class *PythonAbstractBatchLSModel::class$ = NULL;
        jmethodID *PythonAbstractBatchLSModel::mids$ = NULL;
        bool PythonAbstractBatchLSModel::live$ = false;

        jclass PythonAbstractBatchLSModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/leastsquares/PythonAbstractBatchLSModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_244486d6f58d6cbc] = env->getMethodID(cls, "<init>", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)V");
            mids$[mid_configureHarvester_dafc362fdc9e50eb] = env->getMethodID(cls, "configureHarvester", "(Lorg/orekit/propagation/Propagator;)Lorg/orekit/propagation/MatricesHarvester;");
            mids$[mid_configureOrbits_3575848f266bfbed] = env->getMethodID(cls, "configureOrbits", "(Lorg/orekit/propagation/MatricesHarvester;Lorg/orekit/propagation/Propagator;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_createPropagators_de752d9f8766f8f3] = env->getMethodID(cls, "createPropagators", "(Lorg/hipparchus/linear/RealVector;)[Lorg/orekit/propagation/integration/AbstractIntegratedPropagator;");
            mids$[mid_fetchEvaluatedMeasurement_e26746051feca807] = env->getMethodID(cls, "fetchEvaluatedMeasurement", "(ILorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getEvaluationsCount_55546ef6a647f39b] = env->getMethodID(cls, "getEvaluationsCount", "()I");
            mids$[mid_getIterationsCount_55546ef6a647f39b] = env->getMethodID(cls, "getIterationsCount", "()I");
            mids$[mid_getSelectedPropagationDriversForBuilder_d30ee09a585504b1] = env->getMethodID(cls, "getSelectedPropagationDriversForBuilder", "(I)Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_isForwardPropagation_9ab94ac1dc23b105] = env->getMethodID(cls, "isForwardPropagation", "()Z");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_setEvaluationsCounter_29712264b86e4d61] = env->getMethodID(cls, "setEvaluationsCounter", "(Lorg/hipparchus/util/Incrementor;)V");
            mids$[mid_setIterationsCounter_29712264b86e4d61] = env->getMethodID(cls, "setIterationsCounter", "(Lorg/hipparchus/util/Incrementor;)V");
            mids$[mid_value_75baf79414a7355b] = env->getMethodID(cls, "value", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/util/Pair;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractBatchLSModel::PythonAbstractBatchLSModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) : ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(env->newObject(initializeClass, &mids$, mid_init$_244486d6f58d6cbc, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        JArray< ::org::orekit::propagation::integration::AbstractIntegratedPropagator > PythonAbstractBatchLSModel::createPropagators(const ::org::hipparchus::linear::RealVector & a0) const
        {
          return JArray< ::org::orekit::propagation::integration::AbstractIntegratedPropagator >(env->callNonvirtualObjectMethod(this$, (jclass) ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::class$->this$, ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mids$[::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mid_createPropagators_eea2f4f2cdf6f801], a0.this$));
        }

        void PythonAbstractBatchLSModel::fetchEvaluatedMeasurement(jint a0, const ::org::orekit::estimation::measurements::EstimatedMeasurement & a1) const
        {
          env->callNonvirtualVoidMethod(this$, (jclass) ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::class$->this$, ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mids$[::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mid_fetchEvaluatedMeasurement_e26746051feca807], a0, a1.this$);
        }

        void PythonAbstractBatchLSModel::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jint PythonAbstractBatchLSModel::getEvaluationsCount() const
        {
          return env->callNonvirtualIntMethod(this$, (jclass) ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::class$->this$, ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mids$[::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mid_getEvaluationsCount_55546ef6a647f39b]);
        }

        jint PythonAbstractBatchLSModel::getIterationsCount() const
        {
          return env->callNonvirtualIntMethod(this$, (jclass) ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::class$->this$, ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mids$[::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mid_getIterationsCount_55546ef6a647f39b]);
        }

        ::org::orekit::utils::ParameterDriversList PythonAbstractBatchLSModel::getSelectedPropagationDriversForBuilder(jint a0) const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callNonvirtualObjectMethod(this$, (jclass) ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::class$->this$, ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mids$[::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mid_getSelectedPropagationDriversForBuilder_d30ee09a585504b1], a0));
        }

        jboolean PythonAbstractBatchLSModel::isForwardPropagation() const
        {
          return env->callNonvirtualBooleanMethod(this$, (jclass) ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::class$->this$, ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mids$[::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mid_isForwardPropagation_9ab94ac1dc23b105]);
        }

        jlong PythonAbstractBatchLSModel::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonAbstractBatchLSModel::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
        }

        void PythonAbstractBatchLSModel::setEvaluationsCounter(const ::org::hipparchus::util::Incrementor & a0) const
        {
          env->callNonvirtualVoidMethod(this$, (jclass) ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::class$->this$, ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mids$[::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mid_setEvaluationsCounter_29712264b86e4d61], a0.this$);
        }

        void PythonAbstractBatchLSModel::setIterationsCounter(const ::org::hipparchus::util::Incrementor & a0) const
        {
          env->callNonvirtualVoidMethod(this$, (jclass) ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::class$->this$, ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mids$[::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mid_setIterationsCounter_29712264b86e4d61], a0.this$);
        }

        ::org::hipparchus::util::Pair PythonAbstractBatchLSModel::value(const ::org::hipparchus::linear::RealVector & a0) const
        {
          return ::org::hipparchus::util::Pair(env->callNonvirtualObjectMethod(this$, (jclass) ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::class$->this$, ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mids$[::org::orekit::estimation::leastsquares::AbstractBatchLSModel::mid_value_75baf79414a7355b], a0.this$));
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
        static PyObject *t_PythonAbstractBatchLSModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractBatchLSModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractBatchLSModel_init_(t_PythonAbstractBatchLSModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractBatchLSModel_createPropagators(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_PythonAbstractBatchLSModel_fetchEvaluatedMeasurement(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_PythonAbstractBatchLSModel_finalize(t_PythonAbstractBatchLSModel *self);
        static PyObject *t_PythonAbstractBatchLSModel_getEvaluationsCount(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_PythonAbstractBatchLSModel_getIterationsCount(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_PythonAbstractBatchLSModel_getSelectedPropagationDriversForBuilder(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_PythonAbstractBatchLSModel_isForwardPropagation(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_PythonAbstractBatchLSModel_pythonExtension(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_PythonAbstractBatchLSModel_setEvaluationsCounter(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_PythonAbstractBatchLSModel_setIterationsCounter(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_PythonAbstractBatchLSModel_value(t_PythonAbstractBatchLSModel *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractBatchLSModel_configureHarvester0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonAbstractBatchLSModel_configureOrbits1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static jobject JNICALL t_PythonAbstractBatchLSModel_createPropagators2(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonAbstractBatchLSModel_fetchEvaluatedMeasurement3(JNIEnv *jenv, jobject jobj, jint a0, jobject a1);
        static jint JNICALL t_PythonAbstractBatchLSModel_getEvaluationsCount4(JNIEnv *jenv, jobject jobj);
        static jint JNICALL t_PythonAbstractBatchLSModel_getIterationsCount5(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAbstractBatchLSModel_getSelectedPropagationDriversForBuilder6(JNIEnv *jenv, jobject jobj, jint a0);
        static jboolean JNICALL t_PythonAbstractBatchLSModel_isForwardPropagation7(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAbstractBatchLSModel_pythonDecRef8(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAbstractBatchLSModel_setEvaluationsCounter9(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonAbstractBatchLSModel_setIterationsCounter10(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonAbstractBatchLSModel_value11(JNIEnv *jenv, jobject jobj, jobject a0);
        static PyObject *t_PythonAbstractBatchLSModel_get__self(t_PythonAbstractBatchLSModel *self, void *data);
        static PyGetSetDef t_PythonAbstractBatchLSModel__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractBatchLSModel, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractBatchLSModel__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, createPropagators, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, fetchEvaluatedMeasurement, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, getEvaluationsCount, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, getIterationsCount, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, getSelectedPropagationDriversForBuilder, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, isForwardPropagation, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, pythonExtension, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, setEvaluationsCounter, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, setIterationsCounter, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractBatchLSModel, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractBatchLSModel)[] = {
          { Py_tp_methods, t_PythonAbstractBatchLSModel__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractBatchLSModel_init_ },
          { Py_tp_getset, t_PythonAbstractBatchLSModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractBatchLSModel)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::leastsquares::AbstractBatchLSModel),
          NULL
        };

        DEFINE_TYPE(PythonAbstractBatchLSModel, t_PythonAbstractBatchLSModel, PythonAbstractBatchLSModel);

        void t_PythonAbstractBatchLSModel::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractBatchLSModel), &PY_TYPE_DEF(PythonAbstractBatchLSModel), module, "PythonAbstractBatchLSModel", 1);
        }

        void t_PythonAbstractBatchLSModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractBatchLSModel), "class_", make_descriptor(PythonAbstractBatchLSModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractBatchLSModel), "wrapfn_", make_descriptor(t_PythonAbstractBatchLSModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractBatchLSModel), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractBatchLSModel::initializeClass);
          JNINativeMethod methods[] = {
            { "configureHarvester", "(Lorg/orekit/propagation/Propagator;)Lorg/orekit/propagation/MatricesHarvester;", (void *) t_PythonAbstractBatchLSModel_configureHarvester0 },
            { "configureOrbits", "(Lorg/orekit/propagation/MatricesHarvester;Lorg/orekit/propagation/Propagator;)Lorg/orekit/orbits/Orbit;", (void *) t_PythonAbstractBatchLSModel_configureOrbits1 },
            { "createPropagators", "(Lorg/hipparchus/linear/RealVector;)[Lorg/orekit/propagation/integration/AbstractIntegratedPropagator;", (void *) t_PythonAbstractBatchLSModel_createPropagators2 },
            { "fetchEvaluatedMeasurement", "(ILorg/orekit/estimation/measurements/EstimatedMeasurement;)V", (void *) t_PythonAbstractBatchLSModel_fetchEvaluatedMeasurement3 },
            { "getEvaluationsCount", "()I", (void *) t_PythonAbstractBatchLSModel_getEvaluationsCount4 },
            { "getIterationsCount", "()I", (void *) t_PythonAbstractBatchLSModel_getIterationsCount5 },
            { "getSelectedPropagationDriversForBuilder", "(I)Lorg/orekit/utils/ParameterDriversList;", (void *) t_PythonAbstractBatchLSModel_getSelectedPropagationDriversForBuilder6 },
            { "isForwardPropagation", "()Z", (void *) t_PythonAbstractBatchLSModel_isForwardPropagation7 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractBatchLSModel_pythonDecRef8 },
            { "setEvaluationsCounter", "(Lorg/hipparchus/util/Incrementor;)V", (void *) t_PythonAbstractBatchLSModel_setEvaluationsCounter9 },
            { "setIterationsCounter", "(Lorg/hipparchus/util/Incrementor;)V", (void *) t_PythonAbstractBatchLSModel_setIterationsCounter10 },
            { "value", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/util/Pair;", (void *) t_PythonAbstractBatchLSModel_value11 },
          };
          env->registerNatives(cls, methods, 12);
        }

        static PyObject *t_PythonAbstractBatchLSModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractBatchLSModel::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractBatchLSModel::wrap_Object(PythonAbstractBatchLSModel(((t_PythonAbstractBatchLSModel *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractBatchLSModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractBatchLSModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractBatchLSModel_init_(t_PythonAbstractBatchLSModel *self, PyObject *args, PyObject *kwds)
        {
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          PythonAbstractBatchLSModel object((jobject) NULL);

          if (!parseArgs(args, "[kKkk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            INT_CALL(object = PythonAbstractBatchLSModel(a0, a1, a2, a3));
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

        static PyObject *t_PythonAbstractBatchLSModel_createPropagators(t_PythonAbstractBatchLSModel *self, PyObject *args)
        {
          ::org::hipparchus::linear::RealVector a0((jobject) NULL);
          JArray< ::org::orekit::propagation::integration::AbstractIntegratedPropagator > result((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.createPropagators(a0));
            return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::integration::t_AbstractIntegratedPropagator::wrap_jobject);
          }

          return callSuper(PY_TYPE(PythonAbstractBatchLSModel), (PyObject *) self, "createPropagators", args, 2);
        }

        static PyObject *t_PythonAbstractBatchLSModel_fetchEvaluatedMeasurement(t_PythonAbstractBatchLSModel *self, PyObject *args)
        {
          jint a0;
          ::org::orekit::estimation::measurements::EstimatedMeasurement a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "IK", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
          {
            OBJ_CALL(self->object.fetchEvaluatedMeasurement(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(PythonAbstractBatchLSModel), (PyObject *) self, "fetchEvaluatedMeasurement", args, 2);
        }

        static PyObject *t_PythonAbstractBatchLSModel_finalize(t_PythonAbstractBatchLSModel *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractBatchLSModel_getEvaluationsCount(t_PythonAbstractBatchLSModel *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEvaluationsCount());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(PythonAbstractBatchLSModel), (PyObject *) self, "getEvaluationsCount", args, 2);
        }

        static PyObject *t_PythonAbstractBatchLSModel_getIterationsCount(t_PythonAbstractBatchLSModel *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getIterationsCount());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(PythonAbstractBatchLSModel), (PyObject *) self, "getIterationsCount", args, 2);
        }

        static PyObject *t_PythonAbstractBatchLSModel_getSelectedPropagationDriversForBuilder(t_PythonAbstractBatchLSModel *self, PyObject *args)
        {
          jint a0;
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.getSelectedPropagationDriversForBuilder(a0));
            return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
          }

          return callSuper(PY_TYPE(PythonAbstractBatchLSModel), (PyObject *) self, "getSelectedPropagationDriversForBuilder", args, 2);
        }

        static PyObject *t_PythonAbstractBatchLSModel_isForwardPropagation(t_PythonAbstractBatchLSModel *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isForwardPropagation());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(PythonAbstractBatchLSModel), (PyObject *) self, "isForwardPropagation", args, 2);
        }

        static PyObject *t_PythonAbstractBatchLSModel_pythonExtension(t_PythonAbstractBatchLSModel *self, PyObject *args)
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

        static PyObject *t_PythonAbstractBatchLSModel_setEvaluationsCounter(t_PythonAbstractBatchLSModel *self, PyObject *args)
        {
          ::org::hipparchus::util::Incrementor a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::util::Incrementor::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setEvaluationsCounter(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(PythonAbstractBatchLSModel), (PyObject *) self, "setEvaluationsCounter", args, 2);
        }

        static PyObject *t_PythonAbstractBatchLSModel_setIterationsCounter(t_PythonAbstractBatchLSModel *self, PyObject *args)
        {
          ::org::hipparchus::util::Incrementor a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::util::Incrementor::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setIterationsCounter(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(PythonAbstractBatchLSModel), (PyObject *) self, "setIterationsCounter", args, 2);
        }

        static PyObject *t_PythonAbstractBatchLSModel_value(t_PythonAbstractBatchLSModel *self, PyObject *args)
        {
          ::org::hipparchus::linear::RealVector a0((jobject) NULL);
          ::org::hipparchus::util::Pair result((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.value(a0));
            return ::org::hipparchus::util::t_Pair::wrap_Object(result, ::org::hipparchus::linear::PY_TYPE(RealVector), ::org::hipparchus::linear::PY_TYPE(RealMatrix));
          }

          return callSuper(PY_TYPE(PythonAbstractBatchLSModel), (PyObject *) self, "value", args, 2);
        }

        static jobject JNICALL t_PythonAbstractBatchLSModel_configureHarvester0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::MatricesHarvester value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_Propagator::wrap_Object(::org::orekit::propagation::Propagator(a0));
          PyObject *result = PyObject_CallMethod(obj, "configureHarvester", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::MatricesHarvester::initializeClass, &value))
          {
            throwTypeError("configureHarvester", result);
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

        static jobject JNICALL t_PythonAbstractBatchLSModel_configureOrbits1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::orbits::Orbit value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_MatricesHarvester::wrap_Object(::org::orekit::propagation::MatricesHarvester(a0));
          PyObject *o1 = ::org::orekit::propagation::t_Propagator::wrap_Object(::org::orekit::propagation::Propagator(a1));
          PyObject *result = PyObject_CallMethod(obj, "configureOrbits", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::orbits::Orbit::initializeClass, &value))
          {
            throwTypeError("configureOrbits", result);
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

        static jobject JNICALL t_PythonAbstractBatchLSModel_createPropagators2(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          JArray< ::org::orekit::propagation::integration::AbstractIntegratedPropagator > value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::linear::t_RealVector::wrap_Object(::org::hipparchus::linear::RealVector(a0));
          PyObject *result = PyObject_CallMethod(obj, "createPropagators", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "[k", ::org::orekit::propagation::integration::AbstractIntegratedPropagator::initializeClass, &value))
          {
            throwTypeError("createPropagators", result);
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

        static void JNICALL t_PythonAbstractBatchLSModel_fetchEvaluatedMeasurement3(JNIEnv *jenv, jobject jobj, jint a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o1 = ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(::org::orekit::estimation::measurements::EstimatedMeasurement(a1));
          PyObject *result = PyObject_CallMethod(obj, "fetchEvaluatedMeasurement", "iO", (int) a0, o1);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static jint JNICALL t_PythonAbstractBatchLSModel_getEvaluationsCount4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getEvaluationsCount", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getEvaluationsCount", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jint JNICALL t_PythonAbstractBatchLSModel_getIterationsCount5(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getIterationsCount", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getIterationsCount", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jobject JNICALL t_PythonAbstractBatchLSModel_getSelectedPropagationDriversForBuilder6(JNIEnv *jenv, jobject jobj, jint a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getSelectedPropagationDriversForBuilder", "i", (int) a0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::utils::ParameterDriversList::initializeClass, &value))
          {
            throwTypeError("getSelectedPropagationDriversForBuilder", result);
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

        static jboolean JNICALL t_PythonAbstractBatchLSModel_isForwardPropagation7(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *result = PyObject_CallMethod(obj, "isForwardPropagation", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("isForwardPropagation", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static void JNICALL t_PythonAbstractBatchLSModel_pythonDecRef8(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static void JNICALL t_PythonAbstractBatchLSModel_setEvaluationsCounter9(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::hipparchus::util::t_Incrementor::wrap_Object(::org::hipparchus::util::Incrementor(a0));
          PyObject *result = PyObject_CallMethod(obj, "setEvaluationsCounter", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonAbstractBatchLSModel_setIterationsCounter10(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::hipparchus::util::t_Incrementor::wrap_Object(::org::hipparchus::util::Incrementor(a0));
          PyObject *result = PyObject_CallMethod(obj, "setIterationsCounter", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static jobject JNICALL t_PythonAbstractBatchLSModel_value11(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractBatchLSModel::mids$[PythonAbstractBatchLSModel::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::util::Pair value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::linear::t_RealVector::wrap_Object(::org::hipparchus::linear::RealVector(a0));
          PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::util::Pair::initializeClass, &value))
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

        static PyObject *t_PythonAbstractBatchLSModel_get__self(t_PythonAbstractBatchLSModel *self, void *data)
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
#include "org/orekit/propagation/numerical/StateTransitionMatrixGenerator$PartialsObserver.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *StateTransitionMatrixGenerator$PartialsObserver::class$ = NULL;
        jmethodID *StateTransitionMatrixGenerator$PartialsObserver::mids$ = NULL;
        bool StateTransitionMatrixGenerator$PartialsObserver::live$ = false;

        jclass StateTransitionMatrixGenerator$PartialsObserver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/StateTransitionMatrixGenerator$PartialsObserver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_partialsComputed_915c7d1930588394] = env->getMethodID(cls, "partialsComputed", "(Lorg/orekit/propagation/SpacecraftState;[D[D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void StateTransitionMatrixGenerator$PartialsObserver::partialsComputed(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_partialsComputed_915c7d1930588394], a0.this$, a1.this$, a2.this$);
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
      namespace numerical {
        static PyObject *t_StateTransitionMatrixGenerator$PartialsObserver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StateTransitionMatrixGenerator$PartialsObserver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StateTransitionMatrixGenerator$PartialsObserver_partialsComputed(t_StateTransitionMatrixGenerator$PartialsObserver *self, PyObject *args);

        static PyMethodDef t_StateTransitionMatrixGenerator$PartialsObserver__methods_[] = {
          DECLARE_METHOD(t_StateTransitionMatrixGenerator$PartialsObserver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StateTransitionMatrixGenerator$PartialsObserver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StateTransitionMatrixGenerator$PartialsObserver, partialsComputed, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StateTransitionMatrixGenerator$PartialsObserver)[] = {
          { Py_tp_methods, t_StateTransitionMatrixGenerator$PartialsObserver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StateTransitionMatrixGenerator$PartialsObserver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StateTransitionMatrixGenerator$PartialsObserver, t_StateTransitionMatrixGenerator$PartialsObserver, StateTransitionMatrixGenerator$PartialsObserver);

        void t_StateTransitionMatrixGenerator$PartialsObserver::install(PyObject *module)
        {
          installType(&PY_TYPE(StateTransitionMatrixGenerator$PartialsObserver), &PY_TYPE_DEF(StateTransitionMatrixGenerator$PartialsObserver), module, "StateTransitionMatrixGenerator$PartialsObserver", 0);
        }

        void t_StateTransitionMatrixGenerator$PartialsObserver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StateTransitionMatrixGenerator$PartialsObserver), "class_", make_descriptor(StateTransitionMatrixGenerator$PartialsObserver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StateTransitionMatrixGenerator$PartialsObserver), "wrapfn_", make_descriptor(t_StateTransitionMatrixGenerator$PartialsObserver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StateTransitionMatrixGenerator$PartialsObserver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StateTransitionMatrixGenerator$PartialsObserver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StateTransitionMatrixGenerator$PartialsObserver::initializeClass, 1)))
            return NULL;
          return t_StateTransitionMatrixGenerator$PartialsObserver::wrap_Object(StateTransitionMatrixGenerator$PartialsObserver(((t_StateTransitionMatrixGenerator$PartialsObserver *) arg)->object.this$));
        }
        static PyObject *t_StateTransitionMatrixGenerator$PartialsObserver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StateTransitionMatrixGenerator$PartialsObserver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_StateTransitionMatrixGenerator$PartialsObserver_partialsComputed(t_StateTransitionMatrixGenerator$PartialsObserver *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > a2((jobject) NULL);

          if (!parseArgs(args, "k[D[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.partialsComputed(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "partialsComputed", args);
          return NULL;
        }
      }
    }
  }
}
