#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/PythonPropagatorConverter.h"
#include "org/orekit/propagation/conversion/PropagatorConverter.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *PythonPropagatorConverter::class$ = NULL;
        jmethodID *PythonPropagatorConverter::mids$ = NULL;
        bool PythonPropagatorConverter::live$ = false;

        jclass PythonPropagatorConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/PythonPropagatorConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_convert_a2b4413ea9476c3c] = env->getMethodID(cls, "convert", "(Ljava/util/List;Z[Ljava/lang/String;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_convert_4513d66a76c09bcc] = env->getMethodID(cls, "convert", "(Ljava/util/List;ZLjava/util/List;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_convert_e744c80c7015525e] = env->getMethodID(cls, "convert", "(Lorg/orekit/propagation/Propagator;DI[Ljava/lang/String;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_convert_47fabeaccf7f6a1b] = env->getMethodID(cls, "convert", "(Lorg/orekit/propagation/Propagator;DILjava/util/List;)Lorg/orekit/propagation/Propagator;");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonPropagatorConverter::PythonPropagatorConverter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonPropagatorConverter::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonPropagatorConverter::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonPropagatorConverter::pythonExtension(jlong a0) const
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
      namespace conversion {
        static PyObject *t_PythonPropagatorConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonPropagatorConverter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonPropagatorConverter_init_(t_PythonPropagatorConverter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonPropagatorConverter_finalize(t_PythonPropagatorConverter *self);
        static PyObject *t_PythonPropagatorConverter_pythonExtension(t_PythonPropagatorConverter *self, PyObject *args);
        static jobject JNICALL t_PythonPropagatorConverter_convert0(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1, jobject a2);
        static jobject JNICALL t_PythonPropagatorConverter_convert1(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1, jobject a2);
        static jobject JNICALL t_PythonPropagatorConverter_convert2(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jint a2, jobject a3);
        static jobject JNICALL t_PythonPropagatorConverter_convert3(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jint a2, jobject a3);
        static void JNICALL t_PythonPropagatorConverter_pythonDecRef4(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonPropagatorConverter_get__self(t_PythonPropagatorConverter *self, void *data);
        static PyGetSetDef t_PythonPropagatorConverter__fields_[] = {
          DECLARE_GET_FIELD(t_PythonPropagatorConverter, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonPropagatorConverter__methods_[] = {
          DECLARE_METHOD(t_PythonPropagatorConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonPropagatorConverter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonPropagatorConverter, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonPropagatorConverter, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonPropagatorConverter)[] = {
          { Py_tp_methods, t_PythonPropagatorConverter__methods_ },
          { Py_tp_init, (void *) t_PythonPropagatorConverter_init_ },
          { Py_tp_getset, t_PythonPropagatorConverter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonPropagatorConverter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonPropagatorConverter, t_PythonPropagatorConverter, PythonPropagatorConverter);

        void t_PythonPropagatorConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonPropagatorConverter), &PY_TYPE_DEF(PythonPropagatorConverter), module, "PythonPropagatorConverter", 1);
        }

        void t_PythonPropagatorConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropagatorConverter), "class_", make_descriptor(PythonPropagatorConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropagatorConverter), "wrapfn_", make_descriptor(t_PythonPropagatorConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropagatorConverter), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonPropagatorConverter::initializeClass);
          JNINativeMethod methods[] = {
            { "convert", "(Ljava/util/List;Z[Ljava/lang/String;)Lorg/orekit/propagation/Propagator;", (void *) t_PythonPropagatorConverter_convert0 },
            { "convert", "(Ljava/util/List;ZLjava/util/List;)Lorg/orekit/propagation/Propagator;", (void *) t_PythonPropagatorConverter_convert1 },
            { "convert", "(Lorg/orekit/propagation/Propagator;DI[Ljava/lang/String;)Lorg/orekit/propagation/Propagator;", (void *) t_PythonPropagatorConverter_convert2 },
            { "convert", "(Lorg/orekit/propagation/Propagator;DILjava/util/List;)Lorg/orekit/propagation/Propagator;", (void *) t_PythonPropagatorConverter_convert3 },
            { "pythonDecRef", "()V", (void *) t_PythonPropagatorConverter_pythonDecRef4 },
          };
          env->registerNatives(cls, methods, 5);
        }

        static PyObject *t_PythonPropagatorConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonPropagatorConverter::initializeClass, 1)))
            return NULL;
          return t_PythonPropagatorConverter::wrap_Object(PythonPropagatorConverter(((t_PythonPropagatorConverter *) arg)->object.this$));
        }
        static PyObject *t_PythonPropagatorConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonPropagatorConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonPropagatorConverter_init_(t_PythonPropagatorConverter *self, PyObject *args, PyObject *kwds)
        {
          PythonPropagatorConverter object((jobject) NULL);

          INT_CALL(object = PythonPropagatorConverter());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonPropagatorConverter_finalize(t_PythonPropagatorConverter *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonPropagatorConverter_pythonExtension(t_PythonPropagatorConverter *self, PyObject *args)
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

        static jobject JNICALL t_PythonPropagatorConverter_convert0(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorConverter::mids$[PythonPropagatorConverter::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::Propagator value((jobject) NULL);
          PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
          PyObject *o1 = (a1 ? Py_True : Py_False);
          PyObject *o2 = JArray<jstring>(a2).wrap();
          PyObject *result = PyObject_CallMethod(obj, "convert", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::Propagator::initializeClass, &value))
          {
            throwTypeError("convert", result);
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

        static jobject JNICALL t_PythonPropagatorConverter_convert1(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorConverter::mids$[PythonPropagatorConverter::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::Propagator value((jobject) NULL);
          PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
          PyObject *o1 = (a1 ? Py_True : Py_False);
          PyObject *o2 = ::java::util::t_List::wrap_Object(::java::util::List(a2));
          PyObject *result = PyObject_CallMethod(obj, "convert", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::Propagator::initializeClass, &value))
          {
            throwTypeError("convert", result);
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

        static jobject JNICALL t_PythonPropagatorConverter_convert2(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jint a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorConverter::mids$[PythonPropagatorConverter::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::Propagator value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_Propagator::wrap_Object(::org::orekit::propagation::Propagator(a0));
          PyObject *o3 = JArray<jstring>(a3).wrap();
          PyObject *result = PyObject_CallMethod(obj, "convert", "OdiO", o0, (double) a1, (int) a2, o3);
          Py_DECREF(o0);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::Propagator::initializeClass, &value))
          {
            throwTypeError("convert", result);
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

        static jobject JNICALL t_PythonPropagatorConverter_convert3(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jint a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorConverter::mids$[PythonPropagatorConverter::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::Propagator value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_Propagator::wrap_Object(::org::orekit::propagation::Propagator(a0));
          PyObject *o3 = ::java::util::t_List::wrap_Object(::java::util::List(a3));
          PyObject *result = PyObject_CallMethod(obj, "convert", "OdiO", o0, (double) a1, (int) a2, o3);
          Py_DECREF(o0);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::Propagator::initializeClass, &value))
          {
            throwTypeError("convert", result);
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

        static void JNICALL t_PythonPropagatorConverter_pythonDecRef4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorConverter::mids$[PythonPropagatorConverter::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonPropagatorConverter::mids$[PythonPropagatorConverter::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonPropagatorConverter_get__self(t_PythonPropagatorConverter *self, void *data)
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
#include "org/orekit/frames/EOPEntry.h"
#include "java/io/Serializable.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *EOPEntry::class$ = NULL;
      jmethodID *EOPEntry::mids$ = NULL;
      bool EOPEntry::live$ = false;

      jclass EOPEntry::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/EOPEntry");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b9fb2587f40ba4f3] = env->getMethodID(cls, "<init>", "(IDDDDDDDDDDLorg/orekit/frames/ITRFVersion;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getDdEps_dff5885c2c873297] = env->getMethodID(cls, "getDdEps", "()D");
          mids$[mid_getDdPsi_dff5885c2c873297] = env->getMethodID(cls, "getDdPsi", "()D");
          mids$[mid_getDx_dff5885c2c873297] = env->getMethodID(cls, "getDx", "()D");
          mids$[mid_getDy_dff5885c2c873297] = env->getMethodID(cls, "getDy", "()D");
          mids$[mid_getITRFType_8a73c81b6e5084ce] = env->getMethodID(cls, "getITRFType", "()Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_getLOD_dff5885c2c873297] = env->getMethodID(cls, "getLOD", "()D");
          mids$[mid_getMjd_570ce0828f81a2c1] = env->getMethodID(cls, "getMjd", "()I");
          mids$[mid_getUT1MinusUTC_dff5885c2c873297] = env->getMethodID(cls, "getUT1MinusUTC", "()D");
          mids$[mid_getX_dff5885c2c873297] = env->getMethodID(cls, "getX", "()D");
          mids$[mid_getXRate_dff5885c2c873297] = env->getMethodID(cls, "getXRate", "()D");
          mids$[mid_getY_dff5885c2c873297] = env->getMethodID(cls, "getY", "()D");
          mids$[mid_getYRate_dff5885c2c873297] = env->getMethodID(cls, "getYRate", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EOPEntry::EOPEntry(jint a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, const ::org::orekit::frames::ITRFVersion & a11, const ::org::orekit::time::AbsoluteDate & a12) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b9fb2587f40ba4f3, a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11.this$, a12.this$)) {}

      ::org::orekit::time::AbsoluteDate EOPEntry::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
      }

      jdouble EOPEntry::getDdEps() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDdEps_dff5885c2c873297]);
      }

      jdouble EOPEntry::getDdPsi() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDdPsi_dff5885c2c873297]);
      }

      jdouble EOPEntry::getDx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDx_dff5885c2c873297]);
      }

      jdouble EOPEntry::getDy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDy_dff5885c2c873297]);
      }

      ::org::orekit::frames::ITRFVersion EOPEntry::getITRFType() const
      {
        return ::org::orekit::frames::ITRFVersion(env->callObjectMethod(this$, mids$[mid_getITRFType_8a73c81b6e5084ce]));
      }

      jdouble EOPEntry::getLOD() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLOD_dff5885c2c873297]);
      }

      jint EOPEntry::getMjd() const
      {
        return env->callIntMethod(this$, mids$[mid_getMjd_570ce0828f81a2c1]);
      }

      jdouble EOPEntry::getUT1MinusUTC() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getUT1MinusUTC_dff5885c2c873297]);
      }

      jdouble EOPEntry::getX() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getX_dff5885c2c873297]);
      }

      jdouble EOPEntry::getXRate() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getXRate_dff5885c2c873297]);
      }

      jdouble EOPEntry::getY() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getY_dff5885c2c873297]);
      }

      jdouble EOPEntry::getYRate() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getYRate_dff5885c2c873297]);
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
      static PyObject *t_EOPEntry_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EOPEntry_instance_(PyTypeObject *type, PyObject *arg);
      static int t_EOPEntry_init_(t_EOPEntry *self, PyObject *args, PyObject *kwds);
      static PyObject *t_EOPEntry_getDate(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getDdEps(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getDdPsi(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getDx(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getDy(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getITRFType(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getLOD(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getMjd(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getUT1MinusUTC(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getX(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getXRate(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getY(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getYRate(t_EOPEntry *self);
      static PyObject *t_EOPEntry_get__date(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__ddEps(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__ddPsi(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__dx(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__dy(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__iTRFType(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__lOD(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__mjd(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__uT1MinusUTC(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__x(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__xRate(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__y(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__yRate(t_EOPEntry *self, void *data);
      static PyGetSetDef t_EOPEntry__fields_[] = {
        DECLARE_GET_FIELD(t_EOPEntry, date),
        DECLARE_GET_FIELD(t_EOPEntry, ddEps),
        DECLARE_GET_FIELD(t_EOPEntry, ddPsi),
        DECLARE_GET_FIELD(t_EOPEntry, dx),
        DECLARE_GET_FIELD(t_EOPEntry, dy),
        DECLARE_GET_FIELD(t_EOPEntry, iTRFType),
        DECLARE_GET_FIELD(t_EOPEntry, lOD),
        DECLARE_GET_FIELD(t_EOPEntry, mjd),
        DECLARE_GET_FIELD(t_EOPEntry, uT1MinusUTC),
        DECLARE_GET_FIELD(t_EOPEntry, x),
        DECLARE_GET_FIELD(t_EOPEntry, xRate),
        DECLARE_GET_FIELD(t_EOPEntry, y),
        DECLARE_GET_FIELD(t_EOPEntry, yRate),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EOPEntry__methods_[] = {
        DECLARE_METHOD(t_EOPEntry, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPEntry, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPEntry, getDate, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getDdEps, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getDdPsi, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getDx, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getDy, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getITRFType, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getLOD, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getMjd, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getUT1MinusUTC, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getX, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getXRate, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getY, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getYRate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EOPEntry)[] = {
        { Py_tp_methods, t_EOPEntry__methods_ },
        { Py_tp_init, (void *) t_EOPEntry_init_ },
        { Py_tp_getset, t_EOPEntry__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EOPEntry)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EOPEntry, t_EOPEntry, EOPEntry);

      void t_EOPEntry::install(PyObject *module)
      {
        installType(&PY_TYPE(EOPEntry), &PY_TYPE_DEF(EOPEntry), module, "EOPEntry", 0);
      }

      void t_EOPEntry::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPEntry), "class_", make_descriptor(EOPEntry::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPEntry), "wrapfn_", make_descriptor(t_EOPEntry::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPEntry), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EOPEntry_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EOPEntry::initializeClass, 1)))
          return NULL;
        return t_EOPEntry::wrap_Object(EOPEntry(((t_EOPEntry *) arg)->object.this$));
      }
      static PyObject *t_EOPEntry_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EOPEntry::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_EOPEntry_init_(t_EOPEntry *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        jdouble a1;
        jdouble a2;
        jdouble a3;
        jdouble a4;
        jdouble a5;
        jdouble a6;
        jdouble a7;
        jdouble a8;
        jdouble a9;
        jdouble a10;
        ::org::orekit::frames::ITRFVersion a11((jobject) NULL);
        PyTypeObject **p11;
        ::org::orekit::time::AbsoluteDate a12((jobject) NULL);
        EOPEntry object((jobject) NULL);

        if (!parseArgs(args, "IDDDDDDDDDDKk", ::org::orekit::frames::ITRFVersion::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &p11, ::org::orekit::frames::t_ITRFVersion::parameters_, &a12))
        {
          INT_CALL(object = EOPEntry(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_EOPEntry_getDate(t_EOPEntry *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_EOPEntry_getDdEps(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDdEps());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_getDdPsi(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDdPsi());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_getDx(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDx());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_getDy(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDy());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_getITRFType(t_EOPEntry *self)
      {
        ::org::orekit::frames::ITRFVersion result((jobject) NULL);
        OBJ_CALL(result = self->object.getITRFType());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(result);
      }

      static PyObject *t_EOPEntry_getLOD(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLOD());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_getMjd(t_EOPEntry *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMjd());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_EOPEntry_getUT1MinusUTC(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getUT1MinusUTC());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_getX(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getX());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_getXRate(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getXRate());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_getY(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getY());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_getYRate(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getYRate());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_get__date(t_EOPEntry *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_EOPEntry_get__ddEps(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDdEps());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EOPEntry_get__ddPsi(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDdPsi());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EOPEntry_get__dx(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EOPEntry_get__dy(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EOPEntry_get__iTRFType(t_EOPEntry *self, void *data)
      {
        ::org::orekit::frames::ITRFVersion value((jobject) NULL);
        OBJ_CALL(value = self->object.getITRFType());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(value);
      }

      static PyObject *t_EOPEntry_get__lOD(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLOD());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EOPEntry_get__mjd(t_EOPEntry *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMjd());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_EOPEntry_get__uT1MinusUTC(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getUT1MinusUTC());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EOPEntry_get__x(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getX());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EOPEntry_get__xRate(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getXRate());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EOPEntry_get__y(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getY());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EOPEntry_get__yRate(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getYRate());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuver.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
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
                  mids$[mid_checkUnit_97e95d3d99d1e1ba] = env->getMethodID(cls, "checkUnit", "(Lorg/orekit/utils/units/Unit;)V");
                  mids$[mid_getUnit_de9b417ee3c58e2e] = env->getMethodID(cls, "getUnit", "()Lorg/orekit/utils/units/Unit;");
                  mids$[mid_isTime_b108b35ef48e27bd] = env->getMethodID(cls, "isTime", "()Z");
                  mids$[mid_outputField_203b29c1d6cf2b5f] = env->getMethodID(cls, "outputField", "(Lorg/orekit/files/ccsds/definitions/TimeConverter;Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuver;)Ljava/lang/String;");
                  mids$[mid_process_6a2a230e80850e3c] = env->getMethodID(cls, "process", "(Ljava/lang/String;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuver;ILjava/lang/String;)V");
                  mids$[mid_valueOf_cc6c48b3fbb592be] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;");
                  mids$[mid_values_959d1a08e0612ff8] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType;");

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
                env->callVoidMethod(this$, mids$[mid_checkUnit_97e95d3d99d1e1ba], a0.this$);
              }

              ::org::orekit::utils::units::Unit ManeuverFieldType::getUnit() const
              {
                return ::org::orekit::utils::units::Unit(env->callObjectMethod(this$, mids$[mid_getUnit_de9b417ee3c58e2e]));
              }

              jboolean ManeuverFieldType::isTime() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isTime_b108b35ef48e27bd]);
              }

              ::java::lang::String ManeuverFieldType::outputField(const ::org::orekit::files::ccsds::definitions::TimeConverter & a0, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuver & a1) const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_outputField_203b29c1d6cf2b5f], a0.this$, a1.this$));
              }

              void ManeuverFieldType::process(const ::java::lang::String & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuver & a2, jint a3, const ::java::lang::String & a4) const
              {
                env->callVoidMethod(this$, mids$[mid_process_6a2a230e80850e3c], a0.this$, a1.this$, a2.this$, a3, a4.this$);
              }

              ManeuverFieldType ManeuverFieldType::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return ManeuverFieldType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_cc6c48b3fbb592be], a0.this$));
              }

              JArray< ManeuverFieldType > ManeuverFieldType::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< ManeuverFieldType >(env->callStaticObjectMethod(cls, mids$[mid_values_959d1a08e0612ff8]));
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
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresAdapter.h"
#include "org/hipparchus/util/Incrementor.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *LeastSquaresAdapter::class$ = NULL;
            jmethodID *LeastSquaresAdapter::mids$ = NULL;
            bool LeastSquaresAdapter::live$ = false;

            jclass LeastSquaresAdapter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresAdapter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0208fb941eb9e702] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;)V");
                mids$[mid_evaluate_766f7f4cc1ea3a49] = env->getMethodID(cls, "evaluate", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;");
                mids$[mid_getConvergenceChecker_c0e8b85b3220641b] = env->getMethodID(cls, "getConvergenceChecker", "()Lorg/hipparchus/optim/ConvergenceChecker;");
                mids$[mid_getEvaluationCounter_b6dd60d8c3af0cf7] = env->getMethodID(cls, "getEvaluationCounter", "()Lorg/hipparchus/util/Incrementor;");
                mids$[mid_getIterationCounter_b6dd60d8c3af0cf7] = env->getMethodID(cls, "getIterationCounter", "()Lorg/hipparchus/util/Incrementor;");
                mids$[mid_getObservationSize_570ce0828f81a2c1] = env->getMethodID(cls, "getObservationSize", "()I");
                mids$[mid_getParameterSize_570ce0828f81a2c1] = env->getMethodID(cls, "getParameterSize", "()I");
                mids$[mid_getStart_aab4fbf77867daa8] = env->getMethodID(cls, "getStart", "()Lorg/hipparchus/linear/RealVector;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            LeastSquaresAdapter::LeastSquaresAdapter(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0208fb941eb9e702, a0.this$)) {}

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation LeastSquaresAdapter::evaluate(const ::org::hipparchus::linear::RealVector & a0) const
            {
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation(env->callObjectMethod(this$, mids$[mid_evaluate_766f7f4cc1ea3a49], a0.this$));
            }

            ::org::hipparchus::optim::ConvergenceChecker LeastSquaresAdapter::getConvergenceChecker() const
            {
              return ::org::hipparchus::optim::ConvergenceChecker(env->callObjectMethod(this$, mids$[mid_getConvergenceChecker_c0e8b85b3220641b]));
            }

            ::org::hipparchus::util::Incrementor LeastSquaresAdapter::getEvaluationCounter() const
            {
              return ::org::hipparchus::util::Incrementor(env->callObjectMethod(this$, mids$[mid_getEvaluationCounter_b6dd60d8c3af0cf7]));
            }

            ::org::hipparchus::util::Incrementor LeastSquaresAdapter::getIterationCounter() const
            {
              return ::org::hipparchus::util::Incrementor(env->callObjectMethod(this$, mids$[mid_getIterationCounter_b6dd60d8c3af0cf7]));
            }

            jint LeastSquaresAdapter::getObservationSize() const
            {
              return env->callIntMethod(this$, mids$[mid_getObservationSize_570ce0828f81a2c1]);
            }

            jint LeastSquaresAdapter::getParameterSize() const
            {
              return env->callIntMethod(this$, mids$[mid_getParameterSize_570ce0828f81a2c1]);
            }

            ::org::hipparchus::linear::RealVector LeastSquaresAdapter::getStart() const
            {
              return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getStart_aab4fbf77867daa8]));
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
            static PyObject *t_LeastSquaresAdapter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresAdapter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_LeastSquaresAdapter_init_(t_LeastSquaresAdapter *self, PyObject *args, PyObject *kwds);
            static PyObject *t_LeastSquaresAdapter_evaluate(t_LeastSquaresAdapter *self, PyObject *arg);
            static PyObject *t_LeastSquaresAdapter_getConvergenceChecker(t_LeastSquaresAdapter *self);
            static PyObject *t_LeastSquaresAdapter_getEvaluationCounter(t_LeastSquaresAdapter *self);
            static PyObject *t_LeastSquaresAdapter_getIterationCounter(t_LeastSquaresAdapter *self);
            static PyObject *t_LeastSquaresAdapter_getObservationSize(t_LeastSquaresAdapter *self);
            static PyObject *t_LeastSquaresAdapter_getParameterSize(t_LeastSquaresAdapter *self);
            static PyObject *t_LeastSquaresAdapter_getStart(t_LeastSquaresAdapter *self);
            static PyObject *t_LeastSquaresAdapter_get__convergenceChecker(t_LeastSquaresAdapter *self, void *data);
            static PyObject *t_LeastSquaresAdapter_get__evaluationCounter(t_LeastSquaresAdapter *self, void *data);
            static PyObject *t_LeastSquaresAdapter_get__iterationCounter(t_LeastSquaresAdapter *self, void *data);
            static PyObject *t_LeastSquaresAdapter_get__observationSize(t_LeastSquaresAdapter *self, void *data);
            static PyObject *t_LeastSquaresAdapter_get__parameterSize(t_LeastSquaresAdapter *self, void *data);
            static PyObject *t_LeastSquaresAdapter_get__start(t_LeastSquaresAdapter *self, void *data);
            static PyGetSetDef t_LeastSquaresAdapter__fields_[] = {
              DECLARE_GET_FIELD(t_LeastSquaresAdapter, convergenceChecker),
              DECLARE_GET_FIELD(t_LeastSquaresAdapter, evaluationCounter),
              DECLARE_GET_FIELD(t_LeastSquaresAdapter, iterationCounter),
              DECLARE_GET_FIELD(t_LeastSquaresAdapter, observationSize),
              DECLARE_GET_FIELD(t_LeastSquaresAdapter, parameterSize),
              DECLARE_GET_FIELD(t_LeastSquaresAdapter, start),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_LeastSquaresAdapter__methods_[] = {
              DECLARE_METHOD(t_LeastSquaresAdapter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresAdapter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresAdapter, evaluate, METH_O),
              DECLARE_METHOD(t_LeastSquaresAdapter, getConvergenceChecker, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresAdapter, getEvaluationCounter, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresAdapter, getIterationCounter, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresAdapter, getObservationSize, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresAdapter, getParameterSize, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresAdapter, getStart, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LeastSquaresAdapter)[] = {
              { Py_tp_methods, t_LeastSquaresAdapter__methods_ },
              { Py_tp_init, (void *) t_LeastSquaresAdapter_init_ },
              { Py_tp_getset, t_LeastSquaresAdapter__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LeastSquaresAdapter)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LeastSquaresAdapter, t_LeastSquaresAdapter, LeastSquaresAdapter);

            void t_LeastSquaresAdapter::install(PyObject *module)
            {
              installType(&PY_TYPE(LeastSquaresAdapter), &PY_TYPE_DEF(LeastSquaresAdapter), module, "LeastSquaresAdapter", 0);
            }

            void t_LeastSquaresAdapter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresAdapter), "class_", make_descriptor(LeastSquaresAdapter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresAdapter), "wrapfn_", make_descriptor(t_LeastSquaresAdapter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresAdapter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LeastSquaresAdapter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LeastSquaresAdapter::initializeClass, 1)))
                return NULL;
              return t_LeastSquaresAdapter::wrap_Object(LeastSquaresAdapter(((t_LeastSquaresAdapter *) arg)->object.this$));
            }
            static PyObject *t_LeastSquaresAdapter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LeastSquaresAdapter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_LeastSquaresAdapter_init_(t_LeastSquaresAdapter *self, PyObject *args, PyObject *kwds)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem a0((jobject) NULL);
              LeastSquaresAdapter object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem::initializeClass, &a0))
              {
                INT_CALL(object = LeastSquaresAdapter(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_LeastSquaresAdapter_evaluate(t_LeastSquaresAdapter *self, PyObject *arg)
            {
              ::org::hipparchus::linear::RealVector a0((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.evaluate(a0));
                return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem$Evaluation::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "evaluate", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresAdapter_getConvergenceChecker(t_LeastSquaresAdapter *self)
            {
              ::org::hipparchus::optim::ConvergenceChecker result((jobject) NULL);
              OBJ_CALL(result = self->object.getConvergenceChecker());
              return ::org::hipparchus::optim::t_ConvergenceChecker::wrap_Object(result, ::org::hipparchus::optim::nonlinear::vector::leastsquares::PY_TYPE(LeastSquaresProblem$Evaluation));
            }

            static PyObject *t_LeastSquaresAdapter_getEvaluationCounter(t_LeastSquaresAdapter *self)
            {
              ::org::hipparchus::util::Incrementor result((jobject) NULL);
              OBJ_CALL(result = self->object.getEvaluationCounter());
              return ::org::hipparchus::util::t_Incrementor::wrap_Object(result);
            }

            static PyObject *t_LeastSquaresAdapter_getIterationCounter(t_LeastSquaresAdapter *self)
            {
              ::org::hipparchus::util::Incrementor result((jobject) NULL);
              OBJ_CALL(result = self->object.getIterationCounter());
              return ::org::hipparchus::util::t_Incrementor::wrap_Object(result);
            }

            static PyObject *t_LeastSquaresAdapter_getObservationSize(t_LeastSquaresAdapter *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getObservationSize());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LeastSquaresAdapter_getParameterSize(t_LeastSquaresAdapter *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getParameterSize());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LeastSquaresAdapter_getStart(t_LeastSquaresAdapter *self)
            {
              ::org::hipparchus::linear::RealVector result((jobject) NULL);
              OBJ_CALL(result = self->object.getStart());
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }

            static PyObject *t_LeastSquaresAdapter_get__convergenceChecker(t_LeastSquaresAdapter *self, void *data)
            {
              ::org::hipparchus::optim::ConvergenceChecker value((jobject) NULL);
              OBJ_CALL(value = self->object.getConvergenceChecker());
              return ::org::hipparchus::optim::t_ConvergenceChecker::wrap_Object(value);
            }

            static PyObject *t_LeastSquaresAdapter_get__evaluationCounter(t_LeastSquaresAdapter *self, void *data)
            {
              ::org::hipparchus::util::Incrementor value((jobject) NULL);
              OBJ_CALL(value = self->object.getEvaluationCounter());
              return ::org::hipparchus::util::t_Incrementor::wrap_Object(value);
            }

            static PyObject *t_LeastSquaresAdapter_get__iterationCounter(t_LeastSquaresAdapter *self, void *data)
            {
              ::org::hipparchus::util::Incrementor value((jobject) NULL);
              OBJ_CALL(value = self->object.getIterationCounter());
              return ::org::hipparchus::util::t_Incrementor::wrap_Object(value);
            }

            static PyObject *t_LeastSquaresAdapter_get__observationSize(t_LeastSquaresAdapter *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getObservationSize());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_LeastSquaresAdapter_get__parameterSize(t_LeastSquaresAdapter *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getParameterSize());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_LeastSquaresAdapter_get__start(t_LeastSquaresAdapter *self, void *data)
            {
              ::org::hipparchus::linear::RealVector value((jobject) NULL);
              OBJ_CALL(value = self->object.getStart());
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/AngularRadioRefractionModifier.h"
#include "org/orekit/estimation/measurements/AngularAzEl.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/models/AtmosphericRefractionModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *AngularRadioRefractionModifier::class$ = NULL;
          jmethodID *AngularRadioRefractionModifier::mids$ = NULL;
          bool AngularRadioRefractionModifier::live$ = false;

          jclass AngularRadioRefractionModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/AngularRadioRefractionModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e298e47002f6c8f7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/AtmosphericRefractionModel;)V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AngularRadioRefractionModifier::AngularRadioRefractionModifier(const ::org::orekit::models::AtmosphericRefractionModel & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e298e47002f6c8f7, a0.this$)) {}

          ::java::util::List AngularRadioRefractionModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          void AngularRadioRefractionModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_AngularRadioRefractionModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AngularRadioRefractionModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AngularRadioRefractionModifier_init_(t_AngularRadioRefractionModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AngularRadioRefractionModifier_getParametersDrivers(t_AngularRadioRefractionModifier *self);
          static PyObject *t_AngularRadioRefractionModifier_modifyWithoutDerivatives(t_AngularRadioRefractionModifier *self, PyObject *arg);
          static PyObject *t_AngularRadioRefractionModifier_get__parametersDrivers(t_AngularRadioRefractionModifier *self, void *data);
          static PyGetSetDef t_AngularRadioRefractionModifier__fields_[] = {
            DECLARE_GET_FIELD(t_AngularRadioRefractionModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AngularRadioRefractionModifier__methods_[] = {
            DECLARE_METHOD(t_AngularRadioRefractionModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularRadioRefractionModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularRadioRefractionModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_AngularRadioRefractionModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AngularRadioRefractionModifier)[] = {
            { Py_tp_methods, t_AngularRadioRefractionModifier__methods_ },
            { Py_tp_init, (void *) t_AngularRadioRefractionModifier_init_ },
            { Py_tp_getset, t_AngularRadioRefractionModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AngularRadioRefractionModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AngularRadioRefractionModifier, t_AngularRadioRefractionModifier, AngularRadioRefractionModifier);

          void t_AngularRadioRefractionModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(AngularRadioRefractionModifier), &PY_TYPE_DEF(AngularRadioRefractionModifier), module, "AngularRadioRefractionModifier", 0);
          }

          void t_AngularRadioRefractionModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRadioRefractionModifier), "class_", make_descriptor(AngularRadioRefractionModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRadioRefractionModifier), "wrapfn_", make_descriptor(t_AngularRadioRefractionModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRadioRefractionModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AngularRadioRefractionModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AngularRadioRefractionModifier::initializeClass, 1)))
              return NULL;
            return t_AngularRadioRefractionModifier::wrap_Object(AngularRadioRefractionModifier(((t_AngularRadioRefractionModifier *) arg)->object.this$));
          }
          static PyObject *t_AngularRadioRefractionModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AngularRadioRefractionModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AngularRadioRefractionModifier_init_(t_AngularRadioRefractionModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::AtmosphericRefractionModel a0((jobject) NULL);
            AngularRadioRefractionModifier object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::models::AtmosphericRefractionModel::initializeClass, &a0))
            {
              INT_CALL(object = AngularRadioRefractionModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_AngularRadioRefractionModifier_getParametersDrivers(t_AngularRadioRefractionModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_AngularRadioRefractionModifier_modifyWithoutDerivatives(t_AngularRadioRefractionModifier *self, PyObject *arg)
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

          static PyObject *t_AngularRadioRefractionModifier_get__parametersDrivers(t_AngularRadioRefractionModifier *self, void *data)
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
#include "org/orekit/files/ccsds/utils/generation/XmlGenerator.h"
#include "java/util/List.h"
#include "java/io/IOException.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            ::java::lang::Class *XmlGenerator::class$ = NULL;
            jmethodID *XmlGenerator::mids$ = NULL;
            bool XmlGenerator::live$ = false;
            jint XmlGenerator::DEFAULT_INDENT = (jint) 0;
            ::java::lang::String *XmlGenerator::NDM_XML_V3_SCHEMA_LOCATION = NULL;
            ::java::lang::String *XmlGenerator::UNITS = NULL;

            jclass XmlGenerator::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/XmlGenerator");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_d73bd3f88c49d68d] = env->getMethodID(cls, "<init>", "(Ljava/lang/Appendable;ILjava/lang/String;DZLjava/lang/String;)V");
                mids$[mid_endMessage_d0bc48d5b00dc40c] = env->getMethodID(cls, "endMessage", "(Ljava/lang/String;)V");
                mids$[mid_enterSection_d0bc48d5b00dc40c] = env->getMethodID(cls, "enterSection", "(Ljava/lang/String;)V");
                mids$[mid_exitSection_11b109bd155ca898] = env->getMethodID(cls, "exitSection", "()Ljava/lang/String;");
                mids$[mid_getFormat_66298c6188053be6] = env->getMethodID(cls, "getFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;");
                mids$[mid_startMessage_d68f2e10a4896937] = env->getMethodID(cls, "startMessage", "(Ljava/lang/String;Ljava/lang/String;D)V");
                mids$[mid_writeComments_de3e021e7266b71e] = env->getMethodID(cls, "writeComments", "(Ljava/util/List;)V");
                mids$[mid_writeEntry_ddc5f91684d983c2] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/utils/units/Unit;Z)V");
                mids$[mid_writeOneAttributeElement_984b533a39fac42d] = env->getMethodID(cls, "writeOneAttributeElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
                mids$[mid_writeTwoAttributesElement_0be9bb25c5e386d0] = env->getMethodID(cls, "writeTwoAttributesElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                DEFAULT_INDENT = env->getStaticIntField(cls, "DEFAULT_INDENT");
                NDM_XML_V3_SCHEMA_LOCATION = new ::java::lang::String(env->getStaticObjectField(cls, "NDM_XML_V3_SCHEMA_LOCATION", "Ljava/lang/String;"));
                UNITS = new ::java::lang::String(env->getStaticObjectField(cls, "UNITS", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            XmlGenerator::XmlGenerator(const ::java::lang::Appendable & a0, jint a1, const ::java::lang::String & a2, jdouble a3, jboolean a4, const ::java::lang::String & a5) : ::org::orekit::files::ccsds::utils::generation::AbstractGenerator(env->newObject(initializeClass, &mids$, mid_init$_d73bd3f88c49d68d, a0.this$, a1, a2.this$, a3, a4, a5.this$)) {}

            void XmlGenerator::endMessage(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_endMessage_d0bc48d5b00dc40c], a0.this$);
            }

            void XmlGenerator::enterSection(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_enterSection_d0bc48d5b00dc40c], a0.this$);
            }

            ::java::lang::String XmlGenerator::exitSection() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_exitSection_11b109bd155ca898]));
            }

            ::org::orekit::files::ccsds::utils::FileFormat XmlGenerator::getFormat() const
            {
              return ::org::orekit::files::ccsds::utils::FileFormat(env->callObjectMethod(this$, mids$[mid_getFormat_66298c6188053be6]));
            }

            void XmlGenerator::startMessage(const ::java::lang::String & a0, const ::java::lang::String & a1, jdouble a2) const
            {
              env->callVoidMethod(this$, mids$[mid_startMessage_d68f2e10a4896937], a0.this$, a1.this$, a2);
            }

            void XmlGenerator::writeComments(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeComments_de3e021e7266b71e], a0.this$);
            }

            void XmlGenerator::writeEntry(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::utils::units::Unit & a2, jboolean a3) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_ddc5f91684d983c2], a0.this$, a1.this$, a2.this$, a3);
            }

            void XmlGenerator::writeOneAttributeElement(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3) const
            {
              env->callVoidMethod(this$, mids$[mid_writeOneAttributeElement_984b533a39fac42d], a0.this$, a1.this$, a2.this$, a3.this$);
            }

            void XmlGenerator::writeTwoAttributesElement(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5) const
            {
              env->callVoidMethod(this$, mids$[mid_writeTwoAttributesElement_0be9bb25c5e386d0], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$);
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
          namespace generation {
            static PyObject *t_XmlGenerator_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_XmlGenerator_instance_(PyTypeObject *type, PyObject *arg);
            static int t_XmlGenerator_init_(t_XmlGenerator *self, PyObject *args, PyObject *kwds);
            static PyObject *t_XmlGenerator_endMessage(t_XmlGenerator *self, PyObject *args);
            static PyObject *t_XmlGenerator_enterSection(t_XmlGenerator *self, PyObject *args);
            static PyObject *t_XmlGenerator_exitSection(t_XmlGenerator *self, PyObject *args);
            static PyObject *t_XmlGenerator_getFormat(t_XmlGenerator *self, PyObject *args);
            static PyObject *t_XmlGenerator_startMessage(t_XmlGenerator *self, PyObject *args);
            static PyObject *t_XmlGenerator_writeComments(t_XmlGenerator *self, PyObject *args);
            static PyObject *t_XmlGenerator_writeEntry(t_XmlGenerator *self, PyObject *args);
            static PyObject *t_XmlGenerator_writeOneAttributeElement(t_XmlGenerator *self, PyObject *args);
            static PyObject *t_XmlGenerator_writeTwoAttributesElement(t_XmlGenerator *self, PyObject *args);
            static PyObject *t_XmlGenerator_get__format(t_XmlGenerator *self, void *data);
            static PyGetSetDef t_XmlGenerator__fields_[] = {
              DECLARE_GET_FIELD(t_XmlGenerator, format),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_XmlGenerator__methods_[] = {
              DECLARE_METHOD(t_XmlGenerator, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XmlGenerator, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XmlGenerator, endMessage, METH_VARARGS),
              DECLARE_METHOD(t_XmlGenerator, enterSection, METH_VARARGS),
              DECLARE_METHOD(t_XmlGenerator, exitSection, METH_VARARGS),
              DECLARE_METHOD(t_XmlGenerator, getFormat, METH_VARARGS),
              DECLARE_METHOD(t_XmlGenerator, startMessage, METH_VARARGS),
              DECLARE_METHOD(t_XmlGenerator, writeComments, METH_VARARGS),
              DECLARE_METHOD(t_XmlGenerator, writeEntry, METH_VARARGS),
              DECLARE_METHOD(t_XmlGenerator, writeOneAttributeElement, METH_VARARGS),
              DECLARE_METHOD(t_XmlGenerator, writeTwoAttributesElement, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(XmlGenerator)[] = {
              { Py_tp_methods, t_XmlGenerator__methods_ },
              { Py_tp_init, (void *) t_XmlGenerator_init_ },
              { Py_tp_getset, t_XmlGenerator__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(XmlGenerator)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractGenerator),
              NULL
            };

            DEFINE_TYPE(XmlGenerator, t_XmlGenerator, XmlGenerator);

            void t_XmlGenerator::install(PyObject *module)
            {
              installType(&PY_TYPE(XmlGenerator), &PY_TYPE_DEF(XmlGenerator), module, "XmlGenerator", 0);
            }

            void t_XmlGenerator::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlGenerator), "class_", make_descriptor(XmlGenerator::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlGenerator), "wrapfn_", make_descriptor(t_XmlGenerator::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlGenerator), "boxfn_", make_descriptor(boxObject));
              env->getClass(XmlGenerator::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlGenerator), "DEFAULT_INDENT", make_descriptor(XmlGenerator::DEFAULT_INDENT));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlGenerator), "NDM_XML_V3_SCHEMA_LOCATION", make_descriptor(j2p(*XmlGenerator::NDM_XML_V3_SCHEMA_LOCATION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlGenerator), "UNITS", make_descriptor(j2p(*XmlGenerator::UNITS)));
            }

            static PyObject *t_XmlGenerator_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, XmlGenerator::initializeClass, 1)))
                return NULL;
              return t_XmlGenerator::wrap_Object(XmlGenerator(((t_XmlGenerator *) arg)->object.this$));
            }
            static PyObject *t_XmlGenerator_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, XmlGenerator::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_XmlGenerator_init_(t_XmlGenerator *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::Appendable a0((jobject) NULL);
              jint a1;
              ::java::lang::String a2((jobject) NULL);
              jdouble a3;
              jboolean a4;
              ::java::lang::String a5((jobject) NULL);
              XmlGenerator object((jobject) NULL);

              if (!parseArgs(args, "kIsDZs", ::java::lang::Appendable::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = XmlGenerator(a0, a1, a2, a3, a4, a5));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_XmlGenerator_endMessage(t_XmlGenerator *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(self->object.endMessage(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(XmlGenerator), (PyObject *) self, "endMessage", args, 2);
            }

            static PyObject *t_XmlGenerator_enterSection(t_XmlGenerator *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(self->object.enterSection(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(XmlGenerator), (PyObject *) self, "enterSection", args, 2);
            }

            static PyObject *t_XmlGenerator_exitSection(t_XmlGenerator *self, PyObject *args)
            {
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.exitSection());
                return j2p(result);
              }

              return callSuper(PY_TYPE(XmlGenerator), (PyObject *) self, "exitSection", args, 2);
            }

            static PyObject *t_XmlGenerator_getFormat(t_XmlGenerator *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::FileFormat result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.getFormat());
                return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(result);
              }

              return callSuper(PY_TYPE(XmlGenerator), (PyObject *) self, "getFormat", args, 2);
            }

            static PyObject *t_XmlGenerator_startMessage(t_XmlGenerator *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;

              if (!parseArgs(args, "ssD", &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.startMessage(a0, a1, a2));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(XmlGenerator), (PyObject *) self, "startMessage", args, 2);
            }

            static PyObject *t_XmlGenerator_writeComments(t_XmlGenerator *self, PyObject *args)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(self->object.writeComments(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(XmlGenerator), (PyObject *) self, "writeComments", args, 2);
            }

            static PyObject *t_XmlGenerator_writeEntry(t_XmlGenerator *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::utils::units::Unit a2((jobject) NULL);
              jboolean a3;

              if (!parseArgs(args, "sskZ", ::org::orekit::utils::units::Unit::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.writeEntry(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(XmlGenerator), (PyObject *) self, "writeEntry", args, 2);
            }

            static PyObject *t_XmlGenerator_writeOneAttributeElement(t_XmlGenerator *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              ::java::lang::String a2((jobject) NULL);
              ::java::lang::String a3((jobject) NULL);

              if (!parseArgs(args, "ssss", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.writeOneAttributeElement(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeOneAttributeElement", args);
              return NULL;
            }

            static PyObject *t_XmlGenerator_writeTwoAttributesElement(t_XmlGenerator *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              ::java::lang::String a2((jobject) NULL);
              ::java::lang::String a3((jobject) NULL);
              ::java::lang::String a4((jobject) NULL);
              ::java::lang::String a5((jobject) NULL);

              if (!parseArgs(args, "ssssss", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.writeTwoAttributesElement(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeTwoAttributesElement", args);
              return NULL;
            }

            static PyObject *t_XmlGenerator_get__format(t_XmlGenerator *self, void *data)
            {
              ::org::orekit::files::ccsds::utils::FileFormat value((jobject) NULL);
              OBJ_CALL(value = self->object.getFormat());
              return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/SingleBodyRelativeAttraction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/String.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *SingleBodyRelativeAttraction::class$ = NULL;
        jmethodID *SingleBodyRelativeAttraction::mids$ = NULL;
        bool SingleBodyRelativeAttraction::live$ = false;
        ::java::lang::String *SingleBodyRelativeAttraction::ATTRACTION_COEFFICIENT_SUFFIX = NULL;

        jclass SingleBodyRelativeAttraction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/SingleBodyRelativeAttraction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6a22a7b4e14949e4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;)V");
            mids$[mid_acceleration_8954761face5e1a7] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_b42ac4b5bfb80fab] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_dependsOnPositionOnly_b108b35ef48e27bd] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ATTRACTION_COEFFICIENT_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "ATTRACTION_COEFFICIENT_SUFFIX", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SingleBodyRelativeAttraction::SingleBodyRelativeAttraction(const ::org::orekit::bodies::CelestialBody & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6a22a7b4e14949e4, a0.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SingleBodyRelativeAttraction::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_8954761face5e1a7], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D SingleBodyRelativeAttraction::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_b42ac4b5bfb80fab], a0.this$, a1.this$));
        }

        jboolean SingleBodyRelativeAttraction::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_b108b35ef48e27bd]);
        }

        ::java::util::List SingleBodyRelativeAttraction::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
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
        static PyObject *t_SingleBodyRelativeAttraction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SingleBodyRelativeAttraction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SingleBodyRelativeAttraction_init_(t_SingleBodyRelativeAttraction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SingleBodyRelativeAttraction_acceleration(t_SingleBodyRelativeAttraction *self, PyObject *args);
        static PyObject *t_SingleBodyRelativeAttraction_dependsOnPositionOnly(t_SingleBodyRelativeAttraction *self);
        static PyObject *t_SingleBodyRelativeAttraction_getParametersDrivers(t_SingleBodyRelativeAttraction *self);
        static PyObject *t_SingleBodyRelativeAttraction_get__parametersDrivers(t_SingleBodyRelativeAttraction *self, void *data);
        static PyGetSetDef t_SingleBodyRelativeAttraction__fields_[] = {
          DECLARE_GET_FIELD(t_SingleBodyRelativeAttraction, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SingleBodyRelativeAttraction__methods_[] = {
          DECLARE_METHOD(t_SingleBodyRelativeAttraction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SingleBodyRelativeAttraction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SingleBodyRelativeAttraction, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_SingleBodyRelativeAttraction, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_SingleBodyRelativeAttraction, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SingleBodyRelativeAttraction)[] = {
          { Py_tp_methods, t_SingleBodyRelativeAttraction__methods_ },
          { Py_tp_init, (void *) t_SingleBodyRelativeAttraction_init_ },
          { Py_tp_getset, t_SingleBodyRelativeAttraction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SingleBodyRelativeAttraction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SingleBodyRelativeAttraction, t_SingleBodyRelativeAttraction, SingleBodyRelativeAttraction);

        void t_SingleBodyRelativeAttraction::install(PyObject *module)
        {
          installType(&PY_TYPE(SingleBodyRelativeAttraction), &PY_TYPE_DEF(SingleBodyRelativeAttraction), module, "SingleBodyRelativeAttraction", 0);
        }

        void t_SingleBodyRelativeAttraction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SingleBodyRelativeAttraction), "class_", make_descriptor(SingleBodyRelativeAttraction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SingleBodyRelativeAttraction), "wrapfn_", make_descriptor(t_SingleBodyRelativeAttraction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SingleBodyRelativeAttraction), "boxfn_", make_descriptor(boxObject));
          env->getClass(SingleBodyRelativeAttraction::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SingleBodyRelativeAttraction), "ATTRACTION_COEFFICIENT_SUFFIX", make_descriptor(j2p(*SingleBodyRelativeAttraction::ATTRACTION_COEFFICIENT_SUFFIX)));
        }

        static PyObject *t_SingleBodyRelativeAttraction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SingleBodyRelativeAttraction::initializeClass, 1)))
            return NULL;
          return t_SingleBodyRelativeAttraction::wrap_Object(SingleBodyRelativeAttraction(((t_SingleBodyRelativeAttraction *) arg)->object.this$));
        }
        static PyObject *t_SingleBodyRelativeAttraction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SingleBodyRelativeAttraction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SingleBodyRelativeAttraction_init_(t_SingleBodyRelativeAttraction *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
          SingleBodyRelativeAttraction object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &a0))
          {
            INT_CALL(object = SingleBodyRelativeAttraction(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SingleBodyRelativeAttraction_acceleration(t_SingleBodyRelativeAttraction *self, PyObject *args)
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

        static PyObject *t_SingleBodyRelativeAttraction_dependsOnPositionOnly(t_SingleBodyRelativeAttraction *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SingleBodyRelativeAttraction_getParametersDrivers(t_SingleBodyRelativeAttraction *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_SingleBodyRelativeAttraction_get__parametersDrivers(t_SingleBodyRelativeAttraction *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockRangeModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/Range.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticJ2ClockRangeModifier::class$ = NULL;
          jmethodID *RelativisticJ2ClockRangeModifier::mids$ = NULL;
          bool RelativisticJ2ClockRangeModifier::live$ = false;

          jclass RelativisticJ2ClockRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_2c56b6dd4d4b1dec] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticJ2ClockRangeModifier::RelativisticJ2ClockRangeModifier(jdouble a0, jdouble a1, jdouble a2) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier(env->newObject(initializeClass, &mids$, mid_init$_2c56b6dd4d4b1dec, a0, a1, a2)) {}

          ::java::util::List RelativisticJ2ClockRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          void RelativisticJ2ClockRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_RelativisticJ2ClockRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticJ2ClockRangeModifier_init_(t_RelativisticJ2ClockRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticJ2ClockRangeModifier_getParametersDrivers(t_RelativisticJ2ClockRangeModifier *self);
          static PyObject *t_RelativisticJ2ClockRangeModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockRangeModifier *self, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockRangeModifier_get__parametersDrivers(t_RelativisticJ2ClockRangeModifier *self, void *data);
          static PyGetSetDef t_RelativisticJ2ClockRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticJ2ClockRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticJ2ClockRangeModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticJ2ClockRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticJ2ClockRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticJ2ClockRangeModifier)[] = {
            { Py_tp_methods, t_RelativisticJ2ClockRangeModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticJ2ClockRangeModifier_init_ },
            { Py_tp_getset, t_RelativisticJ2ClockRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticJ2ClockRangeModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticJ2ClockRangeModifier, t_RelativisticJ2ClockRangeModifier, RelativisticJ2ClockRangeModifier);

          void t_RelativisticJ2ClockRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticJ2ClockRangeModifier), &PY_TYPE_DEF(RelativisticJ2ClockRangeModifier), module, "RelativisticJ2ClockRangeModifier", 0);
          }

          void t_RelativisticJ2ClockRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockRangeModifier), "class_", make_descriptor(RelativisticJ2ClockRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockRangeModifier), "wrapfn_", make_descriptor(t_RelativisticJ2ClockRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticJ2ClockRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticJ2ClockRangeModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticJ2ClockRangeModifier::wrap_Object(RelativisticJ2ClockRangeModifier(((t_RelativisticJ2ClockRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticJ2ClockRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticJ2ClockRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticJ2ClockRangeModifier_init_(t_RelativisticJ2ClockRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            RelativisticJ2ClockRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              INT_CALL(object = RelativisticJ2ClockRangeModifier(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RelativisticJ2ClockRangeModifier_getParametersDrivers(t_RelativisticJ2ClockRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticJ2ClockRangeModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockRangeModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticJ2ClockRangeModifier_get__parametersDrivers(t_RelativisticJ2ClockRangeModifier *self, void *data)
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
#include "org/hipparchus/random/UniformRandomGenerator.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "org/hipparchus/random/NormalizedRandomGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *UniformRandomGenerator::class$ = NULL;
      jmethodID *UniformRandomGenerator::mids$ = NULL;
      bool UniformRandomGenerator::live$ = false;

      jclass UniformRandomGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/UniformRandomGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a351c1fd6920cdee] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;)V");
          mids$[mid_nextNormalizedDouble_dff5885c2c873297] = env->getMethodID(cls, "nextNormalizedDouble", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UniformRandomGenerator::UniformRandomGenerator(const ::org::hipparchus::random::RandomGenerator & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a351c1fd6920cdee, a0.this$)) {}

      jdouble UniformRandomGenerator::nextNormalizedDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextNormalizedDouble_dff5885c2c873297]);
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
      static PyObject *t_UniformRandomGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UniformRandomGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_UniformRandomGenerator_init_(t_UniformRandomGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_UniformRandomGenerator_nextNormalizedDouble(t_UniformRandomGenerator *self);

      static PyMethodDef t_UniformRandomGenerator__methods_[] = {
        DECLARE_METHOD(t_UniformRandomGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UniformRandomGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UniformRandomGenerator, nextNormalizedDouble, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UniformRandomGenerator)[] = {
        { Py_tp_methods, t_UniformRandomGenerator__methods_ },
        { Py_tp_init, (void *) t_UniformRandomGenerator_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UniformRandomGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UniformRandomGenerator, t_UniformRandomGenerator, UniformRandomGenerator);

      void t_UniformRandomGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(UniformRandomGenerator), &PY_TYPE_DEF(UniformRandomGenerator), module, "UniformRandomGenerator", 0);
      }

      void t_UniformRandomGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UniformRandomGenerator), "class_", make_descriptor(UniformRandomGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UniformRandomGenerator), "wrapfn_", make_descriptor(t_UniformRandomGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UniformRandomGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UniformRandomGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UniformRandomGenerator::initializeClass, 1)))
          return NULL;
        return t_UniformRandomGenerator::wrap_Object(UniformRandomGenerator(((t_UniformRandomGenerator *) arg)->object.this$));
      }
      static PyObject *t_UniformRandomGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UniformRandomGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_UniformRandomGenerator_init_(t_UniformRandomGenerator *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
        UniformRandomGenerator object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0))
        {
          INT_CALL(object = UniformRandomGenerator(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_UniformRandomGenerator_nextNormalizedDouble(t_UniformRandomGenerator *self)
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
#include "org/orekit/estimation/sequential/PythonAbstractKalmanEstimator.h"
#include "java/util/List.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/sequential/KalmanEstimation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *PythonAbstractKalmanEstimator::class$ = NULL;
        jmethodID *PythonAbstractKalmanEstimator::mids$ = NULL;
        bool PythonAbstractKalmanEstimator::live$ = false;

        jclass PythonAbstractKalmanEstimator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/PythonAbstractKalmanEstimator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_de3e021e7266b71e] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getKalmanEstimation_e05aaef10b06b09b] = env->getMethodID(cls, "getKalmanEstimation", "()Lorg/orekit/estimation/sequential/KalmanEstimation;");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractKalmanEstimator::PythonAbstractKalmanEstimator(const ::java::util::List & a0) : ::org::orekit::estimation::sequential::AbstractKalmanEstimator(env->newObject(initializeClass, &mids$, mid_init$_de3e021e7266b71e, a0.this$)) {}

        void PythonAbstractKalmanEstimator::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonAbstractKalmanEstimator::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonAbstractKalmanEstimator::pythonExtension(jlong a0) const
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
      namespace sequential {
        static PyObject *t_PythonAbstractKalmanEstimator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractKalmanEstimator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractKalmanEstimator_init_(t_PythonAbstractKalmanEstimator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractKalmanEstimator_finalize(t_PythonAbstractKalmanEstimator *self);
        static PyObject *t_PythonAbstractKalmanEstimator_pythonExtension(t_PythonAbstractKalmanEstimator *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractKalmanEstimator_getKalmanEstimation0(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAbstractKalmanEstimator_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractKalmanEstimator_get__self(t_PythonAbstractKalmanEstimator *self, void *data);
        static PyGetSetDef t_PythonAbstractKalmanEstimator__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractKalmanEstimator, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractKalmanEstimator__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractKalmanEstimator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractKalmanEstimator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractKalmanEstimator, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractKalmanEstimator, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractKalmanEstimator)[] = {
          { Py_tp_methods, t_PythonAbstractKalmanEstimator__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractKalmanEstimator_init_ },
          { Py_tp_getset, t_PythonAbstractKalmanEstimator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractKalmanEstimator)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::sequential::AbstractKalmanEstimator),
          NULL
        };

        DEFINE_TYPE(PythonAbstractKalmanEstimator, t_PythonAbstractKalmanEstimator, PythonAbstractKalmanEstimator);

        void t_PythonAbstractKalmanEstimator::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractKalmanEstimator), &PY_TYPE_DEF(PythonAbstractKalmanEstimator), module, "PythonAbstractKalmanEstimator", 1);
        }

        void t_PythonAbstractKalmanEstimator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractKalmanEstimator), "class_", make_descriptor(PythonAbstractKalmanEstimator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractKalmanEstimator), "wrapfn_", make_descriptor(t_PythonAbstractKalmanEstimator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractKalmanEstimator), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractKalmanEstimator::initializeClass);
          JNINativeMethod methods[] = {
            { "getKalmanEstimation", "()Lorg/orekit/estimation/sequential/KalmanEstimation;", (void *) t_PythonAbstractKalmanEstimator_getKalmanEstimation0 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractKalmanEstimator_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonAbstractKalmanEstimator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractKalmanEstimator::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractKalmanEstimator::wrap_Object(PythonAbstractKalmanEstimator(((t_PythonAbstractKalmanEstimator *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractKalmanEstimator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractKalmanEstimator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractKalmanEstimator_init_(t_PythonAbstractKalmanEstimator *self, PyObject *args, PyObject *kwds)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          PythonAbstractKalmanEstimator object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            INT_CALL(object = PythonAbstractKalmanEstimator(a0));
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

        static PyObject *t_PythonAbstractKalmanEstimator_finalize(t_PythonAbstractKalmanEstimator *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractKalmanEstimator_pythonExtension(t_PythonAbstractKalmanEstimator *self, PyObject *args)
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

        static jobject JNICALL t_PythonAbstractKalmanEstimator_getKalmanEstimation0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractKalmanEstimator::mids$[PythonAbstractKalmanEstimator::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::sequential::KalmanEstimation value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getKalmanEstimation", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::sequential::KalmanEstimation::initializeClass, &value))
          {
            throwTypeError("getKalmanEstimation", result);
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

        static void JNICALL t_PythonAbstractKalmanEstimator_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractKalmanEstimator::mids$[PythonAbstractKalmanEstimator::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractKalmanEstimator::mids$[PythonAbstractKalmanEstimator::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractKalmanEstimator_get__self(t_PythonAbstractKalmanEstimator *self, void *data)
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
#include "org/orekit/utils/SecularAndHarmonic.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *SecularAndHarmonic::class$ = NULL;
      jmethodID *SecularAndHarmonic::mids$ = NULL;
      bool SecularAndHarmonic::live$ = false;

      jclass SecularAndHarmonic::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/SecularAndHarmonic");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7169a8c8a60b8b2c] = env->getMethodID(cls, "<init>", "(I[D)V");
          mids$[mid_addPoint_fdc72bfdba154d74] = env->getMethodID(cls, "addPoint", "(Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_addWeightedPoint_e13c2ecfa437b820] = env->getMethodID(cls, "addWeightedPoint", "(Lorg/orekit/time/AbsoluteDate;DD)V");
          mids$[mid_approximateAsPolynomialOnly_2ee769c2572ae0f8] = env->getMethodID(cls, "approximateAsPolynomialOnly", "(ILorg/orekit/time/AbsoluteDate;IILorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;D)[D");
          mids$[mid_fit_0fa09c18fee449d5] = env->getMethodID(cls, "fit", "()V");
          mids$[mid_getFittedParameters_60c7040667a7dc5c] = env->getMethodID(cls, "getFittedParameters", "()[D");
          mids$[mid_getHarmonicAmplitude_dff5885c2c873297] = env->getMethodID(cls, "getHarmonicAmplitude", "()D");
          mids$[mid_getPulsations_60c7040667a7dc5c] = env->getMethodID(cls, "getPulsations", "()[D");
          mids$[mid_getReferenceDate_85703d13e302437e] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getSecularDegree_570ce0828f81a2c1] = env->getMethodID(cls, "getSecularDegree", "()I");
          mids$[mid_meanDerivative_6e58be30d061ae49] = env->getMethodID(cls, "meanDerivative", "(Lorg/orekit/time/AbsoluteDate;II)D");
          mids$[mid_meanSecondDerivative_6e58be30d061ae49] = env->getMethodID(cls, "meanSecondDerivative", "(Lorg/orekit/time/AbsoluteDate;II)D");
          mids$[mid_meanValue_6e58be30d061ae49] = env->getMethodID(cls, "meanValue", "(Lorg/orekit/time/AbsoluteDate;II)D");
          mids$[mid_osculatingDerivative_bf1d7732f1acb697] = env->getMethodID(cls, "osculatingDerivative", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_osculatingSecondDerivative_bf1d7732f1acb697] = env->getMethodID(cls, "osculatingSecondDerivative", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_osculatingValue_bf1d7732f1acb697] = env->getMethodID(cls, "osculatingValue", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_resetFitting_ab5a86184bb74c69] = env->getMethodID(cls, "resetFitting", "(Lorg/orekit/time/AbsoluteDate;[D)V");
          mids$[mid_setConvergenceRMS_17db3a65980d3441] = env->getMethodID(cls, "setConvergenceRMS", "(D)V");
          mids$[mid_setMaxIter_99803b0791f320ff] = env->getMethodID(cls, "setMaxIter", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SecularAndHarmonic::SecularAndHarmonic(jint a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7169a8c8a60b8b2c, a0, a1.this$)) {}

      void SecularAndHarmonic::addPoint(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addPoint_fdc72bfdba154d74], a0.this$, a1);
      }

      void SecularAndHarmonic::addWeightedPoint(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addWeightedPoint_e13c2ecfa437b820], a0.this$, a1, a2);
      }

      JArray< jdouble > SecularAndHarmonic::approximateAsPolynomialOnly(jint a0, const ::org::orekit::time::AbsoluteDate & a1, jint a2, jint a3, const ::org::orekit::time::AbsoluteDate & a4, const ::org::orekit::time::AbsoluteDate & a5, jdouble a6) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_approximateAsPolynomialOnly_2ee769c2572ae0f8], a0, a1.this$, a2, a3, a4.this$, a5.this$, a6));
      }

      void SecularAndHarmonic::fit() const
      {
        env->callVoidMethod(this$, mids$[mid_fit_0fa09c18fee449d5]);
      }

      JArray< jdouble > SecularAndHarmonic::getFittedParameters() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getFittedParameters_60c7040667a7dc5c]));
      }

      jdouble SecularAndHarmonic::getHarmonicAmplitude() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHarmonicAmplitude_dff5885c2c873297]);
      }

      JArray< jdouble > SecularAndHarmonic::getPulsations() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getPulsations_60c7040667a7dc5c]));
      }

      ::org::orekit::time::AbsoluteDate SecularAndHarmonic::getReferenceDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceDate_85703d13e302437e]));
      }

      jint SecularAndHarmonic::getSecularDegree() const
      {
        return env->callIntMethod(this$, mids$[mid_getSecularDegree_570ce0828f81a2c1]);
      }

      jdouble SecularAndHarmonic::meanDerivative(const ::org::orekit::time::AbsoluteDate & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_meanDerivative_6e58be30d061ae49], a0.this$, a1, a2);
      }

      jdouble SecularAndHarmonic::meanSecondDerivative(const ::org::orekit::time::AbsoluteDate & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_meanSecondDerivative_6e58be30d061ae49], a0.this$, a1, a2);
      }

      jdouble SecularAndHarmonic::meanValue(const ::org::orekit::time::AbsoluteDate & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_meanValue_6e58be30d061ae49], a0.this$, a1, a2);
      }

      jdouble SecularAndHarmonic::osculatingDerivative(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_osculatingDerivative_bf1d7732f1acb697], a0.this$);
      }

      jdouble SecularAndHarmonic::osculatingSecondDerivative(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_osculatingSecondDerivative_bf1d7732f1acb697], a0.this$);
      }

      jdouble SecularAndHarmonic::osculatingValue(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_osculatingValue_bf1d7732f1acb697], a0.this$);
      }

      void SecularAndHarmonic::resetFitting(const ::org::orekit::time::AbsoluteDate & a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_resetFitting_ab5a86184bb74c69], a0.this$, a1.this$);
      }

      void SecularAndHarmonic::setConvergenceRMS(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setConvergenceRMS_17db3a65980d3441], a0);
      }

      void SecularAndHarmonic::setMaxIter(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMaxIter_99803b0791f320ff], a0);
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
      static PyObject *t_SecularAndHarmonic_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SecularAndHarmonic_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SecularAndHarmonic_init_(t_SecularAndHarmonic *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SecularAndHarmonic_addPoint(t_SecularAndHarmonic *self, PyObject *args);
      static PyObject *t_SecularAndHarmonic_addWeightedPoint(t_SecularAndHarmonic *self, PyObject *args);
      static PyObject *t_SecularAndHarmonic_approximateAsPolynomialOnly(t_SecularAndHarmonic *self, PyObject *args);
      static PyObject *t_SecularAndHarmonic_fit(t_SecularAndHarmonic *self);
      static PyObject *t_SecularAndHarmonic_getFittedParameters(t_SecularAndHarmonic *self);
      static PyObject *t_SecularAndHarmonic_getHarmonicAmplitude(t_SecularAndHarmonic *self);
      static PyObject *t_SecularAndHarmonic_getPulsations(t_SecularAndHarmonic *self);
      static PyObject *t_SecularAndHarmonic_getReferenceDate(t_SecularAndHarmonic *self);
      static PyObject *t_SecularAndHarmonic_getSecularDegree(t_SecularAndHarmonic *self);
      static PyObject *t_SecularAndHarmonic_meanDerivative(t_SecularAndHarmonic *self, PyObject *args);
      static PyObject *t_SecularAndHarmonic_meanSecondDerivative(t_SecularAndHarmonic *self, PyObject *args);
      static PyObject *t_SecularAndHarmonic_meanValue(t_SecularAndHarmonic *self, PyObject *args);
      static PyObject *t_SecularAndHarmonic_osculatingDerivative(t_SecularAndHarmonic *self, PyObject *arg);
      static PyObject *t_SecularAndHarmonic_osculatingSecondDerivative(t_SecularAndHarmonic *self, PyObject *arg);
      static PyObject *t_SecularAndHarmonic_osculatingValue(t_SecularAndHarmonic *self, PyObject *arg);
      static PyObject *t_SecularAndHarmonic_resetFitting(t_SecularAndHarmonic *self, PyObject *args);
      static PyObject *t_SecularAndHarmonic_setConvergenceRMS(t_SecularAndHarmonic *self, PyObject *arg);
      static PyObject *t_SecularAndHarmonic_setMaxIter(t_SecularAndHarmonic *self, PyObject *arg);
      static int t_SecularAndHarmonic_set__convergenceRMS(t_SecularAndHarmonic *self, PyObject *arg, void *data);
      static PyObject *t_SecularAndHarmonic_get__fittedParameters(t_SecularAndHarmonic *self, void *data);
      static PyObject *t_SecularAndHarmonic_get__harmonicAmplitude(t_SecularAndHarmonic *self, void *data);
      static int t_SecularAndHarmonic_set__maxIter(t_SecularAndHarmonic *self, PyObject *arg, void *data);
      static PyObject *t_SecularAndHarmonic_get__pulsations(t_SecularAndHarmonic *self, void *data);
      static PyObject *t_SecularAndHarmonic_get__referenceDate(t_SecularAndHarmonic *self, void *data);
      static PyObject *t_SecularAndHarmonic_get__secularDegree(t_SecularAndHarmonic *self, void *data);
      static PyGetSetDef t_SecularAndHarmonic__fields_[] = {
        DECLARE_SET_FIELD(t_SecularAndHarmonic, convergenceRMS),
        DECLARE_GET_FIELD(t_SecularAndHarmonic, fittedParameters),
        DECLARE_GET_FIELD(t_SecularAndHarmonic, harmonicAmplitude),
        DECLARE_SET_FIELD(t_SecularAndHarmonic, maxIter),
        DECLARE_GET_FIELD(t_SecularAndHarmonic, pulsations),
        DECLARE_GET_FIELD(t_SecularAndHarmonic, referenceDate),
        DECLARE_GET_FIELD(t_SecularAndHarmonic, secularDegree),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SecularAndHarmonic__methods_[] = {
        DECLARE_METHOD(t_SecularAndHarmonic, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SecularAndHarmonic, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SecularAndHarmonic, addPoint, METH_VARARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, addWeightedPoint, METH_VARARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, approximateAsPolynomialOnly, METH_VARARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, fit, METH_NOARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, getFittedParameters, METH_NOARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, getHarmonicAmplitude, METH_NOARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, getPulsations, METH_NOARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, getReferenceDate, METH_NOARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, getSecularDegree, METH_NOARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, meanDerivative, METH_VARARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, meanSecondDerivative, METH_VARARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, meanValue, METH_VARARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, osculatingDerivative, METH_O),
        DECLARE_METHOD(t_SecularAndHarmonic, osculatingSecondDerivative, METH_O),
        DECLARE_METHOD(t_SecularAndHarmonic, osculatingValue, METH_O),
        DECLARE_METHOD(t_SecularAndHarmonic, resetFitting, METH_VARARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, setConvergenceRMS, METH_O),
        DECLARE_METHOD(t_SecularAndHarmonic, setMaxIter, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SecularAndHarmonic)[] = {
        { Py_tp_methods, t_SecularAndHarmonic__methods_ },
        { Py_tp_init, (void *) t_SecularAndHarmonic_init_ },
        { Py_tp_getset, t_SecularAndHarmonic__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SecularAndHarmonic)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SecularAndHarmonic, t_SecularAndHarmonic, SecularAndHarmonic);

      void t_SecularAndHarmonic::install(PyObject *module)
      {
        installType(&PY_TYPE(SecularAndHarmonic), &PY_TYPE_DEF(SecularAndHarmonic), module, "SecularAndHarmonic", 0);
      }

      void t_SecularAndHarmonic::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SecularAndHarmonic), "class_", make_descriptor(SecularAndHarmonic::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SecularAndHarmonic), "wrapfn_", make_descriptor(t_SecularAndHarmonic::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SecularAndHarmonic), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SecularAndHarmonic_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SecularAndHarmonic::initializeClass, 1)))
          return NULL;
        return t_SecularAndHarmonic::wrap_Object(SecularAndHarmonic(((t_SecularAndHarmonic *) arg)->object.this$));
      }
      static PyObject *t_SecularAndHarmonic_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SecularAndHarmonic::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SecularAndHarmonic_init_(t_SecularAndHarmonic *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);
        SecularAndHarmonic object((jobject) NULL);

        if (!parseArgs(args, "I[D", &a0, &a1))
        {
          INT_CALL(object = SecularAndHarmonic(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SecularAndHarmonic_addPoint(t_SecularAndHarmonic *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble a1;

        if (!parseArgs(args, "kD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.addPoint(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addPoint", args);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_addWeightedPoint(t_SecularAndHarmonic *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble a1;
        jdouble a2;

        if (!parseArgs(args, "kDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.addWeightedPoint(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addWeightedPoint", args);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_approximateAsPolynomialOnly(t_SecularAndHarmonic *self, PyObject *args)
      {
        jint a0;
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        jint a2;
        jint a3;
        ::org::orekit::time::AbsoluteDate a4((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a5((jobject) NULL);
        jdouble a6;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "IkIIkkD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
        {
          OBJ_CALL(result = self->object.approximateAsPolynomialOnly(a0, a1, a2, a3, a4, a5, a6));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "approximateAsPolynomialOnly", args);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_fit(t_SecularAndHarmonic *self)
      {
        OBJ_CALL(self->object.fit());
        Py_RETURN_NONE;
      }

      static PyObject *t_SecularAndHarmonic_getFittedParameters(t_SecularAndHarmonic *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getFittedParameters());
        return result.wrap();
      }

      static PyObject *t_SecularAndHarmonic_getHarmonicAmplitude(t_SecularAndHarmonic *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getHarmonicAmplitude());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SecularAndHarmonic_getPulsations(t_SecularAndHarmonic *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPulsations());
        return result.wrap();
      }

      static PyObject *t_SecularAndHarmonic_getReferenceDate(t_SecularAndHarmonic *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getReferenceDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_SecularAndHarmonic_getSecularDegree(t_SecularAndHarmonic *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getSecularDegree());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_SecularAndHarmonic_meanDerivative(t_SecularAndHarmonic *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jint a1;
        jint a2;
        jdouble result;

        if (!parseArgs(args, "kII", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.meanDerivative(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "meanDerivative", args);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_meanSecondDerivative(t_SecularAndHarmonic *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jint a1;
        jint a2;
        jdouble result;

        if (!parseArgs(args, "kII", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.meanSecondDerivative(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "meanSecondDerivative", args);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_meanValue(t_SecularAndHarmonic *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jint a1;
        jint a2;
        jdouble result;

        if (!parseArgs(args, "kII", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.meanValue(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "meanValue", args);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_osculatingDerivative(t_SecularAndHarmonic *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.osculatingDerivative(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "osculatingDerivative", arg);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_osculatingSecondDerivative(t_SecularAndHarmonic *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.osculatingSecondDerivative(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "osculatingSecondDerivative", arg);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_osculatingValue(t_SecularAndHarmonic *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.osculatingValue(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "osculatingValue", arg);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_resetFitting(t_SecularAndHarmonic *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "k[D", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.resetFitting(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "resetFitting", args);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_setConvergenceRMS(t_SecularAndHarmonic *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setConvergenceRMS(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setConvergenceRMS", arg);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_setMaxIter(t_SecularAndHarmonic *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setMaxIter(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setMaxIter", arg);
        return NULL;
      }

      static int t_SecularAndHarmonic_set__convergenceRMS(t_SecularAndHarmonic *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setConvergenceRMS(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "convergenceRMS", arg);
        return -1;
      }

      static PyObject *t_SecularAndHarmonic_get__fittedParameters(t_SecularAndHarmonic *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getFittedParameters());
        return value.wrap();
      }

      static PyObject *t_SecularAndHarmonic_get__harmonicAmplitude(t_SecularAndHarmonic *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHarmonicAmplitude());
        return PyFloat_FromDouble((double) value);
      }

      static int t_SecularAndHarmonic_set__maxIter(t_SecularAndHarmonic *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setMaxIter(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "maxIter", arg);
        return -1;
      }

      static PyObject *t_SecularAndHarmonic_get__pulsations(t_SecularAndHarmonic *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPulsations());
        return value.wrap();
      }

      static PyObject *t_SecularAndHarmonic_get__referenceDate(t_SecularAndHarmonic *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getReferenceDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_SecularAndHarmonic_get__secularDegree(t_SecularAndHarmonic *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getSecularDegree());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/Binary64Field.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/util/Binary64.h"
#include "org/hipparchus/util/Binary64Field.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *Binary64Field::class$ = NULL;
      jmethodID *Binary64Field::mids$ = NULL;
      bool Binary64Field::live$ = false;

      jclass Binary64Field::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/Binary64Field");

          mids$ = new jmethodID[max_mid];
          mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getInstance_14507bc75861defc] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/util/Binary64Field;");
          mids$[mid_getOne_b1b326d1f24984aa] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_getRuntimeClass_7c16c5008b34b3db] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
          mids$[mid_getZero_b1b326d1f24984aa] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean Binary64Field::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
      }

      Binary64Field Binary64Field::getInstance()
      {
        jclass cls = env->getClass(initializeClass);
        return Binary64Field(env->callStaticObjectMethod(cls, mids$[mid_getInstance_14507bc75861defc]));
      }

      ::org::hipparchus::util::Binary64 Binary64Field::getOne() const
      {
        return ::org::hipparchus::util::Binary64(env->callObjectMethod(this$, mids$[mid_getOne_b1b326d1f24984aa]));
      }

      ::java::lang::Class Binary64Field::getRuntimeClass() const
      {
        return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_7c16c5008b34b3db]));
      }

      ::org::hipparchus::util::Binary64 Binary64Field::getZero() const
      {
        return ::org::hipparchus::util::Binary64(env->callObjectMethod(this$, mids$[mid_getZero_b1b326d1f24984aa]));
      }

      jint Binary64Field::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
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
      static PyObject *t_Binary64Field_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Binary64Field_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Binary64Field_equals(t_Binary64Field *self, PyObject *args);
      static PyObject *t_Binary64Field_getInstance(PyTypeObject *type);
      static PyObject *t_Binary64Field_getOne(t_Binary64Field *self);
      static PyObject *t_Binary64Field_getRuntimeClass(t_Binary64Field *self);
      static PyObject *t_Binary64Field_getZero(t_Binary64Field *self);
      static PyObject *t_Binary64Field_hashCode(t_Binary64Field *self, PyObject *args);
      static PyObject *t_Binary64Field_get__instance(t_Binary64Field *self, void *data);
      static PyObject *t_Binary64Field_get__one(t_Binary64Field *self, void *data);
      static PyObject *t_Binary64Field_get__runtimeClass(t_Binary64Field *self, void *data);
      static PyObject *t_Binary64Field_get__zero(t_Binary64Field *self, void *data);
      static PyGetSetDef t_Binary64Field__fields_[] = {
        DECLARE_GET_FIELD(t_Binary64Field, instance),
        DECLARE_GET_FIELD(t_Binary64Field, one),
        DECLARE_GET_FIELD(t_Binary64Field, runtimeClass),
        DECLARE_GET_FIELD(t_Binary64Field, zero),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Binary64Field__methods_[] = {
        DECLARE_METHOD(t_Binary64Field, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Binary64Field, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Binary64Field, equals, METH_VARARGS),
        DECLARE_METHOD(t_Binary64Field, getInstance, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_Binary64Field, getOne, METH_NOARGS),
        DECLARE_METHOD(t_Binary64Field, getRuntimeClass, METH_NOARGS),
        DECLARE_METHOD(t_Binary64Field, getZero, METH_NOARGS),
        DECLARE_METHOD(t_Binary64Field, hashCode, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Binary64Field)[] = {
        { Py_tp_methods, t_Binary64Field__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Binary64Field__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Binary64Field)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Binary64Field, t_Binary64Field, Binary64Field);

      void t_Binary64Field::install(PyObject *module)
      {
        installType(&PY_TYPE(Binary64Field), &PY_TYPE_DEF(Binary64Field), module, "Binary64Field", 0);
      }

      void t_Binary64Field::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64Field), "class_", make_descriptor(Binary64Field::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64Field), "wrapfn_", make_descriptor(t_Binary64Field::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64Field), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Binary64Field_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Binary64Field::initializeClass, 1)))
          return NULL;
        return t_Binary64Field::wrap_Object(Binary64Field(((t_Binary64Field *) arg)->object.this$));
      }
      static PyObject *t_Binary64Field_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Binary64Field::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Binary64Field_equals(t_Binary64Field *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(Binary64Field), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_Binary64Field_getInstance(PyTypeObject *type)
      {
        Binary64Field result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::util::Binary64Field::getInstance());
        return t_Binary64Field::wrap_Object(result);
      }

      static PyObject *t_Binary64Field_getOne(t_Binary64Field *self)
      {
        ::org::hipparchus::util::Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.getOne());
        return ::org::hipparchus::util::t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64Field_getRuntimeClass(t_Binary64Field *self)
      {
        ::java::lang::Class result((jobject) NULL);
        OBJ_CALL(result = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::util::PY_TYPE(Binary64));
      }

      static PyObject *t_Binary64Field_getZero(t_Binary64Field *self)
      {
        ::org::hipparchus::util::Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return ::org::hipparchus::util::t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64Field_hashCode(t_Binary64Field *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Binary64Field), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_Binary64Field_get__instance(t_Binary64Field *self, void *data)
      {
        Binary64Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getInstance());
        return t_Binary64Field::wrap_Object(value);
      }

      static PyObject *t_Binary64Field_get__one(t_Binary64Field *self, void *data)
      {
        ::org::hipparchus::util::Binary64 value((jobject) NULL);
        OBJ_CALL(value = self->object.getOne());
        return ::org::hipparchus::util::t_Binary64::wrap_Object(value);
      }

      static PyObject *t_Binary64Field_get__runtimeClass(t_Binary64Field *self, void *data)
      {
        ::java::lang::Class value((jobject) NULL);
        OBJ_CALL(value = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(value);
      }

      static PyObject *t_Binary64Field_get__zero(t_Binary64Field *self, void *data)
      {
        ::org::hipparchus::util::Binary64 value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return ::org::hipparchus::util::t_Binary64::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/ElevationDetector.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "org/orekit/propagation/events/ElevationDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/models/AtmosphericRefractionModel.h"
#include "org/orekit/utils/ElevationMask.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *ElevationDetector::class$ = NULL;
        jmethodID *ElevationDetector::mids$ = NULL;
        bool ElevationDetector::live$ = false;

        jclass ElevationDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/ElevationDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_359d9aed85301acb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/TopocentricFrame;)V");
            mids$[mid_init$_0f402cc32c5bccb2] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/frames/TopocentricFrame;)V");
            mids$[mid_g_432f3d328c15ec82] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getElevationMask_a2b53d9e5ddb8a2d] = env->getMethodID(cls, "getElevationMask", "()Lorg/orekit/utils/ElevationMask;");
            mids$[mid_getMinElevation_dff5885c2c873297] = env->getMethodID(cls, "getMinElevation", "()D");
            mids$[mid_getRefractionModel_d9410499a2583f14] = env->getMethodID(cls, "getRefractionModel", "()Lorg/orekit/models/AtmosphericRefractionModel;");
            mids$[mid_getTopocentricFrame_e17d4157ae504252] = env->getMethodID(cls, "getTopocentricFrame", "()Lorg/orekit/frames/TopocentricFrame;");
            mids$[mid_withConstantElevation_3700314417fec14a] = env->getMethodID(cls, "withConstantElevation", "(D)Lorg/orekit/propagation/events/ElevationDetector;");
            mids$[mid_withElevationMask_89c90a0821fff37b] = env->getMethodID(cls, "withElevationMask", "(Lorg/orekit/utils/ElevationMask;)Lorg/orekit/propagation/events/ElevationDetector;");
            mids$[mid_withRefraction_319adb60d2239e8e] = env->getMethodID(cls, "withRefraction", "(Lorg/orekit/models/AtmosphericRefractionModel;)Lorg/orekit/propagation/events/ElevationDetector;");
            mids$[mid_create_66b2a57911e02ec9] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/ElevationDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ElevationDetector::ElevationDetector(const ::org::orekit::frames::TopocentricFrame & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_359d9aed85301acb, a0.this$)) {}

        ElevationDetector::ElevationDetector(jdouble a0, jdouble a1, const ::org::orekit::frames::TopocentricFrame & a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_0f402cc32c5bccb2, a0, a1, a2.this$)) {}

        jdouble ElevationDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_432f3d328c15ec82], a0.this$);
        }

        ::org::orekit::utils::ElevationMask ElevationDetector::getElevationMask() const
        {
          return ::org::orekit::utils::ElevationMask(env->callObjectMethod(this$, mids$[mid_getElevationMask_a2b53d9e5ddb8a2d]));
        }

        jdouble ElevationDetector::getMinElevation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinElevation_dff5885c2c873297]);
        }

        ::org::orekit::models::AtmosphericRefractionModel ElevationDetector::getRefractionModel() const
        {
          return ::org::orekit::models::AtmosphericRefractionModel(env->callObjectMethod(this$, mids$[mid_getRefractionModel_d9410499a2583f14]));
        }

        ::org::orekit::frames::TopocentricFrame ElevationDetector::getTopocentricFrame() const
        {
          return ::org::orekit::frames::TopocentricFrame(env->callObjectMethod(this$, mids$[mid_getTopocentricFrame_e17d4157ae504252]));
        }

        ElevationDetector ElevationDetector::withConstantElevation(jdouble a0) const
        {
          return ElevationDetector(env->callObjectMethod(this$, mids$[mid_withConstantElevation_3700314417fec14a], a0));
        }

        ElevationDetector ElevationDetector::withElevationMask(const ::org::orekit::utils::ElevationMask & a0) const
        {
          return ElevationDetector(env->callObjectMethod(this$, mids$[mid_withElevationMask_89c90a0821fff37b], a0.this$));
        }

        ElevationDetector ElevationDetector::withRefraction(const ::org::orekit::models::AtmosphericRefractionModel & a0) const
        {
          return ElevationDetector(env->callObjectMethod(this$, mids$[mid_withRefraction_319adb60d2239e8e], a0.this$));
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
        static PyObject *t_ElevationDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ElevationDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ElevationDetector_of_(t_ElevationDetector *self, PyObject *args);
        static int t_ElevationDetector_init_(t_ElevationDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ElevationDetector_g(t_ElevationDetector *self, PyObject *args);
        static PyObject *t_ElevationDetector_getElevationMask(t_ElevationDetector *self);
        static PyObject *t_ElevationDetector_getMinElevation(t_ElevationDetector *self);
        static PyObject *t_ElevationDetector_getRefractionModel(t_ElevationDetector *self);
        static PyObject *t_ElevationDetector_getTopocentricFrame(t_ElevationDetector *self);
        static PyObject *t_ElevationDetector_withConstantElevation(t_ElevationDetector *self, PyObject *arg);
        static PyObject *t_ElevationDetector_withElevationMask(t_ElevationDetector *self, PyObject *arg);
        static PyObject *t_ElevationDetector_withRefraction(t_ElevationDetector *self, PyObject *arg);
        static PyObject *t_ElevationDetector_get__elevationMask(t_ElevationDetector *self, void *data);
        static PyObject *t_ElevationDetector_get__minElevation(t_ElevationDetector *self, void *data);
        static PyObject *t_ElevationDetector_get__refractionModel(t_ElevationDetector *self, void *data);
        static PyObject *t_ElevationDetector_get__topocentricFrame(t_ElevationDetector *self, void *data);
        static PyObject *t_ElevationDetector_get__parameters_(t_ElevationDetector *self, void *data);
        static PyGetSetDef t_ElevationDetector__fields_[] = {
          DECLARE_GET_FIELD(t_ElevationDetector, elevationMask),
          DECLARE_GET_FIELD(t_ElevationDetector, minElevation),
          DECLARE_GET_FIELD(t_ElevationDetector, refractionModel),
          DECLARE_GET_FIELD(t_ElevationDetector, topocentricFrame),
          DECLARE_GET_FIELD(t_ElevationDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ElevationDetector__methods_[] = {
          DECLARE_METHOD(t_ElevationDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ElevationDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ElevationDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_ElevationDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_ElevationDetector, getElevationMask, METH_NOARGS),
          DECLARE_METHOD(t_ElevationDetector, getMinElevation, METH_NOARGS),
          DECLARE_METHOD(t_ElevationDetector, getRefractionModel, METH_NOARGS),
          DECLARE_METHOD(t_ElevationDetector, getTopocentricFrame, METH_NOARGS),
          DECLARE_METHOD(t_ElevationDetector, withConstantElevation, METH_O),
          DECLARE_METHOD(t_ElevationDetector, withElevationMask, METH_O),
          DECLARE_METHOD(t_ElevationDetector, withRefraction, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ElevationDetector)[] = {
          { Py_tp_methods, t_ElevationDetector__methods_ },
          { Py_tp_init, (void *) t_ElevationDetector_init_ },
          { Py_tp_getset, t_ElevationDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ElevationDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(ElevationDetector, t_ElevationDetector, ElevationDetector);
        PyObject *t_ElevationDetector::wrap_Object(const ElevationDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ElevationDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ElevationDetector *self = (t_ElevationDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ElevationDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ElevationDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ElevationDetector *self = (t_ElevationDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ElevationDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(ElevationDetector), &PY_TYPE_DEF(ElevationDetector), module, "ElevationDetector", 0);
        }

        void t_ElevationDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationDetector), "class_", make_descriptor(ElevationDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationDetector), "wrapfn_", make_descriptor(t_ElevationDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ElevationDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ElevationDetector::initializeClass, 1)))
            return NULL;
          return t_ElevationDetector::wrap_Object(ElevationDetector(((t_ElevationDetector *) arg)->object.this$));
        }
        static PyObject *t_ElevationDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ElevationDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ElevationDetector_of_(t_ElevationDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ElevationDetector_init_(t_ElevationDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::frames::TopocentricFrame a0((jobject) NULL);
              ElevationDetector object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::frames::TopocentricFrame::initializeClass, &a0))
              {
                INT_CALL(object = ElevationDetector(a0));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ElevationDetector);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::frames::TopocentricFrame a2((jobject) NULL);
              ElevationDetector object((jobject) NULL);

              if (!parseArgs(args, "DDk", ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = ElevationDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ElevationDetector);
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

        static PyObject *t_ElevationDetector_g(t_ElevationDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ElevationDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_ElevationDetector_getElevationMask(t_ElevationDetector *self)
        {
          ::org::orekit::utils::ElevationMask result((jobject) NULL);
          OBJ_CALL(result = self->object.getElevationMask());
          return ::org::orekit::utils::t_ElevationMask::wrap_Object(result);
        }

        static PyObject *t_ElevationDetector_getMinElevation(t_ElevationDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinElevation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ElevationDetector_getRefractionModel(t_ElevationDetector *self)
        {
          ::org::orekit::models::AtmosphericRefractionModel result((jobject) NULL);
          OBJ_CALL(result = self->object.getRefractionModel());
          return ::org::orekit::models::t_AtmosphericRefractionModel::wrap_Object(result);
        }

        static PyObject *t_ElevationDetector_getTopocentricFrame(t_ElevationDetector *self)
        {
          ::org::orekit::frames::TopocentricFrame result((jobject) NULL);
          OBJ_CALL(result = self->object.getTopocentricFrame());
          return ::org::orekit::frames::t_TopocentricFrame::wrap_Object(result);
        }

        static PyObject *t_ElevationDetector_withConstantElevation(t_ElevationDetector *self, PyObject *arg)
        {
          jdouble a0;
          ElevationDetector result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.withConstantElevation(a0));
            return t_ElevationDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withConstantElevation", arg);
          return NULL;
        }

        static PyObject *t_ElevationDetector_withElevationMask(t_ElevationDetector *self, PyObject *arg)
        {
          ::org::orekit::utils::ElevationMask a0((jobject) NULL);
          ElevationDetector result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::utils::ElevationMask::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.withElevationMask(a0));
            return t_ElevationDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withElevationMask", arg);
          return NULL;
        }

        static PyObject *t_ElevationDetector_withRefraction(t_ElevationDetector *self, PyObject *arg)
        {
          ::org::orekit::models::AtmosphericRefractionModel a0((jobject) NULL);
          ElevationDetector result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::models::AtmosphericRefractionModel::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.withRefraction(a0));
            return t_ElevationDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withRefraction", arg);
          return NULL;
        }
        static PyObject *t_ElevationDetector_get__parameters_(t_ElevationDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_ElevationDetector_get__elevationMask(t_ElevationDetector *self, void *data)
        {
          ::org::orekit::utils::ElevationMask value((jobject) NULL);
          OBJ_CALL(value = self->object.getElevationMask());
          return ::org::orekit::utils::t_ElevationMask::wrap_Object(value);
        }

        static PyObject *t_ElevationDetector_get__minElevation(t_ElevationDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinElevation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ElevationDetector_get__refractionModel(t_ElevationDetector *self, void *data)
        {
          ::org::orekit::models::AtmosphericRefractionModel value((jobject) NULL);
          OBJ_CALL(value = self->object.getRefractionModel());
          return ::org::orekit::models::t_AtmosphericRefractionModel::wrap_Object(value);
        }

        static PyObject *t_ElevationDetector_get__topocentricFrame(t_ElevationDetector *self, void *data)
        {
          ::org::orekit::frames::TopocentricFrame value((jobject) NULL);
          OBJ_CALL(value = self->object.getTopocentricFrame());
          return ::org::orekit::frames::t_TopocentricFrame::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/Aem.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemSegment.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemSatelliteEphemeris.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *Aem::class$ = NULL;
              jmethodID *Aem::mids$ = NULL;
              bool Aem::live$ = false;
              ::java::lang::String *Aem::FORMAT_VERSION_KEY = NULL;
              ::java::lang::String *Aem::ROOT = NULL;

              jclass Aem::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/Aem");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_61c8f32249f88749] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;)V");
                  mids$[mid_getSatellites_6f5a75ccd8c04465] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  FORMAT_VERSION_KEY = new ::java::lang::String(env->getStaticObjectField(cls, "FORMAT_VERSION_KEY", "Ljava/lang/String;"));
                  ROOT = new ::java::lang::String(env->getStaticObjectField(cls, "ROOT", "Ljava/lang/String;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Aem::Aem(const ::org::orekit::files::ccsds::ndm::adm::AdmHeader & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_61c8f32249f88749, a0.this$, a1.this$, a2.this$, a3.this$)) {}

              ::java::util::Map Aem::getSatellites() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_6f5a75ccd8c04465]));
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
            namespace aem {
              static PyObject *t_Aem_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Aem_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Aem_of_(t_Aem *self, PyObject *args);
              static int t_Aem_init_(t_Aem *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Aem_getSatellites(t_Aem *self);
              static PyObject *t_Aem_get__satellites(t_Aem *self, void *data);
              static PyObject *t_Aem_get__parameters_(t_Aem *self, void *data);
              static PyGetSetDef t_Aem__fields_[] = {
                DECLARE_GET_FIELD(t_Aem, satellites),
                DECLARE_GET_FIELD(t_Aem, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Aem__methods_[] = {
                DECLARE_METHOD(t_Aem, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Aem, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Aem, of_, METH_VARARGS),
                DECLARE_METHOD(t_Aem, getSatellites, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Aem)[] = {
                { Py_tp_methods, t_Aem__methods_ },
                { Py_tp_init, (void *) t_Aem_init_ },
                { Py_tp_getset, t_Aem__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Aem)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
                NULL
              };

              DEFINE_TYPE(Aem, t_Aem, Aem);
              PyObject *t_Aem::wrap_Object(const Aem& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Aem::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Aem *self = (t_Aem *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Aem::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Aem::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Aem *self = (t_Aem *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Aem::install(PyObject *module)
              {
                installType(&PY_TYPE(Aem), &PY_TYPE_DEF(Aem), module, "Aem", 0);
              }

              void t_Aem::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Aem), "class_", make_descriptor(Aem::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Aem), "wrapfn_", make_descriptor(t_Aem::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Aem), "boxfn_", make_descriptor(boxObject));
                env->getClass(Aem::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(Aem), "FORMAT_VERSION_KEY", make_descriptor(j2p(*Aem::FORMAT_VERSION_KEY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Aem), "ROOT", make_descriptor(j2p(*Aem::ROOT)));
              }

              static PyObject *t_Aem_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Aem::initializeClass, 1)))
                  return NULL;
                return t_Aem::wrap_Object(Aem(((t_Aem *) arg)->object.this$));
              }
              static PyObject *t_Aem_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Aem::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Aem_of_(t_Aem *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Aem_init_(t_Aem *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::utils::IERSConventions a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::data::DataContext a3((jobject) NULL);
                Aem object((jobject) NULL);

                if (!parseArgs(args, "kKKk", ::org::orekit::files::ccsds::ndm::adm::AdmHeader::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3))
                {
                  INT_CALL(object = Aem(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::adm::PY_TYPE(AdmHeader);
                  self->parameters[1] = ::org::orekit::files::ccsds::ndm::adm::aem::PY_TYPE(AemSegment);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_Aem_getSatellites(t_Aem *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSatellites());
                return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::ndm::adm::aem::PY_TYPE(AemSatelliteEphemeris));
              }
              static PyObject *t_Aem_get__parameters_(t_Aem *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_Aem_get__satellites(t_Aem *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSatellites());
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
#include "org/orekit/files/ccsds/ndm/adm/apm/SpinStabilized.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *SpinStabilized::class$ = NULL;
              jmethodID *SpinStabilized::mids$ = NULL;
              bool SpinStabilized::live$ = false;

              jclass SpinStabilized::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/SpinStabilized");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getEndpoints_35bd4909c56b6915] = env->getMethodID(cls, "getEndpoints", "()Lorg/orekit/files/ccsds/ndm/adm/AttitudeEndpoints;");
                  mids$[mid_getMomentumAlpha_dff5885c2c873297] = env->getMethodID(cls, "getMomentumAlpha", "()D");
                  mids$[mid_getMomentumDelta_dff5885c2c873297] = env->getMethodID(cls, "getMomentumDelta", "()D");
                  mids$[mid_getNutation_dff5885c2c873297] = env->getMethodID(cls, "getNutation", "()D");
                  mids$[mid_getNutationPeriod_dff5885c2c873297] = env->getMethodID(cls, "getNutationPeriod", "()D");
                  mids$[mid_getNutationPhase_dff5885c2c873297] = env->getMethodID(cls, "getNutationPhase", "()D");
                  mids$[mid_getNutationVel_dff5885c2c873297] = env->getMethodID(cls, "getNutationVel", "()D");
                  mids$[mid_getSpinAlpha_dff5885c2c873297] = env->getMethodID(cls, "getSpinAlpha", "()D");
                  mids$[mid_getSpinAngle_dff5885c2c873297] = env->getMethodID(cls, "getSpinAngle", "()D");
                  mids$[mid_getSpinAngleVel_dff5885c2c873297] = env->getMethodID(cls, "getSpinAngleVel", "()D");
                  mids$[mid_getSpinDelta_dff5885c2c873297] = env->getMethodID(cls, "getSpinDelta", "()D");
                  mids$[mid_hasMomentum_b108b35ef48e27bd] = env->getMethodID(cls, "hasMomentum", "()Z");
                  mids$[mid_hasNutation_b108b35ef48e27bd] = env->getMethodID(cls, "hasNutation", "()Z");
                  mids$[mid_setMomentumAlpha_17db3a65980d3441] = env->getMethodID(cls, "setMomentumAlpha", "(D)V");
                  mids$[mid_setMomentumDelta_17db3a65980d3441] = env->getMethodID(cls, "setMomentumDelta", "(D)V");
                  mids$[mid_setNutation_17db3a65980d3441] = env->getMethodID(cls, "setNutation", "(D)V");
                  mids$[mid_setNutationPeriod_17db3a65980d3441] = env->getMethodID(cls, "setNutationPeriod", "(D)V");
                  mids$[mid_setNutationPhase_17db3a65980d3441] = env->getMethodID(cls, "setNutationPhase", "(D)V");
                  mids$[mid_setNutationVel_17db3a65980d3441] = env->getMethodID(cls, "setNutationVel", "(D)V");
                  mids$[mid_setSpinAlpha_17db3a65980d3441] = env->getMethodID(cls, "setSpinAlpha", "(D)V");
                  mids$[mid_setSpinAngle_17db3a65980d3441] = env->getMethodID(cls, "setSpinAngle", "(D)V");
                  mids$[mid_setSpinAngleVel_17db3a65980d3441] = env->getMethodID(cls, "setSpinAngleVel", "(D)V");
                  mids$[mid_setSpinDelta_17db3a65980d3441] = env->getMethodID(cls, "setSpinDelta", "(D)V");
                  mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SpinStabilized::SpinStabilized() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints SpinStabilized::getEndpoints() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints(env->callObjectMethod(this$, mids$[mid_getEndpoints_35bd4909c56b6915]));
              }

              jdouble SpinStabilized::getMomentumAlpha() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMomentumAlpha_dff5885c2c873297]);
              }

              jdouble SpinStabilized::getMomentumDelta() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMomentumDelta_dff5885c2c873297]);
              }

              jdouble SpinStabilized::getNutation() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getNutation_dff5885c2c873297]);
              }

              jdouble SpinStabilized::getNutationPeriod() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getNutationPeriod_dff5885c2c873297]);
              }

              jdouble SpinStabilized::getNutationPhase() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getNutationPhase_dff5885c2c873297]);
              }

              jdouble SpinStabilized::getNutationVel() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getNutationVel_dff5885c2c873297]);
              }

              jdouble SpinStabilized::getSpinAlpha() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSpinAlpha_dff5885c2c873297]);
              }

              jdouble SpinStabilized::getSpinAngle() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSpinAngle_dff5885c2c873297]);
              }

              jdouble SpinStabilized::getSpinAngleVel() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSpinAngleVel_dff5885c2c873297]);
              }

              jdouble SpinStabilized::getSpinDelta() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSpinDelta_dff5885c2c873297]);
              }

              jboolean SpinStabilized::hasMomentum() const
              {
                return env->callBooleanMethod(this$, mids$[mid_hasMomentum_b108b35ef48e27bd]);
              }

              jboolean SpinStabilized::hasNutation() const
              {
                return env->callBooleanMethod(this$, mids$[mid_hasNutation_b108b35ef48e27bd]);
              }

              void SpinStabilized::setMomentumAlpha(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMomentumAlpha_17db3a65980d3441], a0);
              }

              void SpinStabilized::setMomentumDelta(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMomentumDelta_17db3a65980d3441], a0);
              }

              void SpinStabilized::setNutation(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNutation_17db3a65980d3441], a0);
              }

              void SpinStabilized::setNutationPeriod(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNutationPeriod_17db3a65980d3441], a0);
              }

              void SpinStabilized::setNutationPhase(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNutationPhase_17db3a65980d3441], a0);
              }

              void SpinStabilized::setNutationVel(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNutationVel_17db3a65980d3441], a0);
              }

              void SpinStabilized::setSpinAlpha(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSpinAlpha_17db3a65980d3441], a0);
              }

              void SpinStabilized::setSpinAngle(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSpinAngle_17db3a65980d3441], a0);
              }

              void SpinStabilized::setSpinAngleVel(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSpinAngleVel_17db3a65980d3441], a0);
              }

              void SpinStabilized::setSpinDelta(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSpinDelta_17db3a65980d3441], a0);
              }

              void SpinStabilized::validate(jdouble a0) const
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
            namespace apm {
              static PyObject *t_SpinStabilized_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SpinStabilized_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SpinStabilized_init_(t_SpinStabilized *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SpinStabilized_getEndpoints(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getMomentumAlpha(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getMomentumDelta(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getNutation(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getNutationPeriod(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getNutationPhase(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getNutationVel(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getSpinAlpha(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getSpinAngle(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getSpinAngleVel(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getSpinDelta(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_hasMomentum(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_hasNutation(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_setMomentumAlpha(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_setMomentumDelta(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_setNutation(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_setNutationPeriod(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_setNutationPhase(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_setNutationVel(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_setSpinAlpha(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_setSpinAngle(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_setSpinAngleVel(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_setSpinDelta(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_validate(t_SpinStabilized *self, PyObject *args);
              static PyObject *t_SpinStabilized_get__endpoints(t_SpinStabilized *self, void *data);
              static PyObject *t_SpinStabilized_get__momentumAlpha(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__momentumAlpha(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyObject *t_SpinStabilized_get__momentumDelta(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__momentumDelta(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyObject *t_SpinStabilized_get__nutation(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__nutation(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyObject *t_SpinStabilized_get__nutationPeriod(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__nutationPeriod(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyObject *t_SpinStabilized_get__nutationPhase(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__nutationPhase(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyObject *t_SpinStabilized_get__nutationVel(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__nutationVel(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyObject *t_SpinStabilized_get__spinAlpha(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__spinAlpha(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyObject *t_SpinStabilized_get__spinAngle(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__spinAngle(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyObject *t_SpinStabilized_get__spinAngleVel(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__spinAngleVel(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyObject *t_SpinStabilized_get__spinDelta(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__spinDelta(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyGetSetDef t_SpinStabilized__fields_[] = {
                DECLARE_GET_FIELD(t_SpinStabilized, endpoints),
                DECLARE_GETSET_FIELD(t_SpinStabilized, momentumAlpha),
                DECLARE_GETSET_FIELD(t_SpinStabilized, momentumDelta),
                DECLARE_GETSET_FIELD(t_SpinStabilized, nutation),
                DECLARE_GETSET_FIELD(t_SpinStabilized, nutationPeriod),
                DECLARE_GETSET_FIELD(t_SpinStabilized, nutationPhase),
                DECLARE_GETSET_FIELD(t_SpinStabilized, nutationVel),
                DECLARE_GETSET_FIELD(t_SpinStabilized, spinAlpha),
                DECLARE_GETSET_FIELD(t_SpinStabilized, spinAngle),
                DECLARE_GETSET_FIELD(t_SpinStabilized, spinAngleVel),
                DECLARE_GETSET_FIELD(t_SpinStabilized, spinDelta),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SpinStabilized__methods_[] = {
                DECLARE_METHOD(t_SpinStabilized, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SpinStabilized, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SpinStabilized, getEndpoints, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getMomentumAlpha, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getMomentumDelta, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getNutation, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getNutationPeriod, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getNutationPhase, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getNutationVel, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getSpinAlpha, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getSpinAngle, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getSpinAngleVel, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getSpinDelta, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, hasMomentum, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, hasNutation, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, setMomentumAlpha, METH_O),
                DECLARE_METHOD(t_SpinStabilized, setMomentumDelta, METH_O),
                DECLARE_METHOD(t_SpinStabilized, setNutation, METH_O),
                DECLARE_METHOD(t_SpinStabilized, setNutationPeriod, METH_O),
                DECLARE_METHOD(t_SpinStabilized, setNutationPhase, METH_O),
                DECLARE_METHOD(t_SpinStabilized, setNutationVel, METH_O),
                DECLARE_METHOD(t_SpinStabilized, setSpinAlpha, METH_O),
                DECLARE_METHOD(t_SpinStabilized, setSpinAngle, METH_O),
                DECLARE_METHOD(t_SpinStabilized, setSpinAngleVel, METH_O),
                DECLARE_METHOD(t_SpinStabilized, setSpinDelta, METH_O),
                DECLARE_METHOD(t_SpinStabilized, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SpinStabilized)[] = {
                { Py_tp_methods, t_SpinStabilized__methods_ },
                { Py_tp_init, (void *) t_SpinStabilized_init_ },
                { Py_tp_getset, t_SpinStabilized__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SpinStabilized)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(SpinStabilized, t_SpinStabilized, SpinStabilized);

              void t_SpinStabilized::install(PyObject *module)
              {
                installType(&PY_TYPE(SpinStabilized), &PY_TYPE_DEF(SpinStabilized), module, "SpinStabilized", 0);
              }

              void t_SpinStabilized::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilized), "class_", make_descriptor(SpinStabilized::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilized), "wrapfn_", make_descriptor(t_SpinStabilized::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilized), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SpinStabilized_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SpinStabilized::initializeClass, 1)))
                  return NULL;
                return t_SpinStabilized::wrap_Object(SpinStabilized(((t_SpinStabilized *) arg)->object.this$));
              }
              static PyObject *t_SpinStabilized_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SpinStabilized::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SpinStabilized_init_(t_SpinStabilized *self, PyObject *args, PyObject *kwds)
              {
                SpinStabilized object((jobject) NULL);

                INT_CALL(object = SpinStabilized());
                self->object = object;

                return 0;
              }

              static PyObject *t_SpinStabilized_getEndpoints(t_SpinStabilized *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints result((jobject) NULL);
                OBJ_CALL(result = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(result);
              }

              static PyObject *t_SpinStabilized_getMomentumAlpha(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMomentumAlpha());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_getMomentumDelta(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMomentumDelta());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_getNutation(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getNutation());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_getNutationPeriod(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getNutationPeriod());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_getNutationPhase(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getNutationPhase());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_getNutationVel(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getNutationVel());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_getSpinAlpha(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSpinAlpha());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_getSpinAngle(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSpinAngle());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_getSpinAngleVel(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSpinAngleVel());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_getSpinDelta(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSpinDelta());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_hasMomentum(t_SpinStabilized *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.hasMomentum());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_SpinStabilized_hasNutation(t_SpinStabilized *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.hasNutation());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_SpinStabilized_setMomentumAlpha(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMomentumAlpha(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMomentumAlpha", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_setMomentumDelta(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMomentumDelta(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMomentumDelta", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_setNutation(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setNutation(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNutation", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_setNutationPeriod(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setNutationPeriod(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNutationPeriod", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_setNutationPhase(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setNutationPhase(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNutationPhase", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_setNutationVel(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setNutationVel(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNutationVel", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_setSpinAlpha(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSpinAlpha(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSpinAlpha", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_setSpinAngle(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSpinAngle(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSpinAngle", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_setSpinAngleVel(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSpinAngleVel(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSpinAngleVel", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_setSpinDelta(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSpinDelta(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSpinDelta", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_validate(t_SpinStabilized *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(SpinStabilized), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_SpinStabilized_get__endpoints(t_SpinStabilized *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints value((jobject) NULL);
                OBJ_CALL(value = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(value);
              }

              static PyObject *t_SpinStabilized_get__momentumAlpha(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMomentumAlpha());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__momentumAlpha(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMomentumAlpha(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "momentumAlpha", arg);
                return -1;
              }

              static PyObject *t_SpinStabilized_get__momentumDelta(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMomentumDelta());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__momentumDelta(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMomentumDelta(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "momentumDelta", arg);
                return -1;
              }

              static PyObject *t_SpinStabilized_get__nutation(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getNutation());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__nutation(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setNutation(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nutation", arg);
                return -1;
              }

              static PyObject *t_SpinStabilized_get__nutationPeriod(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getNutationPeriod());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__nutationPeriod(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setNutationPeriod(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nutationPeriod", arg);
                return -1;
              }

              static PyObject *t_SpinStabilized_get__nutationPhase(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getNutationPhase());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__nutationPhase(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setNutationPhase(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nutationPhase", arg);
                return -1;
              }

              static PyObject *t_SpinStabilized_get__nutationVel(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getNutationVel());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__nutationVel(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setNutationVel(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nutationVel", arg);
                return -1;
              }

              static PyObject *t_SpinStabilized_get__spinAlpha(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSpinAlpha());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__spinAlpha(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSpinAlpha(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "spinAlpha", arg);
                return -1;
              }

              static PyObject *t_SpinStabilized_get__spinAngle(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSpinAngle());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__spinAngle(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSpinAngle(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "spinAngle", arg);
                return -1;
              }

              static PyObject *t_SpinStabilized_get__spinAngleVel(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSpinAngleVel());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__spinAngleVel(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSpinAngleVel(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "spinAngleVel", arg);
                return -1;
              }

              static PyObject *t_SpinStabilized_get__spinDelta(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSpinDelta());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__spinDelta(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSpinDelta(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "spinDelta", arg);
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/Perturbations.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ShadowModel.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *Perturbations::class$ = NULL;
              jmethodID *Perturbations::mids$ = NULL;
              bool Perturbations::live$ = false;

              jclass Perturbations::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/Perturbations");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_6fb41d4bb0f65842] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBodies;)V");
                  mids$[mid_getAlbedoGridSize_570ce0828f81a2c1] = env->getMethodID(cls, "getAlbedoGridSize", "()I");
                  mids$[mid_getAlbedoModel_11b109bd155ca898] = env->getMethodID(cls, "getAlbedoModel", "()Ljava/lang/String;");
                  mids$[mid_getAtmosphericModel_11b109bd155ca898] = env->getMethodID(cls, "getAtmosphericModel", "()Ljava/lang/String;");
                  mids$[mid_getCentralBodyRotation_dff5885c2c873297] = env->getMethodID(cls, "getCentralBodyRotation", "()D");
                  mids$[mid_getEquatorialRadius_dff5885c2c873297] = env->getMethodID(cls, "getEquatorialRadius", "()D");
                  mids$[mid_getFixedF10P7_dff5885c2c873297] = env->getMethodID(cls, "getFixedF10P7", "()D");
                  mids$[mid_getFixedF10P7Mean_dff5885c2c873297] = env->getMethodID(cls, "getFixedF10P7Mean", "()D");
                  mids$[mid_getFixedGeomagneticAp_dff5885c2c873297] = env->getMethodID(cls, "getFixedGeomagneticAp", "()D");
                  mids$[mid_getFixedGeomagneticDst_dff5885c2c873297] = env->getMethodID(cls, "getFixedGeomagneticDst", "()D");
                  mids$[mid_getFixedGeomagneticKp_dff5885c2c873297] = env->getMethodID(cls, "getFixedGeomagneticKp", "()D");
                  mids$[mid_getFixedM10P7_dff5885c2c873297] = env->getMethodID(cls, "getFixedM10P7", "()D");
                  mids$[mid_getFixedM10P7Mean_dff5885c2c873297] = env->getMethodID(cls, "getFixedM10P7Mean", "()D");
                  mids$[mid_getFixedS10P7_dff5885c2c873297] = env->getMethodID(cls, "getFixedS10P7", "()D");
                  mids$[mid_getFixedS10P7Mean_dff5885c2c873297] = env->getMethodID(cls, "getFixedS10P7Mean", "()D");
                  mids$[mid_getFixedY10P7_dff5885c2c873297] = env->getMethodID(cls, "getFixedY10P7", "()D");
                  mids$[mid_getFixedY10P7Mean_dff5885c2c873297] = env->getMethodID(cls, "getFixedY10P7Mean", "()D");
                  mids$[mid_getGm_dff5885c2c873297] = env->getMethodID(cls, "getGm", "()D");
                  mids$[mid_getGravityDegree_570ce0828f81a2c1] = env->getMethodID(cls, "getGravityDegree", "()I");
                  mids$[mid_getGravityModel_11b109bd155ca898] = env->getMethodID(cls, "getGravityModel", "()Ljava/lang/String;");
                  mids$[mid_getGravityOrder_570ce0828f81a2c1] = env->getMethodID(cls, "getGravityOrder", "()I");
                  mids$[mid_getInterpMethodSW_11b109bd155ca898] = env->getMethodID(cls, "getInterpMethodSW", "()Ljava/lang/String;");
                  mids$[mid_getNBodyPerturbations_2afa36052df4765d] = env->getMethodID(cls, "getNBodyPerturbations", "()Ljava/util/List;");
                  mids$[mid_getOblateFlattening_dff5885c2c873297] = env->getMethodID(cls, "getOblateFlattening", "()D");
                  mids$[mid_getOceanTidesModel_11b109bd155ca898] = env->getMethodID(cls, "getOceanTidesModel", "()Ljava/lang/String;");
                  mids$[mid_getReductionTheory_11b109bd155ca898] = env->getMethodID(cls, "getReductionTheory", "()Ljava/lang/String;");
                  mids$[mid_getShadowBodies_2afa36052df4765d] = env->getMethodID(cls, "getShadowBodies", "()Ljava/util/List;");
                  mids$[mid_getShadowModel_e596dcc96215ef0a] = env->getMethodID(cls, "getShadowModel", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/ShadowModel;");
                  mids$[mid_getSolidTidesModel_11b109bd155ca898] = env->getMethodID(cls, "getSolidTidesModel", "()Ljava/lang/String;");
                  mids$[mid_getSpaceWeatherEpoch_85703d13e302437e] = env->getMethodID(cls, "getSpaceWeatherEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getSpaceWeatherSource_11b109bd155ca898] = env->getMethodID(cls, "getSpaceWeatherSource", "()Ljava/lang/String;");
                  mids$[mid_getSrpModel_11b109bd155ca898] = env->getMethodID(cls, "getSrpModel", "()Ljava/lang/String;");
                  mids$[mid_setAlbedoGridSize_99803b0791f320ff] = env->getMethodID(cls, "setAlbedoGridSize", "(I)V");
                  mids$[mid_setAlbedoModel_d0bc48d5b00dc40c] = env->getMethodID(cls, "setAlbedoModel", "(Ljava/lang/String;)V");
                  mids$[mid_setAtmosphericModel_d0bc48d5b00dc40c] = env->getMethodID(cls, "setAtmosphericModel", "(Ljava/lang/String;)V");
                  mids$[mid_setCentralBodyRotation_17db3a65980d3441] = env->getMethodID(cls, "setCentralBodyRotation", "(D)V");
                  mids$[mid_setEquatorialRadius_17db3a65980d3441] = env->getMethodID(cls, "setEquatorialRadius", "(D)V");
                  mids$[mid_setFixedF10P7_17db3a65980d3441] = env->getMethodID(cls, "setFixedF10P7", "(D)V");
                  mids$[mid_setFixedF10P7Mean_17db3a65980d3441] = env->getMethodID(cls, "setFixedF10P7Mean", "(D)V");
                  mids$[mid_setFixedGeomagneticAp_17db3a65980d3441] = env->getMethodID(cls, "setFixedGeomagneticAp", "(D)V");
                  mids$[mid_setFixedGeomagneticDst_17db3a65980d3441] = env->getMethodID(cls, "setFixedGeomagneticDst", "(D)V");
                  mids$[mid_setFixedGeomagneticKp_17db3a65980d3441] = env->getMethodID(cls, "setFixedGeomagneticKp", "(D)V");
                  mids$[mid_setFixedM10P7_17db3a65980d3441] = env->getMethodID(cls, "setFixedM10P7", "(D)V");
                  mids$[mid_setFixedM10P7Mean_17db3a65980d3441] = env->getMethodID(cls, "setFixedM10P7Mean", "(D)V");
                  mids$[mid_setFixedS10P7_17db3a65980d3441] = env->getMethodID(cls, "setFixedS10P7", "(D)V");
                  mids$[mid_setFixedS10P7Mean_17db3a65980d3441] = env->getMethodID(cls, "setFixedS10P7Mean", "(D)V");
                  mids$[mid_setFixedY10P7_17db3a65980d3441] = env->getMethodID(cls, "setFixedY10P7", "(D)V");
                  mids$[mid_setFixedY10P7Mean_17db3a65980d3441] = env->getMethodID(cls, "setFixedY10P7Mean", "(D)V");
                  mids$[mid_setGm_17db3a65980d3441] = env->getMethodID(cls, "setGm", "(D)V");
                  mids$[mid_setGravityModel_04eb5531e9227c93] = env->getMethodID(cls, "setGravityModel", "(Ljava/lang/String;II)V");
                  mids$[mid_setInterpMethodSW_d0bc48d5b00dc40c] = env->getMethodID(cls, "setInterpMethodSW", "(Ljava/lang/String;)V");
                  mids$[mid_setNBodyPerturbations_de3e021e7266b71e] = env->getMethodID(cls, "setNBodyPerturbations", "(Ljava/util/List;)V");
                  mids$[mid_setOblateFlattening_17db3a65980d3441] = env->getMethodID(cls, "setOblateFlattening", "(D)V");
                  mids$[mid_setOceanTidesModel_d0bc48d5b00dc40c] = env->getMethodID(cls, "setOceanTidesModel", "(Ljava/lang/String;)V");
                  mids$[mid_setReductionTheory_d0bc48d5b00dc40c] = env->getMethodID(cls, "setReductionTheory", "(Ljava/lang/String;)V");
                  mids$[mid_setShadowBodies_de3e021e7266b71e] = env->getMethodID(cls, "setShadowBodies", "(Ljava/util/List;)V");
                  mids$[mid_setShadowModel_d9822cf38c494ae7] = env->getMethodID(cls, "setShadowModel", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/ShadowModel;)V");
                  mids$[mid_setSolidTidesModel_d0bc48d5b00dc40c] = env->getMethodID(cls, "setSolidTidesModel", "(Ljava/lang/String;)V");
                  mids$[mid_setSpaceWeatherEpoch_600a2a61652bc473] = env->getMethodID(cls, "setSpaceWeatherEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setSpaceWeatherSource_d0bc48d5b00dc40c] = env->getMethodID(cls, "setSpaceWeatherSource", "(Ljava/lang/String;)V");
                  mids$[mid_setSrpModel_d0bc48d5b00dc40c] = env->getMethodID(cls, "setSrpModel", "(Ljava/lang/String;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Perturbations::Perturbations(const ::org::orekit::bodies::CelestialBodies & a0) : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_6fb41d4bb0f65842, a0.this$)) {}

              jint Perturbations::getAlbedoGridSize() const
              {
                return env->callIntMethod(this$, mids$[mid_getAlbedoGridSize_570ce0828f81a2c1]);
              }

              ::java::lang::String Perturbations::getAlbedoModel() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAlbedoModel_11b109bd155ca898]));
              }

              ::java::lang::String Perturbations::getAtmosphericModel() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAtmosphericModel_11b109bd155ca898]));
              }

              jdouble Perturbations::getCentralBodyRotation() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getCentralBodyRotation_dff5885c2c873297]);
              }

              jdouble Perturbations::getEquatorialRadius() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getEquatorialRadius_dff5885c2c873297]);
              }

              jdouble Perturbations::getFixedF10P7() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedF10P7_dff5885c2c873297]);
              }

              jdouble Perturbations::getFixedF10P7Mean() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedF10P7Mean_dff5885c2c873297]);
              }

              jdouble Perturbations::getFixedGeomagneticAp() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedGeomagneticAp_dff5885c2c873297]);
              }

              jdouble Perturbations::getFixedGeomagneticDst() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedGeomagneticDst_dff5885c2c873297]);
              }

              jdouble Perturbations::getFixedGeomagneticKp() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedGeomagneticKp_dff5885c2c873297]);
              }

              jdouble Perturbations::getFixedM10P7() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedM10P7_dff5885c2c873297]);
              }

              jdouble Perturbations::getFixedM10P7Mean() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedM10P7Mean_dff5885c2c873297]);
              }

              jdouble Perturbations::getFixedS10P7() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedS10P7_dff5885c2c873297]);
              }

              jdouble Perturbations::getFixedS10P7Mean() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedS10P7Mean_dff5885c2c873297]);
              }

              jdouble Perturbations::getFixedY10P7() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedY10P7_dff5885c2c873297]);
              }

              jdouble Perturbations::getFixedY10P7Mean() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFixedY10P7Mean_dff5885c2c873297]);
              }

              jdouble Perturbations::getGm() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getGm_dff5885c2c873297]);
              }

              jint Perturbations::getGravityDegree() const
              {
                return env->callIntMethod(this$, mids$[mid_getGravityDegree_570ce0828f81a2c1]);
              }

              ::java::lang::String Perturbations::getGravityModel() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getGravityModel_11b109bd155ca898]));
              }

              jint Perturbations::getGravityOrder() const
              {
                return env->callIntMethod(this$, mids$[mid_getGravityOrder_570ce0828f81a2c1]);
              }

              ::java::lang::String Perturbations::getInterpMethodSW() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInterpMethodSW_11b109bd155ca898]));
              }

              ::java::util::List Perturbations::getNBodyPerturbations() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getNBodyPerturbations_2afa36052df4765d]));
              }

              jdouble Perturbations::getOblateFlattening() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getOblateFlattening_dff5885c2c873297]);
              }

              ::java::lang::String Perturbations::getOceanTidesModel() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOceanTidesModel_11b109bd155ca898]));
              }

              ::java::lang::String Perturbations::getReductionTheory() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getReductionTheory_11b109bd155ca898]));
              }

              ::java::util::List Perturbations::getShadowBodies() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getShadowBodies_2afa36052df4765d]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel Perturbations::getShadowModel() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel(env->callObjectMethod(this$, mids$[mid_getShadowModel_e596dcc96215ef0a]));
              }

              ::java::lang::String Perturbations::getSolidTidesModel() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSolidTidesModel_11b109bd155ca898]));
              }

              ::org::orekit::time::AbsoluteDate Perturbations::getSpaceWeatherEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getSpaceWeatherEpoch_85703d13e302437e]));
              }

              ::java::lang::String Perturbations::getSpaceWeatherSource() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSpaceWeatherSource_11b109bd155ca898]));
              }

              ::java::lang::String Perturbations::getSrpModel() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSrpModel_11b109bd155ca898]));
              }

              void Perturbations::setAlbedoGridSize(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAlbedoGridSize_99803b0791f320ff], a0);
              }

              void Perturbations::setAlbedoModel(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAlbedoModel_d0bc48d5b00dc40c], a0.this$);
              }

              void Perturbations::setAtmosphericModel(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAtmosphericModel_d0bc48d5b00dc40c], a0.this$);
              }

              void Perturbations::setCentralBodyRotation(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCentralBodyRotation_17db3a65980d3441], a0);
              }

              void Perturbations::setEquatorialRadius(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEquatorialRadius_17db3a65980d3441], a0);
              }

              void Perturbations::setFixedF10P7(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedF10P7_17db3a65980d3441], a0);
              }

              void Perturbations::setFixedF10P7Mean(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedF10P7Mean_17db3a65980d3441], a0);
              }

              void Perturbations::setFixedGeomagneticAp(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedGeomagneticAp_17db3a65980d3441], a0);
              }

              void Perturbations::setFixedGeomagneticDst(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedGeomagneticDst_17db3a65980d3441], a0);
              }

              void Perturbations::setFixedGeomagneticKp(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedGeomagneticKp_17db3a65980d3441], a0);
              }

              void Perturbations::setFixedM10P7(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedM10P7_17db3a65980d3441], a0);
              }

              void Perturbations::setFixedM10P7Mean(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedM10P7Mean_17db3a65980d3441], a0);
              }

              void Perturbations::setFixedS10P7(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedS10P7_17db3a65980d3441], a0);
              }

              void Perturbations::setFixedS10P7Mean(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedS10P7Mean_17db3a65980d3441], a0);
              }

              void Perturbations::setFixedY10P7(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedY10P7_17db3a65980d3441], a0);
              }

              void Perturbations::setFixedY10P7Mean(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFixedY10P7Mean_17db3a65980d3441], a0);
              }

              void Perturbations::setGm(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGm_17db3a65980d3441], a0);
              }

              void Perturbations::setGravityModel(const ::java::lang::String & a0, jint a1, jint a2) const
              {
                env->callVoidMethod(this$, mids$[mid_setGravityModel_04eb5531e9227c93], a0.this$, a1, a2);
              }

              void Perturbations::setInterpMethodSW(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInterpMethodSW_d0bc48d5b00dc40c], a0.this$);
              }

              void Perturbations::setNBodyPerturbations(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNBodyPerturbations_de3e021e7266b71e], a0.this$);
              }

              void Perturbations::setOblateFlattening(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOblateFlattening_17db3a65980d3441], a0);
              }

              void Perturbations::setOceanTidesModel(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOceanTidesModel_d0bc48d5b00dc40c], a0.this$);
              }

              void Perturbations::setReductionTheory(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setReductionTheory_d0bc48d5b00dc40c], a0.this$);
              }

              void Perturbations::setShadowBodies(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setShadowBodies_de3e021e7266b71e], a0.this$);
              }

              void Perturbations::setShadowModel(const ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setShadowModel_d9822cf38c494ae7], a0.this$);
              }

              void Perturbations::setSolidTidesModel(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSolidTidesModel_d0bc48d5b00dc40c], a0.this$);
              }

              void Perturbations::setSpaceWeatherEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSpaceWeatherEpoch_600a2a61652bc473], a0.this$);
              }

              void Perturbations::setSpaceWeatherSource(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSpaceWeatherSource_d0bc48d5b00dc40c], a0.this$);
              }

              void Perturbations::setSrpModel(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSrpModel_d0bc48d5b00dc40c], a0.this$);
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
              static PyObject *t_Perturbations_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Perturbations_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Perturbations_init_(t_Perturbations *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Perturbations_getAlbedoGridSize(t_Perturbations *self);
              static PyObject *t_Perturbations_getAlbedoModel(t_Perturbations *self);
              static PyObject *t_Perturbations_getAtmosphericModel(t_Perturbations *self);
              static PyObject *t_Perturbations_getCentralBodyRotation(t_Perturbations *self);
              static PyObject *t_Perturbations_getEquatorialRadius(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedF10P7(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedF10P7Mean(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedGeomagneticAp(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedGeomagneticDst(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedGeomagneticKp(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedM10P7(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedM10P7Mean(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedS10P7(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedS10P7Mean(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedY10P7(t_Perturbations *self);
              static PyObject *t_Perturbations_getFixedY10P7Mean(t_Perturbations *self);
              static PyObject *t_Perturbations_getGm(t_Perturbations *self);
              static PyObject *t_Perturbations_getGravityDegree(t_Perturbations *self);
              static PyObject *t_Perturbations_getGravityModel(t_Perturbations *self);
              static PyObject *t_Perturbations_getGravityOrder(t_Perturbations *self);
              static PyObject *t_Perturbations_getInterpMethodSW(t_Perturbations *self);
              static PyObject *t_Perturbations_getNBodyPerturbations(t_Perturbations *self);
              static PyObject *t_Perturbations_getOblateFlattening(t_Perturbations *self);
              static PyObject *t_Perturbations_getOceanTidesModel(t_Perturbations *self);
              static PyObject *t_Perturbations_getReductionTheory(t_Perturbations *self);
              static PyObject *t_Perturbations_getShadowBodies(t_Perturbations *self);
              static PyObject *t_Perturbations_getShadowModel(t_Perturbations *self);
              static PyObject *t_Perturbations_getSolidTidesModel(t_Perturbations *self);
              static PyObject *t_Perturbations_getSpaceWeatherEpoch(t_Perturbations *self);
              static PyObject *t_Perturbations_getSpaceWeatherSource(t_Perturbations *self);
              static PyObject *t_Perturbations_getSrpModel(t_Perturbations *self);
              static PyObject *t_Perturbations_setAlbedoGridSize(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setAlbedoModel(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setAtmosphericModel(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setCentralBodyRotation(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setEquatorialRadius(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedF10P7(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedF10P7Mean(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedGeomagneticAp(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedGeomagneticDst(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedGeomagneticKp(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedM10P7(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedM10P7Mean(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedS10P7(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedS10P7Mean(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedY10P7(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setFixedY10P7Mean(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setGm(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setGravityModel(t_Perturbations *self, PyObject *args);
              static PyObject *t_Perturbations_setInterpMethodSW(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setNBodyPerturbations(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setOblateFlattening(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setOceanTidesModel(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setReductionTheory(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setShadowBodies(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setShadowModel(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setSolidTidesModel(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setSpaceWeatherEpoch(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setSpaceWeatherSource(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_setSrpModel(t_Perturbations *self, PyObject *arg);
              static PyObject *t_Perturbations_get__albedoGridSize(t_Perturbations *self, void *data);
              static int t_Perturbations_set__albedoGridSize(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__albedoModel(t_Perturbations *self, void *data);
              static int t_Perturbations_set__albedoModel(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__atmosphericModel(t_Perturbations *self, void *data);
              static int t_Perturbations_set__atmosphericModel(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__centralBodyRotation(t_Perturbations *self, void *data);
              static int t_Perturbations_set__centralBodyRotation(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__equatorialRadius(t_Perturbations *self, void *data);
              static int t_Perturbations_set__equatorialRadius(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedF10P7(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedF10P7(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedF10P7Mean(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedF10P7Mean(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedGeomagneticAp(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedGeomagneticAp(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedGeomagneticDst(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedGeomagneticDst(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedGeomagneticKp(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedGeomagneticKp(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedM10P7(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedM10P7(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedM10P7Mean(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedM10P7Mean(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedS10P7(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedS10P7(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedS10P7Mean(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedS10P7Mean(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedY10P7(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedY10P7(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__fixedY10P7Mean(t_Perturbations *self, void *data);
              static int t_Perturbations_set__fixedY10P7Mean(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__gm(t_Perturbations *self, void *data);
              static int t_Perturbations_set__gm(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__gravityDegree(t_Perturbations *self, void *data);
              static PyObject *t_Perturbations_get__gravityModel(t_Perturbations *self, void *data);
              static PyObject *t_Perturbations_get__gravityOrder(t_Perturbations *self, void *data);
              static PyObject *t_Perturbations_get__interpMethodSW(t_Perturbations *self, void *data);
              static int t_Perturbations_set__interpMethodSW(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__nBodyPerturbations(t_Perturbations *self, void *data);
              static int t_Perturbations_set__nBodyPerturbations(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__oblateFlattening(t_Perturbations *self, void *data);
              static int t_Perturbations_set__oblateFlattening(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__oceanTidesModel(t_Perturbations *self, void *data);
              static int t_Perturbations_set__oceanTidesModel(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__reductionTheory(t_Perturbations *self, void *data);
              static int t_Perturbations_set__reductionTheory(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__shadowBodies(t_Perturbations *self, void *data);
              static int t_Perturbations_set__shadowBodies(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__shadowModel(t_Perturbations *self, void *data);
              static int t_Perturbations_set__shadowModel(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__solidTidesModel(t_Perturbations *self, void *data);
              static int t_Perturbations_set__solidTidesModel(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__spaceWeatherEpoch(t_Perturbations *self, void *data);
              static int t_Perturbations_set__spaceWeatherEpoch(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__spaceWeatherSource(t_Perturbations *self, void *data);
              static int t_Perturbations_set__spaceWeatherSource(t_Perturbations *self, PyObject *arg, void *data);
              static PyObject *t_Perturbations_get__srpModel(t_Perturbations *self, void *data);
              static int t_Perturbations_set__srpModel(t_Perturbations *self, PyObject *arg, void *data);
              static PyGetSetDef t_Perturbations__fields_[] = {
                DECLARE_GETSET_FIELD(t_Perturbations, albedoGridSize),
                DECLARE_GETSET_FIELD(t_Perturbations, albedoModel),
                DECLARE_GETSET_FIELD(t_Perturbations, atmosphericModel),
                DECLARE_GETSET_FIELD(t_Perturbations, centralBodyRotation),
                DECLARE_GETSET_FIELD(t_Perturbations, equatorialRadius),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedF10P7),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedF10P7Mean),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedGeomagneticAp),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedGeomagneticDst),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedGeomagneticKp),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedM10P7),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedM10P7Mean),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedS10P7),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedS10P7Mean),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedY10P7),
                DECLARE_GETSET_FIELD(t_Perturbations, fixedY10P7Mean),
                DECLARE_GETSET_FIELD(t_Perturbations, gm),
                DECLARE_GET_FIELD(t_Perturbations, gravityDegree),
                DECLARE_GET_FIELD(t_Perturbations, gravityModel),
                DECLARE_GET_FIELD(t_Perturbations, gravityOrder),
                DECLARE_GETSET_FIELD(t_Perturbations, interpMethodSW),
                DECLARE_GETSET_FIELD(t_Perturbations, nBodyPerturbations),
                DECLARE_GETSET_FIELD(t_Perturbations, oblateFlattening),
                DECLARE_GETSET_FIELD(t_Perturbations, oceanTidesModel),
                DECLARE_GETSET_FIELD(t_Perturbations, reductionTheory),
                DECLARE_GETSET_FIELD(t_Perturbations, shadowBodies),
                DECLARE_GETSET_FIELD(t_Perturbations, shadowModel),
                DECLARE_GETSET_FIELD(t_Perturbations, solidTidesModel),
                DECLARE_GETSET_FIELD(t_Perturbations, spaceWeatherEpoch),
                DECLARE_GETSET_FIELD(t_Perturbations, spaceWeatherSource),
                DECLARE_GETSET_FIELD(t_Perturbations, srpModel),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Perturbations__methods_[] = {
                DECLARE_METHOD(t_Perturbations, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Perturbations, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Perturbations, getAlbedoGridSize, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getAlbedoModel, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getAtmosphericModel, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getCentralBodyRotation, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getEquatorialRadius, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedF10P7, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedF10P7Mean, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedGeomagneticAp, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedGeomagneticDst, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedGeomagneticKp, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedM10P7, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedM10P7Mean, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedS10P7, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedS10P7Mean, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedY10P7, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getFixedY10P7Mean, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getGm, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getGravityDegree, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getGravityModel, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getGravityOrder, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getInterpMethodSW, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getNBodyPerturbations, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getOblateFlattening, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getOceanTidesModel, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getReductionTheory, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getShadowBodies, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getShadowModel, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getSolidTidesModel, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getSpaceWeatherEpoch, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getSpaceWeatherSource, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, getSrpModel, METH_NOARGS),
                DECLARE_METHOD(t_Perturbations, setAlbedoGridSize, METH_O),
                DECLARE_METHOD(t_Perturbations, setAlbedoModel, METH_O),
                DECLARE_METHOD(t_Perturbations, setAtmosphericModel, METH_O),
                DECLARE_METHOD(t_Perturbations, setCentralBodyRotation, METH_O),
                DECLARE_METHOD(t_Perturbations, setEquatorialRadius, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedF10P7, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedF10P7Mean, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedGeomagneticAp, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedGeomagneticDst, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedGeomagneticKp, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedM10P7, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedM10P7Mean, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedS10P7, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedS10P7Mean, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedY10P7, METH_O),
                DECLARE_METHOD(t_Perturbations, setFixedY10P7Mean, METH_O),
                DECLARE_METHOD(t_Perturbations, setGm, METH_O),
                DECLARE_METHOD(t_Perturbations, setGravityModel, METH_VARARGS),
                DECLARE_METHOD(t_Perturbations, setInterpMethodSW, METH_O),
                DECLARE_METHOD(t_Perturbations, setNBodyPerturbations, METH_O),
                DECLARE_METHOD(t_Perturbations, setOblateFlattening, METH_O),
                DECLARE_METHOD(t_Perturbations, setOceanTidesModel, METH_O),
                DECLARE_METHOD(t_Perturbations, setReductionTheory, METH_O),
                DECLARE_METHOD(t_Perturbations, setShadowBodies, METH_O),
                DECLARE_METHOD(t_Perturbations, setShadowModel, METH_O),
                DECLARE_METHOD(t_Perturbations, setSolidTidesModel, METH_O),
                DECLARE_METHOD(t_Perturbations, setSpaceWeatherEpoch, METH_O),
                DECLARE_METHOD(t_Perturbations, setSpaceWeatherSource, METH_O),
                DECLARE_METHOD(t_Perturbations, setSrpModel, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Perturbations)[] = {
                { Py_tp_methods, t_Perturbations__methods_ },
                { Py_tp_init, (void *) t_Perturbations_init_ },
                { Py_tp_getset, t_Perturbations__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Perturbations)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(Perturbations, t_Perturbations, Perturbations);

              void t_Perturbations::install(PyObject *module)
              {
                installType(&PY_TYPE(Perturbations), &PY_TYPE_DEF(Perturbations), module, "Perturbations", 0);
              }

              void t_Perturbations::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Perturbations), "class_", make_descriptor(Perturbations::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Perturbations), "wrapfn_", make_descriptor(t_Perturbations::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Perturbations), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Perturbations_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Perturbations::initializeClass, 1)))
                  return NULL;
                return t_Perturbations::wrap_Object(Perturbations(((t_Perturbations *) arg)->object.this$));
              }
              static PyObject *t_Perturbations_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Perturbations::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Perturbations_init_(t_Perturbations *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::bodies::CelestialBodies a0((jobject) NULL);
                Perturbations object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::bodies::CelestialBodies::initializeClass, &a0))
                {
                  INT_CALL(object = Perturbations(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_Perturbations_getAlbedoGridSize(t_Perturbations *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getAlbedoGridSize());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Perturbations_getAlbedoModel(t_Perturbations *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getAlbedoModel());
                return j2p(result);
              }

              static PyObject *t_Perturbations_getAtmosphericModel(t_Perturbations *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getAtmosphericModel());
                return j2p(result);
              }

              static PyObject *t_Perturbations_getCentralBodyRotation(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getCentralBodyRotation());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getEquatorialRadius(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getEquatorialRadius());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedF10P7(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedF10P7());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedF10P7Mean(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedF10P7Mean());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedGeomagneticAp(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedGeomagneticAp());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedGeomagneticDst(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedGeomagneticDst());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedGeomagneticKp(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedGeomagneticKp());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedM10P7(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedM10P7());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedM10P7Mean(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedM10P7Mean());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedS10P7(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedS10P7());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedS10P7Mean(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedS10P7Mean());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedY10P7(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedY10P7());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getFixedY10P7Mean(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFixedY10P7Mean());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getGm(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getGm());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getGravityDegree(t_Perturbations *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getGravityDegree());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Perturbations_getGravityModel(t_Perturbations *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getGravityModel());
                return j2p(result);
              }

              static PyObject *t_Perturbations_getGravityOrder(t_Perturbations *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getGravityOrder());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Perturbations_getInterpMethodSW(t_Perturbations *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getInterpMethodSW());
                return j2p(result);
              }

              static PyObject *t_Perturbations_getNBodyPerturbations(t_Perturbations *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getNBodyPerturbations());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::definitions::PY_TYPE(BodyFacade));
              }

              static PyObject *t_Perturbations_getOblateFlattening(t_Perturbations *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getOblateFlattening());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Perturbations_getOceanTidesModel(t_Perturbations *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getOceanTidesModel());
                return j2p(result);
              }

              static PyObject *t_Perturbations_getReductionTheory(t_Perturbations *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getReductionTheory());
                return j2p(result);
              }

              static PyObject *t_Perturbations_getShadowBodies(t_Perturbations *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getShadowBodies());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::definitions::PY_TYPE(BodyFacade));
              }

              static PyObject *t_Perturbations_getShadowModel(t_Perturbations *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel result((jobject) NULL);
                OBJ_CALL(result = self->object.getShadowModel());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_ShadowModel::wrap_Object(result);
              }

              static PyObject *t_Perturbations_getSolidTidesModel(t_Perturbations *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getSolidTidesModel());
                return j2p(result);
              }

              static PyObject *t_Perturbations_getSpaceWeatherEpoch(t_Perturbations *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getSpaceWeatherEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_Perturbations_getSpaceWeatherSource(t_Perturbations *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getSpaceWeatherSource());
                return j2p(result);
              }

              static PyObject *t_Perturbations_getSrpModel(t_Perturbations *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getSrpModel());
                return j2p(result);
              }

              static PyObject *t_Perturbations_setAlbedoGridSize(t_Perturbations *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setAlbedoGridSize(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAlbedoGridSize", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setAlbedoModel(t_Perturbations *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setAlbedoModel(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAlbedoModel", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setAtmosphericModel(t_Perturbations *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setAtmosphericModel(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAtmosphericModel", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setCentralBodyRotation(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setCentralBodyRotation(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCentralBodyRotation", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setEquatorialRadius(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setEquatorialRadius(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEquatorialRadius", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedF10P7(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedF10P7(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedF10P7", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedF10P7Mean(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedF10P7Mean(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedF10P7Mean", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedGeomagneticAp(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedGeomagneticAp(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedGeomagneticAp", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedGeomagneticDst(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedGeomagneticDst(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedGeomagneticDst", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedGeomagneticKp(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedGeomagneticKp(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedGeomagneticKp", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedM10P7(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedM10P7(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedM10P7", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedM10P7Mean(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedM10P7Mean(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedM10P7Mean", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedS10P7(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedS10P7(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedS10P7", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedS10P7Mean(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedS10P7Mean(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedS10P7Mean", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedY10P7(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedY10P7(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedY10P7", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setFixedY10P7Mean(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setFixedY10P7Mean(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFixedY10P7Mean", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setGm(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setGm(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGm", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setGravityModel(t_Perturbations *self, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                jint a1;
                jint a2;

                if (!parseArgs(args, "sII", &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.setGravityModel(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGravityModel", args);
                return NULL;
              }

              static PyObject *t_Perturbations_setInterpMethodSW(t_Perturbations *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setInterpMethodSW(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInterpMethodSW", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setNBodyPerturbations(t_Perturbations *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setNBodyPerturbations(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNBodyPerturbations", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setOblateFlattening(t_Perturbations *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setOblateFlattening(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOblateFlattening", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setOceanTidesModel(t_Perturbations *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setOceanTidesModel(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOceanTidesModel", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setReductionTheory(t_Perturbations *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setReductionTheory(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setReductionTheory", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setShadowBodies(t_Perturbations *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setShadowBodies(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setShadowBodies", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setShadowModel(t_Perturbations *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_ShadowModel::parameters_))
                {
                  OBJ_CALL(self->object.setShadowModel(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setShadowModel", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setSolidTidesModel(t_Perturbations *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setSolidTidesModel(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSolidTidesModel", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setSpaceWeatherEpoch(t_Perturbations *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setSpaceWeatherEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSpaceWeatherEpoch", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setSpaceWeatherSource(t_Perturbations *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setSpaceWeatherSource(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSpaceWeatherSource", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_setSrpModel(t_Perturbations *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setSrpModel(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSrpModel", arg);
                return NULL;
              }

              static PyObject *t_Perturbations_get__albedoGridSize(t_Perturbations *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getAlbedoGridSize());
                return PyLong_FromLong((long) value);
              }
              static int t_Perturbations_set__albedoGridSize(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setAlbedoGridSize(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "albedoGridSize", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__albedoModel(t_Perturbations *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getAlbedoModel());
                return j2p(value);
              }
              static int t_Perturbations_set__albedoModel(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setAlbedoModel(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "albedoModel", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__atmosphericModel(t_Perturbations *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getAtmosphericModel());
                return j2p(value);
              }
              static int t_Perturbations_set__atmosphericModel(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setAtmosphericModel(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "atmosphericModel", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__centralBodyRotation(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getCentralBodyRotation());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__centralBodyRotation(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setCentralBodyRotation(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "centralBodyRotation", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__equatorialRadius(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getEquatorialRadius());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__equatorialRadius(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setEquatorialRadius(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "equatorialRadius", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedF10P7(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedF10P7());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedF10P7(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedF10P7(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedF10P7", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedF10P7Mean(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedF10P7Mean());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedF10P7Mean(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedF10P7Mean(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedF10P7Mean", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedGeomagneticAp(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedGeomagneticAp());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedGeomagneticAp(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedGeomagneticAp(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedGeomagneticAp", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedGeomagneticDst(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedGeomagneticDst());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedGeomagneticDst(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedGeomagneticDst(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedGeomagneticDst", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedGeomagneticKp(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedGeomagneticKp());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedGeomagneticKp(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedGeomagneticKp(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedGeomagneticKp", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedM10P7(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedM10P7());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedM10P7(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedM10P7(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedM10P7", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedM10P7Mean(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedM10P7Mean());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedM10P7Mean(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedM10P7Mean(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedM10P7Mean", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedS10P7(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedS10P7());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedS10P7(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedS10P7(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedS10P7", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedS10P7Mean(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedS10P7Mean());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedS10P7Mean(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedS10P7Mean(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedS10P7Mean", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedY10P7(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedY10P7());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedY10P7(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedY10P7(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedY10P7", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__fixedY10P7Mean(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFixedY10P7Mean());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__fixedY10P7Mean(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setFixedY10P7Mean(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fixedY10P7Mean", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__gm(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getGm());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__gm(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setGm(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gm", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__gravityDegree(t_Perturbations *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getGravityDegree());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_Perturbations_get__gravityModel(t_Perturbations *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getGravityModel());
                return j2p(value);
              }

              static PyObject *t_Perturbations_get__gravityOrder(t_Perturbations *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getGravityOrder());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_Perturbations_get__interpMethodSW(t_Perturbations *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getInterpMethodSW());
                return j2p(value);
              }
              static int t_Perturbations_set__interpMethodSW(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setInterpMethodSW(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "interpMethodSW", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__nBodyPerturbations(t_Perturbations *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getNBodyPerturbations());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_Perturbations_set__nBodyPerturbations(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setNBodyPerturbations(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nBodyPerturbations", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__oblateFlattening(t_Perturbations *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getOblateFlattening());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Perturbations_set__oblateFlattening(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setOblateFlattening(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "oblateFlattening", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__oceanTidesModel(t_Perturbations *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getOceanTidesModel());
                return j2p(value);
              }
              static int t_Perturbations_set__oceanTidesModel(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setOceanTidesModel(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "oceanTidesModel", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__reductionTheory(t_Perturbations *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getReductionTheory());
                return j2p(value);
              }
              static int t_Perturbations_set__reductionTheory(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setReductionTheory(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "reductionTheory", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__shadowBodies(t_Perturbations *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getShadowBodies());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_Perturbations_set__shadowBodies(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setShadowBodies(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "shadowBodies", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__shadowModel(t_Perturbations *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel value((jobject) NULL);
                OBJ_CALL(value = self->object.getShadowModel());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_ShadowModel::wrap_Object(value);
              }
              static int t_Perturbations_set__shadowModel(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel::initializeClass, &value))
                  {
                    INT_CALL(self->object.setShadowModel(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "shadowModel", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__solidTidesModel(t_Perturbations *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getSolidTidesModel());
                return j2p(value);
              }
              static int t_Perturbations_set__solidTidesModel(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setSolidTidesModel(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "solidTidesModel", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__spaceWeatherEpoch(t_Perturbations *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getSpaceWeatherEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_Perturbations_set__spaceWeatherEpoch(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setSpaceWeatherEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "spaceWeatherEpoch", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__spaceWeatherSource(t_Perturbations *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getSpaceWeatherSource());
                return j2p(value);
              }
              static int t_Perturbations_set__spaceWeatherSource(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setSpaceWeatherSource(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "spaceWeatherSource", arg);
                return -1;
              }

              static PyObject *t_Perturbations_get__srpModel(t_Perturbations *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getSrpModel());
                return j2p(value);
              }
              static int t_Perturbations_set__srpModel(t_Perturbations *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setSrpModel(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "srpModel", arg);
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
#include "org/orekit/models/earth/ionosphere/SingleLayerModelMappingFunction.h"
#include "org/orekit/models/earth/ionosphere/IonosphericMappingFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *SingleLayerModelMappingFunction::class$ = NULL;
          jmethodID *SingleLayerModelMappingFunction::mids$ = NULL;
          bool SingleLayerModelMappingFunction::live$ = false;

          jclass SingleLayerModelMappingFunction::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/SingleLayerModelMappingFunction");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_mappingFactor_dcbc7ce2902fa136] = env->getMethodID(cls, "mappingFactor", "(D)D");
              mids$[mid_mappingFactor_a4b1871f4d29e58b] = env->getMethodID(cls, "mappingFactor", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SingleLayerModelMappingFunction::SingleLayerModelMappingFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          SingleLayerModelMappingFunction::SingleLayerModelMappingFunction(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

          jdouble SingleLayerModelMappingFunction::mappingFactor(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_mappingFactor_dcbc7ce2902fa136], a0);
          }

          ::org::hipparchus::CalculusFieldElement SingleLayerModelMappingFunction::mappingFactor(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_mappingFactor_a4b1871f4d29e58b], a0.this$));
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
        namespace ionosphere {
          static PyObject *t_SingleLayerModelMappingFunction_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SingleLayerModelMappingFunction_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SingleLayerModelMappingFunction_init_(t_SingleLayerModelMappingFunction *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SingleLayerModelMappingFunction_mappingFactor(t_SingleLayerModelMappingFunction *self, PyObject *args);

          static PyMethodDef t_SingleLayerModelMappingFunction__methods_[] = {
            DECLARE_METHOD(t_SingleLayerModelMappingFunction, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SingleLayerModelMappingFunction, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SingleLayerModelMappingFunction, mappingFactor, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SingleLayerModelMappingFunction)[] = {
            { Py_tp_methods, t_SingleLayerModelMappingFunction__methods_ },
            { Py_tp_init, (void *) t_SingleLayerModelMappingFunction_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SingleLayerModelMappingFunction)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SingleLayerModelMappingFunction, t_SingleLayerModelMappingFunction, SingleLayerModelMappingFunction);

          void t_SingleLayerModelMappingFunction::install(PyObject *module)
          {
            installType(&PY_TYPE(SingleLayerModelMappingFunction), &PY_TYPE_DEF(SingleLayerModelMappingFunction), module, "SingleLayerModelMappingFunction", 0);
          }

          void t_SingleLayerModelMappingFunction::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingleLayerModelMappingFunction), "class_", make_descriptor(SingleLayerModelMappingFunction::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingleLayerModelMappingFunction), "wrapfn_", make_descriptor(t_SingleLayerModelMappingFunction::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingleLayerModelMappingFunction), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SingleLayerModelMappingFunction_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SingleLayerModelMappingFunction::initializeClass, 1)))
              return NULL;
            return t_SingleLayerModelMappingFunction::wrap_Object(SingleLayerModelMappingFunction(((t_SingleLayerModelMappingFunction *) arg)->object.this$));
          }
          static PyObject *t_SingleLayerModelMappingFunction_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SingleLayerModelMappingFunction::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SingleLayerModelMappingFunction_init_(t_SingleLayerModelMappingFunction *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                SingleLayerModelMappingFunction object((jobject) NULL);

                INT_CALL(object = SingleLayerModelMappingFunction());
                self->object = object;
                break;
              }
             case 1:
              {
                jdouble a0;
                SingleLayerModelMappingFunction object((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  INT_CALL(object = SingleLayerModelMappingFunction(a0));
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

          static PyObject *t_SingleLayerModelMappingFunction_mappingFactor(t_SingleLayerModelMappingFunction *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.mappingFactor(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.mappingFactor(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "mappingFactor", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/carlson/CarlsonEllipticIntegral.h"
#include "org/hipparchus/complex/Complex.h"
#include "org/hipparchus/complex/FieldComplex.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace carlson {

          ::java::lang::Class *CarlsonEllipticIntegral::class$ = NULL;
          jmethodID *CarlsonEllipticIntegral::mids$ = NULL;
          bool CarlsonEllipticIntegral::live$ = false;

          jclass CarlsonEllipticIntegral::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/carlson/CarlsonEllipticIntegral");

              mids$ = new jmethodID[max_mid];
              mids$[mid_rC_6e0cdbc797c242a1] = env->getStaticMethodID(cls, "rC", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_rC_a3c292738a9833b6] = env->getStaticMethodID(cls, "rC", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_rC_86ffecc08a63eff0] = env->getStaticMethodID(cls, "rC", "(DD)D");
              mids$[mid_rC_6746cc1cd9210d54] = env->getStaticMethodID(cls, "rC", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_rD_f8bf5c113fa9cbc9] = env->getStaticMethodID(cls, "rD", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_rD_d361fa1b878f879c] = env->getStaticMethodID(cls, "rD", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_rD_8c19bdea212fe058] = env->getStaticMethodID(cls, "rD", "(DDD)D");
              mids$[mid_rD_ff4594b9dc2244a3] = env->getStaticMethodID(cls, "rD", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_rF_f8bf5c113fa9cbc9] = env->getStaticMethodID(cls, "rF", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_rF_d361fa1b878f879c] = env->getStaticMethodID(cls, "rF", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_rF_8c19bdea212fe058] = env->getStaticMethodID(cls, "rF", "(DDD)D");
              mids$[mid_rF_ff4594b9dc2244a3] = env->getStaticMethodID(cls, "rF", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_rG_f8bf5c113fa9cbc9] = env->getStaticMethodID(cls, "rG", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_rG_d361fa1b878f879c] = env->getStaticMethodID(cls, "rG", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_rG_8c19bdea212fe058] = env->getStaticMethodID(cls, "rG", "(DDD)D");
              mids$[mid_rG_ff4594b9dc2244a3] = env->getStaticMethodID(cls, "rG", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_rJ_e4b62d9a92e5b076] = env->getStaticMethodID(cls, "rJ", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_rJ_1d93f54300c6f636] = env->getStaticMethodID(cls, "rJ", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_rJ_0f015b8be9d2dc40] = env->getStaticMethodID(cls, "rJ", "(DDDD)D");
              mids$[mid_rJ_4a66279d01124751] = env->getStaticMethodID(cls, "rJ", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_rJ_512a1627eb1558ae] = env->getStaticMethodID(cls, "rJ", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_rJ_42d8d5d90c2a2f66] = env->getStaticMethodID(cls, "rJ", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_rJ_5e4b7c96b371378c] = env->getStaticMethodID(cls, "rJ", "(DDDDD)D");
              mids$[mid_rJ_14a8e7e1d50b6391] = env->getStaticMethodID(cls, "rJ", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::complex::Complex CarlsonEllipticIntegral::rC(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_rC_6e0cdbc797c242a1], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::FieldComplex CarlsonEllipticIntegral::rC(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_rC_a3c292738a9833b6], a0.this$, a1.this$));
          }

          jdouble CarlsonEllipticIntegral::rC(jdouble a0, jdouble a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_rC_86ffecc08a63eff0], a0, a1);
          }

          ::org::hipparchus::CalculusFieldElement CarlsonEllipticIntegral::rC(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_rC_6746cc1cd9210d54], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::Complex CarlsonEllipticIntegral::rD(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1, const ::org::hipparchus::complex::Complex & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_rD_f8bf5c113fa9cbc9], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::complex::FieldComplex CarlsonEllipticIntegral::rD(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1, const ::org::hipparchus::complex::FieldComplex & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_rD_d361fa1b878f879c], a0.this$, a1.this$, a2.this$));
          }

          jdouble CarlsonEllipticIntegral::rD(jdouble a0, jdouble a1, jdouble a2)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_rD_8c19bdea212fe058], a0, a1, a2);
          }

          ::org::hipparchus::CalculusFieldElement CarlsonEllipticIntegral::rD(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_rD_ff4594b9dc2244a3], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::complex::Complex CarlsonEllipticIntegral::rF(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1, const ::org::hipparchus::complex::Complex & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_rF_f8bf5c113fa9cbc9], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::complex::FieldComplex CarlsonEllipticIntegral::rF(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1, const ::org::hipparchus::complex::FieldComplex & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_rF_d361fa1b878f879c], a0.this$, a1.this$, a2.this$));
          }

          jdouble CarlsonEllipticIntegral::rF(jdouble a0, jdouble a1, jdouble a2)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_rF_8c19bdea212fe058], a0, a1, a2);
          }

          ::org::hipparchus::CalculusFieldElement CarlsonEllipticIntegral::rF(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_rF_ff4594b9dc2244a3], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::complex::Complex CarlsonEllipticIntegral::rG(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1, const ::org::hipparchus::complex::Complex & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_rG_f8bf5c113fa9cbc9], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::complex::FieldComplex CarlsonEllipticIntegral::rG(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1, const ::org::hipparchus::complex::FieldComplex & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_rG_d361fa1b878f879c], a0.this$, a1.this$, a2.this$));
          }

          jdouble CarlsonEllipticIntegral::rG(jdouble a0, jdouble a1, jdouble a2)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_rG_8c19bdea212fe058], a0, a1, a2);
          }

          ::org::hipparchus::CalculusFieldElement CarlsonEllipticIntegral::rG(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_rG_ff4594b9dc2244a3], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::complex::Complex CarlsonEllipticIntegral::rJ(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1, const ::org::hipparchus::complex::Complex & a2, const ::org::hipparchus::complex::Complex & a3)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_rJ_e4b62d9a92e5b076], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          ::org::hipparchus::complex::FieldComplex CarlsonEllipticIntegral::rJ(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1, const ::org::hipparchus::complex::FieldComplex & a2, const ::org::hipparchus::complex::FieldComplex & a3)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_rJ_1d93f54300c6f636], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          jdouble CarlsonEllipticIntegral::rJ(jdouble a0, jdouble a1, jdouble a2, jdouble a3)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_rJ_0f015b8be9d2dc40], a0, a1, a2, a3);
          }

          ::org::hipparchus::CalculusFieldElement CarlsonEllipticIntegral::rJ(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_rJ_4a66279d01124751], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          ::org::hipparchus::complex::Complex CarlsonEllipticIntegral::rJ(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1, const ::org::hipparchus::complex::Complex & a2, const ::org::hipparchus::complex::Complex & a3, const ::org::hipparchus::complex::Complex & a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_rJ_512a1627eb1558ae], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
          }

          ::org::hipparchus::complex::FieldComplex CarlsonEllipticIntegral::rJ(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1, const ::org::hipparchus::complex::FieldComplex & a2, const ::org::hipparchus::complex::FieldComplex & a3, const ::org::hipparchus::complex::FieldComplex & a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_rJ_42d8d5d90c2a2f66], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
          }

          jdouble CarlsonEllipticIntegral::rJ(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_rJ_5e4b7c96b371378c], a0, a1, a2, a3, a4);
          }

          ::org::hipparchus::CalculusFieldElement CarlsonEllipticIntegral::rJ(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_rJ_14a8e7e1d50b6391], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
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
        namespace carlson {
          static PyObject *t_CarlsonEllipticIntegral_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CarlsonEllipticIntegral_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CarlsonEllipticIntegral_rC(PyTypeObject *type, PyObject *args);
          static PyObject *t_CarlsonEllipticIntegral_rD(PyTypeObject *type, PyObject *args);
          static PyObject *t_CarlsonEllipticIntegral_rF(PyTypeObject *type, PyObject *args);
          static PyObject *t_CarlsonEllipticIntegral_rG(PyTypeObject *type, PyObject *args);
          static PyObject *t_CarlsonEllipticIntegral_rJ(PyTypeObject *type, PyObject *args);

          static PyMethodDef t_CarlsonEllipticIntegral__methods_[] = {
            DECLARE_METHOD(t_CarlsonEllipticIntegral, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CarlsonEllipticIntegral, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CarlsonEllipticIntegral, rC, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CarlsonEllipticIntegral, rD, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CarlsonEllipticIntegral, rF, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CarlsonEllipticIntegral, rG, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CarlsonEllipticIntegral, rJ, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CarlsonEllipticIntegral)[] = {
            { Py_tp_methods, t_CarlsonEllipticIntegral__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CarlsonEllipticIntegral)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CarlsonEllipticIntegral, t_CarlsonEllipticIntegral, CarlsonEllipticIntegral);

          void t_CarlsonEllipticIntegral::install(PyObject *module)
          {
            installType(&PY_TYPE(CarlsonEllipticIntegral), &PY_TYPE_DEF(CarlsonEllipticIntegral), module, "CarlsonEllipticIntegral", 0);
          }

          void t_CarlsonEllipticIntegral::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CarlsonEllipticIntegral), "class_", make_descriptor(CarlsonEllipticIntegral::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CarlsonEllipticIntegral), "wrapfn_", make_descriptor(t_CarlsonEllipticIntegral::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CarlsonEllipticIntegral), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CarlsonEllipticIntegral_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CarlsonEllipticIntegral::initializeClass, 1)))
              return NULL;
            return t_CarlsonEllipticIntegral::wrap_Object(CarlsonEllipticIntegral(((t_CarlsonEllipticIntegral *) arg)->object.this$));
          }
          static PyObject *t_CarlsonEllipticIntegral_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CarlsonEllipticIntegral::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CarlsonEllipticIntegral_rC(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rC(a0, a1));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rC(a0, a1));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "DD", &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rC(a0, a1));
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
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rC(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "rC", args);
            return NULL;
          }

          static PyObject *t_CarlsonEllipticIntegral_rD(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex a2((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kkk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rD(a0, a1, a2));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rD(a0, a1, a2));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble result;

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rD(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rD(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "rD", args);
            return NULL;
          }

          static PyObject *t_CarlsonEllipticIntegral_rF(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex a2((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kkk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rF(a0, a1, a2));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rF(a0, a1, a2));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble result;

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rF(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rF(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "rF", args);
            return NULL;
          }

          static PyObject *t_CarlsonEllipticIntegral_rG(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex a2((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kkk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rG(a0, a1, a2));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rG(a0, a1, a2));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble result;

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rG(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rG(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "rG", args);
            return NULL;
          }

          static PyObject *t_CarlsonEllipticIntegral_rJ(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex a2((jobject) NULL);
                ::org::hipparchus::complex::Complex a3((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kkkk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rJ(a0, a1, a2, a3));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::complex::FieldComplex a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KKKK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a3, &p3, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rJ(a0, a1, a2, a3));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble a3;
                jdouble result;

                if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rJ(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
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
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rJ(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 5:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex a2((jobject) NULL);
                ::org::hipparchus::complex::Complex a3((jobject) NULL);
                ::org::hipparchus::complex::Complex a4((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kkkkk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2, &a3, &a4))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rJ(a0, a1, a2, a3, a4));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::complex::FieldComplex a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::complex::FieldComplex a4((jobject) NULL);
                PyTypeObject **p4;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KKKKK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a3, &p3, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a4, &p4, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rJ(a0, a1, a2, a3, a4));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble a3;
                jdouble a4;
                jdouble result;

                if (!parseArgs(args, "DDDDD", &a0, &a1, &a2, &a3, &a4))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rJ(a0, a1, a2, a3, a4));
                  return PyFloat_FromDouble((double) result);
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
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rJ(a0, a1, a2, a3, a4));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "rJ", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticClockRangeModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/Range.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticClockRangeModifier::class$ = NULL;
          jmethodID *RelativisticClockRangeModifier::mids$ = NULL;
          bool RelativisticClockRangeModifier::live$ = false;

          jclass RelativisticClockRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticClockRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticClockRangeModifier::RelativisticClockRangeModifier() : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          ::java::util::List RelativisticClockRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          void RelativisticClockRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_RelativisticClockRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticClockRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticClockRangeModifier_init_(t_RelativisticClockRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticClockRangeModifier_getParametersDrivers(t_RelativisticClockRangeModifier *self);
          static PyObject *t_RelativisticClockRangeModifier_modifyWithoutDerivatives(t_RelativisticClockRangeModifier *self, PyObject *arg);
          static PyObject *t_RelativisticClockRangeModifier_get__parametersDrivers(t_RelativisticClockRangeModifier *self, void *data);
          static PyGetSetDef t_RelativisticClockRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticClockRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticClockRangeModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticClockRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticClockRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticClockRangeModifier)[] = {
            { Py_tp_methods, t_RelativisticClockRangeModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticClockRangeModifier_init_ },
            { Py_tp_getset, t_RelativisticClockRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticClockRangeModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticClockRangeModifier, t_RelativisticClockRangeModifier, RelativisticClockRangeModifier);

          void t_RelativisticClockRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticClockRangeModifier), &PY_TYPE_DEF(RelativisticClockRangeModifier), module, "RelativisticClockRangeModifier", 0);
          }

          void t_RelativisticClockRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockRangeModifier), "class_", make_descriptor(RelativisticClockRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockRangeModifier), "wrapfn_", make_descriptor(t_RelativisticClockRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticClockRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticClockRangeModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticClockRangeModifier::wrap_Object(RelativisticClockRangeModifier(((t_RelativisticClockRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticClockRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticClockRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticClockRangeModifier_init_(t_RelativisticClockRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            RelativisticClockRangeModifier object((jobject) NULL);

            INT_CALL(object = RelativisticClockRangeModifier());
            self->object = object;

            return 0;
          }

          static PyObject *t_RelativisticClockRangeModifier_getParametersDrivers(t_RelativisticClockRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticClockRangeModifier_modifyWithoutDerivatives(t_RelativisticClockRangeModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticClockRangeModifier_get__parametersDrivers(t_RelativisticClockRangeModifier *self, void *data)
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
#include "org/hipparchus/linear/LUDecomposer.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *LUDecomposer::class$ = NULL;
      jmethodID *LUDecomposer::mids$ = NULL;
      bool LUDecomposer::live$ = false;

      jclass LUDecomposer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/LUDecomposer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_decompose_6832546eac694082] = env->getMethodID(cls, "decompose", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/DecompositionSolver;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LUDecomposer::LUDecomposer(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

      ::org::hipparchus::linear::DecompositionSolver LUDecomposer::decompose(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_decompose_6832546eac694082], a0.this$));
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
      static PyObject *t_LUDecomposer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LUDecomposer_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LUDecomposer_init_(t_LUDecomposer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LUDecomposer_decompose(t_LUDecomposer *self, PyObject *arg);

      static PyMethodDef t_LUDecomposer__methods_[] = {
        DECLARE_METHOD(t_LUDecomposer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LUDecomposer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LUDecomposer, decompose, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LUDecomposer)[] = {
        { Py_tp_methods, t_LUDecomposer__methods_ },
        { Py_tp_init, (void *) t_LUDecomposer_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LUDecomposer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LUDecomposer, t_LUDecomposer, LUDecomposer);

      void t_LUDecomposer::install(PyObject *module)
      {
        installType(&PY_TYPE(LUDecomposer), &PY_TYPE_DEF(LUDecomposer), module, "LUDecomposer", 0);
      }

      void t_LUDecomposer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LUDecomposer), "class_", make_descriptor(LUDecomposer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LUDecomposer), "wrapfn_", make_descriptor(t_LUDecomposer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LUDecomposer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LUDecomposer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LUDecomposer::initializeClass, 1)))
          return NULL;
        return t_LUDecomposer::wrap_Object(LUDecomposer(((t_LUDecomposer *) arg)->object.this$));
      }
      static PyObject *t_LUDecomposer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LUDecomposer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LUDecomposer_init_(t_LUDecomposer *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        LUDecomposer object((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          INT_CALL(object = LUDecomposer(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_LUDecomposer_decompose(t_LUDecomposer *self, PyObject *arg)
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
#include "org/orekit/utils/PythonParameterFunction.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/ParameterFunction.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonParameterFunction::class$ = NULL;
      jmethodID *PythonParameterFunction::mids$ = NULL;
      bool PythonParameterFunction::live$ = false;

      jclass PythonParameterFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonParameterFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_value_68971d186049f4f1] = env->getMethodID(cls, "value", "(Lorg/orekit/utils/ParameterDriver;Lorg/orekit/time/AbsoluteDate;)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonParameterFunction::PythonParameterFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonParameterFunction::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonParameterFunction::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonParameterFunction::pythonExtension(jlong a0) const
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
    namespace utils {
      static PyObject *t_PythonParameterFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonParameterFunction_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonParameterFunction_init_(t_PythonParameterFunction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonParameterFunction_finalize(t_PythonParameterFunction *self);
      static PyObject *t_PythonParameterFunction_pythonExtension(t_PythonParameterFunction *self, PyObject *args);
      static void JNICALL t_PythonParameterFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonParameterFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static PyObject *t_PythonParameterFunction_get__self(t_PythonParameterFunction *self, void *data);
      static PyGetSetDef t_PythonParameterFunction__fields_[] = {
        DECLARE_GET_FIELD(t_PythonParameterFunction, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonParameterFunction__methods_[] = {
        DECLARE_METHOD(t_PythonParameterFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonParameterFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonParameterFunction, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonParameterFunction, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonParameterFunction)[] = {
        { Py_tp_methods, t_PythonParameterFunction__methods_ },
        { Py_tp_init, (void *) t_PythonParameterFunction_init_ },
        { Py_tp_getset, t_PythonParameterFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonParameterFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonParameterFunction, t_PythonParameterFunction, PythonParameterFunction);

      void t_PythonParameterFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonParameterFunction), &PY_TYPE_DEF(PythonParameterFunction), module, "PythonParameterFunction", 1);
      }

      void t_PythonParameterFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParameterFunction), "class_", make_descriptor(PythonParameterFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParameterFunction), "wrapfn_", make_descriptor(t_PythonParameterFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParameterFunction), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonParameterFunction::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonParameterFunction_pythonDecRef0 },
          { "value", "(Lorg/orekit/utils/ParameterDriver;Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonParameterFunction_value1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonParameterFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonParameterFunction::initializeClass, 1)))
          return NULL;
        return t_PythonParameterFunction::wrap_Object(PythonParameterFunction(((t_PythonParameterFunction *) arg)->object.this$));
      }
      static PyObject *t_PythonParameterFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonParameterFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonParameterFunction_init_(t_PythonParameterFunction *self, PyObject *args, PyObject *kwds)
      {
        PythonParameterFunction object((jobject) NULL);

        INT_CALL(object = PythonParameterFunction());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonParameterFunction_finalize(t_PythonParameterFunction *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonParameterFunction_pythonExtension(t_PythonParameterFunction *self, PyObject *args)
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

      static void JNICALL t_PythonParameterFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonParameterFunction::mids$[PythonParameterFunction::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonParameterFunction::mids$[PythonParameterFunction::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jdouble JNICALL t_PythonParameterFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonParameterFunction::mids$[PythonParameterFunction::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *o0 = ::org::orekit::utils::t_ParameterDriver::wrap_Object(::org::orekit::utils::ParameterDriver(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "value", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("value", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static PyObject *t_PythonParameterFunction_get__self(t_PythonParameterFunction *self, void *data)
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
#include "org/orekit/gnss/metric/messages/ssr/SsrData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {

            ::java::lang::Class *SsrData::class$ = NULL;
            jmethodID *SsrData::mids$ = NULL;
            bool SsrData::live$ = false;

            jclass SsrData::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/SsrData");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SsrData::SsrData() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}
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
            static PyObject *t_SsrData_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SsrData_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SsrData_init_(t_SsrData *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_SsrData__methods_[] = {
              DECLARE_METHOD(t_SsrData, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SsrData, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SsrData)[] = {
              { Py_tp_methods, t_SsrData__methods_ },
              { Py_tp_init, (void *) t_SsrData_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SsrData)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(SsrData, t_SsrData, SsrData);

            void t_SsrData::install(PyObject *module)
            {
              installType(&PY_TYPE(SsrData), &PY_TYPE_DEF(SsrData), module, "SsrData", 0);
            }

            void t_SsrData::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrData), "class_", make_descriptor(SsrData::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrData), "wrapfn_", make_descriptor(t_SsrData::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrData), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SsrData_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SsrData::initializeClass, 1)))
                return NULL;
              return t_SsrData::wrap_Object(SsrData(((t_SsrData *) arg)->object.this$));
            }
            static PyObject *t_SsrData_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SsrData::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SsrData_init_(t_SsrData *self, PyObject *args, PyObject *kwds)
            {
              SsrData object((jobject) NULL);

              INT_CALL(object = SsrData());
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
#include "org/hipparchus/stat/descriptive/AbstractUnivariateStatistic.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/UnivariateStatistic.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *AbstractUnivariateStatistic::class$ = NULL;
        jmethodID *AbstractUnivariateStatistic::mids$ = NULL;
        bool AbstractUnivariateStatistic::live$ = false;

        jclass AbstractUnivariateStatistic::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/AbstractUnivariateStatistic");

            mids$ = new jmethodID[max_mid];
            mids$[mid_copy_f30bf4039f437912] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/UnivariateStatistic;");
            mids$[mid_evaluate_dff5885c2c873297] = env->getMethodID(cls, "evaluate", "()D");
            mids$[mid_evaluate_556bede10daac330] = env->getMethodID(cls, "evaluate", "([DII)D");
            mids$[mid_getData_60c7040667a7dc5c] = env->getMethodID(cls, "getData", "()[D");
            mids$[mid_setData_fa9d415d19f69361] = env->getMethodID(cls, "setData", "([D)V");
            mids$[mid_setData_12aca76acb10f1af] = env->getMethodID(cls, "setData", "([DII)V");
            mids$[mid_getDataRef_60c7040667a7dc5c] = env->getMethodID(cls, "getDataRef", "()[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::stat::descriptive::UnivariateStatistic AbstractUnivariateStatistic::copy() const
        {
          return ::org::hipparchus::stat::descriptive::UnivariateStatistic(env->callObjectMethod(this$, mids$[mid_copy_f30bf4039f437912]));
        }

        jdouble AbstractUnivariateStatistic::evaluate() const
        {
          return env->callDoubleMethod(this$, mids$[mid_evaluate_dff5885c2c873297]);
        }

        jdouble AbstractUnivariateStatistic::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_evaluate_556bede10daac330], a0.this$, a1, a2);
        }

        JArray< jdouble > AbstractUnivariateStatistic::getData() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getData_60c7040667a7dc5c]));
        }

        void AbstractUnivariateStatistic::setData(const JArray< jdouble > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setData_fa9d415d19f69361], a0.this$);
        }

        void AbstractUnivariateStatistic::setData(const JArray< jdouble > & a0, jint a1, jint a2) const
        {
          env->callVoidMethod(this$, mids$[mid_setData_12aca76acb10f1af], a0.this$, a1, a2);
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
        static PyObject *t_AbstractUnivariateStatistic_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractUnivariateStatistic_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractUnivariateStatistic_copy(t_AbstractUnivariateStatistic *self);
        static PyObject *t_AbstractUnivariateStatistic_evaluate(t_AbstractUnivariateStatistic *self, PyObject *args);
        static PyObject *t_AbstractUnivariateStatistic_getData(t_AbstractUnivariateStatistic *self);
        static PyObject *t_AbstractUnivariateStatistic_setData(t_AbstractUnivariateStatistic *self, PyObject *args);
        static PyObject *t_AbstractUnivariateStatistic_get__data(t_AbstractUnivariateStatistic *self, void *data);
        static int t_AbstractUnivariateStatistic_set__data(t_AbstractUnivariateStatistic *self, PyObject *arg, void *data);
        static PyGetSetDef t_AbstractUnivariateStatistic__fields_[] = {
          DECLARE_GETSET_FIELD(t_AbstractUnivariateStatistic, data),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractUnivariateStatistic__methods_[] = {
          DECLARE_METHOD(t_AbstractUnivariateStatistic, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractUnivariateStatistic, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractUnivariateStatistic, copy, METH_NOARGS),
          DECLARE_METHOD(t_AbstractUnivariateStatistic, evaluate, METH_VARARGS),
          DECLARE_METHOD(t_AbstractUnivariateStatistic, getData, METH_NOARGS),
          DECLARE_METHOD(t_AbstractUnivariateStatistic, setData, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractUnivariateStatistic)[] = {
          { Py_tp_methods, t_AbstractUnivariateStatistic__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractUnivariateStatistic__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractUnivariateStatistic)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractUnivariateStatistic, t_AbstractUnivariateStatistic, AbstractUnivariateStatistic);

        void t_AbstractUnivariateStatistic::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractUnivariateStatistic), &PY_TYPE_DEF(AbstractUnivariateStatistic), module, "AbstractUnivariateStatistic", 0);
        }

        void t_AbstractUnivariateStatistic::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnivariateStatistic), "class_", make_descriptor(AbstractUnivariateStatistic::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnivariateStatistic), "wrapfn_", make_descriptor(t_AbstractUnivariateStatistic::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractUnivariateStatistic), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractUnivariateStatistic_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractUnivariateStatistic::initializeClass, 1)))
            return NULL;
          return t_AbstractUnivariateStatistic::wrap_Object(AbstractUnivariateStatistic(((t_AbstractUnivariateStatistic *) arg)->object.this$));
        }
        static PyObject *t_AbstractUnivariateStatistic_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractUnivariateStatistic::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractUnivariateStatistic_copy(t_AbstractUnivariateStatistic *self)
        {
          ::org::hipparchus::stat::descriptive::UnivariateStatistic result((jobject) NULL);
          OBJ_CALL(result = self->object.copy());
          return ::org::hipparchus::stat::descriptive::t_UnivariateStatistic::wrap_Object(result);
        }

        static PyObject *t_AbstractUnivariateStatistic_evaluate(t_AbstractUnivariateStatistic *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jdouble result;
              OBJ_CALL(result = self->object.evaluate());
              return PyFloat_FromDouble((double) result);
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
          }

          PyErr_SetArgsError((PyObject *) self, "evaluate", args);
          return NULL;
        }

        static PyObject *t_AbstractUnivariateStatistic_getData(t_AbstractUnivariateStatistic *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getData());
          return result.wrap();
        }

        static PyObject *t_AbstractUnivariateStatistic_setData(t_AbstractUnivariateStatistic *self, PyObject *args)
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

          PyErr_SetArgsError((PyObject *) self, "setData", args);
          return NULL;
        }

        static PyObject *t_AbstractUnivariateStatistic_get__data(t_AbstractUnivariateStatistic *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getData());
          return value.wrap();
        }
        static int t_AbstractUnivariateStatistic_set__data(t_AbstractUnivariateStatistic *self, PyObject *arg, void *data)
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
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::class$ = NULL;
          jmethodID *NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::mids$ = NULL;
          bool NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::live$ = false;

          jclass NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getNormalizedCnm_dbbe5f05149dbf73] = env->getMethodID(cls, "getNormalizedCnm", "(II)D");
              mids$[mid_getNormalizedSnm_dbbe5f05149dbf73] = env->getMethodID(cls, "getNormalizedSnm", "(II)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::getNormalizedCnm(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNormalizedCnm_dbbe5f05149dbf73], a0, a1);
          }

          jdouble NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::getNormalizedSnm(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNormalizedSnm_dbbe5f05149dbf73], a0, a1);
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
          static PyObject *t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics_getNormalizedCnm(t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics *self, PyObject *args);
          static PyObject *t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics_getNormalizedSnm(t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics *self, PyObject *args);

          static PyMethodDef t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics__methods_[] = {
            DECLARE_METHOD(t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics, getNormalizedCnm, METH_VARARGS),
            DECLARE_METHOD(t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics, getNormalizedSnm, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics)[] = {
            { Py_tp_methods, t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics)[] = {
            &PY_TYPE_DEF(::org::orekit::time::TimeStamped),
            NULL
          };

          DEFINE_TYPE(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics, t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics, NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics);

          void t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::install(PyObject *module)
          {
            installType(&PY_TYPE(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics), &PY_TYPE_DEF(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics), module, "NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics", 0);
          }

          void t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics), "class_", make_descriptor(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics), "wrapfn_", make_descriptor(t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::initializeClass, 1)))
              return NULL;
            return t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::wrap_Object(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics(((t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics *) arg)->object.this$));
          }
          static PyObject *t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics_getNormalizedCnm(t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getNormalizedCnm(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getNormalizedCnm", args);
            return NULL;
          }

          static PyObject *t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics_getNormalizedSnm(t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getNormalizedSnm(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getNormalizedSnm", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/DataFilter.h"
#include "org/orekit/data/DataSource.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DataFilter::class$ = NULL;
      jmethodID *DataFilter::mids$ = NULL;
      bool DataFilter::live$ = false;

      jclass DataFilter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DataFilter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_filter_716adf7a6da8b4d7] = env->getMethodID(cls, "filter", "(Lorg/orekit/data/DataSource;)Lorg/orekit/data/DataSource;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::data::DataSource DataFilter::filter(const ::org::orekit::data::DataSource & a0) const
      {
        return ::org::orekit::data::DataSource(env->callObjectMethod(this$, mids$[mid_filter_716adf7a6da8b4d7], a0.this$));
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
      static PyObject *t_DataFilter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataFilter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataFilter_filter(t_DataFilter *self, PyObject *arg);

      static PyMethodDef t_DataFilter__methods_[] = {
        DECLARE_METHOD(t_DataFilter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataFilter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataFilter, filter, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DataFilter)[] = {
        { Py_tp_methods, t_DataFilter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DataFilter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DataFilter, t_DataFilter, DataFilter);

      void t_DataFilter::install(PyObject *module)
      {
        installType(&PY_TYPE(DataFilter), &PY_TYPE_DEF(DataFilter), module, "DataFilter", 0);
      }

      void t_DataFilter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataFilter), "class_", make_descriptor(DataFilter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataFilter), "wrapfn_", make_descriptor(t_DataFilter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataFilter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DataFilter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DataFilter::initializeClass, 1)))
          return NULL;
        return t_DataFilter::wrap_Object(DataFilter(((t_DataFilter *) arg)->object.this$));
      }
      static PyObject *t_DataFilter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DataFilter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DataFilter_filter(t_DataFilter *self, PyObject *arg)
      {
        ::org::orekit::data::DataSource a0((jobject) NULL);
        ::org::orekit::data::DataSource result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.filter(a0));
          return ::org::orekit::data::t_DataSource::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "filter", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "org/hipparchus/geometry/Space.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          ::java::lang::Class *Euclidean2D::class$ = NULL;
          jmethodID *Euclidean2D::mids$ = NULL;
          bool Euclidean2D::live$ = false;

          jclass Euclidean2D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/Euclidean2D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getDimension", "()I");
              mids$[mid_getInstance_6c1c21e9986360d8] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/geometry/euclidean/twod/Euclidean2D;");
              mids$[mid_getSubSpace_dc026f3a7e9402dd] = env->getMethodID(cls, "getSubSpace", "()Lorg/hipparchus/geometry/euclidean/oned/Euclidean1D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint Euclidean2D::getDimension() const
          {
            return env->callIntMethod(this$, mids$[mid_getDimension_570ce0828f81a2c1]);
          }

          Euclidean2D Euclidean2D::getInstance()
          {
            jclass cls = env->getClass(initializeClass);
            return Euclidean2D(env->callStaticObjectMethod(cls, mids$[mid_getInstance_6c1c21e9986360d8]));
          }

          ::org::hipparchus::geometry::euclidean::oned::Euclidean1D Euclidean2D::getSubSpace() const
          {
            return ::org::hipparchus::geometry::euclidean::oned::Euclidean1D(env->callObjectMethod(this$, mids$[mid_getSubSpace_dc026f3a7e9402dd]));
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
          static PyObject *t_Euclidean2D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Euclidean2D_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Euclidean2D_getDimension(t_Euclidean2D *self);
          static PyObject *t_Euclidean2D_getInstance(PyTypeObject *type);
          static PyObject *t_Euclidean2D_getSubSpace(t_Euclidean2D *self);
          static PyObject *t_Euclidean2D_get__dimension(t_Euclidean2D *self, void *data);
          static PyObject *t_Euclidean2D_get__instance(t_Euclidean2D *self, void *data);
          static PyObject *t_Euclidean2D_get__subSpace(t_Euclidean2D *self, void *data);
          static PyGetSetDef t_Euclidean2D__fields_[] = {
            DECLARE_GET_FIELD(t_Euclidean2D, dimension),
            DECLARE_GET_FIELD(t_Euclidean2D, instance),
            DECLARE_GET_FIELD(t_Euclidean2D, subSpace),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Euclidean2D__methods_[] = {
            DECLARE_METHOD(t_Euclidean2D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Euclidean2D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Euclidean2D, getDimension, METH_NOARGS),
            DECLARE_METHOD(t_Euclidean2D, getInstance, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_Euclidean2D, getSubSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Euclidean2D)[] = {
            { Py_tp_methods, t_Euclidean2D__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Euclidean2D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Euclidean2D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Euclidean2D, t_Euclidean2D, Euclidean2D);

          void t_Euclidean2D::install(PyObject *module)
          {
            installType(&PY_TYPE(Euclidean2D), &PY_TYPE_DEF(Euclidean2D), module, "Euclidean2D", 0);
          }

          void t_Euclidean2D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean2D), "class_", make_descriptor(Euclidean2D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean2D), "wrapfn_", make_descriptor(t_Euclidean2D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Euclidean2D), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Euclidean2D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Euclidean2D::initializeClass, 1)))
              return NULL;
            return t_Euclidean2D::wrap_Object(Euclidean2D(((t_Euclidean2D *) arg)->object.this$));
          }
          static PyObject *t_Euclidean2D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Euclidean2D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Euclidean2D_getDimension(t_Euclidean2D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDimension());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Euclidean2D_getInstance(PyTypeObject *type)
          {
            Euclidean2D result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Euclidean2D::getInstance());
            return t_Euclidean2D::wrap_Object(result);
          }

          static PyObject *t_Euclidean2D_getSubSpace(t_Euclidean2D *self)
          {
            ::org::hipparchus::geometry::euclidean::oned::Euclidean1D result((jobject) NULL);
            OBJ_CALL(result = self->object.getSubSpace());
            return ::org::hipparchus::geometry::euclidean::oned::t_Euclidean1D::wrap_Object(result);
          }

          static PyObject *t_Euclidean2D_get__dimension(t_Euclidean2D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDimension());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_Euclidean2D_get__instance(t_Euclidean2D *self, void *data)
          {
            Euclidean2D value((jobject) NULL);
            OBJ_CALL(value = self->object.getInstance());
            return t_Euclidean2D::wrap_Object(value);
          }

          static PyObject *t_Euclidean2D_get__subSpace(t_Euclidean2D *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::oned::Euclidean1D value((jobject) NULL);
            OBJ_CALL(value = self->object.getSubSpace());
            return ::org::hipparchus::geometry::euclidean::oned::t_Euclidean1D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/PythonIntegerLeastSquareSolver.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolver.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PythonIntegerLeastSquareSolver::class$ = NULL;
          jmethodID *PythonIntegerLeastSquareSolver::mids$ = NULL;
          bool PythonIntegerLeastSquareSolver::live$ = false;

          jclass PythonIntegerLeastSquareSolver::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PythonIntegerLeastSquareSolver");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_solveILS_191219eb4c75acaf] = env->getMethodID(cls, "solveILS", "(I[D[ILorg/hipparchus/linear/RealMatrix;)[Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonIntegerLeastSquareSolver::PythonIntegerLeastSquareSolver() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void PythonIntegerLeastSquareSolver::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonIntegerLeastSquareSolver::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonIntegerLeastSquareSolver::pythonExtension(jlong a0) const
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
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_PythonIntegerLeastSquareSolver_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonIntegerLeastSquareSolver_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonIntegerLeastSquareSolver_init_(t_PythonIntegerLeastSquareSolver *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonIntegerLeastSquareSolver_finalize(t_PythonIntegerLeastSquareSolver *self);
          static PyObject *t_PythonIntegerLeastSquareSolver_pythonExtension(t_PythonIntegerLeastSquareSolver *self, PyObject *args);
          static void JNICALL t_PythonIntegerLeastSquareSolver_pythonDecRef0(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonIntegerLeastSquareSolver_solveILS1(JNIEnv *jenv, jobject jobj, jint a0, jobject a1, jobject a2, jobject a3);
          static PyObject *t_PythonIntegerLeastSquareSolver_get__self(t_PythonIntegerLeastSquareSolver *self, void *data);
          static PyGetSetDef t_PythonIntegerLeastSquareSolver__fields_[] = {
            DECLARE_GET_FIELD(t_PythonIntegerLeastSquareSolver, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonIntegerLeastSquareSolver__methods_[] = {
            DECLARE_METHOD(t_PythonIntegerLeastSquareSolver, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonIntegerLeastSquareSolver, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonIntegerLeastSquareSolver, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonIntegerLeastSquareSolver, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonIntegerLeastSquareSolver)[] = {
            { Py_tp_methods, t_PythonIntegerLeastSquareSolver__methods_ },
            { Py_tp_init, (void *) t_PythonIntegerLeastSquareSolver_init_ },
            { Py_tp_getset, t_PythonIntegerLeastSquareSolver__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonIntegerLeastSquareSolver)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonIntegerLeastSquareSolver, t_PythonIntegerLeastSquareSolver, PythonIntegerLeastSquareSolver);

          void t_PythonIntegerLeastSquareSolver::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonIntegerLeastSquareSolver), &PY_TYPE_DEF(PythonIntegerLeastSquareSolver), module, "PythonIntegerLeastSquareSolver", 1);
          }

          void t_PythonIntegerLeastSquareSolver::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIntegerLeastSquareSolver), "class_", make_descriptor(PythonIntegerLeastSquareSolver::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIntegerLeastSquareSolver), "wrapfn_", make_descriptor(t_PythonIntegerLeastSquareSolver::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIntegerLeastSquareSolver), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonIntegerLeastSquareSolver::initializeClass);
            JNINativeMethod methods[] = {
              { "pythonDecRef", "()V", (void *) t_PythonIntegerLeastSquareSolver_pythonDecRef0 },
              { "solveILS", "(I[D[ILorg/hipparchus/linear/RealMatrix;)[Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;", (void *) t_PythonIntegerLeastSquareSolver_solveILS1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonIntegerLeastSquareSolver_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonIntegerLeastSquareSolver::initializeClass, 1)))
              return NULL;
            return t_PythonIntegerLeastSquareSolver::wrap_Object(PythonIntegerLeastSquareSolver(((t_PythonIntegerLeastSquareSolver *) arg)->object.this$));
          }
          static PyObject *t_PythonIntegerLeastSquareSolver_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonIntegerLeastSquareSolver::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonIntegerLeastSquareSolver_init_(t_PythonIntegerLeastSquareSolver *self, PyObject *args, PyObject *kwds)
          {
            PythonIntegerLeastSquareSolver object((jobject) NULL);

            INT_CALL(object = PythonIntegerLeastSquareSolver());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonIntegerLeastSquareSolver_finalize(t_PythonIntegerLeastSquareSolver *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonIntegerLeastSquareSolver_pythonExtension(t_PythonIntegerLeastSquareSolver *self, PyObject *args)
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

          static void JNICALL t_PythonIntegerLeastSquareSolver_pythonDecRef0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIntegerLeastSquareSolver::mids$[PythonIntegerLeastSquareSolver::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonIntegerLeastSquareSolver::mids$[PythonIntegerLeastSquareSolver::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static jobject JNICALL t_PythonIntegerLeastSquareSolver_solveILS1(JNIEnv *jenv, jobject jobj, jint a0, jobject a1, jobject a2, jobject a3)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIntegerLeastSquareSolver::mids$[PythonIntegerLeastSquareSolver::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution > value((jobject) NULL);
            PyObject *o1 = JArray<jdouble>(a1).wrap();
            PyObject *o2 = JArray<jint>(a2).wrap();
            PyObject *o3 = ::org::hipparchus::linear::t_RealMatrix::wrap_Object(::org::hipparchus::linear::RealMatrix(a3));
            PyObject *result = PyObject_CallMethod(obj, "solveILS", "iOOO", (int) a0, o1, o2, o3);
            Py_DECREF(o1);
            Py_DECREF(o2);
            Py_DECREF(o3);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "[k", ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution::initializeClass, &value))
            {
              throwTypeError("solveILS", result);
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

          static PyObject *t_PythonIntegerLeastSquareSolver_get__self(t_PythonIntegerLeastSquareSolver *self, void *data)
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
#include "org/orekit/frames/PythonEOPHistoryLoader.h"
#include "org/orekit/frames/EOPEntry.h"
#include "java/lang/Throwable.h"
#include "java/util/SortedSet.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/IERSConventions$NutationCorrectionConverter.h"
#include "org/orekit/frames/EopHistoryLoader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonEOPHistoryLoader::class$ = NULL;
      jmethodID *PythonEOPHistoryLoader::mids$ = NULL;
      bool PythonEOPHistoryLoader::live$ = false;

      jclass PythonEOPHistoryLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonEOPHistoryLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_fillHistory_fcb7f5d6983b9f18] = env->getMethodID(cls, "fillHistory", "(Lorg/orekit/utils/IERSConventions$NutationCorrectionConverter;Ljava/util/SortedSet;)V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonEOPHistoryLoader::PythonEOPHistoryLoader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonEOPHistoryLoader::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonEOPHistoryLoader::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonEOPHistoryLoader::pythonExtension(jlong a0) const
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
    namespace frames {
      static PyObject *t_PythonEOPHistoryLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonEOPHistoryLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonEOPHistoryLoader_init_(t_PythonEOPHistoryLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonEOPHistoryLoader_finalize(t_PythonEOPHistoryLoader *self);
      static PyObject *t_PythonEOPHistoryLoader_pythonExtension(t_PythonEOPHistoryLoader *self, PyObject *args);
      static void JNICALL t_PythonEOPHistoryLoader_fillHistory0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonEOPHistoryLoader_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonEOPHistoryLoader_get__self(t_PythonEOPHistoryLoader *self, void *data);
      static PyGetSetDef t_PythonEOPHistoryLoader__fields_[] = {
        DECLARE_GET_FIELD(t_PythonEOPHistoryLoader, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonEOPHistoryLoader__methods_[] = {
        DECLARE_METHOD(t_PythonEOPHistoryLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonEOPHistoryLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonEOPHistoryLoader, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonEOPHistoryLoader, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonEOPHistoryLoader)[] = {
        { Py_tp_methods, t_PythonEOPHistoryLoader__methods_ },
        { Py_tp_init, (void *) t_PythonEOPHistoryLoader_init_ },
        { Py_tp_getset, t_PythonEOPHistoryLoader__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonEOPHistoryLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonEOPHistoryLoader, t_PythonEOPHistoryLoader, PythonEOPHistoryLoader);

      void t_PythonEOPHistoryLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonEOPHistoryLoader), &PY_TYPE_DEF(PythonEOPHistoryLoader), module, "PythonEOPHistoryLoader", 1);
      }

      void t_PythonEOPHistoryLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEOPHistoryLoader), "class_", make_descriptor(PythonEOPHistoryLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEOPHistoryLoader), "wrapfn_", make_descriptor(t_PythonEOPHistoryLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEOPHistoryLoader), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonEOPHistoryLoader::initializeClass);
        JNINativeMethod methods[] = {
          { "fillHistory", "(Lorg/orekit/utils/IERSConventions$NutationCorrectionConverter;Ljava/util/SortedSet;)V", (void *) t_PythonEOPHistoryLoader_fillHistory0 },
          { "pythonDecRef", "()V", (void *) t_PythonEOPHistoryLoader_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonEOPHistoryLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonEOPHistoryLoader::initializeClass, 1)))
          return NULL;
        return t_PythonEOPHistoryLoader::wrap_Object(PythonEOPHistoryLoader(((t_PythonEOPHistoryLoader *) arg)->object.this$));
      }
      static PyObject *t_PythonEOPHistoryLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonEOPHistoryLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonEOPHistoryLoader_init_(t_PythonEOPHistoryLoader *self, PyObject *args, PyObject *kwds)
      {
        PythonEOPHistoryLoader object((jobject) NULL);

        INT_CALL(object = PythonEOPHistoryLoader());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonEOPHistoryLoader_finalize(t_PythonEOPHistoryLoader *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonEOPHistoryLoader_pythonExtension(t_PythonEOPHistoryLoader *self, PyObject *args)
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

      static void JNICALL t_PythonEOPHistoryLoader_fillHistory0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonEOPHistoryLoader::mids$[PythonEOPHistoryLoader::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions$NutationCorrectionConverter::wrap_Object(::org::orekit::utils::IERSConventions$NutationCorrectionConverter(a0));
        PyObject *o1 = ::java::util::t_SortedSet::wrap_Object(::java::util::SortedSet(a1));
        PyObject *result = PyObject_CallMethod(obj, "fillHistory", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonEOPHistoryLoader_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonEOPHistoryLoader::mids$[PythonEOPHistoryLoader::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonEOPHistoryLoader::mids$[PythonEOPHistoryLoader::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonEOPHistoryLoader_get__self(t_PythonEOPHistoryLoader *self, void *data)
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
#include "org/orekit/bodies/Loxodrome.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *Loxodrome::class$ = NULL;
      jmethodID *Loxodrome::mids$ = NULL;
      bool Loxodrome::live$ = false;

      jclass Loxodrome::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/Loxodrome");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_c56db44a8458e921] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/GeodeticPoint;DLorg/orekit/bodies/OneAxisEllipsoid;)V");
          mids$[mid_init$_99ae746ddfb04a5b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/GeodeticPoint;DLorg/orekit/bodies/OneAxisEllipsoid;D)V");
          mids$[mid_getAltitude_dff5885c2c873297] = env->getMethodID(cls, "getAltitude", "()D");
          mids$[mid_getAzimuth_dff5885c2c873297] = env->getMethodID(cls, "getAzimuth", "()D");
          mids$[mid_getBody_000d48aad6c74b0a] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/OneAxisEllipsoid;");
          mids$[mid_getPoint_82d0a9bcd06489bb] = env->getMethodID(cls, "getPoint", "()Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_pointAtDistance_a6daea86c60e2668] = env->getMethodID(cls, "pointAtDistance", "(D)Lorg/orekit/bodies/GeodeticPoint;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Loxodrome::Loxodrome(const ::org::orekit::bodies::GeodeticPoint & a0, jdouble a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c56db44a8458e921, a0.this$, a1, a2.this$)) {}

      Loxodrome::Loxodrome(const ::org::orekit::bodies::GeodeticPoint & a0, jdouble a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_99ae746ddfb04a5b, a0.this$, a1, a2.this$, a3)) {}

      jdouble Loxodrome::getAltitude() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAltitude_dff5885c2c873297]);
      }

      jdouble Loxodrome::getAzimuth() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAzimuth_dff5885c2c873297]);
      }

      ::org::orekit::bodies::OneAxisEllipsoid Loxodrome::getBody() const
      {
        return ::org::orekit::bodies::OneAxisEllipsoid(env->callObjectMethod(this$, mids$[mid_getBody_000d48aad6c74b0a]));
      }

      ::org::orekit::bodies::GeodeticPoint Loxodrome::getPoint() const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getPoint_82d0a9bcd06489bb]));
      }

      ::org::orekit::bodies::GeodeticPoint Loxodrome::pointAtDistance(jdouble a0) const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_pointAtDistance_a6daea86c60e2668], a0));
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
      static PyObject *t_Loxodrome_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Loxodrome_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Loxodrome_init_(t_Loxodrome *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Loxodrome_getAltitude(t_Loxodrome *self);
      static PyObject *t_Loxodrome_getAzimuth(t_Loxodrome *self);
      static PyObject *t_Loxodrome_getBody(t_Loxodrome *self);
      static PyObject *t_Loxodrome_getPoint(t_Loxodrome *self);
      static PyObject *t_Loxodrome_pointAtDistance(t_Loxodrome *self, PyObject *arg);
      static PyObject *t_Loxodrome_get__altitude(t_Loxodrome *self, void *data);
      static PyObject *t_Loxodrome_get__azimuth(t_Loxodrome *self, void *data);
      static PyObject *t_Loxodrome_get__body(t_Loxodrome *self, void *data);
      static PyObject *t_Loxodrome_get__point(t_Loxodrome *self, void *data);
      static PyGetSetDef t_Loxodrome__fields_[] = {
        DECLARE_GET_FIELD(t_Loxodrome, altitude),
        DECLARE_GET_FIELD(t_Loxodrome, azimuth),
        DECLARE_GET_FIELD(t_Loxodrome, body),
        DECLARE_GET_FIELD(t_Loxodrome, point),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Loxodrome__methods_[] = {
        DECLARE_METHOD(t_Loxodrome, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Loxodrome, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Loxodrome, getAltitude, METH_NOARGS),
        DECLARE_METHOD(t_Loxodrome, getAzimuth, METH_NOARGS),
        DECLARE_METHOD(t_Loxodrome, getBody, METH_NOARGS),
        DECLARE_METHOD(t_Loxodrome, getPoint, METH_NOARGS),
        DECLARE_METHOD(t_Loxodrome, pointAtDistance, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Loxodrome)[] = {
        { Py_tp_methods, t_Loxodrome__methods_ },
        { Py_tp_init, (void *) t_Loxodrome_init_ },
        { Py_tp_getset, t_Loxodrome__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Loxodrome)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Loxodrome, t_Loxodrome, Loxodrome);

      void t_Loxodrome::install(PyObject *module)
      {
        installType(&PY_TYPE(Loxodrome), &PY_TYPE_DEF(Loxodrome), module, "Loxodrome", 0);
      }

      void t_Loxodrome::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Loxodrome), "class_", make_descriptor(Loxodrome::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Loxodrome), "wrapfn_", make_descriptor(t_Loxodrome::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Loxodrome), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Loxodrome_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Loxodrome::initializeClass, 1)))
          return NULL;
        return t_Loxodrome::wrap_Object(Loxodrome(((t_Loxodrome *) arg)->object.this$));
      }
      static PyObject *t_Loxodrome_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Loxodrome::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Loxodrome_init_(t_Loxodrome *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
            Loxodrome object((jobject) NULL);

            if (!parseArgs(args, "kDk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Loxodrome(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
            jdouble a3;
            Loxodrome object((jobject) NULL);

            if (!parseArgs(args, "kDkD", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = Loxodrome(a0, a1, a2, a3));
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

      static PyObject *t_Loxodrome_getAltitude(t_Loxodrome *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAltitude());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Loxodrome_getAzimuth(t_Loxodrome *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAzimuth());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Loxodrome_getBody(t_Loxodrome *self)
      {
        ::org::orekit::bodies::OneAxisEllipsoid result((jobject) NULL);
        OBJ_CALL(result = self->object.getBody());
        return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(result);
      }

      static PyObject *t_Loxodrome_getPoint(t_Loxodrome *self)
      {
        ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);
        OBJ_CALL(result = self->object.getPoint());
        return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
      }

      static PyObject *t_Loxodrome_pointAtDistance(t_Loxodrome *self, PyObject *arg)
      {
        jdouble a0;
        ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.pointAtDistance(a0));
          return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "pointAtDistance", arg);
        return NULL;
      }

      static PyObject *t_Loxodrome_get__altitude(t_Loxodrome *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAltitude());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Loxodrome_get__azimuth(t_Loxodrome *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAzimuth());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Loxodrome_get__body(t_Loxodrome *self, void *data)
      {
        ::org::orekit::bodies::OneAxisEllipsoid value((jobject) NULL);
        OBJ_CALL(value = self->object.getBody());
        return ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(value);
      }

      static PyObject *t_Loxodrome_get__point(t_Loxodrome *self, void *data)
      {
        ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
        OBJ_CALL(value = self->object.getPoint());
        return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(value);
      }
    }
  }
}
