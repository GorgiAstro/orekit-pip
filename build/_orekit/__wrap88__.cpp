#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/PredictedEOPHistory.h"
#include "org/orekit/frames/EOPFitter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PredictedEOPHistory::class$ = NULL;
      jmethodID *PredictedEOPHistory::mids$ = NULL;
      bool PredictedEOPHistory::live$ = false;

      jclass PredictedEOPHistory::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PredictedEOPHistory");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7667ee5f039a6d7a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/EOPHistory;DLorg/orekit/frames/EOPFitter;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PredictedEOPHistory::PredictedEOPHistory(const ::org::orekit::frames::EOPHistory & a0, jdouble a1, const ::org::orekit::frames::EOPFitter & a2) : ::org::orekit::frames::EOPHistory(env->newObject(initializeClass, &mids$, mid_init$_7667ee5f039a6d7a, a0.this$, a1, a2.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_PredictedEOPHistory_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PredictedEOPHistory_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PredictedEOPHistory_init_(t_PredictedEOPHistory *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_PredictedEOPHistory__methods_[] = {
        DECLARE_METHOD(t_PredictedEOPHistory, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PredictedEOPHistory, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PredictedEOPHistory)[] = {
        { Py_tp_methods, t_PredictedEOPHistory__methods_ },
        { Py_tp_init, (void *) t_PredictedEOPHistory_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PredictedEOPHistory)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::EOPHistory),
        NULL
      };

      DEFINE_TYPE(PredictedEOPHistory, t_PredictedEOPHistory, PredictedEOPHistory);

      void t_PredictedEOPHistory::install(PyObject *module)
      {
        installType(&PY_TYPE(PredictedEOPHistory), &PY_TYPE_DEF(PredictedEOPHistory), module, "PredictedEOPHistory", 0);
      }

      void t_PredictedEOPHistory::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PredictedEOPHistory), "class_", make_descriptor(PredictedEOPHistory::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PredictedEOPHistory), "wrapfn_", make_descriptor(t_PredictedEOPHistory::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PredictedEOPHistory), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PredictedEOPHistory_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PredictedEOPHistory::initializeClass, 1)))
          return NULL;
        return t_PredictedEOPHistory::wrap_Object(PredictedEOPHistory(((t_PredictedEOPHistory *) arg)->object.this$));
      }
      static PyObject *t_PredictedEOPHistory_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PredictedEOPHistory::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PredictedEOPHistory_init_(t_PredictedEOPHistory *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::EOPHistory a0((jobject) NULL);
        jdouble a1;
        ::org::orekit::frames::EOPFitter a2((jobject) NULL);
        PredictedEOPHistory object((jobject) NULL);

        if (!parseArgs(args, "kDk", ::org::orekit::frames::EOPHistory::initializeClass, ::org::orekit::frames::EOPFitter::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = PredictedEOPHistory(a0, a1, a2));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/PythonFieldShortPeriodTerms.h"
#include "java/util/Map.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Throwable.h"
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

            ::java::lang::Class *PythonFieldShortPeriodTerms::class$ = NULL;
            jmethodID *PythonFieldShortPeriodTerms::mids$ = NULL;
            bool PythonFieldShortPeriodTerms::live$ = false;

            jclass PythonFieldShortPeriodTerms::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/PythonFieldShortPeriodTerms");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getCoefficients_ba34939e32c530ba] = env->getMethodID(cls, "getCoefficients", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Set;)Ljava/util/Map;");
                mids$[mid_getCoefficientsKeyPrefix_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getCoefficientsKeyPrefix", "()Ljava/lang/String;");
                mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_value_738d63f4c1fff02e] = env->getMethodID(cls, "value", "(Lorg/orekit/orbits/FieldOrbit;)[Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonFieldShortPeriodTerms::PythonFieldShortPeriodTerms() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            void PythonFieldShortPeriodTerms::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
            }

            jlong PythonFieldShortPeriodTerms::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
            }

            void PythonFieldShortPeriodTerms::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
            static PyObject *t_PythonFieldShortPeriodTerms_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonFieldShortPeriodTerms_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonFieldShortPeriodTerms_of_(t_PythonFieldShortPeriodTerms *self, PyObject *args);
            static int t_PythonFieldShortPeriodTerms_init_(t_PythonFieldShortPeriodTerms *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonFieldShortPeriodTerms_finalize(t_PythonFieldShortPeriodTerms *self);
            static PyObject *t_PythonFieldShortPeriodTerms_pythonExtension(t_PythonFieldShortPeriodTerms *self, PyObject *args);
            static jobject JNICALL t_PythonFieldShortPeriodTerms_getCoefficients0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static jobject JNICALL t_PythonFieldShortPeriodTerms_getCoefficientsKeyPrefix1(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonFieldShortPeriodTerms_pythonDecRef2(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonFieldShortPeriodTerms_value3(JNIEnv *jenv, jobject jobj, jobject a0);
            static PyObject *t_PythonFieldShortPeriodTerms_get__self(t_PythonFieldShortPeriodTerms *self, void *data);
            static PyObject *t_PythonFieldShortPeriodTerms_get__parameters_(t_PythonFieldShortPeriodTerms *self, void *data);
            static PyGetSetDef t_PythonFieldShortPeriodTerms__fields_[] = {
              DECLARE_GET_FIELD(t_PythonFieldShortPeriodTerms, self),
              DECLARE_GET_FIELD(t_PythonFieldShortPeriodTerms, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonFieldShortPeriodTerms__methods_[] = {
              DECLARE_METHOD(t_PythonFieldShortPeriodTerms, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonFieldShortPeriodTerms, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonFieldShortPeriodTerms, of_, METH_VARARGS),
              DECLARE_METHOD(t_PythonFieldShortPeriodTerms, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonFieldShortPeriodTerms, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonFieldShortPeriodTerms)[] = {
              { Py_tp_methods, t_PythonFieldShortPeriodTerms__methods_ },
              { Py_tp_init, (void *) t_PythonFieldShortPeriodTerms_init_ },
              { Py_tp_getset, t_PythonFieldShortPeriodTerms__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonFieldShortPeriodTerms)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonFieldShortPeriodTerms, t_PythonFieldShortPeriodTerms, PythonFieldShortPeriodTerms);
            PyObject *t_PythonFieldShortPeriodTerms::wrap_Object(const PythonFieldShortPeriodTerms& object, PyTypeObject *p0)
            {
              PyObject *obj = t_PythonFieldShortPeriodTerms::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonFieldShortPeriodTerms *self = (t_PythonFieldShortPeriodTerms *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_PythonFieldShortPeriodTerms::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_PythonFieldShortPeriodTerms::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonFieldShortPeriodTerms *self = (t_PythonFieldShortPeriodTerms *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_PythonFieldShortPeriodTerms::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonFieldShortPeriodTerms), &PY_TYPE_DEF(PythonFieldShortPeriodTerms), module, "PythonFieldShortPeriodTerms", 1);
            }

            void t_PythonFieldShortPeriodTerms::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldShortPeriodTerms), "class_", make_descriptor(PythonFieldShortPeriodTerms::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldShortPeriodTerms), "wrapfn_", make_descriptor(t_PythonFieldShortPeriodTerms::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldShortPeriodTerms), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonFieldShortPeriodTerms::initializeClass);
              JNINativeMethod methods[] = {
                { "getCoefficients", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Set;)Ljava/util/Map;", (void *) t_PythonFieldShortPeriodTerms_getCoefficients0 },
                { "getCoefficientsKeyPrefix", "()Ljava/lang/String;", (void *) t_PythonFieldShortPeriodTerms_getCoefficientsKeyPrefix1 },
                { "pythonDecRef", "()V", (void *) t_PythonFieldShortPeriodTerms_pythonDecRef2 },
                { "value", "(Lorg/orekit/orbits/FieldOrbit;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonFieldShortPeriodTerms_value3 },
              };
              env->registerNatives(cls, methods, 4);
            }

            static PyObject *t_PythonFieldShortPeriodTerms_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonFieldShortPeriodTerms::initializeClass, 1)))
                return NULL;
              return t_PythonFieldShortPeriodTerms::wrap_Object(PythonFieldShortPeriodTerms(((t_PythonFieldShortPeriodTerms *) arg)->object.this$));
            }
            static PyObject *t_PythonFieldShortPeriodTerms_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonFieldShortPeriodTerms::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PythonFieldShortPeriodTerms_of_(t_PythonFieldShortPeriodTerms *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_PythonFieldShortPeriodTerms_init_(t_PythonFieldShortPeriodTerms *self, PyObject *args, PyObject *kwds)
            {
              PythonFieldShortPeriodTerms object((jobject) NULL);

              INT_CALL(object = PythonFieldShortPeriodTerms());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonFieldShortPeriodTerms_finalize(t_PythonFieldShortPeriodTerms *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonFieldShortPeriodTerms_pythonExtension(t_PythonFieldShortPeriodTerms *self, PyObject *args)
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

            static jobject JNICALL t_PythonFieldShortPeriodTerms_getCoefficients0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonFieldShortPeriodTerms::mids$[PythonFieldShortPeriodTerms::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::util::Map value((jobject) NULL);
              PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
              PyObject *o1 = ::java::util::t_Set::wrap_Object(::java::util::Set(a1));
              PyObject *result = PyObject_CallMethod(obj, "getCoefficients", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::java::util::Map::initializeClass, &value))
              {
                throwTypeError("getCoefficients", result);
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

            static jobject JNICALL t_PythonFieldShortPeriodTerms_getCoefficientsKeyPrefix1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonFieldShortPeriodTerms::mids$[PythonFieldShortPeriodTerms::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getCoefficientsKeyPrefix", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("getCoefficientsKeyPrefix", result);
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

            static void JNICALL t_PythonFieldShortPeriodTerms_pythonDecRef2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonFieldShortPeriodTerms::mids$[PythonFieldShortPeriodTerms::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonFieldShortPeriodTerms::mids$[PythonFieldShortPeriodTerms::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static jobject JNICALL t_PythonFieldShortPeriodTerms_value3(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonFieldShortPeriodTerms::mids$[PythonFieldShortPeriodTerms::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
              PyObject *o0 = ::org::orekit::orbits::t_FieldOrbit::wrap_Object(::org::orekit::orbits::FieldOrbit(a0));
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

            static PyObject *t_PythonFieldShortPeriodTerms_get__self(t_PythonFieldShortPeriodTerms *self, void *data)
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
            static PyObject *t_PythonFieldShortPeriodTerms_get__parameters_(t_PythonFieldShortPeriodTerms *self, void *data)
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
#include "org/orekit/utils/PythonStateJacobian.h"
#include "org/orekit/utils/StateJacobian.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonStateJacobian::class$ = NULL;
      jmethodID *PythonStateJacobian::mids$ = NULL;
      bool PythonStateJacobian::live$ = false;

      jclass PythonStateJacobian::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonStateJacobian");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_value_92a90247fa9f7aa3] = env->getMethodID(cls, "value", "(Lorg/orekit/propagation/SpacecraftState;)[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonStateJacobian::PythonStateJacobian() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonStateJacobian::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonStateJacobian::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonStateJacobian::pythonExtension(jlong a0) const
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
      static PyObject *t_PythonStateJacobian_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonStateJacobian_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonStateJacobian_init_(t_PythonStateJacobian *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonStateJacobian_finalize(t_PythonStateJacobian *self);
      static PyObject *t_PythonStateJacobian_pythonExtension(t_PythonStateJacobian *self, PyObject *args);
      static void JNICALL t_PythonStateJacobian_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonStateJacobian_value1(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonStateJacobian_get__self(t_PythonStateJacobian *self, void *data);
      static PyGetSetDef t_PythonStateJacobian__fields_[] = {
        DECLARE_GET_FIELD(t_PythonStateJacobian, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonStateJacobian__methods_[] = {
        DECLARE_METHOD(t_PythonStateJacobian, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonStateJacobian, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonStateJacobian, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonStateJacobian, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonStateJacobian)[] = {
        { Py_tp_methods, t_PythonStateJacobian__methods_ },
        { Py_tp_init, (void *) t_PythonStateJacobian_init_ },
        { Py_tp_getset, t_PythonStateJacobian__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonStateJacobian)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonStateJacobian, t_PythonStateJacobian, PythonStateJacobian);

      void t_PythonStateJacobian::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonStateJacobian), &PY_TYPE_DEF(PythonStateJacobian), module, "PythonStateJacobian", 1);
      }

      void t_PythonStateJacobian::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStateJacobian), "class_", make_descriptor(PythonStateJacobian::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStateJacobian), "wrapfn_", make_descriptor(t_PythonStateJacobian::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStateJacobian), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonStateJacobian::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonStateJacobian_pythonDecRef0 },
          { "value", "(Lorg/orekit/propagation/SpacecraftState;)[[D", (void *) t_PythonStateJacobian_value1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonStateJacobian_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonStateJacobian::initializeClass, 1)))
          return NULL;
        return t_PythonStateJacobian::wrap_Object(PythonStateJacobian(((t_PythonStateJacobian *) arg)->object.this$));
      }
      static PyObject *t_PythonStateJacobian_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonStateJacobian::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonStateJacobian_init_(t_PythonStateJacobian *self, PyObject *args, PyObject *kwds)
      {
        PythonStateJacobian object((jobject) NULL);

        INT_CALL(object = PythonStateJacobian());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonStateJacobian_finalize(t_PythonStateJacobian *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonStateJacobian_pythonExtension(t_PythonStateJacobian *self, PyObject *args)
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

      static void JNICALL t_PythonStateJacobian_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStateJacobian::mids$[PythonStateJacobian::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonStateJacobian::mids$[PythonStateJacobian::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonStateJacobian_value1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStateJacobian::mids$[PythonStateJacobian::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< JArray< jdouble > > value((jobject) NULL);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[[D", &value))
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

      static PyObject *t_PythonStateJacobian_get__self(t_PythonStateJacobian *self, void *data)
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
#include "org/hipparchus/stat/descriptive/StreamingStatistics.h"
#include "org/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/util/function/DoubleConsumer.h"
#include "org/hipparchus/stat/descriptive/StatisticalSummary.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/stat/descriptive/StreamingStatistics.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *StreamingStatistics::class$ = NULL;
        jmethodID *StreamingStatistics::mids$ = NULL;
        bool StreamingStatistics::live$ = false;

        jclass StreamingStatistics::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/StreamingStatistics");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_6f61eb577a811a32] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/random/RandomGenerator;)V");
            mids$[mid_accept_8ba9fe7a847cecad] = env->getMethodID(cls, "accept", "(D)V");
            mids$[mid_addValue_8ba9fe7a847cecad] = env->getMethodID(cls, "addValue", "(D)V");
            mids$[mid_aggregate_3cc4cef4f5479457] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/StreamingStatistics;)V");
            mids$[mid_builder_51916748f28e7e70] = env->getStaticMethodID(cls, "builder", "()Lorg/hipparchus/stat/descriptive/StreamingStatistics$StreamingStatisticsBuilder;");
            mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_copy_32dcaf3e8c6a3a28] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/StreamingStatistics;");
            mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getGeometricMean_b74f83833fdad017] = env->getMethodID(cls, "getGeometricMean", "()D");
            mids$[mid_getMax_b74f83833fdad017] = env->getMethodID(cls, "getMax", "()D");
            mids$[mid_getMean_b74f83833fdad017] = env->getMethodID(cls, "getMean", "()D");
            mids$[mid_getMedian_b74f83833fdad017] = env->getMethodID(cls, "getMedian", "()D");
            mids$[mid_getMin_b74f83833fdad017] = env->getMethodID(cls, "getMin", "()D");
            mids$[mid_getN_6c0ce7e438e5ded4] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getPercentile_04fd0666b613d2ab] = env->getMethodID(cls, "getPercentile", "(D)D");
            mids$[mid_getPopulationVariance_b74f83833fdad017] = env->getMethodID(cls, "getPopulationVariance", "()D");
            mids$[mid_getQuadraticMean_b74f83833fdad017] = env->getMethodID(cls, "getQuadraticMean", "()D");
            mids$[mid_getSecondMoment_b74f83833fdad017] = env->getMethodID(cls, "getSecondMoment", "()D");
            mids$[mid_getStandardDeviation_b74f83833fdad017] = env->getMethodID(cls, "getStandardDeviation", "()D");
            mids$[mid_getSum_b74f83833fdad017] = env->getMethodID(cls, "getSum", "()D");
            mids$[mid_getSumOfLogs_b74f83833fdad017] = env->getMethodID(cls, "getSumOfLogs", "()D");
            mids$[mid_getSumOfSquares_b74f83833fdad017] = env->getMethodID(cls, "getSumOfSquares", "()D");
            mids$[mid_getSummary_ce50f3086162cae8] = env->getMethodID(cls, "getSummary", "()Lorg/hipparchus/stat/descriptive/StatisticalSummary;");
            mids$[mid_getVariance_b74f83833fdad017] = env->getMethodID(cls, "getVariance", "()D");
            mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StreamingStatistics::StreamingStatistics() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        StreamingStatistics::StreamingStatistics(jdouble a0, const ::org::hipparchus::random::RandomGenerator & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6f61eb577a811a32, a0, a1.this$)) {}

        void StreamingStatistics::accept(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_accept_8ba9fe7a847cecad], a0);
        }

        void StreamingStatistics::addValue(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addValue_8ba9fe7a847cecad], a0);
        }

        void StreamingStatistics::aggregate(const StreamingStatistics & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_aggregate_3cc4cef4f5479457], a0.this$);
        }

        ::org::hipparchus::stat::descriptive::StreamingStatistics$StreamingStatisticsBuilder StreamingStatistics::builder()
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::stat::descriptive::StreamingStatistics$StreamingStatisticsBuilder(env->callStaticObjectMethod(cls, mids$[mid_builder_51916748f28e7e70]));
        }

        void StreamingStatistics::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
        }

        StreamingStatistics StreamingStatistics::copy() const
        {
          return StreamingStatistics(env->callObjectMethod(this$, mids$[mid_copy_32dcaf3e8c6a3a28]));
        }

        jboolean StreamingStatistics::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
        }

        jdouble StreamingStatistics::getGeometricMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getGeometricMean_b74f83833fdad017]);
        }

        jdouble StreamingStatistics::getMax() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMax_b74f83833fdad017]);
        }

        jdouble StreamingStatistics::getMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMean_b74f83833fdad017]);
        }

        jdouble StreamingStatistics::getMedian() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMedian_b74f83833fdad017]);
        }

        jdouble StreamingStatistics::getMin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMin_b74f83833fdad017]);
        }

        jlong StreamingStatistics::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_6c0ce7e438e5ded4]);
        }

        jdouble StreamingStatistics::getPercentile(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPercentile_04fd0666b613d2ab], a0);
        }

        jdouble StreamingStatistics::getPopulationVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPopulationVariance_b74f83833fdad017]);
        }

        jdouble StreamingStatistics::getQuadraticMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getQuadraticMean_b74f83833fdad017]);
        }

        jdouble StreamingStatistics::getSecondMoment() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSecondMoment_b74f83833fdad017]);
        }

        jdouble StreamingStatistics::getStandardDeviation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStandardDeviation_b74f83833fdad017]);
        }

        jdouble StreamingStatistics::getSum() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSum_b74f83833fdad017]);
        }

        jdouble StreamingStatistics::getSumOfLogs() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSumOfLogs_b74f83833fdad017]);
        }

        jdouble StreamingStatistics::getSumOfSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSumOfSquares_b74f83833fdad017]);
        }

        ::org::hipparchus::stat::descriptive::StatisticalSummary StreamingStatistics::getSummary() const
        {
          return ::org::hipparchus::stat::descriptive::StatisticalSummary(env->callObjectMethod(this$, mids$[mid_getSummary_ce50f3086162cae8]));
        }

        jdouble StreamingStatistics::getVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getVariance_b74f83833fdad017]);
        }

        jint StreamingStatistics::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
        }

        ::java::lang::String StreamingStatistics::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
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
        static PyObject *t_StreamingStatistics_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StreamingStatistics_instance_(PyTypeObject *type, PyObject *arg);
        static int t_StreamingStatistics_init_(t_StreamingStatistics *self, PyObject *args, PyObject *kwds);
        static PyObject *t_StreamingStatistics_accept(t_StreamingStatistics *self, PyObject *arg);
        static PyObject *t_StreamingStatistics_addValue(t_StreamingStatistics *self, PyObject *arg);
        static PyObject *t_StreamingStatistics_aggregate(t_StreamingStatistics *self, PyObject *arg);
        static PyObject *t_StreamingStatistics_builder(PyTypeObject *type);
        static PyObject *t_StreamingStatistics_clear(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_copy(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_equals(t_StreamingStatistics *self, PyObject *args);
        static PyObject *t_StreamingStatistics_getGeometricMean(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getMax(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getMean(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getMedian(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getMin(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getN(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getPercentile(t_StreamingStatistics *self, PyObject *arg);
        static PyObject *t_StreamingStatistics_getPopulationVariance(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getQuadraticMean(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getSecondMoment(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getStandardDeviation(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getSum(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getSumOfLogs(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getSumOfSquares(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getSummary(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_getVariance(t_StreamingStatistics *self);
        static PyObject *t_StreamingStatistics_hashCode(t_StreamingStatistics *self, PyObject *args);
        static PyObject *t_StreamingStatistics_toString(t_StreamingStatistics *self, PyObject *args);
        static PyObject *t_StreamingStatistics_get__geometricMean(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__max(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__mean(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__median(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__min(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__n(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__populationVariance(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__quadraticMean(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__secondMoment(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__standardDeviation(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__sum(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__sumOfLogs(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__sumOfSquares(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__summary(t_StreamingStatistics *self, void *data);
        static PyObject *t_StreamingStatistics_get__variance(t_StreamingStatistics *self, void *data);
        static PyGetSetDef t_StreamingStatistics__fields_[] = {
          DECLARE_GET_FIELD(t_StreamingStatistics, geometricMean),
          DECLARE_GET_FIELD(t_StreamingStatistics, max),
          DECLARE_GET_FIELD(t_StreamingStatistics, mean),
          DECLARE_GET_FIELD(t_StreamingStatistics, median),
          DECLARE_GET_FIELD(t_StreamingStatistics, min),
          DECLARE_GET_FIELD(t_StreamingStatistics, n),
          DECLARE_GET_FIELD(t_StreamingStatistics, populationVariance),
          DECLARE_GET_FIELD(t_StreamingStatistics, quadraticMean),
          DECLARE_GET_FIELD(t_StreamingStatistics, secondMoment),
          DECLARE_GET_FIELD(t_StreamingStatistics, standardDeviation),
          DECLARE_GET_FIELD(t_StreamingStatistics, sum),
          DECLARE_GET_FIELD(t_StreamingStatistics, sumOfLogs),
          DECLARE_GET_FIELD(t_StreamingStatistics, sumOfSquares),
          DECLARE_GET_FIELD(t_StreamingStatistics, summary),
          DECLARE_GET_FIELD(t_StreamingStatistics, variance),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StreamingStatistics__methods_[] = {
          DECLARE_METHOD(t_StreamingStatistics, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingStatistics, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingStatistics, accept, METH_O),
          DECLARE_METHOD(t_StreamingStatistics, addValue, METH_O),
          DECLARE_METHOD(t_StreamingStatistics, aggregate, METH_O),
          DECLARE_METHOD(t_StreamingStatistics, builder, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_StreamingStatistics, clear, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, copy, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, equals, METH_VARARGS),
          DECLARE_METHOD(t_StreamingStatistics, getGeometricMean, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getMax, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getMean, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getMedian, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getMin, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getN, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getPercentile, METH_O),
          DECLARE_METHOD(t_StreamingStatistics, getPopulationVariance, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getQuadraticMean, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getSecondMoment, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getStandardDeviation, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getSum, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getSumOfLogs, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getSumOfSquares, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getSummary, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, getVariance, METH_NOARGS),
          DECLARE_METHOD(t_StreamingStatistics, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_StreamingStatistics, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StreamingStatistics)[] = {
          { Py_tp_methods, t_StreamingStatistics__methods_ },
          { Py_tp_init, (void *) t_StreamingStatistics_init_ },
          { Py_tp_getset, t_StreamingStatistics__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StreamingStatistics)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StreamingStatistics, t_StreamingStatistics, StreamingStatistics);

        void t_StreamingStatistics::install(PyObject *module)
        {
          installType(&PY_TYPE(StreamingStatistics), &PY_TYPE_DEF(StreamingStatistics), module, "StreamingStatistics", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingStatistics), "StreamingStatisticsBuilder", make_descriptor(&PY_TYPE_DEF(StreamingStatistics$StreamingStatisticsBuilder)));
        }

        void t_StreamingStatistics::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingStatistics), "class_", make_descriptor(StreamingStatistics::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingStatistics), "wrapfn_", make_descriptor(t_StreamingStatistics::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingStatistics), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StreamingStatistics_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StreamingStatistics::initializeClass, 1)))
            return NULL;
          return t_StreamingStatistics::wrap_Object(StreamingStatistics(((t_StreamingStatistics *) arg)->object.this$));
        }
        static PyObject *t_StreamingStatistics_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StreamingStatistics::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_StreamingStatistics_init_(t_StreamingStatistics *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              StreamingStatistics object((jobject) NULL);

              INT_CALL(object = StreamingStatistics());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              ::org::hipparchus::random::RandomGenerator a1((jobject) NULL);
              StreamingStatistics object((jobject) NULL);

              if (!parseArgs(args, "Dk", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1))
              {
                INT_CALL(object = StreamingStatistics(a0, a1));
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

        static PyObject *t_StreamingStatistics_accept(t_StreamingStatistics *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.accept(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "accept", arg);
          return NULL;
        }

        static PyObject *t_StreamingStatistics_addValue(t_StreamingStatistics *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.addValue(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addValue", arg);
          return NULL;
        }

        static PyObject *t_StreamingStatistics_aggregate(t_StreamingStatistics *self, PyObject *arg)
        {
          StreamingStatistics a0((jobject) NULL);

          if (!parseArg(arg, "k", StreamingStatistics::initializeClass, &a0))
          {
            OBJ_CALL(self->object.aggregate(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
          return NULL;
        }

        static PyObject *t_StreamingStatistics_builder(PyTypeObject *type)
        {
          ::org::hipparchus::stat::descriptive::StreamingStatistics$StreamingStatisticsBuilder result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::stat::descriptive::StreamingStatistics::builder());
          return ::org::hipparchus::stat::descriptive::t_StreamingStatistics$StreamingStatisticsBuilder::wrap_Object(result);
        }

        static PyObject *t_StreamingStatistics_clear(t_StreamingStatistics *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_StreamingStatistics_copy(t_StreamingStatistics *self)
        {
          StreamingStatistics result((jobject) NULL);
          OBJ_CALL(result = self->object.copy());
          return t_StreamingStatistics::wrap_Object(result);
        }

        static PyObject *t_StreamingStatistics_equals(t_StreamingStatistics *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(StreamingStatistics), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_StreamingStatistics_getGeometricMean(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getGeometricMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getMax(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMax());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getMean(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getMedian(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMedian());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getMin(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getN(t_StreamingStatistics *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_StreamingStatistics_getPercentile(t_StreamingStatistics *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getPercentile(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPercentile", arg);
          return NULL;
        }

        static PyObject *t_StreamingStatistics_getPopulationVariance(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPopulationVariance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getQuadraticMean(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getQuadraticMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getSecondMoment(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSecondMoment());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getStandardDeviation(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStandardDeviation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getSum(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSum());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getSumOfLogs(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSumOfLogs());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getSumOfSquares(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSumOfSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_getSummary(t_StreamingStatistics *self)
        {
          ::org::hipparchus::stat::descriptive::StatisticalSummary result((jobject) NULL);
          OBJ_CALL(result = self->object.getSummary());
          return ::org::hipparchus::stat::descriptive::t_StatisticalSummary::wrap_Object(result);
        }

        static PyObject *t_StreamingStatistics_getVariance(t_StreamingStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getVariance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StreamingStatistics_hashCode(t_StreamingStatistics *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(StreamingStatistics), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_StreamingStatistics_toString(t_StreamingStatistics *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(StreamingStatistics), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_StreamingStatistics_get__geometricMean(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getGeometricMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__max(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMax());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__mean(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__median(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMedian());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__min(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMin());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__n(t_StreamingStatistics *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_StreamingStatistics_get__populationVariance(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPopulationVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__quadraticMean(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getQuadraticMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__secondMoment(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSecondMoment());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__standardDeviation(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStandardDeviation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__sum(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSum());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__sumOfLogs(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSumOfLogs());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__sumOfSquares(t_StreamingStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSumOfSquares());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StreamingStatistics_get__summary(t_StreamingStatistics *self, void *data)
        {
          ::org::hipparchus::stat::descriptive::StatisticalSummary value((jobject) NULL);
          OBJ_CALL(value = self->object.getSummary());
          return ::org::hipparchus::stat::descriptive::t_StatisticalSummary::wrap_Object(value);
        }

        static PyObject *t_StreamingStatistics_get__variance(t_StreamingStatistics *self, void *data)
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
#include "org/orekit/models/earth/atmosphere/PythonNRLMSISE00InputParameters.h"
#include "org/orekit/models/earth/atmosphere/NRLMSISE00InputParameters.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *PythonNRLMSISE00InputParameters::class$ = NULL;
          jmethodID *PythonNRLMSISE00InputParameters::mids$ = NULL;
          bool PythonNRLMSISE00InputParameters::live$ = false;

          jclass PythonNRLMSISE00InputParameters::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/PythonNRLMSISE00InputParameters");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getAp_27b701db396ade01] = env->getMethodID(cls, "getAp", "(Lorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_getAverageFlux_fd347811007a6ba3] = env->getMethodID(cls, "getAverageFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getDailyFlux_fd347811007a6ba3] = env->getMethodID(cls, "getDailyFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getMaxDate_c325492395d89b24] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getMinDate_c325492395d89b24] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonNRLMSISE00InputParameters::PythonNRLMSISE00InputParameters() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void PythonNRLMSISE00InputParameters::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonNRLMSISE00InputParameters::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonNRLMSISE00InputParameters::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
          static PyObject *t_PythonNRLMSISE00InputParameters_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonNRLMSISE00InputParameters_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonNRLMSISE00InputParameters_init_(t_PythonNRLMSISE00InputParameters *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonNRLMSISE00InputParameters_finalize(t_PythonNRLMSISE00InputParameters *self);
          static PyObject *t_PythonNRLMSISE00InputParameters_pythonExtension(t_PythonNRLMSISE00InputParameters *self, PyObject *args);
          static jobject JNICALL t_PythonNRLMSISE00InputParameters_getAp0(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonNRLMSISE00InputParameters_getAverageFlux1(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonNRLMSISE00InputParameters_getDailyFlux2(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonNRLMSISE00InputParameters_getMaxDate3(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonNRLMSISE00InputParameters_getMinDate4(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonNRLMSISE00InputParameters_pythonDecRef5(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonNRLMSISE00InputParameters_get__self(t_PythonNRLMSISE00InputParameters *self, void *data);
          static PyGetSetDef t_PythonNRLMSISE00InputParameters__fields_[] = {
            DECLARE_GET_FIELD(t_PythonNRLMSISE00InputParameters, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonNRLMSISE00InputParameters__methods_[] = {
            DECLARE_METHOD(t_PythonNRLMSISE00InputParameters, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonNRLMSISE00InputParameters, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonNRLMSISE00InputParameters, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonNRLMSISE00InputParameters, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonNRLMSISE00InputParameters)[] = {
            { Py_tp_methods, t_PythonNRLMSISE00InputParameters__methods_ },
            { Py_tp_init, (void *) t_PythonNRLMSISE00InputParameters_init_ },
            { Py_tp_getset, t_PythonNRLMSISE00InputParameters__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonNRLMSISE00InputParameters)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonNRLMSISE00InputParameters, t_PythonNRLMSISE00InputParameters, PythonNRLMSISE00InputParameters);

          void t_PythonNRLMSISE00InputParameters::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonNRLMSISE00InputParameters), &PY_TYPE_DEF(PythonNRLMSISE00InputParameters), module, "PythonNRLMSISE00InputParameters", 1);
          }

          void t_PythonNRLMSISE00InputParameters::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonNRLMSISE00InputParameters), "class_", make_descriptor(PythonNRLMSISE00InputParameters::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonNRLMSISE00InputParameters), "wrapfn_", make_descriptor(t_PythonNRLMSISE00InputParameters::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonNRLMSISE00InputParameters), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonNRLMSISE00InputParameters::initializeClass);
            JNINativeMethod methods[] = {
              { "getAp", "(Lorg/orekit/time/AbsoluteDate;)[D", (void *) t_PythonNRLMSISE00InputParameters_getAp0 },
              { "getAverageFlux", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonNRLMSISE00InputParameters_getAverageFlux1 },
              { "getDailyFlux", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonNRLMSISE00InputParameters_getDailyFlux2 },
              { "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonNRLMSISE00InputParameters_getMaxDate3 },
              { "getMinDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonNRLMSISE00InputParameters_getMinDate4 },
              { "pythonDecRef", "()V", (void *) t_PythonNRLMSISE00InputParameters_pythonDecRef5 },
            };
            env->registerNatives(cls, methods, 6);
          }

          static PyObject *t_PythonNRLMSISE00InputParameters_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonNRLMSISE00InputParameters::initializeClass, 1)))
              return NULL;
            return t_PythonNRLMSISE00InputParameters::wrap_Object(PythonNRLMSISE00InputParameters(((t_PythonNRLMSISE00InputParameters *) arg)->object.this$));
          }
          static PyObject *t_PythonNRLMSISE00InputParameters_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonNRLMSISE00InputParameters::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonNRLMSISE00InputParameters_init_(t_PythonNRLMSISE00InputParameters *self, PyObject *args, PyObject *kwds)
          {
            PythonNRLMSISE00InputParameters object((jobject) NULL);

            INT_CALL(object = PythonNRLMSISE00InputParameters());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonNRLMSISE00InputParameters_finalize(t_PythonNRLMSISE00InputParameters *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonNRLMSISE00InputParameters_pythonExtension(t_PythonNRLMSISE00InputParameters *self, PyObject *args)
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

          static jobject JNICALL t_PythonNRLMSISE00InputParameters_getAp0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNRLMSISE00InputParameters::mids$[PythonNRLMSISE00InputParameters::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            JArray< jdouble > value((jobject) NULL);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getAp", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "[D", &value))
            {
              throwTypeError("getAp", result);
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

          static jdouble JNICALL t_PythonNRLMSISE00InputParameters_getAverageFlux1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNRLMSISE00InputParameters::mids$[PythonNRLMSISE00InputParameters::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getAverageFlux", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getAverageFlux", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonNRLMSISE00InputParameters_getDailyFlux2(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNRLMSISE00InputParameters::mids$[PythonNRLMSISE00InputParameters::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getDailyFlux", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getDailyFlux", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonNRLMSISE00InputParameters_getMaxDate3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNRLMSISE00InputParameters::mids$[PythonNRLMSISE00InputParameters::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getMaxDate", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              throwTypeError("getMaxDate", result);
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

          static jobject JNICALL t_PythonNRLMSISE00InputParameters_getMinDate4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNRLMSISE00InputParameters::mids$[PythonNRLMSISE00InputParameters::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getMinDate", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              throwTypeError("getMinDate", result);
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

          static void JNICALL t_PythonNRLMSISE00InputParameters_pythonDecRef5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNRLMSISE00InputParameters::mids$[PythonNRLMSISE00InputParameters::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonNRLMSISE00InputParameters::mids$[PythonNRLMSISE00InputParameters::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonNRLMSISE00InputParameters_get__self(t_PythonNRLMSISE00InputParameters *self, void *data)
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
#include "org/orekit/propagation/numerical/TimeDerivativesEquations.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *TimeDerivativesEquations::class$ = NULL;
        jmethodID *TimeDerivativesEquations::mids$ = NULL;
        bool TimeDerivativesEquations::live$ = false;

        jclass TimeDerivativesEquations::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/TimeDerivativesEquations");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addKeplerContribution_8ba9fe7a847cecad] = env->getMethodID(cls, "addKeplerContribution", "(D)V");
            mids$[mid_addMassDerivative_8ba9fe7a847cecad] = env->getMethodID(cls, "addMassDerivative", "(D)V");
            mids$[mid_addNonKeplerianAcceleration_1844f891addbac57] = env->getMethodID(cls, "addNonKeplerianAcceleration", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void TimeDerivativesEquations::addKeplerContribution(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addKeplerContribution_8ba9fe7a847cecad], a0);
        }

        void TimeDerivativesEquations::addMassDerivative(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addMassDerivative_8ba9fe7a847cecad], a0);
        }

        void TimeDerivativesEquations::addNonKeplerianAcceleration(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addNonKeplerianAcceleration_1844f891addbac57], a0.this$);
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
        static PyObject *t_TimeDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TimeDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TimeDerivativesEquations_addKeplerContribution(t_TimeDerivativesEquations *self, PyObject *arg);
        static PyObject *t_TimeDerivativesEquations_addMassDerivative(t_TimeDerivativesEquations *self, PyObject *arg);
        static PyObject *t_TimeDerivativesEquations_addNonKeplerianAcceleration(t_TimeDerivativesEquations *self, PyObject *arg);

        static PyMethodDef t_TimeDerivativesEquations__methods_[] = {
          DECLARE_METHOD(t_TimeDerivativesEquations, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TimeDerivativesEquations, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TimeDerivativesEquations, addKeplerContribution, METH_O),
          DECLARE_METHOD(t_TimeDerivativesEquations, addMassDerivative, METH_O),
          DECLARE_METHOD(t_TimeDerivativesEquations, addNonKeplerianAcceleration, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TimeDerivativesEquations)[] = {
          { Py_tp_methods, t_TimeDerivativesEquations__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TimeDerivativesEquations)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TimeDerivativesEquations, t_TimeDerivativesEquations, TimeDerivativesEquations);

        void t_TimeDerivativesEquations::install(PyObject *module)
        {
          installType(&PY_TYPE(TimeDerivativesEquations), &PY_TYPE_DEF(TimeDerivativesEquations), module, "TimeDerivativesEquations", 0);
        }

        void t_TimeDerivativesEquations::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeDerivativesEquations), "class_", make_descriptor(TimeDerivativesEquations::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeDerivativesEquations), "wrapfn_", make_descriptor(t_TimeDerivativesEquations::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeDerivativesEquations), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TimeDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TimeDerivativesEquations::initializeClass, 1)))
            return NULL;
          return t_TimeDerivativesEquations::wrap_Object(TimeDerivativesEquations(((t_TimeDerivativesEquations *) arg)->object.this$));
        }
        static PyObject *t_TimeDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TimeDerivativesEquations::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TimeDerivativesEquations_addKeplerContribution(t_TimeDerivativesEquations *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.addKeplerContribution(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addKeplerContribution", arg);
          return NULL;
        }

        static PyObject *t_TimeDerivativesEquations_addMassDerivative(t_TimeDerivativesEquations *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.addMassDerivative(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addMassDerivative", arg);
          return NULL;
        }

        static PyObject *t_TimeDerivativesEquations_addNonKeplerianAcceleration(t_TimeDerivativesEquations *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addNonKeplerianAcceleration(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addNonKeplerianAcceleration", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldCjSjCoefficient.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *FieldCjSjCoefficient::class$ = NULL;
            jmethodID *FieldCjSjCoefficient::mids$ = NULL;
            bool FieldCjSjCoefficient::live$ = false;

            jclass FieldCjSjCoefficient::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/FieldCjSjCoefficient");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_63a2f4ebe459f316] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/Field;)V");
                mids$[mid_getCj_21e6b3c521b9c768] = env->getMethodID(cls, "getCj", "(I)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getDcjDh_21e6b3c521b9c768] = env->getMethodID(cls, "getDcjDh", "(I)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getDcjDk_21e6b3c521b9c768] = env->getMethodID(cls, "getDcjDk", "(I)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getDsjDh_21e6b3c521b9c768] = env->getMethodID(cls, "getDsjDh", "(I)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getDsjDk_21e6b3c521b9c768] = env->getMethodID(cls, "getDsjDk", "(I)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getSj_21e6b3c521b9c768] = env->getMethodID(cls, "getSj", "(I)Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldCjSjCoefficient::FieldCjSjCoefficient(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::Field & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_63a2f4ebe459f316, a0.this$, a1.this$, a2.this$)) {}

            ::org::hipparchus::CalculusFieldElement FieldCjSjCoefficient::getCj(jint a0) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCj_21e6b3c521b9c768], a0));
            }

            ::org::hipparchus::CalculusFieldElement FieldCjSjCoefficient::getDcjDh(jint a0) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDcjDh_21e6b3c521b9c768], a0));
            }

            ::org::hipparchus::CalculusFieldElement FieldCjSjCoefficient::getDcjDk(jint a0) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDcjDk_21e6b3c521b9c768], a0));
            }

            ::org::hipparchus::CalculusFieldElement FieldCjSjCoefficient::getDsjDh(jint a0) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDsjDh_21e6b3c521b9c768], a0));
            }

            ::org::hipparchus::CalculusFieldElement FieldCjSjCoefficient::getDsjDk(jint a0) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDsjDk_21e6b3c521b9c768], a0));
            }

            ::org::hipparchus::CalculusFieldElement FieldCjSjCoefficient::getSj(jint a0) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getSj_21e6b3c521b9c768], a0));
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
            static PyObject *t_FieldCjSjCoefficient_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldCjSjCoefficient_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldCjSjCoefficient_of_(t_FieldCjSjCoefficient *self, PyObject *args);
            static int t_FieldCjSjCoefficient_init_(t_FieldCjSjCoefficient *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldCjSjCoefficient_getCj(t_FieldCjSjCoefficient *self, PyObject *arg);
            static PyObject *t_FieldCjSjCoefficient_getDcjDh(t_FieldCjSjCoefficient *self, PyObject *arg);
            static PyObject *t_FieldCjSjCoefficient_getDcjDk(t_FieldCjSjCoefficient *self, PyObject *arg);
            static PyObject *t_FieldCjSjCoefficient_getDsjDh(t_FieldCjSjCoefficient *self, PyObject *arg);
            static PyObject *t_FieldCjSjCoefficient_getDsjDk(t_FieldCjSjCoefficient *self, PyObject *arg);
            static PyObject *t_FieldCjSjCoefficient_getSj(t_FieldCjSjCoefficient *self, PyObject *arg);
            static PyObject *t_FieldCjSjCoefficient_get__parameters_(t_FieldCjSjCoefficient *self, void *data);
            static PyGetSetDef t_FieldCjSjCoefficient__fields_[] = {
              DECLARE_GET_FIELD(t_FieldCjSjCoefficient, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldCjSjCoefficient__methods_[] = {
              DECLARE_METHOD(t_FieldCjSjCoefficient, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldCjSjCoefficient, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldCjSjCoefficient, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldCjSjCoefficient, getCj, METH_O),
              DECLARE_METHOD(t_FieldCjSjCoefficient, getDcjDh, METH_O),
              DECLARE_METHOD(t_FieldCjSjCoefficient, getDcjDk, METH_O),
              DECLARE_METHOD(t_FieldCjSjCoefficient, getDsjDh, METH_O),
              DECLARE_METHOD(t_FieldCjSjCoefficient, getDsjDk, METH_O),
              DECLARE_METHOD(t_FieldCjSjCoefficient, getSj, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldCjSjCoefficient)[] = {
              { Py_tp_methods, t_FieldCjSjCoefficient__methods_ },
              { Py_tp_init, (void *) t_FieldCjSjCoefficient_init_ },
              { Py_tp_getset, t_FieldCjSjCoefficient__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldCjSjCoefficient)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldCjSjCoefficient, t_FieldCjSjCoefficient, FieldCjSjCoefficient);
            PyObject *t_FieldCjSjCoefficient::wrap_Object(const FieldCjSjCoefficient& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldCjSjCoefficient::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldCjSjCoefficient *self = (t_FieldCjSjCoefficient *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldCjSjCoefficient::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldCjSjCoefficient::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldCjSjCoefficient *self = (t_FieldCjSjCoefficient *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldCjSjCoefficient::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldCjSjCoefficient), &PY_TYPE_DEF(FieldCjSjCoefficient), module, "FieldCjSjCoefficient", 0);
            }

            void t_FieldCjSjCoefficient::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCjSjCoefficient), "class_", make_descriptor(FieldCjSjCoefficient::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCjSjCoefficient), "wrapfn_", make_descriptor(t_FieldCjSjCoefficient::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCjSjCoefficient), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldCjSjCoefficient_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldCjSjCoefficient::initializeClass, 1)))
                return NULL;
              return t_FieldCjSjCoefficient::wrap_Object(FieldCjSjCoefficient(((t_FieldCjSjCoefficient *) arg)->object.this$));
            }
            static PyObject *t_FieldCjSjCoefficient_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldCjSjCoefficient::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldCjSjCoefficient_of_(t_FieldCjSjCoefficient *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldCjSjCoefficient_init_(t_FieldCjSjCoefficient *self, PyObject *args, PyObject *kwds)
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::Field a2((jobject) NULL);
              PyTypeObject **p2;
              FieldCjSjCoefficient object((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_Field::parameters_))
              {
                INT_CALL(object = FieldCjSjCoefficient(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldCjSjCoefficient_getCj(t_FieldCjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getCj(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getCj", arg);
              return NULL;
            }

            static PyObject *t_FieldCjSjCoefficient_getDcjDh(t_FieldCjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getDcjDh(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDcjDh", arg);
              return NULL;
            }

            static PyObject *t_FieldCjSjCoefficient_getDcjDk(t_FieldCjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getDcjDk(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDcjDk", arg);
              return NULL;
            }

            static PyObject *t_FieldCjSjCoefficient_getDsjDh(t_FieldCjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getDsjDh(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDsjDh", arg);
              return NULL;
            }

            static PyObject *t_FieldCjSjCoefficient_getDsjDk(t_FieldCjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getDsjDk(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDsjDk", arg);
              return NULL;
            }

            static PyObject *t_FieldCjSjCoefficient_getSj(t_FieldCjSjCoefficient *self, PyObject *arg)
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getSj(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getSj", arg);
              return NULL;
            }
            static PyObject *t_FieldCjSjCoefficient_get__parameters_(t_FieldCjSjCoefficient *self, void *data)
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
#include "org/orekit/frames/GTODProvider.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/frames/EOPBasedTransformProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/frames/StaticTransform.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/GTODProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *GTODProvider::class$ = NULL;
      jmethodID *GTODProvider::mids$ = NULL;
      bool GTODProvider::live$ = false;

      jclass GTODProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/GTODProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getEOPHistory_f9d30be358d43685] = env->getMethodID(cls, "getEOPHistory", "()Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getNonInterpolatingProvider_ef75ce810ae41bf2] = env->getMethodID(cls, "getNonInterpolatingProvider", "()Lorg/orekit/frames/GTODProvider;");
          mids$[mid_getStaticTransform_5f13614b572308e8] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getStaticTransform_09ace34b8a3460b2] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getTransform_976d4bc81671ce42] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_7a8ca6856fe3fc9e] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::EOPHistory GTODProvider::getEOPHistory() const
      {
        return ::org::orekit::frames::EOPHistory(env->callObjectMethod(this$, mids$[mid_getEOPHistory_f9d30be358d43685]));
      }

      GTODProvider GTODProvider::getNonInterpolatingProvider() const
      {
        return GTODProvider(env->callObjectMethod(this$, mids$[mid_getNonInterpolatingProvider_ef75ce810ae41bf2]));
      }

      ::org::orekit::frames::StaticTransform GTODProvider::getStaticTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_5f13614b572308e8], a0.this$));
      }

      ::org::orekit::frames::FieldStaticTransform GTODProvider::getStaticTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_09ace34b8a3460b2], a0.this$));
      }

      ::org::orekit::frames::Transform GTODProvider::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_976d4bc81671ce42], a0.this$));
      }

      ::org::orekit::frames::FieldTransform GTODProvider::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_7a8ca6856fe3fc9e], a0.this$));
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
      static PyObject *t_GTODProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GTODProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GTODProvider_getEOPHistory(t_GTODProvider *self);
      static PyObject *t_GTODProvider_getNonInterpolatingProvider(t_GTODProvider *self);
      static PyObject *t_GTODProvider_getStaticTransform(t_GTODProvider *self, PyObject *args);
      static PyObject *t_GTODProvider_getTransform(t_GTODProvider *self, PyObject *args);
      static PyObject *t_GTODProvider_get__eOPHistory(t_GTODProvider *self, void *data);
      static PyObject *t_GTODProvider_get__nonInterpolatingProvider(t_GTODProvider *self, void *data);
      static PyGetSetDef t_GTODProvider__fields_[] = {
        DECLARE_GET_FIELD(t_GTODProvider, eOPHistory),
        DECLARE_GET_FIELD(t_GTODProvider, nonInterpolatingProvider),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_GTODProvider__methods_[] = {
        DECLARE_METHOD(t_GTODProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GTODProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GTODProvider, getEOPHistory, METH_NOARGS),
        DECLARE_METHOD(t_GTODProvider, getNonInterpolatingProvider, METH_NOARGS),
        DECLARE_METHOD(t_GTODProvider, getStaticTransform, METH_VARARGS),
        DECLARE_METHOD(t_GTODProvider, getTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GTODProvider)[] = {
        { Py_tp_methods, t_GTODProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_GTODProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GTODProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GTODProvider, t_GTODProvider, GTODProvider);

      void t_GTODProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(GTODProvider), &PY_TYPE_DEF(GTODProvider), module, "GTODProvider", 0);
      }

      void t_GTODProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GTODProvider), "class_", make_descriptor(GTODProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GTODProvider), "wrapfn_", make_descriptor(t_GTODProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GTODProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GTODProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GTODProvider::initializeClass, 1)))
          return NULL;
        return t_GTODProvider::wrap_Object(GTODProvider(((t_GTODProvider *) arg)->object.this$));
      }
      static PyObject *t_GTODProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GTODProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_GTODProvider_getEOPHistory(t_GTODProvider *self)
      {
        ::org::orekit::frames::EOPHistory result((jobject) NULL);
        OBJ_CALL(result = self->object.getEOPHistory());
        return ::org::orekit::frames::t_EOPHistory::wrap_Object(result);
      }

      static PyObject *t_GTODProvider_getNonInterpolatingProvider(t_GTODProvider *self)
      {
        GTODProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getNonInterpolatingProvider());
        return t_GTODProvider::wrap_Object(result);
      }

      static PyObject *t_GTODProvider_getStaticTransform(t_GTODProvider *self, PyObject *args)
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

      static PyObject *t_GTODProvider_getTransform(t_GTODProvider *self, PyObject *args)
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

      static PyObject *t_GTODProvider_get__eOPHistory(t_GTODProvider *self, void *data)
      {
        ::org::orekit::frames::EOPHistory value((jobject) NULL);
        OBJ_CALL(value = self->object.getEOPHistory());
        return ::org::orekit::frames::t_EOPHistory::wrap_Object(value);
      }

      static PyObject *t_GTODProvider_get__nonInterpolatingProvider(t_GTODProvider *self, void *data)
      {
        GTODProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getNonInterpolatingProvider());
        return t_GTODProvider::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/ObjectiveFunctionGradient.h"
#include "org/hipparchus/analysis/MultivariateVectorFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          ::java::lang::Class *ObjectiveFunctionGradient::class$ = NULL;
          jmethodID *ObjectiveFunctionGradient::mids$ = NULL;
          bool ObjectiveFunctionGradient::live$ = false;

          jclass ObjectiveFunctionGradient::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/ObjectiveFunctionGradient");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b318c17b3682075c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/MultivariateVectorFunction;)V");
              mids$[mid_getObjectiveFunctionGradient_72c2cddd79f92b83] = env->getMethodID(cls, "getObjectiveFunctionGradient", "()Lorg/hipparchus/analysis/MultivariateVectorFunction;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ObjectiveFunctionGradient::ObjectiveFunctionGradient(const ::org::hipparchus::analysis::MultivariateVectorFunction & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b318c17b3682075c, a0.this$)) {}

          ::org::hipparchus::analysis::MultivariateVectorFunction ObjectiveFunctionGradient::getObjectiveFunctionGradient() const
          {
            return ::org::hipparchus::analysis::MultivariateVectorFunction(env->callObjectMethod(this$, mids$[mid_getObjectiveFunctionGradient_72c2cddd79f92b83]));
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
        namespace scalar {
          static PyObject *t_ObjectiveFunctionGradient_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ObjectiveFunctionGradient_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ObjectiveFunctionGradient_init_(t_ObjectiveFunctionGradient *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ObjectiveFunctionGradient_getObjectiveFunctionGradient(t_ObjectiveFunctionGradient *self);
          static PyObject *t_ObjectiveFunctionGradient_get__objectiveFunctionGradient(t_ObjectiveFunctionGradient *self, void *data);
          static PyGetSetDef t_ObjectiveFunctionGradient__fields_[] = {
            DECLARE_GET_FIELD(t_ObjectiveFunctionGradient, objectiveFunctionGradient),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ObjectiveFunctionGradient__methods_[] = {
            DECLARE_METHOD(t_ObjectiveFunctionGradient, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ObjectiveFunctionGradient, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ObjectiveFunctionGradient, getObjectiveFunctionGradient, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ObjectiveFunctionGradient)[] = {
            { Py_tp_methods, t_ObjectiveFunctionGradient__methods_ },
            { Py_tp_init, (void *) t_ObjectiveFunctionGradient_init_ },
            { Py_tp_getset, t_ObjectiveFunctionGradient__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ObjectiveFunctionGradient)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ObjectiveFunctionGradient, t_ObjectiveFunctionGradient, ObjectiveFunctionGradient);

          void t_ObjectiveFunctionGradient::install(PyObject *module)
          {
            installType(&PY_TYPE(ObjectiveFunctionGradient), &PY_TYPE_DEF(ObjectiveFunctionGradient), module, "ObjectiveFunctionGradient", 0);
          }

          void t_ObjectiveFunctionGradient::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectiveFunctionGradient), "class_", make_descriptor(ObjectiveFunctionGradient::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectiveFunctionGradient), "wrapfn_", make_descriptor(t_ObjectiveFunctionGradient::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectiveFunctionGradient), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ObjectiveFunctionGradient_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ObjectiveFunctionGradient::initializeClass, 1)))
              return NULL;
            return t_ObjectiveFunctionGradient::wrap_Object(ObjectiveFunctionGradient(((t_ObjectiveFunctionGradient *) arg)->object.this$));
          }
          static PyObject *t_ObjectiveFunctionGradient_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ObjectiveFunctionGradient::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ObjectiveFunctionGradient_init_(t_ObjectiveFunctionGradient *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::analysis::MultivariateVectorFunction a0((jobject) NULL);
            ObjectiveFunctionGradient object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::analysis::MultivariateVectorFunction::initializeClass, &a0))
            {
              INT_CALL(object = ObjectiveFunctionGradient(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ObjectiveFunctionGradient_getObjectiveFunctionGradient(t_ObjectiveFunctionGradient *self)
          {
            ::org::hipparchus::analysis::MultivariateVectorFunction result((jobject) NULL);
            OBJ_CALL(result = self->object.getObjectiveFunctionGradient());
            return ::org::hipparchus::analysis::t_MultivariateVectorFunction::wrap_Object(result);
          }

          static PyObject *t_ObjectiveFunctionGradient_get__objectiveFunctionGradient(t_ObjectiveFunctionGradient *self, void *data)
          {
            ::org::hipparchus::analysis::MultivariateVectorFunction value((jobject) NULL);
            OBJ_CALL(value = self->object.getObjectiveFunctionGradient());
            return ::org::hipparchus::analysis::t_MultivariateVectorFunction::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/RtcmEphemerisMessage.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/RtcmEphemerisData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *RtcmEphemerisMessage::class$ = NULL;
              jmethodID *RtcmEphemerisMessage::mids$ = NULL;
              bool RtcmEphemerisMessage::live$ = false;

              jclass RtcmEphemerisMessage::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/RtcmEphemerisMessage");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_36be6994f0abc53b] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/ephemeris/RtcmEphemerisData;)V");
                  mids$[mid_getEphemerisData_79244ab1d407643d] = env->getMethodID(cls, "getEphemerisData", "()Lorg/orekit/gnss/metric/messages/rtcm/ephemeris/RtcmEphemerisData;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              RtcmEphemerisMessage::RtcmEphemerisMessage(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData & a1) : ::org::orekit::gnss::metric::messages::rtcm::RtcmMessage(env->newObject(initializeClass, &mids$, mid_init$_36be6994f0abc53b, a0, a1.this$)) {}

              ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData RtcmEphemerisMessage::getEphemerisData() const
              {
                return ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData(env->callObjectMethod(this$, mids$[mid_getEphemerisData_79244ab1d407643d]));
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
              static PyObject *t_RtcmEphemerisMessage_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmEphemerisMessage_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmEphemerisMessage_of_(t_RtcmEphemerisMessage *self, PyObject *args);
              static int t_RtcmEphemerisMessage_init_(t_RtcmEphemerisMessage *self, PyObject *args, PyObject *kwds);
              static PyObject *t_RtcmEphemerisMessage_getEphemerisData(t_RtcmEphemerisMessage *self);
              static PyObject *t_RtcmEphemerisMessage_get__ephemerisData(t_RtcmEphemerisMessage *self, void *data);
              static PyObject *t_RtcmEphemerisMessage_get__parameters_(t_RtcmEphemerisMessage *self, void *data);
              static PyGetSetDef t_RtcmEphemerisMessage__fields_[] = {
                DECLARE_GET_FIELD(t_RtcmEphemerisMessage, ephemerisData),
                DECLARE_GET_FIELD(t_RtcmEphemerisMessage, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RtcmEphemerisMessage__methods_[] = {
                DECLARE_METHOD(t_RtcmEphemerisMessage, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmEphemerisMessage, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmEphemerisMessage, of_, METH_VARARGS),
                DECLARE_METHOD(t_RtcmEphemerisMessage, getEphemerisData, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RtcmEphemerisMessage)[] = {
                { Py_tp_methods, t_RtcmEphemerisMessage__methods_ },
                { Py_tp_init, (void *) t_RtcmEphemerisMessage_init_ },
                { Py_tp_getset, t_RtcmEphemerisMessage__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RtcmEphemerisMessage)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::RtcmMessage),
                NULL
              };

              DEFINE_TYPE(RtcmEphemerisMessage, t_RtcmEphemerisMessage, RtcmEphemerisMessage);
              PyObject *t_RtcmEphemerisMessage::wrap_Object(const RtcmEphemerisMessage& object, PyTypeObject *p0)
              {
                PyObject *obj = t_RtcmEphemerisMessage::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_RtcmEphemerisMessage *self = (t_RtcmEphemerisMessage *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_RtcmEphemerisMessage::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_RtcmEphemerisMessage::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_RtcmEphemerisMessage *self = (t_RtcmEphemerisMessage *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_RtcmEphemerisMessage::install(PyObject *module)
              {
                installType(&PY_TYPE(RtcmEphemerisMessage), &PY_TYPE_DEF(RtcmEphemerisMessage), module, "RtcmEphemerisMessage", 0);
              }

              void t_RtcmEphemerisMessage::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmEphemerisMessage), "class_", make_descriptor(RtcmEphemerisMessage::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmEphemerisMessage), "wrapfn_", make_descriptor(t_RtcmEphemerisMessage::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmEphemerisMessage), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_RtcmEphemerisMessage_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RtcmEphemerisMessage::initializeClass, 1)))
                  return NULL;
                return t_RtcmEphemerisMessage::wrap_Object(RtcmEphemerisMessage(((t_RtcmEphemerisMessage *) arg)->object.this$));
              }
              static PyObject *t_RtcmEphemerisMessage_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RtcmEphemerisMessage::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_RtcmEphemerisMessage_of_(t_RtcmEphemerisMessage *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_RtcmEphemerisMessage_init_(t_RtcmEphemerisMessage *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData a1((jobject) NULL);
                RtcmEphemerisMessage object((jobject) NULL);

                if (!parseArgs(args, "Ik", ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = RtcmEphemerisMessage(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_RtcmEphemerisMessage_getEphemerisData(t_RtcmEphemerisMessage *self)
              {
                ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData result((jobject) NULL);
                OBJ_CALL(result = self->object.getEphemerisData());
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::t_RtcmEphemerisData::wrap_Object(result);
              }
              static PyObject *t_RtcmEphemerisMessage_get__parameters_(t_RtcmEphemerisMessage *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_RtcmEphemerisMessage_get__ephemerisData(t_RtcmEphemerisMessage *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData value((jobject) NULL);
                OBJ_CALL(value = self->object.getEphemerisData());
                return ::org::orekit::gnss::metric::messages::rtcm::ephemeris::t_RtcmEphemerisData::wrap_Object(value);
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
#include "org/orekit/models/earth/atmosphere/NRLMSISE00.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/models/earth/atmosphere/NRLMSISE00.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/models/earth/atmosphere/NRLMSISE00InputParameters.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/bodies/BodyShape.h"
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
              mids$[mid_init$_9b35b29291dae8d1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/NRLMSISE00InputParameters;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/BodyShape;)V");
              mids$[mid_init$_788a8952f1bb6937] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/NRLMSISE00InputParameters;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/BodyShape;Lorg/orekit/time/TimeScale;)V");
              mids$[mid_getDensity_e9a4fc2340b58984] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getDensity_58866e32a1c9318b] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)D");
              mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_withSwitch_dc60ac44bfc06b8d] = env->getMethodID(cls, "withSwitch", "(II)Lorg/orekit/models/earth/atmosphere/NRLMSISE00;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          NRLMSISE00::NRLMSISE00(const ::org::orekit::models::earth::atmosphere::NRLMSISE00InputParameters & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::orekit::bodies::BodyShape & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9b35b29291dae8d1, a0.this$, a1.this$, a2.this$)) {}

          NRLMSISE00::NRLMSISE00(const ::org::orekit::models::earth::atmosphere::NRLMSISE00InputParameters & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::orekit::bodies::BodyShape & a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_788a8952f1bb6937, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          ::org::hipparchus::CalculusFieldElement NRLMSISE00::getDensity(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_e9a4fc2340b58984], a0.this$, a1.this$, a2.this$));
          }

          jdouble NRLMSISE00::getDensity(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDensity_58866e32a1c9318b], a0.this$, a1.this$, a2.this$);
          }

          ::org::orekit::frames::Frame NRLMSISE00::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
          }

          NRLMSISE00 NRLMSISE00::withSwitch(jint a0, jint a1) const
          {
            return NRLMSISE00(env->callObjectMethod(this$, mids$[mid_withSwitch_dc60ac44bfc06b8d], a0, a1));
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
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadata.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ObjectType.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/cdm/Maneuvrable.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata.h"
#include "org/orekit/files/ccsds/ndm/cdm/CovarianceMethod.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "org/orekit/files/ccsds/ndm/cdm/AltCovarianceType.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/definitions/YesNoUnknown.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmMetadata::class$ = NULL;
            jmethodID *CdmMetadata::mids$ = NULL;
            bool CdmMetadata::live$ = false;

            jclass CdmMetadata::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmMetadata");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_init$_fe20320dccf187ae] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataContext;)V");
                mids$[mid_getAdmMsgLink_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getAdmMsgLink", "()Ljava/lang/String;");
                mids$[mid_getAltCovRefFrame_69d8be1b6b0a1a94] = env->getMethodID(cls, "getAltCovRefFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                mids$[mid_getAltCovType_682297c68d07d8a9] = env->getMethodID(cls, "getAltCovType", "()Lorg/orekit/files/ccsds/ndm/cdm/AltCovarianceType;");
                mids$[mid_getAtmosphericModel_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getAtmosphericModel", "()Ljava/lang/String;");
                mids$[mid_getCatalogName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getCatalogName", "()Ljava/lang/String;");
                mids$[mid_getCovarianceMethod_0bfe0c4f8975f75a] = env->getMethodID(cls, "getCovarianceMethod", "()Lorg/orekit/files/ccsds/ndm/cdm/CovarianceMethod;");
                mids$[mid_getCovarianceSource_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getCovarianceSource", "()Ljava/lang/String;");
                mids$[mid_getEarthTides_a9bf24a9cea73059] = env->getMethodID(cls, "getEarthTides", "()Lorg/orekit/files/ccsds/definitions/YesNoUnknown;");
                mids$[mid_getEphemName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getEphemName", "()Ljava/lang/String;");
                mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
                mids$[mid_getGravityDegree_55546ef6a647f39b] = env->getMethodID(cls, "getGravityDegree", "()I");
                mids$[mid_getGravityModel_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getGravityModel", "()Ljava/lang/String;");
                mids$[mid_getGravityOrder_55546ef6a647f39b] = env->getMethodID(cls, "getGravityOrder", "()I");
                mids$[mid_getInternationalDes_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getInternationalDes", "()Ljava/lang/String;");
                mids$[mid_getIntrackThrust_a9bf24a9cea73059] = env->getMethodID(cls, "getIntrackThrust", "()Lorg/orekit/files/ccsds/definitions/YesNoUnknown;");
                mids$[mid_getManeuverable_20c5f0334d3cf8a5] = env->getMethodID(cls, "getManeuverable", "()Lorg/orekit/files/ccsds/ndm/cdm/Maneuvrable;");
                mids$[mid_getNBodyPerturbations_e62d3bb06d56d7e3] = env->getMethodID(cls, "getNBodyPerturbations", "()Ljava/util/List;");
                mids$[mid_getObject_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getObject", "()Ljava/lang/String;");
                mids$[mid_getObjectDesignator_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getObjectDesignator", "()Ljava/lang/String;");
                mids$[mid_getObjectName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getObjectName", "()Ljava/lang/String;");
                mids$[mid_getObjectType_d6ea2275c46038b6] = env->getMethodID(cls, "getObjectType", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;");
                mids$[mid_getObsBeforeNextMessage_a9bf24a9cea73059] = env->getMethodID(cls, "getObsBeforeNextMessage", "()Lorg/orekit/files/ccsds/definitions/YesNoUnknown;");
                mids$[mid_getOdmMsgLink_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getOdmMsgLink", "()Ljava/lang/String;");
                mids$[mid_getOperatorContactPosition_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getOperatorContactPosition", "()Ljava/lang/String;");
                mids$[mid_getOperatorEmail_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getOperatorEmail", "()Ljava/lang/String;");
                mids$[mid_getOperatorOrganization_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getOperatorOrganization", "()Ljava/lang/String;");
                mids$[mid_getOperatorPhone_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getOperatorPhone", "()Ljava/lang/String;");
                mids$[mid_getOrbitCenter_52253a5b5c02abfe] = env->getMethodID(cls, "getOrbitCenter", "()Lorg/orekit/files/ccsds/definitions/BodyFacade;");
                mids$[mid_getRefFrame_69d8be1b6b0a1a94] = env->getMethodID(cls, "getRefFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                mids$[mid_getRelativeMetadata_9e18211f4c2756fe] = env->getMethodID(cls, "getRelativeMetadata", "()Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata;");
                mids$[mid_getSolarRadiationPressure_a9bf24a9cea73059] = env->getMethodID(cls, "getSolarRadiationPressure", "()Lorg/orekit/files/ccsds/definitions/YesNoUnknown;");
                mids$[mid_setAdmMsgLink_734b91ac30d5f9b4] = env->getMethodID(cls, "setAdmMsgLink", "(Ljava/lang/String;)V");
                mids$[mid_setAltCovRefFrame_4755133c5c4c59be] = env->getMethodID(cls, "setAltCovRefFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                mids$[mid_setAltCovType_f113bebf9c716349] = env->getMethodID(cls, "setAltCovType", "(Lorg/orekit/files/ccsds/ndm/cdm/AltCovarianceType;)V");
                mids$[mid_setAtmosphericModel_734b91ac30d5f9b4] = env->getMethodID(cls, "setAtmosphericModel", "(Ljava/lang/String;)V");
                mids$[mid_setCatalogName_734b91ac30d5f9b4] = env->getMethodID(cls, "setCatalogName", "(Ljava/lang/String;)V");
                mids$[mid_setCovarianceMethod_1287f4079504959f] = env->getMethodID(cls, "setCovarianceMethod", "(Lorg/orekit/files/ccsds/ndm/cdm/CovarianceMethod;)V");
                mids$[mid_setCovarianceSource_734b91ac30d5f9b4] = env->getMethodID(cls, "setCovarianceSource", "(Ljava/lang/String;)V");
                mids$[mid_setEarthTides_ef863e9b4614f11c] = env->getMethodID(cls, "setEarthTides", "(Lorg/orekit/files/ccsds/definitions/YesNoUnknown;)V");
                mids$[mid_setEphemName_734b91ac30d5f9b4] = env->getMethodID(cls, "setEphemName", "(Ljava/lang/String;)V");
                mids$[mid_setGravityModel_eb74d6dc93e0751e] = env->getMethodID(cls, "setGravityModel", "(Ljava/lang/String;II)V");
                mids$[mid_setInternationalDes_734b91ac30d5f9b4] = env->getMethodID(cls, "setInternationalDes", "(Ljava/lang/String;)V");
                mids$[mid_setIntrackThrust_ef863e9b4614f11c] = env->getMethodID(cls, "setIntrackThrust", "(Lorg/orekit/files/ccsds/definitions/YesNoUnknown;)V");
                mids$[mid_setManeuverable_8b2809315e926f23] = env->getMethodID(cls, "setManeuverable", "(Lorg/orekit/files/ccsds/ndm/cdm/Maneuvrable;)V");
                mids$[mid_setNBodyPerturbations_0e7c3032c7c93ed3] = env->getMethodID(cls, "setNBodyPerturbations", "(Ljava/util/List;)V");
                mids$[mid_setObject_734b91ac30d5f9b4] = env->getMethodID(cls, "setObject", "(Ljava/lang/String;)V");
                mids$[mid_setObjectDesignator_734b91ac30d5f9b4] = env->getMethodID(cls, "setObjectDesignator", "(Ljava/lang/String;)V");
                mids$[mid_setObjectName_734b91ac30d5f9b4] = env->getMethodID(cls, "setObjectName", "(Ljava/lang/String;)V");
                mids$[mid_setObjectType_05187042fbba2328] = env->getMethodID(cls, "setObjectType", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/ObjectType;)V");
                mids$[mid_setObsBeforeNextMessage_ef863e9b4614f11c] = env->getMethodID(cls, "setObsBeforeNextMessage", "(Lorg/orekit/files/ccsds/definitions/YesNoUnknown;)V");
                mids$[mid_setOdmMsgLink_734b91ac30d5f9b4] = env->getMethodID(cls, "setOdmMsgLink", "(Ljava/lang/String;)V");
                mids$[mid_setOperatorContactPosition_734b91ac30d5f9b4] = env->getMethodID(cls, "setOperatorContactPosition", "(Ljava/lang/String;)V");
                mids$[mid_setOperatorEmail_734b91ac30d5f9b4] = env->getMethodID(cls, "setOperatorEmail", "(Ljava/lang/String;)V");
                mids$[mid_setOperatorOrganization_734b91ac30d5f9b4] = env->getMethodID(cls, "setOperatorOrganization", "(Ljava/lang/String;)V");
                mids$[mid_setOperatorPhone_734b91ac30d5f9b4] = env->getMethodID(cls, "setOperatorPhone", "(Ljava/lang/String;)V");
                mids$[mid_setOrbitCenter_564458ee450fa323] = env->getMethodID(cls, "setOrbitCenter", "(Lorg/orekit/files/ccsds/definitions/BodyFacade;)V");
                mids$[mid_setRefFrame_4755133c5c4c59be] = env->getMethodID(cls, "setRefFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                mids$[mid_setRelativeMetadata_0046627b89ca2469] = env->getMethodID(cls, "setRelativeMetadata", "(Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata;)V");
                mids$[mid_setSolarRadiationPressure_ef863e9b4614f11c] = env->getMethodID(cls, "setSolarRadiationPressure", "(Lorg/orekit/files/ccsds/definitions/YesNoUnknown;)V");
                mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CdmMetadata::CdmMetadata() : ::org::orekit::files::ccsds::section::Metadata(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            CdmMetadata::CdmMetadata(const ::org::orekit::data::DataContext & a0) : ::org::orekit::files::ccsds::section::Metadata(env->newObject(initializeClass, &mids$, mid_init$_fe20320dccf187ae, a0.this$)) {}

            ::java::lang::String CdmMetadata::getAdmMsgLink() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAdmMsgLink_1c1fa1e935d6cdcf]));
            }

            ::org::orekit::files::ccsds::definitions::FrameFacade CdmMetadata::getAltCovRefFrame() const
            {
              return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getAltCovRefFrame_69d8be1b6b0a1a94]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType CdmMetadata::getAltCovType() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType(env->callObjectMethod(this$, mids$[mid_getAltCovType_682297c68d07d8a9]));
            }

            ::java::lang::String CdmMetadata::getAtmosphericModel() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAtmosphericModel_1c1fa1e935d6cdcf]));
            }

            ::java::lang::String CdmMetadata::getCatalogName() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCatalogName_1c1fa1e935d6cdcf]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod CdmMetadata::getCovarianceMethod() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod(env->callObjectMethod(this$, mids$[mid_getCovarianceMethod_0bfe0c4f8975f75a]));
            }

            ::java::lang::String CdmMetadata::getCovarianceSource() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCovarianceSource_1c1fa1e935d6cdcf]));
            }

            ::org::orekit::files::ccsds::definitions::YesNoUnknown CdmMetadata::getEarthTides() const
            {
              return ::org::orekit::files::ccsds::definitions::YesNoUnknown(env->callObjectMethod(this$, mids$[mid_getEarthTides_a9bf24a9cea73059]));
            }

            ::java::lang::String CdmMetadata::getEphemName() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getEphemName_1c1fa1e935d6cdcf]));
            }

            ::org::orekit::frames::Frame CdmMetadata::getFrame() const
            {
              return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
            }

            jint CdmMetadata::getGravityDegree() const
            {
              return env->callIntMethod(this$, mids$[mid_getGravityDegree_55546ef6a647f39b]);
            }

            ::java::lang::String CdmMetadata::getGravityModel() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getGravityModel_1c1fa1e935d6cdcf]));
            }

            jint CdmMetadata::getGravityOrder() const
            {
              return env->callIntMethod(this$, mids$[mid_getGravityOrder_55546ef6a647f39b]);
            }

            ::java::lang::String CdmMetadata::getInternationalDes() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInternationalDes_1c1fa1e935d6cdcf]));
            }

            ::org::orekit::files::ccsds::definitions::YesNoUnknown CdmMetadata::getIntrackThrust() const
            {
              return ::org::orekit::files::ccsds::definitions::YesNoUnknown(env->callObjectMethod(this$, mids$[mid_getIntrackThrust_a9bf24a9cea73059]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable CdmMetadata::getManeuverable() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable(env->callObjectMethod(this$, mids$[mid_getManeuverable_20c5f0334d3cf8a5]));
            }

            ::java::util::List CdmMetadata::getNBodyPerturbations() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getNBodyPerturbations_e62d3bb06d56d7e3]));
            }

            ::java::lang::String CdmMetadata::getObject() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObject_1c1fa1e935d6cdcf]));
            }

            ::java::lang::String CdmMetadata::getObjectDesignator() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObjectDesignator_1c1fa1e935d6cdcf]));
            }

            ::java::lang::String CdmMetadata::getObjectName() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObjectName_1c1fa1e935d6cdcf]));
            }

            ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType CdmMetadata::getObjectType() const
            {
              return ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType(env->callObjectMethod(this$, mids$[mid_getObjectType_d6ea2275c46038b6]));
            }

            ::org::orekit::files::ccsds::definitions::YesNoUnknown CdmMetadata::getObsBeforeNextMessage() const
            {
              return ::org::orekit::files::ccsds::definitions::YesNoUnknown(env->callObjectMethod(this$, mids$[mid_getObsBeforeNextMessage_a9bf24a9cea73059]));
            }

            ::java::lang::String CdmMetadata::getOdmMsgLink() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOdmMsgLink_1c1fa1e935d6cdcf]));
            }

            ::java::lang::String CdmMetadata::getOperatorContactPosition() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOperatorContactPosition_1c1fa1e935d6cdcf]));
            }

            ::java::lang::String CdmMetadata::getOperatorEmail() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOperatorEmail_1c1fa1e935d6cdcf]));
            }

            ::java::lang::String CdmMetadata::getOperatorOrganization() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOperatorOrganization_1c1fa1e935d6cdcf]));
            }

            ::java::lang::String CdmMetadata::getOperatorPhone() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOperatorPhone_1c1fa1e935d6cdcf]));
            }

            ::org::orekit::files::ccsds::definitions::BodyFacade CdmMetadata::getOrbitCenter() const
            {
              return ::org::orekit::files::ccsds::definitions::BodyFacade(env->callObjectMethod(this$, mids$[mid_getOrbitCenter_52253a5b5c02abfe]));
            }

            ::org::orekit::files::ccsds::definitions::FrameFacade CdmMetadata::getRefFrame() const
            {
              return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getRefFrame_69d8be1b6b0a1a94]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata CdmMetadata::getRelativeMetadata() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata(env->callObjectMethod(this$, mids$[mid_getRelativeMetadata_9e18211f4c2756fe]));
            }

            ::org::orekit::files::ccsds::definitions::YesNoUnknown CdmMetadata::getSolarRadiationPressure() const
            {
              return ::org::orekit::files::ccsds::definitions::YesNoUnknown(env->callObjectMethod(this$, mids$[mid_getSolarRadiationPressure_a9bf24a9cea73059]));
            }

            void CdmMetadata::setAdmMsgLink(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAdmMsgLink_734b91ac30d5f9b4], a0.this$);
            }

            void CdmMetadata::setAltCovRefFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAltCovRefFrame_4755133c5c4c59be], a0.this$);
            }

            void CdmMetadata::setAltCovType(const ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAltCovType_f113bebf9c716349], a0.this$);
            }

            void CdmMetadata::setAtmosphericModel(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAtmosphericModel_734b91ac30d5f9b4], a0.this$);
            }

            void CdmMetadata::setCatalogName(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCatalogName_734b91ac30d5f9b4], a0.this$);
            }

            void CdmMetadata::setCovarianceMethod(const ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCovarianceMethod_1287f4079504959f], a0.this$);
            }

            void CdmMetadata::setCovarianceSource(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCovarianceSource_734b91ac30d5f9b4], a0.this$);
            }

            void CdmMetadata::setEarthTides(const ::org::orekit::files::ccsds::definitions::YesNoUnknown & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setEarthTides_ef863e9b4614f11c], a0.this$);
            }

            void CdmMetadata::setEphemName(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setEphemName_734b91ac30d5f9b4], a0.this$);
            }

            void CdmMetadata::setGravityModel(const ::java::lang::String & a0, jint a1, jint a2) const
            {
              env->callVoidMethod(this$, mids$[mid_setGravityModel_eb74d6dc93e0751e], a0.this$, a1, a2);
            }

            void CdmMetadata::setInternationalDes(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setInternationalDes_734b91ac30d5f9b4], a0.this$);
            }

            void CdmMetadata::setIntrackThrust(const ::org::orekit::files::ccsds::definitions::YesNoUnknown & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIntrackThrust_ef863e9b4614f11c], a0.this$);
            }

            void CdmMetadata::setManeuverable(const ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setManeuverable_8b2809315e926f23], a0.this$);
            }

            void CdmMetadata::setNBodyPerturbations(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setNBodyPerturbations_0e7c3032c7c93ed3], a0.this$);
            }

            void CdmMetadata::setObject(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObject_734b91ac30d5f9b4], a0.this$);
            }

            void CdmMetadata::setObjectDesignator(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObjectDesignator_734b91ac30d5f9b4], a0.this$);
            }

            void CdmMetadata::setObjectName(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObjectName_734b91ac30d5f9b4], a0.this$);
            }

            void CdmMetadata::setObjectType(const ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObjectType_05187042fbba2328], a0.this$);
            }

            void CdmMetadata::setObsBeforeNextMessage(const ::org::orekit::files::ccsds::definitions::YesNoUnknown & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObsBeforeNextMessage_ef863e9b4614f11c], a0.this$);
            }

            void CdmMetadata::setOdmMsgLink(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setOdmMsgLink_734b91ac30d5f9b4], a0.this$);
            }

            void CdmMetadata::setOperatorContactPosition(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setOperatorContactPosition_734b91ac30d5f9b4], a0.this$);
            }

            void CdmMetadata::setOperatorEmail(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setOperatorEmail_734b91ac30d5f9b4], a0.this$);
            }

            void CdmMetadata::setOperatorOrganization(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setOperatorOrganization_734b91ac30d5f9b4], a0.this$);
            }

            void CdmMetadata::setOperatorPhone(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setOperatorPhone_734b91ac30d5f9b4], a0.this$);
            }

            void CdmMetadata::setOrbitCenter(const ::org::orekit::files::ccsds::definitions::BodyFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setOrbitCenter_564458ee450fa323], a0.this$);
            }

            void CdmMetadata::setRefFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRefFrame_4755133c5c4c59be], a0.this$);
            }

            void CdmMetadata::setRelativeMetadata(const ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRelativeMetadata_0046627b89ca2469], a0.this$);
            }

            void CdmMetadata::setSolarRadiationPressure(const ::org::orekit::files::ccsds::definitions::YesNoUnknown & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSolarRadiationPressure_ef863e9b4614f11c], a0.this$);
            }

            void CdmMetadata::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_8ba9fe7a847cecad], a0);
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
            static PyObject *t_CdmMetadata_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmMetadata_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CdmMetadata_init_(t_CdmMetadata *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CdmMetadata_getAdmMsgLink(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getAltCovRefFrame(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getAltCovType(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getAtmosphericModel(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getCatalogName(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getCovarianceMethod(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getCovarianceSource(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getEarthTides(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getEphemName(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getFrame(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getGravityDegree(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getGravityModel(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getGravityOrder(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getInternationalDes(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getIntrackThrust(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getManeuverable(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getNBodyPerturbations(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getObject(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getObjectDesignator(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getObjectName(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getObjectType(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getObsBeforeNextMessage(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getOdmMsgLink(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getOperatorContactPosition(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getOperatorEmail(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getOperatorOrganization(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getOperatorPhone(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getOrbitCenter(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getRefFrame(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getRelativeMetadata(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_getSolarRadiationPressure(t_CdmMetadata *self);
            static PyObject *t_CdmMetadata_setAdmMsgLink(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setAltCovRefFrame(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setAltCovType(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setAtmosphericModel(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setCatalogName(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setCovarianceMethod(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setCovarianceSource(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setEarthTides(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setEphemName(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setGravityModel(t_CdmMetadata *self, PyObject *args);
            static PyObject *t_CdmMetadata_setInternationalDes(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setIntrackThrust(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setManeuverable(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setNBodyPerturbations(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setObject(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setObjectDesignator(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setObjectName(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setObjectType(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setObsBeforeNextMessage(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setOdmMsgLink(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setOperatorContactPosition(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setOperatorEmail(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setOperatorOrganization(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setOperatorPhone(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setOrbitCenter(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setRefFrame(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setRelativeMetadata(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_setSolarRadiationPressure(t_CdmMetadata *self, PyObject *arg);
            static PyObject *t_CdmMetadata_validate(t_CdmMetadata *self, PyObject *args);
            static PyObject *t_CdmMetadata_get__admMsgLink(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__admMsgLink(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__altCovRefFrame(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__altCovRefFrame(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__altCovType(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__altCovType(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__atmosphericModel(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__atmosphericModel(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__catalogName(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__catalogName(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__covarianceMethod(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__covarianceMethod(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__covarianceSource(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__covarianceSource(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__earthTides(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__earthTides(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__ephemName(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__ephemName(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__frame(t_CdmMetadata *self, void *data);
            static PyObject *t_CdmMetadata_get__gravityDegree(t_CdmMetadata *self, void *data);
            static PyObject *t_CdmMetadata_get__gravityModel(t_CdmMetadata *self, void *data);
            static PyObject *t_CdmMetadata_get__gravityOrder(t_CdmMetadata *self, void *data);
            static PyObject *t_CdmMetadata_get__internationalDes(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__internationalDes(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__intrackThrust(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__intrackThrust(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__maneuverable(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__maneuverable(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__nBodyPerturbations(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__nBodyPerturbations(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__object(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__object(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__objectDesignator(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__objectDesignator(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__objectName(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__objectName(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__objectType(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__objectType(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__obsBeforeNextMessage(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__obsBeforeNextMessage(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__odmMsgLink(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__odmMsgLink(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__operatorContactPosition(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__operatorContactPosition(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__operatorEmail(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__operatorEmail(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__operatorOrganization(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__operatorOrganization(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__operatorPhone(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__operatorPhone(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__orbitCenter(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__orbitCenter(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__refFrame(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__refFrame(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__relativeMetadata(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__relativeMetadata(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmMetadata_get__solarRadiationPressure(t_CdmMetadata *self, void *data);
            static int t_CdmMetadata_set__solarRadiationPressure(t_CdmMetadata *self, PyObject *arg, void *data);
            static PyGetSetDef t_CdmMetadata__fields_[] = {
              DECLARE_GETSET_FIELD(t_CdmMetadata, admMsgLink),
              DECLARE_GETSET_FIELD(t_CdmMetadata, altCovRefFrame),
              DECLARE_GETSET_FIELD(t_CdmMetadata, altCovType),
              DECLARE_GETSET_FIELD(t_CdmMetadata, atmosphericModel),
              DECLARE_GETSET_FIELD(t_CdmMetadata, catalogName),
              DECLARE_GETSET_FIELD(t_CdmMetadata, covarianceMethod),
              DECLARE_GETSET_FIELD(t_CdmMetadata, covarianceSource),
              DECLARE_GETSET_FIELD(t_CdmMetadata, earthTides),
              DECLARE_GETSET_FIELD(t_CdmMetadata, ephemName),
              DECLARE_GET_FIELD(t_CdmMetadata, frame),
              DECLARE_GET_FIELD(t_CdmMetadata, gravityDegree),
              DECLARE_GET_FIELD(t_CdmMetadata, gravityModel),
              DECLARE_GET_FIELD(t_CdmMetadata, gravityOrder),
              DECLARE_GETSET_FIELD(t_CdmMetadata, internationalDes),
              DECLARE_GETSET_FIELD(t_CdmMetadata, intrackThrust),
              DECLARE_GETSET_FIELD(t_CdmMetadata, maneuverable),
              DECLARE_GETSET_FIELD(t_CdmMetadata, nBodyPerturbations),
              DECLARE_GETSET_FIELD(t_CdmMetadata, object),
              DECLARE_GETSET_FIELD(t_CdmMetadata, objectDesignator),
              DECLARE_GETSET_FIELD(t_CdmMetadata, objectName),
              DECLARE_GETSET_FIELD(t_CdmMetadata, objectType),
              DECLARE_GETSET_FIELD(t_CdmMetadata, obsBeforeNextMessage),
              DECLARE_GETSET_FIELD(t_CdmMetadata, odmMsgLink),
              DECLARE_GETSET_FIELD(t_CdmMetadata, operatorContactPosition),
              DECLARE_GETSET_FIELD(t_CdmMetadata, operatorEmail),
              DECLARE_GETSET_FIELD(t_CdmMetadata, operatorOrganization),
              DECLARE_GETSET_FIELD(t_CdmMetadata, operatorPhone),
              DECLARE_GETSET_FIELD(t_CdmMetadata, orbitCenter),
              DECLARE_GETSET_FIELD(t_CdmMetadata, refFrame),
              DECLARE_GETSET_FIELD(t_CdmMetadata, relativeMetadata),
              DECLARE_GETSET_FIELD(t_CdmMetadata, solarRadiationPressure),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmMetadata__methods_[] = {
              DECLARE_METHOD(t_CdmMetadata, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmMetadata, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmMetadata, getAdmMsgLink, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getAltCovRefFrame, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getAltCovType, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getAtmosphericModel, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getCatalogName, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getCovarianceMethod, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getCovarianceSource, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getEarthTides, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getEphemName, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getFrame, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getGravityDegree, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getGravityModel, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getGravityOrder, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getInternationalDes, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getIntrackThrust, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getManeuverable, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getNBodyPerturbations, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getObject, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getObjectDesignator, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getObjectName, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getObjectType, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getObsBeforeNextMessage, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getOdmMsgLink, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getOperatorContactPosition, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getOperatorEmail, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getOperatorOrganization, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getOperatorPhone, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getOrbitCenter, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getRefFrame, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getRelativeMetadata, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, getSolarRadiationPressure, METH_NOARGS),
              DECLARE_METHOD(t_CdmMetadata, setAdmMsgLink, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setAltCovRefFrame, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setAltCovType, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setAtmosphericModel, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setCatalogName, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setCovarianceMethod, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setCovarianceSource, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setEarthTides, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setEphemName, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setGravityModel, METH_VARARGS),
              DECLARE_METHOD(t_CdmMetadata, setInternationalDes, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setIntrackThrust, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setManeuverable, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setNBodyPerturbations, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setObject, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setObjectDesignator, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setObjectName, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setObjectType, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setObsBeforeNextMessage, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setOdmMsgLink, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setOperatorContactPosition, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setOperatorEmail, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setOperatorOrganization, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setOperatorPhone, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setOrbitCenter, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setRefFrame, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setRelativeMetadata, METH_O),
              DECLARE_METHOD(t_CdmMetadata, setSolarRadiationPressure, METH_O),
              DECLARE_METHOD(t_CdmMetadata, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmMetadata)[] = {
              { Py_tp_methods, t_CdmMetadata__methods_ },
              { Py_tp_init, (void *) t_CdmMetadata_init_ },
              { Py_tp_getset, t_CdmMetadata__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmMetadata)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Metadata),
              NULL
            };

            DEFINE_TYPE(CdmMetadata, t_CdmMetadata, CdmMetadata);

            void t_CdmMetadata::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmMetadata), &PY_TYPE_DEF(CdmMetadata), module, "CdmMetadata", 0);
            }

            void t_CdmMetadata::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadata), "class_", make_descriptor(CdmMetadata::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadata), "wrapfn_", make_descriptor(t_CdmMetadata::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadata), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CdmMetadata_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmMetadata::initializeClass, 1)))
                return NULL;
              return t_CdmMetadata::wrap_Object(CdmMetadata(((t_CdmMetadata *) arg)->object.this$));
            }
            static PyObject *t_CdmMetadata_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmMetadata::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CdmMetadata_init_(t_CdmMetadata *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  CdmMetadata object((jobject) NULL);

                  INT_CALL(object = CdmMetadata());
                  self->object = object;
                  break;
                }
               case 1:
                {
                  ::org::orekit::data::DataContext a0((jobject) NULL);
                  CdmMetadata object((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::orekit::data::DataContext::initializeClass, &a0))
                  {
                    INT_CALL(object = CdmMetadata(a0));
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

            static PyObject *t_CdmMetadata_getAdmMsgLink(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getAdmMsgLink());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getAltCovRefFrame(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getAltCovRefFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getAltCovType(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType result((jobject) NULL);
              OBJ_CALL(result = self->object.getAltCovType());
              return ::org::orekit::files::ccsds::ndm::cdm::t_AltCovarianceType::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getAtmosphericModel(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getAtmosphericModel());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getCatalogName(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getCatalogName());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getCovarianceMethod(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod result((jobject) NULL);
              OBJ_CALL(result = self->object.getCovarianceMethod());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CovarianceMethod::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getCovarianceSource(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getCovarianceSource());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getEarthTides(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown result((jobject) NULL);
              OBJ_CALL(result = self->object.getEarthTides());
              return ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getEphemName(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getEphemName());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getFrame(t_CdmMetadata *self)
            {
              ::org::orekit::frames::Frame result((jobject) NULL);
              OBJ_CALL(result = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getGravityDegree(t_CdmMetadata *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getGravityDegree());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CdmMetadata_getGravityModel(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getGravityModel());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getGravityOrder(t_CdmMetadata *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getGravityOrder());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CdmMetadata_getInternationalDes(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getInternationalDes());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getIntrackThrust(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown result((jobject) NULL);
              OBJ_CALL(result = self->object.getIntrackThrust());
              return ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getManeuverable(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable result((jobject) NULL);
              OBJ_CALL(result = self->object.getManeuverable());
              return ::org::orekit::files::ccsds::ndm::cdm::t_Maneuvrable::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getNBodyPerturbations(t_CdmMetadata *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getNBodyPerturbations());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::definitions::PY_TYPE(BodyFacade));
            }

            static PyObject *t_CdmMetadata_getObject(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getObject());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getObjectDesignator(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getObjectDesignator());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getObjectName(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getObjectName());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getObjectType(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType result((jobject) NULL);
              OBJ_CALL(result = self->object.getObjectType());
              return ::org::orekit::files::ccsds::ndm::odm::ocm::t_ObjectType::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getObsBeforeNextMessage(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown result((jobject) NULL);
              OBJ_CALL(result = self->object.getObsBeforeNextMessage());
              return ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getOdmMsgLink(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getOdmMsgLink());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getOperatorContactPosition(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getOperatorContactPosition());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getOperatorEmail(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getOperatorEmail());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getOperatorOrganization(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getOperatorOrganization());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getOperatorPhone(t_CdmMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getOperatorPhone());
              return j2p(result);
            }

            static PyObject *t_CdmMetadata_getOrbitCenter(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::BodyFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getOrbitCenter());
              return ::org::orekit::files::ccsds::definitions::t_BodyFacade::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getRefFrame(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getRefFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getRelativeMetadata(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata result((jobject) NULL);
              OBJ_CALL(result = self->object.getRelativeMetadata());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmRelativeMetadata::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_getSolarRadiationPressure(t_CdmMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown result((jobject) NULL);
              OBJ_CALL(result = self->object.getSolarRadiationPressure());
              return ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::wrap_Object(result);
            }

            static PyObject *t_CdmMetadata_setAdmMsgLink(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setAdmMsgLink(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAdmMsgLink", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setAltCovRefFrame(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setAltCovRefFrame(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAltCovRefFrame", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setAltCovType(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_AltCovarianceType::parameters_))
              {
                OBJ_CALL(self->object.setAltCovType(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAltCovType", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setAtmosphericModel(t_CdmMetadata *self, PyObject *arg)
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

            static PyObject *t_CdmMetadata_setCatalogName(t_CdmMetadata *self, PyObject *arg)
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

            static PyObject *t_CdmMetadata_setCovarianceMethod(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_CovarianceMethod::parameters_))
              {
                OBJ_CALL(self->object.setCovarianceMethod(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCovarianceMethod", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setCovarianceSource(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setCovarianceSource(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCovarianceSource", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setEarthTides(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::YesNoUnknown::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::parameters_))
              {
                OBJ_CALL(self->object.setEarthTides(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setEarthTides", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setEphemName(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setEphemName(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setEphemName", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setGravityModel(t_CdmMetadata *self, PyObject *args)
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

            static PyObject *t_CdmMetadata_setInternationalDes(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setInternationalDes(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setInternationalDes", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setIntrackThrust(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::YesNoUnknown::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::parameters_))
              {
                OBJ_CALL(self->object.setIntrackThrust(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIntrackThrust", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setManeuverable(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_Maneuvrable::parameters_))
              {
                OBJ_CALL(self->object.setManeuverable(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setManeuverable", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setNBodyPerturbations(t_CdmMetadata *self, PyObject *arg)
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

            static PyObject *t_CdmMetadata_setObject(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setObject(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setObject", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setObjectDesignator(t_CdmMetadata *self, PyObject *arg)
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

            static PyObject *t_CdmMetadata_setObjectName(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setObjectName(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setObjectName", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setObjectType(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_ObjectType::parameters_))
              {
                OBJ_CALL(self->object.setObjectType(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setObjectType", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setObsBeforeNextMessage(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::YesNoUnknown::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::parameters_))
              {
                OBJ_CALL(self->object.setObsBeforeNextMessage(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setObsBeforeNextMessage", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setOdmMsgLink(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setOdmMsgLink(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setOdmMsgLink", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setOperatorContactPosition(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setOperatorContactPosition(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setOperatorContactPosition", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setOperatorEmail(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setOperatorEmail(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setOperatorEmail", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setOperatorOrganization(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setOperatorOrganization(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setOperatorOrganization", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setOperatorPhone(t_CdmMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setOperatorPhone(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setOperatorPhone", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setOrbitCenter(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::BodyFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::BodyFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setOrbitCenter(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setOrbitCenter", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setRefFrame(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setRefFrame(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRefFrame", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setRelativeMetadata(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setRelativeMetadata(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRelativeMetadata", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_setSolarRadiationPressure(t_CdmMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::YesNoUnknown::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::parameters_))
              {
                OBJ_CALL(self->object.setSolarRadiationPressure(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSolarRadiationPressure", arg);
              return NULL;
            }

            static PyObject *t_CdmMetadata_validate(t_CdmMetadata *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(CdmMetadata), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_CdmMetadata_get__admMsgLink(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getAdmMsgLink());
              return j2p(value);
            }
            static int t_CdmMetadata_set__admMsgLink(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setAdmMsgLink(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "admMsgLink", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__altCovRefFrame(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getAltCovRefFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
            }
            static int t_CdmMetadata_set__altCovRefFrame(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setAltCovRefFrame(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "altCovRefFrame", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__altCovType(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType value((jobject) NULL);
              OBJ_CALL(value = self->object.getAltCovType());
              return ::org::orekit::files::ccsds::ndm::cdm::t_AltCovarianceType::wrap_Object(value);
            }
            static int t_CdmMetadata_set__altCovType(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::AltCovarianceType::initializeClass, &value))
                {
                  INT_CALL(self->object.setAltCovType(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "altCovType", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__atmosphericModel(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getAtmosphericModel());
              return j2p(value);
            }
            static int t_CdmMetadata_set__atmosphericModel(t_CdmMetadata *self, PyObject *arg, void *data)
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

            static PyObject *t_CdmMetadata_get__catalogName(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getCatalogName());
              return j2p(value);
            }
            static int t_CdmMetadata_set__catalogName(t_CdmMetadata *self, PyObject *arg, void *data)
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

            static PyObject *t_CdmMetadata_get__covarianceMethod(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod value((jobject) NULL);
              OBJ_CALL(value = self->object.getCovarianceMethod());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CovarianceMethod::wrap_Object(value);
            }
            static int t_CdmMetadata_set__covarianceMethod(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod::initializeClass, &value))
                {
                  INT_CALL(self->object.setCovarianceMethod(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "covarianceMethod", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__covarianceSource(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getCovarianceSource());
              return j2p(value);
            }
            static int t_CdmMetadata_set__covarianceSource(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setCovarianceSource(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "covarianceSource", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__earthTides(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown value((jobject) NULL);
              OBJ_CALL(value = self->object.getEarthTides());
              return ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::wrap_Object(value);
            }
            static int t_CdmMetadata_set__earthTides(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::YesNoUnknown value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::YesNoUnknown::initializeClass, &value))
                {
                  INT_CALL(self->object.setEarthTides(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "earthTides", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__ephemName(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getEphemName());
              return j2p(value);
            }
            static int t_CdmMetadata_set__ephemName(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setEphemName(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ephemName", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__frame(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::frames::Frame value((jobject) NULL);
              OBJ_CALL(value = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(value);
            }

            static PyObject *t_CdmMetadata_get__gravityDegree(t_CdmMetadata *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getGravityDegree());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_CdmMetadata_get__gravityModel(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getGravityModel());
              return j2p(value);
            }

            static PyObject *t_CdmMetadata_get__gravityOrder(t_CdmMetadata *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getGravityOrder());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_CdmMetadata_get__internationalDes(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getInternationalDes());
              return j2p(value);
            }
            static int t_CdmMetadata_set__internationalDes(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setInternationalDes(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "internationalDes", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__intrackThrust(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown value((jobject) NULL);
              OBJ_CALL(value = self->object.getIntrackThrust());
              return ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::wrap_Object(value);
            }
            static int t_CdmMetadata_set__intrackThrust(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::YesNoUnknown value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::YesNoUnknown::initializeClass, &value))
                {
                  INT_CALL(self->object.setIntrackThrust(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "intrackThrust", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__maneuverable(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable value((jobject) NULL);
              OBJ_CALL(value = self->object.getManeuverable());
              return ::org::orekit::files::ccsds::ndm::cdm::t_Maneuvrable::wrap_Object(value);
            }
            static int t_CdmMetadata_set__maneuverable(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable::initializeClass, &value))
                {
                  INT_CALL(self->object.setManeuverable(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "maneuverable", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__nBodyPerturbations(t_CdmMetadata *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getNBodyPerturbations());
              return ::java::util::t_List::wrap_Object(value);
            }
            static int t_CdmMetadata_set__nBodyPerturbations(t_CdmMetadata *self, PyObject *arg, void *data)
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

            static PyObject *t_CdmMetadata_get__object(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getObject());
              return j2p(value);
            }
            static int t_CdmMetadata_set__object(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setObject(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "object", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__objectDesignator(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getObjectDesignator());
              return j2p(value);
            }
            static int t_CdmMetadata_set__objectDesignator(t_CdmMetadata *self, PyObject *arg, void *data)
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

            static PyObject *t_CdmMetadata_get__objectName(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getObjectName());
              return j2p(value);
            }
            static int t_CdmMetadata_set__objectName(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setObjectName(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "objectName", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__objectType(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType value((jobject) NULL);
              OBJ_CALL(value = self->object.getObjectType());
              return ::org::orekit::files::ccsds::ndm::odm::ocm::t_ObjectType::wrap_Object(value);
            }
            static int t_CdmMetadata_set__objectType(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::ocm::ObjectType::initializeClass, &value))
                {
                  INT_CALL(self->object.setObjectType(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "objectType", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__obsBeforeNextMessage(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown value((jobject) NULL);
              OBJ_CALL(value = self->object.getObsBeforeNextMessage());
              return ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::wrap_Object(value);
            }
            static int t_CdmMetadata_set__obsBeforeNextMessage(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::YesNoUnknown value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::YesNoUnknown::initializeClass, &value))
                {
                  INT_CALL(self->object.setObsBeforeNextMessage(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "obsBeforeNextMessage", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__odmMsgLink(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getOdmMsgLink());
              return j2p(value);
            }
            static int t_CdmMetadata_set__odmMsgLink(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setOdmMsgLink(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "odmMsgLink", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__operatorContactPosition(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getOperatorContactPosition());
              return j2p(value);
            }
            static int t_CdmMetadata_set__operatorContactPosition(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setOperatorContactPosition(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "operatorContactPosition", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__operatorEmail(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getOperatorEmail());
              return j2p(value);
            }
            static int t_CdmMetadata_set__operatorEmail(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setOperatorEmail(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "operatorEmail", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__operatorOrganization(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getOperatorOrganization());
              return j2p(value);
            }
            static int t_CdmMetadata_set__operatorOrganization(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setOperatorOrganization(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "operatorOrganization", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__operatorPhone(t_CdmMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getOperatorPhone());
              return j2p(value);
            }
            static int t_CdmMetadata_set__operatorPhone(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setOperatorPhone(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "operatorPhone", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__orbitCenter(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::BodyFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getOrbitCenter());
              return ::org::orekit::files::ccsds::definitions::t_BodyFacade::wrap_Object(value);
            }
            static int t_CdmMetadata_set__orbitCenter(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::BodyFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::BodyFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setOrbitCenter(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "orbitCenter", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__refFrame(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getRefFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
            }
            static int t_CdmMetadata_set__refFrame(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setRefFrame(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "refFrame", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__relativeMetadata(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata value((jobject) NULL);
              OBJ_CALL(value = self->object.getRelativeMetadata());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmRelativeMetadata::wrap_Object(value);
            }
            static int t_CdmMetadata_set__relativeMetadata(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata::initializeClass, &value))
                {
                  INT_CALL(self->object.setRelativeMetadata(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "relativeMetadata", arg);
              return -1;
            }

            static PyObject *t_CdmMetadata_get__solarRadiationPressure(t_CdmMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::YesNoUnknown value((jobject) NULL);
              OBJ_CALL(value = self->object.getSolarRadiationPressure());
              return ::org::orekit::files::ccsds::definitions::t_YesNoUnknown::wrap_Object(value);
            }
            static int t_CdmMetadata_set__solarRadiationPressure(t_CdmMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::YesNoUnknown value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::YesNoUnknown::initializeClass, &value))
                {
                  INT_CALL(self->object.setSolarRadiationPressure(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "solarRadiationPressure", arg);
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
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldLine.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *OneAxisEllipsoid::class$ = NULL;
      jmethodID *OneAxisEllipsoid::mids$ = NULL;
      bool OneAxisEllipsoid::live$ = false;

      jclass OneAxisEllipsoid::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/OneAxisEllipsoid");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_9105dccfcf1a0a84] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/frames/Frame;)V");
          mids$[mid_azimuthBetweenPoints_ed6298241367a2ac] = env->getMethodID(cls, "azimuthBetweenPoints", "(Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/bodies/FieldGeodeticPoint;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_azimuthBetweenPoints_75a809c1a78684c5] = env->getMethodID(cls, "azimuthBetweenPoints", "(Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/GeodeticPoint;)D");
          mids$[mid_geodeticToIsometricLatitude_04fd0666b613d2ab] = env->getMethodID(cls, "geodeticToIsometricLatitude", "(D)D");
          mids$[mid_geodeticToIsometricLatitude_6e00dc5eb352fe51] = env->getMethodID(cls, "geodeticToIsometricLatitude", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getBodyFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getBodyFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getCartesianIntersectionPoint_7d6dd31d54156357] = env->getMethodID(cls, "getCartesianIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/Line;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getCartesianIntersectionPoint_96cf0438ee7c1d65] = env->getMethodID(cls, "getCartesianIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getEccentricity_b74f83833fdad017] = env->getMethodID(cls, "getEccentricity", "()D");
          mids$[mid_getEccentricitySquared_b74f83833fdad017] = env->getMethodID(cls, "getEccentricitySquared", "()D");
          mids$[mid_getEquatorialRadius_b74f83833fdad017] = env->getMethodID(cls, "getEquatorialRadius", "()D");
          mids$[mid_getFlattening_b74f83833fdad017] = env->getMethodID(cls, "getFlattening", "()D");
          mids$[mid_getIntersectionPoint_f1db6d4c78519d48] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/Line;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_getIntersectionPoint_66b39d6d84447197] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");
          mids$[mid_lowestAltitudeIntermediate_15e1a026853612be] = env->getMethodID(cls, "lowestAltitudeIntermediate", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/orekit/bodies/FieldGeodeticPoint;");
          mids$[mid_lowestAltitudeIntermediate_820cc059309969e2] = env->getMethodID(cls, "lowestAltitudeIntermediate", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_projectToGround_3cbe213b2c291f18] = env->getMethodID(cls, "projectToGround", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_projectToGround_feded476b8bdfcfc] = env->getMethodID(cls, "projectToGround", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_setAngularThreshold_8ba9fe7a847cecad] = env->getMethodID(cls, "setAngularThreshold", "(D)V");
          mids$[mid_transform_6aa36b82e3b80b58] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/FieldGeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_transform_a840d9913a98925f] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_transform_93de77ed9854e321] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");
          mids$[mid_transform_f67fa82bac3192f0] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_transform_1f5aa9741e58fa64] = env->getMethodID(cls, "transform", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OneAxisEllipsoid::OneAxisEllipsoid(jdouble a0, jdouble a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::bodies::Ellipsoid(env->newObject(initializeClass, &mids$, mid_init$_9105dccfcf1a0a84, a0, a1, a2.this$)) {}

      ::org::hipparchus::CalculusFieldElement OneAxisEllipsoid::azimuthBetweenPoints(const ::org::orekit::bodies::FieldGeodeticPoint & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_azimuthBetweenPoints_ed6298241367a2ac], a0.this$, a1.this$));
      }

      jdouble OneAxisEllipsoid::azimuthBetweenPoints(const ::org::orekit::bodies::GeodeticPoint & a0, const ::org::orekit::bodies::GeodeticPoint & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_azimuthBetweenPoints_75a809c1a78684c5], a0.this$, a1.this$);
      }

      jdouble OneAxisEllipsoid::geodeticToIsometricLatitude(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_geodeticToIsometricLatitude_04fd0666b613d2ab], a0);
      }

      ::org::hipparchus::CalculusFieldElement OneAxisEllipsoid::geodeticToIsometricLatitude(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_geodeticToIsometricLatitude_6e00dc5eb352fe51], a0.this$));
      }

      ::org::orekit::frames::Frame OneAxisEllipsoid::getBodyFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getBodyFrame_2c51111cc6894ba1]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D OneAxisEllipsoid::getCartesianIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::Line & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::time::AbsoluteDate & a3) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getCartesianIntersectionPoint_7d6dd31d54156357], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D OneAxisEllipsoid::getCartesianIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::FieldLine & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getCartesianIntersectionPoint_96cf0438ee7c1d65], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      jdouble OneAxisEllipsoid::getEccentricity() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEccentricity_b74f83833fdad017]);
      }

      jdouble OneAxisEllipsoid::getEccentricitySquared() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEccentricitySquared_b74f83833fdad017]);
      }

      jdouble OneAxisEllipsoid::getEquatorialRadius() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquatorialRadius_b74f83833fdad017]);
      }

      jdouble OneAxisEllipsoid::getFlattening() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getFlattening_b74f83833fdad017]);
      }

      ::org::orekit::bodies::GeodeticPoint OneAxisEllipsoid::getIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::Line & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::time::AbsoluteDate & a3) const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getIntersectionPoint_f1db6d4c78519d48], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::orekit::bodies::FieldGeodeticPoint OneAxisEllipsoid::getIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::FieldLine & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
      {
        return ::org::orekit::bodies::FieldGeodeticPoint(env->callObjectMethod(this$, mids$[mid_getIntersectionPoint_66b39d6d84447197], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::orekit::bodies::FieldGeodeticPoint OneAxisEllipsoid::lowestAltitudeIntermediate(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) const
      {
        return ::org::orekit::bodies::FieldGeodeticPoint(env->callObjectMethod(this$, mids$[mid_lowestAltitudeIntermediate_15e1a026853612be], a0.this$, a1.this$));
      }

      ::org::orekit::bodies::GeodeticPoint OneAxisEllipsoid::lowestAltitudeIntermediate(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_lowestAltitudeIntermediate_820cc059309969e2], a0.this$, a1.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates OneAxisEllipsoid::projectToGround(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_projectToGround_3cbe213b2c291f18], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D OneAxisEllipsoid::projectToGround(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_projectToGround_feded476b8bdfcfc], a0.this$, a1.this$, a2.this$));
      }

      void OneAxisEllipsoid::setAngularThreshold(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setAngularThreshold_8ba9fe7a847cecad], a0);
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D OneAxisEllipsoid::transform(const ::org::orekit::bodies::FieldGeodeticPoint & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transform_6aa36b82e3b80b58], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D OneAxisEllipsoid::transform(const ::org::orekit::bodies::GeodeticPoint & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transform_a840d9913a98925f], a0.this$));
      }

      ::org::orekit::bodies::FieldGeodeticPoint OneAxisEllipsoid::transform(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
      {
        return ::org::orekit::bodies::FieldGeodeticPoint(env->callObjectMethod(this$, mids$[mid_transform_93de77ed9854e321], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::bodies::GeodeticPoint OneAxisEllipsoid::transform(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_transform_f67fa82bac3192f0], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::bodies::FieldGeodeticPoint OneAxisEllipsoid::transform(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return ::org::orekit::bodies::FieldGeodeticPoint(env->callObjectMethod(this$, mids$[mid_transform_1f5aa9741e58fa64], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_OneAxisEllipsoid_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OneAxisEllipsoid_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OneAxisEllipsoid_init_(t_OneAxisEllipsoid *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OneAxisEllipsoid_azimuthBetweenPoints(t_OneAxisEllipsoid *self, PyObject *args);
      static PyObject *t_OneAxisEllipsoid_geodeticToIsometricLatitude(t_OneAxisEllipsoid *self, PyObject *args);
      static PyObject *t_OneAxisEllipsoid_getBodyFrame(t_OneAxisEllipsoid *self);
      static PyObject *t_OneAxisEllipsoid_getCartesianIntersectionPoint(t_OneAxisEllipsoid *self, PyObject *args);
      static PyObject *t_OneAxisEllipsoid_getEccentricity(t_OneAxisEllipsoid *self);
      static PyObject *t_OneAxisEllipsoid_getEccentricitySquared(t_OneAxisEllipsoid *self);
      static PyObject *t_OneAxisEllipsoid_getEquatorialRadius(t_OneAxisEllipsoid *self);
      static PyObject *t_OneAxisEllipsoid_getFlattening(t_OneAxisEllipsoid *self);
      static PyObject *t_OneAxisEllipsoid_getIntersectionPoint(t_OneAxisEllipsoid *self, PyObject *args);
      static PyObject *t_OneAxisEllipsoid_lowestAltitudeIntermediate(t_OneAxisEllipsoid *self, PyObject *args);
      static PyObject *t_OneAxisEllipsoid_projectToGround(t_OneAxisEllipsoid *self, PyObject *args);
      static PyObject *t_OneAxisEllipsoid_setAngularThreshold(t_OneAxisEllipsoid *self, PyObject *arg);
      static PyObject *t_OneAxisEllipsoid_transform(t_OneAxisEllipsoid *self, PyObject *args);
      static int t_OneAxisEllipsoid_set__angularThreshold(t_OneAxisEllipsoid *self, PyObject *arg, void *data);
      static PyObject *t_OneAxisEllipsoid_get__bodyFrame(t_OneAxisEllipsoid *self, void *data);
      static PyObject *t_OneAxisEllipsoid_get__eccentricity(t_OneAxisEllipsoid *self, void *data);
      static PyObject *t_OneAxisEllipsoid_get__eccentricitySquared(t_OneAxisEllipsoid *self, void *data);
      static PyObject *t_OneAxisEllipsoid_get__equatorialRadius(t_OneAxisEllipsoid *self, void *data);
      static PyObject *t_OneAxisEllipsoid_get__flattening(t_OneAxisEllipsoid *self, void *data);
      static PyGetSetDef t_OneAxisEllipsoid__fields_[] = {
        DECLARE_SET_FIELD(t_OneAxisEllipsoid, angularThreshold),
        DECLARE_GET_FIELD(t_OneAxisEllipsoid, bodyFrame),
        DECLARE_GET_FIELD(t_OneAxisEllipsoid, eccentricity),
        DECLARE_GET_FIELD(t_OneAxisEllipsoid, eccentricitySquared),
        DECLARE_GET_FIELD(t_OneAxisEllipsoid, equatorialRadius),
        DECLARE_GET_FIELD(t_OneAxisEllipsoid, flattening),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OneAxisEllipsoid__methods_[] = {
        DECLARE_METHOD(t_OneAxisEllipsoid, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OneAxisEllipsoid, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OneAxisEllipsoid, azimuthBetweenPoints, METH_VARARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, geodeticToIsometricLatitude, METH_VARARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, getBodyFrame, METH_NOARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, getCartesianIntersectionPoint, METH_VARARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, getEccentricity, METH_NOARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, getEccentricitySquared, METH_NOARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, getEquatorialRadius, METH_NOARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, getFlattening, METH_NOARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, getIntersectionPoint, METH_VARARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, lowestAltitudeIntermediate, METH_VARARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, projectToGround, METH_VARARGS),
        DECLARE_METHOD(t_OneAxisEllipsoid, setAngularThreshold, METH_O),
        DECLARE_METHOD(t_OneAxisEllipsoid, transform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OneAxisEllipsoid)[] = {
        { Py_tp_methods, t_OneAxisEllipsoid__methods_ },
        { Py_tp_init, (void *) t_OneAxisEllipsoid_init_ },
        { Py_tp_getset, t_OneAxisEllipsoid__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OneAxisEllipsoid)[] = {
        &PY_TYPE_DEF(::org::orekit::bodies::Ellipsoid),
        NULL
      };

      DEFINE_TYPE(OneAxisEllipsoid, t_OneAxisEllipsoid, OneAxisEllipsoid);

      void t_OneAxisEllipsoid::install(PyObject *module)
      {
        installType(&PY_TYPE(OneAxisEllipsoid), &PY_TYPE_DEF(OneAxisEllipsoid), module, "OneAxisEllipsoid", 0);
      }

      void t_OneAxisEllipsoid::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OneAxisEllipsoid), "class_", make_descriptor(OneAxisEllipsoid::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OneAxisEllipsoid), "wrapfn_", make_descriptor(t_OneAxisEllipsoid::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OneAxisEllipsoid), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OneAxisEllipsoid_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OneAxisEllipsoid::initializeClass, 1)))
          return NULL;
        return t_OneAxisEllipsoid::wrap_Object(OneAxisEllipsoid(((t_OneAxisEllipsoid *) arg)->object.this$));
      }
      static PyObject *t_OneAxisEllipsoid_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OneAxisEllipsoid::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OneAxisEllipsoid_init_(t_OneAxisEllipsoid *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        jdouble a1;
        ::org::orekit::frames::Frame a2((jobject) NULL);
        OneAxisEllipsoid object((jobject) NULL);

        if (!parseArgs(args, "DDk", ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = OneAxisEllipsoid(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_OneAxisEllipsoid_azimuthBetweenPoints(t_OneAxisEllipsoid *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::bodies::FieldGeodeticPoint a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, &a0, &p0, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_))
            {
              OBJ_CALL(result = self->object.azimuthBetweenPoints(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.azimuthBetweenPoints(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "azimuthBetweenPoints", args);
        return NULL;
      }

      static PyObject *t_OneAxisEllipsoid_geodeticToIsometricLatitude(t_OneAxisEllipsoid *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.geodeticToIsometricLatitude(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.geodeticToIsometricLatitude(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "geodeticToIsometricLatitude", args);
        return NULL;
      }

      static PyObject *t_OneAxisEllipsoid_getBodyFrame(t_OneAxisEllipsoid *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getBodyFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_OneAxisEllipsoid_getCartesianIntersectionPoint(t_OneAxisEllipsoid *self, PyObject *args)
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
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "KKkK", ::org::hipparchus::geometry::euclidean::threed::FieldLine::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldLine::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getCartesianIntersectionPoint(a0, a1, a2, a3));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Line a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::hipparchus::geometry::euclidean::threed::Line::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getCartesianIntersectionPoint(a0, a1, a2, a3));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getCartesianIntersectionPoint", args);
        return NULL;
      }

      static PyObject *t_OneAxisEllipsoid_getEccentricity(t_OneAxisEllipsoid *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEccentricity());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OneAxisEllipsoid_getEccentricitySquared(t_OneAxisEllipsoid *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEccentricitySquared());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OneAxisEllipsoid_getEquatorialRadius(t_OneAxisEllipsoid *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEquatorialRadius());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OneAxisEllipsoid_getFlattening(t_OneAxisEllipsoid *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getFlattening());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OneAxisEllipsoid_getIntersectionPoint(t_OneAxisEllipsoid *self, PyObject *args)
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

      static PyObject *t_OneAxisEllipsoid_lowestAltitudeIntermediate(t_OneAxisEllipsoid *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::bodies::FieldGeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              OBJ_CALL(result = self->object.lowestAltitudeIntermediate(a0, a1));
              return ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.lowestAltitudeIntermediate(a0, a1));
              return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "lowestAltitudeIntermediate", args);
        return NULL;
      }

      static PyObject *t_OneAxisEllipsoid_projectToGround(t_OneAxisEllipsoid *self, PyObject *args)
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

      static PyObject *t_OneAxisEllipsoid_setAngularThreshold(t_OneAxisEllipsoid *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setAngularThreshold(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setAngularThreshold", arg);
        return NULL;
      }

      static PyObject *t_OneAxisEllipsoid_transform(t_OneAxisEllipsoid *self, PyObject *args)
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
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::bodies::FieldGeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.transform(a0, a1, a2));
              return ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(DerivativeStructure));
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

      static int t_OneAxisEllipsoid_set__angularThreshold(t_OneAxisEllipsoid *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setAngularThreshold(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "angularThreshold", arg);
        return -1;
      }

      static PyObject *t_OneAxisEllipsoid_get__bodyFrame(t_OneAxisEllipsoid *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getBodyFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_OneAxisEllipsoid_get__eccentricity(t_OneAxisEllipsoid *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEccentricity());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_OneAxisEllipsoid_get__eccentricitySquared(t_OneAxisEllipsoid *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEccentricitySquared());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_OneAxisEllipsoid_get__equatorialRadius(t_OneAxisEllipsoid *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquatorialRadius());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_OneAxisEllipsoid_get__flattening(t_OneAxisEllipsoid *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getFlattening());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/generation/PythonMessageWriter.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "java/lang/Throwable.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ccsds/section/Header.h"
#include "org/orekit/files/ccsds/utils/generation/MessageWriter.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            ::java::lang::Class *PythonMessageWriter::class$ = NULL;
            jmethodID *PythonMessageWriter::mids$ = NULL;
            bool PythonMessageWriter::live$ = false;

            jclass PythonMessageWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/PythonMessageWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getFormatVersionKey_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getFormatVersionKey", "()Ljava/lang/String;");
                mids$[mid_getRoot_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getRoot", "()Ljava/lang/String;");
                mids$[mid_getVersion_b74f83833fdad017] = env->getMethodID(cls, "getVersion", "()D");
                mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_writeFooter_fb222e851cd27682] = env->getMethodID(cls, "writeFooter", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");
                mids$[mid_writeHeader_5f2a5114115bbdb2] = env->getMethodID(cls, "writeHeader", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/section/Header;)V");
                mids$[mid_writeSegment_1cabdf4a5e993579] = env->getMethodID(cls, "writeSegment", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/section/Segment;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonMessageWriter::PythonMessageWriter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            void PythonMessageWriter::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
            }

            jlong PythonMessageWriter::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
            }

            void PythonMessageWriter::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
            static PyObject *t_PythonMessageWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonMessageWriter_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonMessageWriter_of_(t_PythonMessageWriter *self, PyObject *args);
            static int t_PythonMessageWriter_init_(t_PythonMessageWriter *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonMessageWriter_finalize(t_PythonMessageWriter *self);
            static PyObject *t_PythonMessageWriter_pythonExtension(t_PythonMessageWriter *self, PyObject *args);
            static jobject JNICALL t_PythonMessageWriter_getFormatVersionKey0(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonMessageWriter_getRoot1(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonMessageWriter_getVersion2(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonMessageWriter_pythonDecRef3(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonMessageWriter_writeFooter4(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonMessageWriter_writeHeader5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static void JNICALL t_PythonMessageWriter_writeSegment6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static PyObject *t_PythonMessageWriter_get__self(t_PythonMessageWriter *self, void *data);
            static PyObject *t_PythonMessageWriter_get__parameters_(t_PythonMessageWriter *self, void *data);
            static PyGetSetDef t_PythonMessageWriter__fields_[] = {
              DECLARE_GET_FIELD(t_PythonMessageWriter, self),
              DECLARE_GET_FIELD(t_PythonMessageWriter, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonMessageWriter__methods_[] = {
              DECLARE_METHOD(t_PythonMessageWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonMessageWriter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonMessageWriter, of_, METH_VARARGS),
              DECLARE_METHOD(t_PythonMessageWriter, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonMessageWriter, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonMessageWriter)[] = {
              { Py_tp_methods, t_PythonMessageWriter__methods_ },
              { Py_tp_init, (void *) t_PythonMessageWriter_init_ },
              { Py_tp_getset, t_PythonMessageWriter__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonMessageWriter)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonMessageWriter, t_PythonMessageWriter, PythonMessageWriter);
            PyObject *t_PythonMessageWriter::wrap_Object(const PythonMessageWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_PythonMessageWriter::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonMessageWriter *self = (t_PythonMessageWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            PyObject *t_PythonMessageWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_PythonMessageWriter::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonMessageWriter *self = (t_PythonMessageWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            void t_PythonMessageWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonMessageWriter), &PY_TYPE_DEF(PythonMessageWriter), module, "PythonMessageWriter", 1);
            }

            void t_PythonMessageWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageWriter), "class_", make_descriptor(PythonMessageWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageWriter), "wrapfn_", make_descriptor(t_PythonMessageWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageWriter), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonMessageWriter::initializeClass);
              JNINativeMethod methods[] = {
                { "getFormatVersionKey", "()Ljava/lang/String;", (void *) t_PythonMessageWriter_getFormatVersionKey0 },
                { "getRoot", "()Ljava/lang/String;", (void *) t_PythonMessageWriter_getRoot1 },
                { "getVersion", "()D", (void *) t_PythonMessageWriter_getVersion2 },
                { "pythonDecRef", "()V", (void *) t_PythonMessageWriter_pythonDecRef3 },
                { "writeFooter", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V", (void *) t_PythonMessageWriter_writeFooter4 },
                { "writeHeader", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/section/Header;)V", (void *) t_PythonMessageWriter_writeHeader5 },
                { "writeSegment", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/section/Segment;)V", (void *) t_PythonMessageWriter_writeSegment6 },
              };
              env->registerNatives(cls, methods, 7);
            }

            static PyObject *t_PythonMessageWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonMessageWriter::initializeClass, 1)))
                return NULL;
              return t_PythonMessageWriter::wrap_Object(PythonMessageWriter(((t_PythonMessageWriter *) arg)->object.this$));
            }
            static PyObject *t_PythonMessageWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonMessageWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PythonMessageWriter_of_(t_PythonMessageWriter *self, PyObject *args)
            {
              if (!parseArg(args, "T", 3, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_PythonMessageWriter_init_(t_PythonMessageWriter *self, PyObject *args, PyObject *kwds)
            {
              PythonMessageWriter object((jobject) NULL);

              INT_CALL(object = PythonMessageWriter());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonMessageWriter_finalize(t_PythonMessageWriter *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonMessageWriter_pythonExtension(t_PythonMessageWriter *self, PyObject *args)
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

            static jobject JNICALL t_PythonMessageWriter_getFormatVersionKey0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageWriter::mids$[PythonMessageWriter::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getFormatVersionKey", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("getFormatVersionKey", result);
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

            static jobject JNICALL t_PythonMessageWriter_getRoot1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageWriter::mids$[PythonMessageWriter::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getRoot", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("getRoot", result);
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

            static jdouble JNICALL t_PythonMessageWriter_getVersion2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageWriter::mids$[PythonMessageWriter::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getVersion", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getVersion", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static void JNICALL t_PythonMessageWriter_pythonDecRef3(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageWriter::mids$[PythonMessageWriter::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonMessageWriter::mids$[PythonMessageWriter::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static void JNICALL t_PythonMessageWriter_writeFooter4(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageWriter::mids$[PythonMessageWriter::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::org::orekit::files::ccsds::utils::generation::t_Generator::wrap_Object(::org::orekit::files::ccsds::utils::generation::Generator(a0));
              PyObject *result = PyObject_CallMethod(obj, "writeFooter", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonMessageWriter_writeHeader5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageWriter::mids$[PythonMessageWriter::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::org::orekit::files::ccsds::utils::generation::t_Generator::wrap_Object(::org::orekit::files::ccsds::utils::generation::Generator(a0));
              PyObject *o1 = ::org::orekit::files::ccsds::section::t_Header::wrap_Object(::org::orekit::files::ccsds::section::Header(a1));
              PyObject *result = PyObject_CallMethod(obj, "writeHeader", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonMessageWriter_writeSegment6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageWriter::mids$[PythonMessageWriter::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::org::orekit::files::ccsds::utils::generation::t_Generator::wrap_Object(::org::orekit::files::ccsds::utils::generation::Generator(a0));
              PyObject *o1 = ::org::orekit::files::ccsds::section::t_Segment::wrap_Object(::org::orekit::files::ccsds::section::Segment(a1));
              PyObject *result = PyObject_CallMethod(obj, "writeSegment", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static PyObject *t_PythonMessageWriter_get__self(t_PythonMessageWriter *self, void *data)
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
            static PyObject *t_PythonMessageWriter_get__parameters_(t_PythonMessageWriter *self, void *data)
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
#include "org/orekit/forces/radiation/KnockeRediffusedForceModel.h"
#include "org/orekit/forces/radiation/RadiationSensitive.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/forces/ForceModel.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        ::java::lang::Class *KnockeRediffusedForceModel::class$ = NULL;
        jmethodID *KnockeRediffusedForceModel::mids$ = NULL;
        bool KnockeRediffusedForceModel::live$ = false;

        jclass KnockeRediffusedForceModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/KnockeRediffusedForceModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_17d1d2d417a65389] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/forces/radiation/RadiationSensitive;DD)V");
            mids$[mid_init$_b5f718a016936798] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/forces/radiation/RadiationSensitive;DDLorg/orekit/time/TimeScale;)V");
            mids$[mid_acceleration_0ce449c67b5ffd9c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_20bded0292328743] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_dependsOnPositionOnly_9ab94ac1dc23b105] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        KnockeRediffusedForceModel::KnockeRediffusedForceModel(const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a0, const ::org::orekit::forces::radiation::RadiationSensitive & a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_17d1d2d417a65389, a0.this$, a1.this$, a2, a3)) {}

        KnockeRediffusedForceModel::KnockeRediffusedForceModel(const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a0, const ::org::orekit::forces::radiation::RadiationSensitive & a1, jdouble a2, jdouble a3, const ::org::orekit::time::TimeScale & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b5f718a016936798, a0.this$, a1.this$, a2, a3, a4.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D KnockeRediffusedForceModel::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_0ce449c67b5ffd9c], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D KnockeRediffusedForceModel::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_20bded0292328743], a0.this$, a1.this$));
        }

        jboolean KnockeRediffusedForceModel::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_9ab94ac1dc23b105]);
        }

        ::java::util::List KnockeRediffusedForceModel::getParametersDrivers() const
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
        static PyObject *t_KnockeRediffusedForceModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KnockeRediffusedForceModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_KnockeRediffusedForceModel_init_(t_KnockeRediffusedForceModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_KnockeRediffusedForceModel_acceleration(t_KnockeRediffusedForceModel *self, PyObject *args);
        static PyObject *t_KnockeRediffusedForceModel_dependsOnPositionOnly(t_KnockeRediffusedForceModel *self);
        static PyObject *t_KnockeRediffusedForceModel_getParametersDrivers(t_KnockeRediffusedForceModel *self);
        static PyObject *t_KnockeRediffusedForceModel_get__parametersDrivers(t_KnockeRediffusedForceModel *self, void *data);
        static PyGetSetDef t_KnockeRediffusedForceModel__fields_[] = {
          DECLARE_GET_FIELD(t_KnockeRediffusedForceModel, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_KnockeRediffusedForceModel__methods_[] = {
          DECLARE_METHOD(t_KnockeRediffusedForceModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KnockeRediffusedForceModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KnockeRediffusedForceModel, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_KnockeRediffusedForceModel, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_KnockeRediffusedForceModel, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KnockeRediffusedForceModel)[] = {
          { Py_tp_methods, t_KnockeRediffusedForceModel__methods_ },
          { Py_tp_init, (void *) t_KnockeRediffusedForceModel_init_ },
          { Py_tp_getset, t_KnockeRediffusedForceModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KnockeRediffusedForceModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(KnockeRediffusedForceModel, t_KnockeRediffusedForceModel, KnockeRediffusedForceModel);

        void t_KnockeRediffusedForceModel::install(PyObject *module)
        {
          installType(&PY_TYPE(KnockeRediffusedForceModel), &PY_TYPE_DEF(KnockeRediffusedForceModel), module, "KnockeRediffusedForceModel", 0);
        }

        void t_KnockeRediffusedForceModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KnockeRediffusedForceModel), "class_", make_descriptor(KnockeRediffusedForceModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KnockeRediffusedForceModel), "wrapfn_", make_descriptor(t_KnockeRediffusedForceModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KnockeRediffusedForceModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KnockeRediffusedForceModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KnockeRediffusedForceModel::initializeClass, 1)))
            return NULL;
          return t_KnockeRediffusedForceModel::wrap_Object(KnockeRediffusedForceModel(((t_KnockeRediffusedForceModel *) arg)->object.this$));
        }
        static PyObject *t_KnockeRediffusedForceModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KnockeRediffusedForceModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_KnockeRediffusedForceModel_init_(t_KnockeRediffusedForceModel *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::utils::ExtendedPVCoordinatesProvider a0((jobject) NULL);
              ::org::orekit::forces::radiation::RadiationSensitive a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              KnockeRediffusedForceModel object((jobject) NULL);

              if (!parseArgs(args, "kkDD", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::forces::radiation::RadiationSensitive::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = KnockeRediffusedForceModel(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::utils::ExtendedPVCoordinatesProvider a0((jobject) NULL);
              ::org::orekit::forces::radiation::RadiationSensitive a1((jobject) NULL);
              jdouble a2;
              jdouble a3;
              ::org::orekit::time::TimeScale a4((jobject) NULL);
              KnockeRediffusedForceModel object((jobject) NULL);

              if (!parseArgs(args, "kkDDk", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::forces::radiation::RadiationSensitive::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = KnockeRediffusedForceModel(a0, a1, a2, a3, a4));
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

        static PyObject *t_KnockeRediffusedForceModel_acceleration(t_KnockeRediffusedForceModel *self, PyObject *args)
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

          PyErr_SetArgsError((PyObject *) self, "acceleration", args);
          return NULL;
        }

        static PyObject *t_KnockeRediffusedForceModel_dependsOnPositionOnly(t_KnockeRediffusedForceModel *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_KnockeRediffusedForceModel_getParametersDrivers(t_KnockeRediffusedForceModel *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_KnockeRediffusedForceModel_get__parametersDrivers(t_KnockeRediffusedForceModel *self, void *data)
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
#include "org/orekit/attitudes/TargetPointing.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *TargetPointing::class$ = NULL;
      jmethodID *TargetPointing::mids$ = NULL;
      bool TargetPointing::live$ = false;

      jclass TargetPointing::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/TargetPointing");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_868e35d94172e5d0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_44b2b0a0619e7060] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/BodyShape;)V");
          mids$[mid_getTargetPV_0c9a6603286e7c6f] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getTargetPV_4a6b199bd28f952f] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TargetPointing::TargetPointing(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) : ::org::orekit::attitudes::GroundPointing(env->newObject(initializeClass, &mids$, mid_init$_868e35d94172e5d0, a0.this$, a1.this$, a2.this$)) {}

      TargetPointing::TargetPointing(const ::org::orekit::frames::Frame & a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::bodies::BodyShape & a2) : ::org::orekit::attitudes::GroundPointing(env->newObject(initializeClass, &mids$, mid_init$_44b2b0a0619e7060, a0.this$, a1.this$, a2.this$)) {}

      ::org::orekit::utils::TimeStampedPVCoordinates TargetPointing::getTargetPV(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_0c9a6603286e7c6f], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates TargetPointing::getTargetPV(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_4a6b199bd28f952f], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_TargetPointing_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TargetPointing_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TargetPointing_init_(t_TargetPointing *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TargetPointing_getTargetPV(t_TargetPointing *self, PyObject *args);

      static PyMethodDef t_TargetPointing__methods_[] = {
        DECLARE_METHOD(t_TargetPointing, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TargetPointing, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TargetPointing, getTargetPV, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TargetPointing)[] = {
        { Py_tp_methods, t_TargetPointing__methods_ },
        { Py_tp_init, (void *) t_TargetPointing_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TargetPointing)[] = {
        &PY_TYPE_DEF(::org::orekit::attitudes::GroundPointing),
        NULL
      };

      DEFINE_TYPE(TargetPointing, t_TargetPointing, TargetPointing);

      void t_TargetPointing::install(PyObject *module)
      {
        installType(&PY_TYPE(TargetPointing), &PY_TYPE_DEF(TargetPointing), module, "TargetPointing", 0);
      }

      void t_TargetPointing::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TargetPointing), "class_", make_descriptor(TargetPointing::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TargetPointing), "wrapfn_", make_descriptor(t_TargetPointing::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TargetPointing), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TargetPointing_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TargetPointing::initializeClass, 1)))
          return NULL;
        return t_TargetPointing::wrap_Object(TargetPointing(((t_TargetPointing *) arg)->object.this$));
      }
      static PyObject *t_TargetPointing_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TargetPointing::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TargetPointing_init_(t_TargetPointing *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            TargetPointing object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = TargetPointing(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
            ::org::orekit::bodies::BodyShape a2((jobject) NULL);
            TargetPointing object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = TargetPointing(a0, a1, a2));
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

      static PyObject *t_TargetPointing_getTargetPV(t_TargetPointing *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getTargetPV(a0, a1, a2));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getTargetPV(a0, a1, a2));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTargetPV", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *UnnormalizedSphericalHarmonicsProvider::class$ = NULL;
          jmethodID *UnnormalizedSphericalHarmonicsProvider::mids$ = NULL;
          bool UnnormalizedSphericalHarmonicsProvider::live$ = false;

          jclass UnnormalizedSphericalHarmonicsProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_onDate_c2c9ac25aaca78ce] = env->getMethodID(cls, "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics UnnormalizedSphericalHarmonicsProvider::onDate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics(env->callObjectMethod(this$, mids$[mid_onDate_c2c9ac25aaca78ce], a0.this$));
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
          static PyObject *t_UnnormalizedSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UnnormalizedSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UnnormalizedSphericalHarmonicsProvider_onDate(t_UnnormalizedSphericalHarmonicsProvider *self, PyObject *arg);

          static PyMethodDef t_UnnormalizedSphericalHarmonicsProvider__methods_[] = {
            DECLARE_METHOD(t_UnnormalizedSphericalHarmonicsProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UnnormalizedSphericalHarmonicsProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UnnormalizedSphericalHarmonicsProvider, onDate, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(UnnormalizedSphericalHarmonicsProvider)[] = {
            { Py_tp_methods, t_UnnormalizedSphericalHarmonicsProvider__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(UnnormalizedSphericalHarmonicsProvider)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::SphericalHarmonicsProvider),
            NULL
          };

          DEFINE_TYPE(UnnormalizedSphericalHarmonicsProvider, t_UnnormalizedSphericalHarmonicsProvider, UnnormalizedSphericalHarmonicsProvider);

          void t_UnnormalizedSphericalHarmonicsProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(UnnormalizedSphericalHarmonicsProvider), &PY_TYPE_DEF(UnnormalizedSphericalHarmonicsProvider), module, "UnnormalizedSphericalHarmonicsProvider", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnnormalizedSphericalHarmonicsProvider), "UnnormalizedSphericalHarmonics", make_descriptor(&PY_TYPE_DEF(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics)));
          }

          void t_UnnormalizedSphericalHarmonicsProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnnormalizedSphericalHarmonicsProvider), "class_", make_descriptor(UnnormalizedSphericalHarmonicsProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnnormalizedSphericalHarmonicsProvider), "wrapfn_", make_descriptor(t_UnnormalizedSphericalHarmonicsProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnnormalizedSphericalHarmonicsProvider), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_UnnormalizedSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, UnnormalizedSphericalHarmonicsProvider::initializeClass, 1)))
              return NULL;
            return t_UnnormalizedSphericalHarmonicsProvider::wrap_Object(UnnormalizedSphericalHarmonicsProvider(((t_UnnormalizedSphericalHarmonicsProvider *) arg)->object.this$));
          }
          static PyObject *t_UnnormalizedSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, UnnormalizedSphericalHarmonicsProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_UnnormalizedSphericalHarmonicsProvider_onDate(t_UnnormalizedSphericalHarmonicsProvider *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.onDate(a0));
              return ::org::orekit::forces::gravity::potential::t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "onDate", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader$LineParameters.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *CssiSpaceWeatherDataLoader$LineParameters::class$ = NULL;
            jmethodID *CssiSpaceWeatherDataLoader$LineParameters::mids$ = NULL;
            bool CssiSpaceWeatherDataLoader$LineParameters::live$ = false;

            jclass CssiSpaceWeatherDataLoader$LineParameters::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader$LineParameters");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_db9eea1b704b92b4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;[DD[DDDIDDDDD)V");
                mids$[mid_compareTo_73ef5c88fa79f2d9] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader$LineParameters;)I");
                mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
                mids$[mid_getApAvg_b74f83833fdad017] = env->getMethodID(cls, "getApAvg", "()D");
                mids$[mid_getCtr81Adj_b74f83833fdad017] = env->getMethodID(cls, "getCtr81Adj", "()D");
                mids$[mid_getCtr81Obs_b74f83833fdad017] = env->getMethodID(cls, "getCtr81Obs", "()D");
                mids$[mid_getF107Adj_b74f83833fdad017] = env->getMethodID(cls, "getF107Adj", "()D");
                mids$[mid_getF107Obs_b74f83833fdad017] = env->getMethodID(cls, "getF107Obs", "()D");
                mids$[mid_getFluxQualifier_55546ef6a647f39b] = env->getMethodID(cls, "getFluxQualifier", "()I");
                mids$[mid_getKpSum_b74f83833fdad017] = env->getMethodID(cls, "getKpSum", "()D");
                mids$[mid_getLst81Adj_b74f83833fdad017] = env->getMethodID(cls, "getLst81Adj", "()D");
                mids$[mid_getLst81Obs_b74f83833fdad017] = env->getMethodID(cls, "getLst81Obs", "()D");
                mids$[mid_getThreeHourlyAp_25e1757a36c4dde2] = env->getMethodID(cls, "getThreeHourlyAp", "()[D");
                mids$[mid_getThreeHourlyAp_2afcbc21f4e57ab2] = env->getMethodID(cls, "getThreeHourlyAp", "(I)D");
                mids$[mid_getThreeHourlyKp_25e1757a36c4dde2] = env->getMethodID(cls, "getThreeHourlyKp", "()[D");
                mids$[mid_getThreeHourlyKp_2afcbc21f4e57ab2] = env->getMethodID(cls, "getThreeHourlyKp", "(I)D");
                mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CssiSpaceWeatherDataLoader$LineParameters::CssiSpaceWeatherDataLoader$LineParameters(const ::org::orekit::time::AbsoluteDate & a0, const JArray< jdouble > & a1, jdouble a2, const JArray< jdouble > & a3, jdouble a4, jdouble a5, jint a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters(env->newObject(initializeClass, &mids$, mid_init$_db9eea1b704b92b4, a0.this$, a1.this$, a2, a3.this$, a4, a5, a6, a7, a8, a9, a10, a11)) {}

            jint CssiSpaceWeatherDataLoader$LineParameters::compareTo(const ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters & a0) const
            {
              return env->callIntMethod(this$, mids$[mid_compareTo_73ef5c88fa79f2d9], a0.this$);
            }

            jboolean CssiSpaceWeatherDataLoader$LineParameters::equals(const ::java::lang::Object & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getApAvg() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getApAvg_b74f83833fdad017]);
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getCtr81Adj() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCtr81Adj_b74f83833fdad017]);
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getCtr81Obs() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCtr81Obs_b74f83833fdad017]);
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getF107Adj() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getF107Adj_b74f83833fdad017]);
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getF107Obs() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getF107Obs_b74f83833fdad017]);
            }

            jint CssiSpaceWeatherDataLoader$LineParameters::getFluxQualifier() const
            {
              return env->callIntMethod(this$, mids$[mid_getFluxQualifier_55546ef6a647f39b]);
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getKpSum() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getKpSum_b74f83833fdad017]);
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getLst81Adj() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getLst81Adj_b74f83833fdad017]);
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getLst81Obs() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getLst81Obs_b74f83833fdad017]);
            }

            JArray< jdouble > CssiSpaceWeatherDataLoader$LineParameters::getThreeHourlyAp() const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getThreeHourlyAp_25e1757a36c4dde2]));
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getThreeHourlyAp(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getThreeHourlyAp_2afcbc21f4e57ab2], a0);
            }

            JArray< jdouble > CssiSpaceWeatherDataLoader$LineParameters::getThreeHourlyKp() const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getThreeHourlyKp_25e1757a36c4dde2]));
            }

            jdouble CssiSpaceWeatherDataLoader$LineParameters::getThreeHourlyKp(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getThreeHourlyKp_2afcbc21f4e57ab2], a0);
            }

            jint CssiSpaceWeatherDataLoader$LineParameters::hashCode() const
            {
              return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
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
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_of_(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args);
            static int t_CssiSpaceWeatherDataLoader$LineParameters_init_(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_compareTo(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_equals(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getApAvg(t_CssiSpaceWeatherDataLoader$LineParameters *self);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getCtr81Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getCtr81Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getF107Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getF107Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getFluxQualifier(t_CssiSpaceWeatherDataLoader$LineParameters *self);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getKpSum(t_CssiSpaceWeatherDataLoader$LineParameters *self);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getLst81Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getLst81Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getThreeHourlyAp(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getThreeHourlyKp(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_hashCode(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__apAvg(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__ctr81Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__ctr81Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__f107Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__f107Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__fluxQualifier(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__kpSum(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__lst81Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__lst81Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__threeHourlyAp(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__threeHourlyKp(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__parameters_(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data);
            static PyGetSetDef t_CssiSpaceWeatherDataLoader$LineParameters__fields_[] = {
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, apAvg),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, ctr81Adj),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, ctr81Obs),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, f107Adj),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, f107Obs),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, fluxQualifier),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, kpSum),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, lst81Adj),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, lst81Obs),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, threeHourlyAp),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, threeHourlyKp),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader$LineParameters, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CssiSpaceWeatherDataLoader$LineParameters__methods_[] = {
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, of_, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, compareTo, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, equals, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, getApAvg, METH_NOARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, getCtr81Adj, METH_NOARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, getCtr81Obs, METH_NOARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, getF107Adj, METH_NOARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, getF107Obs, METH_NOARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, getFluxQualifier, METH_NOARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, getKpSum, METH_NOARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, getLst81Adj, METH_NOARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, getLst81Obs, METH_NOARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, getThreeHourlyAp, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, getThreeHourlyKp, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader$LineParameters, hashCode, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CssiSpaceWeatherDataLoader$LineParameters)[] = {
              { Py_tp_methods, t_CssiSpaceWeatherDataLoader$LineParameters__methods_ },
              { Py_tp_init, (void *) t_CssiSpaceWeatherDataLoader$LineParameters_init_ },
              { Py_tp_getset, t_CssiSpaceWeatherDataLoader$LineParameters__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CssiSpaceWeatherDataLoader$LineParameters)[] = {
              &PY_TYPE_DEF(::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters),
              NULL
            };

            DEFINE_TYPE(CssiSpaceWeatherDataLoader$LineParameters, t_CssiSpaceWeatherDataLoader$LineParameters, CssiSpaceWeatherDataLoader$LineParameters);
            PyObject *t_CssiSpaceWeatherDataLoader$LineParameters::wrap_Object(const CssiSpaceWeatherDataLoader$LineParameters& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CssiSpaceWeatherDataLoader$LineParameters::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CssiSpaceWeatherDataLoader$LineParameters *self = (t_CssiSpaceWeatherDataLoader$LineParameters *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CssiSpaceWeatherDataLoader$LineParameters::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CssiSpaceWeatherDataLoader$LineParameters::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CssiSpaceWeatherDataLoader$LineParameters *self = (t_CssiSpaceWeatherDataLoader$LineParameters *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CssiSpaceWeatherDataLoader$LineParameters::install(PyObject *module)
            {
              installType(&PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters), &PY_TYPE_DEF(CssiSpaceWeatherDataLoader$LineParameters), module, "CssiSpaceWeatherDataLoader$LineParameters", 0);
            }

            void t_CssiSpaceWeatherDataLoader$LineParameters::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters), "class_", make_descriptor(CssiSpaceWeatherDataLoader$LineParameters::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters), "wrapfn_", make_descriptor(t_CssiSpaceWeatherDataLoader$LineParameters::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CssiSpaceWeatherDataLoader$LineParameters::initializeClass, 1)))
                return NULL;
              return t_CssiSpaceWeatherDataLoader$LineParameters::wrap_Object(CssiSpaceWeatherDataLoader$LineParameters(((t_CssiSpaceWeatherDataLoader$LineParameters *) arg)->object.this$));
            }
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CssiSpaceWeatherDataLoader$LineParameters::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_of_(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_CssiSpaceWeatherDataLoader$LineParameters_init_(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              JArray< jdouble > a3((jobject) NULL);
              jdouble a4;
              jdouble a5;
              jint a6;
              jdouble a7;
              jdouble a8;
              jdouble a9;
              jdouble a10;
              jdouble a11;
              CssiSpaceWeatherDataLoader$LineParameters object((jobject) NULL);

              if (!parseArgs(args, "k[DD[DDDIDDDDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11))
              {
                INT_CALL(object = CssiSpaceWeatherDataLoader$LineParameters(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_compareTo(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args)
            {
              ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters a0((jobject) NULL);
              PyTypeObject **p0;
              jint result;

              if (!parseArgs(args, "K", ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader$LineParameters::initializeClass, &a0, &p0, ::org::orekit::models::earth::atmosphere::data::t_AbstractSolarActivityDataLoader$LineParameters::parameters_))
              {
                OBJ_CALL(result = self->object.compareTo(a0));
                return PyLong_FromLong((long) result);
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters), (PyObject *) self, "compareTo", args, 2);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_equals(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args)
            {
              ::java::lang::Object a0((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "o", &a0))
              {
                OBJ_CALL(result = self->object.equals(a0));
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters), (PyObject *) self, "equals", args, 2);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getApAvg(t_CssiSpaceWeatherDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getApAvg());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getCtr81Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCtr81Adj());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getCtr81Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCtr81Obs());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getF107Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getF107Adj());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getF107Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getF107Obs());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getFluxQualifier(t_CssiSpaceWeatherDataLoader$LineParameters *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getFluxQualifier());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getKpSum(t_CssiSpaceWeatherDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getKpSum());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getLst81Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getLst81Adj());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getLst81Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getLst81Obs());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getThreeHourlyAp(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  JArray< jdouble > result((jobject) NULL);
                  OBJ_CALL(result = self->object.getThreeHourlyAp());
                  return result.wrap();
                }
                break;
               case 1:
                {
                  jint a0;
                  jdouble result;

                  if (!parseArgs(args, "I", &a0))
                  {
                    OBJ_CALL(result = self->object.getThreeHourlyAp(a0));
                    return PyFloat_FromDouble((double) result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getThreeHourlyAp", args);
              return NULL;
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_getThreeHourlyKp(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  JArray< jdouble > result((jobject) NULL);
                  OBJ_CALL(result = self->object.getThreeHourlyKp());
                  return result.wrap();
                }
                break;
               case 1:
                {
                  jint a0;
                  jdouble result;

                  if (!parseArgs(args, "I", &a0))
                  {
                    OBJ_CALL(result = self->object.getThreeHourlyKp(a0));
                    return PyFloat_FromDouble((double) result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getThreeHourlyKp", args);
              return NULL;
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_hashCode(t_CssiSpaceWeatherDataLoader$LineParameters *self, PyObject *args)
            {
              jint result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.hashCode());
                return PyLong_FromLong((long) result);
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters), (PyObject *) self, "hashCode", args, 2);
            }
            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__parameters_(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__apAvg(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getApAvg());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__ctr81Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCtr81Adj());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__ctr81Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCtr81Obs());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__f107Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getF107Adj());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__f107Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getF107Obs());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__fluxQualifier(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getFluxQualifier());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__kpSum(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getKpSum());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__lst81Adj(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getLst81Adj());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__lst81Obs(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getLst81Obs());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__threeHourlyAp(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              JArray< jdouble > value((jobject) NULL);
              OBJ_CALL(value = self->object.getThreeHourlyAp());
              return value.wrap();
            }

            static PyObject *t_CssiSpaceWeatherDataLoader$LineParameters_get__threeHourlyKp(t_CssiSpaceWeatherDataLoader$LineParameters *self, void *data)
            {
              JArray< jdouble > value((jobject) NULL);
              OBJ_CALL(value = self->object.getThreeHourlyKp());
              return value.wrap();
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/linear/SimplexSolver.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {

        ::java::lang::Class *SimplexSolver::class$ = NULL;
        jmethodID *SimplexSolver::mids$ = NULL;
        bool SimplexSolver::live$ = false;

        jclass SimplexSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/linear/SimplexSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_1af1b4c263b48b0c] = env->getMethodID(cls, "<init>", "(DI)V");
            mids$[mid_init$_d2215b3b0e5c9451] = env->getMethodID(cls, "<init>", "(DID)V");
            mids$[mid_doOptimize_35ff88cac3217ca3] = env->getMethodID(cls, "doOptimize", "()Lorg/hipparchus/optim/PointValuePair;");
            mids$[mid_optimize_9d04816d74472b44] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Lorg/hipparchus/optim/PointValuePair;");
            mids$[mid_parseOptimizationData_14193ddbce7a2cc0] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");
            mids$[mid_doIteration_ba6b90df10d0847b] = env->getMethodID(cls, "doIteration", "(Lorg/hipparchus/optim/linear/SimplexTableau;)V");
            mids$[mid_solvePhase1_ba6b90df10d0847b] = env->getMethodID(cls, "solvePhase1", "(Lorg/hipparchus/optim/linear/SimplexTableau;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SimplexSolver::SimplexSolver() : ::org::hipparchus::optim::linear::LinearOptimizer(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        SimplexSolver::SimplexSolver(jdouble a0) : ::org::hipparchus::optim::linear::LinearOptimizer(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        SimplexSolver::SimplexSolver(jdouble a0, jint a1) : ::org::hipparchus::optim::linear::LinearOptimizer(env->newObject(initializeClass, &mids$, mid_init$_1af1b4c263b48b0c, a0, a1)) {}

        SimplexSolver::SimplexSolver(jdouble a0, jint a1, jdouble a2) : ::org::hipparchus::optim::linear::LinearOptimizer(env->newObject(initializeClass, &mids$, mid_init$_d2215b3b0e5c9451, a0, a1, a2)) {}

        ::org::hipparchus::optim::PointValuePair SimplexSolver::doOptimize() const
        {
          return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_doOptimize_35ff88cac3217ca3]));
        }

        ::org::hipparchus::optim::PointValuePair SimplexSolver::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
        {
          return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_optimize_9d04816d74472b44], a0.this$));
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
      namespace linear {
        static PyObject *t_SimplexSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SimplexSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SimplexSolver_of_(t_SimplexSolver *self, PyObject *args);
        static int t_SimplexSolver_init_(t_SimplexSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SimplexSolver_doOptimize(t_SimplexSolver *self);
        static PyObject *t_SimplexSolver_optimize(t_SimplexSolver *self, PyObject *args);
        static PyObject *t_SimplexSolver_get__parameters_(t_SimplexSolver *self, void *data);
        static PyGetSetDef t_SimplexSolver__fields_[] = {
          DECLARE_GET_FIELD(t_SimplexSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SimplexSolver__methods_[] = {
          DECLARE_METHOD(t_SimplexSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimplexSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimplexSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_SimplexSolver, doOptimize, METH_NOARGS),
          DECLARE_METHOD(t_SimplexSolver, optimize, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SimplexSolver)[] = {
          { Py_tp_methods, t_SimplexSolver__methods_ },
          { Py_tp_init, (void *) t_SimplexSolver_init_ },
          { Py_tp_getset, t_SimplexSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SimplexSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::optim::linear::LinearOptimizer),
          NULL
        };

        DEFINE_TYPE(SimplexSolver, t_SimplexSolver, SimplexSolver);
        PyObject *t_SimplexSolver::wrap_Object(const SimplexSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SimplexSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SimplexSolver *self = (t_SimplexSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SimplexSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SimplexSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SimplexSolver *self = (t_SimplexSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SimplexSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(SimplexSolver), &PY_TYPE_DEF(SimplexSolver), module, "SimplexSolver", 0);
        }

        void t_SimplexSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimplexSolver), "class_", make_descriptor(SimplexSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimplexSolver), "wrapfn_", make_descriptor(t_SimplexSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimplexSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SimplexSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SimplexSolver::initializeClass, 1)))
            return NULL;
          return t_SimplexSolver::wrap_Object(SimplexSolver(((t_SimplexSolver *) arg)->object.this$));
        }
        static PyObject *t_SimplexSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SimplexSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SimplexSolver_of_(t_SimplexSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_SimplexSolver_init_(t_SimplexSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              SimplexSolver object((jobject) NULL);

              INT_CALL(object = SimplexSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
              break;
            }
           case 1:
            {
              jdouble a0;
              SimplexSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = SimplexSolver(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jint a1;
              SimplexSolver object((jobject) NULL);

              if (!parseArgs(args, "DI", &a0, &a1))
              {
                INT_CALL(object = SimplexSolver(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jint a1;
              jdouble a2;
              SimplexSolver object((jobject) NULL);

              if (!parseArgs(args, "DID", &a0, &a1, &a2))
              {
                INT_CALL(object = SimplexSolver(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
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

        static PyObject *t_SimplexSolver_doOptimize(t_SimplexSolver *self)
        {
          ::org::hipparchus::optim::PointValuePair result((jobject) NULL);
          OBJ_CALL(result = self->object.doOptimize());
          return ::org::hipparchus::optim::t_PointValuePair::wrap_Object(result);
        }

        static PyObject *t_SimplexSolver_optimize(t_SimplexSolver *self, PyObject *args)
        {
          JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
          ::org::hipparchus::optim::PointValuePair result((jobject) NULL);

          if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.optimize(a0));
            return ::org::hipparchus::optim::t_PointValuePair::wrap_Object(result);
          }

          return callSuper(PY_TYPE(SimplexSolver), (PyObject *) self, "optimize", args, 2);
        }
        static PyObject *t_SimplexSolver_get__parameters_(t_SimplexSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinates.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeStampedFieldAngularCoordinates::class$ = NULL;
      jmethodID *TimeStampedFieldAngularCoordinates::mids$ = NULL;
      bool TimeStampedFieldAngularCoordinates::live$ = false;

      jclass TimeStampedFieldAngularCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeStampedFieldAngularCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f8b481461ea8ab39] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)V");
          mids$[mid_init$_61cf0823ade6dd93] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/utils/TimeStampedAngularCoordinates;)V");
          mids$[mid_init$_52727332bd6be5b2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_1a460667376305ef] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_145a04a9f1c56fe2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;D)V");
          mids$[mid_init$_c1c3e02e01cb1f0e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;D)V");
          mids$[mid_addOffset_a34ef7d1f116941c] = env->getMethodID(cls, "addOffset", "(Lorg/orekit/utils/FieldAngularCoordinates;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
          mids$[mid_getDate_fa23a4301b9c83e7] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_revert_508aa3ee9876a7be] = env->getMethodID(cls, "revert", "()Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
          mids$[mid_shiftedBy_420699eb39f86905] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
          mids$[mid_shiftedBy_a6ca19a27632ab4d] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
          mids$[mid_subtractOffset_a34ef7d1f116941c] = env->getMethodID(cls, "subtractOffset", "(Lorg/orekit/utils/FieldAngularCoordinates;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedFieldAngularCoordinates::TimeStampedFieldAngularCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1) : ::org::orekit::utils::FieldAngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_f8b481461ea8ab39, a0.this$, a1.this$)) {}

      TimeStampedFieldAngularCoordinates::TimeStampedFieldAngularCoordinates(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::TimeStampedAngularCoordinates & a1) : ::org::orekit::utils::FieldAngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_61cf0823ade6dd93, a0.this$, a1.this$)) {}

      TimeStampedFieldAngularCoordinates::TimeStampedFieldAngularCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3) : ::org::orekit::utils::FieldAngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_52727332bd6be5b2, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      TimeStampedFieldAngularCoordinates::TimeStampedFieldAngularCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3) : ::org::orekit::utils::FieldAngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_1a460667376305ef, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      TimeStampedFieldAngularCoordinates::TimeStampedFieldAngularCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::FieldPVCoordinates & a1, const ::org::orekit::utils::FieldPVCoordinates & a2, const ::org::orekit::utils::FieldPVCoordinates & a3, const ::org::orekit::utils::FieldPVCoordinates & a4, jdouble a5) : ::org::orekit::utils::FieldAngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_145a04a9f1c56fe2, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5)) {}

      TimeStampedFieldAngularCoordinates::TimeStampedFieldAngularCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::utils::FieldPVCoordinates & a1, const ::org::orekit::utils::FieldPVCoordinates & a2, const ::org::orekit::utils::FieldPVCoordinates & a3, const ::org::orekit::utils::FieldPVCoordinates & a4, jdouble a5) : ::org::orekit::utils::FieldAngularCoordinates(env->newObject(initializeClass, &mids$, mid_init$_c1c3e02e01cb1f0e, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5)) {}

      TimeStampedFieldAngularCoordinates TimeStampedFieldAngularCoordinates::addOffset(const ::org::orekit::utils::FieldAngularCoordinates & a0) const
      {
        return TimeStampedFieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_addOffset_a34ef7d1f116941c], a0.this$));
      }

      ::org::orekit::time::FieldAbsoluteDate TimeStampedFieldAngularCoordinates::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_fa23a4301b9c83e7]));
      }

      TimeStampedFieldAngularCoordinates TimeStampedFieldAngularCoordinates::revert() const
      {
        return TimeStampedFieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_revert_508aa3ee9876a7be]));
      }

      TimeStampedFieldAngularCoordinates TimeStampedFieldAngularCoordinates::shiftedBy(jdouble a0) const
      {
        return TimeStampedFieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_420699eb39f86905], a0));
      }

      TimeStampedFieldAngularCoordinates TimeStampedFieldAngularCoordinates::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return TimeStampedFieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_a6ca19a27632ab4d], a0.this$));
      }

      TimeStampedFieldAngularCoordinates TimeStampedFieldAngularCoordinates::subtractOffset(const ::org::orekit::utils::FieldAngularCoordinates & a0) const
      {
        return TimeStampedFieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_subtractOffset_a34ef7d1f116941c], a0.this$));
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
      static PyObject *t_TimeStampedFieldAngularCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldAngularCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldAngularCoordinates_of_(t_TimeStampedFieldAngularCoordinates *self, PyObject *args);
      static int t_TimeStampedFieldAngularCoordinates_init_(t_TimeStampedFieldAngularCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedFieldAngularCoordinates_addOffset(t_TimeStampedFieldAngularCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedFieldAngularCoordinates_getDate(t_TimeStampedFieldAngularCoordinates *self);
      static PyObject *t_TimeStampedFieldAngularCoordinates_revert(t_TimeStampedFieldAngularCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedFieldAngularCoordinates_shiftedBy(t_TimeStampedFieldAngularCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedFieldAngularCoordinates_subtractOffset(t_TimeStampedFieldAngularCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedFieldAngularCoordinates_get__date(t_TimeStampedFieldAngularCoordinates *self, void *data);
      static PyObject *t_TimeStampedFieldAngularCoordinates_get__parameters_(t_TimeStampedFieldAngularCoordinates *self, void *data);
      static PyGetSetDef t_TimeStampedFieldAngularCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedFieldAngularCoordinates, date),
        DECLARE_GET_FIELD(t_TimeStampedFieldAngularCoordinates, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedFieldAngularCoordinates__methods_[] = {
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinates, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinates, addOffset, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinates, getDate, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinates, revert, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinates, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedFieldAngularCoordinates, subtractOffset, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedFieldAngularCoordinates)[] = {
        { Py_tp_methods, t_TimeStampedFieldAngularCoordinates__methods_ },
        { Py_tp_init, (void *) t_TimeStampedFieldAngularCoordinates_init_ },
        { Py_tp_getset, t_TimeStampedFieldAngularCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedFieldAngularCoordinates)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::FieldAngularCoordinates),
        NULL
      };

      DEFINE_TYPE(TimeStampedFieldAngularCoordinates, t_TimeStampedFieldAngularCoordinates, TimeStampedFieldAngularCoordinates);
      PyObject *t_TimeStampedFieldAngularCoordinates::wrap_Object(const TimeStampedFieldAngularCoordinates& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldAngularCoordinates::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldAngularCoordinates *self = (t_TimeStampedFieldAngularCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedFieldAngularCoordinates::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldAngularCoordinates::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldAngularCoordinates *self = (t_TimeStampedFieldAngularCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedFieldAngularCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedFieldAngularCoordinates), &PY_TYPE_DEF(TimeStampedFieldAngularCoordinates), module, "TimeStampedFieldAngularCoordinates", 0);
      }

      void t_TimeStampedFieldAngularCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldAngularCoordinates), "class_", make_descriptor(TimeStampedFieldAngularCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldAngularCoordinates), "wrapfn_", make_descriptor(t_TimeStampedFieldAngularCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldAngularCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedFieldAngularCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedFieldAngularCoordinates::initializeClass, 1)))
          return NULL;
        return t_TimeStampedFieldAngularCoordinates::wrap_Object(TimeStampedFieldAngularCoordinates(((t_TimeStampedFieldAngularCoordinates *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedFieldAngularCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedFieldAngularCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedFieldAngularCoordinates_of_(t_TimeStampedFieldAngularCoordinates *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedFieldAngularCoordinates_init_(t_TimeStampedFieldAngularCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedFieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_))
            {
              INT_CALL(object = TimeStampedFieldAngularCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::TimeStampedAngularCoordinates a1((jobject) NULL);
            TimeStampedFieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::TimeStampedAngularCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = TimeStampedFieldAngularCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a3((jobject) NULL);
            PyTypeObject **p3;
            TimeStampedFieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKKK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = TimeStampedFieldAngularCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a3((jobject) NULL);
            PyTypeObject **p3;
            TimeStampedFieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = TimeStampedFieldAngularCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            jdouble a5;
            TimeStampedFieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKKKKD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &p3, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a5))
            {
              INT_CALL(object = TimeStampedFieldAngularCoordinates(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            jdouble a5;
            TimeStampedFieldAngularCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKKD", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a3, &p3, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a5))
            {
              INT_CALL(object = TimeStampedFieldAngularCoordinates(a0, a1, a2, a3, a4, a5));
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

      static PyObject *t_TimeStampedFieldAngularCoordinates_addOffset(t_TimeStampedFieldAngularCoordinates *self, PyObject *args)
      {
        ::org::orekit::utils::FieldAngularCoordinates a0((jobject) NULL);
        PyTypeObject **p0;
        TimeStampedFieldAngularCoordinates result((jobject) NULL);

        if (!parseArgs(args, "K", ::org::orekit::utils::FieldAngularCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAngularCoordinates::parameters_))
        {
          OBJ_CALL(result = self->object.addOffset(a0));
          return t_TimeStampedFieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(TimeStampedFieldAngularCoordinates), (PyObject *) self, "addOffset", args, 2);
      }

      static PyObject *t_TimeStampedFieldAngularCoordinates_getDate(t_TimeStampedFieldAngularCoordinates *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeStampedFieldAngularCoordinates_revert(t_TimeStampedFieldAngularCoordinates *self, PyObject *args)
      {
        TimeStampedFieldAngularCoordinates result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.revert());
          return t_TimeStampedFieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(TimeStampedFieldAngularCoordinates), (PyObject *) self, "revert", args, 2);
      }

      static PyObject *t_TimeStampedFieldAngularCoordinates_shiftedBy(t_TimeStampedFieldAngularCoordinates *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            TimeStampedFieldAngularCoordinates result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_TimeStampedFieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            TimeStampedFieldAngularCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_TimeStampedFieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(TimeStampedFieldAngularCoordinates), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_TimeStampedFieldAngularCoordinates_subtractOffset(t_TimeStampedFieldAngularCoordinates *self, PyObject *args)
      {
        ::org::orekit::utils::FieldAngularCoordinates a0((jobject) NULL);
        PyTypeObject **p0;
        TimeStampedFieldAngularCoordinates result((jobject) NULL);

        if (!parseArgs(args, "K", ::org::orekit::utils::FieldAngularCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAngularCoordinates::parameters_))
        {
          OBJ_CALL(result = self->object.subtractOffset(a0));
          return t_TimeStampedFieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(TimeStampedFieldAngularCoordinates), (PyObject *) self, "subtractOffset", args, 2);
      }
      static PyObject *t_TimeStampedFieldAngularCoordinates_get__parameters_(t_TimeStampedFieldAngularCoordinates *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeStampedFieldAngularCoordinates_get__date(t_TimeStampedFieldAngularCoordinates *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/EOPFitter.h"
#include "java/io/Serializable.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/frames/SingleParameterFitter.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/EOPFittedModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *EOPFitter::class$ = NULL;
      jmethodID *EOPFitter::mids$ = NULL;
      bool EOPFitter::live$ = false;

      jclass EOPFitter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/EOPFitter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d7eb7eed1392eeb4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/SingleParameterFitter;Lorg/orekit/frames/SingleParameterFitter;Lorg/orekit/frames/SingleParameterFitter;Lorg/orekit/frames/SingleParameterFitter;Lorg/orekit/frames/SingleParameterFitter;)V");
          mids$[mid_fit_d6f0ba91b4d7f8fd] = env->getMethodID(cls, "fit", "(Lorg/orekit/frames/EOPHistory;)Lorg/orekit/frames/EOPFittedModel;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EOPFitter::EOPFitter(const ::org::orekit::frames::SingleParameterFitter & a0, const ::org::orekit::frames::SingleParameterFitter & a1, const ::org::orekit::frames::SingleParameterFitter & a2, const ::org::orekit::frames::SingleParameterFitter & a3, const ::org::orekit::frames::SingleParameterFitter & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d7eb7eed1392eeb4, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      ::org::orekit::frames::EOPFittedModel EOPFitter::fit(const ::org::orekit::frames::EOPHistory & a0) const
      {
        return ::org::orekit::frames::EOPFittedModel(env->callObjectMethod(this$, mids$[mid_fit_d6f0ba91b4d7f8fd], a0.this$));
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
      static PyObject *t_EOPFitter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EOPFitter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_EOPFitter_init_(t_EOPFitter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_EOPFitter_fit(t_EOPFitter *self, PyObject *arg);

      static PyMethodDef t_EOPFitter__methods_[] = {
        DECLARE_METHOD(t_EOPFitter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPFitter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPFitter, fit, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EOPFitter)[] = {
        { Py_tp_methods, t_EOPFitter__methods_ },
        { Py_tp_init, (void *) t_EOPFitter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EOPFitter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EOPFitter, t_EOPFitter, EOPFitter);

      void t_EOPFitter::install(PyObject *module)
      {
        installType(&PY_TYPE(EOPFitter), &PY_TYPE_DEF(EOPFitter), module, "EOPFitter", 0);
      }

      void t_EOPFitter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPFitter), "class_", make_descriptor(EOPFitter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPFitter), "wrapfn_", make_descriptor(t_EOPFitter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPFitter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EOPFitter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EOPFitter::initializeClass, 1)))
          return NULL;
        return t_EOPFitter::wrap_Object(EOPFitter(((t_EOPFitter *) arg)->object.this$));
      }
      static PyObject *t_EOPFitter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EOPFitter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_EOPFitter_init_(t_EOPFitter *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::SingleParameterFitter a0((jobject) NULL);
        ::org::orekit::frames::SingleParameterFitter a1((jobject) NULL);
        ::org::orekit::frames::SingleParameterFitter a2((jobject) NULL);
        ::org::orekit::frames::SingleParameterFitter a3((jobject) NULL);
        ::org::orekit::frames::SingleParameterFitter a4((jobject) NULL);
        EOPFitter object((jobject) NULL);

        if (!parseArgs(args, "kkkkk", ::org::orekit::frames::SingleParameterFitter::initializeClass, ::org::orekit::frames::SingleParameterFitter::initializeClass, ::org::orekit::frames::SingleParameterFitter::initializeClass, ::org::orekit::frames::SingleParameterFitter::initializeClass, ::org::orekit::frames::SingleParameterFitter::initializeClass, &a0, &a1, &a2, &a3, &a4))
        {
          INT_CALL(object = EOPFitter(a0, a1, a2, a3, a4));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_EOPFitter_fit(t_EOPFitter *self, PyObject *arg)
      {
        ::org::orekit::frames::EOPHistory a0((jobject) NULL);
        ::org::orekit::frames::EOPFittedModel result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::EOPHistory::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.fit(a0));
          return ::org::orekit::frames::t_EOPFittedModel::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "fit", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/SEMParser.h"
#include "java/util/List.h"
#include "java/lang/Integer.h"
#include "org/orekit/data/DataLoader.h"
#include "java/io/InputStream.h"
#include "java/text/ParseException.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/propagation/analytical/gnss/data/GPSAlmanac.h"
#include "java/io/IOException.h"
#include "org/orekit/errors/OrekitException.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
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
          mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_6d628f04453f432c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScales;)V");
          mids$[mid_getAlmanacs_e62d3bb06d56d7e3] = env->getMethodID(cls, "getAlmanacs", "()Ljava/util/List;");
          mids$[mid_getPRNNumbers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getPRNNumbers", "()Ljava/util/List;");
          mids$[mid_getSupportedNames_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSupportedNames", "()Ljava/lang/String;");
          mids$[mid_loadData_a1fa5dae97ea5ed2] = env->getMethodID(cls, "loadData", "()V");
          mids$[mid_loadData_360461e719fb564c] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
          mids$[mid_stillAcceptsData_9ab94ac1dc23b105] = env->getMethodID(cls, "stillAcceptsData", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SEMParser::SEMParser(const ::java::lang::String & a0) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

      SEMParser::SEMParser(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1, const ::org::orekit::time::TimeScales & a2) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_6d628f04453f432c, a0.this$, a1.this$, a2.this$)) {}

      ::java::util::List SEMParser::getAlmanacs() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAlmanacs_e62d3bb06d56d7e3]));
      }

      ::java::util::List SEMParser::getPRNNumbers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getPRNNumbers_e62d3bb06d56d7e3]));
      }

      ::java::lang::String SEMParser::getSupportedNames() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSupportedNames_1c1fa1e935d6cdcf]));
      }

      void SEMParser::loadData() const
      {
        env->callVoidMethod(this$, mids$[mid_loadData_a1fa5dae97ea5ed2]);
      }

      void SEMParser::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_loadData_360461e719fb564c], a0.this$, a1.this$);
      }

      jboolean SEMParser::stillAcceptsData() const
      {
        return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_9ab94ac1dc23b105]);
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
#include "java/util/ResourceBundle.h"
#include "java/util/Locale.h"
#include "java/util/ResourceBundle.h"
#include "java/lang/Module.h"
#include "java/util/Enumeration.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/util/ResourceBundle$Control.h"
#include "java/lang/String.h"
#include "java/lang/ClassLoader.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *ResourceBundle::class$ = NULL;
    jmethodID *ResourceBundle::mids$ = NULL;
    bool ResourceBundle::live$ = false;

    jclass ResourceBundle::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/ResourceBundle");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_clearCache_a1fa5dae97ea5ed2] = env->getStaticMethodID(cls, "clearCache", "()V");
        mids$[mid_clearCache_453dfedd86409b20] = env->getStaticMethodID(cls, "clearCache", "(Ljava/lang/ClassLoader;)V");
        mids$[mid_containsKey_cde6b28e15c96b75] = env->getMethodID(cls, "containsKey", "(Ljava/lang/String;)Z");
        mids$[mid_getBaseBundleName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getBaseBundleName", "()Ljava/lang/String;");
        mids$[mid_getBundle_87958702449aa9de] = env->getStaticMethodID(cls, "getBundle", "(Ljava/lang/String;)Ljava/util/ResourceBundle;");
        mids$[mid_getBundle_f30e31aff086822a] = env->getStaticMethodID(cls, "getBundle", "(Ljava/lang/String;Ljava/lang/Module;)Ljava/util/ResourceBundle;");
        mids$[mid_getBundle_492c838d4e514eed] = env->getStaticMethodID(cls, "getBundle", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/ResourceBundle;");
        mids$[mid_getBundle_91e3a25906092405] = env->getStaticMethodID(cls, "getBundle", "(Ljava/lang/String;Ljava/util/ResourceBundle$Control;)Ljava/util/ResourceBundle;");
        mids$[mid_getBundle_5732ed4040ee3707] = env->getStaticMethodID(cls, "getBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/ClassLoader;)Ljava/util/ResourceBundle;");
        mids$[mid_getBundle_d4b10dbe28d13a94] = env->getStaticMethodID(cls, "getBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/Module;)Ljava/util/ResourceBundle;");
        mids$[mid_getBundle_e9111f85c389cfab] = env->getStaticMethodID(cls, "getBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/util/ResourceBundle$Control;)Ljava/util/ResourceBundle;");
        mids$[mid_getBundle_25c01a326a80559e] = env->getStaticMethodID(cls, "getBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/ClassLoader;Ljava/util/ResourceBundle$Control;)Ljava/util/ResourceBundle;");
        mids$[mid_getKeys_57aeac8743844cd2] = env->getMethodID(cls, "getKeys", "()Ljava/util/Enumeration;");
        mids$[mid_getLocale_179409cdd40bde08] = env->getMethodID(cls, "getLocale", "()Ljava/util/Locale;");
        mids$[mid_getObject_b5bfd4959be00bde] = env->getMethodID(cls, "getObject", "(Ljava/lang/String;)Ljava/lang/Object;");
        mids$[mid_getString_6f0f3576df9f75ee] = env->getMethodID(cls, "getString", "(Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_getStringArray_fb693b259486c655] = env->getMethodID(cls, "getStringArray", "(Ljava/lang/String;)[Ljava/lang/String;");
        mids$[mid_keySet_7e8f11dd23d1142c] = env->getMethodID(cls, "keySet", "()Ljava/util/Set;");
        mids$[mid_handleGetObject_b5bfd4959be00bde] = env->getMethodID(cls, "handleGetObject", "(Ljava/lang/String;)Ljava/lang/Object;");
        mids$[mid_handleKeySet_7e8f11dd23d1142c] = env->getMethodID(cls, "handleKeySet", "()Ljava/util/Set;");
        mids$[mid_setParent_a5272d4f65ea6ec7] = env->getMethodID(cls, "setParent", "(Ljava/util/ResourceBundle;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ResourceBundle::ResourceBundle() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

    void ResourceBundle::clearCache()
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_clearCache_a1fa5dae97ea5ed2]);
    }

    void ResourceBundle::clearCache(const ::java::lang::ClassLoader & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_clearCache_453dfedd86409b20], a0.this$);
    }

    jboolean ResourceBundle::containsKey(const ::java::lang::String & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsKey_cde6b28e15c96b75], a0.this$);
    }

    ::java::lang::String ResourceBundle::getBaseBundleName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getBaseBundleName_1c1fa1e935d6cdcf]));
    }

    ResourceBundle ResourceBundle::getBundle(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle(env->callStaticObjectMethod(cls, mids$[mid_getBundle_87958702449aa9de], a0.this$));
    }

    ResourceBundle ResourceBundle::getBundle(const ::java::lang::String & a0, const ::java::lang::Module & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle(env->callStaticObjectMethod(cls, mids$[mid_getBundle_f30e31aff086822a], a0.this$, a1.this$));
    }

    ResourceBundle ResourceBundle::getBundle(const ::java::lang::String & a0, const ::java::util::Locale & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle(env->callStaticObjectMethod(cls, mids$[mid_getBundle_492c838d4e514eed], a0.this$, a1.this$));
    }

    ResourceBundle ResourceBundle::getBundle(const ::java::lang::String & a0, const ::java::util::ResourceBundle$Control & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle(env->callStaticObjectMethod(cls, mids$[mid_getBundle_91e3a25906092405], a0.this$, a1.this$));
    }

    ResourceBundle ResourceBundle::getBundle(const ::java::lang::String & a0, const ::java::util::Locale & a1, const ::java::lang::ClassLoader & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle(env->callStaticObjectMethod(cls, mids$[mid_getBundle_5732ed4040ee3707], a0.this$, a1.this$, a2.this$));
    }

    ResourceBundle ResourceBundle::getBundle(const ::java::lang::String & a0, const ::java::util::Locale & a1, const ::java::lang::Module & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle(env->callStaticObjectMethod(cls, mids$[mid_getBundle_d4b10dbe28d13a94], a0.this$, a1.this$, a2.this$));
    }

    ResourceBundle ResourceBundle::getBundle(const ::java::lang::String & a0, const ::java::util::Locale & a1, const ::java::util::ResourceBundle$Control & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle(env->callStaticObjectMethod(cls, mids$[mid_getBundle_e9111f85c389cfab], a0.this$, a1.this$, a2.this$));
    }

    ResourceBundle ResourceBundle::getBundle(const ::java::lang::String & a0, const ::java::util::Locale & a1, const ::java::lang::ClassLoader & a2, const ::java::util::ResourceBundle$Control & a3)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle(env->callStaticObjectMethod(cls, mids$[mid_getBundle_25c01a326a80559e], a0.this$, a1.this$, a2.this$, a3.this$));
    }

    ::java::util::Enumeration ResourceBundle::getKeys() const
    {
      return ::java::util::Enumeration(env->callObjectMethod(this$, mids$[mid_getKeys_57aeac8743844cd2]));
    }

    ::java::util::Locale ResourceBundle::getLocale() const
    {
      return ::java::util::Locale(env->callObjectMethod(this$, mids$[mid_getLocale_179409cdd40bde08]));
    }

    ::java::lang::Object ResourceBundle::getObject(const ::java::lang::String & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getObject_b5bfd4959be00bde], a0.this$));
    }

    ::java::lang::String ResourceBundle::getString(const ::java::lang::String & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getString_6f0f3576df9f75ee], a0.this$));
    }

    JArray< ::java::lang::String > ResourceBundle::getStringArray(const ::java::lang::String & a0) const
    {
      return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getStringArray_fb693b259486c655], a0.this$));
    }

    ::java::util::Set ResourceBundle::keySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_keySet_7e8f11dd23d1142c]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_ResourceBundle_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ResourceBundle_instance_(PyTypeObject *type, PyObject *arg);
    static int t_ResourceBundle_init_(t_ResourceBundle *self, PyObject *args, PyObject *kwds);
    static PyObject *t_ResourceBundle_clearCache(PyTypeObject *type, PyObject *args);
    static PyObject *t_ResourceBundle_containsKey(t_ResourceBundle *self, PyObject *arg);
    static PyObject *t_ResourceBundle_getBaseBundleName(t_ResourceBundle *self);
    static PyObject *t_ResourceBundle_getBundle(PyTypeObject *type, PyObject *args);
    static PyObject *t_ResourceBundle_getKeys(t_ResourceBundle *self);
    static PyObject *t_ResourceBundle_getLocale(t_ResourceBundle *self);
    static PyObject *t_ResourceBundle_getObject(t_ResourceBundle *self, PyObject *arg);
    static PyObject *t_ResourceBundle_getString(t_ResourceBundle *self, PyObject *arg);
    static PyObject *t_ResourceBundle_getStringArray(t_ResourceBundle *self, PyObject *arg);
    static PyObject *t_ResourceBundle_keySet(t_ResourceBundle *self);
    static PyObject *t_ResourceBundle_get__baseBundleName(t_ResourceBundle *self, void *data);
    static PyObject *t_ResourceBundle_get__keys(t_ResourceBundle *self, void *data);
    static PyObject *t_ResourceBundle_get__locale(t_ResourceBundle *self, void *data);
    static PyGetSetDef t_ResourceBundle__fields_[] = {
      DECLARE_GET_FIELD(t_ResourceBundle, baseBundleName),
      DECLARE_GET_FIELD(t_ResourceBundle, keys),
      DECLARE_GET_FIELD(t_ResourceBundle, locale),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_ResourceBundle__methods_[] = {
      DECLARE_METHOD(t_ResourceBundle, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ResourceBundle, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ResourceBundle, clearCache, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_ResourceBundle, containsKey, METH_O),
      DECLARE_METHOD(t_ResourceBundle, getBaseBundleName, METH_NOARGS),
      DECLARE_METHOD(t_ResourceBundle, getBundle, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_ResourceBundle, getKeys, METH_NOARGS),
      DECLARE_METHOD(t_ResourceBundle, getLocale, METH_NOARGS),
      DECLARE_METHOD(t_ResourceBundle, getObject, METH_O),
      DECLARE_METHOD(t_ResourceBundle, getString, METH_O),
      DECLARE_METHOD(t_ResourceBundle, getStringArray, METH_O),
      DECLARE_METHOD(t_ResourceBundle, keySet, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ResourceBundle)[] = {
      { Py_tp_methods, t_ResourceBundle__methods_ },
      { Py_tp_init, (void *) t_ResourceBundle_init_ },
      { Py_tp_getset, t_ResourceBundle__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ResourceBundle)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(ResourceBundle, t_ResourceBundle, ResourceBundle);

    void t_ResourceBundle::install(PyObject *module)
    {
      installType(&PY_TYPE(ResourceBundle), &PY_TYPE_DEF(ResourceBundle), module, "ResourceBundle", 0);
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle), "Control", make_descriptor(&PY_TYPE_DEF(ResourceBundle$Control)));
    }

    void t_ResourceBundle::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle), "class_", make_descriptor(ResourceBundle::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle), "wrapfn_", make_descriptor(t_ResourceBundle::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ResourceBundle_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ResourceBundle::initializeClass, 1)))
        return NULL;
      return t_ResourceBundle::wrap_Object(ResourceBundle(((t_ResourceBundle *) arg)->object.this$));
    }
    static PyObject *t_ResourceBundle_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ResourceBundle::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_ResourceBundle_init_(t_ResourceBundle *self, PyObject *args, PyObject *kwds)
    {
      ResourceBundle object((jobject) NULL);

      INT_CALL(object = ResourceBundle());
      self->object = object;

      return 0;
    }

    static PyObject *t_ResourceBundle_clearCache(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          OBJ_CALL(::java::util::ResourceBundle::clearCache());
          Py_RETURN_NONE;
        }
        break;
       case 1:
        {
          ::java::lang::ClassLoader a0((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::ClassLoader::initializeClass, &a0))
          {
            OBJ_CALL(::java::util::ResourceBundle::clearCache(a0));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError(type, "clearCache", args);
      return NULL;
    }

    static PyObject *t_ResourceBundle_containsKey(t_ResourceBundle *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.containsKey(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "containsKey", arg);
      return NULL;
    }

    static PyObject *t_ResourceBundle_getBaseBundleName(t_ResourceBundle *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getBaseBundleName());
      return j2p(result);
    }

    static PyObject *t_ResourceBundle_getBundle(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          ResourceBundle result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::util::ResourceBundle::getBundle(a0));
            return t_ResourceBundle::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Module a1((jobject) NULL);
          ResourceBundle result((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::lang::Module::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::ResourceBundle::getBundle(a0, a1));
            return t_ResourceBundle::wrap_Object(result);
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::Locale a1((jobject) NULL);
          ResourceBundle result((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::util::Locale::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::ResourceBundle::getBundle(a0, a1));
            return t_ResourceBundle::wrap_Object(result);
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::ResourceBundle$Control a1((jobject) NULL);
          ResourceBundle result((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::util::ResourceBundle$Control::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::ResourceBundle::getBundle(a0, a1));
            return t_ResourceBundle::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::Locale a1((jobject) NULL);
          ::java::lang::ClassLoader a2((jobject) NULL);
          ResourceBundle result((jobject) NULL);

          if (!parseArgs(args, "skk", ::java::util::Locale::initializeClass, ::java::lang::ClassLoader::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::ResourceBundle::getBundle(a0, a1, a2));
            return t_ResourceBundle::wrap_Object(result);
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::Locale a1((jobject) NULL);
          ::java::lang::Module a2((jobject) NULL);
          ResourceBundle result((jobject) NULL);

          if (!parseArgs(args, "skk", ::java::util::Locale::initializeClass, ::java::lang::Module::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::ResourceBundle::getBundle(a0, a1, a2));
            return t_ResourceBundle::wrap_Object(result);
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::Locale a1((jobject) NULL);
          ::java::util::ResourceBundle$Control a2((jobject) NULL);
          ResourceBundle result((jobject) NULL);

          if (!parseArgs(args, "skk", ::java::util::Locale::initializeClass, ::java::util::ResourceBundle$Control::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::ResourceBundle::getBundle(a0, a1, a2));
            return t_ResourceBundle::wrap_Object(result);
          }
        }
        break;
       case 4:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::Locale a1((jobject) NULL);
          ::java::lang::ClassLoader a2((jobject) NULL);
          ::java::util::ResourceBundle$Control a3((jobject) NULL);
          ResourceBundle result((jobject) NULL);

          if (!parseArgs(args, "skkk", ::java::util::Locale::initializeClass, ::java::lang::ClassLoader::initializeClass, ::java::util::ResourceBundle$Control::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::ResourceBundle::getBundle(a0, a1, a2, a3));
            return t_ResourceBundle::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getBundle", args);
      return NULL;
    }

    static PyObject *t_ResourceBundle_getKeys(t_ResourceBundle *self)
    {
      ::java::util::Enumeration result((jobject) NULL);
      OBJ_CALL(result = self->object.getKeys());
      return ::java::util::t_Enumeration::wrap_Object(result, ::java::lang::PY_TYPE(String));
    }

    static PyObject *t_ResourceBundle_getLocale(t_ResourceBundle *self)
    {
      ::java::util::Locale result((jobject) NULL);
      OBJ_CALL(result = self->object.getLocale());
      return ::java::util::t_Locale::wrap_Object(result);
    }

    static PyObject *t_ResourceBundle_getObject(t_ResourceBundle *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.getObject(a0));
        return ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getObject", arg);
      return NULL;
    }

    static PyObject *t_ResourceBundle_getString(t_ResourceBundle *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.getString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getString", arg);
      return NULL;
    }

    static PyObject *t_ResourceBundle_getStringArray(t_ResourceBundle *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      JArray< ::java::lang::String > result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.getStringArray(a0));
        return JArray<jstring>(result.this$).wrap();
      }

      PyErr_SetArgsError((PyObject *) self, "getStringArray", arg);
      return NULL;
    }

    static PyObject *t_ResourceBundle_keySet(t_ResourceBundle *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.keySet());
      return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(String));
    }

    static PyObject *t_ResourceBundle_get__baseBundleName(t_ResourceBundle *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getBaseBundleName());
      return j2p(value);
    }

    static PyObject *t_ResourceBundle_get__keys(t_ResourceBundle *self, void *data)
    {
      ::java::util::Enumeration value((jobject) NULL);
      OBJ_CALL(value = self->object.getKeys());
      return ::java::util::t_Enumeration::wrap_Object(value);
    }

    static PyObject *t_ResourceBundle_get__locale(t_ResourceBundle *self, void *data)
    {
      ::java::util::Locale value((jobject) NULL);
      OBJ_CALL(value = self->object.getLocale());
      return ::java::util::t_Locale::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/SecurityException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *SecurityException::class$ = NULL;
    jmethodID *SecurityException::mids$ = NULL;
    bool SecurityException::live$ = false;

    jclass SecurityException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/SecurityException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_c5d3549d4f245728] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
        mids$[mid_init$_9d7a6ef9713b9df2] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    SecurityException::SecurityException() : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

    SecurityException::SecurityException(const ::java::lang::String & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

    SecurityException::SecurityException(const ::java::lang::Throwable & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_c5d3549d4f245728, a0.this$)) {}

    SecurityException::SecurityException(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_9d7a6ef9713b9df2, a0.this$, a1.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_SecurityException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_SecurityException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_SecurityException_init_(t_SecurityException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_SecurityException__methods_[] = {
      DECLARE_METHOD(t_SecurityException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_SecurityException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(SecurityException)[] = {
      { Py_tp_methods, t_SecurityException__methods_ },
      { Py_tp_init, (void *) t_SecurityException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(SecurityException)[] = {
      &PY_TYPE_DEF(::java::lang::RuntimeException),
      NULL
    };

    DEFINE_TYPE(SecurityException, t_SecurityException, SecurityException);

    void t_SecurityException::install(PyObject *module)
    {
      installType(&PY_TYPE(SecurityException), &PY_TYPE_DEF(SecurityException), module, "SecurityException", 0);
    }

    void t_SecurityException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(SecurityException), "class_", make_descriptor(SecurityException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(SecurityException), "wrapfn_", make_descriptor(t_SecurityException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(SecurityException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_SecurityException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, SecurityException::initializeClass, 1)))
        return NULL;
      return t_SecurityException::wrap_Object(SecurityException(((t_SecurityException *) arg)->object.this$));
    }
    static PyObject *t_SecurityException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, SecurityException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_SecurityException_init_(t_SecurityException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          SecurityException object((jobject) NULL);

          INT_CALL(object = SecurityException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          SecurityException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = SecurityException(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::Throwable a0((jobject) NULL);
          SecurityException object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
          {
            INT_CALL(object = SecurityException(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Throwable a1((jobject) NULL);
          SecurityException object((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::lang::Throwable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = SecurityException(a0, a1));
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
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/NoSuchElementException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *NoSuchElementException::class$ = NULL;
    jmethodID *NoSuchElementException::mids$ = NULL;
    bool NoSuchElementException::live$ = false;

    jclass NoSuchElementException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/NoSuchElementException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    NoSuchElementException::NoSuchElementException() : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

    NoSuchElementException::NoSuchElementException(const ::java::lang::String & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_NoSuchElementException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_NoSuchElementException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_NoSuchElementException_init_(t_NoSuchElementException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_NoSuchElementException__methods_[] = {
      DECLARE_METHOD(t_NoSuchElementException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_NoSuchElementException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(NoSuchElementException)[] = {
      { Py_tp_methods, t_NoSuchElementException__methods_ },
      { Py_tp_init, (void *) t_NoSuchElementException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(NoSuchElementException)[] = {
      &PY_TYPE_DEF(::java::lang::RuntimeException),
      NULL
    };

    DEFINE_TYPE(NoSuchElementException, t_NoSuchElementException, NoSuchElementException);

    void t_NoSuchElementException::install(PyObject *module)
    {
      installType(&PY_TYPE(NoSuchElementException), &PY_TYPE_DEF(NoSuchElementException), module, "NoSuchElementException", 0);
    }

    void t_NoSuchElementException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(NoSuchElementException), "class_", make_descriptor(NoSuchElementException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NoSuchElementException), "wrapfn_", make_descriptor(t_NoSuchElementException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NoSuchElementException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_NoSuchElementException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, NoSuchElementException::initializeClass, 1)))
        return NULL;
      return t_NoSuchElementException::wrap_Object(NoSuchElementException(((t_NoSuchElementException *) arg)->object.this$));
    }
    static PyObject *t_NoSuchElementException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, NoSuchElementException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_NoSuchElementException_init_(t_NoSuchElementException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          NoSuchElementException object((jobject) NULL);

          INT_CALL(object = NoSuchElementException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          NoSuchElementException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = NoSuchElementException(a0));
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/ObjectInputStream$GetField.h"
#include "java/io/ObjectStreamClass.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *ObjectInputStream$GetField::class$ = NULL;
    jmethodID *ObjectInputStream$GetField::mids$ = NULL;
    bool ObjectInputStream$GetField::live$ = false;

    jclass ObjectInputStream$GetField::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/ObjectInputStream$GetField");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_defaulted_cde6b28e15c96b75] = env->getMethodID(cls, "defaulted", "(Ljava/lang/String;)Z");
        mids$[mid_get_8662498d88818ee3] = env->getMethodID(cls, "get", "(Ljava/lang/String;Z)Z");
        mids$[mid_get_1fd0b55ec77056dd] = env->getMethodID(cls, "get", "(Ljava/lang/String;B)B");
        mids$[mid_get_1ef6b35d3cd7a399] = env->getMethodID(cls, "get", "(Ljava/lang/String;C)C");
        mids$[mid_get_85b99eeda70b0543] = env->getMethodID(cls, "get", "(Ljava/lang/String;D)D");
        mids$[mid_get_e13455b72046a8dc] = env->getMethodID(cls, "get", "(Ljava/lang/String;F)F");
        mids$[mid_get_7c969bab81d289ef] = env->getMethodID(cls, "get", "(Ljava/lang/String;I)I");
        mids$[mid_get_b3786ea1192ca6c0] = env->getMethodID(cls, "get", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_get_c6bb8b0197d9599d] = env->getMethodID(cls, "get", "(Ljava/lang/String;J)J");
        mids$[mid_get_f6ccb7c40f2a4191] = env->getMethodID(cls, "get", "(Ljava/lang/String;S)S");
        mids$[mid_getObjectStreamClass_fb017e274a57c596] = env->getMethodID(cls, "getObjectStreamClass", "()Ljava/io/ObjectStreamClass;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ObjectInputStream$GetField::ObjectInputStream$GetField() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

    jboolean ObjectInputStream$GetField::defaulted(const ::java::lang::String & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_defaulted_cde6b28e15c96b75], a0.this$);
    }

    jboolean ObjectInputStream$GetField::get$(const ::java::lang::String & a0, jboolean a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_get_8662498d88818ee3], a0.this$, a1);
    }

    jbyte ObjectInputStream$GetField::get$(const ::java::lang::String & a0, jbyte a1) const
    {
      return env->callByteMethod(this$, mids$[mid_get_1fd0b55ec77056dd], a0.this$, a1);
    }

    jchar ObjectInputStream$GetField::get$(const ::java::lang::String & a0, jchar a1) const
    {
      return env->callCharMethod(this$, mids$[mid_get_1ef6b35d3cd7a399], a0.this$, a1);
    }

    jdouble ObjectInputStream$GetField::get$(const ::java::lang::String & a0, jdouble a1) const
    {
      return env->callDoubleMethod(this$, mids$[mid_get_85b99eeda70b0543], a0.this$, a1);
    }

    jfloat ObjectInputStream$GetField::get$(const ::java::lang::String & a0, jfloat a1) const
    {
      return env->callFloatMethod(this$, mids$[mid_get_e13455b72046a8dc], a0.this$, a1);
    }

    jint ObjectInputStream$GetField::get$(const ::java::lang::String & a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_get_7c969bab81d289ef], a0.this$, a1);
    }

    ::java::lang::Object ObjectInputStream$GetField::get$(const ::java::lang::String & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_b3786ea1192ca6c0], a0.this$, a1.this$));
    }

    jlong ObjectInputStream$GetField::get$(const ::java::lang::String & a0, jlong a1) const
    {
      return env->callLongMethod(this$, mids$[mid_get_c6bb8b0197d9599d], a0.this$, a1);
    }

    jshort ObjectInputStream$GetField::get$(const ::java::lang::String & a0, jshort a1) const
    {
      return env->callShortMethod(this$, mids$[mid_get_f6ccb7c40f2a4191], a0.this$, a1);
    }

    ::java::io::ObjectStreamClass ObjectInputStream$GetField::getObjectStreamClass() const
    {
      return ::java::io::ObjectStreamClass(env->callObjectMethod(this$, mids$[mid_getObjectStreamClass_fb017e274a57c596]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_ObjectInputStream$GetField_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectInputStream$GetField_instance_(PyTypeObject *type, PyObject *arg);
    static int t_ObjectInputStream$GetField_init_(t_ObjectInputStream$GetField *self, PyObject *args, PyObject *kwds);
    static PyObject *t_ObjectInputStream$GetField_defaulted(t_ObjectInputStream$GetField *self, PyObject *arg);
    static PyObject *t_ObjectInputStream$GetField_get(t_ObjectInputStream$GetField *self, PyObject *args);
    static PyObject *t_ObjectInputStream$GetField_getObjectStreamClass(t_ObjectInputStream$GetField *self);
    static PyObject *t_ObjectInputStream$GetField_get__objectStreamClass(t_ObjectInputStream$GetField *self, void *data);
    static PyGetSetDef t_ObjectInputStream$GetField__fields_[] = {
      DECLARE_GET_FIELD(t_ObjectInputStream$GetField, objectStreamClass),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_ObjectInputStream$GetField__methods_[] = {
      DECLARE_METHOD(t_ObjectInputStream$GetField, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectInputStream$GetField, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectInputStream$GetField, defaulted, METH_O),
      DECLARE_METHOD(t_ObjectInputStream$GetField, get, METH_VARARGS),
      DECLARE_METHOD(t_ObjectInputStream$GetField, getObjectStreamClass, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ObjectInputStream$GetField)[] = {
      { Py_tp_methods, t_ObjectInputStream$GetField__methods_ },
      { Py_tp_init, (void *) t_ObjectInputStream$GetField_init_ },
      { Py_tp_getset, t_ObjectInputStream$GetField__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ObjectInputStream$GetField)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(ObjectInputStream$GetField, t_ObjectInputStream$GetField, ObjectInputStream$GetField);

    void t_ObjectInputStream$GetField::install(PyObject *module)
    {
      installType(&PY_TYPE(ObjectInputStream$GetField), &PY_TYPE_DEF(ObjectInputStream$GetField), module, "ObjectInputStream$GetField", 0);
    }

    void t_ObjectInputStream$GetField::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputStream$GetField), "class_", make_descriptor(ObjectInputStream$GetField::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputStream$GetField), "wrapfn_", make_descriptor(t_ObjectInputStream$GetField::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectInputStream$GetField), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ObjectInputStream$GetField_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ObjectInputStream$GetField::initializeClass, 1)))
        return NULL;
      return t_ObjectInputStream$GetField::wrap_Object(ObjectInputStream$GetField(((t_ObjectInputStream$GetField *) arg)->object.this$));
    }
    static PyObject *t_ObjectInputStream$GetField_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ObjectInputStream$GetField::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_ObjectInputStream$GetField_init_(t_ObjectInputStream$GetField *self, PyObject *args, PyObject *kwds)
    {
      ObjectInputStream$GetField object((jobject) NULL);

      INT_CALL(object = ObjectInputStream$GetField());
      self->object = object;

      return 0;
    }

    static PyObject *t_ObjectInputStream$GetField_defaulted(t_ObjectInputStream$GetField *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.defaulted(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "defaulted", arg);
      return NULL;
    }

    static PyObject *t_ObjectInputStream$GetField_get(t_ObjectInputStream$GetField *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jboolean a1;
          jboolean result;

          if (!parseArgs(args, "sZ", &a0, &a1))
          {
            OBJ_CALL(result = self->object.get$(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jbyte a1;
          jbyte result;

          if (!parseArgs(args, "sB", &a0, &a1))
          {
            OBJ_CALL(result = self->object.get$(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jchar a1;
          jchar result;

          if (!parseArgs(args, "sC", &a0, &a1))
          {
            OBJ_CALL(result = self->object.get$(a0, a1));
            return c2p(result);
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "sD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.get$(a0, a1));
            return PyFloat_FromDouble((double) result);
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jfloat a1;
          jfloat result;

          if (!parseArgs(args, "sF", &a0, &a1))
          {
            OBJ_CALL(result = self->object.get$(a0, a1));
            return PyFloat_FromDouble((double) result);
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = self->object.get$(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "so", &a0, &a1))
          {
            OBJ_CALL(result = self->object.get$(a0, a1));
            return ::java::lang::t_Object::wrap_Object(result);
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jlong a1;
          jlong result;

          if (!parseArgs(args, "sJ", &a0, &a1))
          {
            OBJ_CALL(result = self->object.get$(a0, a1));
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jshort a1;
          jshort result;

          if (!parseArgs(args, "sS", &a0, &a1))
          {
            OBJ_CALL(result = self->object.get$(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "get", args);
      return NULL;
    }

    static PyObject *t_ObjectInputStream$GetField_getObjectStreamClass(t_ObjectInputStream$GetField *self)
    {
      ::java::io::ObjectStreamClass result((jobject) NULL);
      OBJ_CALL(result = self->object.getObjectStreamClass());
      return ::java::io::t_ObjectStreamClass::wrap_Object(result);
    }

    static PyObject *t_ObjectInputStream$GetField_get__objectStreamClass(t_ObjectInputStream$GetField *self, void *data)
    {
      ::java::io::ObjectStreamClass value((jobject) NULL);
      OBJ_CALL(value = self->object.getObjectStreamClass());
      return ::java::io::t_ObjectStreamClass::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Currency.h"
#include "java/util/Locale.h"
#include "java/io/Serializable.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/util/Currency.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Currency::class$ = NULL;
    jmethodID *Currency::mids$ = NULL;
    bool Currency::live$ = false;

    jclass Currency::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Currency");

        mids$ = new jmethodID[max_mid];
        mids$[mid_getAvailableCurrencies_7e8f11dd23d1142c] = env->getStaticMethodID(cls, "getAvailableCurrencies", "()Ljava/util/Set;");
        mids$[mid_getCurrencyCode_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getCurrencyCode", "()Ljava/lang/String;");
        mids$[mid_getDefaultFractionDigits_55546ef6a647f39b] = env->getMethodID(cls, "getDefaultFractionDigits", "()I");
        mids$[mid_getDisplayName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getDisplayName", "()Ljava/lang/String;");
        mids$[mid_getDisplayName_26070c28e6ea354d] = env->getMethodID(cls, "getDisplayName", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_getInstance_3e2cd68dc3f32c98] = env->getStaticMethodID(cls, "getInstance", "(Ljava/lang/String;)Ljava/util/Currency;");
        mids$[mid_getInstance_38adb3ba9f36a547] = env->getStaticMethodID(cls, "getInstance", "(Ljava/util/Locale;)Ljava/util/Currency;");
        mids$[mid_getNumericCode_55546ef6a647f39b] = env->getMethodID(cls, "getNumericCode", "()I");
        mids$[mid_getNumericCodeAsString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getNumericCodeAsString", "()Ljava/lang/String;");
        mids$[mid_getSymbol_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSymbol", "()Ljava/lang/String;");
        mids$[mid_getSymbol_26070c28e6ea354d] = env->getMethodID(cls, "getSymbol", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::Set Currency::getAvailableCurrencies()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Set(env->callStaticObjectMethod(cls, mids$[mid_getAvailableCurrencies_7e8f11dd23d1142c]));
    }

    ::java::lang::String Currency::getCurrencyCode() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCurrencyCode_1c1fa1e935d6cdcf]));
    }

    jint Currency::getDefaultFractionDigits() const
    {
      return env->callIntMethod(this$, mids$[mid_getDefaultFractionDigits_55546ef6a647f39b]);
    }

    ::java::lang::String Currency::getDisplayName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayName_1c1fa1e935d6cdcf]));
    }

    ::java::lang::String Currency::getDisplayName(const ::java::util::Locale & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayName_26070c28e6ea354d], a0.this$));
    }

    Currency Currency::getInstance(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Currency(env->callStaticObjectMethod(cls, mids$[mid_getInstance_3e2cd68dc3f32c98], a0.this$));
    }

    Currency Currency::getInstance(const ::java::util::Locale & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Currency(env->callStaticObjectMethod(cls, mids$[mid_getInstance_38adb3ba9f36a547], a0.this$));
    }

    jint Currency::getNumericCode() const
    {
      return env->callIntMethod(this$, mids$[mid_getNumericCode_55546ef6a647f39b]);
    }

    ::java::lang::String Currency::getNumericCodeAsString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNumericCodeAsString_1c1fa1e935d6cdcf]));
    }

    ::java::lang::String Currency::getSymbol() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSymbol_1c1fa1e935d6cdcf]));
    }

    ::java::lang::String Currency::getSymbol(const ::java::util::Locale & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSymbol_26070c28e6ea354d], a0.this$));
    }

    ::java::lang::String Currency::toString() const
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
    static PyObject *t_Currency_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Currency_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Currency_getAvailableCurrencies(PyTypeObject *type);
    static PyObject *t_Currency_getCurrencyCode(t_Currency *self);
    static PyObject *t_Currency_getDefaultFractionDigits(t_Currency *self);
    static PyObject *t_Currency_getDisplayName(t_Currency *self, PyObject *args);
    static PyObject *t_Currency_getInstance(PyTypeObject *type, PyObject *args);
    static PyObject *t_Currency_getNumericCode(t_Currency *self);
    static PyObject *t_Currency_getNumericCodeAsString(t_Currency *self);
    static PyObject *t_Currency_getSymbol(t_Currency *self, PyObject *args);
    static PyObject *t_Currency_toString(t_Currency *self, PyObject *args);
    static PyObject *t_Currency_get__availableCurrencies(t_Currency *self, void *data);
    static PyObject *t_Currency_get__currencyCode(t_Currency *self, void *data);
    static PyObject *t_Currency_get__defaultFractionDigits(t_Currency *self, void *data);
    static PyObject *t_Currency_get__displayName(t_Currency *self, void *data);
    static PyObject *t_Currency_get__numericCode(t_Currency *self, void *data);
    static PyObject *t_Currency_get__numericCodeAsString(t_Currency *self, void *data);
    static PyObject *t_Currency_get__symbol(t_Currency *self, void *data);
    static PyGetSetDef t_Currency__fields_[] = {
      DECLARE_GET_FIELD(t_Currency, availableCurrencies),
      DECLARE_GET_FIELD(t_Currency, currencyCode),
      DECLARE_GET_FIELD(t_Currency, defaultFractionDigits),
      DECLARE_GET_FIELD(t_Currency, displayName),
      DECLARE_GET_FIELD(t_Currency, numericCode),
      DECLARE_GET_FIELD(t_Currency, numericCodeAsString),
      DECLARE_GET_FIELD(t_Currency, symbol),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Currency__methods_[] = {
      DECLARE_METHOD(t_Currency, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Currency, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Currency, getAvailableCurrencies, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Currency, getCurrencyCode, METH_NOARGS),
      DECLARE_METHOD(t_Currency, getDefaultFractionDigits, METH_NOARGS),
      DECLARE_METHOD(t_Currency, getDisplayName, METH_VARARGS),
      DECLARE_METHOD(t_Currency, getInstance, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Currency, getNumericCode, METH_NOARGS),
      DECLARE_METHOD(t_Currency, getNumericCodeAsString, METH_NOARGS),
      DECLARE_METHOD(t_Currency, getSymbol, METH_VARARGS),
      DECLARE_METHOD(t_Currency, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Currency)[] = {
      { Py_tp_methods, t_Currency__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Currency__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Currency)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Currency, t_Currency, Currency);

    void t_Currency::install(PyObject *module)
    {
      installType(&PY_TYPE(Currency), &PY_TYPE_DEF(Currency), module, "Currency", 0);
    }

    void t_Currency::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Currency), "class_", make_descriptor(Currency::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Currency), "wrapfn_", make_descriptor(t_Currency::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Currency), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Currency_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Currency::initializeClass, 1)))
        return NULL;
      return t_Currency::wrap_Object(Currency(((t_Currency *) arg)->object.this$));
    }
    static PyObject *t_Currency_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Currency::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Currency_getAvailableCurrencies(PyTypeObject *type)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Currency::getAvailableCurrencies());
      return ::java::util::t_Set::wrap_Object(result, ::java::util::PY_TYPE(Currency));
    }

    static PyObject *t_Currency_getCurrencyCode(t_Currency *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getCurrencyCode());
      return j2p(result);
    }

    static PyObject *t_Currency_getDefaultFractionDigits(t_Currency *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getDefaultFractionDigits());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Currency_getDisplayName(t_Currency *self, PyObject *args)
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
          ::java::util::Locale a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getDisplayName(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getDisplayName", args);
      return NULL;
    }

    static PyObject *t_Currency_getInstance(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Currency result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::util::Currency::getInstance(a0));
            return t_Currency::wrap_Object(result);
          }
        }
        {
          ::java::util::Locale a0((jobject) NULL);
          Currency result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = ::java::util::Currency::getInstance(a0));
            return t_Currency::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getInstance", args);
      return NULL;
    }

    static PyObject *t_Currency_getNumericCode(t_Currency *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getNumericCode());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_Currency_getNumericCodeAsString(t_Currency *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getNumericCodeAsString());
      return j2p(result);
    }

    static PyObject *t_Currency_getSymbol(t_Currency *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSymbol());
          return j2p(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getSymbol(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getSymbol", args);
      return NULL;
    }

    static PyObject *t_Currency_toString(t_Currency *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Currency), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Currency_get__availableCurrencies(t_Currency *self, void *data)
    {
      ::java::util::Set value((jobject) NULL);
      OBJ_CALL(value = self->object.getAvailableCurrencies());
      return ::java::util::t_Set::wrap_Object(value);
    }

    static PyObject *t_Currency_get__currencyCode(t_Currency *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getCurrencyCode());
      return j2p(value);
    }

    static PyObject *t_Currency_get__defaultFractionDigits(t_Currency *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getDefaultFractionDigits());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_Currency_get__displayName(t_Currency *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getDisplayName());
      return j2p(value);
    }

    static PyObject *t_Currency_get__numericCode(t_Currency *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getNumericCode());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_Currency_get__numericCodeAsString(t_Currency *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getNumericCodeAsString());
      return j2p(value);
    }

    static PyObject *t_Currency_get__symbol(t_Currency *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getSymbol());
      return j2p(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/Flushable.h"
#include "java/lang/Class.h"
#include "java/io/IOException.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *Flushable::class$ = NULL;
    jmethodID *Flushable::mids$ = NULL;
    bool Flushable::live$ = false;

    jclass Flushable::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/Flushable");

        mids$ = new jmethodID[max_mid];
        mids$[mid_flush_a1fa5dae97ea5ed2] = env->getMethodID(cls, "flush", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    void Flushable::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_a1fa5dae97ea5ed2]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_Flushable_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Flushable_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Flushable_flush(t_Flushable *self);

    static PyMethodDef t_Flushable__methods_[] = {
      DECLARE_METHOD(t_Flushable, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Flushable, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Flushable, flush, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Flushable)[] = {
      { Py_tp_methods, t_Flushable__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Flushable)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Flushable, t_Flushable, Flushable);

    void t_Flushable::install(PyObject *module)
    {
      installType(&PY_TYPE(Flushable), &PY_TYPE_DEF(Flushable), module, "Flushable", 0);
    }

    void t_Flushable::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Flushable), "class_", make_descriptor(Flushable::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Flushable), "wrapfn_", make_descriptor(t_Flushable::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Flushable), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Flushable_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Flushable::initializeClass, 1)))
        return NULL;
      return t_Flushable::wrap_Object(Flushable(((t_Flushable *) arg)->object.this$));
    }
    static PyObject *t_Flushable_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Flushable::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Flushable_flush(t_Flushable *self)
    {
      OBJ_CALL(self->object.flush());
      Py_RETURN_NONE;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/NavigableMap.h"
#include "java/util/Map$Entry.h"
#include "java/util/NavigableSet.h"
#include "java/util/NavigableMap.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *NavigableMap::class$ = NULL;
    jmethodID *NavigableMap::mids$ = NULL;
    bool NavigableMap::live$ = false;

    jclass NavigableMap::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/NavigableMap");

        mids$ = new jmethodID[max_mid];
        mids$[mid_ceilingEntry_341cd1138db0914d] = env->getMethodID(cls, "ceilingEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;");
        mids$[mid_ceilingKey_5804c890f94a02b6] = env->getMethodID(cls, "ceilingKey", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_descendingKeySet_ea2f3a2f5483365c] = env->getMethodID(cls, "descendingKeySet", "()Ljava/util/NavigableSet;");
        mids$[mid_descendingMap_8dd7b68149ce41ea] = env->getMethodID(cls, "descendingMap", "()Ljava/util/NavigableMap;");
        mids$[mid_firstEntry_0eaee7bb6ea53007] = env->getMethodID(cls, "firstEntry", "()Ljava/util/Map$Entry;");
        mids$[mid_floorEntry_341cd1138db0914d] = env->getMethodID(cls, "floorEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;");
        mids$[mid_floorKey_5804c890f94a02b6] = env->getMethodID(cls, "floorKey", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_headMap_c34ad1b261346963] = env->getMethodID(cls, "headMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;");
        mids$[mid_headMap_5593cae0e8732851] = env->getMethodID(cls, "headMap", "(Ljava/lang/Object;Z)Ljava/util/NavigableMap;");
        mids$[mid_higherEntry_341cd1138db0914d] = env->getMethodID(cls, "higherEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;");
        mids$[mid_higherKey_5804c890f94a02b6] = env->getMethodID(cls, "higherKey", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_lastEntry_0eaee7bb6ea53007] = env->getMethodID(cls, "lastEntry", "()Ljava/util/Map$Entry;");
        mids$[mid_lowerEntry_341cd1138db0914d] = env->getMethodID(cls, "lowerEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;");
        mids$[mid_lowerKey_5804c890f94a02b6] = env->getMethodID(cls, "lowerKey", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_navigableKeySet_ea2f3a2f5483365c] = env->getMethodID(cls, "navigableKeySet", "()Ljava/util/NavigableSet;");
        mids$[mid_pollFirstEntry_0eaee7bb6ea53007] = env->getMethodID(cls, "pollFirstEntry", "()Ljava/util/Map$Entry;");
        mids$[mid_pollLastEntry_0eaee7bb6ea53007] = env->getMethodID(cls, "pollLastEntry", "()Ljava/util/Map$Entry;");
        mids$[mid_subMap_a2a04c1f48ab1459] = env->getMethodID(cls, "subMap", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedMap;");
        mids$[mid_subMap_4c86ea09a85e174e] = env->getMethodID(cls, "subMap", "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableMap;");
        mids$[mid_tailMap_c34ad1b261346963] = env->getMethodID(cls, "tailMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;");
        mids$[mid_tailMap_5593cae0e8732851] = env->getMethodID(cls, "tailMap", "(Ljava/lang/Object;Z)Ljava/util/NavigableMap;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::Map$Entry NavigableMap::ceilingEntry(const ::java::lang::Object & a0) const
    {
      return ::java::util::Map$Entry(env->callObjectMethod(this$, mids$[mid_ceilingEntry_341cd1138db0914d], a0.this$));
    }

    ::java::lang::Object NavigableMap::ceilingKey(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_ceilingKey_5804c890f94a02b6], a0.this$));
    }

    ::java::util::NavigableSet NavigableMap::descendingKeySet() const
    {
      return ::java::util::NavigableSet(env->callObjectMethod(this$, mids$[mid_descendingKeySet_ea2f3a2f5483365c]));
    }

    NavigableMap NavigableMap::descendingMap() const
    {
      return NavigableMap(env->callObjectMethod(this$, mids$[mid_descendingMap_8dd7b68149ce41ea]));
    }

    ::java::util::Map$Entry NavigableMap::firstEntry() const
    {
      return ::java::util::Map$Entry(env->callObjectMethod(this$, mids$[mid_firstEntry_0eaee7bb6ea53007]));
    }

    ::java::util::Map$Entry NavigableMap::floorEntry(const ::java::lang::Object & a0) const
    {
      return ::java::util::Map$Entry(env->callObjectMethod(this$, mids$[mid_floorEntry_341cd1138db0914d], a0.this$));
    }

    ::java::lang::Object NavigableMap::floorKey(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_floorKey_5804c890f94a02b6], a0.this$));
    }

    ::java::util::SortedMap NavigableMap::headMap(const ::java::lang::Object & a0) const
    {
      return ::java::util::SortedMap(env->callObjectMethod(this$, mids$[mid_headMap_c34ad1b261346963], a0.this$));
    }

    NavigableMap NavigableMap::headMap(const ::java::lang::Object & a0, jboolean a1) const
    {
      return NavigableMap(env->callObjectMethod(this$, mids$[mid_headMap_5593cae0e8732851], a0.this$, a1));
    }

    ::java::util::Map$Entry NavigableMap::higherEntry(const ::java::lang::Object & a0) const
    {
      return ::java::util::Map$Entry(env->callObjectMethod(this$, mids$[mid_higherEntry_341cd1138db0914d], a0.this$));
    }

    ::java::lang::Object NavigableMap::higherKey(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_higherKey_5804c890f94a02b6], a0.this$));
    }

    ::java::util::Map$Entry NavigableMap::lastEntry() const
    {
      return ::java::util::Map$Entry(env->callObjectMethod(this$, mids$[mid_lastEntry_0eaee7bb6ea53007]));
    }

    ::java::util::Map$Entry NavigableMap::lowerEntry(const ::java::lang::Object & a0) const
    {
      return ::java::util::Map$Entry(env->callObjectMethod(this$, mids$[mid_lowerEntry_341cd1138db0914d], a0.this$));
    }

    ::java::lang::Object NavigableMap::lowerKey(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_lowerKey_5804c890f94a02b6], a0.this$));
    }

    ::java::util::NavigableSet NavigableMap::navigableKeySet() const
    {
      return ::java::util::NavigableSet(env->callObjectMethod(this$, mids$[mid_navigableKeySet_ea2f3a2f5483365c]));
    }

    ::java::util::Map$Entry NavigableMap::pollFirstEntry() const
    {
      return ::java::util::Map$Entry(env->callObjectMethod(this$, mids$[mid_pollFirstEntry_0eaee7bb6ea53007]));
    }

    ::java::util::Map$Entry NavigableMap::pollLastEntry() const
    {
      return ::java::util::Map$Entry(env->callObjectMethod(this$, mids$[mid_pollLastEntry_0eaee7bb6ea53007]));
    }

    ::java::util::SortedMap NavigableMap::subMap(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::util::SortedMap(env->callObjectMethod(this$, mids$[mid_subMap_a2a04c1f48ab1459], a0.this$, a1.this$));
    }

    NavigableMap NavigableMap::subMap(const ::java::lang::Object & a0, jboolean a1, const ::java::lang::Object & a2, jboolean a3) const
    {
      return NavigableMap(env->callObjectMethod(this$, mids$[mid_subMap_4c86ea09a85e174e], a0.this$, a1, a2.this$, a3));
    }

    ::java::util::SortedMap NavigableMap::tailMap(const ::java::lang::Object & a0) const
    {
      return ::java::util::SortedMap(env->callObjectMethod(this$, mids$[mid_tailMap_c34ad1b261346963], a0.this$));
    }

    NavigableMap NavigableMap::tailMap(const ::java::lang::Object & a0, jboolean a1) const
    {
      return NavigableMap(env->callObjectMethod(this$, mids$[mid_tailMap_5593cae0e8732851], a0.this$, a1));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_NavigableMap_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_NavigableMap_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_NavigableMap_of_(t_NavigableMap *self, PyObject *args);
    static PyObject *t_NavigableMap_ceilingEntry(t_NavigableMap *self, PyObject *arg);
    static PyObject *t_NavigableMap_ceilingKey(t_NavigableMap *self, PyObject *arg);
    static PyObject *t_NavigableMap_descendingKeySet(t_NavigableMap *self);
    static PyObject *t_NavigableMap_descendingMap(t_NavigableMap *self);
    static PyObject *t_NavigableMap_firstEntry(t_NavigableMap *self);
    static PyObject *t_NavigableMap_floorEntry(t_NavigableMap *self, PyObject *arg);
    static PyObject *t_NavigableMap_floorKey(t_NavigableMap *self, PyObject *arg);
    static PyObject *t_NavigableMap_headMap(t_NavigableMap *self, PyObject *args);
    static PyObject *t_NavigableMap_higherEntry(t_NavigableMap *self, PyObject *arg);
    static PyObject *t_NavigableMap_higherKey(t_NavigableMap *self, PyObject *arg);
    static PyObject *t_NavigableMap_lastEntry(t_NavigableMap *self);
    static PyObject *t_NavigableMap_lowerEntry(t_NavigableMap *self, PyObject *arg);
    static PyObject *t_NavigableMap_lowerKey(t_NavigableMap *self, PyObject *arg);
    static PyObject *t_NavigableMap_navigableKeySet(t_NavigableMap *self);
    static PyObject *t_NavigableMap_pollFirstEntry(t_NavigableMap *self);
    static PyObject *t_NavigableMap_pollLastEntry(t_NavigableMap *self);
    static PyObject *t_NavigableMap_subMap(t_NavigableMap *self, PyObject *args);
    static PyObject *t_NavigableMap_tailMap(t_NavigableMap *self, PyObject *args);
    static PyObject *t_NavigableMap_get__parameters_(t_NavigableMap *self, void *data);
    static PyGetSetDef t_NavigableMap__fields_[] = {
      DECLARE_GET_FIELD(t_NavigableMap, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_NavigableMap__methods_[] = {
      DECLARE_METHOD(t_NavigableMap, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_NavigableMap, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_NavigableMap, of_, METH_VARARGS),
      DECLARE_METHOD(t_NavigableMap, ceilingEntry, METH_O),
      DECLARE_METHOD(t_NavigableMap, ceilingKey, METH_O),
      DECLARE_METHOD(t_NavigableMap, descendingKeySet, METH_NOARGS),
      DECLARE_METHOD(t_NavigableMap, descendingMap, METH_NOARGS),
      DECLARE_METHOD(t_NavigableMap, firstEntry, METH_NOARGS),
      DECLARE_METHOD(t_NavigableMap, floorEntry, METH_O),
      DECLARE_METHOD(t_NavigableMap, floorKey, METH_O),
      DECLARE_METHOD(t_NavigableMap, headMap, METH_VARARGS),
      DECLARE_METHOD(t_NavigableMap, higherEntry, METH_O),
      DECLARE_METHOD(t_NavigableMap, higherKey, METH_O),
      DECLARE_METHOD(t_NavigableMap, lastEntry, METH_NOARGS),
      DECLARE_METHOD(t_NavigableMap, lowerEntry, METH_O),
      DECLARE_METHOD(t_NavigableMap, lowerKey, METH_O),
      DECLARE_METHOD(t_NavigableMap, navigableKeySet, METH_NOARGS),
      DECLARE_METHOD(t_NavigableMap, pollFirstEntry, METH_NOARGS),
      DECLARE_METHOD(t_NavigableMap, pollLastEntry, METH_NOARGS),
      DECLARE_METHOD(t_NavigableMap, subMap, METH_VARARGS),
      DECLARE_METHOD(t_NavigableMap, tailMap, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(NavigableMap)[] = {
      { Py_tp_methods, t_NavigableMap__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_NavigableMap__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(NavigableMap)[] = {
      &PY_TYPE_DEF(::java::util::SortedMap),
      NULL
    };

    DEFINE_TYPE(NavigableMap, t_NavigableMap, NavigableMap);
    PyObject *t_NavigableMap::wrap_Object(const NavigableMap& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_NavigableMap::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_NavigableMap *self = (t_NavigableMap *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    PyObject *t_NavigableMap::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_NavigableMap::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_NavigableMap *self = (t_NavigableMap *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    void t_NavigableMap::install(PyObject *module)
    {
      installType(&PY_TYPE(NavigableMap), &PY_TYPE_DEF(NavigableMap), module, "NavigableMap", 0);
    }

    void t_NavigableMap::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(NavigableMap), "class_", make_descriptor(NavigableMap::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NavigableMap), "wrapfn_", make_descriptor(t_NavigableMap::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NavigableMap), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_NavigableMap_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, NavigableMap::initializeClass, 1)))
        return NULL;
      return t_NavigableMap::wrap_Object(NavigableMap(((t_NavigableMap *) arg)->object.this$));
    }
    static PyObject *t_NavigableMap_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, NavigableMap::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_NavigableMap_of_(t_NavigableMap *self, PyObject *args)
    {
      if (!parseArg(args, "T", 2, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_NavigableMap_ceilingEntry(t_NavigableMap *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::util::Map$Entry result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.ceilingEntry(a0));
        return ::java::util::t_Map$Entry::wrap_Object(result, self->parameters[0], self->parameters[1]);
      }

      PyErr_SetArgsError((PyObject *) self, "ceilingEntry", arg);
      return NULL;
    }

    static PyObject *t_NavigableMap_ceilingKey(t_NavigableMap *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.ceilingKey(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "ceilingKey", arg);
      return NULL;
    }

    static PyObject *t_NavigableMap_descendingKeySet(t_NavigableMap *self)
    {
      ::java::util::NavigableSet result((jobject) NULL);
      OBJ_CALL(result = self->object.descendingKeySet());
      return ::java::util::t_NavigableSet::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_NavigableMap_descendingMap(t_NavigableMap *self)
    {
      NavigableMap result((jobject) NULL);
      OBJ_CALL(result = self->object.descendingMap());
      return t_NavigableMap::wrap_Object(result, self->parameters[0], self->parameters[1]);
    }

    static PyObject *t_NavigableMap_firstEntry(t_NavigableMap *self)
    {
      ::java::util::Map$Entry result((jobject) NULL);
      OBJ_CALL(result = self->object.firstEntry());
      return ::java::util::t_Map$Entry::wrap_Object(result, self->parameters[0], self->parameters[1]);
    }

    static PyObject *t_NavigableMap_floorEntry(t_NavigableMap *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::util::Map$Entry result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.floorEntry(a0));
        return ::java::util::t_Map$Entry::wrap_Object(result, self->parameters[0], self->parameters[1]);
      }

      PyErr_SetArgsError((PyObject *) self, "floorEntry", arg);
      return NULL;
    }

    static PyObject *t_NavigableMap_floorKey(t_NavigableMap *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.floorKey(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "floorKey", arg);
      return NULL;
    }

    static PyObject *t_NavigableMap_headMap(t_NavigableMap *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::util::SortedMap result((jobject) NULL);

          if (!parseArgs(args, "O", self->parameters[0], &a0))
          {
            OBJ_CALL(result = self->object.headMap(a0));
            return ::java::util::t_SortedMap::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean a1;
          NavigableMap result((jobject) NULL);

          if (!parseArgs(args, "OZ", self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(result = self->object.headMap(a0, a1));
            return t_NavigableMap::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }
        }
      }

      return callSuper(PY_TYPE(NavigableMap), (PyObject *) self, "headMap", args, 2);
    }

    static PyObject *t_NavigableMap_higherEntry(t_NavigableMap *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::util::Map$Entry result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.higherEntry(a0));
        return ::java::util::t_Map$Entry::wrap_Object(result, self->parameters[0], self->parameters[1]);
      }

      PyErr_SetArgsError((PyObject *) self, "higherEntry", arg);
      return NULL;
    }

    static PyObject *t_NavigableMap_higherKey(t_NavigableMap *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.higherKey(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "higherKey", arg);
      return NULL;
    }

    static PyObject *t_NavigableMap_lastEntry(t_NavigableMap *self)
    {
      ::java::util::Map$Entry result((jobject) NULL);
      OBJ_CALL(result = self->object.lastEntry());
      return ::java::util::t_Map$Entry::wrap_Object(result, self->parameters[0], self->parameters[1]);
    }

    static PyObject *t_NavigableMap_lowerEntry(t_NavigableMap *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::util::Map$Entry result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.lowerEntry(a0));
        return ::java::util::t_Map$Entry::wrap_Object(result, self->parameters[0], self->parameters[1]);
      }

      PyErr_SetArgsError((PyObject *) self, "lowerEntry", arg);
      return NULL;
    }

    static PyObject *t_NavigableMap_lowerKey(t_NavigableMap *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.lowerKey(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "lowerKey", arg);
      return NULL;
    }

    static PyObject *t_NavigableMap_navigableKeySet(t_NavigableMap *self)
    {
      ::java::util::NavigableSet result((jobject) NULL);
      OBJ_CALL(result = self->object.navigableKeySet());
      return ::java::util::t_NavigableSet::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_NavigableMap_pollFirstEntry(t_NavigableMap *self)
    {
      ::java::util::Map$Entry result((jobject) NULL);
      OBJ_CALL(result = self->object.pollFirstEntry());
      return ::java::util::t_Map$Entry::wrap_Object(result, self->parameters[0], self->parameters[1]);
    }

    static PyObject *t_NavigableMap_pollLastEntry(t_NavigableMap *self)
    {
      ::java::util::Map$Entry result((jobject) NULL);
      OBJ_CALL(result = self->object.pollLastEntry());
      return ::java::util::t_Map$Entry::wrap_Object(result, self->parameters[0], self->parameters[1]);
    }

    static PyObject *t_NavigableMap_subMap(t_NavigableMap *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::util::SortedMap result((jobject) NULL);

          if (!parseArgs(args, "OO", self->parameters[0], self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(result = self->object.subMap(a0, a1));
            return ::java::util::t_SortedMap::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }
        }
        break;
       case 4:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean a1;
          ::java::lang::Object a2((jobject) NULL);
          jboolean a3;
          NavigableMap result((jobject) NULL);

          if (!parseArgs(args, "OZOZ", self->parameters[0], self->parameters[0], &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.subMap(a0, a1, a2, a3));
            return t_NavigableMap::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }
        }
      }

      return callSuper(PY_TYPE(NavigableMap), (PyObject *) self, "subMap", args, 2);
    }

    static PyObject *t_NavigableMap_tailMap(t_NavigableMap *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::util::SortedMap result((jobject) NULL);

          if (!parseArgs(args, "O", self->parameters[0], &a0))
          {
            OBJ_CALL(result = self->object.tailMap(a0));
            return ::java::util::t_SortedMap::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean a1;
          NavigableMap result((jobject) NULL);

          if (!parseArgs(args, "OZ", self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(result = self->object.tailMap(a0, a1));
            return t_NavigableMap::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }
        }
      }

      return callSuper(PY_TYPE(NavigableMap), (PyObject *) self, "tailMap", args, 2);
    }
    static PyObject *t_NavigableMap_get__parameters_(t_NavigableMap *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/TimeZone.h"
#include "java/util/Locale.h"
#include "java/io/Serializable.h"
#include "java/util/TimeZone.h"
#include "java/lang/Class.h"
#include "java/lang/Cloneable.h"
#include "java/lang/String.h"
#include "java/util/Date.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *TimeZone::class$ = NULL;
    jmethodID *TimeZone::mids$ = NULL;
    bool TimeZone::live$ = false;
    jint TimeZone::LONG = (jint) 0;
    jint TimeZone::SHORT = (jint) 0;

    jclass TimeZone::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/TimeZone");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_clone_541690f9ee81d3ad] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_getAvailableIDs_0f94e41879ab7062] = env->getStaticMethodID(cls, "getAvailableIDs", "()[Ljava/lang/String;");
        mids$[mid_getAvailableIDs_e3e694d37be98bf0] = env->getStaticMethodID(cls, "getAvailableIDs", "(I)[Ljava/lang/String;");
        mids$[mid_getDSTSavings_55546ef6a647f39b] = env->getMethodID(cls, "getDSTSavings", "()I");
        mids$[mid_getDefault_e127b2db209cd4d5] = env->getStaticMethodID(cls, "getDefault", "()Ljava/util/TimeZone;");
        mids$[mid_getDisplayName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getDisplayName", "()Ljava/lang/String;");
        mids$[mid_getDisplayName_26070c28e6ea354d] = env->getMethodID(cls, "getDisplayName", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_getDisplayName_16bc9a45a1084794] = env->getMethodID(cls, "getDisplayName", "(ZI)Ljava/lang/String;");
        mids$[mid_getDisplayName_7f7535daaf64de9e] = env->getMethodID(cls, "getDisplayName", "(ZILjava/util/Locale;)Ljava/lang/String;");
        mids$[mid_getID_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getID", "()Ljava/lang/String;");
        mids$[mid_getOffset_da24d9dc605e436c] = env->getMethodID(cls, "getOffset", "(J)I");
        mids$[mid_getOffset_cdfca057dbea3f1b] = env->getMethodID(cls, "getOffset", "(IIIIII)I");
        mids$[mid_getRawOffset_55546ef6a647f39b] = env->getMethodID(cls, "getRawOffset", "()I");
        mids$[mid_getTimeZone_506a2259b58ff4d1] = env->getStaticMethodID(cls, "getTimeZone", "(Ljava/lang/String;)Ljava/util/TimeZone;");
        mids$[mid_hasSameRules_265f2b9e996450e2] = env->getMethodID(cls, "hasSameRules", "(Ljava/util/TimeZone;)Z");
        mids$[mid_inDaylightTime_e7dfa6240fa69edb] = env->getMethodID(cls, "inDaylightTime", "(Ljava/util/Date;)Z");
        mids$[mid_observesDaylightTime_9ab94ac1dc23b105] = env->getMethodID(cls, "observesDaylightTime", "()Z");
        mids$[mid_setDefault_6ad8873b96f16bda] = env->getStaticMethodID(cls, "setDefault", "(Ljava/util/TimeZone;)V");
        mids$[mid_setID_734b91ac30d5f9b4] = env->getMethodID(cls, "setID", "(Ljava/lang/String;)V");
        mids$[mid_setRawOffset_44ed599e93e8a30c] = env->getMethodID(cls, "setRawOffset", "(I)V");
        mids$[mid_useDaylightTime_9ab94ac1dc23b105] = env->getMethodID(cls, "useDaylightTime", "()Z");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        LONG = env->getStaticIntField(cls, "LONG");
        SHORT = env->getStaticIntField(cls, "SHORT");
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    TimeZone::TimeZone() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

    ::java::lang::Object TimeZone::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_541690f9ee81d3ad]));
    }

    JArray< ::java::lang::String > TimeZone::getAvailableIDs()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::lang::String >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableIDs_0f94e41879ab7062]));
    }

    JArray< ::java::lang::String > TimeZone::getAvailableIDs(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::lang::String >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableIDs_e3e694d37be98bf0], a0));
    }

    jint TimeZone::getDSTSavings() const
    {
      return env->callIntMethod(this$, mids$[mid_getDSTSavings_55546ef6a647f39b]);
    }

    TimeZone TimeZone::getDefault()
    {
      jclass cls = env->getClass(initializeClass);
      return TimeZone(env->callStaticObjectMethod(cls, mids$[mid_getDefault_e127b2db209cd4d5]));
    }

    ::java::lang::String TimeZone::getDisplayName() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayName_1c1fa1e935d6cdcf]));
    }

    ::java::lang::String TimeZone::getDisplayName(const ::java::util::Locale & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayName_26070c28e6ea354d], a0.this$));
    }

    ::java::lang::String TimeZone::getDisplayName(jboolean a0, jint a1) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayName_16bc9a45a1084794], a0, a1));
    }

    ::java::lang::String TimeZone::getDisplayName(jboolean a0, jint a1, const ::java::util::Locale & a2) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDisplayName_7f7535daaf64de9e], a0, a1, a2.this$));
    }

    ::java::lang::String TimeZone::getID() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getID_1c1fa1e935d6cdcf]));
    }

    jint TimeZone::getOffset(jlong a0) const
    {
      return env->callIntMethod(this$, mids$[mid_getOffset_da24d9dc605e436c], a0);
    }

    jint TimeZone::getOffset(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) const
    {
      return env->callIntMethod(this$, mids$[mid_getOffset_cdfca057dbea3f1b], a0, a1, a2, a3, a4, a5);
    }

    jint TimeZone::getRawOffset() const
    {
      return env->callIntMethod(this$, mids$[mid_getRawOffset_55546ef6a647f39b]);
    }

    TimeZone TimeZone::getTimeZone(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return TimeZone(env->callStaticObjectMethod(cls, mids$[mid_getTimeZone_506a2259b58ff4d1], a0.this$));
    }

    jboolean TimeZone::hasSameRules(const TimeZone & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_hasSameRules_265f2b9e996450e2], a0.this$);
    }

    jboolean TimeZone::inDaylightTime(const ::java::util::Date & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_inDaylightTime_e7dfa6240fa69edb], a0.this$);
    }

    jboolean TimeZone::observesDaylightTime() const
    {
      return env->callBooleanMethod(this$, mids$[mid_observesDaylightTime_9ab94ac1dc23b105]);
    }

    void TimeZone::setDefault(const TimeZone & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_setDefault_6ad8873b96f16bda], a0.this$);
    }

    void TimeZone::setID(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setID_734b91ac30d5f9b4], a0.this$);
    }

    void TimeZone::setRawOffset(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setRawOffset_44ed599e93e8a30c], a0);
    }

    jboolean TimeZone::useDaylightTime() const
    {
      return env->callBooleanMethod(this$, mids$[mid_useDaylightTime_9ab94ac1dc23b105]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_TimeZone_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_TimeZone_instance_(PyTypeObject *type, PyObject *arg);
    static int t_TimeZone_init_(t_TimeZone *self, PyObject *args, PyObject *kwds);
    static PyObject *t_TimeZone_clone(t_TimeZone *self);
    static PyObject *t_TimeZone_getAvailableIDs(PyTypeObject *type, PyObject *args);
    static PyObject *t_TimeZone_getDSTSavings(t_TimeZone *self);
    static PyObject *t_TimeZone_getDefault(PyTypeObject *type);
    static PyObject *t_TimeZone_getDisplayName(t_TimeZone *self, PyObject *args);
    static PyObject *t_TimeZone_getID(t_TimeZone *self);
    static PyObject *t_TimeZone_getOffset(t_TimeZone *self, PyObject *args);
    static PyObject *t_TimeZone_getRawOffset(t_TimeZone *self);
    static PyObject *t_TimeZone_getTimeZone(PyTypeObject *type, PyObject *arg);
    static PyObject *t_TimeZone_hasSameRules(t_TimeZone *self, PyObject *arg);
    static PyObject *t_TimeZone_inDaylightTime(t_TimeZone *self, PyObject *arg);
    static PyObject *t_TimeZone_observesDaylightTime(t_TimeZone *self);
    static PyObject *t_TimeZone_setDefault(PyTypeObject *type, PyObject *arg);
    static PyObject *t_TimeZone_setID(t_TimeZone *self, PyObject *arg);
    static PyObject *t_TimeZone_setRawOffset(t_TimeZone *self, PyObject *arg);
    static PyObject *t_TimeZone_useDaylightTime(t_TimeZone *self);
    static PyObject *t_TimeZone_get__availableIDs(t_TimeZone *self, void *data);
    static PyObject *t_TimeZone_get__dSTSavings(t_TimeZone *self, void *data);
    static PyObject *t_TimeZone_get__default(t_TimeZone *self, void *data);
    static int t_TimeZone_set__default(t_TimeZone *self, PyObject *arg, void *data);
    static PyObject *t_TimeZone_get__displayName(t_TimeZone *self, void *data);
    static PyObject *t_TimeZone_get__iD(t_TimeZone *self, void *data);
    static int t_TimeZone_set__iD(t_TimeZone *self, PyObject *arg, void *data);
    static PyObject *t_TimeZone_get__rawOffset(t_TimeZone *self, void *data);
    static int t_TimeZone_set__rawOffset(t_TimeZone *self, PyObject *arg, void *data);
    static PyGetSetDef t_TimeZone__fields_[] = {
      DECLARE_GET_FIELD(t_TimeZone, availableIDs),
      DECLARE_GET_FIELD(t_TimeZone, dSTSavings),
      DECLARE_GETSET_FIELD(t_TimeZone, default),
      DECLARE_GET_FIELD(t_TimeZone, displayName),
      DECLARE_GETSET_FIELD(t_TimeZone, iD),
      DECLARE_GETSET_FIELD(t_TimeZone, rawOffset),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_TimeZone__methods_[] = {
      DECLARE_METHOD(t_TimeZone, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_TimeZone, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_TimeZone, clone, METH_NOARGS),
      DECLARE_METHOD(t_TimeZone, getAvailableIDs, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_TimeZone, getDSTSavings, METH_NOARGS),
      DECLARE_METHOD(t_TimeZone, getDefault, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_TimeZone, getDisplayName, METH_VARARGS),
      DECLARE_METHOD(t_TimeZone, getID, METH_NOARGS),
      DECLARE_METHOD(t_TimeZone, getOffset, METH_VARARGS),
      DECLARE_METHOD(t_TimeZone, getRawOffset, METH_NOARGS),
      DECLARE_METHOD(t_TimeZone, getTimeZone, METH_O | METH_CLASS),
      DECLARE_METHOD(t_TimeZone, hasSameRules, METH_O),
      DECLARE_METHOD(t_TimeZone, inDaylightTime, METH_O),
      DECLARE_METHOD(t_TimeZone, observesDaylightTime, METH_NOARGS),
      DECLARE_METHOD(t_TimeZone, setDefault, METH_O | METH_CLASS),
      DECLARE_METHOD(t_TimeZone, setID, METH_O),
      DECLARE_METHOD(t_TimeZone, setRawOffset, METH_O),
      DECLARE_METHOD(t_TimeZone, useDaylightTime, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(TimeZone)[] = {
      { Py_tp_methods, t_TimeZone__methods_ },
      { Py_tp_init, (void *) t_TimeZone_init_ },
      { Py_tp_getset, t_TimeZone__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(TimeZone)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(TimeZone, t_TimeZone, TimeZone);

    void t_TimeZone::install(PyObject *module)
    {
      installType(&PY_TYPE(TimeZone), &PY_TYPE_DEF(TimeZone), module, "TimeZone", 0);
    }

    void t_TimeZone::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(TimeZone), "class_", make_descriptor(TimeZone::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(TimeZone), "wrapfn_", make_descriptor(t_TimeZone::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(TimeZone), "boxfn_", make_descriptor(boxObject));
      env->getClass(TimeZone::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(TimeZone), "LONG", make_descriptor(TimeZone::LONG));
      PyObject_SetAttrString((PyObject *) PY_TYPE(TimeZone), "SHORT", make_descriptor(TimeZone::SHORT));
    }

    static PyObject *t_TimeZone_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, TimeZone::initializeClass, 1)))
        return NULL;
      return t_TimeZone::wrap_Object(TimeZone(((t_TimeZone *) arg)->object.this$));
    }
    static PyObject *t_TimeZone_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, TimeZone::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_TimeZone_init_(t_TimeZone *self, PyObject *args, PyObject *kwds)
    {
      TimeZone object((jobject) NULL);

      INT_CALL(object = TimeZone());
      self->object = object;

      return 0;
    }

    static PyObject *t_TimeZone_clone(t_TimeZone *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_TimeZone_getAvailableIDs(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          JArray< ::java::lang::String > result((jobject) NULL);
          OBJ_CALL(result = ::java::util::TimeZone::getAvailableIDs());
          return JArray<jstring>(result.this$).wrap();
        }
        break;
       case 1:
        {
          jint a0;
          JArray< ::java::lang::String > result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::util::TimeZone::getAvailableIDs(a0));
            return JArray<jstring>(result.this$).wrap();
          }
        }
      }

      PyErr_SetArgsError(type, "getAvailableIDs", args);
      return NULL;
    }

    static PyObject *t_TimeZone_getDSTSavings(t_TimeZone *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getDSTSavings());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_TimeZone_getDefault(PyTypeObject *type)
    {
      TimeZone result((jobject) NULL);
      OBJ_CALL(result = ::java::util::TimeZone::getDefault());
      return t_TimeZone::wrap_Object(result);
    }

    static PyObject *t_TimeZone_getDisplayName(t_TimeZone *self, PyObject *args)
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
          ::java::util::Locale a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getDisplayName(a0));
            return j2p(result);
          }
        }
        break;
       case 2:
        {
          jboolean a0;
          jint a1;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "ZI", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getDisplayName(a0, a1));
            return j2p(result);
          }
        }
        break;
       case 3:
        {
          jboolean a0;
          jint a1;
          ::java::util::Locale a2((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "ZIk", ::java::util::Locale::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.getDisplayName(a0, a1, a2));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getDisplayName", args);
      return NULL;
    }

    static PyObject *t_TimeZone_getID(t_TimeZone *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getID());
      return j2p(result);
    }

    static PyObject *t_TimeZone_getOffset(t_TimeZone *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jlong a0;
          jint result;

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(result = self->object.getOffset(a0));
            return PyLong_FromLong((long) result);
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
          jint a5;
          jint result;

          if (!parseArgs(args, "IIIIII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = self->object.getOffset(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getOffset", args);
      return NULL;
    }

    static PyObject *t_TimeZone_getRawOffset(t_TimeZone *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getRawOffset());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_TimeZone_getTimeZone(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      TimeZone result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::util::TimeZone::getTimeZone(a0));
        return t_TimeZone::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "getTimeZone", arg);
      return NULL;
    }

    static PyObject *t_TimeZone_hasSameRules(t_TimeZone *self, PyObject *arg)
    {
      TimeZone a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "k", TimeZone::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.hasSameRules(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "hasSameRules", arg);
      return NULL;
    }

    static PyObject *t_TimeZone_inDaylightTime(t_TimeZone *self, PyObject *arg)
    {
      ::java::util::Date a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "k", ::java::util::Date::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.inDaylightTime(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "inDaylightTime", arg);
      return NULL;
    }

    static PyObject *t_TimeZone_observesDaylightTime(t_TimeZone *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.observesDaylightTime());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_TimeZone_setDefault(PyTypeObject *type, PyObject *arg)
    {
      TimeZone a0((jobject) NULL);

      if (!parseArg(arg, "k", TimeZone::initializeClass, &a0))
      {
        OBJ_CALL(::java::util::TimeZone::setDefault(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "setDefault", arg);
      return NULL;
    }

    static PyObject *t_TimeZone_setID(t_TimeZone *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setID(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setID", arg);
      return NULL;
    }

    static PyObject *t_TimeZone_setRawOffset(t_TimeZone *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setRawOffset(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setRawOffset", arg);
      return NULL;
    }

    static PyObject *t_TimeZone_useDaylightTime(t_TimeZone *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.useDaylightTime());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_TimeZone_get__availableIDs(t_TimeZone *self, void *data)
    {
      JArray< ::java::lang::String > value((jobject) NULL);
      OBJ_CALL(value = self->object.getAvailableIDs());
      return JArray<jstring>(value.this$).wrap();
    }

    static PyObject *t_TimeZone_get__dSTSavings(t_TimeZone *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getDSTSavings());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_TimeZone_get__default(t_TimeZone *self, void *data)
    {
      TimeZone value((jobject) NULL);
      OBJ_CALL(value = self->object.getDefault());
      return t_TimeZone::wrap_Object(value);
    }
    static int t_TimeZone_set__default(t_TimeZone *self, PyObject *arg, void *data)
    {
      {
        TimeZone value((jobject) NULL);
        if (!parseArg(arg, "k", TimeZone::initializeClass, &value))
        {
          INT_CALL(self->object.setDefault(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "default", arg);
      return -1;
    }

    static PyObject *t_TimeZone_get__displayName(t_TimeZone *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getDisplayName());
      return j2p(value);
    }

    static PyObject *t_TimeZone_get__iD(t_TimeZone *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getID());
      return j2p(value);
    }
    static int t_TimeZone_set__iD(t_TimeZone *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setID(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "iD", arg);
      return -1;
    }

    static PyObject *t_TimeZone_get__rawOffset(t_TimeZone *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getRawOffset());
      return PyLong_FromLong((long) value);
    }
    static int t_TimeZone_set__rawOffset(t_TimeZone *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setRawOffset(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "rawOffset", arg);
      return -1;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Properties.h"
#include "java/util/Map$Entry.h"
#include "java/util/Map.h"
#include "java/util/InvalidPropertiesFormatException.h"
#include "java/io/InputStream.h"
#include "java/io/OutputStream.h"
#include "java/util/Collection.h"
#include "java/io/Reader.h"
#include "java/io/PrintWriter.h"
#include "java/io/IOException.h"
#include "java/util/Enumeration.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/io/Writer.h"
#include "java/lang/String.h"
#include "java/io/PrintStream.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Properties::class$ = NULL;
    jmethodID *Properties::mids$ = NULL;
    bool Properties::live$ = false;

    jclass Properties::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Properties");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_clone_541690f9ee81d3ad] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_contains_460c5e2d9d51c6cc] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_containsKey_460c5e2d9d51c6cc] = env->getMethodID(cls, "containsKey", "(Ljava/lang/Object;)Z");
        mids$[mid_containsValue_460c5e2d9d51c6cc] = env->getMethodID(cls, "containsValue", "(Ljava/lang/Object;)Z");
        mids$[mid_elements_57aeac8743844cd2] = env->getMethodID(cls, "elements", "()Ljava/util/Enumeration;");
        mids$[mid_entrySet_7e8f11dd23d1142c] = env->getMethodID(cls, "entrySet", "()Ljava/util/Set;");
        mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_get_5804c890f94a02b6] = env->getMethodID(cls, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_getOrDefault_2329cf24e33e570d] = env->getMethodID(cls, "getOrDefault", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_getProperty_6f0f3576df9f75ee] = env->getMethodID(cls, "getProperty", "(Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_getProperty_88f2f8c619f3cbd0] = env->getMethodID(cls, "getProperty", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isEmpty_9ab94ac1dc23b105] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_keySet_7e8f11dd23d1142c] = env->getMethodID(cls, "keySet", "()Ljava/util/Set;");
        mids$[mid_keys_57aeac8743844cd2] = env->getMethodID(cls, "keys", "()Ljava/util/Enumeration;");
        mids$[mid_list_5820b90479773400] = env->getMethodID(cls, "list", "(Ljava/io/PrintStream;)V");
        mids$[mid_list_9ccc55eb3506a3d6] = env->getMethodID(cls, "list", "(Ljava/io/PrintWriter;)V");
        mids$[mid_load_471a178453aa39ad] = env->getMethodID(cls, "load", "(Ljava/io/InputStream;)V");
        mids$[mid_load_e1a387c1ca9243a3] = env->getMethodID(cls, "load", "(Ljava/io/Reader;)V");
        mids$[mid_loadFromXML_471a178453aa39ad] = env->getMethodID(cls, "loadFromXML", "(Ljava/io/InputStream;)V");
        mids$[mid_propertyNames_57aeac8743844cd2] = env->getMethodID(cls, "propertyNames", "()Ljava/util/Enumeration;");
        mids$[mid_put_2329cf24e33e570d] = env->getMethodID(cls, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_putAll_6648520b18d8ef1d] = env->getMethodID(cls, "putAll", "(Ljava/util/Map;)V");
        mids$[mid_putIfAbsent_2329cf24e33e570d] = env->getMethodID(cls, "putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_remove_5804c890f94a02b6] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_remove_b13624253707cc45] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_replace_2329cf24e33e570d] = env->getMethodID(cls, "replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_replace_9e90e99288cb1520] = env->getMethodID(cls, "replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_save_da35cb4b68e0734e] = env->getMethodID(cls, "save", "(Ljava/io/OutputStream;Ljava/lang/String;)V");
        mids$[mid_setProperty_c48c6297bfeb4866] = env->getMethodID(cls, "setProperty", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;");
        mids$[mid_size_55546ef6a647f39b] = env->getMethodID(cls, "size", "()I");
        mids$[mid_store_da35cb4b68e0734e] = env->getMethodID(cls, "store", "(Ljava/io/OutputStream;Ljava/lang/String;)V");
        mids$[mid_store_633d333981600a7f] = env->getMethodID(cls, "store", "(Ljava/io/Writer;Ljava/lang/String;)V");
        mids$[mid_storeToXML_da35cb4b68e0734e] = env->getMethodID(cls, "storeToXML", "(Ljava/io/OutputStream;Ljava/lang/String;)V");
        mids$[mid_storeToXML_4106e7ac2f1e348d] = env->getMethodID(cls, "storeToXML", "(Ljava/io/OutputStream;Ljava/lang/String;Ljava/lang/String;)V");
        mids$[mid_stringPropertyNames_7e8f11dd23d1142c] = env->getMethodID(cls, "stringPropertyNames", "()Ljava/util/Set;");
        mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_values_cb666ea1a15f5210] = env->getMethodID(cls, "values", "()Ljava/util/Collection;");
        mids$[mid_rehash_a1fa5dae97ea5ed2] = env->getMethodID(cls, "rehash", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Properties::Properties() : ::java::util::Hashtable(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

    Properties::Properties(jint a0) : ::java::util::Hashtable(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

    void Properties::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
    }

    ::java::lang::Object Properties::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_541690f9ee81d3ad]));
    }

    jboolean Properties::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_460c5e2d9d51c6cc], a0.this$);
    }

    jboolean Properties::containsKey(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsKey_460c5e2d9d51c6cc], a0.this$);
    }

    jboolean Properties::containsValue(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsValue_460c5e2d9d51c6cc], a0.this$);
    }

    ::java::util::Enumeration Properties::elements() const
    {
      return ::java::util::Enumeration(env->callObjectMethod(this$, mids$[mid_elements_57aeac8743844cd2]));
    }

    ::java::util::Set Properties::entrySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_entrySet_7e8f11dd23d1142c]));
    }

    jboolean Properties::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
    }

    ::java::lang::Object Properties::get$(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_5804c890f94a02b6], a0.this$));
    }

    ::java::lang::Object Properties::getOrDefault(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getOrDefault_2329cf24e33e570d], a0.this$, a1.this$));
    }

    ::java::lang::String Properties::getProperty(const ::java::lang::String & a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProperty_6f0f3576df9f75ee], a0.this$));
    }

    ::java::lang::String Properties::getProperty(const ::java::lang::String & a0, const ::java::lang::String & a1) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProperty_88f2f8c619f3cbd0], a0.this$, a1.this$));
    }

    jint Properties::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
    }

    jboolean Properties::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_9ab94ac1dc23b105]);
    }

    ::java::util::Set Properties::keySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_keySet_7e8f11dd23d1142c]));
    }

    ::java::util::Enumeration Properties::keys() const
    {
      return ::java::util::Enumeration(env->callObjectMethod(this$, mids$[mid_keys_57aeac8743844cd2]));
    }

    void Properties::list(const ::java::io::PrintStream & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_list_5820b90479773400], a0.this$);
    }

    void Properties::list(const ::java::io::PrintWriter & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_list_9ccc55eb3506a3d6], a0.this$);
    }

    void Properties::load(const ::java::io::InputStream & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_load_471a178453aa39ad], a0.this$);
    }

    void Properties::load(const ::java::io::Reader & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_load_e1a387c1ca9243a3], a0.this$);
    }

    void Properties::loadFromXML(const ::java::io::InputStream & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_loadFromXML_471a178453aa39ad], a0.this$);
    }

    ::java::util::Enumeration Properties::propertyNames() const
    {
      return ::java::util::Enumeration(env->callObjectMethod(this$, mids$[mid_propertyNames_57aeac8743844cd2]));
    }

    ::java::lang::Object Properties::put(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_put_2329cf24e33e570d], a0.this$, a1.this$));
    }

    void Properties::putAll(const ::java::util::Map & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_putAll_6648520b18d8ef1d], a0.this$);
    }

    ::java::lang::Object Properties::putIfAbsent(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_putIfAbsent_2329cf24e33e570d], a0.this$, a1.this$));
    }

    ::java::lang::Object Properties::remove(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_5804c890f94a02b6], a0.this$));
    }

    jboolean Properties::remove(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_b13624253707cc45], a0.this$, a1.this$);
    }

    ::java::lang::Object Properties::replace(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_replace_2329cf24e33e570d], a0.this$, a1.this$));
    }

    jboolean Properties::replace(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2) const
    {
      return env->callBooleanMethod(this$, mids$[mid_replace_9e90e99288cb1520], a0.this$, a1.this$, a2.this$);
    }

    void Properties::save(const ::java::io::OutputStream & a0, const ::java::lang::String & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_save_da35cb4b68e0734e], a0.this$, a1.this$);
    }

    ::java::lang::Object Properties::setProperty(const ::java::lang::String & a0, const ::java::lang::String & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_setProperty_c48c6297bfeb4866], a0.this$, a1.this$));
    }

    jint Properties::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_55546ef6a647f39b]);
    }

    void Properties::store(const ::java::io::OutputStream & a0, const ::java::lang::String & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_store_da35cb4b68e0734e], a0.this$, a1.this$);
    }

    void Properties::store(const ::java::io::Writer & a0, const ::java::lang::String & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_store_633d333981600a7f], a0.this$, a1.this$);
    }

    void Properties::storeToXML(const ::java::io::OutputStream & a0, const ::java::lang::String & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_storeToXML_da35cb4b68e0734e], a0.this$, a1.this$);
    }

    void Properties::storeToXML(const ::java::io::OutputStream & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) const
    {
      env->callVoidMethod(this$, mids$[mid_storeToXML_4106e7ac2f1e348d], a0.this$, a1.this$, a2.this$);
    }

    ::java::util::Set Properties::stringPropertyNames() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_stringPropertyNames_7e8f11dd23d1142c]));
    }

    ::java::lang::String Properties::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
    }

    ::java::util::Collection Properties::values() const
    {
      return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_values_cb666ea1a15f5210]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Properties_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Properties_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Properties_of_(t_Properties *self, PyObject *args);
    static int t_Properties_init_(t_Properties *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Properties_clear(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_clone(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_contains(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_containsKey(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_containsValue(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_elements(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_entrySet(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_equals(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_get(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_getOrDefault(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_getProperty(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_hashCode(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_isEmpty(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_keySet(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_keys(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_list(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_load(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_loadFromXML(t_Properties *self, PyObject *arg);
    static PyObject *t_Properties_propertyNames(t_Properties *self);
    static PyObject *t_Properties_put(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_putAll(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_putIfAbsent(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_remove(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_replace(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_save(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_setProperty(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_size(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_store(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_storeToXML(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_stringPropertyNames(t_Properties *self);
    static PyObject *t_Properties_toString(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_values(t_Properties *self, PyObject *args);
    static PyObject *t_Properties_get__empty(t_Properties *self, void *data);
    static PyObject *t_Properties_get__parameters_(t_Properties *self, void *data);
    static PyGetSetDef t_Properties__fields_[] = {
      DECLARE_GET_FIELD(t_Properties, empty),
      DECLARE_GET_FIELD(t_Properties, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Properties__methods_[] = {
      DECLARE_METHOD(t_Properties, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Properties, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Properties, of_, METH_VARARGS),
      DECLARE_METHOD(t_Properties, clear, METH_VARARGS),
      DECLARE_METHOD(t_Properties, clone, METH_VARARGS),
      DECLARE_METHOD(t_Properties, contains, METH_VARARGS),
      DECLARE_METHOD(t_Properties, containsKey, METH_VARARGS),
      DECLARE_METHOD(t_Properties, containsValue, METH_VARARGS),
      DECLARE_METHOD(t_Properties, elements, METH_VARARGS),
      DECLARE_METHOD(t_Properties, entrySet, METH_VARARGS),
      DECLARE_METHOD(t_Properties, equals, METH_VARARGS),
      DECLARE_METHOD(t_Properties, get, METH_VARARGS),
      DECLARE_METHOD(t_Properties, getOrDefault, METH_VARARGS),
      DECLARE_METHOD(t_Properties, getProperty, METH_VARARGS),
      DECLARE_METHOD(t_Properties, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Properties, isEmpty, METH_VARARGS),
      DECLARE_METHOD(t_Properties, keySet, METH_VARARGS),
      DECLARE_METHOD(t_Properties, keys, METH_VARARGS),
      DECLARE_METHOD(t_Properties, list, METH_VARARGS),
      DECLARE_METHOD(t_Properties, load, METH_VARARGS),
      DECLARE_METHOD(t_Properties, loadFromXML, METH_O),
      DECLARE_METHOD(t_Properties, propertyNames, METH_NOARGS),
      DECLARE_METHOD(t_Properties, put, METH_VARARGS),
      DECLARE_METHOD(t_Properties, putAll, METH_VARARGS),
      DECLARE_METHOD(t_Properties, putIfAbsent, METH_VARARGS),
      DECLARE_METHOD(t_Properties, remove, METH_VARARGS),
      DECLARE_METHOD(t_Properties, replace, METH_VARARGS),
      DECLARE_METHOD(t_Properties, save, METH_VARARGS),
      DECLARE_METHOD(t_Properties, setProperty, METH_VARARGS),
      DECLARE_METHOD(t_Properties, size, METH_VARARGS),
      DECLARE_METHOD(t_Properties, store, METH_VARARGS),
      DECLARE_METHOD(t_Properties, storeToXML, METH_VARARGS),
      DECLARE_METHOD(t_Properties, stringPropertyNames, METH_NOARGS),
      DECLARE_METHOD(t_Properties, toString, METH_VARARGS),
      DECLARE_METHOD(t_Properties, values, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Properties)[] = {
      { Py_tp_methods, t_Properties__methods_ },
      { Py_tp_init, (void *) t_Properties_init_ },
      { Py_tp_getset, t_Properties__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Properties)[] = {
      &PY_TYPE_DEF(::java::util::Hashtable),
      NULL
    };

    DEFINE_TYPE(Properties, t_Properties, Properties);
    PyObject *t_Properties::wrap_Object(const Properties& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_Properties::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Properties *self = (t_Properties *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    PyObject *t_Properties::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_Properties::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Properties *self = (t_Properties *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    void t_Properties::install(PyObject *module)
    {
      installType(&PY_TYPE(Properties), &PY_TYPE_DEF(Properties), module, "Properties", 0);
    }

    void t_Properties::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Properties), "class_", make_descriptor(Properties::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Properties), "wrapfn_", make_descriptor(t_Properties::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Properties), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Properties_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Properties::initializeClass, 1)))
        return NULL;
      return t_Properties::wrap_Object(Properties(((t_Properties *) arg)->object.this$));
    }
    static PyObject *t_Properties_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Properties::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Properties_of_(t_Properties *self, PyObject *args)
    {
      if (!parseArg(args, "T", 2, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static int t_Properties_init_(t_Properties *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          Properties object((jobject) NULL);

          INT_CALL(object = Properties());
          self->object = object;
          self->parameters[0] = ::java::lang::PY_TYPE(Object);
          self->parameters[1] = ::java::lang::PY_TYPE(Object);
          break;
        }
       case 1:
        {
          jint a0;
          Properties object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = Properties(a0));
            self->object = object;
            self->parameters[0] = ::java::lang::PY_TYPE(Object);
            self->parameters[1] = ::java::lang::PY_TYPE(Object);
            break;
          }
        }
       default:
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_Properties_clear(t_Properties *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "clear", args, 2);
    }

    static PyObject *t_Properties_clone(t_Properties *self, PyObject *args)
    {
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.clone());
        return ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "clone", args, 2);
    }

    static PyObject *t_Properties_contains(t_Properties *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "contains", args, 2);
    }

    static PyObject *t_Properties_containsKey(t_Properties *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.containsKey(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "containsKey", args, 2);
    }

    static PyObject *t_Properties_containsValue(t_Properties *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.containsValue(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "containsValue", args, 2);
    }

    static PyObject *t_Properties_elements(t_Properties *self, PyObject *args)
    {
      ::java::util::Enumeration result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.elements());
        return ::java::util::t_Enumeration::wrap_Object(result, ::java::lang::PY_TYPE(Object));
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "elements", args, 2);
    }

    static PyObject *t_Properties_entrySet(t_Properties *self, PyObject *args)
    {
      ::java::util::Set result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.entrySet());
        return ::java::util::t_Set::wrap_Object(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "entrySet", args, 2);
    }

    static PyObject *t_Properties_equals(t_Properties *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Properties_get(t_Properties *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.get$(a0));
        return ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "get", args, 2);
    }

    static PyObject *t_Properties_getOrDefault(t_Properties *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "oo", &a0, &a1))
      {
        OBJ_CALL(result = self->object.getOrDefault(a0, a1));
        return ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "getOrDefault", args, 2);
    }

    static PyObject *t_Properties_getProperty(t_Properties *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.getProperty(a0));
            return j2p(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "ss", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getProperty(a0, a1));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getProperty", args);
      return NULL;
    }

    static PyObject *t_Properties_hashCode(t_Properties *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Properties_isEmpty(t_Properties *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.isEmpty());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "isEmpty", args, 2);
    }

    static PyObject *t_Properties_keySet(t_Properties *self, PyObject *args)
    {
      ::java::util::Set result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.keySet());
        return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(Object));
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "keySet", args, 2);
    }

    static PyObject *t_Properties_keys(t_Properties *self, PyObject *args)
    {
      ::java::util::Enumeration result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.keys());
        return ::java::util::t_Enumeration::wrap_Object(result, ::java::lang::PY_TYPE(Object));
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "keys", args, 2);
    }

    static PyObject *t_Properties_list(t_Properties *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::io::PrintStream a0((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::PrintStream::initializeClass, &a0))
          {
            OBJ_CALL(self->object.list(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::io::PrintWriter a0((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::PrintWriter::initializeClass, &a0))
          {
            OBJ_CALL(self->object.list(a0));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "list", args);
      return NULL;
    }

    static PyObject *t_Properties_load(t_Properties *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::io::InputStream a0((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::InputStream::initializeClass, &a0))
          {
            OBJ_CALL(self->object.load(a0));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::io::Reader a0((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::Reader::initializeClass, &a0))
          {
            OBJ_CALL(self->object.load(a0));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "load", args);
      return NULL;
    }

    static PyObject *t_Properties_loadFromXML(t_Properties *self, PyObject *arg)
    {
      ::java::io::InputStream a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::io::InputStream::initializeClass, &a0))
      {
        OBJ_CALL(self->object.loadFromXML(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "loadFromXML", arg);
      return NULL;
    }

    static PyObject *t_Properties_propertyNames(t_Properties *self)
    {
      ::java::util::Enumeration result((jobject) NULL);
      OBJ_CALL(result = self->object.propertyNames());
      return ::java::util::t_Enumeration::wrap_Object(result);
    }

    static PyObject *t_Properties_put(t_Properties *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "oo", &a0, &a1))
      {
        OBJ_CALL(result = self->object.put(a0, a1));
        return ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "put", args, 2);
    }

    static PyObject *t_Properties_putAll(t_Properties *self, PyObject *args)
    {
      ::java::util::Map a0((jobject) NULL);
      PyTypeObject **p0;

      if (!parseArgs(args, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
      {
        OBJ_CALL(self->object.putAll(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "putAll", args, 2);
    }

    static PyObject *t_Properties_putIfAbsent(t_Properties *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "oo", &a0, &a1))
      {
        OBJ_CALL(result = self->object.putIfAbsent(a0, a1));
        return ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "putIfAbsent", args, 2);
    }

    static PyObject *t_Properties_remove(t_Properties *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.remove(a0));
            return ::java::lang::t_Object::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "oo", &a0, &a1))
          {
            OBJ_CALL(result = self->object.remove(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_Properties_replace(t_Properties *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "oo", &a0, &a1))
          {
            OBJ_CALL(result = self->object.replace(a0, a1));
            return ::java::lang::t_Object::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "ooo", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.replace(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }
        }
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "replace", args, 2);
    }

    static PyObject *t_Properties_save(t_Properties *self, PyObject *args)
    {
      ::java::io::OutputStream a0((jobject) NULL);
      ::java::lang::String a1((jobject) NULL);

      if (!parseArgs(args, "ks", ::java::io::OutputStream::initializeClass, &a0, &a1))
      {
        OBJ_CALL(self->object.save(a0, a1));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "save", args);
      return NULL;
    }

    static PyObject *t_Properties_setProperty(t_Properties *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::lang::String a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "ss", &a0, &a1))
      {
        OBJ_CALL(result = self->object.setProperty(a0, a1));
        return ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "setProperty", args);
      return NULL;
    }

    static PyObject *t_Properties_size(t_Properties *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "size", args, 2);
    }

    static PyObject *t_Properties_store(t_Properties *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::io::OutputStream a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);

          if (!parseArgs(args, "ks", ::java::io::OutputStream::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.store(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          ::java::io::Writer a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);

          if (!parseArgs(args, "ks", ::java::io::Writer::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.store(a0, a1));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "store", args);
      return NULL;
    }

    static PyObject *t_Properties_storeToXML(t_Properties *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::io::OutputStream a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);

          if (!parseArgs(args, "ks", ::java::io::OutputStream::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.storeToXML(a0, a1));
            Py_RETURN_NONE;
          }
        }
        break;
       case 3:
        {
          ::java::io::OutputStream a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::java::lang::String a2((jobject) NULL);

          if (!parseArgs(args, "kss", ::java::io::OutputStream::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.storeToXML(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "storeToXML", args);
      return NULL;
    }

    static PyObject *t_Properties_stringPropertyNames(t_Properties *self)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = self->object.stringPropertyNames());
      return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(String));
    }

    static PyObject *t_Properties_toString(t_Properties *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Properties_values(t_Properties *self, PyObject *args)
    {
      ::java::util::Collection result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.values());
        return ::java::util::t_Collection::wrap_Object(result, ::java::lang::PY_TYPE(Object));
      }

      return callSuper(PY_TYPE(Properties), (PyObject *) self, "values", args, 2);
    }
    static PyObject *t_Properties_get__parameters_(t_Properties *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_Properties_get__empty(t_Properties *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Locale$IsoCountryCode.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/util/Locale$IsoCountryCode.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Locale$IsoCountryCode::class$ = NULL;
    jmethodID *Locale$IsoCountryCode::mids$ = NULL;
    bool Locale$IsoCountryCode::live$ = false;
    Locale$IsoCountryCode *Locale$IsoCountryCode::PART1_ALPHA2 = NULL;
    Locale$IsoCountryCode *Locale$IsoCountryCode::PART1_ALPHA3 = NULL;
    Locale$IsoCountryCode *Locale$IsoCountryCode::PART3 = NULL;

    jclass Locale$IsoCountryCode::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Locale$IsoCountryCode");

        mids$ = new jmethodID[max_mid];
        mids$[mid_valueOf_f537b6c6d2f21e35] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/util/Locale$IsoCountryCode;");
        mids$[mid_values_b145c1aa93dfe064] = env->getStaticMethodID(cls, "values", "()[Ljava/util/Locale$IsoCountryCode;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        PART1_ALPHA2 = new Locale$IsoCountryCode(env->getStaticObjectField(cls, "PART1_ALPHA2", "Ljava/util/Locale$IsoCountryCode;"));
        PART1_ALPHA3 = new Locale$IsoCountryCode(env->getStaticObjectField(cls, "PART1_ALPHA3", "Ljava/util/Locale$IsoCountryCode;"));
        PART3 = new Locale$IsoCountryCode(env->getStaticObjectField(cls, "PART3", "Ljava/util/Locale$IsoCountryCode;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Locale$IsoCountryCode Locale$IsoCountryCode::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Locale$IsoCountryCode(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f537b6c6d2f21e35], a0.this$));
    }

    JArray< Locale$IsoCountryCode > Locale$IsoCountryCode::values()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< Locale$IsoCountryCode >(env->callStaticObjectMethod(cls, mids$[mid_values_b145c1aa93dfe064]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Locale$IsoCountryCode_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Locale$IsoCountryCode_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Locale$IsoCountryCode_of_(t_Locale$IsoCountryCode *self, PyObject *args);
    static PyObject *t_Locale$IsoCountryCode_valueOf(PyTypeObject *type, PyObject *args);
    static PyObject *t_Locale$IsoCountryCode_values(PyTypeObject *type);
    static PyObject *t_Locale$IsoCountryCode_get__parameters_(t_Locale$IsoCountryCode *self, void *data);
    static PyGetSetDef t_Locale$IsoCountryCode__fields_[] = {
      DECLARE_GET_FIELD(t_Locale$IsoCountryCode, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Locale$IsoCountryCode__methods_[] = {
      DECLARE_METHOD(t_Locale$IsoCountryCode, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Locale$IsoCountryCode, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Locale$IsoCountryCode, of_, METH_VARARGS),
      DECLARE_METHOD(t_Locale$IsoCountryCode, valueOf, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Locale$IsoCountryCode, values, METH_NOARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Locale$IsoCountryCode)[] = {
      { Py_tp_methods, t_Locale$IsoCountryCode__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Locale$IsoCountryCode__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Locale$IsoCountryCode)[] = {
      &PY_TYPE_DEF(::java::lang::Enum),
      NULL
    };

    DEFINE_TYPE(Locale$IsoCountryCode, t_Locale$IsoCountryCode, Locale$IsoCountryCode);
    PyObject *t_Locale$IsoCountryCode::wrap_Object(const Locale$IsoCountryCode& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Locale$IsoCountryCode::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Locale$IsoCountryCode *self = (t_Locale$IsoCountryCode *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Locale$IsoCountryCode::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Locale$IsoCountryCode::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Locale$IsoCountryCode *self = (t_Locale$IsoCountryCode *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Locale$IsoCountryCode::install(PyObject *module)
    {
      installType(&PY_TYPE(Locale$IsoCountryCode), &PY_TYPE_DEF(Locale$IsoCountryCode), module, "Locale$IsoCountryCode", 0);
    }

    void t_Locale$IsoCountryCode::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$IsoCountryCode), "class_", make_descriptor(Locale$IsoCountryCode::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$IsoCountryCode), "wrapfn_", make_descriptor(t_Locale$IsoCountryCode::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$IsoCountryCode), "boxfn_", make_descriptor(boxObject));
      env->getClass(Locale$IsoCountryCode::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$IsoCountryCode), "PART1_ALPHA2", make_descriptor(t_Locale$IsoCountryCode::wrap_Object(*Locale$IsoCountryCode::PART1_ALPHA2)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$IsoCountryCode), "PART1_ALPHA3", make_descriptor(t_Locale$IsoCountryCode::wrap_Object(*Locale$IsoCountryCode::PART1_ALPHA3)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Locale$IsoCountryCode), "PART3", make_descriptor(t_Locale$IsoCountryCode::wrap_Object(*Locale$IsoCountryCode::PART3)));
    }

    static PyObject *t_Locale$IsoCountryCode_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Locale$IsoCountryCode::initializeClass, 1)))
        return NULL;
      return t_Locale$IsoCountryCode::wrap_Object(Locale$IsoCountryCode(((t_Locale$IsoCountryCode *) arg)->object.this$));
    }
    static PyObject *t_Locale$IsoCountryCode_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Locale$IsoCountryCode::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Locale$IsoCountryCode_of_(t_Locale$IsoCountryCode *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Locale$IsoCountryCode_valueOf(PyTypeObject *type, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      Locale$IsoCountryCode result((jobject) NULL);

      if (!parseArgs(args, "s", &a0))
      {
        OBJ_CALL(result = ::java::util::Locale$IsoCountryCode::valueOf(a0));
        return t_Locale$IsoCountryCode::wrap_Object(result);
      }

      return callSuper(type, "valueOf", args, 2);
    }

    static PyObject *t_Locale$IsoCountryCode_values(PyTypeObject *type)
    {
      JArray< Locale$IsoCountryCode > result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Locale$IsoCountryCode::values());
      return JArray<jobject>(result.this$).wrap(t_Locale$IsoCountryCode::wrap_jobject);
    }
    static PyObject *t_Locale$IsoCountryCode_get__parameters_(t_Locale$IsoCountryCode *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
