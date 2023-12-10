#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/PythonXmlTokenBuilder.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *PythonXmlTokenBuilder::class$ = NULL;
            jmethodID *PythonXmlTokenBuilder::mids$ = NULL;
            bool PythonXmlTokenBuilder::live$ = false;

            jclass PythonXmlTokenBuilder::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/PythonXmlTokenBuilder");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_buildTokens_e5e9154f880f1aad] = env->getMethodID(cls, "buildTokens", "(ZZLjava/lang/String;Ljava/lang/String;Ljava/util/Map;ILjava/lang/String;)Ljava/util/List;");
                mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonXmlTokenBuilder::PythonXmlTokenBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            void PythonXmlTokenBuilder::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
            }

            jlong PythonXmlTokenBuilder::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
            }

            void PythonXmlTokenBuilder::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
            static PyObject *t_PythonXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonXmlTokenBuilder_init_(t_PythonXmlTokenBuilder *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonXmlTokenBuilder_finalize(t_PythonXmlTokenBuilder *self);
            static PyObject *t_PythonXmlTokenBuilder_pythonExtension(t_PythonXmlTokenBuilder *self, PyObject *args);
            static jobject JNICALL t_PythonXmlTokenBuilder_buildTokens0(JNIEnv *jenv, jobject jobj, jboolean a0, jboolean a1, jobject a2, jobject a3, jobject a4, jint a5, jobject a6);
            static void JNICALL t_PythonXmlTokenBuilder_pythonDecRef1(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonXmlTokenBuilder_get__self(t_PythonXmlTokenBuilder *self, void *data);
            static PyGetSetDef t_PythonXmlTokenBuilder__fields_[] = {
              DECLARE_GET_FIELD(t_PythonXmlTokenBuilder, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonXmlTokenBuilder__methods_[] = {
              DECLARE_METHOD(t_PythonXmlTokenBuilder, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonXmlTokenBuilder, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonXmlTokenBuilder, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonXmlTokenBuilder, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonXmlTokenBuilder)[] = {
              { Py_tp_methods, t_PythonXmlTokenBuilder__methods_ },
              { Py_tp_init, (void *) t_PythonXmlTokenBuilder_init_ },
              { Py_tp_getset, t_PythonXmlTokenBuilder__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonXmlTokenBuilder)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonXmlTokenBuilder, t_PythonXmlTokenBuilder, PythonXmlTokenBuilder);

            void t_PythonXmlTokenBuilder::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonXmlTokenBuilder), &PY_TYPE_DEF(PythonXmlTokenBuilder), module, "PythonXmlTokenBuilder", 1);
            }

            void t_PythonXmlTokenBuilder::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonXmlTokenBuilder), "class_", make_descriptor(PythonXmlTokenBuilder::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonXmlTokenBuilder), "wrapfn_", make_descriptor(t_PythonXmlTokenBuilder::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonXmlTokenBuilder), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonXmlTokenBuilder::initializeClass);
              JNINativeMethod methods[] = {
                { "buildTokens", "(ZZLjava/lang/String;Ljava/lang/String;Ljava/util/Map;ILjava/lang/String;)Ljava/util/List;", (void *) t_PythonXmlTokenBuilder_buildTokens0 },
                { "pythonDecRef", "()V", (void *) t_PythonXmlTokenBuilder_pythonDecRef1 },
              };
              env->registerNatives(cls, methods, 2);
            }

            static PyObject *t_PythonXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonXmlTokenBuilder::initializeClass, 1)))
                return NULL;
              return t_PythonXmlTokenBuilder::wrap_Object(PythonXmlTokenBuilder(((t_PythonXmlTokenBuilder *) arg)->object.this$));
            }
            static PyObject *t_PythonXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonXmlTokenBuilder::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonXmlTokenBuilder_init_(t_PythonXmlTokenBuilder *self, PyObject *args, PyObject *kwds)
            {
              PythonXmlTokenBuilder object((jobject) NULL);

              INT_CALL(object = PythonXmlTokenBuilder());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonXmlTokenBuilder_finalize(t_PythonXmlTokenBuilder *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonXmlTokenBuilder_pythonExtension(t_PythonXmlTokenBuilder *self, PyObject *args)
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

            static jobject JNICALL t_PythonXmlTokenBuilder_buildTokens0(JNIEnv *jenv, jobject jobj, jboolean a0, jboolean a1, jobject a2, jobject a3, jobject a4, jint a5, jobject a6)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonXmlTokenBuilder::mids$[PythonXmlTokenBuilder::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::util::List value((jobject) NULL);
              PyObject *o0 = (a0 ? Py_True : Py_False);
              PyObject *o1 = (a1 ? Py_True : Py_False);
              PyObject *o2 = env->fromJString((jstring) a2, 0);
              PyObject *o3 = env->fromJString((jstring) a3, 0);
              PyObject *o4 = ::java::util::t_Map::wrap_Object(::java::util::Map(a4));
              PyObject *o6 = env->fromJString((jstring) a6, 0);
              PyObject *result = PyObject_CallMethod(obj, "buildTokens", "OOOOOiO", o0, o1, o2, o3, o4, (int) a5, o6);
              Py_DECREF(o2);
              Py_DECREF(o3);
              Py_DECREF(o4);
              Py_DECREF(o6);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
              {
                throwTypeError("buildTokens", result);
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

            static void JNICALL t_PythonXmlTokenBuilder_pythonDecRef1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonXmlTokenBuilder::mids$[PythonXmlTokenBuilder::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonXmlTokenBuilder::mids$[PythonXmlTokenBuilder::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonXmlTokenBuilder_get__self(t_PythonXmlTokenBuilder *self, void *data)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/CalculusFieldMultivariateMatrixFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *CalculusFieldMultivariateMatrixFunction::class$ = NULL;
      jmethodID *CalculusFieldMultivariateMatrixFunction::mids$ = NULL;
      bool CalculusFieldMultivariateMatrixFunction::live$ = false;

      jclass CalculusFieldMultivariateMatrixFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/CalculusFieldMultivariateMatrixFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_93e380e776ff0d58] = env->getMethodID(cls, "value", "([Lorg/hipparchus/CalculusFieldElement;)[[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< JArray< ::org::hipparchus::CalculusFieldElement > > CalculusFieldMultivariateMatrixFunction::value(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
      {
        return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_value_93e380e776ff0d58], a0.this$));
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
      static PyObject *t_CalculusFieldMultivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldMultivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldMultivariateMatrixFunction_of_(t_CalculusFieldMultivariateMatrixFunction *self, PyObject *args);
      static PyObject *t_CalculusFieldMultivariateMatrixFunction_value(t_CalculusFieldMultivariateMatrixFunction *self, PyObject *arg);
      static PyObject *t_CalculusFieldMultivariateMatrixFunction_get__parameters_(t_CalculusFieldMultivariateMatrixFunction *self, void *data);
      static PyGetSetDef t_CalculusFieldMultivariateMatrixFunction__fields_[] = {
        DECLARE_GET_FIELD(t_CalculusFieldMultivariateMatrixFunction, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CalculusFieldMultivariateMatrixFunction__methods_[] = {
        DECLARE_METHOD(t_CalculusFieldMultivariateMatrixFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldMultivariateMatrixFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldMultivariateMatrixFunction, of_, METH_VARARGS),
        DECLARE_METHOD(t_CalculusFieldMultivariateMatrixFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CalculusFieldMultivariateMatrixFunction)[] = {
        { Py_tp_methods, t_CalculusFieldMultivariateMatrixFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CalculusFieldMultivariateMatrixFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CalculusFieldMultivariateMatrixFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CalculusFieldMultivariateMatrixFunction, t_CalculusFieldMultivariateMatrixFunction, CalculusFieldMultivariateMatrixFunction);
      PyObject *t_CalculusFieldMultivariateMatrixFunction::wrap_Object(const CalculusFieldMultivariateMatrixFunction& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldMultivariateMatrixFunction::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldMultivariateMatrixFunction *self = (t_CalculusFieldMultivariateMatrixFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_CalculusFieldMultivariateMatrixFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldMultivariateMatrixFunction::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldMultivariateMatrixFunction *self = (t_CalculusFieldMultivariateMatrixFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_CalculusFieldMultivariateMatrixFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(CalculusFieldMultivariateMatrixFunction), &PY_TYPE_DEF(CalculusFieldMultivariateMatrixFunction), module, "CalculusFieldMultivariateMatrixFunction", 0);
      }

      void t_CalculusFieldMultivariateMatrixFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldMultivariateMatrixFunction), "class_", make_descriptor(CalculusFieldMultivariateMatrixFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldMultivariateMatrixFunction), "wrapfn_", make_descriptor(t_CalculusFieldMultivariateMatrixFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldMultivariateMatrixFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CalculusFieldMultivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CalculusFieldMultivariateMatrixFunction::initializeClass, 1)))
          return NULL;
        return t_CalculusFieldMultivariateMatrixFunction::wrap_Object(CalculusFieldMultivariateMatrixFunction(((t_CalculusFieldMultivariateMatrixFunction *) arg)->object.this$));
      }
      static PyObject *t_CalculusFieldMultivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CalculusFieldMultivariateMatrixFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CalculusFieldMultivariateMatrixFunction_of_(t_CalculusFieldMultivariateMatrixFunction *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_CalculusFieldMultivariateMatrixFunction_value(t_CalculusFieldMultivariateMatrixFunction *self, PyObject *arg)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

        if (!parseArg(arg, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
      static PyObject *t_CalculusFieldMultivariateMatrixFunction_get__parameters_(t_CalculusFieldMultivariateMatrixFunction *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/Laas2015.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "java/lang/Class.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *Laas2015::class$ = NULL;
              jmethodID *Laas2015::mids$ = NULL;
              bool Laas2015::live$ = false;
              jdouble Laas2015::DEFAULT_SCALING_THRESHOLD = (jdouble) 0;

              jclass Laas2015::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/Laas2015");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_init$_75c2da74a5a59fda] = env->getMethodID(cls, "<init>", "(DI)V");
                  mids$[mid_compute_184c2f4ec5889c74] = env->getMethodID(cls, "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_0ed38e7bbee7fafc] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_getType_5d7ecb27bb5e3bc3] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  DEFAULT_SCALING_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_SCALING_THRESHOLD");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Laas2015::Laas2015() : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              Laas2015::Laas2015(jdouble a0, jint a1) : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod(env->newObject(initializeClass, &mids$, mid_init$_75c2da74a5a59fda, a0, a1)) {}

              ::org::orekit::ssa::metrics::ProbabilityOfCollision Laas2015::compute(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_184c2f4ec5889c74], a0, a1, a2, a3, a4));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision Laas2015::compute(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_0ed38e7bbee7fafc], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
              }

              ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType Laas2015::getType() const
              {
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType(env->callObjectMethod(this$, mids$[mid_getType_5d7ecb27bb5e3bc3]));
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
              static PyObject *t_Laas2015_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Laas2015_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Laas2015_init_(t_Laas2015 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Laas2015_compute(t_Laas2015 *self, PyObject *args);
              static PyObject *t_Laas2015_getType(t_Laas2015 *self, PyObject *args);
              static PyObject *t_Laas2015_get__type(t_Laas2015 *self, void *data);
              static PyGetSetDef t_Laas2015__fields_[] = {
                DECLARE_GET_FIELD(t_Laas2015, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Laas2015__methods_[] = {
                DECLARE_METHOD(t_Laas2015, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Laas2015, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Laas2015, compute, METH_VARARGS),
                DECLARE_METHOD(t_Laas2015, getType, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Laas2015)[] = {
                { Py_tp_methods, t_Laas2015__methods_ },
                { Py_tp_init, (void *) t_Laas2015_init_ },
                { Py_tp_getset, t_Laas2015__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Laas2015)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod),
                NULL
              };

              DEFINE_TYPE(Laas2015, t_Laas2015, Laas2015);

              void t_Laas2015::install(PyObject *module)
              {
                installType(&PY_TYPE(Laas2015), &PY_TYPE_DEF(Laas2015), module, "Laas2015", 0);
              }

              void t_Laas2015::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Laas2015), "class_", make_descriptor(Laas2015::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Laas2015), "wrapfn_", make_descriptor(t_Laas2015::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Laas2015), "boxfn_", make_descriptor(boxObject));
                env->getClass(Laas2015::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(Laas2015), "DEFAULT_SCALING_THRESHOLD", make_descriptor(Laas2015::DEFAULT_SCALING_THRESHOLD));
              }

              static PyObject *t_Laas2015_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Laas2015::initializeClass, 1)))
                  return NULL;
                return t_Laas2015::wrap_Object(Laas2015(((t_Laas2015 *) arg)->object.this$));
              }
              static PyObject *t_Laas2015_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Laas2015::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Laas2015_init_(t_Laas2015 *self, PyObject *args, PyObject *kwds)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    Laas2015 object((jobject) NULL);

                    INT_CALL(object = Laas2015());
                    self->object = object;
                    break;
                  }
                 case 2:
                  {
                    jdouble a0;
                    jint a1;
                    Laas2015 object((jobject) NULL);

                    if (!parseArgs(args, "DI", &a0, &a1))
                    {
                      INT_CALL(object = Laas2015(a0, a1));
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

              static PyObject *t_Laas2015_compute(t_Laas2015 *self, PyObject *args)
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

                return callSuper(PY_TYPE(Laas2015), (PyObject *) self, "compute", args, 2);
              }

              static PyObject *t_Laas2015_getType(t_Laas2015 *self, PyObject *args)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getType());
                  return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(result);
                }

                return callSuper(PY_TYPE(Laas2015), (PyObject *) self, "getType", args, 2);
              }

              static PyObject *t_Laas2015_get__type(t_Laas2015 *self, void *data)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType value((jobject) NULL);
                OBJ_CALL(value = self->object.getType());
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(value);
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
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/PowellOptimizer.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            ::java::lang::Class *PowellOptimizer::class$ = NULL;
            jmethodID *PowellOptimizer::mids$ = NULL;
            bool PowellOptimizer::live$ = false;

            jclass PowellOptimizer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/noderiv/PowellOptimizer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
                mids$[mid_init$_511a7b4994f0ac32] = env->getMethodID(cls, "<init>", "(DDLorg/hipparchus/optim/ConvergenceChecker;)V");
                mids$[mid_init$_b0a935b68e41d65a] = env->getMethodID(cls, "<init>", "(DDDD)V");
                mids$[mid_init$_491b73d0199013f8] = env->getMethodID(cls, "<init>", "(DDDDLorg/hipparchus/optim/ConvergenceChecker;)V");
                mids$[mid_doOptimize_4ae915e35f441d39] = env->getMethodID(cls, "doOptimize", "()Lorg/hipparchus/optim/PointValuePair;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PowellOptimizer::PowellOptimizer(jdouble a0, jdouble a1) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

            PowellOptimizer::PowellOptimizer(jdouble a0, jdouble a1, const ::org::hipparchus::optim::ConvergenceChecker & a2) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_511a7b4994f0ac32, a0, a1, a2.this$)) {}

            PowellOptimizer::PowellOptimizer(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_b0a935b68e41d65a, a0, a1, a2, a3)) {}

            PowellOptimizer::PowellOptimizer(jdouble a0, jdouble a1, jdouble a2, jdouble a3, const ::org::hipparchus::optim::ConvergenceChecker & a4) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_491b73d0199013f8, a0, a1, a2, a3, a4.this$)) {}
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
          namespace noderiv {
            static PyObject *t_PowellOptimizer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PowellOptimizer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PowellOptimizer_of_(t_PowellOptimizer *self, PyObject *args);
            static int t_PowellOptimizer_init_(t_PowellOptimizer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PowellOptimizer_get__parameters_(t_PowellOptimizer *self, void *data);
            static PyGetSetDef t_PowellOptimizer__fields_[] = {
              DECLARE_GET_FIELD(t_PowellOptimizer, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PowellOptimizer__methods_[] = {
              DECLARE_METHOD(t_PowellOptimizer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PowellOptimizer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PowellOptimizer, of_, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PowellOptimizer)[] = {
              { Py_tp_methods, t_PowellOptimizer__methods_ },
              { Py_tp_init, (void *) t_PowellOptimizer_init_ },
              { Py_tp_getset, t_PowellOptimizer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PowellOptimizer)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer),
              NULL
            };

            DEFINE_TYPE(PowellOptimizer, t_PowellOptimizer, PowellOptimizer);
            PyObject *t_PowellOptimizer::wrap_Object(const PowellOptimizer& object, PyTypeObject *p0)
            {
              PyObject *obj = t_PowellOptimizer::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PowellOptimizer *self = (t_PowellOptimizer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_PowellOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_PowellOptimizer::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PowellOptimizer *self = (t_PowellOptimizer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_PowellOptimizer::install(PyObject *module)
            {
              installType(&PY_TYPE(PowellOptimizer), &PY_TYPE_DEF(PowellOptimizer), module, "PowellOptimizer", 0);
            }

            void t_PowellOptimizer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PowellOptimizer), "class_", make_descriptor(PowellOptimizer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PowellOptimizer), "wrapfn_", make_descriptor(t_PowellOptimizer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PowellOptimizer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_PowellOptimizer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PowellOptimizer::initializeClass, 1)))
                return NULL;
              return t_PowellOptimizer::wrap_Object(PowellOptimizer(((t_PowellOptimizer *) arg)->object.this$));
            }
            static PyObject *t_PowellOptimizer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PowellOptimizer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PowellOptimizer_of_(t_PowellOptimizer *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_PowellOptimizer_init_(t_PowellOptimizer *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  jdouble a0;
                  jdouble a1;
                  PowellOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "DD", &a0, &a1))
                  {
                    INT_CALL(object = PowellOptimizer(a0, a1));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
                    break;
                  }
                }
                goto err;
               case 3:
                {
                  jdouble a0;
                  jdouble a1;
                  ::org::hipparchus::optim::ConvergenceChecker a2((jobject) NULL);
                  PyTypeObject **p2;
                  PowellOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "DDK", ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
                  {
                    INT_CALL(object = PowellOptimizer(a0, a1, a2));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
                    break;
                  }
                }
                goto err;
               case 4:
                {
                  jdouble a0;
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  PowellOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
                  {
                    INT_CALL(object = PowellOptimizer(a0, a1, a2, a3));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
                    break;
                  }
                }
                goto err;
               case 5:
                {
                  jdouble a0;
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  ::org::hipparchus::optim::ConvergenceChecker a4((jobject) NULL);
                  PyTypeObject **p4;
                  PowellOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "DDDDK", ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
                  {
                    INT_CALL(object = PowellOptimizer(a0, a1, a2, a3, a4));
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
            static PyObject *t_PowellOptimizer_get__parameters_(t_PowellOptimizer *self, void *data)
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
#include "org/orekit/forces/gravity/potential/EGMFormatReader.h"
#include "java/text/ParseException.h"
#include "java/io/IOException.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider.h"
#include "java/io/InputStream.h"
#include "org/orekit/errors/OrekitException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *EGMFormatReader::class$ = NULL;
          jmethodID *EGMFormatReader::mids$ = NULL;
          bool EGMFormatReader::live$ = false;

          jclass EGMFormatReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/EGMFormatReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d6df10f4e35ef1e8] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Z)V");
              mids$[mid_init$_718db1cacd303261] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;ZZ)V");
              mids$[mid_getProvider_fc0a96c558346426] = env->getMethodID(cls, "getProvider", "(ZII)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider;");
              mids$[mid_loadData_1815f85c118161ad] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          EGMFormatReader::EGMFormatReader(const ::java::lang::String & a0, jboolean a1) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_d6df10f4e35ef1e8, a0.this$, a1)) {}

          EGMFormatReader::EGMFormatReader(const ::java::lang::String & a0, jboolean a1, jboolean a2) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_718db1cacd303261, a0.this$, a1, a2)) {}

          ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider EGMFormatReader::getProvider(jboolean a0, jint a1, jint a2) const
          {
            return ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getProvider_fc0a96c558346426], a0, a1, a2));
          }

          void EGMFormatReader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_1815f85c118161ad], a0.this$, a1.this$);
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
          static PyObject *t_EGMFormatReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EGMFormatReader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_EGMFormatReader_init_(t_EGMFormatReader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_EGMFormatReader_getProvider(t_EGMFormatReader *self, PyObject *args);
          static PyObject *t_EGMFormatReader_loadData(t_EGMFormatReader *self, PyObject *args);

          static PyMethodDef t_EGMFormatReader__methods_[] = {
            DECLARE_METHOD(t_EGMFormatReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EGMFormatReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EGMFormatReader, getProvider, METH_VARARGS),
            DECLARE_METHOD(t_EGMFormatReader, loadData, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(EGMFormatReader)[] = {
            { Py_tp_methods, t_EGMFormatReader__methods_ },
            { Py_tp_init, (void *) t_EGMFormatReader_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(EGMFormatReader)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::PotentialCoefficientsReader),
            NULL
          };

          DEFINE_TYPE(EGMFormatReader, t_EGMFormatReader, EGMFormatReader);

          void t_EGMFormatReader::install(PyObject *module)
          {
            installType(&PY_TYPE(EGMFormatReader), &PY_TYPE_DEF(EGMFormatReader), module, "EGMFormatReader", 0);
          }

          void t_EGMFormatReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(EGMFormatReader), "class_", make_descriptor(EGMFormatReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EGMFormatReader), "wrapfn_", make_descriptor(t_EGMFormatReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EGMFormatReader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_EGMFormatReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, EGMFormatReader::initializeClass, 1)))
              return NULL;
            return t_EGMFormatReader::wrap_Object(EGMFormatReader(((t_EGMFormatReader *) arg)->object.this$));
          }
          static PyObject *t_EGMFormatReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, EGMFormatReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_EGMFormatReader_init_(t_EGMFormatReader *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                jboolean a1;
                EGMFormatReader object((jobject) NULL);

                if (!parseArgs(args, "sZ", &a0, &a1))
                {
                  INT_CALL(object = EGMFormatReader(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                jboolean a1;
                jboolean a2;
                EGMFormatReader object((jobject) NULL);

                if (!parseArgs(args, "sZZ", &a0, &a1, &a2))
                {
                  INT_CALL(object = EGMFormatReader(a0, a1, a2));
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

          static PyObject *t_EGMFormatReader_getProvider(t_EGMFormatReader *self, PyObject *args)
          {
            jboolean a0;
            jint a1;
            jint a2;
            ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "ZII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getProvider(a0, a1, a2));
              return ::org::orekit::forces::gravity::potential::t_RawSphericalHarmonicsProvider::wrap_Object(result);
            }

            return callSuper(PY_TYPE(EGMFormatReader), (PyObject *) self, "getProvider", args, 2);
          }

          static PyObject *t_EGMFormatReader_loadData(t_EGMFormatReader *self, PyObject *args)
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(EGMFormatReader), (PyObject *) self, "loadData", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonTimeShiftable.h"
#include "org/orekit/time/TimeShiftable.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonTimeShiftable::class$ = NULL;
      jmethodID *PythonTimeShiftable::mids$ = NULL;
      bool PythonTimeShiftable::live$ = false;

      jclass PythonTimeShiftable::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonTimeShiftable");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_shiftedBy_f3fc7729d023c410] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/time/TimeShiftable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTimeShiftable::PythonTimeShiftable() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonTimeShiftable::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonTimeShiftable::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonTimeShiftable::pythonExtension(jlong a0) const
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
      static PyObject *t_PythonTimeShiftable_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeShiftable_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeShiftable_of_(t_PythonTimeShiftable *self, PyObject *args);
      static int t_PythonTimeShiftable_init_(t_PythonTimeShiftable *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTimeShiftable_finalize(t_PythonTimeShiftable *self);
      static PyObject *t_PythonTimeShiftable_pythonExtension(t_PythonTimeShiftable *self, PyObject *args);
      static void JNICALL t_PythonTimeShiftable_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeShiftable_shiftedBy1(JNIEnv *jenv, jobject jobj, jdouble a0);
      static PyObject *t_PythonTimeShiftable_get__self(t_PythonTimeShiftable *self, void *data);
      static PyObject *t_PythonTimeShiftable_get__parameters_(t_PythonTimeShiftable *self, void *data);
      static PyGetSetDef t_PythonTimeShiftable__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTimeShiftable, self),
        DECLARE_GET_FIELD(t_PythonTimeShiftable, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTimeShiftable__methods_[] = {
        DECLARE_METHOD(t_PythonTimeShiftable, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeShiftable, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeShiftable, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonTimeShiftable, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTimeShiftable, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTimeShiftable)[] = {
        { Py_tp_methods, t_PythonTimeShiftable__methods_ },
        { Py_tp_init, (void *) t_PythonTimeShiftable_init_ },
        { Py_tp_getset, t_PythonTimeShiftable__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTimeShiftable)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTimeShiftable, t_PythonTimeShiftable, PythonTimeShiftable);
      PyObject *t_PythonTimeShiftable::wrap_Object(const PythonTimeShiftable& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonTimeShiftable::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonTimeShiftable *self = (t_PythonTimeShiftable *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonTimeShiftable::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonTimeShiftable::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonTimeShiftable *self = (t_PythonTimeShiftable *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonTimeShiftable::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTimeShiftable), &PY_TYPE_DEF(PythonTimeShiftable), module, "PythonTimeShiftable", 1);
      }

      void t_PythonTimeShiftable::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeShiftable), "class_", make_descriptor(PythonTimeShiftable::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeShiftable), "wrapfn_", make_descriptor(t_PythonTimeShiftable::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeShiftable), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTimeShiftable::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonTimeShiftable_pythonDecRef0 },
          { "shiftedBy", "(D)Lorg/orekit/time/TimeShiftable;", (void *) t_PythonTimeShiftable_shiftedBy1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonTimeShiftable_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTimeShiftable::initializeClass, 1)))
          return NULL;
        return t_PythonTimeShiftable::wrap_Object(PythonTimeShiftable(((t_PythonTimeShiftable *) arg)->object.this$));
      }
      static PyObject *t_PythonTimeShiftable_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTimeShiftable::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonTimeShiftable_of_(t_PythonTimeShiftable *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonTimeShiftable_init_(t_PythonTimeShiftable *self, PyObject *args, PyObject *kwds)
      {
        PythonTimeShiftable object((jobject) NULL);

        INT_CALL(object = PythonTimeShiftable());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTimeShiftable_finalize(t_PythonTimeShiftable *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTimeShiftable_pythonExtension(t_PythonTimeShiftable *self, PyObject *args)
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

      static void JNICALL t_PythonTimeShiftable_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeShiftable::mids$[PythonTimeShiftable::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTimeShiftable::mids$[PythonTimeShiftable::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonTimeShiftable_shiftedBy1(JNIEnv *jenv, jobject jobj, jdouble a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeShiftable::mids$[PythonTimeShiftable::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TimeShiftable value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "shiftedBy", "d", (double) a0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TimeShiftable::initializeClass, &value))
        {
          throwTypeError("shiftedBy", result);
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

      static PyObject *t_PythonTimeShiftable_get__self(t_PythonTimeShiftable *self, void *data)
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
      static PyObject *t_PythonTimeShiftable_get__parameters_(t_PythonTimeShiftable *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRDConfiguration$MeteorologicalConfiguration.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration$MeteorologicalConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration$MeteorologicalConfiguration::mids$ = NULL;
        bool CRDConfiguration$MeteorologicalConfiguration::live$ = false;

        jclass CRDConfiguration$MeteorologicalConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration$MeteorologicalConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getHumiSensorManufacturer_11b109bd155ca898] = env->getMethodID(cls, "getHumiSensorManufacturer", "()Ljava/lang/String;");
            mids$[mid_getHumiSensorModel_11b109bd155ca898] = env->getMethodID(cls, "getHumiSensorModel", "()Ljava/lang/String;");
            mids$[mid_getHumiSensorSerialNumber_11b109bd155ca898] = env->getMethodID(cls, "getHumiSensorSerialNumber", "()Ljava/lang/String;");
            mids$[mid_getMeteorologicalId_11b109bd155ca898] = env->getMethodID(cls, "getMeteorologicalId", "()Ljava/lang/String;");
            mids$[mid_getPressSensorManufacturer_11b109bd155ca898] = env->getMethodID(cls, "getPressSensorManufacturer", "()Ljava/lang/String;");
            mids$[mid_getPressSensorModel_11b109bd155ca898] = env->getMethodID(cls, "getPressSensorModel", "()Ljava/lang/String;");
            mids$[mid_getPressSensorSerialNumber_11b109bd155ca898] = env->getMethodID(cls, "getPressSensorSerialNumber", "()Ljava/lang/String;");
            mids$[mid_getTempSensorManufacturer_11b109bd155ca898] = env->getMethodID(cls, "getTempSensorManufacturer", "()Ljava/lang/String;");
            mids$[mid_getTempSensorModel_11b109bd155ca898] = env->getMethodID(cls, "getTempSensorModel", "()Ljava/lang/String;");
            mids$[mid_getTempSensorSerialNumber_11b109bd155ca898] = env->getMethodID(cls, "getTempSensorSerialNumber", "()Ljava/lang/String;");
            mids$[mid_setHumiSensorManufacturer_d0bc48d5b00dc40c] = env->getMethodID(cls, "setHumiSensorManufacturer", "(Ljava/lang/String;)V");
            mids$[mid_setHumiSensorModel_d0bc48d5b00dc40c] = env->getMethodID(cls, "setHumiSensorModel", "(Ljava/lang/String;)V");
            mids$[mid_setHumiSensorSerialNumber_d0bc48d5b00dc40c] = env->getMethodID(cls, "setHumiSensorSerialNumber", "(Ljava/lang/String;)V");
            mids$[mid_setMeteorologicalId_d0bc48d5b00dc40c] = env->getMethodID(cls, "setMeteorologicalId", "(Ljava/lang/String;)V");
            mids$[mid_setPressSensorManufacturer_d0bc48d5b00dc40c] = env->getMethodID(cls, "setPressSensorManufacturer", "(Ljava/lang/String;)V");
            mids$[mid_setPressSensorModel_d0bc48d5b00dc40c] = env->getMethodID(cls, "setPressSensorModel", "(Ljava/lang/String;)V");
            mids$[mid_setPressSensorSerialNumber_d0bc48d5b00dc40c] = env->getMethodID(cls, "setPressSensorSerialNumber", "(Ljava/lang/String;)V");
            mids$[mid_setTempSensorManufacturer_d0bc48d5b00dc40c] = env->getMethodID(cls, "setTempSensorManufacturer", "(Ljava/lang/String;)V");
            mids$[mid_setTempSensorModel_d0bc48d5b00dc40c] = env->getMethodID(cls, "setTempSensorModel", "(Ljava/lang/String;)V");
            mids$[mid_setTempSensorSerialNumber_d0bc48d5b00dc40c] = env->getMethodID(cls, "setTempSensorSerialNumber", "(Ljava/lang/String;)V");
            mids$[mid_toCrdString_11b109bd155ca898] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration$MeteorologicalConfiguration::CRDConfiguration$MeteorologicalConfiguration() : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getHumiSensorManufacturer() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getHumiSensorManufacturer_11b109bd155ca898]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getHumiSensorModel() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getHumiSensorModel_11b109bd155ca898]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getHumiSensorSerialNumber() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getHumiSensorSerialNumber_11b109bd155ca898]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getMeteorologicalId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMeteorologicalId_11b109bd155ca898]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getPressSensorManufacturer() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPressSensorManufacturer_11b109bd155ca898]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getPressSensorModel() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPressSensorModel_11b109bd155ca898]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getPressSensorSerialNumber() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPressSensorSerialNumber_11b109bd155ca898]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getTempSensorManufacturer() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTempSensorManufacturer_11b109bd155ca898]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getTempSensorModel() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTempSensorModel_11b109bd155ca898]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::getTempSensorSerialNumber() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTempSensorSerialNumber_11b109bd155ca898]));
        }

        void CRDConfiguration$MeteorologicalConfiguration::setHumiSensorManufacturer(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setHumiSensorManufacturer_d0bc48d5b00dc40c], a0.this$);
        }

        void CRDConfiguration$MeteorologicalConfiguration::setHumiSensorModel(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setHumiSensorModel_d0bc48d5b00dc40c], a0.this$);
        }

        void CRDConfiguration$MeteorologicalConfiguration::setHumiSensorSerialNumber(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setHumiSensorSerialNumber_d0bc48d5b00dc40c], a0.this$);
        }

        void CRDConfiguration$MeteorologicalConfiguration::setMeteorologicalId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMeteorologicalId_d0bc48d5b00dc40c], a0.this$);
        }

        void CRDConfiguration$MeteorologicalConfiguration::setPressSensorManufacturer(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPressSensorManufacturer_d0bc48d5b00dc40c], a0.this$);
        }

        void CRDConfiguration$MeteorologicalConfiguration::setPressSensorModel(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPressSensorModel_d0bc48d5b00dc40c], a0.this$);
        }

        void CRDConfiguration$MeteorologicalConfiguration::setPressSensorSerialNumber(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPressSensorSerialNumber_d0bc48d5b00dc40c], a0.this$);
        }

        void CRDConfiguration$MeteorologicalConfiguration::setTempSensorManufacturer(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTempSensorManufacturer_d0bc48d5b00dc40c], a0.this$);
        }

        void CRDConfiguration$MeteorologicalConfiguration::setTempSensorModel(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTempSensorModel_d0bc48d5b00dc40c], a0.this$);
        }

        void CRDConfiguration$MeteorologicalConfiguration::setTempSensorSerialNumber(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTempSensorSerialNumber_d0bc48d5b00dc40c], a0.this$);
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_11b109bd155ca898]));
        }

        ::java::lang::String CRDConfiguration$MeteorologicalConfiguration::toString() const
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
  namespace orekit {
    namespace files {
      namespace ilrs {
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration$MeteorologicalConfiguration_init_(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getHumiSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getHumiSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getHumiSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getMeteorologicalId(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getPressSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getPressSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getPressSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getTempSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getTempSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getTempSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setHumiSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setHumiSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setHumiSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setMeteorologicalId(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setPressSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setPressSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setPressSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setTempSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setTempSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setTempSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_toCrdString(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_toString(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__humiSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__humiSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__humiSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__humiSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__humiSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__humiSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__meteorologicalId(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__meteorologicalId(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__pressSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__pressSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__pressSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__pressSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__pressSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__pressSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__tempSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__tempSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__tempSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__tempSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__tempSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data);
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__tempSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data);
        static PyGetSetDef t_CRDConfiguration$MeteorologicalConfiguration__fields_[] = {
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, humiSensorManufacturer),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, humiSensorModel),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, humiSensorSerialNumber),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, meteorologicalId),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, pressSensorManufacturer),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, pressSensorModel),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, pressSensorSerialNumber),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, tempSensorManufacturer),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, tempSensorModel),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$MeteorologicalConfiguration, tempSensorSerialNumber),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration$MeteorologicalConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getHumiSensorManufacturer, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getHumiSensorModel, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getHumiSensorSerialNumber, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getMeteorologicalId, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getPressSensorManufacturer, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getPressSensorModel, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getPressSensorSerialNumber, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getTempSensorManufacturer, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getTempSensorModel, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, getTempSensorSerialNumber, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setHumiSensorManufacturer, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setHumiSensorModel, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setHumiSensorSerialNumber, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setMeteorologicalId, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setPressSensorManufacturer, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setPressSensorModel, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setPressSensorSerialNumber, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setTempSensorManufacturer, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setTempSensorModel, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, setTempSensorSerialNumber, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$MeteorologicalConfiguration, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration$MeteorologicalConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration$MeteorologicalConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration$MeteorologicalConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration$MeteorologicalConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration$MeteorologicalConfiguration)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration$MeteorologicalConfiguration, t_CRDConfiguration$MeteorologicalConfiguration, CRDConfiguration$MeteorologicalConfiguration);

        void t_CRDConfiguration$MeteorologicalConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration$MeteorologicalConfiguration), &PY_TYPE_DEF(CRDConfiguration$MeteorologicalConfiguration), module, "CRDConfiguration$MeteorologicalConfiguration", 0);
        }

        void t_CRDConfiguration$MeteorologicalConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$MeteorologicalConfiguration), "class_", make_descriptor(CRDConfiguration$MeteorologicalConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$MeteorologicalConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration$MeteorologicalConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$MeteorologicalConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration$MeteorologicalConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration$MeteorologicalConfiguration::wrap_Object(CRDConfiguration$MeteorologicalConfiguration(((t_CRDConfiguration$MeteorologicalConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration$MeteorologicalConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration$MeteorologicalConfiguration_init_(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration$MeteorologicalConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration$MeteorologicalConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getHumiSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getHumiSensorManufacturer());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getHumiSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getHumiSensorModel());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getHumiSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getHumiSensorSerialNumber());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getMeteorologicalId(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getMeteorologicalId());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getPressSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getPressSensorManufacturer());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getPressSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getPressSensorModel());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getPressSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getPressSensorSerialNumber());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getTempSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getTempSensorManufacturer());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getTempSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getTempSensorModel());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_getTempSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getTempSensorSerialNumber());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setHumiSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setHumiSensorManufacturer(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setHumiSensorManufacturer", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setHumiSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setHumiSensorModel(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setHumiSensorModel", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setHumiSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setHumiSensorSerialNumber(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setHumiSensorSerialNumber", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setMeteorologicalId(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setMeteorologicalId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMeteorologicalId", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setPressSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setPressSensorManufacturer(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPressSensorManufacturer", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setPressSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setPressSensorModel(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPressSensorModel", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setPressSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setPressSensorSerialNumber(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPressSensorSerialNumber", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setTempSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setTempSensorManufacturer(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTempSensorManufacturer", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setTempSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setTempSensorModel(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTempSensorModel", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_setTempSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setTempSensorSerialNumber(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTempSensorSerialNumber", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_toCrdString(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$MeteorologicalConfiguration), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_toString(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$MeteorologicalConfiguration), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__humiSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getHumiSensorManufacturer());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__humiSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setHumiSensorManufacturer(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "humiSensorManufacturer", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__humiSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getHumiSensorModel());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__humiSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setHumiSensorModel(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "humiSensorModel", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__humiSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getHumiSensorSerialNumber());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__humiSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setHumiSensorSerialNumber(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "humiSensorSerialNumber", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__meteorologicalId(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getMeteorologicalId());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__meteorologicalId(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setMeteorologicalId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "meteorologicalId", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__pressSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getPressSensorManufacturer());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__pressSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setPressSensorManufacturer(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "pressSensorManufacturer", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__pressSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getPressSensorModel());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__pressSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setPressSensorModel(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "pressSensorModel", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__pressSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getPressSensorSerialNumber());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__pressSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setPressSensorSerialNumber(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "pressSensorSerialNumber", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__tempSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getTempSensorManufacturer());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__tempSensorManufacturer(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setTempSensorManufacturer(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "tempSensorManufacturer", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__tempSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getTempSensorModel());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__tempSensorModel(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setTempSensorModel(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "tempSensorModel", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$MeteorologicalConfiguration_get__tempSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getTempSensorSerialNumber());
          return j2p(value);
        }
        static int t_CRDConfiguration$MeteorologicalConfiguration_set__tempSensorSerialNumber(t_CRDConfiguration$MeteorologicalConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setTempSensorSerialNumber(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "tempSensorSerialNumber", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/ParameterFunction.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ParameterFunction::class$ = NULL;
      jmethodID *ParameterFunction::mids$ = NULL;
      bool ParameterFunction::live$ = false;

      jclass ParameterFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ParameterFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_68971d186049f4f1] = env->getMethodID(cls, "value", "(Lorg/orekit/utils/ParameterDriver;Lorg/orekit/time/AbsoluteDate;)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble ParameterFunction::value(const ::org::orekit::utils::ParameterDriver & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_68971d186049f4f1], a0.this$, a1.this$);
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
      static PyObject *t_ParameterFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterFunction_value(t_ParameterFunction *self, PyObject *args);

      static PyMethodDef t_ParameterFunction__methods_[] = {
        DECLARE_METHOD(t_ParameterFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterFunction, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ParameterFunction)[] = {
        { Py_tp_methods, t_ParameterFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ParameterFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ParameterFunction, t_ParameterFunction, ParameterFunction);

      void t_ParameterFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(ParameterFunction), &PY_TYPE_DEF(ParameterFunction), module, "ParameterFunction", 0);
      }

      void t_ParameterFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterFunction), "class_", make_descriptor(ParameterFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterFunction), "wrapfn_", make_descriptor(t_ParameterFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ParameterFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ParameterFunction::initializeClass, 1)))
          return NULL;
        return t_ParameterFunction::wrap_Object(ParameterFunction(((t_ParameterFunction *) arg)->object.this$));
      }
      static PyObject *t_ParameterFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ParameterFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ParameterFunction_value(t_ParameterFunction *self, PyObject *args)
      {
        ::org::orekit::utils::ParameterDriver a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", ::org::orekit::utils::ParameterDriver::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/data/JB2008SpaceEnvironmentData.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/models/earth/atmosphere/JB2008InputParameters.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
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
                mids$[mid_init$_6a2001eff0605f71] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
                mids$[mid_init$_d48a82716818091c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/data/DataSource;)V");
                mids$[mid_init$_f59dcd76f648116b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/data/DataSource;Lorg/orekit/time/TimeScale;)V");
                mids$[mid_init$_f3b8e7d9e7dfe4ec] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;)V");
                mids$[mid_getDSTDTC_bf1d7732f1acb697] = env->getMethodID(cls, "getDSTDTC", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getF10_bf1d7732f1acb697] = env->getMethodID(cls, "getF10", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getF10B_bf1d7732f1acb697] = env->getMethodID(cls, "getF10B", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getMaxDate_85703d13e302437e] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getMinDate_85703d13e302437e] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getS10_bf1d7732f1acb697] = env->getMethodID(cls, "getS10", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getS10B_bf1d7732f1acb697] = env->getMethodID(cls, "getS10B", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getXM10_bf1d7732f1acb697] = env->getMethodID(cls, "getXM10", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getXM10B_bf1d7732f1acb697] = env->getMethodID(cls, "getXM10B", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getY10_bf1d7732f1acb697] = env->getMethodID(cls, "getY10", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getY10B_bf1d7732f1acb697] = env->getMethodID(cls, "getY10B", "(Lorg/orekit/time/AbsoluteDate;)D");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                DEFAULT_SUPPORTED_NAMES_DTC = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUPPORTED_NAMES_DTC", "Ljava/lang/String;"));
                DEFAULT_SUPPORTED_NAMES_SOLFSMY = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUPPORTED_NAMES_SOLFSMY", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            JB2008SpaceEnvironmentData::JB2008SpaceEnvironmentData(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6a2001eff0605f71, a0.this$, a1.this$)) {}

            JB2008SpaceEnvironmentData::JB2008SpaceEnvironmentData(const ::org::orekit::data::DataSource & a0, const ::org::orekit::data::DataSource & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d48a82716818091c, a0.this$, a1.this$)) {}

            JB2008SpaceEnvironmentData::JB2008SpaceEnvironmentData(const ::org::orekit::data::DataSource & a0, const ::org::orekit::data::DataSource & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f59dcd76f648116b, a0.this$, a1.this$, a2.this$)) {}

            JB2008SpaceEnvironmentData::JB2008SpaceEnvironmentData(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::data::DataProvidersManager & a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f3b8e7d9e7dfe4ec, a0.this$, a1.this$, a2.this$, a3.this$)) {}

            jdouble JB2008SpaceEnvironmentData::getDSTDTC(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDSTDTC_bf1d7732f1acb697], a0.this$);
            }

            jdouble JB2008SpaceEnvironmentData::getF10(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getF10_bf1d7732f1acb697], a0.this$);
            }

            jdouble JB2008SpaceEnvironmentData::getF10B(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getF10B_bf1d7732f1acb697], a0.this$);
            }

            ::org::orekit::time::AbsoluteDate JB2008SpaceEnvironmentData::getMaxDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_85703d13e302437e]));
            }

            ::org::orekit::time::AbsoluteDate JB2008SpaceEnvironmentData::getMinDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_85703d13e302437e]));
            }

            jdouble JB2008SpaceEnvironmentData::getS10(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getS10_bf1d7732f1acb697], a0.this$);
            }

            jdouble JB2008SpaceEnvironmentData::getS10B(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getS10B_bf1d7732f1acb697], a0.this$);
            }

            jdouble JB2008SpaceEnvironmentData::getXM10(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXM10_bf1d7732f1acb697], a0.this$);
            }

            jdouble JB2008SpaceEnvironmentData::getXM10B(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXM10B_bf1d7732f1acb697], a0.this$);
            }

            jdouble JB2008SpaceEnvironmentData::getY10(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getY10_bf1d7732f1acb697], a0.this$);
            }

            jdouble JB2008SpaceEnvironmentData::getY10B(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getY10B_bf1d7732f1acb697], a0.this$);
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
#include "org/orekit/propagation/semianalytical/dsst/forces/PythonDSSTForceModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *PythonDSSTForceModel::class$ = NULL;
            jmethodID *PythonDSSTForceModel::mids$ = NULL;
            bool PythonDSSTForceModel::live$ = false;

            jclass PythonDSSTForceModel::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/PythonDSSTForceModel");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getMeanElementRate_5dbca2d049b16b82] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)[D");
                mids$[mid_getMeanElementRate_c0df8831049775b0] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_cd6a8183d9477030] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/propagation/PropagationType;[D)Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_c7d75d32fd67f743] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/propagation/PropagationType;[Lorg/hipparchus/CalculusFieldElement;)Ljava/util/List;");
                mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_registerAttitudeProvider_3cff7c75ea06698c] = env->getMethodID(cls, "registerAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
                mids$[mid_updateShortPeriodTerms_a9748e634dd1c969] = env->getMethodID(cls, "updateShortPeriodTerms", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/orekit/propagation/FieldSpacecraftState;)V");
                mids$[mid_updateShortPeriodTerms_120865f9c5cc3bda] = env->getMethodID(cls, "updateShortPeriodTerms", "([D[Lorg/orekit/propagation/SpacecraftState;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonDSSTForceModel::PythonDSSTForceModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            void PythonDSSTForceModel::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
            }

            jlong PythonDSSTForceModel::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
            }

            void PythonDSSTForceModel::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
            static PyObject *t_PythonDSSTForceModel_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonDSSTForceModel_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonDSSTForceModel_init_(t_PythonDSSTForceModel *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonDSSTForceModel_finalize(t_PythonDSSTForceModel *self);
            static PyObject *t_PythonDSSTForceModel_pythonExtension(t_PythonDSSTForceModel *self, PyObject *args);
            static jobject JNICALL t_PythonDSSTForceModel_getMeanElementRate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
            static jobject JNICALL t_PythonDSSTForceModel_getMeanElementRate1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
            static jobject JNICALL t_PythonDSSTForceModel_getParametersDrivers2(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonDSSTForceModel_initializeShortPeriodTerms3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
            static jobject JNICALL t_PythonDSSTForceModel_initializeShortPeriodTerms4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
            static void JNICALL t_PythonDSSTForceModel_pythonDecRef5(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonDSSTForceModel_registerAttitudeProvider6(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonDSSTForceModel_updateShortPeriodTerms7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static void JNICALL t_PythonDSSTForceModel_updateShortPeriodTerms8(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static PyObject *t_PythonDSSTForceModel_get__self(t_PythonDSSTForceModel *self, void *data);
            static PyGetSetDef t_PythonDSSTForceModel__fields_[] = {
              DECLARE_GET_FIELD(t_PythonDSSTForceModel, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonDSSTForceModel__methods_[] = {
              DECLARE_METHOD(t_PythonDSSTForceModel, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonDSSTForceModel, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonDSSTForceModel, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonDSSTForceModel, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonDSSTForceModel)[] = {
              { Py_tp_methods, t_PythonDSSTForceModel__methods_ },
              { Py_tp_init, (void *) t_PythonDSSTForceModel_init_ },
              { Py_tp_getset, t_PythonDSSTForceModel__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonDSSTForceModel)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonDSSTForceModel, t_PythonDSSTForceModel, PythonDSSTForceModel);

            void t_PythonDSSTForceModel::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonDSSTForceModel), &PY_TYPE_DEF(PythonDSSTForceModel), module, "PythonDSSTForceModel", 1);
            }

            void t_PythonDSSTForceModel::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDSSTForceModel), "class_", make_descriptor(PythonDSSTForceModel::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDSSTForceModel), "wrapfn_", make_descriptor(t_PythonDSSTForceModel::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDSSTForceModel), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonDSSTForceModel::initializeClass);
              JNINativeMethod methods[] = {
                { "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonDSSTForceModel_getMeanElementRate0 },
                { "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)[D", (void *) t_PythonDSSTForceModel_getMeanElementRate1 },
                { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonDSSTForceModel_getParametersDrivers2 },
                { "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/propagation/PropagationType;[D)Ljava/util/List;", (void *) t_PythonDSSTForceModel_initializeShortPeriodTerms3 },
                { "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/propagation/PropagationType;[Lorg/hipparchus/CalculusFieldElement;)Ljava/util/List;", (void *) t_PythonDSSTForceModel_initializeShortPeriodTerms4 },
                { "pythonDecRef", "()V", (void *) t_PythonDSSTForceModel_pythonDecRef5 },
                { "registerAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V", (void *) t_PythonDSSTForceModel_registerAttitudeProvider6 },
                { "updateShortPeriodTerms", "([D[Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonDSSTForceModel_updateShortPeriodTerms7 },
                { "updateShortPeriodTerms", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/orekit/propagation/FieldSpacecraftState;)V", (void *) t_PythonDSSTForceModel_updateShortPeriodTerms8 },
              };
              env->registerNatives(cls, methods, 9);
            }

            static PyObject *t_PythonDSSTForceModel_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonDSSTForceModel::initializeClass, 1)))
                return NULL;
              return t_PythonDSSTForceModel::wrap_Object(PythonDSSTForceModel(((t_PythonDSSTForceModel *) arg)->object.this$));
            }
            static PyObject *t_PythonDSSTForceModel_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonDSSTForceModel::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonDSSTForceModel_init_(t_PythonDSSTForceModel *self, PyObject *args, PyObject *kwds)
            {
              PythonDSSTForceModel object((jobject) NULL);

              INT_CALL(object = PythonDSSTForceModel());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonDSSTForceModel_finalize(t_PythonDSSTForceModel *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonDSSTForceModel_pythonExtension(t_PythonDSSTForceModel *self, PyObject *args)
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

            static jobject JNICALL t_PythonDSSTForceModel_getMeanElementRate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
              PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
              PyObject *o1 = ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::wrap_Object(::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements(a1));
              PyObject *o2 = JArray<jobject>(a2).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              PyObject *result = PyObject_CallMethod(obj, "getMeanElementRate", "OOO", o0, o1, o2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              Py_DECREF(o2);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
              {
                throwTypeError("getMeanElementRate", result);
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

            static jobject JNICALL t_PythonDSSTForceModel_getMeanElementRate1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< jdouble > value((jobject) NULL);
              PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
              PyObject *o1 = ::org::orekit::propagation::semianalytical::dsst::utilities::t_AuxiliaryElements::wrap_Object(::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements(a1));
              PyObject *o2 = JArray<jdouble>(a2).wrap();
              PyObject *result = PyObject_CallMethod(obj, "getMeanElementRate", "OOO", o0, o1, o2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              Py_DECREF(o2);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[D", &value))
              {
                throwTypeError("getMeanElementRate", result);
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

            static jobject JNICALL t_PythonDSSTForceModel_getParametersDrivers2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_492808a339bfa35f]);
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

            static jobject JNICALL t_PythonDSSTForceModel_initializeShortPeriodTerms3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::util::List value((jobject) NULL);
              PyObject *o0 = ::org::orekit::propagation::semianalytical::dsst::utilities::t_AuxiliaryElements::wrap_Object(::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements(a0));
              PyObject *o1 = ::org::orekit::propagation::t_PropagationType::wrap_Object(::org::orekit::propagation::PropagationType(a1));
              PyObject *o2 = JArray<jdouble>(a2).wrap();
              PyObject *result = PyObject_CallMethod(obj, "initializeShortPeriodTerms", "OOO", o0, o1, o2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              Py_DECREF(o2);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
              {
                throwTypeError("initializeShortPeriodTerms", result);
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

            static jobject JNICALL t_PythonDSSTForceModel_initializeShortPeriodTerms4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::util::List value((jobject) NULL);
              PyObject *o0 = ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::wrap_Object(::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements(a0));
              PyObject *o1 = ::org::orekit::propagation::t_PropagationType::wrap_Object(::org::orekit::propagation::PropagationType(a1));
              PyObject *o2 = JArray<jobject>(a2).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              PyObject *result = PyObject_CallMethod(obj, "initializeShortPeriodTerms", "OOO", o0, o1, o2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              Py_DECREF(o2);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
              {
                throwTypeError("initializeShortPeriodTerms", result);
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

            static void JNICALL t_PythonDSSTForceModel_pythonDecRef5(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static void JNICALL t_PythonDSSTForceModel_registerAttitudeProvider6(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(::org::orekit::attitudes::AttitudeProvider(a0));
              PyObject *result = PyObject_CallMethod(obj, "registerAttitudeProvider", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonDSSTForceModel_updateShortPeriodTerms7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = JArray<jdouble>(a0).wrap();
              PyObject *o1 = JArray<jobject>(a1).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
              PyObject *result = PyObject_CallMethod(obj, "updateShortPeriodTerms", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonDSSTForceModel_updateShortPeriodTerms8(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = JArray<jobject>(a0).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              PyObject *o1 = JArray<jobject>(a1).wrap(::org::orekit::propagation::t_FieldSpacecraftState::wrap_jobject);
              PyObject *result = PyObject_CallMethod(obj, "updateShortPeriodTerms", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static PyObject *t_PythonDSSTForceModel_get__self(t_PythonDSSTForceModel *self, void *data)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/MultiDirectionalSimplex.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "java/util/Comparator.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            ::java::lang::Class *MultiDirectionalSimplex::class$ = NULL;
            jmethodID *MultiDirectionalSimplex::mids$ = NULL;
            bool MultiDirectionalSimplex::live$ = false;

            jclass MultiDirectionalSimplex::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/noderiv/MultiDirectionalSimplex");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_fa9d415d19f69361] = env->getMethodID(cls, "<init>", "([D)V");
                mids$[mid_init$_a0befc7f3dc19e41] = env->getMethodID(cls, "<init>", "([[D)V");
                mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_init$_bb79ca80d85d0a66] = env->getMethodID(cls, "<init>", "(ID)V");
                mids$[mid_init$_b06f13e61b0a2762] = env->getMethodID(cls, "<init>", "([DDD)V");
                mids$[mid_init$_d396e21fdebc41e7] = env->getMethodID(cls, "<init>", "([[DDD)V");
                mids$[mid_init$_07bf81310115068c] = env->getMethodID(cls, "<init>", "(IDD)V");
                mids$[mid_init$_2e15f46ce2042002] = env->getMethodID(cls, "<init>", "(IDDD)V");
                mids$[mid_iterate_eb88542b81649386] = env->getMethodID(cls, "iterate", "(Lorg/hipparchus/analysis/MultivariateFunction;Ljava/util/Comparator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            MultiDirectionalSimplex::MultiDirectionalSimplex(const JArray< jdouble > & a0) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_fa9d415d19f69361, a0.this$)) {}

            MultiDirectionalSimplex::MultiDirectionalSimplex(const JArray< JArray< jdouble > > & a0) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_a0befc7f3dc19e41, a0.this$)) {}

            MultiDirectionalSimplex::MultiDirectionalSimplex(jint a0) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

            MultiDirectionalSimplex::MultiDirectionalSimplex(jint a0, jdouble a1) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_bb79ca80d85d0a66, a0, a1)) {}

            MultiDirectionalSimplex::MultiDirectionalSimplex(const JArray< jdouble > & a0, jdouble a1, jdouble a2) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_b06f13e61b0a2762, a0.this$, a1, a2)) {}

            MultiDirectionalSimplex::MultiDirectionalSimplex(const JArray< JArray< jdouble > > & a0, jdouble a1, jdouble a2) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_d396e21fdebc41e7, a0.this$, a1, a2)) {}

            MultiDirectionalSimplex::MultiDirectionalSimplex(jint a0, jdouble a1, jdouble a2) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_07bf81310115068c, a0, a1, a2)) {}

            MultiDirectionalSimplex::MultiDirectionalSimplex(jint a0, jdouble a1, jdouble a2, jdouble a3) : ::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex(env->newObject(initializeClass, &mids$, mid_init$_2e15f46ce2042002, a0, a1, a2, a3)) {}

            void MultiDirectionalSimplex::iterate(const ::org::hipparchus::analysis::MultivariateFunction & a0, const ::java::util::Comparator & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_iterate_eb88542b81649386], a0.this$, a1.this$);
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
        namespace scalar {
          namespace noderiv {
            static PyObject *t_MultiDirectionalSimplex_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MultiDirectionalSimplex_instance_(PyTypeObject *type, PyObject *arg);
            static int t_MultiDirectionalSimplex_init_(t_MultiDirectionalSimplex *self, PyObject *args, PyObject *kwds);
            static PyObject *t_MultiDirectionalSimplex_iterate(t_MultiDirectionalSimplex *self, PyObject *args);

            static PyMethodDef t_MultiDirectionalSimplex__methods_[] = {
              DECLARE_METHOD(t_MultiDirectionalSimplex, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MultiDirectionalSimplex, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MultiDirectionalSimplex, iterate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MultiDirectionalSimplex)[] = {
              { Py_tp_methods, t_MultiDirectionalSimplex__methods_ },
              { Py_tp_init, (void *) t_MultiDirectionalSimplex_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MultiDirectionalSimplex)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::scalar::noderiv::AbstractSimplex),
              NULL
            };

            DEFINE_TYPE(MultiDirectionalSimplex, t_MultiDirectionalSimplex, MultiDirectionalSimplex);

            void t_MultiDirectionalSimplex::install(PyObject *module)
            {
              installType(&PY_TYPE(MultiDirectionalSimplex), &PY_TYPE_DEF(MultiDirectionalSimplex), module, "MultiDirectionalSimplex", 0);
            }

            void t_MultiDirectionalSimplex::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MultiDirectionalSimplex), "class_", make_descriptor(MultiDirectionalSimplex::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MultiDirectionalSimplex), "wrapfn_", make_descriptor(t_MultiDirectionalSimplex::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MultiDirectionalSimplex), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_MultiDirectionalSimplex_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MultiDirectionalSimplex::initializeClass, 1)))
                return NULL;
              return t_MultiDirectionalSimplex::wrap_Object(MultiDirectionalSimplex(((t_MultiDirectionalSimplex *) arg)->object.this$));
            }
            static PyObject *t_MultiDirectionalSimplex_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MultiDirectionalSimplex::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_MultiDirectionalSimplex_init_(t_MultiDirectionalSimplex *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  JArray< jdouble > a0((jobject) NULL);
                  MultiDirectionalSimplex object((jobject) NULL);

                  if (!parseArgs(args, "[D", &a0))
                  {
                    INT_CALL(object = MultiDirectionalSimplex(a0));
                    self->object = object;
                    break;
                  }
                }
                {
                  JArray< JArray< jdouble > > a0((jobject) NULL);
                  MultiDirectionalSimplex object((jobject) NULL);

                  if (!parseArgs(args, "[[D", &a0))
                  {
                    INT_CALL(object = MultiDirectionalSimplex(a0));
                    self->object = object;
                    break;
                  }
                }
                {
                  jint a0;
                  MultiDirectionalSimplex object((jobject) NULL);

                  if (!parseArgs(args, "I", &a0))
                  {
                    INT_CALL(object = MultiDirectionalSimplex(a0));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 2:
                {
                  jint a0;
                  jdouble a1;
                  MultiDirectionalSimplex object((jobject) NULL);

                  if (!parseArgs(args, "ID", &a0, &a1))
                  {
                    INT_CALL(object = MultiDirectionalSimplex(a0, a1));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 3:
                {
                  JArray< jdouble > a0((jobject) NULL);
                  jdouble a1;
                  jdouble a2;
                  MultiDirectionalSimplex object((jobject) NULL);

                  if (!parseArgs(args, "[DDD", &a0, &a1, &a2))
                  {
                    INT_CALL(object = MultiDirectionalSimplex(a0, a1, a2));
                    self->object = object;
                    break;
                  }
                }
                {
                  JArray< JArray< jdouble > > a0((jobject) NULL);
                  jdouble a1;
                  jdouble a2;
                  MultiDirectionalSimplex object((jobject) NULL);

                  if (!parseArgs(args, "[[DDD", &a0, &a1, &a2))
                  {
                    INT_CALL(object = MultiDirectionalSimplex(a0, a1, a2));
                    self->object = object;
                    break;
                  }
                }
                {
                  jint a0;
                  jdouble a1;
                  jdouble a2;
                  MultiDirectionalSimplex object((jobject) NULL);

                  if (!parseArgs(args, "IDD", &a0, &a1, &a2))
                  {
                    INT_CALL(object = MultiDirectionalSimplex(a0, a1, a2));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 4:
                {
                  jint a0;
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  MultiDirectionalSimplex object((jobject) NULL);

                  if (!parseArgs(args, "IDDD", &a0, &a1, &a2, &a3))
                  {
                    INT_CALL(object = MultiDirectionalSimplex(a0, a1, a2, a3));
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

            static PyObject *t_MultiDirectionalSimplex_iterate(t_MultiDirectionalSimplex *self, PyObject *args)
            {
              ::org::hipparchus::analysis::MultivariateFunction a0((jobject) NULL);
              ::java::util::Comparator a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::hipparchus::analysis::MultivariateFunction::initializeClass, ::java::util::Comparator::initializeClass, &a0, &a1, &p1, ::java::util::t_Comparator::parameters_))
              {
                OBJ_CALL(self->object.iterate(a0, a1));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(MultiDirectionalSimplex), (PyObject *) self, "iterate", args, 2);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/ParameterDriversList$DelegatingDriver.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ParameterDriversList$DelegatingDriver::class$ = NULL;
      jmethodID *ParameterDriversList$DelegatingDriver::mids$ = NULL;
      bool ParameterDriversList$DelegatingDriver::live$ = false;

      jclass ParameterDriversList$DelegatingDriver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ParameterDriversList$DelegatingDriver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getRawDrivers_2afa36052df4765d] = env->getMethodID(cls, "getRawDrivers", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::List ParameterDriversList$DelegatingDriver::getRawDrivers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getRawDrivers_2afa36052df4765d]));
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
      static PyObject *t_ParameterDriversList$DelegatingDriver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterDriversList$DelegatingDriver_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterDriversList$DelegatingDriver_getRawDrivers(t_ParameterDriversList$DelegatingDriver *self);
      static PyObject *t_ParameterDriversList$DelegatingDriver_get__rawDrivers(t_ParameterDriversList$DelegatingDriver *self, void *data);
      static PyGetSetDef t_ParameterDriversList$DelegatingDriver__fields_[] = {
        DECLARE_GET_FIELD(t_ParameterDriversList$DelegatingDriver, rawDrivers),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ParameterDriversList$DelegatingDriver__methods_[] = {
        DECLARE_METHOD(t_ParameterDriversList$DelegatingDriver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterDriversList$DelegatingDriver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterDriversList$DelegatingDriver, getRawDrivers, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ParameterDriversList$DelegatingDriver)[] = {
        { Py_tp_methods, t_ParameterDriversList$DelegatingDriver__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ParameterDriversList$DelegatingDriver__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ParameterDriversList$DelegatingDriver)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::ParameterDriver),
        NULL
      };

      DEFINE_TYPE(ParameterDriversList$DelegatingDriver, t_ParameterDriversList$DelegatingDriver, ParameterDriversList$DelegatingDriver);

      void t_ParameterDriversList$DelegatingDriver::install(PyObject *module)
      {
        installType(&PY_TYPE(ParameterDriversList$DelegatingDriver), &PY_TYPE_DEF(ParameterDriversList$DelegatingDriver), module, "ParameterDriversList$DelegatingDriver", 0);
      }

      void t_ParameterDriversList$DelegatingDriver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversList$DelegatingDriver), "class_", make_descriptor(ParameterDriversList$DelegatingDriver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversList$DelegatingDriver), "wrapfn_", make_descriptor(t_ParameterDriversList$DelegatingDriver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversList$DelegatingDriver), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ParameterDriversList$DelegatingDriver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ParameterDriversList$DelegatingDriver::initializeClass, 1)))
          return NULL;
        return t_ParameterDriversList$DelegatingDriver::wrap_Object(ParameterDriversList$DelegatingDriver(((t_ParameterDriversList$DelegatingDriver *) arg)->object.this$));
      }
      static PyObject *t_ParameterDriversList$DelegatingDriver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ParameterDriversList$DelegatingDriver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ParameterDriversList$DelegatingDriver_getRawDrivers(t_ParameterDriversList$DelegatingDriver *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getRawDrivers());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
      }

      static PyObject *t_ParameterDriversList$DelegatingDriver_get__rawDrivers(t_ParameterDriversList$DelegatingDriver *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getRawDrivers());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/errors/OrekitMessages.h"
#include "org/orekit/errors/OrekitMessages.h"
#include "java/util/Locale.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *OrekitMessages::class$ = NULL;
      jmethodID *OrekitMessages::mids$ = NULL;
      bool OrekitMessages::live$ = false;
      OrekitMessages *OrekitMessages::ADDITIONAL_STATE_NAME_ALREADY_IN_USE = NULL;
      OrekitMessages *OrekitMessages::ALMOST_CRITICALLY_INCLINED_ORBIT = NULL;
      OrekitMessages *OrekitMessages::ALMOST_EQUATORIAL_ORBIT = NULL;
      OrekitMessages *OrekitMessages::ALTITUDE_BELOW_ALLOWED_THRESHOLD = NULL;
      OrekitMessages *OrekitMessages::ANGLE_TYPE_NOT_SUPPORTED = NULL;
      OrekitMessages *OrekitMessages::ATTEMPT_TO_GENERATE_MALFORMED_FILE = NULL;
      OrekitMessages *OrekitMessages::ATTITUDE_POINTING_LAW_DOES_NOT_POINT_TO_GROUND = NULL;
      OrekitMessages *OrekitMessages::CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_LOF = NULL;
      OrekitMessages *OrekitMessages::CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_NON_INERTIAL_FRAME = NULL;
      OrekitMessages *OrekitMessages::CANNOT_COMPUTE_AIMING_AT_SINGULAR_POINT = NULL;
      OrekitMessages *OrekitMessages::CANNOT_COMPUTE_LAGRANGIAN = NULL;
      OrekitMessages *OrekitMessages::CANNOT_ESTIMATE_PRECESSION_WITHOUT_PROPER_DERIVATIVES = NULL;
      OrekitMessages *OrekitMessages::CANNOT_FIND_SATELLITE_IN_SYSTEM = NULL;
      OrekitMessages *OrekitMessages::CANNOT_PARSE_BOTH_TAU_AND_GAMMA = NULL;
      OrekitMessages *OrekitMessages::CANNOT_PARSE_GNSS_DATA = NULL;
      OrekitMessages *OrekitMessages::CANNOT_PARSE_SOURCETABLE = NULL;
      OrekitMessages *OrekitMessages::CANNOT_START_PROPAGATION_FROM_INFINITY = NULL;
      OrekitMessages *OrekitMessages::CCSDS_DATE_INVALID_LENGTH_TIME_FIELD = NULL;
      OrekitMessages *OrekitMessages::CCSDS_DATE_INVALID_PREAMBLE_FIELD = NULL;
      OrekitMessages *OrekitMessages::CCSDS_DATE_MISSING_AGENCY_EPOCH = NULL;
      OrekitMessages *OrekitMessages::CCSDS_DIFFERENT_LVLH_DEFINITION = NULL;
      OrekitMessages *OrekitMessages::CCSDS_INCOMPATIBLE_KEYS_BOTH_USED = NULL;
      OrekitMessages *OrekitMessages::CCSDS_INCOMPLETE_DATA = NULL;
      OrekitMessages *OrekitMessages::CCSDS_INCONSISTENT_NUMBER_OF_ATTITUDE_STATES = NULL;
      OrekitMessages *OrekitMessages::CCSDS_INCONSISTENT_TIME_SYSTEMS = NULL;
      OrekitMessages *OrekitMessages::CCSDS_INVALID_FRAME = NULL;
      OrekitMessages *OrekitMessages::CCSDS_INVALID_ROTATION_SEQUENCE = NULL;
      OrekitMessages *OrekitMessages::CCSDS_KEYWORD_NOT_ALLOWED_IN_VERSION = NULL;
      OrekitMessages *OrekitMessages::CCSDS_MANEUVER_MISSING_TIME = NULL;
      OrekitMessages *OrekitMessages::CCSDS_MANEUVER_UNITS_WRONG_NB_COMPONENTS = NULL;
      OrekitMessages *OrekitMessages::CCSDS_MISSING_KEYWORD = NULL;
      OrekitMessages *OrekitMessages::CCSDS_MISSING_SENSOR_INDEX = NULL;
      OrekitMessages *OrekitMessages::CCSDS_SENSOR_INDEX_ALREADY_USED = NULL;
      OrekitMessages *OrekitMessages::CCSDS_TDM_KEYWORD_NOT_FOUND = NULL;
      OrekitMessages *OrekitMessages::CCSDS_TDM_MISSING_RANGE_UNITS_CONVERTER = NULL;
      OrekitMessages *OrekitMessages::CCSDS_TIME_SYSTEM_NOT_IMPLEMENTED = NULL;
      OrekitMessages *OrekitMessages::CCSDS_TIME_SYSTEM_NOT_READ_YET = NULL;
      OrekitMessages *OrekitMessages::CCSDS_UNEXPECTED_KEYWORD = NULL;
      OrekitMessages *OrekitMessages::CCSDS_UNKNOWN_ATTITUDE_TYPE = NULL;
      OrekitMessages *OrekitMessages::CCSDS_UNKNOWN_CONVENTIONS = NULL;
      OrekitMessages *OrekitMessages::CCSDS_UNKNOWN_GM = NULL;
      OrekitMessages *OrekitMessages::CCSDS_UNKNOWN_SPACECRAFT_MASS = NULL;
      OrekitMessages *OrekitMessages::CCSDS_UNSUPPORTED_ELEMENT_SET_TYPE = NULL;
      OrekitMessages *OrekitMessages::CCSDS_UNSUPPORTED_RETROGRADE_EQUINOCTIAL = NULL;
      OrekitMessages *OrekitMessages::CLOCK_FILE_UNSUPPORTED_VERSION = NULL;
      OrekitMessages *OrekitMessages::CONNECTION_ERROR = NULL;
      OrekitMessages *OrekitMessages::CORRUPTED_FILE = NULL;
      OrekitMessages *OrekitMessages::CPF_UNEXPECTED_END_OF_FILE = NULL;
      OrekitMessages *OrekitMessages::CRD_UNEXPECTED_END_OF_FILE = NULL;
      OrekitMessages *OrekitMessages::DATA_ROOT_DIRECTORY_DOES_NOT_EXIST = NULL;
      OrekitMessages *OrekitMessages::DATES_MISMATCH = NULL;
      OrekitMessages *OrekitMessages::DIFFERENT_STATE_DEFINITION = NULL;
      OrekitMessages *OrekitMessages::DIFFERENT_TIME_OF_CLOSEST_APPROACH = NULL;
      OrekitMessages *OrekitMessages::DIMENSION_INCONSISTENT_WITH_PARAMETERS = NULL;
      OrekitMessages *OrekitMessages::DSST_ECC_NO_NUMERICAL_AVERAGING_METHOD = NULL;
      OrekitMessages *OrekitMessages::DSST_NEWCOMB_OPERATORS_COMPUTATION = NULL;
      OrekitMessages *OrekitMessages::DSST_SPR_SHADOW_INCONSISTENT = NULL;
      OrekitMessages *OrekitMessages::DSST_VMNS_COEFFICIENT_ERROR_MS = NULL;
      OrekitMessages *OrekitMessages::DUPLICATED_GRAVITY_FIELD_COEFFICIENT_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::END_OF_ENCODED_MESSAGE = NULL;
      OrekitMessages *OrekitMessages::EVENT_DATE_TOO_CLOSE = NULL;
      OrekitMessages *OrekitMessages::EXCEPTIONAL_DATA_CONTEXT = NULL;
      OrekitMessages *OrekitMessages::FAILED_AUTHENTICATION = NULL;
      OrekitMessages *OrekitMessages::FIND_ROOT = NULL;
      OrekitMessages *OrekitMessages::FRAMES_MISMATCH = NULL;
      OrekitMessages *OrekitMessages::FRAME_ALREADY_ATTACHED = NULL;
      OrekitMessages *OrekitMessages::FRAME_ANCESTOR_OF_BOTH_FRAMES = NULL;
      OrekitMessages *OrekitMessages::FRAME_ANCESTOR_OF_NEITHER_FRAME = NULL;
      OrekitMessages *OrekitMessages::FRAME_NOT_ATTACHED = NULL;
      OrekitMessages *OrekitMessages::FRAME_NO_NTH_ANCESTOR = NULL;
      OrekitMessages *OrekitMessages::FUNCTION_NOT_IMPLEMENTED = NULL;
      OrekitMessages *OrekitMessages::GNSS_PARITY_ERROR = NULL;
      OrekitMessages *OrekitMessages::GRAVITY_FIELD_NORMALIZATION_UNDERFLOW = NULL;
      OrekitMessages *OrekitMessages::HEADER_ALREADY_WRITTEN = NULL;
      OrekitMessages *OrekitMessages::HEADER_NOT_WRITTEN = NULL;
      OrekitMessages *OrekitMessages::HYPERBOLIC_ORBIT_NOT_HANDLED_AS = NULL;
      OrekitMessages *OrekitMessages::INCOMPATIBLE_FRAMES = NULL;
      OrekitMessages *OrekitMessages::INCOMPATIBLE_FREQUENCIES_FOR_COMBINATION_OF_MEASUREMENTS = NULL;
      OrekitMessages *OrekitMessages::INCOMPATIBLE_UNITS = NULL;
      OrekitMessages *OrekitMessages::INCOMPLETE_HEADER = NULL;
      OrekitMessages *OrekitMessages::INCONSISTENT_ASTRONOMICAL_UNIT_IN_FILES = NULL;
      OrekitMessages *OrekitMessages::INCONSISTENT_DATES_IN_IERS_FILE = NULL;
      OrekitMessages *OrekitMessages::INCONSISTENT_EARTH_MOON_RATIO_IN_FILES = NULL;
      OrekitMessages *OrekitMessages::INCONSISTENT_NUMBER_OF_ELEMENTS = NULL;
      OrekitMessages *OrekitMessages::INCONSISTENT_NUMBER_OF_SATS = NULL;
      OrekitMessages *OrekitMessages::INCONSISTENT_NUMBER_OF_TEC_MAPS_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::INCONSISTENT_SAMPLING_DATE = NULL;
      OrekitMessages *OrekitMessages::INCONSISTENT_SATELLITE_SYSTEM = NULL;
      OrekitMessages *OrekitMessages::INCONSISTENT_SELECTION = NULL;
      OrekitMessages *OrekitMessages::INERTIAL_FORCE_MODEL_MISSING = NULL;
      OrekitMessages *OrekitMessages::INITIAL_MATRIX_AND_PARAMETERS_NUMBER_MISMATCH = NULL;
      OrekitMessages *OrekitMessages::INITIAL_STATE_NOT_SPECIFIED_FOR_ORBIT_PROPAGATION = NULL;
      OrekitMessages *OrekitMessages::INTERNAL_ERROR = NULL;
      OrekitMessages *OrekitMessages::INVALID_GNSS_DATA = NULL;
      OrekitMessages *OrekitMessages::INVALID_MEASUREMENT_TYPES_FOR_COMBINATION_OF_MEASUREMENTS = NULL;
      OrekitMessages *OrekitMessages::INVALID_PARAMETER_RANGE = NULL;
      OrekitMessages *OrekitMessages::INVALID_RANGE_INDICATOR_IN_CRD_FILE = NULL;
      OrekitMessages *OrekitMessages::INVALID_SATELLITE_ID = NULL;
      OrekitMessages *OrekitMessages::INVALID_SATELLITE_SYSTEM = NULL;
      OrekitMessages *OrekitMessages::INVALID_TYPE_FOR_FUNCTION = NULL;
      OrekitMessages *OrekitMessages::IRREGULAR_OR_INCOMPLETE_GRID = NULL;
      OrekitMessages *OrekitMessages::ITRF_VERSIONS_PREFIX_ONLY = NULL;
      OrekitMessages *OrekitMessages::KLOBUCHAR_ALPHA_BETA_NOT_AVAILABLE_FOR_DATE = NULL;
      OrekitMessages *OrekitMessages::KLOBUCHAR_ALPHA_BETA_NOT_LOADED = NULL;
      OrekitMessages *OrekitMessages::METHOD_NOT_AVAILABLE_WITHOUT_CENTRAL_BODY = NULL;
      OrekitMessages *OrekitMessages::MISMATCHED_FREQUENCIES = NULL;
      OrekitMessages *OrekitMessages::MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES = NULL;
      OrekitMessages *OrekitMessages::MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES_GAP = NULL;
      OrekitMessages *OrekitMessages::MISSING_GRAVITY_FIELD_COEFFICIENT_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::MISSING_HEADER = NULL;
      OrekitMessages *OrekitMessages::MISSING_SECOND_TLE_LINE = NULL;
      OrekitMessages *OrekitMessages::MISSING_SERIE_J_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::MISSING_STATION_DATA_FOR_EPOCH = NULL;
      OrekitMessages *OrekitMessages::MISSING_VELOCITY = NULL;
      OrekitMessages *OrekitMessages::MODIP_GRID_NOT_LOADED = NULL;
      OrekitMessages *OrekitMessages::MOUNPOINT_ALREADY_CONNECTED = NULL;
      OrekitMessages *OrekitMessages::MULTIPLE_INTERPOLATOR_USED = NULL;
      OrekitMessages *OrekitMessages::MULTIPLE_SHOOTING_UNDERCONSTRAINED = NULL;
      OrekitMessages *OrekitMessages::NEITHER_DIRECTORY_NOR_ZIP_OR_JAR = NULL;
      OrekitMessages *OrekitMessages::NEQUICK_F2_FM3_NOT_LOADED = NULL;
      OrekitMessages *OrekitMessages::NON_CHRONOLOGICALLY_SORTED_ENTRIES = NULL;
      OrekitMessages *OrekitMessages::NON_CHRONOLOGICAL_DATES_FOR_OBSERVATIONS = NULL;
      OrekitMessages *OrekitMessages::NON_CHRONOLOGICAL_DATES_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::NON_COPLANAR_POINTS = NULL;
      OrekitMessages *OrekitMessages::NON_DIFFERENT_DATES_FOR_OBSERVATIONS = NULL;
      OrekitMessages *OrekitMessages::NON_EXISTENT_DATE = NULL;
      OrekitMessages *OrekitMessages::NON_EXISTENT_DAY_NUMBER_IN_YEAR = NULL;
      OrekitMessages *OrekitMessages::NON_EXISTENT_GEOMAGNETIC_MODEL = NULL;
      OrekitMessages *OrekitMessages::NON_EXISTENT_HMS_TIME = NULL;
      OrekitMessages *OrekitMessages::NON_EXISTENT_MONTH = NULL;
      OrekitMessages *OrekitMessages::NON_EXISTENT_TIME = NULL;
      OrekitMessages *OrekitMessages::NON_EXISTENT_WEEK_DATE = NULL;
      OrekitMessages *OrekitMessages::NON_EXISTENT_YEAR_MONTH_DAY = NULL;
      OrekitMessages *OrekitMessages::NON_PSEUDO_INERTIAL_FRAME = NULL;
      OrekitMessages *OrekitMessages::NON_PSEUDO_INERTIAL_FRAME_NOT_SUITABLE_AS_REFERENCE_FOR_INERTIAL_FORCES = NULL;
      OrekitMessages *OrekitMessages::NON_RESETABLE_STATE = NULL;
      OrekitMessages *OrekitMessages::NOT_A_DIRECTORY = NULL;
      OrekitMessages *OrekitMessages::NOT_A_JPL_EPHEMERIDES_BINARY_FILE = NULL;
      OrekitMessages *OrekitMessages::NOT_A_MARSHALL_SOLAR_ACTIVITY_FUTURE_ESTIMATION_FILE = NULL;
      OrekitMessages *OrekitMessages::NOT_A_SUPPORTED_HATANAKA_COMPRESSED_FILE = NULL;
      OrekitMessages *OrekitMessages::NOT_A_SUPPORTED_IERS_DATA_FILE = NULL;
      OrekitMessages *OrekitMessages::NOT_A_SUPPORTED_SEM_ALMANAC_FILE = NULL;
      OrekitMessages *OrekitMessages::NOT_A_SUPPORTED_UNIX_COMPRESSED_FILE = NULL;
      OrekitMessages *OrekitMessages::NOT_A_SUPPORTED_YUMA_ALMANAC_FILE = NULL;
      OrekitMessages *OrekitMessages::NOT_ENOUGH_ATTITUDE_PROVIDERS = NULL;
      OrekitMessages *OrekitMessages::NOT_ENOUGH_CACHED_NEIGHBORS = NULL;
      OrekitMessages *OrekitMessages::NOT_ENOUGH_DATA = NULL;
      OrekitMessages *OrekitMessages::NOT_ENOUGH_GNSS_FOR_DOP = NULL;
      OrekitMessages *OrekitMessages::NOT_ENOUGH_PROPAGATORS = NULL;
      OrekitMessages *OrekitMessages::NOT_POSITIVE_SPACECRAFT_MASS = NULL;
      OrekitMessages *OrekitMessages::NOT_STRICTLY_POSITIVE = NULL;
      OrekitMessages *OrekitMessages::NOT_TLE_LINES = NULL;
      OrekitMessages *OrekitMessages::NOT_VALID_INTERNATIONAL_DESIGNATOR = NULL;
      OrekitMessages *OrekitMessages::NO_CACHED_ENTRIES = NULL;
      OrekitMessages *OrekitMessages::NO_DATA_GENERATED = NULL;
      OrekitMessages *OrekitMessages::NO_DATA_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::NO_DATA_LOADED_FOR_CELESTIAL_BODY = NULL;
      OrekitMessages *OrekitMessages::NO_EARTH_ORIENTATION_PARAMETERS = NULL;
      OrekitMessages *OrekitMessages::NO_EARTH_ORIENTATION_PARAMETERS_LOADED = NULL;
      OrekitMessages *OrekitMessages::NO_ENTRIES_IN_IERS_UTC_TAI_HISTORY_FILE = NULL;
      OrekitMessages *OrekitMessages::NO_EPOCH_IN_IONEX_HEADER = NULL;
      OrekitMessages *OrekitMessages::NO_GRAVITY_FIELD_DATA_LOADED = NULL;
      OrekitMessages *OrekitMessages::NO_IERS_UTC_TAI_HISTORY_DATA_LOADED = NULL;
      OrekitMessages *OrekitMessages::NO_INTERPOLATOR_FOR_STATE_DEFINITION = NULL;
      OrekitMessages *OrekitMessages::NO_JPL_EPHEMERIDES_BINARY_FILES_FOUND = NULL;
      OrekitMessages *OrekitMessages::NO_KLOBUCHAR_ALPHA_BETA_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::NO_LATITUDE_LONGITUDE_BONDARIES_IN_IONEX_HEADER = NULL;
      OrekitMessages *OrekitMessages::NO_OCEAN_TIDE_DATA_LOADED = NULL;
      OrekitMessages *OrekitMessages::NO_PROPAGATOR_CONFIGURED = NULL;
      OrekitMessages *OrekitMessages::NO_REFERENCE_DATE_FOR_PARAMETER = NULL;
      OrekitMessages *OrekitMessages::NO_SEM_ALMANAC_AVAILABLE = NULL;
      OrekitMessages *OrekitMessages::NO_SOLAR_ACTIVITY_AT_DATE = NULL;
      OrekitMessages *OrekitMessages::NO_SUCH_ITRF_FRAME = NULL;
      OrekitMessages *OrekitMessages::NO_TEC_DATA_IN_FILES_FOR_DATE = NULL;
      OrekitMessages *OrekitMessages::NO_TLE_DATA_AVAILABLE = NULL;
      OrekitMessages *OrekitMessages::NO_TLE_FOR_LAUNCH_YEAR_NUMBER_PIECE = NULL;
      OrekitMessages *OrekitMessages::NO_TLE_FOR_OBJECT = NULL;
      OrekitMessages *OrekitMessages::NO_UNSCENTED_TRANSFORM_CONFIGURED = NULL;
      OrekitMessages *OrekitMessages::NO_VIENNA_ACOEF_OR_ZENITH_DELAY_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::NO_YUMA_ALMANAC_AVAILABLE = NULL;
      OrekitMessages *OrekitMessages::NULL_ARGUMENT = NULL;
      OrekitMessages *OrekitMessages::NULL_PARENT_FOR_FRAME = NULL;
      OrekitMessages *OrekitMessages::OCEAN_TIDE_DATA_DEGREE_ORDER_LIMITS = NULL;
      OrekitMessages *OrekitMessages::OCEAN_TIDE_LOAD_DEFORMATION_LIMITS = NULL;
      OrekitMessages *OrekitMessages::ORBITS_MUS_MISMATCH = NULL;
      OrekitMessages *OrekitMessages::ORBIT_AND_ATTITUDE_DATES_MISMATCH = NULL;
      OrekitMessages *OrekitMessages::ORBIT_ANOMALY_OUT_OF_HYPERBOLIC_RANGE = NULL;
      OrekitMessages *OrekitMessages::ORBIT_A_E_MISMATCH_WITH_CONIC_TYPE = NULL;
      OrekitMessages *OrekitMessages::ORBIT_TYPE_NOT_ALLOWED = NULL;
      OrekitMessages *OrekitMessages::OUT_OF_RANGE_BODY_EPHEMERIDES_DATE = NULL;
      OrekitMessages *OrekitMessages::OUT_OF_RANGE_DATE = NULL;
      OrekitMessages *OrekitMessages::OUT_OF_RANGE_DERIVATION_ORDER = NULL;
      OrekitMessages *OrekitMessages::OUT_OF_RANGE_EPHEMERIDES_DATE_AFTER = NULL;
      OrekitMessages *OrekitMessages::OUT_OF_RANGE_EPHEMERIDES_DATE_BEFORE = NULL;
      OrekitMessages *OrekitMessages::OUT_OF_RANGE_SECONDS_NUMBER = NULL;
      OrekitMessages *OrekitMessages::OUT_OF_RANGE_SECONDS_NUMBER_DETAIL = NULL;
      OrekitMessages *OrekitMessages::OUT_OF_RANGE_TIME_TRANSFORM = NULL;
      OrekitMessages *OrekitMessages::PARAMETER_NOT_SET = NULL;
      OrekitMessages *OrekitMessages::PARAMETER_PERIODS_HAS_ALREADY_BEEN_SET = NULL;
      OrekitMessages *OrekitMessages::PARAMETER_WITH_SEVERAL_ESTIMATED_VALUES = NULL;
      OrekitMessages *OrekitMessages::POINT_INSIDE_ELLIPSOID = NULL;
      OrekitMessages *OrekitMessages::POLAR_TRAJECTORY = NULL;
      OrekitMessages *OrekitMessages::POSITIVE_FLOW_RATE = NULL;
      OrekitMessages *OrekitMessages::SATELLITE_COLLIDED_WITH_TARGET = NULL;
      OrekitMessages *OrekitMessages::SEVERAL_REFERENCE_DATES_IN_GRAVITY_FIELD = NULL;
      OrekitMessages *OrekitMessages::SINGULAR_JACOBIAN_FOR_ORBIT_TYPE = NULL;
      OrekitMessages *OrekitMessages::SOURCETABLE_PARSE_ERROR = NULL;
      OrekitMessages *OrekitMessages::SP3_INCOMPATIBLE_FILE_METADATA = NULL;
      OrekitMessages *OrekitMessages::SP3_INCOMPATIBLE_SATELLITE_MEDATADA = NULL;
      OrekitMessages *OrekitMessages::SP3_INVALID_HEADER_ENTRY = NULL;
      OrekitMessages *OrekitMessages::SP3_NUMBER_OF_EPOCH_MISMATCH = NULL;
      OrekitMessages *OrekitMessages::SP3_TOO_MANY_SATELLITES_FOR_VERSION = NULL;
      OrekitMessages *OrekitMessages::SP3_UNSUPPORTED_VERSION = NULL;
      OrekitMessages *OrekitMessages::STATE_AND_COVARIANCE_DATES_MISMATCH = NULL;
      OrekitMessages *OrekitMessages::STATE_AND_PARAMETERS_JACOBIANS_ROWS_MISMATCH = NULL;
      OrekitMessages *OrekitMessages::STATE_JACOBIAN_NOT_6X6 = NULL;
      OrekitMessages *OrekitMessages::STATE_JACOBIAN_NOT_INITIALIZED = NULL;
      OrekitMessages *OrekitMessages::STATION_NOT_FOUND = NULL;
      OrekitMessages *OrekitMessages::STEC_INTEGRATION_DID_NOT_CONVERGE = NULL;
      OrekitMessages *OrekitMessages::STK_INVALID_OR_UNSUPPORTED_COORDINATE_SYSTEM = NULL;
      OrekitMessages *OrekitMessages::STK_UNEXPECTED_END_OF_FILE = NULL;
      OrekitMessages *OrekitMessages::STK_UNMAPPED_COORDINATE_SYSTEM = NULL;
      OrekitMessages *OrekitMessages::STREAM_REQUIRES_NMEA_FIX = NULL;
      OrekitMessages *OrekitMessages::TLE_CHECKSUM_ERROR = NULL;
      OrekitMessages *OrekitMessages::TLE_INVALID_PARAMETER = NULL;
      OrekitMessages *OrekitMessages::TLE_LINES_DO_NOT_REFER_TO_SAME_OBJECT = NULL;
      OrekitMessages *OrekitMessages::TOO_LARGE_DATA_TYPE = NULL;
      OrekitMessages *OrekitMessages::TOO_LARGE_DEGREE_FOR_GRAVITY_FIELD = NULL;
      OrekitMessages *OrekitMessages::TOO_LARGE_ECCENTRICITY_FOR_PROPAGATION_MODEL = NULL;
      OrekitMessages *OrekitMessages::TOO_LARGE_ORDER_FOR_GRAVITY_FIELD = NULL;
      OrekitMessages *OrekitMessages::TOO_SHORT_TRANSITION_TIME_FOR_ATTITUDES_SWITCH = NULL;
      OrekitMessages *OrekitMessages::TOO_SMALL_SCALE_FOR_PARAMETER = NULL;
      OrekitMessages *OrekitMessages::TRAJECTORY_INSIDE_BRILLOUIN_SPHERE = NULL;
      OrekitMessages *OrekitMessages::TRAJECTORY_NOT_CROSSING_XZPLANE = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_COMPUTE_BROUWER_LYDDANE_MEAN_PARAMETERS = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_COMPUTE_DSST_MEAN_PARAMETERS = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_COMPUTE_ECKSTEIN_HECHLER_MEAN_PARAMETERS = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_COMPUTE_HYPERBOLIC_ECCENTRIC_ANOMALY = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_COMPUTE_TLE = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_FIND_FILE = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_FIND_RESOURCE = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_GENERATE_NEW_DATA_AFTER = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_GENERATE_NEW_DATA_BEFORE = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_PARSE_ELEMENT_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_PARSE_LINE_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_READ_JPL_HEADER = NULL;
      OrekitMessages *OrekitMessages::UNDEFINED_ABSOLUTE_PVCOORDINATES = NULL;
      OrekitMessages *OrekitMessages::UNDEFINED_ORBIT = NULL;
      OrekitMessages *OrekitMessages::UNEXPECTED_CONTENT_TYPE = NULL;
      OrekitMessages *OrekitMessages::UNEXPECTED_DATA_AFTER_LINE_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::UNEXPECTED_DATA_AT_LINE_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::UNEXPECTED_END_OF_FILE = NULL;
      OrekitMessages *OrekitMessages::UNEXPECTED_END_OF_FILE_AFTER_LINE = NULL;
      OrekitMessages *OrekitMessages::UNEXPECTED_FILE_FORMAT_ERROR_FOR_LOADER = NULL;
      OrekitMessages *OrekitMessages::UNEXPECTED_FORMAT_FOR_ILRS_FILE = NULL;
      OrekitMessages *OrekitMessages::UNEXPECTED_TWO_ELEVATION_VALUES_FOR_ONE_AZIMUTH = NULL;
      OrekitMessages *OrekitMessages::UNINITIALIZED_VALUE_FOR_KEY = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_ADDITIONAL_STATE = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_AUTHENTICATION_METHOD = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_CARRIER_PHASE_CODE = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_CLOCK_DATA_TYPE = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_DATA_FORMAT = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_ENCODED_MESSAGE_NUMBER = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_HOST = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_MONTH = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_NAVIGATION_SYSTEM = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_RINEX_FREQUENCY = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_SATELLITE_ANTENNA_CODE = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_SATELLITE_SYSTEM = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_TIME_SYSTEM = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_UNIT = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_UTC_ID = NULL;
      OrekitMessages *OrekitMessages::UNSUPPORTED_FILE_FORMAT = NULL;
      OrekitMessages *OrekitMessages::UNSUPPORTED_FILE_FORMAT_VERSION = NULL;
      OrekitMessages *OrekitMessages::UNSUPPORTED_FREQUENCY_FOR_ANTENNA = NULL;
      OrekitMessages *OrekitMessages::UNSUPPORTED_LOCAL_ORBITAL_FRAME = NULL;
      OrekitMessages *OrekitMessages::UNSUPPORTED_PARAMETER_NAME = NULL;
      OrekitMessages *OrekitMessages::UNSUPPORTED_TIME_TRANSFORM = NULL;
      OrekitMessages *OrekitMessages::UNSUPPORTED_TRANSFORM = NULL;
      OrekitMessages *OrekitMessages::VALUE_NOT_FOUND = NULL;
      OrekitMessages *OrekitMessages::VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_AVAILABLE_FOR_DATE = NULL;
      OrekitMessages *OrekitMessages::VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_LOADED = NULL;
      OrekitMessages *OrekitMessages::WRONG_COLUMNS_NUMBER = NULL;
      OrekitMessages *OrekitMessages::WRONG_DEGREE_OR_ORDER = NULL;
      OrekitMessages *OrekitMessages::WRONG_EOP_INTERPOLATION_DEGREE = NULL;
      OrekitMessages *OrekitMessages::WRONG_INTERPOLATOR_DEFINED_FOR_STATE_INTERPOLATION = NULL;
      OrekitMessages *OrekitMessages::WRONG_NB_COMPONENTS = NULL;
      OrekitMessages *OrekitMessages::WRONG_ORBIT_PARAMETERS_TYPE = NULL;
      OrekitMessages *OrekitMessages::WRONG_PARSING_TYPE = NULL;

      jclass OrekitMessages::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/OrekitMessages");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLocalizedString_3cd873bfb132c4fd] = env->getMethodID(cls, "getLocalizedString", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getSourceString_11b109bd155ca898] = env->getMethodID(cls, "getSourceString", "()Ljava/lang/String;");
          mids$[mid_valueOf_4bd8e8f651585e7e] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/errors/OrekitMessages;");
          mids$[mid_values_0bd089a5efd8b3d2] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/errors/OrekitMessages;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ADDITIONAL_STATE_NAME_ALREADY_IN_USE = new OrekitMessages(env->getStaticObjectField(cls, "ADDITIONAL_STATE_NAME_ALREADY_IN_USE", "Lorg/orekit/errors/OrekitMessages;"));
          ALMOST_CRITICALLY_INCLINED_ORBIT = new OrekitMessages(env->getStaticObjectField(cls, "ALMOST_CRITICALLY_INCLINED_ORBIT", "Lorg/orekit/errors/OrekitMessages;"));
          ALMOST_EQUATORIAL_ORBIT = new OrekitMessages(env->getStaticObjectField(cls, "ALMOST_EQUATORIAL_ORBIT", "Lorg/orekit/errors/OrekitMessages;"));
          ALTITUDE_BELOW_ALLOWED_THRESHOLD = new OrekitMessages(env->getStaticObjectField(cls, "ALTITUDE_BELOW_ALLOWED_THRESHOLD", "Lorg/orekit/errors/OrekitMessages;"));
          ANGLE_TYPE_NOT_SUPPORTED = new OrekitMessages(env->getStaticObjectField(cls, "ANGLE_TYPE_NOT_SUPPORTED", "Lorg/orekit/errors/OrekitMessages;"));
          ATTEMPT_TO_GENERATE_MALFORMED_FILE = new OrekitMessages(env->getStaticObjectField(cls, "ATTEMPT_TO_GENERATE_MALFORMED_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          ATTITUDE_POINTING_LAW_DOES_NOT_POINT_TO_GROUND = new OrekitMessages(env->getStaticObjectField(cls, "ATTITUDE_POINTING_LAW_DOES_NOT_POINT_TO_GROUND", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_LOF = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_LOF", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_NON_INERTIAL_FRAME = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_NON_INERTIAL_FRAME", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_COMPUTE_AIMING_AT_SINGULAR_POINT = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_COMPUTE_AIMING_AT_SINGULAR_POINT", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_COMPUTE_LAGRANGIAN = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_COMPUTE_LAGRANGIAN", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_ESTIMATE_PRECESSION_WITHOUT_PROPER_DERIVATIVES = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_ESTIMATE_PRECESSION_WITHOUT_PROPER_DERIVATIVES", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_FIND_SATELLITE_IN_SYSTEM = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_FIND_SATELLITE_IN_SYSTEM", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_PARSE_BOTH_TAU_AND_GAMMA = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_PARSE_BOTH_TAU_AND_GAMMA", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_PARSE_GNSS_DATA = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_PARSE_GNSS_DATA", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_PARSE_SOURCETABLE = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_PARSE_SOURCETABLE", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_START_PROPAGATION_FROM_INFINITY = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_START_PROPAGATION_FROM_INFINITY", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_DATE_INVALID_LENGTH_TIME_FIELD = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_DATE_INVALID_LENGTH_TIME_FIELD", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_DATE_INVALID_PREAMBLE_FIELD = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_DATE_INVALID_PREAMBLE_FIELD", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_DATE_MISSING_AGENCY_EPOCH = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_DATE_MISSING_AGENCY_EPOCH", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_DIFFERENT_LVLH_DEFINITION = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_DIFFERENT_LVLH_DEFINITION", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_INCOMPATIBLE_KEYS_BOTH_USED = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_INCOMPATIBLE_KEYS_BOTH_USED", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_INCOMPLETE_DATA = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_INCOMPLETE_DATA", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_INCONSISTENT_NUMBER_OF_ATTITUDE_STATES = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_INCONSISTENT_NUMBER_OF_ATTITUDE_STATES", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_INCONSISTENT_TIME_SYSTEMS = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_INCONSISTENT_TIME_SYSTEMS", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_INVALID_FRAME = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_INVALID_FRAME", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_INVALID_ROTATION_SEQUENCE = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_INVALID_ROTATION_SEQUENCE", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_KEYWORD_NOT_ALLOWED_IN_VERSION = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_KEYWORD_NOT_ALLOWED_IN_VERSION", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_MANEUVER_MISSING_TIME = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_MANEUVER_MISSING_TIME", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_MANEUVER_UNITS_WRONG_NB_COMPONENTS = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_MANEUVER_UNITS_WRONG_NB_COMPONENTS", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_MISSING_KEYWORD = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_MISSING_KEYWORD", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_MISSING_SENSOR_INDEX = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_MISSING_SENSOR_INDEX", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_SENSOR_INDEX_ALREADY_USED = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_SENSOR_INDEX_ALREADY_USED", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_TDM_KEYWORD_NOT_FOUND = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_TDM_KEYWORD_NOT_FOUND", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_TDM_MISSING_RANGE_UNITS_CONVERTER = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_TDM_MISSING_RANGE_UNITS_CONVERTER", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_TIME_SYSTEM_NOT_IMPLEMENTED = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_TIME_SYSTEM_NOT_IMPLEMENTED", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_TIME_SYSTEM_NOT_READ_YET = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_TIME_SYSTEM_NOT_READ_YET", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_UNEXPECTED_KEYWORD = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_UNEXPECTED_KEYWORD", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_UNKNOWN_ATTITUDE_TYPE = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_UNKNOWN_ATTITUDE_TYPE", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_UNKNOWN_CONVENTIONS = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_UNKNOWN_CONVENTIONS", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_UNKNOWN_GM = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_UNKNOWN_GM", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_UNKNOWN_SPACECRAFT_MASS = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_UNKNOWN_SPACECRAFT_MASS", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_UNSUPPORTED_ELEMENT_SET_TYPE = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_UNSUPPORTED_ELEMENT_SET_TYPE", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_UNSUPPORTED_RETROGRADE_EQUINOCTIAL = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_UNSUPPORTED_RETROGRADE_EQUINOCTIAL", "Lorg/orekit/errors/OrekitMessages;"));
          CLOCK_FILE_UNSUPPORTED_VERSION = new OrekitMessages(env->getStaticObjectField(cls, "CLOCK_FILE_UNSUPPORTED_VERSION", "Lorg/orekit/errors/OrekitMessages;"));
          CONNECTION_ERROR = new OrekitMessages(env->getStaticObjectField(cls, "CONNECTION_ERROR", "Lorg/orekit/errors/OrekitMessages;"));
          CORRUPTED_FILE = new OrekitMessages(env->getStaticObjectField(cls, "CORRUPTED_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          CPF_UNEXPECTED_END_OF_FILE = new OrekitMessages(env->getStaticObjectField(cls, "CPF_UNEXPECTED_END_OF_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          CRD_UNEXPECTED_END_OF_FILE = new OrekitMessages(env->getStaticObjectField(cls, "CRD_UNEXPECTED_END_OF_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          DATA_ROOT_DIRECTORY_DOES_NOT_EXIST = new OrekitMessages(env->getStaticObjectField(cls, "DATA_ROOT_DIRECTORY_DOES_NOT_EXIST", "Lorg/orekit/errors/OrekitMessages;"));
          DATES_MISMATCH = new OrekitMessages(env->getStaticObjectField(cls, "DATES_MISMATCH", "Lorg/orekit/errors/OrekitMessages;"));
          DIFFERENT_STATE_DEFINITION = new OrekitMessages(env->getStaticObjectField(cls, "DIFFERENT_STATE_DEFINITION", "Lorg/orekit/errors/OrekitMessages;"));
          DIFFERENT_TIME_OF_CLOSEST_APPROACH = new OrekitMessages(env->getStaticObjectField(cls, "DIFFERENT_TIME_OF_CLOSEST_APPROACH", "Lorg/orekit/errors/OrekitMessages;"));
          DIMENSION_INCONSISTENT_WITH_PARAMETERS = new OrekitMessages(env->getStaticObjectField(cls, "DIMENSION_INCONSISTENT_WITH_PARAMETERS", "Lorg/orekit/errors/OrekitMessages;"));
          DSST_ECC_NO_NUMERICAL_AVERAGING_METHOD = new OrekitMessages(env->getStaticObjectField(cls, "DSST_ECC_NO_NUMERICAL_AVERAGING_METHOD", "Lorg/orekit/errors/OrekitMessages;"));
          DSST_NEWCOMB_OPERATORS_COMPUTATION = new OrekitMessages(env->getStaticObjectField(cls, "DSST_NEWCOMB_OPERATORS_COMPUTATION", "Lorg/orekit/errors/OrekitMessages;"));
          DSST_SPR_SHADOW_INCONSISTENT = new OrekitMessages(env->getStaticObjectField(cls, "DSST_SPR_SHADOW_INCONSISTENT", "Lorg/orekit/errors/OrekitMessages;"));
          DSST_VMNS_COEFFICIENT_ERROR_MS = new OrekitMessages(env->getStaticObjectField(cls, "DSST_VMNS_COEFFICIENT_ERROR_MS", "Lorg/orekit/errors/OrekitMessages;"));
          DUPLICATED_GRAVITY_FIELD_COEFFICIENT_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "DUPLICATED_GRAVITY_FIELD_COEFFICIENT_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          END_OF_ENCODED_MESSAGE = new OrekitMessages(env->getStaticObjectField(cls, "END_OF_ENCODED_MESSAGE", "Lorg/orekit/errors/OrekitMessages;"));
          EVENT_DATE_TOO_CLOSE = new OrekitMessages(env->getStaticObjectField(cls, "EVENT_DATE_TOO_CLOSE", "Lorg/orekit/errors/OrekitMessages;"));
          EXCEPTIONAL_DATA_CONTEXT = new OrekitMessages(env->getStaticObjectField(cls, "EXCEPTIONAL_DATA_CONTEXT", "Lorg/orekit/errors/OrekitMessages;"));
          FAILED_AUTHENTICATION = new OrekitMessages(env->getStaticObjectField(cls, "FAILED_AUTHENTICATION", "Lorg/orekit/errors/OrekitMessages;"));
          FIND_ROOT = new OrekitMessages(env->getStaticObjectField(cls, "FIND_ROOT", "Lorg/orekit/errors/OrekitMessages;"));
          FRAMES_MISMATCH = new OrekitMessages(env->getStaticObjectField(cls, "FRAMES_MISMATCH", "Lorg/orekit/errors/OrekitMessages;"));
          FRAME_ALREADY_ATTACHED = new OrekitMessages(env->getStaticObjectField(cls, "FRAME_ALREADY_ATTACHED", "Lorg/orekit/errors/OrekitMessages;"));
          FRAME_ANCESTOR_OF_BOTH_FRAMES = new OrekitMessages(env->getStaticObjectField(cls, "FRAME_ANCESTOR_OF_BOTH_FRAMES", "Lorg/orekit/errors/OrekitMessages;"));
          FRAME_ANCESTOR_OF_NEITHER_FRAME = new OrekitMessages(env->getStaticObjectField(cls, "FRAME_ANCESTOR_OF_NEITHER_FRAME", "Lorg/orekit/errors/OrekitMessages;"));
          FRAME_NOT_ATTACHED = new OrekitMessages(env->getStaticObjectField(cls, "FRAME_NOT_ATTACHED", "Lorg/orekit/errors/OrekitMessages;"));
          FRAME_NO_NTH_ANCESTOR = new OrekitMessages(env->getStaticObjectField(cls, "FRAME_NO_NTH_ANCESTOR", "Lorg/orekit/errors/OrekitMessages;"));
          FUNCTION_NOT_IMPLEMENTED = new OrekitMessages(env->getStaticObjectField(cls, "FUNCTION_NOT_IMPLEMENTED", "Lorg/orekit/errors/OrekitMessages;"));
          GNSS_PARITY_ERROR = new OrekitMessages(env->getStaticObjectField(cls, "GNSS_PARITY_ERROR", "Lorg/orekit/errors/OrekitMessages;"));
          GRAVITY_FIELD_NORMALIZATION_UNDERFLOW = new OrekitMessages(env->getStaticObjectField(cls, "GRAVITY_FIELD_NORMALIZATION_UNDERFLOW", "Lorg/orekit/errors/OrekitMessages;"));
          HEADER_ALREADY_WRITTEN = new OrekitMessages(env->getStaticObjectField(cls, "HEADER_ALREADY_WRITTEN", "Lorg/orekit/errors/OrekitMessages;"));
          HEADER_NOT_WRITTEN = new OrekitMessages(env->getStaticObjectField(cls, "HEADER_NOT_WRITTEN", "Lorg/orekit/errors/OrekitMessages;"));
          HYPERBOLIC_ORBIT_NOT_HANDLED_AS = new OrekitMessages(env->getStaticObjectField(cls, "HYPERBOLIC_ORBIT_NOT_HANDLED_AS", "Lorg/orekit/errors/OrekitMessages;"));
          INCOMPATIBLE_FRAMES = new OrekitMessages(env->getStaticObjectField(cls, "INCOMPATIBLE_FRAMES", "Lorg/orekit/errors/OrekitMessages;"));
          INCOMPATIBLE_FREQUENCIES_FOR_COMBINATION_OF_MEASUREMENTS = new OrekitMessages(env->getStaticObjectField(cls, "INCOMPATIBLE_FREQUENCIES_FOR_COMBINATION_OF_MEASUREMENTS", "Lorg/orekit/errors/OrekitMessages;"));
          INCOMPATIBLE_UNITS = new OrekitMessages(env->getStaticObjectField(cls, "INCOMPATIBLE_UNITS", "Lorg/orekit/errors/OrekitMessages;"));
          INCOMPLETE_HEADER = new OrekitMessages(env->getStaticObjectField(cls, "INCOMPLETE_HEADER", "Lorg/orekit/errors/OrekitMessages;"));
          INCONSISTENT_ASTRONOMICAL_UNIT_IN_FILES = new OrekitMessages(env->getStaticObjectField(cls, "INCONSISTENT_ASTRONOMICAL_UNIT_IN_FILES", "Lorg/orekit/errors/OrekitMessages;"));
          INCONSISTENT_DATES_IN_IERS_FILE = new OrekitMessages(env->getStaticObjectField(cls, "INCONSISTENT_DATES_IN_IERS_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          INCONSISTENT_EARTH_MOON_RATIO_IN_FILES = new OrekitMessages(env->getStaticObjectField(cls, "INCONSISTENT_EARTH_MOON_RATIO_IN_FILES", "Lorg/orekit/errors/OrekitMessages;"));
          INCONSISTENT_NUMBER_OF_ELEMENTS = new OrekitMessages(env->getStaticObjectField(cls, "INCONSISTENT_NUMBER_OF_ELEMENTS", "Lorg/orekit/errors/OrekitMessages;"));
          INCONSISTENT_NUMBER_OF_SATS = new OrekitMessages(env->getStaticObjectField(cls, "INCONSISTENT_NUMBER_OF_SATS", "Lorg/orekit/errors/OrekitMessages;"));
          INCONSISTENT_NUMBER_OF_TEC_MAPS_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "INCONSISTENT_NUMBER_OF_TEC_MAPS_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          INCONSISTENT_SAMPLING_DATE = new OrekitMessages(env->getStaticObjectField(cls, "INCONSISTENT_SAMPLING_DATE", "Lorg/orekit/errors/OrekitMessages;"));
          INCONSISTENT_SATELLITE_SYSTEM = new OrekitMessages(env->getStaticObjectField(cls, "INCONSISTENT_SATELLITE_SYSTEM", "Lorg/orekit/errors/OrekitMessages;"));
          INCONSISTENT_SELECTION = new OrekitMessages(env->getStaticObjectField(cls, "INCONSISTENT_SELECTION", "Lorg/orekit/errors/OrekitMessages;"));
          INERTIAL_FORCE_MODEL_MISSING = new OrekitMessages(env->getStaticObjectField(cls, "INERTIAL_FORCE_MODEL_MISSING", "Lorg/orekit/errors/OrekitMessages;"));
          INITIAL_MATRIX_AND_PARAMETERS_NUMBER_MISMATCH = new OrekitMessages(env->getStaticObjectField(cls, "INITIAL_MATRIX_AND_PARAMETERS_NUMBER_MISMATCH", "Lorg/orekit/errors/OrekitMessages;"));
          INITIAL_STATE_NOT_SPECIFIED_FOR_ORBIT_PROPAGATION = new OrekitMessages(env->getStaticObjectField(cls, "INITIAL_STATE_NOT_SPECIFIED_FOR_ORBIT_PROPAGATION", "Lorg/orekit/errors/OrekitMessages;"));
          INTERNAL_ERROR = new OrekitMessages(env->getStaticObjectField(cls, "INTERNAL_ERROR", "Lorg/orekit/errors/OrekitMessages;"));
          INVALID_GNSS_DATA = new OrekitMessages(env->getStaticObjectField(cls, "INVALID_GNSS_DATA", "Lorg/orekit/errors/OrekitMessages;"));
          INVALID_MEASUREMENT_TYPES_FOR_COMBINATION_OF_MEASUREMENTS = new OrekitMessages(env->getStaticObjectField(cls, "INVALID_MEASUREMENT_TYPES_FOR_COMBINATION_OF_MEASUREMENTS", "Lorg/orekit/errors/OrekitMessages;"));
          INVALID_PARAMETER_RANGE = new OrekitMessages(env->getStaticObjectField(cls, "INVALID_PARAMETER_RANGE", "Lorg/orekit/errors/OrekitMessages;"));
          INVALID_RANGE_INDICATOR_IN_CRD_FILE = new OrekitMessages(env->getStaticObjectField(cls, "INVALID_RANGE_INDICATOR_IN_CRD_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          INVALID_SATELLITE_ID = new OrekitMessages(env->getStaticObjectField(cls, "INVALID_SATELLITE_ID", "Lorg/orekit/errors/OrekitMessages;"));
          INVALID_SATELLITE_SYSTEM = new OrekitMessages(env->getStaticObjectField(cls, "INVALID_SATELLITE_SYSTEM", "Lorg/orekit/errors/OrekitMessages;"));
          INVALID_TYPE_FOR_FUNCTION = new OrekitMessages(env->getStaticObjectField(cls, "INVALID_TYPE_FOR_FUNCTION", "Lorg/orekit/errors/OrekitMessages;"));
          IRREGULAR_OR_INCOMPLETE_GRID = new OrekitMessages(env->getStaticObjectField(cls, "IRREGULAR_OR_INCOMPLETE_GRID", "Lorg/orekit/errors/OrekitMessages;"));
          ITRF_VERSIONS_PREFIX_ONLY = new OrekitMessages(env->getStaticObjectField(cls, "ITRF_VERSIONS_PREFIX_ONLY", "Lorg/orekit/errors/OrekitMessages;"));
          KLOBUCHAR_ALPHA_BETA_NOT_AVAILABLE_FOR_DATE = new OrekitMessages(env->getStaticObjectField(cls, "KLOBUCHAR_ALPHA_BETA_NOT_AVAILABLE_FOR_DATE", "Lorg/orekit/errors/OrekitMessages;"));
          KLOBUCHAR_ALPHA_BETA_NOT_LOADED = new OrekitMessages(env->getStaticObjectField(cls, "KLOBUCHAR_ALPHA_BETA_NOT_LOADED", "Lorg/orekit/errors/OrekitMessages;"));
          METHOD_NOT_AVAILABLE_WITHOUT_CENTRAL_BODY = new OrekitMessages(env->getStaticObjectField(cls, "METHOD_NOT_AVAILABLE_WITHOUT_CENTRAL_BODY", "Lorg/orekit/errors/OrekitMessages;"));
          MISMATCHED_FREQUENCIES = new OrekitMessages(env->getStaticObjectField(cls, "MISMATCHED_FREQUENCIES", "Lorg/orekit/errors/OrekitMessages;"));
          MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES = new OrekitMessages(env->getStaticObjectField(cls, "MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES", "Lorg/orekit/errors/OrekitMessages;"));
          MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES_GAP = new OrekitMessages(env->getStaticObjectField(cls, "MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES_GAP", "Lorg/orekit/errors/OrekitMessages;"));
          MISSING_GRAVITY_FIELD_COEFFICIENT_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "MISSING_GRAVITY_FIELD_COEFFICIENT_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          MISSING_HEADER = new OrekitMessages(env->getStaticObjectField(cls, "MISSING_HEADER", "Lorg/orekit/errors/OrekitMessages;"));
          MISSING_SECOND_TLE_LINE = new OrekitMessages(env->getStaticObjectField(cls, "MISSING_SECOND_TLE_LINE", "Lorg/orekit/errors/OrekitMessages;"));
          MISSING_SERIE_J_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "MISSING_SERIE_J_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          MISSING_STATION_DATA_FOR_EPOCH = new OrekitMessages(env->getStaticObjectField(cls, "MISSING_STATION_DATA_FOR_EPOCH", "Lorg/orekit/errors/OrekitMessages;"));
          MISSING_VELOCITY = new OrekitMessages(env->getStaticObjectField(cls, "MISSING_VELOCITY", "Lorg/orekit/errors/OrekitMessages;"));
          MODIP_GRID_NOT_LOADED = new OrekitMessages(env->getStaticObjectField(cls, "MODIP_GRID_NOT_LOADED", "Lorg/orekit/errors/OrekitMessages;"));
          MOUNPOINT_ALREADY_CONNECTED = new OrekitMessages(env->getStaticObjectField(cls, "MOUNPOINT_ALREADY_CONNECTED", "Lorg/orekit/errors/OrekitMessages;"));
          MULTIPLE_INTERPOLATOR_USED = new OrekitMessages(env->getStaticObjectField(cls, "MULTIPLE_INTERPOLATOR_USED", "Lorg/orekit/errors/OrekitMessages;"));
          MULTIPLE_SHOOTING_UNDERCONSTRAINED = new OrekitMessages(env->getStaticObjectField(cls, "MULTIPLE_SHOOTING_UNDERCONSTRAINED", "Lorg/orekit/errors/OrekitMessages;"));
          NEITHER_DIRECTORY_NOR_ZIP_OR_JAR = new OrekitMessages(env->getStaticObjectField(cls, "NEITHER_DIRECTORY_NOR_ZIP_OR_JAR", "Lorg/orekit/errors/OrekitMessages;"));
          NEQUICK_F2_FM3_NOT_LOADED = new OrekitMessages(env->getStaticObjectField(cls, "NEQUICK_F2_FM3_NOT_LOADED", "Lorg/orekit/errors/OrekitMessages;"));
          NON_CHRONOLOGICALLY_SORTED_ENTRIES = new OrekitMessages(env->getStaticObjectField(cls, "NON_CHRONOLOGICALLY_SORTED_ENTRIES", "Lorg/orekit/errors/OrekitMessages;"));
          NON_CHRONOLOGICAL_DATES_FOR_OBSERVATIONS = new OrekitMessages(env->getStaticObjectField(cls, "NON_CHRONOLOGICAL_DATES_FOR_OBSERVATIONS", "Lorg/orekit/errors/OrekitMessages;"));
          NON_CHRONOLOGICAL_DATES_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NON_CHRONOLOGICAL_DATES_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NON_COPLANAR_POINTS = new OrekitMessages(env->getStaticObjectField(cls, "NON_COPLANAR_POINTS", "Lorg/orekit/errors/OrekitMessages;"));
          NON_DIFFERENT_DATES_FOR_OBSERVATIONS = new OrekitMessages(env->getStaticObjectField(cls, "NON_DIFFERENT_DATES_FOR_OBSERVATIONS", "Lorg/orekit/errors/OrekitMessages;"));
          NON_EXISTENT_DATE = new OrekitMessages(env->getStaticObjectField(cls, "NON_EXISTENT_DATE", "Lorg/orekit/errors/OrekitMessages;"));
          NON_EXISTENT_DAY_NUMBER_IN_YEAR = new OrekitMessages(env->getStaticObjectField(cls, "NON_EXISTENT_DAY_NUMBER_IN_YEAR", "Lorg/orekit/errors/OrekitMessages;"));
          NON_EXISTENT_GEOMAGNETIC_MODEL = new OrekitMessages(env->getStaticObjectField(cls, "NON_EXISTENT_GEOMAGNETIC_MODEL", "Lorg/orekit/errors/OrekitMessages;"));
          NON_EXISTENT_HMS_TIME = new OrekitMessages(env->getStaticObjectField(cls, "NON_EXISTENT_HMS_TIME", "Lorg/orekit/errors/OrekitMessages;"));
          NON_EXISTENT_MONTH = new OrekitMessages(env->getStaticObjectField(cls, "NON_EXISTENT_MONTH", "Lorg/orekit/errors/OrekitMessages;"));
          NON_EXISTENT_TIME = new OrekitMessages(env->getStaticObjectField(cls, "NON_EXISTENT_TIME", "Lorg/orekit/errors/OrekitMessages;"));
          NON_EXISTENT_WEEK_DATE = new OrekitMessages(env->getStaticObjectField(cls, "NON_EXISTENT_WEEK_DATE", "Lorg/orekit/errors/OrekitMessages;"));
          NON_EXISTENT_YEAR_MONTH_DAY = new OrekitMessages(env->getStaticObjectField(cls, "NON_EXISTENT_YEAR_MONTH_DAY", "Lorg/orekit/errors/OrekitMessages;"));
          NON_PSEUDO_INERTIAL_FRAME = new OrekitMessages(env->getStaticObjectField(cls, "NON_PSEUDO_INERTIAL_FRAME", "Lorg/orekit/errors/OrekitMessages;"));
          NON_PSEUDO_INERTIAL_FRAME_NOT_SUITABLE_AS_REFERENCE_FOR_INERTIAL_FORCES = new OrekitMessages(env->getStaticObjectField(cls, "NON_PSEUDO_INERTIAL_FRAME_NOT_SUITABLE_AS_REFERENCE_FOR_INERTIAL_FORCES", "Lorg/orekit/errors/OrekitMessages;"));
          NON_RESETABLE_STATE = new OrekitMessages(env->getStaticObjectField(cls, "NON_RESETABLE_STATE", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_A_DIRECTORY = new OrekitMessages(env->getStaticObjectField(cls, "NOT_A_DIRECTORY", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_A_JPL_EPHEMERIDES_BINARY_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NOT_A_JPL_EPHEMERIDES_BINARY_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_A_MARSHALL_SOLAR_ACTIVITY_FUTURE_ESTIMATION_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NOT_A_MARSHALL_SOLAR_ACTIVITY_FUTURE_ESTIMATION_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_A_SUPPORTED_HATANAKA_COMPRESSED_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NOT_A_SUPPORTED_HATANAKA_COMPRESSED_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_A_SUPPORTED_IERS_DATA_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NOT_A_SUPPORTED_IERS_DATA_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_A_SUPPORTED_SEM_ALMANAC_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NOT_A_SUPPORTED_SEM_ALMANAC_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_A_SUPPORTED_UNIX_COMPRESSED_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NOT_A_SUPPORTED_UNIX_COMPRESSED_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_A_SUPPORTED_YUMA_ALMANAC_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NOT_A_SUPPORTED_YUMA_ALMANAC_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_ENOUGH_ATTITUDE_PROVIDERS = new OrekitMessages(env->getStaticObjectField(cls, "NOT_ENOUGH_ATTITUDE_PROVIDERS", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_ENOUGH_CACHED_NEIGHBORS = new OrekitMessages(env->getStaticObjectField(cls, "NOT_ENOUGH_CACHED_NEIGHBORS", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_ENOUGH_DATA = new OrekitMessages(env->getStaticObjectField(cls, "NOT_ENOUGH_DATA", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_ENOUGH_GNSS_FOR_DOP = new OrekitMessages(env->getStaticObjectField(cls, "NOT_ENOUGH_GNSS_FOR_DOP", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_ENOUGH_PROPAGATORS = new OrekitMessages(env->getStaticObjectField(cls, "NOT_ENOUGH_PROPAGATORS", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_POSITIVE_SPACECRAFT_MASS = new OrekitMessages(env->getStaticObjectField(cls, "NOT_POSITIVE_SPACECRAFT_MASS", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_STRICTLY_POSITIVE = new OrekitMessages(env->getStaticObjectField(cls, "NOT_STRICTLY_POSITIVE", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_TLE_LINES = new OrekitMessages(env->getStaticObjectField(cls, "NOT_TLE_LINES", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_VALID_INTERNATIONAL_DESIGNATOR = new OrekitMessages(env->getStaticObjectField(cls, "NOT_VALID_INTERNATIONAL_DESIGNATOR", "Lorg/orekit/errors/OrekitMessages;"));
          NO_CACHED_ENTRIES = new OrekitMessages(env->getStaticObjectField(cls, "NO_CACHED_ENTRIES", "Lorg/orekit/errors/OrekitMessages;"));
          NO_DATA_GENERATED = new OrekitMessages(env->getStaticObjectField(cls, "NO_DATA_GENERATED", "Lorg/orekit/errors/OrekitMessages;"));
          NO_DATA_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NO_DATA_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NO_DATA_LOADED_FOR_CELESTIAL_BODY = new OrekitMessages(env->getStaticObjectField(cls, "NO_DATA_LOADED_FOR_CELESTIAL_BODY", "Lorg/orekit/errors/OrekitMessages;"));
          NO_EARTH_ORIENTATION_PARAMETERS = new OrekitMessages(env->getStaticObjectField(cls, "NO_EARTH_ORIENTATION_PARAMETERS", "Lorg/orekit/errors/OrekitMessages;"));
          NO_EARTH_ORIENTATION_PARAMETERS_LOADED = new OrekitMessages(env->getStaticObjectField(cls, "NO_EARTH_ORIENTATION_PARAMETERS_LOADED", "Lorg/orekit/errors/OrekitMessages;"));
          NO_ENTRIES_IN_IERS_UTC_TAI_HISTORY_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NO_ENTRIES_IN_IERS_UTC_TAI_HISTORY_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NO_EPOCH_IN_IONEX_HEADER = new OrekitMessages(env->getStaticObjectField(cls, "NO_EPOCH_IN_IONEX_HEADER", "Lorg/orekit/errors/OrekitMessages;"));
          NO_GRAVITY_FIELD_DATA_LOADED = new OrekitMessages(env->getStaticObjectField(cls, "NO_GRAVITY_FIELD_DATA_LOADED", "Lorg/orekit/errors/OrekitMessages;"));
          NO_IERS_UTC_TAI_HISTORY_DATA_LOADED = new OrekitMessages(env->getStaticObjectField(cls, "NO_IERS_UTC_TAI_HISTORY_DATA_LOADED", "Lorg/orekit/errors/OrekitMessages;"));
          NO_INTERPOLATOR_FOR_STATE_DEFINITION = new OrekitMessages(env->getStaticObjectField(cls, "NO_INTERPOLATOR_FOR_STATE_DEFINITION", "Lorg/orekit/errors/OrekitMessages;"));
          NO_JPL_EPHEMERIDES_BINARY_FILES_FOUND = new OrekitMessages(env->getStaticObjectField(cls, "NO_JPL_EPHEMERIDES_BINARY_FILES_FOUND", "Lorg/orekit/errors/OrekitMessages;"));
          NO_KLOBUCHAR_ALPHA_BETA_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NO_KLOBUCHAR_ALPHA_BETA_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NO_LATITUDE_LONGITUDE_BONDARIES_IN_IONEX_HEADER = new OrekitMessages(env->getStaticObjectField(cls, "NO_LATITUDE_LONGITUDE_BONDARIES_IN_IONEX_HEADER", "Lorg/orekit/errors/OrekitMessages;"));
          NO_OCEAN_TIDE_DATA_LOADED = new OrekitMessages(env->getStaticObjectField(cls, "NO_OCEAN_TIDE_DATA_LOADED", "Lorg/orekit/errors/OrekitMessages;"));
          NO_PROPAGATOR_CONFIGURED = new OrekitMessages(env->getStaticObjectField(cls, "NO_PROPAGATOR_CONFIGURED", "Lorg/orekit/errors/OrekitMessages;"));
          NO_REFERENCE_DATE_FOR_PARAMETER = new OrekitMessages(env->getStaticObjectField(cls, "NO_REFERENCE_DATE_FOR_PARAMETER", "Lorg/orekit/errors/OrekitMessages;"));
          NO_SEM_ALMANAC_AVAILABLE = new OrekitMessages(env->getStaticObjectField(cls, "NO_SEM_ALMANAC_AVAILABLE", "Lorg/orekit/errors/OrekitMessages;"));
          NO_SOLAR_ACTIVITY_AT_DATE = new OrekitMessages(env->getStaticObjectField(cls, "NO_SOLAR_ACTIVITY_AT_DATE", "Lorg/orekit/errors/OrekitMessages;"));
          NO_SUCH_ITRF_FRAME = new OrekitMessages(env->getStaticObjectField(cls, "NO_SUCH_ITRF_FRAME", "Lorg/orekit/errors/OrekitMessages;"));
          NO_TEC_DATA_IN_FILES_FOR_DATE = new OrekitMessages(env->getStaticObjectField(cls, "NO_TEC_DATA_IN_FILES_FOR_DATE", "Lorg/orekit/errors/OrekitMessages;"));
          NO_TLE_DATA_AVAILABLE = new OrekitMessages(env->getStaticObjectField(cls, "NO_TLE_DATA_AVAILABLE", "Lorg/orekit/errors/OrekitMessages;"));
          NO_TLE_FOR_LAUNCH_YEAR_NUMBER_PIECE = new OrekitMessages(env->getStaticObjectField(cls, "NO_TLE_FOR_LAUNCH_YEAR_NUMBER_PIECE", "Lorg/orekit/errors/OrekitMessages;"));
          NO_TLE_FOR_OBJECT = new OrekitMessages(env->getStaticObjectField(cls, "NO_TLE_FOR_OBJECT", "Lorg/orekit/errors/OrekitMessages;"));
          NO_UNSCENTED_TRANSFORM_CONFIGURED = new OrekitMessages(env->getStaticObjectField(cls, "NO_UNSCENTED_TRANSFORM_CONFIGURED", "Lorg/orekit/errors/OrekitMessages;"));
          NO_VIENNA_ACOEF_OR_ZENITH_DELAY_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NO_VIENNA_ACOEF_OR_ZENITH_DELAY_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NO_YUMA_ALMANAC_AVAILABLE = new OrekitMessages(env->getStaticObjectField(cls, "NO_YUMA_ALMANAC_AVAILABLE", "Lorg/orekit/errors/OrekitMessages;"));
          NULL_ARGUMENT = new OrekitMessages(env->getStaticObjectField(cls, "NULL_ARGUMENT", "Lorg/orekit/errors/OrekitMessages;"));
          NULL_PARENT_FOR_FRAME = new OrekitMessages(env->getStaticObjectField(cls, "NULL_PARENT_FOR_FRAME", "Lorg/orekit/errors/OrekitMessages;"));
          OCEAN_TIDE_DATA_DEGREE_ORDER_LIMITS = new OrekitMessages(env->getStaticObjectField(cls, "OCEAN_TIDE_DATA_DEGREE_ORDER_LIMITS", "Lorg/orekit/errors/OrekitMessages;"));
          OCEAN_TIDE_LOAD_DEFORMATION_LIMITS = new OrekitMessages(env->getStaticObjectField(cls, "OCEAN_TIDE_LOAD_DEFORMATION_LIMITS", "Lorg/orekit/errors/OrekitMessages;"));
          ORBITS_MUS_MISMATCH = new OrekitMessages(env->getStaticObjectField(cls, "ORBITS_MUS_MISMATCH", "Lorg/orekit/errors/OrekitMessages;"));
          ORBIT_AND_ATTITUDE_DATES_MISMATCH = new OrekitMessages(env->getStaticObjectField(cls, "ORBIT_AND_ATTITUDE_DATES_MISMATCH", "Lorg/orekit/errors/OrekitMessages;"));
          ORBIT_ANOMALY_OUT_OF_HYPERBOLIC_RANGE = new OrekitMessages(env->getStaticObjectField(cls, "ORBIT_ANOMALY_OUT_OF_HYPERBOLIC_RANGE", "Lorg/orekit/errors/OrekitMessages;"));
          ORBIT_A_E_MISMATCH_WITH_CONIC_TYPE = new OrekitMessages(env->getStaticObjectField(cls, "ORBIT_A_E_MISMATCH_WITH_CONIC_TYPE", "Lorg/orekit/errors/OrekitMessages;"));
          ORBIT_TYPE_NOT_ALLOWED = new OrekitMessages(env->getStaticObjectField(cls, "ORBIT_TYPE_NOT_ALLOWED", "Lorg/orekit/errors/OrekitMessages;"));
          OUT_OF_RANGE_BODY_EPHEMERIDES_DATE = new OrekitMessages(env->getStaticObjectField(cls, "OUT_OF_RANGE_BODY_EPHEMERIDES_DATE", "Lorg/orekit/errors/OrekitMessages;"));
          OUT_OF_RANGE_DATE = new OrekitMessages(env->getStaticObjectField(cls, "OUT_OF_RANGE_DATE", "Lorg/orekit/errors/OrekitMessages;"));
          OUT_OF_RANGE_DERIVATION_ORDER = new OrekitMessages(env->getStaticObjectField(cls, "OUT_OF_RANGE_DERIVATION_ORDER", "Lorg/orekit/errors/OrekitMessages;"));
          OUT_OF_RANGE_EPHEMERIDES_DATE_AFTER = new OrekitMessages(env->getStaticObjectField(cls, "OUT_OF_RANGE_EPHEMERIDES_DATE_AFTER", "Lorg/orekit/errors/OrekitMessages;"));
          OUT_OF_RANGE_EPHEMERIDES_DATE_BEFORE = new OrekitMessages(env->getStaticObjectField(cls, "OUT_OF_RANGE_EPHEMERIDES_DATE_BEFORE", "Lorg/orekit/errors/OrekitMessages;"));
          OUT_OF_RANGE_SECONDS_NUMBER = new OrekitMessages(env->getStaticObjectField(cls, "OUT_OF_RANGE_SECONDS_NUMBER", "Lorg/orekit/errors/OrekitMessages;"));
          OUT_OF_RANGE_SECONDS_NUMBER_DETAIL = new OrekitMessages(env->getStaticObjectField(cls, "OUT_OF_RANGE_SECONDS_NUMBER_DETAIL", "Lorg/orekit/errors/OrekitMessages;"));
          OUT_OF_RANGE_TIME_TRANSFORM = new OrekitMessages(env->getStaticObjectField(cls, "OUT_OF_RANGE_TIME_TRANSFORM", "Lorg/orekit/errors/OrekitMessages;"));
          PARAMETER_NOT_SET = new OrekitMessages(env->getStaticObjectField(cls, "PARAMETER_NOT_SET", "Lorg/orekit/errors/OrekitMessages;"));
          PARAMETER_PERIODS_HAS_ALREADY_BEEN_SET = new OrekitMessages(env->getStaticObjectField(cls, "PARAMETER_PERIODS_HAS_ALREADY_BEEN_SET", "Lorg/orekit/errors/OrekitMessages;"));
          PARAMETER_WITH_SEVERAL_ESTIMATED_VALUES = new OrekitMessages(env->getStaticObjectField(cls, "PARAMETER_WITH_SEVERAL_ESTIMATED_VALUES", "Lorg/orekit/errors/OrekitMessages;"));
          POINT_INSIDE_ELLIPSOID = new OrekitMessages(env->getStaticObjectField(cls, "POINT_INSIDE_ELLIPSOID", "Lorg/orekit/errors/OrekitMessages;"));
          POLAR_TRAJECTORY = new OrekitMessages(env->getStaticObjectField(cls, "POLAR_TRAJECTORY", "Lorg/orekit/errors/OrekitMessages;"));
          POSITIVE_FLOW_RATE = new OrekitMessages(env->getStaticObjectField(cls, "POSITIVE_FLOW_RATE", "Lorg/orekit/errors/OrekitMessages;"));
          SATELLITE_COLLIDED_WITH_TARGET = new OrekitMessages(env->getStaticObjectField(cls, "SATELLITE_COLLIDED_WITH_TARGET", "Lorg/orekit/errors/OrekitMessages;"));
          SEVERAL_REFERENCE_DATES_IN_GRAVITY_FIELD = new OrekitMessages(env->getStaticObjectField(cls, "SEVERAL_REFERENCE_DATES_IN_GRAVITY_FIELD", "Lorg/orekit/errors/OrekitMessages;"));
          SINGULAR_JACOBIAN_FOR_ORBIT_TYPE = new OrekitMessages(env->getStaticObjectField(cls, "SINGULAR_JACOBIAN_FOR_ORBIT_TYPE", "Lorg/orekit/errors/OrekitMessages;"));
          SOURCETABLE_PARSE_ERROR = new OrekitMessages(env->getStaticObjectField(cls, "SOURCETABLE_PARSE_ERROR", "Lorg/orekit/errors/OrekitMessages;"));
          SP3_INCOMPATIBLE_FILE_METADATA = new OrekitMessages(env->getStaticObjectField(cls, "SP3_INCOMPATIBLE_FILE_METADATA", "Lorg/orekit/errors/OrekitMessages;"));
          SP3_INCOMPATIBLE_SATELLITE_MEDATADA = new OrekitMessages(env->getStaticObjectField(cls, "SP3_INCOMPATIBLE_SATELLITE_MEDATADA", "Lorg/orekit/errors/OrekitMessages;"));
          SP3_INVALID_HEADER_ENTRY = new OrekitMessages(env->getStaticObjectField(cls, "SP3_INVALID_HEADER_ENTRY", "Lorg/orekit/errors/OrekitMessages;"));
          SP3_NUMBER_OF_EPOCH_MISMATCH = new OrekitMessages(env->getStaticObjectField(cls, "SP3_NUMBER_OF_EPOCH_MISMATCH", "Lorg/orekit/errors/OrekitMessages;"));
          SP3_TOO_MANY_SATELLITES_FOR_VERSION = new OrekitMessages(env->getStaticObjectField(cls, "SP3_TOO_MANY_SATELLITES_FOR_VERSION", "Lorg/orekit/errors/OrekitMessages;"));
          SP3_UNSUPPORTED_VERSION = new OrekitMessages(env->getStaticObjectField(cls, "SP3_UNSUPPORTED_VERSION", "Lorg/orekit/errors/OrekitMessages;"));
          STATE_AND_COVARIANCE_DATES_MISMATCH = new OrekitMessages(env->getStaticObjectField(cls, "STATE_AND_COVARIANCE_DATES_MISMATCH", "Lorg/orekit/errors/OrekitMessages;"));
          STATE_AND_PARAMETERS_JACOBIANS_ROWS_MISMATCH = new OrekitMessages(env->getStaticObjectField(cls, "STATE_AND_PARAMETERS_JACOBIANS_ROWS_MISMATCH", "Lorg/orekit/errors/OrekitMessages;"));
          STATE_JACOBIAN_NOT_6X6 = new OrekitMessages(env->getStaticObjectField(cls, "STATE_JACOBIAN_NOT_6X6", "Lorg/orekit/errors/OrekitMessages;"));
          STATE_JACOBIAN_NOT_INITIALIZED = new OrekitMessages(env->getStaticObjectField(cls, "STATE_JACOBIAN_NOT_INITIALIZED", "Lorg/orekit/errors/OrekitMessages;"));
          STATION_NOT_FOUND = new OrekitMessages(env->getStaticObjectField(cls, "STATION_NOT_FOUND", "Lorg/orekit/errors/OrekitMessages;"));
          STEC_INTEGRATION_DID_NOT_CONVERGE = new OrekitMessages(env->getStaticObjectField(cls, "STEC_INTEGRATION_DID_NOT_CONVERGE", "Lorg/orekit/errors/OrekitMessages;"));
          STK_INVALID_OR_UNSUPPORTED_COORDINATE_SYSTEM = new OrekitMessages(env->getStaticObjectField(cls, "STK_INVALID_OR_UNSUPPORTED_COORDINATE_SYSTEM", "Lorg/orekit/errors/OrekitMessages;"));
          STK_UNEXPECTED_END_OF_FILE = new OrekitMessages(env->getStaticObjectField(cls, "STK_UNEXPECTED_END_OF_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          STK_UNMAPPED_COORDINATE_SYSTEM = new OrekitMessages(env->getStaticObjectField(cls, "STK_UNMAPPED_COORDINATE_SYSTEM", "Lorg/orekit/errors/OrekitMessages;"));
          STREAM_REQUIRES_NMEA_FIX = new OrekitMessages(env->getStaticObjectField(cls, "STREAM_REQUIRES_NMEA_FIX", "Lorg/orekit/errors/OrekitMessages;"));
          TLE_CHECKSUM_ERROR = new OrekitMessages(env->getStaticObjectField(cls, "TLE_CHECKSUM_ERROR", "Lorg/orekit/errors/OrekitMessages;"));
          TLE_INVALID_PARAMETER = new OrekitMessages(env->getStaticObjectField(cls, "TLE_INVALID_PARAMETER", "Lorg/orekit/errors/OrekitMessages;"));
          TLE_LINES_DO_NOT_REFER_TO_SAME_OBJECT = new OrekitMessages(env->getStaticObjectField(cls, "TLE_LINES_DO_NOT_REFER_TO_SAME_OBJECT", "Lorg/orekit/errors/OrekitMessages;"));
          TOO_LARGE_DATA_TYPE = new OrekitMessages(env->getStaticObjectField(cls, "TOO_LARGE_DATA_TYPE", "Lorg/orekit/errors/OrekitMessages;"));
          TOO_LARGE_DEGREE_FOR_GRAVITY_FIELD = new OrekitMessages(env->getStaticObjectField(cls, "TOO_LARGE_DEGREE_FOR_GRAVITY_FIELD", "Lorg/orekit/errors/OrekitMessages;"));
          TOO_LARGE_ECCENTRICITY_FOR_PROPAGATION_MODEL = new OrekitMessages(env->getStaticObjectField(cls, "TOO_LARGE_ECCENTRICITY_FOR_PROPAGATION_MODEL", "Lorg/orekit/errors/OrekitMessages;"));
          TOO_LARGE_ORDER_FOR_GRAVITY_FIELD = new OrekitMessages(env->getStaticObjectField(cls, "TOO_LARGE_ORDER_FOR_GRAVITY_FIELD", "Lorg/orekit/errors/OrekitMessages;"));
          TOO_SHORT_TRANSITION_TIME_FOR_ATTITUDES_SWITCH = new OrekitMessages(env->getStaticObjectField(cls, "TOO_SHORT_TRANSITION_TIME_FOR_ATTITUDES_SWITCH", "Lorg/orekit/errors/OrekitMessages;"));
          TOO_SMALL_SCALE_FOR_PARAMETER = new OrekitMessages(env->getStaticObjectField(cls, "TOO_SMALL_SCALE_FOR_PARAMETER", "Lorg/orekit/errors/OrekitMessages;"));
          TRAJECTORY_INSIDE_BRILLOUIN_SPHERE = new OrekitMessages(env->getStaticObjectField(cls, "TRAJECTORY_INSIDE_BRILLOUIN_SPHERE", "Lorg/orekit/errors/OrekitMessages;"));
          TRAJECTORY_NOT_CROSSING_XZPLANE = new OrekitMessages(env->getStaticObjectField(cls, "TRAJECTORY_NOT_CROSSING_XZPLANE", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_COMPUTE_BROUWER_LYDDANE_MEAN_PARAMETERS = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_COMPUTE_BROUWER_LYDDANE_MEAN_PARAMETERS", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_COMPUTE_DSST_MEAN_PARAMETERS = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_COMPUTE_DSST_MEAN_PARAMETERS", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_COMPUTE_ECKSTEIN_HECHLER_MEAN_PARAMETERS = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_COMPUTE_ECKSTEIN_HECHLER_MEAN_PARAMETERS", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_COMPUTE_HYPERBOLIC_ECCENTRIC_ANOMALY = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_COMPUTE_HYPERBOLIC_ECCENTRIC_ANOMALY", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_COMPUTE_TLE = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_COMPUTE_TLE", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_FIND_FILE = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_FIND_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_FIND_RESOURCE = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_FIND_RESOURCE", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_GENERATE_NEW_DATA_AFTER = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_GENERATE_NEW_DATA_AFTER", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_GENERATE_NEW_DATA_BEFORE = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_GENERATE_NEW_DATA_BEFORE", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_PARSE_ELEMENT_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_PARSE_ELEMENT_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_PARSE_LINE_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_PARSE_LINE_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_READ_JPL_HEADER = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_READ_JPL_HEADER", "Lorg/orekit/errors/OrekitMessages;"));
          UNDEFINED_ABSOLUTE_PVCOORDINATES = new OrekitMessages(env->getStaticObjectField(cls, "UNDEFINED_ABSOLUTE_PVCOORDINATES", "Lorg/orekit/errors/OrekitMessages;"));
          UNDEFINED_ORBIT = new OrekitMessages(env->getStaticObjectField(cls, "UNDEFINED_ORBIT", "Lorg/orekit/errors/OrekitMessages;"));
          UNEXPECTED_CONTENT_TYPE = new OrekitMessages(env->getStaticObjectField(cls, "UNEXPECTED_CONTENT_TYPE", "Lorg/orekit/errors/OrekitMessages;"));
          UNEXPECTED_DATA_AFTER_LINE_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "UNEXPECTED_DATA_AFTER_LINE_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          UNEXPECTED_DATA_AT_LINE_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "UNEXPECTED_DATA_AT_LINE_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          UNEXPECTED_END_OF_FILE = new OrekitMessages(env->getStaticObjectField(cls, "UNEXPECTED_END_OF_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          UNEXPECTED_END_OF_FILE_AFTER_LINE = new OrekitMessages(env->getStaticObjectField(cls, "UNEXPECTED_END_OF_FILE_AFTER_LINE", "Lorg/orekit/errors/OrekitMessages;"));
          UNEXPECTED_FILE_FORMAT_ERROR_FOR_LOADER = new OrekitMessages(env->getStaticObjectField(cls, "UNEXPECTED_FILE_FORMAT_ERROR_FOR_LOADER", "Lorg/orekit/errors/OrekitMessages;"));
          UNEXPECTED_FORMAT_FOR_ILRS_FILE = new OrekitMessages(env->getStaticObjectField(cls, "UNEXPECTED_FORMAT_FOR_ILRS_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          UNEXPECTED_TWO_ELEVATION_VALUES_FOR_ONE_AZIMUTH = new OrekitMessages(env->getStaticObjectField(cls, "UNEXPECTED_TWO_ELEVATION_VALUES_FOR_ONE_AZIMUTH", "Lorg/orekit/errors/OrekitMessages;"));
          UNINITIALIZED_VALUE_FOR_KEY = new OrekitMessages(env->getStaticObjectField(cls, "UNINITIALIZED_VALUE_FOR_KEY", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_ADDITIONAL_STATE = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_ADDITIONAL_STATE", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_AUTHENTICATION_METHOD = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_AUTHENTICATION_METHOD", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_CARRIER_PHASE_CODE = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_CARRIER_PHASE_CODE", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_CLOCK_DATA_TYPE = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_CLOCK_DATA_TYPE", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_DATA_FORMAT = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_DATA_FORMAT", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_ENCODED_MESSAGE_NUMBER = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_ENCODED_MESSAGE_NUMBER", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_HOST = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_HOST", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_MONTH = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_MONTH", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_NAVIGATION_SYSTEM = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_NAVIGATION_SYSTEM", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_RINEX_FREQUENCY = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_RINEX_FREQUENCY", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_SATELLITE_ANTENNA_CODE = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_SATELLITE_ANTENNA_CODE", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_SATELLITE_SYSTEM = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_SATELLITE_SYSTEM", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_TIME_SYSTEM = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_TIME_SYSTEM", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_UNIT = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_UNIT", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_UTC_ID = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_UTC_ID", "Lorg/orekit/errors/OrekitMessages;"));
          UNSUPPORTED_FILE_FORMAT = new OrekitMessages(env->getStaticObjectField(cls, "UNSUPPORTED_FILE_FORMAT", "Lorg/orekit/errors/OrekitMessages;"));
          UNSUPPORTED_FILE_FORMAT_VERSION = new OrekitMessages(env->getStaticObjectField(cls, "UNSUPPORTED_FILE_FORMAT_VERSION", "Lorg/orekit/errors/OrekitMessages;"));
          UNSUPPORTED_FREQUENCY_FOR_ANTENNA = new OrekitMessages(env->getStaticObjectField(cls, "UNSUPPORTED_FREQUENCY_FOR_ANTENNA", "Lorg/orekit/errors/OrekitMessages;"));
          UNSUPPORTED_LOCAL_ORBITAL_FRAME = new OrekitMessages(env->getStaticObjectField(cls, "UNSUPPORTED_LOCAL_ORBITAL_FRAME", "Lorg/orekit/errors/OrekitMessages;"));
          UNSUPPORTED_PARAMETER_NAME = new OrekitMessages(env->getStaticObjectField(cls, "UNSUPPORTED_PARAMETER_NAME", "Lorg/orekit/errors/OrekitMessages;"));
          UNSUPPORTED_TIME_TRANSFORM = new OrekitMessages(env->getStaticObjectField(cls, "UNSUPPORTED_TIME_TRANSFORM", "Lorg/orekit/errors/OrekitMessages;"));
          UNSUPPORTED_TRANSFORM = new OrekitMessages(env->getStaticObjectField(cls, "UNSUPPORTED_TRANSFORM", "Lorg/orekit/errors/OrekitMessages;"));
          VALUE_NOT_FOUND = new OrekitMessages(env->getStaticObjectField(cls, "VALUE_NOT_FOUND", "Lorg/orekit/errors/OrekitMessages;"));
          VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_AVAILABLE_FOR_DATE = new OrekitMessages(env->getStaticObjectField(cls, "VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_AVAILABLE_FOR_DATE", "Lorg/orekit/errors/OrekitMessages;"));
          VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_LOADED = new OrekitMessages(env->getStaticObjectField(cls, "VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_LOADED", "Lorg/orekit/errors/OrekitMessages;"));
          WRONG_COLUMNS_NUMBER = new OrekitMessages(env->getStaticObjectField(cls, "WRONG_COLUMNS_NUMBER", "Lorg/orekit/errors/OrekitMessages;"));
          WRONG_DEGREE_OR_ORDER = new OrekitMessages(env->getStaticObjectField(cls, "WRONG_DEGREE_OR_ORDER", "Lorg/orekit/errors/OrekitMessages;"));
          WRONG_EOP_INTERPOLATION_DEGREE = new OrekitMessages(env->getStaticObjectField(cls, "WRONG_EOP_INTERPOLATION_DEGREE", "Lorg/orekit/errors/OrekitMessages;"));
          WRONG_INTERPOLATOR_DEFINED_FOR_STATE_INTERPOLATION = new OrekitMessages(env->getStaticObjectField(cls, "WRONG_INTERPOLATOR_DEFINED_FOR_STATE_INTERPOLATION", "Lorg/orekit/errors/OrekitMessages;"));
          WRONG_NB_COMPONENTS = new OrekitMessages(env->getStaticObjectField(cls, "WRONG_NB_COMPONENTS", "Lorg/orekit/errors/OrekitMessages;"));
          WRONG_ORBIT_PARAMETERS_TYPE = new OrekitMessages(env->getStaticObjectField(cls, "WRONG_ORBIT_PARAMETERS_TYPE", "Lorg/orekit/errors/OrekitMessages;"));
          WRONG_PARSING_TYPE = new OrekitMessages(env->getStaticObjectField(cls, "WRONG_PARSING_TYPE", "Lorg/orekit/errors/OrekitMessages;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String OrekitMessages::getLocalizedString(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedString_3cd873bfb132c4fd], a0.this$));
      }

      ::java::lang::String OrekitMessages::getSourceString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceString_11b109bd155ca898]));
      }

      OrekitMessages OrekitMessages::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return OrekitMessages(env->callStaticObjectMethod(cls, mids$[mid_valueOf_4bd8e8f651585e7e], a0.this$));
      }

      JArray< OrekitMessages > OrekitMessages::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< OrekitMessages >(env->callStaticObjectMethod(cls, mids$[mid_values_0bd089a5efd8b3d2]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/errors/OrekitMessages$UTF8Control.h"

namespace org {
  namespace orekit {
    namespace errors {
      static PyObject *t_OrekitMessages_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitMessages_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitMessages_of_(t_OrekitMessages *self, PyObject *args);
      static PyObject *t_OrekitMessages_getLocalizedString(t_OrekitMessages *self, PyObject *arg);
      static PyObject *t_OrekitMessages_getSourceString(t_OrekitMessages *self);
      static PyObject *t_OrekitMessages_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_OrekitMessages_values(PyTypeObject *type);
      static PyObject *t_OrekitMessages_get__sourceString(t_OrekitMessages *self, void *data);
      static PyObject *t_OrekitMessages_get__parameters_(t_OrekitMessages *self, void *data);
      static PyGetSetDef t_OrekitMessages__fields_[] = {
        DECLARE_GET_FIELD(t_OrekitMessages, sourceString),
        DECLARE_GET_FIELD(t_OrekitMessages, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrekitMessages__methods_[] = {
        DECLARE_METHOD(t_OrekitMessages, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitMessages, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitMessages, of_, METH_VARARGS),
        DECLARE_METHOD(t_OrekitMessages, getLocalizedString, METH_O),
        DECLARE_METHOD(t_OrekitMessages, getSourceString, METH_NOARGS),
        DECLARE_METHOD(t_OrekitMessages, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_OrekitMessages, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrekitMessages)[] = {
        { Py_tp_methods, t_OrekitMessages__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_OrekitMessages__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrekitMessages)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(OrekitMessages, t_OrekitMessages, OrekitMessages);
      PyObject *t_OrekitMessages::wrap_Object(const OrekitMessages& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OrekitMessages::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OrekitMessages *self = (t_OrekitMessages *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_OrekitMessages::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OrekitMessages::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OrekitMessages *self = (t_OrekitMessages *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_OrekitMessages::install(PyObject *module)
      {
        installType(&PY_TYPE(OrekitMessages), &PY_TYPE_DEF(OrekitMessages), module, "OrekitMessages", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UTF8Control", make_descriptor(&PY_TYPE_DEF(OrekitMessages$UTF8Control)));
      }

      void t_OrekitMessages::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "class_", make_descriptor(OrekitMessages::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "wrapfn_", make_descriptor(t_OrekitMessages::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "boxfn_", make_descriptor(boxObject));
        env->getClass(OrekitMessages::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ADDITIONAL_STATE_NAME_ALREADY_IN_USE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ADDITIONAL_STATE_NAME_ALREADY_IN_USE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ALMOST_CRITICALLY_INCLINED_ORBIT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ALMOST_CRITICALLY_INCLINED_ORBIT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ALMOST_EQUATORIAL_ORBIT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ALMOST_EQUATORIAL_ORBIT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ALTITUDE_BELOW_ALLOWED_THRESHOLD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ALTITUDE_BELOW_ALLOWED_THRESHOLD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ANGLE_TYPE_NOT_SUPPORTED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ANGLE_TYPE_NOT_SUPPORTED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ATTEMPT_TO_GENERATE_MALFORMED_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ATTEMPT_TO_GENERATE_MALFORMED_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ATTITUDE_POINTING_LAW_DOES_NOT_POINT_TO_GROUND", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ATTITUDE_POINTING_LAW_DOES_NOT_POINT_TO_GROUND)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_LOF", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_LOF)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_NON_INERTIAL_FRAME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_NON_INERTIAL_FRAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_COMPUTE_AIMING_AT_SINGULAR_POINT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_COMPUTE_AIMING_AT_SINGULAR_POINT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_COMPUTE_LAGRANGIAN", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_COMPUTE_LAGRANGIAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_ESTIMATE_PRECESSION_WITHOUT_PROPER_DERIVATIVES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_ESTIMATE_PRECESSION_WITHOUT_PROPER_DERIVATIVES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_FIND_SATELLITE_IN_SYSTEM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_FIND_SATELLITE_IN_SYSTEM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_PARSE_BOTH_TAU_AND_GAMMA", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_PARSE_BOTH_TAU_AND_GAMMA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_PARSE_GNSS_DATA", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_PARSE_GNSS_DATA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_PARSE_SOURCETABLE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_PARSE_SOURCETABLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_START_PROPAGATION_FROM_INFINITY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_START_PROPAGATION_FROM_INFINITY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_DATE_INVALID_LENGTH_TIME_FIELD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_DATE_INVALID_LENGTH_TIME_FIELD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_DATE_INVALID_PREAMBLE_FIELD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_DATE_INVALID_PREAMBLE_FIELD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_DATE_MISSING_AGENCY_EPOCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_DATE_MISSING_AGENCY_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_DIFFERENT_LVLH_DEFINITION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_DIFFERENT_LVLH_DEFINITION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_INCOMPATIBLE_KEYS_BOTH_USED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_INCOMPATIBLE_KEYS_BOTH_USED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_INCOMPLETE_DATA", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_INCOMPLETE_DATA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_INCONSISTENT_NUMBER_OF_ATTITUDE_STATES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_INCONSISTENT_NUMBER_OF_ATTITUDE_STATES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_INCONSISTENT_TIME_SYSTEMS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_INCONSISTENT_TIME_SYSTEMS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_INVALID_FRAME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_INVALID_FRAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_INVALID_ROTATION_SEQUENCE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_INVALID_ROTATION_SEQUENCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_KEYWORD_NOT_ALLOWED_IN_VERSION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_KEYWORD_NOT_ALLOWED_IN_VERSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_MANEUVER_MISSING_TIME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_MANEUVER_MISSING_TIME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_MANEUVER_UNITS_WRONG_NB_COMPONENTS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_MANEUVER_UNITS_WRONG_NB_COMPONENTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_MISSING_KEYWORD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_MISSING_KEYWORD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_MISSING_SENSOR_INDEX", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_MISSING_SENSOR_INDEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_SENSOR_INDEX_ALREADY_USED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_SENSOR_INDEX_ALREADY_USED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_TDM_KEYWORD_NOT_FOUND", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_TDM_KEYWORD_NOT_FOUND)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_TDM_MISSING_RANGE_UNITS_CONVERTER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_TDM_MISSING_RANGE_UNITS_CONVERTER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_TIME_SYSTEM_NOT_IMPLEMENTED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_TIME_SYSTEM_NOT_IMPLEMENTED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_TIME_SYSTEM_NOT_READ_YET", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_TIME_SYSTEM_NOT_READ_YET)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_UNEXPECTED_KEYWORD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_UNEXPECTED_KEYWORD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_UNKNOWN_ATTITUDE_TYPE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_UNKNOWN_ATTITUDE_TYPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_UNKNOWN_CONVENTIONS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_UNKNOWN_CONVENTIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_UNKNOWN_GM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_UNKNOWN_GM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_UNKNOWN_SPACECRAFT_MASS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_UNKNOWN_SPACECRAFT_MASS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_UNSUPPORTED_ELEMENT_SET_TYPE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_UNSUPPORTED_ELEMENT_SET_TYPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_UNSUPPORTED_RETROGRADE_EQUINOCTIAL", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_UNSUPPORTED_RETROGRADE_EQUINOCTIAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CLOCK_FILE_UNSUPPORTED_VERSION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CLOCK_FILE_UNSUPPORTED_VERSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CONNECTION_ERROR", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CONNECTION_ERROR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CORRUPTED_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CORRUPTED_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CPF_UNEXPECTED_END_OF_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CPF_UNEXPECTED_END_OF_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CRD_UNEXPECTED_END_OF_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CRD_UNEXPECTED_END_OF_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DATA_ROOT_DIRECTORY_DOES_NOT_EXIST", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DATA_ROOT_DIRECTORY_DOES_NOT_EXIST)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DATES_MISMATCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DATES_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DIFFERENT_STATE_DEFINITION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DIFFERENT_STATE_DEFINITION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DIFFERENT_TIME_OF_CLOSEST_APPROACH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DIFFERENT_TIME_OF_CLOSEST_APPROACH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DIMENSION_INCONSISTENT_WITH_PARAMETERS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DIMENSION_INCONSISTENT_WITH_PARAMETERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DSST_ECC_NO_NUMERICAL_AVERAGING_METHOD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DSST_ECC_NO_NUMERICAL_AVERAGING_METHOD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DSST_NEWCOMB_OPERATORS_COMPUTATION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DSST_NEWCOMB_OPERATORS_COMPUTATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DSST_SPR_SHADOW_INCONSISTENT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DSST_SPR_SHADOW_INCONSISTENT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DSST_VMNS_COEFFICIENT_ERROR_MS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DSST_VMNS_COEFFICIENT_ERROR_MS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DUPLICATED_GRAVITY_FIELD_COEFFICIENT_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DUPLICATED_GRAVITY_FIELD_COEFFICIENT_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "END_OF_ENCODED_MESSAGE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::END_OF_ENCODED_MESSAGE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "EVENT_DATE_TOO_CLOSE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::EVENT_DATE_TOO_CLOSE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "EXCEPTIONAL_DATA_CONTEXT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::EXCEPTIONAL_DATA_CONTEXT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "FAILED_AUTHENTICATION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::FAILED_AUTHENTICATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "FIND_ROOT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::FIND_ROOT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "FRAMES_MISMATCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::FRAMES_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "FRAME_ALREADY_ATTACHED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::FRAME_ALREADY_ATTACHED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "FRAME_ANCESTOR_OF_BOTH_FRAMES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::FRAME_ANCESTOR_OF_BOTH_FRAMES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "FRAME_ANCESTOR_OF_NEITHER_FRAME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::FRAME_ANCESTOR_OF_NEITHER_FRAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "FRAME_NOT_ATTACHED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::FRAME_NOT_ATTACHED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "FRAME_NO_NTH_ANCESTOR", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::FRAME_NO_NTH_ANCESTOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "FUNCTION_NOT_IMPLEMENTED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::FUNCTION_NOT_IMPLEMENTED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "GNSS_PARITY_ERROR", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::GNSS_PARITY_ERROR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "GRAVITY_FIELD_NORMALIZATION_UNDERFLOW", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::GRAVITY_FIELD_NORMALIZATION_UNDERFLOW)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "HEADER_ALREADY_WRITTEN", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::HEADER_ALREADY_WRITTEN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "HEADER_NOT_WRITTEN", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::HEADER_NOT_WRITTEN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "HYPERBOLIC_ORBIT_NOT_HANDLED_AS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::HYPERBOLIC_ORBIT_NOT_HANDLED_AS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCOMPATIBLE_FRAMES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCOMPATIBLE_FRAMES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCOMPATIBLE_FREQUENCIES_FOR_COMBINATION_OF_MEASUREMENTS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCOMPATIBLE_FREQUENCIES_FOR_COMBINATION_OF_MEASUREMENTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCOMPATIBLE_UNITS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCOMPATIBLE_UNITS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCOMPLETE_HEADER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCOMPLETE_HEADER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCONSISTENT_ASTRONOMICAL_UNIT_IN_FILES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCONSISTENT_ASTRONOMICAL_UNIT_IN_FILES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCONSISTENT_DATES_IN_IERS_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCONSISTENT_DATES_IN_IERS_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCONSISTENT_EARTH_MOON_RATIO_IN_FILES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCONSISTENT_EARTH_MOON_RATIO_IN_FILES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCONSISTENT_NUMBER_OF_ELEMENTS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCONSISTENT_NUMBER_OF_ELEMENTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCONSISTENT_NUMBER_OF_SATS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCONSISTENT_NUMBER_OF_SATS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCONSISTENT_NUMBER_OF_TEC_MAPS_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCONSISTENT_NUMBER_OF_TEC_MAPS_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCONSISTENT_SAMPLING_DATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCONSISTENT_SAMPLING_DATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCONSISTENT_SATELLITE_SYSTEM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCONSISTENT_SATELLITE_SYSTEM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCONSISTENT_SELECTION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCONSISTENT_SELECTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INERTIAL_FORCE_MODEL_MISSING", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INERTIAL_FORCE_MODEL_MISSING)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INITIAL_MATRIX_AND_PARAMETERS_NUMBER_MISMATCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INITIAL_MATRIX_AND_PARAMETERS_NUMBER_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INITIAL_STATE_NOT_SPECIFIED_FOR_ORBIT_PROPAGATION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INITIAL_STATE_NOT_SPECIFIED_FOR_ORBIT_PROPAGATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INTERNAL_ERROR", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INTERNAL_ERROR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INVALID_GNSS_DATA", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INVALID_GNSS_DATA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INVALID_MEASUREMENT_TYPES_FOR_COMBINATION_OF_MEASUREMENTS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INVALID_MEASUREMENT_TYPES_FOR_COMBINATION_OF_MEASUREMENTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INVALID_PARAMETER_RANGE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INVALID_PARAMETER_RANGE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INVALID_RANGE_INDICATOR_IN_CRD_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INVALID_RANGE_INDICATOR_IN_CRD_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INVALID_SATELLITE_ID", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INVALID_SATELLITE_ID)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INVALID_SATELLITE_SYSTEM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INVALID_SATELLITE_SYSTEM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INVALID_TYPE_FOR_FUNCTION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INVALID_TYPE_FOR_FUNCTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "IRREGULAR_OR_INCOMPLETE_GRID", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::IRREGULAR_OR_INCOMPLETE_GRID)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ITRF_VERSIONS_PREFIX_ONLY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ITRF_VERSIONS_PREFIX_ONLY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "KLOBUCHAR_ALPHA_BETA_NOT_AVAILABLE_FOR_DATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::KLOBUCHAR_ALPHA_BETA_NOT_AVAILABLE_FOR_DATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "KLOBUCHAR_ALPHA_BETA_NOT_LOADED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::KLOBUCHAR_ALPHA_BETA_NOT_LOADED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "METHOD_NOT_AVAILABLE_WITHOUT_CENTRAL_BODY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::METHOD_NOT_AVAILABLE_WITHOUT_CENTRAL_BODY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MISMATCHED_FREQUENCIES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MISMATCHED_FREQUENCIES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES_GAP", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES_GAP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MISSING_GRAVITY_FIELD_COEFFICIENT_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MISSING_GRAVITY_FIELD_COEFFICIENT_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MISSING_HEADER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MISSING_HEADER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MISSING_SECOND_TLE_LINE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MISSING_SECOND_TLE_LINE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MISSING_SERIE_J_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MISSING_SERIE_J_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MISSING_STATION_DATA_FOR_EPOCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MISSING_STATION_DATA_FOR_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MISSING_VELOCITY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MISSING_VELOCITY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MODIP_GRID_NOT_LOADED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MODIP_GRID_NOT_LOADED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MOUNPOINT_ALREADY_CONNECTED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MOUNPOINT_ALREADY_CONNECTED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MULTIPLE_INTERPOLATOR_USED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MULTIPLE_INTERPOLATOR_USED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MULTIPLE_SHOOTING_UNDERCONSTRAINED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MULTIPLE_SHOOTING_UNDERCONSTRAINED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NEITHER_DIRECTORY_NOR_ZIP_OR_JAR", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NEITHER_DIRECTORY_NOR_ZIP_OR_JAR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NEQUICK_F2_FM3_NOT_LOADED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NEQUICK_F2_FM3_NOT_LOADED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_CHRONOLOGICALLY_SORTED_ENTRIES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_CHRONOLOGICALLY_SORTED_ENTRIES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_CHRONOLOGICAL_DATES_FOR_OBSERVATIONS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_CHRONOLOGICAL_DATES_FOR_OBSERVATIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_CHRONOLOGICAL_DATES_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_CHRONOLOGICAL_DATES_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_COPLANAR_POINTS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_COPLANAR_POINTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_DIFFERENT_DATES_FOR_OBSERVATIONS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_DIFFERENT_DATES_FOR_OBSERVATIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_EXISTENT_DATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_EXISTENT_DATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_EXISTENT_DAY_NUMBER_IN_YEAR", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_EXISTENT_DAY_NUMBER_IN_YEAR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_EXISTENT_GEOMAGNETIC_MODEL", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_EXISTENT_GEOMAGNETIC_MODEL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_EXISTENT_HMS_TIME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_EXISTENT_HMS_TIME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_EXISTENT_MONTH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_EXISTENT_MONTH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_EXISTENT_TIME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_EXISTENT_TIME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_EXISTENT_WEEK_DATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_EXISTENT_WEEK_DATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_EXISTENT_YEAR_MONTH_DAY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_EXISTENT_YEAR_MONTH_DAY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_PSEUDO_INERTIAL_FRAME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_PSEUDO_INERTIAL_FRAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_PSEUDO_INERTIAL_FRAME_NOT_SUITABLE_AS_REFERENCE_FOR_INERTIAL_FORCES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_PSEUDO_INERTIAL_FRAME_NOT_SUITABLE_AS_REFERENCE_FOR_INERTIAL_FORCES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_RESETABLE_STATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_RESETABLE_STATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_A_DIRECTORY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_A_DIRECTORY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_A_JPL_EPHEMERIDES_BINARY_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_A_JPL_EPHEMERIDES_BINARY_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_A_MARSHALL_SOLAR_ACTIVITY_FUTURE_ESTIMATION_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_A_MARSHALL_SOLAR_ACTIVITY_FUTURE_ESTIMATION_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_A_SUPPORTED_HATANAKA_COMPRESSED_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_A_SUPPORTED_HATANAKA_COMPRESSED_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_A_SUPPORTED_IERS_DATA_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_A_SUPPORTED_IERS_DATA_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_A_SUPPORTED_SEM_ALMANAC_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_A_SUPPORTED_SEM_ALMANAC_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_A_SUPPORTED_UNIX_COMPRESSED_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_A_SUPPORTED_UNIX_COMPRESSED_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_A_SUPPORTED_YUMA_ALMANAC_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_A_SUPPORTED_YUMA_ALMANAC_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_ENOUGH_ATTITUDE_PROVIDERS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_ENOUGH_ATTITUDE_PROVIDERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_ENOUGH_CACHED_NEIGHBORS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_ENOUGH_CACHED_NEIGHBORS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_ENOUGH_DATA", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_ENOUGH_DATA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_ENOUGH_GNSS_FOR_DOP", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_ENOUGH_GNSS_FOR_DOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_ENOUGH_PROPAGATORS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_ENOUGH_PROPAGATORS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_POSITIVE_SPACECRAFT_MASS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_POSITIVE_SPACECRAFT_MASS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_STRICTLY_POSITIVE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_STRICTLY_POSITIVE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_TLE_LINES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_TLE_LINES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_VALID_INTERNATIONAL_DESIGNATOR", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_VALID_INTERNATIONAL_DESIGNATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_CACHED_ENTRIES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_CACHED_ENTRIES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_DATA_GENERATED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_DATA_GENERATED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_DATA_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_DATA_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_DATA_LOADED_FOR_CELESTIAL_BODY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_DATA_LOADED_FOR_CELESTIAL_BODY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_EARTH_ORIENTATION_PARAMETERS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_EARTH_ORIENTATION_PARAMETERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_EARTH_ORIENTATION_PARAMETERS_LOADED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_EARTH_ORIENTATION_PARAMETERS_LOADED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_ENTRIES_IN_IERS_UTC_TAI_HISTORY_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_ENTRIES_IN_IERS_UTC_TAI_HISTORY_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_EPOCH_IN_IONEX_HEADER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_EPOCH_IN_IONEX_HEADER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_GRAVITY_FIELD_DATA_LOADED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_GRAVITY_FIELD_DATA_LOADED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_IERS_UTC_TAI_HISTORY_DATA_LOADED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_IERS_UTC_TAI_HISTORY_DATA_LOADED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_INTERPOLATOR_FOR_STATE_DEFINITION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_INTERPOLATOR_FOR_STATE_DEFINITION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_JPL_EPHEMERIDES_BINARY_FILES_FOUND", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_JPL_EPHEMERIDES_BINARY_FILES_FOUND)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_KLOBUCHAR_ALPHA_BETA_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_KLOBUCHAR_ALPHA_BETA_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_LATITUDE_LONGITUDE_BONDARIES_IN_IONEX_HEADER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_LATITUDE_LONGITUDE_BONDARIES_IN_IONEX_HEADER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_OCEAN_TIDE_DATA_LOADED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_OCEAN_TIDE_DATA_LOADED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_PROPAGATOR_CONFIGURED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_PROPAGATOR_CONFIGURED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_REFERENCE_DATE_FOR_PARAMETER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_REFERENCE_DATE_FOR_PARAMETER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_SEM_ALMANAC_AVAILABLE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_SEM_ALMANAC_AVAILABLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_SOLAR_ACTIVITY_AT_DATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_SOLAR_ACTIVITY_AT_DATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_SUCH_ITRF_FRAME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_SUCH_ITRF_FRAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_TEC_DATA_IN_FILES_FOR_DATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_TEC_DATA_IN_FILES_FOR_DATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_TLE_DATA_AVAILABLE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_TLE_DATA_AVAILABLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_TLE_FOR_LAUNCH_YEAR_NUMBER_PIECE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_TLE_FOR_LAUNCH_YEAR_NUMBER_PIECE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_TLE_FOR_OBJECT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_TLE_FOR_OBJECT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_UNSCENTED_TRANSFORM_CONFIGURED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_UNSCENTED_TRANSFORM_CONFIGURED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_VIENNA_ACOEF_OR_ZENITH_DELAY_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_VIENNA_ACOEF_OR_ZENITH_DELAY_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_YUMA_ALMANAC_AVAILABLE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_YUMA_ALMANAC_AVAILABLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NULL_ARGUMENT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NULL_ARGUMENT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NULL_PARENT_FOR_FRAME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NULL_PARENT_FOR_FRAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OCEAN_TIDE_DATA_DEGREE_ORDER_LIMITS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OCEAN_TIDE_DATA_DEGREE_ORDER_LIMITS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OCEAN_TIDE_LOAD_DEFORMATION_LIMITS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OCEAN_TIDE_LOAD_DEFORMATION_LIMITS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ORBITS_MUS_MISMATCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ORBITS_MUS_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ORBIT_AND_ATTITUDE_DATES_MISMATCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ORBIT_AND_ATTITUDE_DATES_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ORBIT_ANOMALY_OUT_OF_HYPERBOLIC_RANGE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ORBIT_ANOMALY_OUT_OF_HYPERBOLIC_RANGE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ORBIT_A_E_MISMATCH_WITH_CONIC_TYPE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ORBIT_A_E_MISMATCH_WITH_CONIC_TYPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ORBIT_TYPE_NOT_ALLOWED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ORBIT_TYPE_NOT_ALLOWED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OUT_OF_RANGE_BODY_EPHEMERIDES_DATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OUT_OF_RANGE_BODY_EPHEMERIDES_DATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OUT_OF_RANGE_DATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OUT_OF_RANGE_DATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OUT_OF_RANGE_DERIVATION_ORDER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OUT_OF_RANGE_DERIVATION_ORDER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OUT_OF_RANGE_EPHEMERIDES_DATE_AFTER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OUT_OF_RANGE_EPHEMERIDES_DATE_AFTER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OUT_OF_RANGE_EPHEMERIDES_DATE_BEFORE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OUT_OF_RANGE_EPHEMERIDES_DATE_BEFORE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OUT_OF_RANGE_SECONDS_NUMBER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OUT_OF_RANGE_SECONDS_NUMBER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OUT_OF_RANGE_SECONDS_NUMBER_DETAIL", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OUT_OF_RANGE_SECONDS_NUMBER_DETAIL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OUT_OF_RANGE_TIME_TRANSFORM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OUT_OF_RANGE_TIME_TRANSFORM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "PARAMETER_NOT_SET", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::PARAMETER_NOT_SET)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "PARAMETER_PERIODS_HAS_ALREADY_BEEN_SET", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::PARAMETER_PERIODS_HAS_ALREADY_BEEN_SET)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "PARAMETER_WITH_SEVERAL_ESTIMATED_VALUES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::PARAMETER_WITH_SEVERAL_ESTIMATED_VALUES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "POINT_INSIDE_ELLIPSOID", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::POINT_INSIDE_ELLIPSOID)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "POLAR_TRAJECTORY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::POLAR_TRAJECTORY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "POSITIVE_FLOW_RATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::POSITIVE_FLOW_RATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SATELLITE_COLLIDED_WITH_TARGET", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SATELLITE_COLLIDED_WITH_TARGET)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SEVERAL_REFERENCE_DATES_IN_GRAVITY_FIELD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SEVERAL_REFERENCE_DATES_IN_GRAVITY_FIELD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SINGULAR_JACOBIAN_FOR_ORBIT_TYPE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SINGULAR_JACOBIAN_FOR_ORBIT_TYPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SOURCETABLE_PARSE_ERROR", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SOURCETABLE_PARSE_ERROR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SP3_INCOMPATIBLE_FILE_METADATA", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SP3_INCOMPATIBLE_FILE_METADATA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SP3_INCOMPATIBLE_SATELLITE_MEDATADA", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SP3_INCOMPATIBLE_SATELLITE_MEDATADA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SP3_INVALID_HEADER_ENTRY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SP3_INVALID_HEADER_ENTRY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SP3_NUMBER_OF_EPOCH_MISMATCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SP3_NUMBER_OF_EPOCH_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SP3_TOO_MANY_SATELLITES_FOR_VERSION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SP3_TOO_MANY_SATELLITES_FOR_VERSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SP3_UNSUPPORTED_VERSION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SP3_UNSUPPORTED_VERSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STATE_AND_COVARIANCE_DATES_MISMATCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STATE_AND_COVARIANCE_DATES_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STATE_AND_PARAMETERS_JACOBIANS_ROWS_MISMATCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STATE_AND_PARAMETERS_JACOBIANS_ROWS_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STATE_JACOBIAN_NOT_6X6", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STATE_JACOBIAN_NOT_6X6)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STATE_JACOBIAN_NOT_INITIALIZED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STATE_JACOBIAN_NOT_INITIALIZED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STATION_NOT_FOUND", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STATION_NOT_FOUND)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STEC_INTEGRATION_DID_NOT_CONVERGE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STEC_INTEGRATION_DID_NOT_CONVERGE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STK_INVALID_OR_UNSUPPORTED_COORDINATE_SYSTEM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STK_INVALID_OR_UNSUPPORTED_COORDINATE_SYSTEM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STK_UNEXPECTED_END_OF_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STK_UNEXPECTED_END_OF_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STK_UNMAPPED_COORDINATE_SYSTEM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STK_UNMAPPED_COORDINATE_SYSTEM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STREAM_REQUIRES_NMEA_FIX", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STREAM_REQUIRES_NMEA_FIX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TLE_CHECKSUM_ERROR", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TLE_CHECKSUM_ERROR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TLE_INVALID_PARAMETER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TLE_INVALID_PARAMETER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TLE_LINES_DO_NOT_REFER_TO_SAME_OBJECT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TLE_LINES_DO_NOT_REFER_TO_SAME_OBJECT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TOO_LARGE_DATA_TYPE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TOO_LARGE_DATA_TYPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TOO_LARGE_DEGREE_FOR_GRAVITY_FIELD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TOO_LARGE_DEGREE_FOR_GRAVITY_FIELD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TOO_LARGE_ECCENTRICITY_FOR_PROPAGATION_MODEL", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TOO_LARGE_ECCENTRICITY_FOR_PROPAGATION_MODEL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TOO_LARGE_ORDER_FOR_GRAVITY_FIELD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TOO_LARGE_ORDER_FOR_GRAVITY_FIELD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TOO_SHORT_TRANSITION_TIME_FOR_ATTITUDES_SWITCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TOO_SHORT_TRANSITION_TIME_FOR_ATTITUDES_SWITCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TOO_SMALL_SCALE_FOR_PARAMETER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TOO_SMALL_SCALE_FOR_PARAMETER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TRAJECTORY_INSIDE_BRILLOUIN_SPHERE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TRAJECTORY_INSIDE_BRILLOUIN_SPHERE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TRAJECTORY_NOT_CROSSING_XZPLANE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TRAJECTORY_NOT_CROSSING_XZPLANE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_COMPUTE_BROUWER_LYDDANE_MEAN_PARAMETERS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_COMPUTE_BROUWER_LYDDANE_MEAN_PARAMETERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_COMPUTE_DSST_MEAN_PARAMETERS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_COMPUTE_DSST_MEAN_PARAMETERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_COMPUTE_ECKSTEIN_HECHLER_MEAN_PARAMETERS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_COMPUTE_ECKSTEIN_HECHLER_MEAN_PARAMETERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_COMPUTE_HYPERBOLIC_ECCENTRIC_ANOMALY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_COMPUTE_HYPERBOLIC_ECCENTRIC_ANOMALY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_COMPUTE_TLE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_COMPUTE_TLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_FIND_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_FIND_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_FIND_RESOURCE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_FIND_RESOURCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_GENERATE_NEW_DATA_AFTER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_GENERATE_NEW_DATA_AFTER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_GENERATE_NEW_DATA_BEFORE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_GENERATE_NEW_DATA_BEFORE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_PARSE_ELEMENT_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_PARSE_ELEMENT_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_PARSE_LINE_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_PARSE_LINE_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_READ_JPL_HEADER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_READ_JPL_HEADER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNDEFINED_ABSOLUTE_PVCOORDINATES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNDEFINED_ABSOLUTE_PVCOORDINATES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNDEFINED_ORBIT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNDEFINED_ORBIT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNEXPECTED_CONTENT_TYPE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNEXPECTED_CONTENT_TYPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNEXPECTED_DATA_AFTER_LINE_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNEXPECTED_DATA_AFTER_LINE_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNEXPECTED_DATA_AT_LINE_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNEXPECTED_DATA_AT_LINE_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNEXPECTED_END_OF_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNEXPECTED_END_OF_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNEXPECTED_END_OF_FILE_AFTER_LINE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNEXPECTED_END_OF_FILE_AFTER_LINE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNEXPECTED_FILE_FORMAT_ERROR_FOR_LOADER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNEXPECTED_FILE_FORMAT_ERROR_FOR_LOADER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNEXPECTED_FORMAT_FOR_ILRS_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNEXPECTED_FORMAT_FOR_ILRS_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNEXPECTED_TWO_ELEVATION_VALUES_FOR_ONE_AZIMUTH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNEXPECTED_TWO_ELEVATION_VALUES_FOR_ONE_AZIMUTH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNINITIALIZED_VALUE_FOR_KEY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNINITIALIZED_VALUE_FOR_KEY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_ADDITIONAL_STATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_ADDITIONAL_STATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_AUTHENTICATION_METHOD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_AUTHENTICATION_METHOD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_CARRIER_PHASE_CODE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_CARRIER_PHASE_CODE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_CLOCK_DATA_TYPE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_CLOCK_DATA_TYPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_DATA_FORMAT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_DATA_FORMAT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_ENCODED_MESSAGE_NUMBER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_ENCODED_MESSAGE_NUMBER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_HOST", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_HOST)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_MONTH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_MONTH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_NAVIGATION_SYSTEM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_NAVIGATION_SYSTEM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_RINEX_FREQUENCY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_RINEX_FREQUENCY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_SATELLITE_ANTENNA_CODE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_SATELLITE_ANTENNA_CODE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_SATELLITE_SYSTEM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_SATELLITE_SYSTEM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_TIME_SYSTEM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_TIME_SYSTEM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_UNIT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_UNIT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_UTC_ID", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_UTC_ID)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNSUPPORTED_FILE_FORMAT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNSUPPORTED_FILE_FORMAT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNSUPPORTED_FILE_FORMAT_VERSION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNSUPPORTED_FILE_FORMAT_VERSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNSUPPORTED_FREQUENCY_FOR_ANTENNA", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNSUPPORTED_FREQUENCY_FOR_ANTENNA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNSUPPORTED_LOCAL_ORBITAL_FRAME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNSUPPORTED_LOCAL_ORBITAL_FRAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNSUPPORTED_PARAMETER_NAME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNSUPPORTED_PARAMETER_NAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNSUPPORTED_TIME_TRANSFORM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNSUPPORTED_TIME_TRANSFORM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNSUPPORTED_TRANSFORM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNSUPPORTED_TRANSFORM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "VALUE_NOT_FOUND", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::VALUE_NOT_FOUND)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_AVAILABLE_FOR_DATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_AVAILABLE_FOR_DATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_LOADED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_LOADED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "WRONG_COLUMNS_NUMBER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::WRONG_COLUMNS_NUMBER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "WRONG_DEGREE_OR_ORDER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::WRONG_DEGREE_OR_ORDER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "WRONG_EOP_INTERPOLATION_DEGREE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::WRONG_EOP_INTERPOLATION_DEGREE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "WRONG_INTERPOLATOR_DEFINED_FOR_STATE_INTERPOLATION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::WRONG_INTERPOLATOR_DEFINED_FOR_STATE_INTERPOLATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "WRONG_NB_COMPONENTS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::WRONG_NB_COMPONENTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "WRONG_ORBIT_PARAMETERS_TYPE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::WRONG_ORBIT_PARAMETERS_TYPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "WRONG_PARSING_TYPE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::WRONG_PARSING_TYPE)));
      }

      static PyObject *t_OrekitMessages_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrekitMessages::initializeClass, 1)))
          return NULL;
        return t_OrekitMessages::wrap_Object(OrekitMessages(((t_OrekitMessages *) arg)->object.this$));
      }
      static PyObject *t_OrekitMessages_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrekitMessages::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OrekitMessages_of_(t_OrekitMessages *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_OrekitMessages_getLocalizedString(t_OrekitMessages *self, PyObject *arg)
      {
        ::java::util::Locale a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::java::util::Locale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getLocalizedString(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLocalizedString", arg);
        return NULL;
      }

      static PyObject *t_OrekitMessages_getSourceString(t_OrekitMessages *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSourceString());
        return j2p(result);
      }

      static PyObject *t_OrekitMessages_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        OrekitMessages result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::errors::OrekitMessages::valueOf(a0));
          return t_OrekitMessages::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_OrekitMessages_values(PyTypeObject *type)
      {
        JArray< OrekitMessages > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::errors::OrekitMessages::values());
        return JArray<jobject>(result.this$).wrap(t_OrekitMessages::wrap_jobject);
      }
      static PyObject *t_OrekitMessages_get__parameters_(t_OrekitMessages *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_OrekitMessages_get__sourceString(t_OrekitMessages *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSourceString());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/text/NumberFormat.h"
#include "java/util/Locale.h"
#include "java/text/NumberFormat.h"
#include "java/lang/Number.h"
#include "java/lang/StringBuffer.h"
#include "java/text/ParseException.h"
#include "java/text/ParsePosition.h"
#include "java/text/FieldPosition.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/util/Currency.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace text {

    ::java::lang::Class *NumberFormat::class$ = NULL;
    jmethodID *NumberFormat::mids$ = NULL;
    bool NumberFormat::live$ = false;
    jint NumberFormat::FRACTION_FIELD = (jint) 0;
    jint NumberFormat::INTEGER_FIELD = (jint) 0;

    jclass NumberFormat::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/text/NumberFormat");

        mids$ = new jmethodID[max_mid];
        mids$[mid_clone_4d26fd885228c716] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_format_e8f51f84167aafbd] = env->getMethodID(cls, "format", "(D)Ljava/lang/String;");
        mids$[mid_format_b42814811762ffb5] = env->getMethodID(cls, "format", "(J)Ljava/lang/String;");
        mids$[mid_format_71cdbf949acd3c79] = env->getMethodID(cls, "format", "(DLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
        mids$[mid_format_f5c3717ad7292c63] = env->getMethodID(cls, "format", "(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
        mids$[mid_format_1ad97cb6c82be27f] = env->getMethodID(cls, "format", "(JLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
        mids$[mid_getAvailableLocales_c5ed07ebd55821bb] = env->getStaticMethodID(cls, "getAvailableLocales", "()[Ljava/util/Locale;");
        mids$[mid_getCurrency_7ca0ce948a4de82c] = env->getMethodID(cls, "getCurrency", "()Ljava/util/Currency;");
        mids$[mid_getCurrencyInstance_24f83dea4a8657b1] = env->getStaticMethodID(cls, "getCurrencyInstance", "()Ljava/text/NumberFormat;");
        mids$[mid_getCurrencyInstance_09db48c8af63ef24] = env->getStaticMethodID(cls, "getCurrencyInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;");
        mids$[mid_getInstance_24f83dea4a8657b1] = env->getStaticMethodID(cls, "getInstance", "()Ljava/text/NumberFormat;");
        mids$[mid_getInstance_09db48c8af63ef24] = env->getStaticMethodID(cls, "getInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;");
        mids$[mid_getIntegerInstance_24f83dea4a8657b1] = env->getStaticMethodID(cls, "getIntegerInstance", "()Ljava/text/NumberFormat;");
        mids$[mid_getIntegerInstance_09db48c8af63ef24] = env->getStaticMethodID(cls, "getIntegerInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;");
        mids$[mid_getMaximumFractionDigits_570ce0828f81a2c1] = env->getMethodID(cls, "getMaximumFractionDigits", "()I");
        mids$[mid_getMaximumIntegerDigits_570ce0828f81a2c1] = env->getMethodID(cls, "getMaximumIntegerDigits", "()I");
        mids$[mid_getMinimumFractionDigits_570ce0828f81a2c1] = env->getMethodID(cls, "getMinimumFractionDigits", "()I");
        mids$[mid_getMinimumIntegerDigits_570ce0828f81a2c1] = env->getMethodID(cls, "getMinimumIntegerDigits", "()I");
        mids$[mid_getNumberInstance_24f83dea4a8657b1] = env->getStaticMethodID(cls, "getNumberInstance", "()Ljava/text/NumberFormat;");
        mids$[mid_getNumberInstance_09db48c8af63ef24] = env->getStaticMethodID(cls, "getNumberInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;");
        mids$[mid_getPercentInstance_24f83dea4a8657b1] = env->getStaticMethodID(cls, "getPercentInstance", "()Ljava/text/NumberFormat;");
        mids$[mid_getPercentInstance_09db48c8af63ef24] = env->getStaticMethodID(cls, "getPercentInstance", "(Ljava/util/Locale;)Ljava/text/NumberFormat;");
        mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isGroupingUsed_b108b35ef48e27bd] = env->getMethodID(cls, "isGroupingUsed", "()Z");
        mids$[mid_isParseIntegerOnly_b108b35ef48e27bd] = env->getMethodID(cls, "isParseIntegerOnly", "()Z");
        mids$[mid_parse_098c234707b1d7e0] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Ljava/lang/Number;");
        mids$[mid_parse_0f2d9a00e2ec1df8] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;");
        mids$[mid_parseObject_621466ec4567b9e0] = env->getMethodID(cls, "parseObject", "(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;");
        mids$[mid_setCurrency_7f42074111826307] = env->getMethodID(cls, "setCurrency", "(Ljava/util/Currency;)V");
        mids$[mid_setGroupingUsed_bd04c9335fb9e4cf] = env->getMethodID(cls, "setGroupingUsed", "(Z)V");
        mids$[mid_setMaximumFractionDigits_99803b0791f320ff] = env->getMethodID(cls, "setMaximumFractionDigits", "(I)V");
        mids$[mid_setMaximumIntegerDigits_99803b0791f320ff] = env->getMethodID(cls, "setMaximumIntegerDigits", "(I)V");
        mids$[mid_setMinimumFractionDigits_99803b0791f320ff] = env->getMethodID(cls, "setMinimumFractionDigits", "(I)V");
        mids$[mid_setMinimumIntegerDigits_99803b0791f320ff] = env->getMethodID(cls, "setMinimumIntegerDigits", "(I)V");
        mids$[mid_setParseIntegerOnly_bd04c9335fb9e4cf] = env->getMethodID(cls, "setParseIntegerOnly", "(Z)V");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        FRACTION_FIELD = env->getStaticIntField(cls, "FRACTION_FIELD");
        INTEGER_FIELD = env->getStaticIntField(cls, "INTEGER_FIELD");
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::lang::Object NumberFormat::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_4d26fd885228c716]));
    }

    jboolean NumberFormat::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
    }

    ::java::lang::String NumberFormat::format(jdouble a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_format_e8f51f84167aafbd], a0));
    }

    ::java::lang::String NumberFormat::format(jlong a0) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_format_b42814811762ffb5], a0));
    }

    ::java::lang::StringBuffer NumberFormat::format(jdouble a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
    {
      return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_71cdbf949acd3c79], a0, a1.this$, a2.this$));
    }

    ::java::lang::StringBuffer NumberFormat::format(const ::java::lang::Object & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
    {
      return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_f5c3717ad7292c63], a0.this$, a1.this$, a2.this$));
    }

    ::java::lang::StringBuffer NumberFormat::format(jlong a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
    {
      return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_1ad97cb6c82be27f], a0, a1.this$, a2.this$));
    }

    JArray< ::java::util::Locale > NumberFormat::getAvailableLocales()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::util::Locale >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableLocales_c5ed07ebd55821bb]));
    }

    ::java::util::Currency NumberFormat::getCurrency() const
    {
      return ::java::util::Currency(env->callObjectMethod(this$, mids$[mid_getCurrency_7ca0ce948a4de82c]));
    }

    NumberFormat NumberFormat::getCurrencyInstance()
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getCurrencyInstance_24f83dea4a8657b1]));
    }

    NumberFormat NumberFormat::getCurrencyInstance(const ::java::util::Locale & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getCurrencyInstance_09db48c8af63ef24], a0.this$));
    }

    NumberFormat NumberFormat::getInstance()
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getInstance_24f83dea4a8657b1]));
    }

    NumberFormat NumberFormat::getInstance(const ::java::util::Locale & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getInstance_09db48c8af63ef24], a0.this$));
    }

    NumberFormat NumberFormat::getIntegerInstance()
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getIntegerInstance_24f83dea4a8657b1]));
    }

    NumberFormat NumberFormat::getIntegerInstance(const ::java::util::Locale & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getIntegerInstance_09db48c8af63ef24], a0.this$));
    }

    jint NumberFormat::getMaximumFractionDigits() const
    {
      return env->callIntMethod(this$, mids$[mid_getMaximumFractionDigits_570ce0828f81a2c1]);
    }

    jint NumberFormat::getMaximumIntegerDigits() const
    {
      return env->callIntMethod(this$, mids$[mid_getMaximumIntegerDigits_570ce0828f81a2c1]);
    }

    jint NumberFormat::getMinimumFractionDigits() const
    {
      return env->callIntMethod(this$, mids$[mid_getMinimumFractionDigits_570ce0828f81a2c1]);
    }

    jint NumberFormat::getMinimumIntegerDigits() const
    {
      return env->callIntMethod(this$, mids$[mid_getMinimumIntegerDigits_570ce0828f81a2c1]);
    }

    NumberFormat NumberFormat::getNumberInstance()
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getNumberInstance_24f83dea4a8657b1]));
    }

    NumberFormat NumberFormat::getNumberInstance(const ::java::util::Locale & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getNumberInstance_09db48c8af63ef24], a0.this$));
    }

    NumberFormat NumberFormat::getPercentInstance()
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getPercentInstance_24f83dea4a8657b1]));
    }

    NumberFormat NumberFormat::getPercentInstance(const ::java::util::Locale & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return NumberFormat(env->callStaticObjectMethod(cls, mids$[mid_getPercentInstance_09db48c8af63ef24], a0.this$));
    }

    jint NumberFormat::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
    }

    jboolean NumberFormat::isGroupingUsed() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isGroupingUsed_b108b35ef48e27bd]);
    }

    jboolean NumberFormat::isParseIntegerOnly() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isParseIntegerOnly_b108b35ef48e27bd]);
    }

    ::java::lang::Number NumberFormat::parse(const ::java::lang::String & a0) const
    {
      return ::java::lang::Number(env->callObjectMethod(this$, mids$[mid_parse_098c234707b1d7e0], a0.this$));
    }

    ::java::lang::Number NumberFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
    {
      return ::java::lang::Number(env->callObjectMethod(this$, mids$[mid_parse_0f2d9a00e2ec1df8], a0.this$, a1.this$));
    }

    ::java::lang::Object NumberFormat::parseObject(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_parseObject_621466ec4567b9e0], a0.this$, a1.this$));
    }

    void NumberFormat::setCurrency(const ::java::util::Currency & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setCurrency_7f42074111826307], a0.this$);
    }

    void NumberFormat::setGroupingUsed(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setGroupingUsed_bd04c9335fb9e4cf], a0);
    }

    void NumberFormat::setMaximumFractionDigits(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMaximumFractionDigits_99803b0791f320ff], a0);
    }

    void NumberFormat::setMaximumIntegerDigits(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMaximumIntegerDigits_99803b0791f320ff], a0);
    }

    void NumberFormat::setMinimumFractionDigits(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMinimumFractionDigits_99803b0791f320ff], a0);
    }

    void NumberFormat::setMinimumIntegerDigits(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMinimumIntegerDigits_99803b0791f320ff], a0);
    }

    void NumberFormat::setParseIntegerOnly(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setParseIntegerOnly_bd04c9335fb9e4cf], a0);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace text {
    static PyObject *t_NumberFormat_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_NumberFormat_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_NumberFormat_clone(t_NumberFormat *self, PyObject *args);
    static PyObject *t_NumberFormat_equals(t_NumberFormat *self, PyObject *args);
    static PyObject *t_NumberFormat_format(t_NumberFormat *self, PyObject *args);
    static PyObject *t_NumberFormat_getAvailableLocales(PyTypeObject *type);
    static PyObject *t_NumberFormat_getCurrency(t_NumberFormat *self);
    static PyObject *t_NumberFormat_getCurrencyInstance(PyTypeObject *type, PyObject *args);
    static PyObject *t_NumberFormat_getInstance(PyTypeObject *type, PyObject *args);
    static PyObject *t_NumberFormat_getIntegerInstance(PyTypeObject *type, PyObject *args);
    static PyObject *t_NumberFormat_getMaximumFractionDigits(t_NumberFormat *self);
    static PyObject *t_NumberFormat_getMaximumIntegerDigits(t_NumberFormat *self);
    static PyObject *t_NumberFormat_getMinimumFractionDigits(t_NumberFormat *self);
    static PyObject *t_NumberFormat_getMinimumIntegerDigits(t_NumberFormat *self);
    static PyObject *t_NumberFormat_getNumberInstance(PyTypeObject *type, PyObject *args);
    static PyObject *t_NumberFormat_getPercentInstance(PyTypeObject *type, PyObject *args);
    static PyObject *t_NumberFormat_hashCode(t_NumberFormat *self, PyObject *args);
    static PyObject *t_NumberFormat_isGroupingUsed(t_NumberFormat *self);
    static PyObject *t_NumberFormat_isParseIntegerOnly(t_NumberFormat *self);
    static PyObject *t_NumberFormat_parse(t_NumberFormat *self, PyObject *args);
    static PyObject *t_NumberFormat_parseObject(t_NumberFormat *self, PyObject *args);
    static PyObject *t_NumberFormat_setCurrency(t_NumberFormat *self, PyObject *arg);
    static PyObject *t_NumberFormat_setGroupingUsed(t_NumberFormat *self, PyObject *arg);
    static PyObject *t_NumberFormat_setMaximumFractionDigits(t_NumberFormat *self, PyObject *arg);
    static PyObject *t_NumberFormat_setMaximumIntegerDigits(t_NumberFormat *self, PyObject *arg);
    static PyObject *t_NumberFormat_setMinimumFractionDigits(t_NumberFormat *self, PyObject *arg);
    static PyObject *t_NumberFormat_setMinimumIntegerDigits(t_NumberFormat *self, PyObject *arg);
    static PyObject *t_NumberFormat_setParseIntegerOnly(t_NumberFormat *self, PyObject *arg);
    static PyObject *t_NumberFormat_get__availableLocales(t_NumberFormat *self, void *data);
    static PyObject *t_NumberFormat_get__currency(t_NumberFormat *self, void *data);
    static int t_NumberFormat_set__currency(t_NumberFormat *self, PyObject *arg, void *data);
    static PyObject *t_NumberFormat_get__currencyInstance(t_NumberFormat *self, void *data);
    static PyObject *t_NumberFormat_get__groupingUsed(t_NumberFormat *self, void *data);
    static int t_NumberFormat_set__groupingUsed(t_NumberFormat *self, PyObject *arg, void *data);
    static PyObject *t_NumberFormat_get__instance(t_NumberFormat *self, void *data);
    static PyObject *t_NumberFormat_get__integerInstance(t_NumberFormat *self, void *data);
    static PyObject *t_NumberFormat_get__maximumFractionDigits(t_NumberFormat *self, void *data);
    static int t_NumberFormat_set__maximumFractionDigits(t_NumberFormat *self, PyObject *arg, void *data);
    static PyObject *t_NumberFormat_get__maximumIntegerDigits(t_NumberFormat *self, void *data);
    static int t_NumberFormat_set__maximumIntegerDigits(t_NumberFormat *self, PyObject *arg, void *data);
    static PyObject *t_NumberFormat_get__minimumFractionDigits(t_NumberFormat *self, void *data);
    static int t_NumberFormat_set__minimumFractionDigits(t_NumberFormat *self, PyObject *arg, void *data);
    static PyObject *t_NumberFormat_get__minimumIntegerDigits(t_NumberFormat *self, void *data);
    static int t_NumberFormat_set__minimumIntegerDigits(t_NumberFormat *self, PyObject *arg, void *data);
    static PyObject *t_NumberFormat_get__numberInstance(t_NumberFormat *self, void *data);
    static PyObject *t_NumberFormat_get__parseIntegerOnly(t_NumberFormat *self, void *data);
    static int t_NumberFormat_set__parseIntegerOnly(t_NumberFormat *self, PyObject *arg, void *data);
    static PyObject *t_NumberFormat_get__percentInstance(t_NumberFormat *self, void *data);
    static PyGetSetDef t_NumberFormat__fields_[] = {
      DECLARE_GET_FIELD(t_NumberFormat, availableLocales),
      DECLARE_GETSET_FIELD(t_NumberFormat, currency),
      DECLARE_GET_FIELD(t_NumberFormat, currencyInstance),
      DECLARE_GETSET_FIELD(t_NumberFormat, groupingUsed),
      DECLARE_GET_FIELD(t_NumberFormat, instance),
      DECLARE_GET_FIELD(t_NumberFormat, integerInstance),
      DECLARE_GETSET_FIELD(t_NumberFormat, maximumFractionDigits),
      DECLARE_GETSET_FIELD(t_NumberFormat, maximumIntegerDigits),
      DECLARE_GETSET_FIELD(t_NumberFormat, minimumFractionDigits),
      DECLARE_GETSET_FIELD(t_NumberFormat, minimumIntegerDigits),
      DECLARE_GET_FIELD(t_NumberFormat, numberInstance),
      DECLARE_GETSET_FIELD(t_NumberFormat, parseIntegerOnly),
      DECLARE_GET_FIELD(t_NumberFormat, percentInstance),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_NumberFormat__methods_[] = {
      DECLARE_METHOD(t_NumberFormat, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_NumberFormat, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_NumberFormat, clone, METH_VARARGS),
      DECLARE_METHOD(t_NumberFormat, equals, METH_VARARGS),
      DECLARE_METHOD(t_NumberFormat, format, METH_VARARGS),
      DECLARE_METHOD(t_NumberFormat, getAvailableLocales, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_NumberFormat, getCurrency, METH_NOARGS),
      DECLARE_METHOD(t_NumberFormat, getCurrencyInstance, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_NumberFormat, getInstance, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_NumberFormat, getIntegerInstance, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_NumberFormat, getMaximumFractionDigits, METH_NOARGS),
      DECLARE_METHOD(t_NumberFormat, getMaximumIntegerDigits, METH_NOARGS),
      DECLARE_METHOD(t_NumberFormat, getMinimumFractionDigits, METH_NOARGS),
      DECLARE_METHOD(t_NumberFormat, getMinimumIntegerDigits, METH_NOARGS),
      DECLARE_METHOD(t_NumberFormat, getNumberInstance, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_NumberFormat, getPercentInstance, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_NumberFormat, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_NumberFormat, isGroupingUsed, METH_NOARGS),
      DECLARE_METHOD(t_NumberFormat, isParseIntegerOnly, METH_NOARGS),
      DECLARE_METHOD(t_NumberFormat, parse, METH_VARARGS),
      DECLARE_METHOD(t_NumberFormat, parseObject, METH_VARARGS),
      DECLARE_METHOD(t_NumberFormat, setCurrency, METH_O),
      DECLARE_METHOD(t_NumberFormat, setGroupingUsed, METH_O),
      DECLARE_METHOD(t_NumberFormat, setMaximumFractionDigits, METH_O),
      DECLARE_METHOD(t_NumberFormat, setMaximumIntegerDigits, METH_O),
      DECLARE_METHOD(t_NumberFormat, setMinimumFractionDigits, METH_O),
      DECLARE_METHOD(t_NumberFormat, setMinimumIntegerDigits, METH_O),
      DECLARE_METHOD(t_NumberFormat, setParseIntegerOnly, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(NumberFormat)[] = {
      { Py_tp_methods, t_NumberFormat__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_NumberFormat__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(NumberFormat)[] = {
      &PY_TYPE_DEF(::java::text::Format),
      NULL
    };

    DEFINE_TYPE(NumberFormat, t_NumberFormat, NumberFormat);

    void t_NumberFormat::install(PyObject *module)
    {
      installType(&PY_TYPE(NumberFormat), &PY_TYPE_DEF(NumberFormat), module, "NumberFormat", 0);
    }

    void t_NumberFormat::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(NumberFormat), "class_", make_descriptor(NumberFormat::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NumberFormat), "wrapfn_", make_descriptor(t_NumberFormat::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NumberFormat), "boxfn_", make_descriptor(boxObject));
      env->getClass(NumberFormat::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(NumberFormat), "FRACTION_FIELD", make_descriptor(NumberFormat::FRACTION_FIELD));
      PyObject_SetAttrString((PyObject *) PY_TYPE(NumberFormat), "INTEGER_FIELD", make_descriptor(NumberFormat::INTEGER_FIELD));
    }

    static PyObject *t_NumberFormat_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, NumberFormat::initializeClass, 1)))
        return NULL;
      return t_NumberFormat::wrap_Object(NumberFormat(((t_NumberFormat *) arg)->object.this$));
    }
    static PyObject *t_NumberFormat_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, NumberFormat::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_NumberFormat_clone(t_NumberFormat *self, PyObject *args)
    {
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.clone());
        return ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(NumberFormat), (PyObject *) self, "clone", args, 2);
    }

    static PyObject *t_NumberFormat_equals(t_NumberFormat *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(NumberFormat), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_NumberFormat_format(t_NumberFormat *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jdouble a0;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.format(a0));
            return j2p(result);
          }
        }
        {
          jlong a0;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(result = self->object.format(a0));
            return j2p(result);
          }
        }
        break;
       case 3:
        {
          jdouble a0;
          ::java::lang::StringBuffer a1((jobject) NULL);
          ::java::text::FieldPosition a2((jobject) NULL);
          ::java::lang::StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "Dkk", ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.format(a0, a1, a2));
            return ::java::lang::t_StringBuffer::wrap_Object(result);
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::StringBuffer a1((jobject) NULL);
          ::java::text::FieldPosition a2((jobject) NULL);
          ::java::lang::StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "okk", ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.format(a0, a1, a2));
            return ::java::lang::t_StringBuffer::wrap_Object(result);
          }
        }
        {
          jlong a0;
          ::java::lang::StringBuffer a1((jobject) NULL);
          ::java::text::FieldPosition a2((jobject) NULL);
          ::java::lang::StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "Jkk", ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.format(a0, a1, a2));
            return ::java::lang::t_StringBuffer::wrap_Object(result);
          }
        }
      }

      return callSuper(PY_TYPE(NumberFormat), (PyObject *) self, "format", args, 2);
    }

    static PyObject *t_NumberFormat_getAvailableLocales(PyTypeObject *type)
    {
      JArray< ::java::util::Locale > result((jobject) NULL);
      OBJ_CALL(result = ::java::text::NumberFormat::getAvailableLocales());
      return JArray<jobject>(result.this$).wrap(::java::util::t_Locale::wrap_jobject);
    }

    static PyObject *t_NumberFormat_getCurrency(t_NumberFormat *self)
    {
      ::java::util::Currency result((jobject) NULL);
      OBJ_CALL(result = self->object.getCurrency());
      return ::java::util::t_Currency::wrap_Object(result);
    }

    static PyObject *t_NumberFormat_getCurrencyInstance(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          NumberFormat result((jobject) NULL);
          OBJ_CALL(result = ::java::text::NumberFormat::getCurrencyInstance());
          return t_NumberFormat::wrap_Object(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          NumberFormat result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = ::java::text::NumberFormat::getCurrencyInstance(a0));
            return t_NumberFormat::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getCurrencyInstance", args);
      return NULL;
    }

    static PyObject *t_NumberFormat_getInstance(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          NumberFormat result((jobject) NULL);
          OBJ_CALL(result = ::java::text::NumberFormat::getInstance());
          return t_NumberFormat::wrap_Object(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          NumberFormat result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = ::java::text::NumberFormat::getInstance(a0));
            return t_NumberFormat::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getInstance", args);
      return NULL;
    }

    static PyObject *t_NumberFormat_getIntegerInstance(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          NumberFormat result((jobject) NULL);
          OBJ_CALL(result = ::java::text::NumberFormat::getIntegerInstance());
          return t_NumberFormat::wrap_Object(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          NumberFormat result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = ::java::text::NumberFormat::getIntegerInstance(a0));
            return t_NumberFormat::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getIntegerInstance", args);
      return NULL;
    }

    static PyObject *t_NumberFormat_getMaximumFractionDigits(t_NumberFormat *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getMaximumFractionDigits());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_NumberFormat_getMaximumIntegerDigits(t_NumberFormat *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getMaximumIntegerDigits());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_NumberFormat_getMinimumFractionDigits(t_NumberFormat *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getMinimumFractionDigits());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_NumberFormat_getMinimumIntegerDigits(t_NumberFormat *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getMinimumIntegerDigits());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_NumberFormat_getNumberInstance(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          NumberFormat result((jobject) NULL);
          OBJ_CALL(result = ::java::text::NumberFormat::getNumberInstance());
          return t_NumberFormat::wrap_Object(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          NumberFormat result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = ::java::text::NumberFormat::getNumberInstance(a0));
            return t_NumberFormat::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getNumberInstance", args);
      return NULL;
    }

    static PyObject *t_NumberFormat_getPercentInstance(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          NumberFormat result((jobject) NULL);
          OBJ_CALL(result = ::java::text::NumberFormat::getPercentInstance());
          return t_NumberFormat::wrap_Object(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          NumberFormat result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = ::java::text::NumberFormat::getPercentInstance(a0));
            return t_NumberFormat::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getPercentInstance", args);
      return NULL;
    }

    static PyObject *t_NumberFormat_hashCode(t_NumberFormat *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(NumberFormat), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_NumberFormat_isGroupingUsed(t_NumberFormat *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isGroupingUsed());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_NumberFormat_isParseIntegerOnly(t_NumberFormat *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isParseIntegerOnly());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_NumberFormat_parse(t_NumberFormat *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Number result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.parse(a0));
            return ::java::lang::t_Number::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::text::ParsePosition a1((jobject) NULL);
          ::java::lang::Number result((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.parse(a0, a1));
            return ::java::lang::t_Number::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "parse", args);
      return NULL;
    }

    static PyObject *t_NumberFormat_parseObject(t_NumberFormat *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::text::ParsePosition a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
      {
        OBJ_CALL(result = self->object.parseObject(a0, a1));
        return ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(NumberFormat), (PyObject *) self, "parseObject", args, 2);
    }

    static PyObject *t_NumberFormat_setCurrency(t_NumberFormat *self, PyObject *arg)
    {
      ::java::util::Currency a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::util::Currency::initializeClass, &a0))
      {
        OBJ_CALL(self->object.setCurrency(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setCurrency", arg);
      return NULL;
    }

    static PyObject *t_NumberFormat_setGroupingUsed(t_NumberFormat *self, PyObject *arg)
    {
      jboolean a0;

      if (!parseArg(arg, "Z", &a0))
      {
        OBJ_CALL(self->object.setGroupingUsed(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setGroupingUsed", arg);
      return NULL;
    }

    static PyObject *t_NumberFormat_setMaximumFractionDigits(t_NumberFormat *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setMaximumFractionDigits(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setMaximumFractionDigits", arg);
      return NULL;
    }

    static PyObject *t_NumberFormat_setMaximumIntegerDigits(t_NumberFormat *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setMaximumIntegerDigits(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setMaximumIntegerDigits", arg);
      return NULL;
    }

    static PyObject *t_NumberFormat_setMinimumFractionDigits(t_NumberFormat *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setMinimumFractionDigits(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setMinimumFractionDigits", arg);
      return NULL;
    }

    static PyObject *t_NumberFormat_setMinimumIntegerDigits(t_NumberFormat *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setMinimumIntegerDigits(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setMinimumIntegerDigits", arg);
      return NULL;
    }

    static PyObject *t_NumberFormat_setParseIntegerOnly(t_NumberFormat *self, PyObject *arg)
    {
      jboolean a0;

      if (!parseArg(arg, "Z", &a0))
      {
        OBJ_CALL(self->object.setParseIntegerOnly(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setParseIntegerOnly", arg);
      return NULL;
    }

    static PyObject *t_NumberFormat_get__availableLocales(t_NumberFormat *self, void *data)
    {
      JArray< ::java::util::Locale > value((jobject) NULL);
      OBJ_CALL(value = self->object.getAvailableLocales());
      return JArray<jobject>(value.this$).wrap(::java::util::t_Locale::wrap_jobject);
    }

    static PyObject *t_NumberFormat_get__currency(t_NumberFormat *self, void *data)
    {
      ::java::util::Currency value((jobject) NULL);
      OBJ_CALL(value = self->object.getCurrency());
      return ::java::util::t_Currency::wrap_Object(value);
    }
    static int t_NumberFormat_set__currency(t_NumberFormat *self, PyObject *arg, void *data)
    {
      {
        ::java::util::Currency value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::util::Currency::initializeClass, &value))
        {
          INT_CALL(self->object.setCurrency(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "currency", arg);
      return -1;
    }

    static PyObject *t_NumberFormat_get__currencyInstance(t_NumberFormat *self, void *data)
    {
      NumberFormat value((jobject) NULL);
      OBJ_CALL(value = self->object.getCurrencyInstance());
      return t_NumberFormat::wrap_Object(value);
    }

    static PyObject *t_NumberFormat_get__groupingUsed(t_NumberFormat *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isGroupingUsed());
      Py_RETURN_BOOL(value);
    }
    static int t_NumberFormat_set__groupingUsed(t_NumberFormat *self, PyObject *arg, void *data)
    {
      {
        jboolean value;
        if (!parseArg(arg, "Z", &value))
        {
          INT_CALL(self->object.setGroupingUsed(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "groupingUsed", arg);
      return -1;
    }

    static PyObject *t_NumberFormat_get__instance(t_NumberFormat *self, void *data)
    {
      NumberFormat value((jobject) NULL);
      OBJ_CALL(value = self->object.getInstance());
      return t_NumberFormat::wrap_Object(value);
    }

    static PyObject *t_NumberFormat_get__integerInstance(t_NumberFormat *self, void *data)
    {
      NumberFormat value((jobject) NULL);
      OBJ_CALL(value = self->object.getIntegerInstance());
      return t_NumberFormat::wrap_Object(value);
    }

    static PyObject *t_NumberFormat_get__maximumFractionDigits(t_NumberFormat *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMaximumFractionDigits());
      return PyLong_FromLong((long) value);
    }
    static int t_NumberFormat_set__maximumFractionDigits(t_NumberFormat *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMaximumFractionDigits(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "maximumFractionDigits", arg);
      return -1;
    }

    static PyObject *t_NumberFormat_get__maximumIntegerDigits(t_NumberFormat *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMaximumIntegerDigits());
      return PyLong_FromLong((long) value);
    }
    static int t_NumberFormat_set__maximumIntegerDigits(t_NumberFormat *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMaximumIntegerDigits(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "maximumIntegerDigits", arg);
      return -1;
    }

    static PyObject *t_NumberFormat_get__minimumFractionDigits(t_NumberFormat *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMinimumFractionDigits());
      return PyLong_FromLong((long) value);
    }
    static int t_NumberFormat_set__minimumFractionDigits(t_NumberFormat *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMinimumFractionDigits(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "minimumFractionDigits", arg);
      return -1;
    }

    static PyObject *t_NumberFormat_get__minimumIntegerDigits(t_NumberFormat *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMinimumIntegerDigits());
      return PyLong_FromLong((long) value);
    }
    static int t_NumberFormat_set__minimumIntegerDigits(t_NumberFormat *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMinimumIntegerDigits(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "minimumIntegerDigits", arg);
      return -1;
    }

    static PyObject *t_NumberFormat_get__numberInstance(t_NumberFormat *self, void *data)
    {
      NumberFormat value((jobject) NULL);
      OBJ_CALL(value = self->object.getNumberInstance());
      return t_NumberFormat::wrap_Object(value);
    }

    static PyObject *t_NumberFormat_get__parseIntegerOnly(t_NumberFormat *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isParseIntegerOnly());
      Py_RETURN_BOOL(value);
    }
    static int t_NumberFormat_set__parseIntegerOnly(t_NumberFormat *self, PyObject *arg, void *data)
    {
      {
        jboolean value;
        if (!parseArg(arg, "Z", &value))
        {
          INT_CALL(self->object.setParseIntegerOnly(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "parseIntegerOnly", arg);
      return -1;
    }

    static PyObject *t_NumberFormat_get__percentInstance(t_NumberFormat *self, void *data)
    {
      NumberFormat value((jobject) NULL);
      OBJ_CALL(value = self->object.getPercentInstance());
      return t_NumberFormat::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {

          ::java::lang::Class *DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::class$ = NULL;
          jmethodID *DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::mids$ = NULL;
          bool DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::live$ = false;

          jclass DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver");

              mids$ = new jmethodID[max_mid];
              mids$[mid_partialsComputed_5c23c9e194727670] = env->getMethodID(cls, "partialsComputed", "(Lorg/orekit/propagation/SpacecraftState;Lorg/hipparchus/linear/RealMatrix;[D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::partialsComputed(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::hipparchus::linear::RealMatrix & a1, const JArray< jdouble > & a2) const
          {
            env->callVoidMethod(this$, mids$[mid_partialsComputed_5c23c9e194727670], a0.this$, a1.this$, a2.this$);
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
          static PyObject *t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver_partialsComputed(t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver *self, PyObject *args);

          static PyMethodDef t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver__methods_[] = {
            DECLARE_METHOD(t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver, partialsComputed, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver)[] = {
            { Py_tp_methods, t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver, t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver, DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver);

          void t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::install(PyObject *module)
          {
            installType(&PY_TYPE(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver), &PY_TYPE_DEF(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver), module, "DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver", 0);
          }

          void t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver), "class_", make_descriptor(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver), "wrapfn_", make_descriptor(t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::initializeClass, 1)))
              return NULL;
            return t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::wrap_Object(DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver(((t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver *) arg)->object.this$));
          }
          static PyObject *t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver_partialsComputed(t_DSSTStateTransitionMatrixGenerator$DSSTPartialsObserver *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
            JArray< jdouble > a2((jobject) NULL);

            if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/MathArrays$Position.h"
#include "org/hipparchus/util/MathArrays$Position.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MathArrays$Position::class$ = NULL;
      jmethodID *MathArrays$Position::mids$ = NULL;
      bool MathArrays$Position::live$ = false;
      MathArrays$Position *MathArrays$Position::HEAD = NULL;
      MathArrays$Position *MathArrays$Position::TAIL = NULL;

      jclass MathArrays$Position::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MathArrays$Position");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_3a36a4502b9282e2] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/util/MathArrays$Position;");
          mids$[mid_values_4379459f5fd610c1] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/util/MathArrays$Position;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          HEAD = new MathArrays$Position(env->getStaticObjectField(cls, "HEAD", "Lorg/hipparchus/util/MathArrays$Position;"));
          TAIL = new MathArrays$Position(env->getStaticObjectField(cls, "TAIL", "Lorg/hipparchus/util/MathArrays$Position;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MathArrays$Position MathArrays$Position::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return MathArrays$Position(env->callStaticObjectMethod(cls, mids$[mid_valueOf_3a36a4502b9282e2], a0.this$));
      }

      JArray< MathArrays$Position > MathArrays$Position::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< MathArrays$Position >(env->callStaticObjectMethod(cls, mids$[mid_values_4379459f5fd610c1]));
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
      static PyObject *t_MathArrays$Position_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays$Position_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathArrays$Position_of_(t_MathArrays$Position *self, PyObject *args);
      static PyObject *t_MathArrays$Position_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathArrays$Position_values(PyTypeObject *type);
      static PyObject *t_MathArrays$Position_get__parameters_(t_MathArrays$Position *self, void *data);
      static PyGetSetDef t_MathArrays$Position__fields_[] = {
        DECLARE_GET_FIELD(t_MathArrays$Position, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MathArrays$Position__methods_[] = {
        DECLARE_METHOD(t_MathArrays$Position, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays$Position, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathArrays$Position, of_, METH_VARARGS),
        DECLARE_METHOD(t_MathArrays$Position, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathArrays$Position, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathArrays$Position)[] = {
        { Py_tp_methods, t_MathArrays$Position__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_MathArrays$Position__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathArrays$Position)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(MathArrays$Position, t_MathArrays$Position, MathArrays$Position);
      PyObject *t_MathArrays$Position::wrap_Object(const MathArrays$Position& object, PyTypeObject *p0)
      {
        PyObject *obj = t_MathArrays$Position::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_MathArrays$Position *self = (t_MathArrays$Position *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_MathArrays$Position::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_MathArrays$Position::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_MathArrays$Position *self = (t_MathArrays$Position *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_MathArrays$Position::install(PyObject *module)
      {
        installType(&PY_TYPE(MathArrays$Position), &PY_TYPE_DEF(MathArrays$Position), module, "MathArrays$Position", 0);
      }

      void t_MathArrays$Position::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$Position), "class_", make_descriptor(MathArrays$Position::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$Position), "wrapfn_", make_descriptor(t_MathArrays$Position::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$Position), "boxfn_", make_descriptor(boxObject));
        env->getClass(MathArrays$Position::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$Position), "HEAD", make_descriptor(t_MathArrays$Position::wrap_Object(*MathArrays$Position::HEAD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathArrays$Position), "TAIL", make_descriptor(t_MathArrays$Position::wrap_Object(*MathArrays$Position::TAIL)));
      }

      static PyObject *t_MathArrays$Position_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathArrays$Position::initializeClass, 1)))
          return NULL;
        return t_MathArrays$Position::wrap_Object(MathArrays$Position(((t_MathArrays$Position *) arg)->object.this$));
      }
      static PyObject *t_MathArrays$Position_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathArrays$Position::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MathArrays$Position_of_(t_MathArrays$Position *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_MathArrays$Position_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        MathArrays$Position result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathArrays$Position::valueOf(a0));
          return t_MathArrays$Position::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_MathArrays$Position_values(PyTypeObject *type)
      {
        JArray< MathArrays$Position > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::util::MathArrays$Position::values());
        return JArray<jobject>(result.this$).wrap(t_MathArrays$Position::wrap_jobject);
      }
      static PyObject *t_MathArrays$Position_get__parameters_(t_MathArrays$Position *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fitting/PolynomialCurveFitter.h"
#include "java/lang/Class.h"
#include "org/hipparchus/fitting/PolynomialCurveFitter.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fitting {

      ::java::lang::Class *PolynomialCurveFitter::class$ = NULL;
      jmethodID *PolynomialCurveFitter::mids$ = NULL;
      bool PolynomialCurveFitter::live$ = false;

      jclass PolynomialCurveFitter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fitting/PolynomialCurveFitter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_create_762004ab44e0f985] = env->getStaticMethodID(cls, "create", "(I)Lorg/hipparchus/fitting/PolynomialCurveFitter;");
          mids$[mid_withMaxIterations_762004ab44e0f985] = env->getMethodID(cls, "withMaxIterations", "(I)Lorg/hipparchus/fitting/PolynomialCurveFitter;");
          mids$[mid_withStartPoint_13024057e91a5dd4] = env->getMethodID(cls, "withStartPoint", "([D)Lorg/hipparchus/fitting/PolynomialCurveFitter;");
          mids$[mid_getProblem_c197708a453e8034] = env->getMethodID(cls, "getProblem", "(Ljava/util/Collection;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PolynomialCurveFitter PolynomialCurveFitter::create(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return PolynomialCurveFitter(env->callStaticObjectMethod(cls, mids$[mid_create_762004ab44e0f985], a0));
      }

      PolynomialCurveFitter PolynomialCurveFitter::withMaxIterations(jint a0) const
      {
        return PolynomialCurveFitter(env->callObjectMethod(this$, mids$[mid_withMaxIterations_762004ab44e0f985], a0));
      }

      PolynomialCurveFitter PolynomialCurveFitter::withStartPoint(const JArray< jdouble > & a0) const
      {
        return PolynomialCurveFitter(env->callObjectMethod(this$, mids$[mid_withStartPoint_13024057e91a5dd4], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fitting {
      static PyObject *t_PolynomialCurveFitter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PolynomialCurveFitter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PolynomialCurveFitter_create(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PolynomialCurveFitter_withMaxIterations(t_PolynomialCurveFitter *self, PyObject *arg);
      static PyObject *t_PolynomialCurveFitter_withStartPoint(t_PolynomialCurveFitter *self, PyObject *arg);

      static PyMethodDef t_PolynomialCurveFitter__methods_[] = {
        DECLARE_METHOD(t_PolynomialCurveFitter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PolynomialCurveFitter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PolynomialCurveFitter, create, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PolynomialCurveFitter, withMaxIterations, METH_O),
        DECLARE_METHOD(t_PolynomialCurveFitter, withStartPoint, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PolynomialCurveFitter)[] = {
        { Py_tp_methods, t_PolynomialCurveFitter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PolynomialCurveFitter)[] = {
        &PY_TYPE_DEF(::org::hipparchus::fitting::AbstractCurveFitter),
        NULL
      };

      DEFINE_TYPE(PolynomialCurveFitter, t_PolynomialCurveFitter, PolynomialCurveFitter);

      void t_PolynomialCurveFitter::install(PyObject *module)
      {
        installType(&PY_TYPE(PolynomialCurveFitter), &PY_TYPE_DEF(PolynomialCurveFitter), module, "PolynomialCurveFitter", 0);
      }

      void t_PolynomialCurveFitter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialCurveFitter), "class_", make_descriptor(PolynomialCurveFitter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialCurveFitter), "wrapfn_", make_descriptor(t_PolynomialCurveFitter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialCurveFitter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PolynomialCurveFitter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PolynomialCurveFitter::initializeClass, 1)))
          return NULL;
        return t_PolynomialCurveFitter::wrap_Object(PolynomialCurveFitter(((t_PolynomialCurveFitter *) arg)->object.this$));
      }
      static PyObject *t_PolynomialCurveFitter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PolynomialCurveFitter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PolynomialCurveFitter_create(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        PolynomialCurveFitter result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::fitting::PolynomialCurveFitter::create(a0));
          return t_PolynomialCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "create", arg);
        return NULL;
      }

      static PyObject *t_PolynomialCurveFitter_withMaxIterations(t_PolynomialCurveFitter *self, PyObject *arg)
      {
        jint a0;
        PolynomialCurveFitter result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withMaxIterations(a0));
          return t_PolynomialCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withMaxIterations", arg);
        return NULL;
      }

      static PyObject *t_PolynomialCurveFitter_withStartPoint(t_PolynomialCurveFitter *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        PolynomialCurveFitter result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = self->object.withStartPoint(a0));
          return t_PolynomialCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withStartPoint", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/PythonAtmosphericRefractionModel.h"
#include "org/orekit/models/AtmosphericRefractionModel.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {

      ::java::lang::Class *PythonAtmosphericRefractionModel::class$ = NULL;
      jmethodID *PythonAtmosphericRefractionModel::mids$ = NULL;
      bool PythonAtmosphericRefractionModel::live$ = false;

      jclass PythonAtmosphericRefractionModel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/models/PythonAtmosphericRefractionModel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getRefraction_dcbc7ce2902fa136] = env->getMethodID(cls, "getRefraction", "(D)D");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAtmosphericRefractionModel::PythonAtmosphericRefractionModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonAtmosphericRefractionModel::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonAtmosphericRefractionModel::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonAtmosphericRefractionModel::pythonExtension(jlong a0) const
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
    namespace models {
      static PyObject *t_PythonAtmosphericRefractionModel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAtmosphericRefractionModel_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAtmosphericRefractionModel_init_(t_PythonAtmosphericRefractionModel *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAtmosphericRefractionModel_finalize(t_PythonAtmosphericRefractionModel *self);
      static PyObject *t_PythonAtmosphericRefractionModel_pythonExtension(t_PythonAtmosphericRefractionModel *self, PyObject *args);
      static jdouble JNICALL t_PythonAtmosphericRefractionModel_getRefraction0(JNIEnv *jenv, jobject jobj, jdouble a0);
      static void JNICALL t_PythonAtmosphericRefractionModel_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAtmosphericRefractionModel_get__self(t_PythonAtmosphericRefractionModel *self, void *data);
      static PyGetSetDef t_PythonAtmosphericRefractionModel__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAtmosphericRefractionModel, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAtmosphericRefractionModel__methods_[] = {
        DECLARE_METHOD(t_PythonAtmosphericRefractionModel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAtmosphericRefractionModel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAtmosphericRefractionModel, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAtmosphericRefractionModel, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAtmosphericRefractionModel)[] = {
        { Py_tp_methods, t_PythonAtmosphericRefractionModel__methods_ },
        { Py_tp_init, (void *) t_PythonAtmosphericRefractionModel_init_ },
        { Py_tp_getset, t_PythonAtmosphericRefractionModel__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAtmosphericRefractionModel)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonAtmosphericRefractionModel, t_PythonAtmosphericRefractionModel, PythonAtmosphericRefractionModel);

      void t_PythonAtmosphericRefractionModel::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAtmosphericRefractionModel), &PY_TYPE_DEF(PythonAtmosphericRefractionModel), module, "PythonAtmosphericRefractionModel", 1);
      }

      void t_PythonAtmosphericRefractionModel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAtmosphericRefractionModel), "class_", make_descriptor(PythonAtmosphericRefractionModel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAtmosphericRefractionModel), "wrapfn_", make_descriptor(t_PythonAtmosphericRefractionModel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAtmosphericRefractionModel), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAtmosphericRefractionModel::initializeClass);
        JNINativeMethod methods[] = {
          { "getRefraction", "(D)D", (void *) t_PythonAtmosphericRefractionModel_getRefraction0 },
          { "pythonDecRef", "()V", (void *) t_PythonAtmosphericRefractionModel_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonAtmosphericRefractionModel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAtmosphericRefractionModel::initializeClass, 1)))
          return NULL;
        return t_PythonAtmosphericRefractionModel::wrap_Object(PythonAtmosphericRefractionModel(((t_PythonAtmosphericRefractionModel *) arg)->object.this$));
      }
      static PyObject *t_PythonAtmosphericRefractionModel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAtmosphericRefractionModel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAtmosphericRefractionModel_init_(t_PythonAtmosphericRefractionModel *self, PyObject *args, PyObject *kwds)
      {
        PythonAtmosphericRefractionModel object((jobject) NULL);

        INT_CALL(object = PythonAtmosphericRefractionModel());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonAtmosphericRefractionModel_finalize(t_PythonAtmosphericRefractionModel *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAtmosphericRefractionModel_pythonExtension(t_PythonAtmosphericRefractionModel *self, PyObject *args)
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

      static jdouble JNICALL t_PythonAtmosphericRefractionModel_getRefraction0(JNIEnv *jenv, jobject jobj, jdouble a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAtmosphericRefractionModel::mids$[PythonAtmosphericRefractionModel::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getRefraction", "d", (double) a0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getRefraction", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static void JNICALL t_PythonAtmosphericRefractionModel_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAtmosphericRefractionModel::mids$[PythonAtmosphericRefractionModel::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAtmosphericRefractionModel::mids$[PythonAtmosphericRefractionModel::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAtmosphericRefractionModel_get__self(t_PythonAtmosphericRefractionModel *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldLnsCoefficients.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/SortedMap.h"
#include "java/lang/Double.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/CoefficientsFactory$NSKey.h"
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
                mids$[mid_init$_e0a281dafd8f50b8] = env->getMethodID(cls, "<init>", "(II[[Lorg/hipparchus/CalculusFieldElement;Ljava/util/SortedMap;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/Field;)V");
                mids$[mid_getLns_d0525157bc3abb83] = env->getMethodID(cls, "getLns", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdLnsdGamma_d0525157bc3abb83] = env->getMethodID(cls, "getdLnsdGamma", "(II)Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldLnsCoefficients::FieldLnsCoefficients(jint a0, jint a1, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a2, const ::java::util::SortedMap & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::Field & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e0a281dafd8f50b8, a0, a1, a2.this$, a3.this$, a4.this$, a5.this$)) {}

            ::org::hipparchus::CalculusFieldElement FieldLnsCoefficients::getLns(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLns_d0525157bc3abb83], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldLnsCoefficients::getdLnsdGamma(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdLnsdGamma_d0525157bc3abb83], a0, a1));
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
#include "org/orekit/models/earth/atmosphere/JB2008.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/models/earth/atmosphere/JB2008InputParameters.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *JB2008::class$ = NULL;
          jmethodID *JB2008::mids$ = NULL;
          bool JB2008::live$ = false;

          jclass JB2008::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/JB2008");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_938553a282dca92f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/JB2008InputParameters;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/BodyShape;)V");
              mids$[mid_init$_1be121049dfb39fb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/JB2008InputParameters;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/BodyShape;Lorg/orekit/time/TimeScale;)V");
              mids$[mid_getDensity_b79d75c1a8af7374] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getDensity_f7d7785230311c38] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)D");
              mids$[mid_getDensity_8f9ca6bae567f561] = env->getMethodID(cls, "getDensity", "(DDDDDDDDDDDDDDD)D");
              mids$[mid_getDensity_5801af748a6e81b4] = env->getMethodID(cls, "getDensity", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;DDDDDDDDD)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          JB2008::JB2008(const ::org::orekit::models::earth::atmosphere::JB2008InputParameters & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::orekit::bodies::BodyShape & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_938553a282dca92f, a0.this$, a1.this$, a2.this$)) {}

          JB2008::JB2008(const ::org::orekit::models::earth::atmosphere::JB2008InputParameters & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::orekit::bodies::BodyShape & a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1be121049dfb39fb, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          ::org::hipparchus::CalculusFieldElement JB2008::getDensity(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_b79d75c1a8af7374], a0.this$, a1.this$, a2.this$));
          }

          jdouble JB2008::getDensity(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDensity_f7d7785230311c38], a0.this$, a1.this$, a2.this$);
          }

          jdouble JB2008::getDensity(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jdouble a12, jdouble a13, jdouble a14) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDensity_8f9ca6bae567f561], a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
          }

          ::org::hipparchus::CalculusFieldElement JB2008::getDensity(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jdouble a12, jdouble a13, jdouble a14) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_5801af748a6e81b4], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6, a7, a8, a9, a10, a11, a12, a13, a14));
          }

          ::org::orekit::frames::Frame JB2008::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
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
          static PyObject *t_JB2008_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_JB2008_instance_(PyTypeObject *type, PyObject *arg);
          static int t_JB2008_init_(t_JB2008 *self, PyObject *args, PyObject *kwds);
          static PyObject *t_JB2008_getDensity(t_JB2008 *self, PyObject *args);
          static PyObject *t_JB2008_getFrame(t_JB2008 *self);
          static PyObject *t_JB2008_get__frame(t_JB2008 *self, void *data);
          static PyGetSetDef t_JB2008__fields_[] = {
            DECLARE_GET_FIELD(t_JB2008, frame),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_JB2008__methods_[] = {
            DECLARE_METHOD(t_JB2008, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JB2008, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JB2008, getDensity, METH_VARARGS),
            DECLARE_METHOD(t_JB2008, getFrame, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(JB2008)[] = {
            { Py_tp_methods, t_JB2008__methods_ },
            { Py_tp_init, (void *) t_JB2008_init_ },
            { Py_tp_getset, t_JB2008__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(JB2008)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(JB2008, t_JB2008, JB2008);

          void t_JB2008::install(PyObject *module)
          {
            installType(&PY_TYPE(JB2008), &PY_TYPE_DEF(JB2008), module, "JB2008", 0);
          }

          void t_JB2008::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008), "class_", make_descriptor(JB2008::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008), "wrapfn_", make_descriptor(t_JB2008::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JB2008), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_JB2008_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, JB2008::initializeClass, 1)))
              return NULL;
            return t_JB2008::wrap_Object(JB2008(((t_JB2008 *) arg)->object.this$));
          }
          static PyObject *t_JB2008_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, JB2008::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_JB2008_init_(t_JB2008 *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::models::earth::atmosphere::JB2008InputParameters a0((jobject) NULL);
                ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
                ::org::orekit::bodies::BodyShape a2((jobject) NULL);
                JB2008 object((jobject) NULL);

                if (!parseArgs(args, "kkk", ::org::orekit::models::earth::atmosphere::JB2008InputParameters::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = JB2008(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::orekit::models::earth::atmosphere::JB2008InputParameters a0((jobject) NULL);
                ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
                ::org::orekit::bodies::BodyShape a2((jobject) NULL);
                ::org::orekit::time::TimeScale a3((jobject) NULL);
                JB2008 object((jobject) NULL);

                if (!parseArgs(args, "kkkk", ::org::orekit::models::earth::atmosphere::JB2008InputParameters::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = JB2008(a0, a1, a2, a3));
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

          static PyObject *t_JB2008_getDensity(t_JB2008 *self, PyObject *args)
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
              break;
             case 15:
              {
                jdouble a0;
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
                jdouble a11;
                jdouble a12;
                jdouble a13;
                jdouble a14;
                jdouble result;

                if (!parseArgs(args, "DDDDDDDDDDDDDDD", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14));
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
                ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
                PyTypeObject **p5;
                jdouble a6;
                jdouble a7;
                jdouble a8;
                jdouble a9;
                jdouble a10;
                jdouble a11;
                jdouble a12;
                jdouble a13;
                jdouble a14;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKKKKKDDDDDDDDD", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getDensity", args);
            return NULL;
          }

          static PyObject *t_JB2008_getFrame(t_JB2008 *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_JB2008_get__frame(t_JB2008 *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/aem/StreamingAemWriter$SegmentWriter.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/StreamingAemWriter.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/sampling/OrekitFixedStepHandler.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *StreamingAemWriter$SegmentWriter::class$ = NULL;
              jmethodID *StreamingAemWriter$SegmentWriter::mids$ = NULL;
              bool StreamingAemWriter$SegmentWriter::live$ = false;

              jclass StreamingAemWriter$SegmentWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/StreamingAemWriter$SegmentWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_4398e87f17f24a3b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/aem/StreamingAemWriter;)V");
                  mids$[mid_finish_0ee5c56004643a2e] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
                  mids$[mid_handleStep_0ee5c56004643a2e] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/SpacecraftState;)V");
                  mids$[mid_init_eb5e26882ba2d9b9] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              StreamingAemWriter$SegmentWriter::StreamingAemWriter$SegmentWriter(const ::org::orekit::files::ccsds::ndm::adm::aem::StreamingAemWriter & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4398e87f17f24a3b, a0.this$)) {}

              void StreamingAemWriter$SegmentWriter::finish(const ::org::orekit::propagation::SpacecraftState & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_finish_0ee5c56004643a2e], a0.this$);
              }

              void StreamingAemWriter$SegmentWriter::handleStep(const ::org::orekit::propagation::SpacecraftState & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_handleStep_0ee5c56004643a2e], a0.this$);
              }

              void StreamingAemWriter$SegmentWriter::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
              {
                env->callVoidMethod(this$, mids$[mid_init_eb5e26882ba2d9b9], a0.this$, a1.this$, a2);
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
              static PyObject *t_StreamingAemWriter$SegmentWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_StreamingAemWriter$SegmentWriter_instance_(PyTypeObject *type, PyObject *arg);
              static int t_StreamingAemWriter$SegmentWriter_init_(t_StreamingAemWriter$SegmentWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_StreamingAemWriter$SegmentWriter_finish(t_StreamingAemWriter$SegmentWriter *self, PyObject *arg);
              static PyObject *t_StreamingAemWriter$SegmentWriter_handleStep(t_StreamingAemWriter$SegmentWriter *self, PyObject *arg);
              static PyObject *t_StreamingAemWriter$SegmentWriter_init(t_StreamingAemWriter$SegmentWriter *self, PyObject *args);

              static PyMethodDef t_StreamingAemWriter$SegmentWriter__methods_[] = {
                DECLARE_METHOD(t_StreamingAemWriter$SegmentWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingAemWriter$SegmentWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_StreamingAemWriter$SegmentWriter, finish, METH_O),
                DECLARE_METHOD(t_StreamingAemWriter$SegmentWriter, handleStep, METH_O),
                DECLARE_METHOD(t_StreamingAemWriter$SegmentWriter, init, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(StreamingAemWriter$SegmentWriter)[] = {
                { Py_tp_methods, t_StreamingAemWriter$SegmentWriter__methods_ },
                { Py_tp_init, (void *) t_StreamingAemWriter$SegmentWriter_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(StreamingAemWriter$SegmentWriter)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(StreamingAemWriter$SegmentWriter, t_StreamingAemWriter$SegmentWriter, StreamingAemWriter$SegmentWriter);

              void t_StreamingAemWriter$SegmentWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(StreamingAemWriter$SegmentWriter), &PY_TYPE_DEF(StreamingAemWriter$SegmentWriter), module, "StreamingAemWriter$SegmentWriter", 0);
              }

              void t_StreamingAemWriter$SegmentWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingAemWriter$SegmentWriter), "class_", make_descriptor(StreamingAemWriter$SegmentWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingAemWriter$SegmentWriter), "wrapfn_", make_descriptor(t_StreamingAemWriter$SegmentWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingAemWriter$SegmentWriter), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_StreamingAemWriter$SegmentWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, StreamingAemWriter$SegmentWriter::initializeClass, 1)))
                  return NULL;
                return t_StreamingAemWriter$SegmentWriter::wrap_Object(StreamingAemWriter$SegmentWriter(((t_StreamingAemWriter$SegmentWriter *) arg)->object.this$));
              }
              static PyObject *t_StreamingAemWriter$SegmentWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, StreamingAemWriter$SegmentWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_StreamingAemWriter$SegmentWriter_init_(t_StreamingAemWriter$SegmentWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::aem::StreamingAemWriter a0((jobject) NULL);
                StreamingAemWriter$SegmentWriter object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::files::ccsds::ndm::adm::aem::StreamingAemWriter::initializeClass, &a0))
                {
                  INT_CALL(object = StreamingAemWriter$SegmentWriter(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_StreamingAemWriter$SegmentWriter_finish(t_StreamingAemWriter$SegmentWriter *self, PyObject *arg)
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

              static PyObject *t_StreamingAemWriter$SegmentWriter_handleStep(t_StreamingAemWriter$SegmentWriter *self, PyObject *arg)
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.handleStep(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
                return NULL;
              }

              static PyObject *t_StreamingAemWriter$SegmentWriter_init(t_StreamingAemWriter$SegmentWriter *self, PyObject *args)
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                jdouble a2;

                if (!parseArgs(args, "kkD", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.init(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "init", args);
                return NULL;
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
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm01.h"
#include "java/util/List.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm01Data.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm01Header.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm01::class$ = NULL;
              jmethodID *SsrIgm01::mids$ = NULL;
              bool SsrIgm01::live$ = false;

              jclass SsrIgm01::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm01");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_59c7c31d4371a83b] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/metric/messages/ssr/igm/SsrIgm01Header;Ljava/util/List;)V");
                  mids$[mid_getSsrIgm01Data_6f5a75ccd8c04465] = env->getMethodID(cls, "getSsrIgm01Data", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm01::SsrIgm01(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm01Header & a2, const ::java::util::List & a3) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage(env->newObject(initializeClass, &mids$, mid_init$_59c7c31d4371a83b, a0, a1.this$, a2.this$, a3.this$)) {}

              ::java::util::Map SsrIgm01::getSsrIgm01Data() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSsrIgm01Data_6f5a75ccd8c04465]));
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
              static PyObject *t_SsrIgm01_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm01_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm01_of_(t_SsrIgm01 *self, PyObject *args);
              static int t_SsrIgm01_init_(t_SsrIgm01 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm01_getSsrIgm01Data(t_SsrIgm01 *self);
              static PyObject *t_SsrIgm01_get__ssrIgm01Data(t_SsrIgm01 *self, void *data);
              static PyObject *t_SsrIgm01_get__parameters_(t_SsrIgm01 *self, void *data);
              static PyGetSetDef t_SsrIgm01__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIgm01, ssrIgm01Data),
                DECLARE_GET_FIELD(t_SsrIgm01, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm01__methods_[] = {
                DECLARE_METHOD(t_SsrIgm01, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm01, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm01, of_, METH_VARARGS),
                DECLARE_METHOD(t_SsrIgm01, getSsrIgm01Data, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm01)[] = {
                { Py_tp_methods, t_SsrIgm01__methods_ },
                { Py_tp_init, (void *) t_SsrIgm01_init_ },
                { Py_tp_getset, t_SsrIgm01__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm01)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage),
                NULL
              };

              DEFINE_TYPE(SsrIgm01, t_SsrIgm01, SsrIgm01);
              PyObject *t_SsrIgm01::wrap_Object(const SsrIgm01& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm01::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm01 *self = (t_SsrIgm01 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_SsrIgm01::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm01::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm01 *self = (t_SsrIgm01 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_SsrIgm01::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm01), &PY_TYPE_DEF(SsrIgm01), module, "SsrIgm01", 0);
              }

              void t_SsrIgm01::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm01), "class_", make_descriptor(SsrIgm01::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm01), "wrapfn_", make_descriptor(t_SsrIgm01::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm01), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm01_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm01::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm01::wrap_Object(SsrIgm01(((t_SsrIgm01 *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm01_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm01::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_SsrIgm01_of_(t_SsrIgm01 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_SsrIgm01_init_(t_SsrIgm01 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm01Header a2((jobject) NULL);
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                SsrIgm01 object((jobject) NULL);

                if (!parseArgs(args, "IKkK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm01Header::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = SsrIgm01(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm01Header);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm01Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_SsrIgm01_getSsrIgm01Data(t_SsrIgm01 *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSsrIgm01Data());
                return ::java::util::t_Map::wrap_Object(result);
              }
              static PyObject *t_SsrIgm01_get__parameters_(t_SsrIgm01 *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_SsrIgm01_get__ssrIgm01Data(t_SsrIgm01 *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSsrIgm01Data());
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
#include "org/orekit/files/ccsds/definitions/OdMethodFacade.h"
#include "org/orekit/files/ccsds/definitions/OdMethodFacade.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/OdMethodType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *OdMethodFacade::class$ = NULL;
          jmethodID *OdMethodFacade::mids$ = NULL;
          bool OdMethodFacade::live$ = false;

          jclass OdMethodFacade::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/OdMethodFacade");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a9066cd006332f67] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/files/ccsds/definitions/OdMethodType;Ljava/lang/String;)V");
              mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getTool_11b109bd155ca898] = env->getMethodID(cls, "getTool", "()Ljava/lang/String;");
              mids$[mid_getType_f917694ced0b63a6] = env->getMethodID(cls, "getType", "()Lorg/orekit/files/ccsds/definitions/OdMethodType;");
              mids$[mid_parse_6553900895312cc7] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/OdMethodFacade;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OdMethodFacade::OdMethodFacade(const ::java::lang::String & a0, const ::org::orekit::files::ccsds::definitions::OdMethodType & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a9066cd006332f67, a0.this$, a1.this$, a2.this$)) {}

          ::java::lang::String OdMethodFacade::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
          }

          ::java::lang::String OdMethodFacade::getTool() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTool_11b109bd155ca898]));
          }

          ::org::orekit::files::ccsds::definitions::OdMethodType OdMethodFacade::getType() const
          {
            return ::org::orekit::files::ccsds::definitions::OdMethodType(env->callObjectMethod(this$, mids$[mid_getType_f917694ced0b63a6]));
          }

          OdMethodFacade OdMethodFacade::parse(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return OdMethodFacade(env->callStaticObjectMethod(cls, mids$[mid_parse_6553900895312cc7], a0.this$));
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
        namespace definitions {
          static PyObject *t_OdMethodFacade_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OdMethodFacade_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OdMethodFacade_init_(t_OdMethodFacade *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OdMethodFacade_getName(t_OdMethodFacade *self);
          static PyObject *t_OdMethodFacade_getTool(t_OdMethodFacade *self);
          static PyObject *t_OdMethodFacade_getType(t_OdMethodFacade *self);
          static PyObject *t_OdMethodFacade_parse(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OdMethodFacade_get__name(t_OdMethodFacade *self, void *data);
          static PyObject *t_OdMethodFacade_get__tool(t_OdMethodFacade *self, void *data);
          static PyObject *t_OdMethodFacade_get__type(t_OdMethodFacade *self, void *data);
          static PyGetSetDef t_OdMethodFacade__fields_[] = {
            DECLARE_GET_FIELD(t_OdMethodFacade, name),
            DECLARE_GET_FIELD(t_OdMethodFacade, tool),
            DECLARE_GET_FIELD(t_OdMethodFacade, type),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OdMethodFacade__methods_[] = {
            DECLARE_METHOD(t_OdMethodFacade, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OdMethodFacade, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OdMethodFacade, getName, METH_NOARGS),
            DECLARE_METHOD(t_OdMethodFacade, getTool, METH_NOARGS),
            DECLARE_METHOD(t_OdMethodFacade, getType, METH_NOARGS),
            DECLARE_METHOD(t_OdMethodFacade, parse, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OdMethodFacade)[] = {
            { Py_tp_methods, t_OdMethodFacade__methods_ },
            { Py_tp_init, (void *) t_OdMethodFacade_init_ },
            { Py_tp_getset, t_OdMethodFacade__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OdMethodFacade)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OdMethodFacade, t_OdMethodFacade, OdMethodFacade);

          void t_OdMethodFacade::install(PyObject *module)
          {
            installType(&PY_TYPE(OdMethodFacade), &PY_TYPE_DEF(OdMethodFacade), module, "OdMethodFacade", 0);
          }

          void t_OdMethodFacade::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OdMethodFacade), "class_", make_descriptor(OdMethodFacade::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OdMethodFacade), "wrapfn_", make_descriptor(t_OdMethodFacade::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OdMethodFacade), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OdMethodFacade_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OdMethodFacade::initializeClass, 1)))
              return NULL;
            return t_OdMethodFacade::wrap_Object(OdMethodFacade(((t_OdMethodFacade *) arg)->object.this$));
          }
          static PyObject *t_OdMethodFacade_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OdMethodFacade::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OdMethodFacade_init_(t_OdMethodFacade *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::files::ccsds::definitions::OdMethodType a1((jobject) NULL);
            PyTypeObject **p1;
            ::java::lang::String a2((jobject) NULL);
            OdMethodFacade object((jobject) NULL);

            if (!parseArgs(args, "sKs", ::org::orekit::files::ccsds::definitions::OdMethodType::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::definitions::t_OdMethodType::parameters_, &a2))
            {
              INT_CALL(object = OdMethodFacade(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OdMethodFacade_getName(t_OdMethodFacade *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_OdMethodFacade_getTool(t_OdMethodFacade *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getTool());
            return j2p(result);
          }

          static PyObject *t_OdMethodFacade_getType(t_OdMethodFacade *self)
          {
            ::org::orekit::files::ccsds::definitions::OdMethodType result((jobject) NULL);
            OBJ_CALL(result = self->object.getType());
            return ::org::orekit::files::ccsds::definitions::t_OdMethodType::wrap_Object(result);
          }

          static PyObject *t_OdMethodFacade_parse(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            OdMethodFacade result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::OdMethodFacade::parse(a0));
              return t_OdMethodFacade::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parse", arg);
            return NULL;
          }

          static PyObject *t_OdMethodFacade_get__name(t_OdMethodFacade *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }

          static PyObject *t_OdMethodFacade_get__tool(t_OdMethodFacade *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getTool());
            return j2p(value);
          }

          static PyObject *t_OdMethodFacade_get__type(t_OdMethodFacade *self, void *data)
          {
            ::org::orekit::files::ccsds::definitions::OdMethodType value((jobject) NULL);
            OBJ_CALL(value = self->object.getType());
            return ::org::orekit::files::ccsds::definitions::t_OdMethodType::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1045Data.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/propagation/analytical/gnss/data/GalileoNavigationMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *Rtcm1045Data::class$ = NULL;
              jmethodID *Rtcm1045Data::mids$ = NULL;
              bool Rtcm1045Data::live$ = false;

              jclass Rtcm1045Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1045Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getGalileoDataValidityStatus_570ce0828f81a2c1] = env->getMethodID(cls, "getGalileoDataValidityStatus", "()I");
                  mids$[mid_getGalileoNavigationMessage_29b416fca544b812] = env->getMethodID(cls, "getGalileoNavigationMessage", "()Lorg/orekit/propagation/analytical/gnss/data/GalileoNavigationMessage;");
                  mids$[mid_getGalileoNavigationMessage_d1a41f9c303b600e] = env->getMethodID(cls, "getGalileoNavigationMessage", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/propagation/analytical/gnss/data/GalileoNavigationMessage;");
                  mids$[mid_getGalileoToc_dff5885c2c873297] = env->getMethodID(cls, "getGalileoToc", "()D");
                  mids$[mid_setGalileoDataValidityStatus_99803b0791f320ff] = env->getMethodID(cls, "setGalileoDataValidityStatus", "(I)V");
                  mids$[mid_setGalileoNavigationMessage_4a80ac1fbe917041] = env->getMethodID(cls, "setGalileoNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/GalileoNavigationMessage;)V");
                  mids$[mid_setGalileoToc_17db3a65980d3441] = env->getMethodID(cls, "setGalileoToc", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1045Data::Rtcm1045Data() : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              jint Rtcm1045Data::getGalileoDataValidityStatus() const
              {
                return env->callIntMethod(this$, mids$[mid_getGalileoDataValidityStatus_570ce0828f81a2c1]);
              }

              ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage Rtcm1045Data::getGalileoNavigationMessage() const
              {
                return ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage(env->callObjectMethod(this$, mids$[mid_getGalileoNavigationMessage_29b416fca544b812]));
              }

              ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage Rtcm1045Data::getGalileoNavigationMessage(const ::org::orekit::time::TimeScales & a0) const
              {
                return ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage(env->callObjectMethod(this$, mids$[mid_getGalileoNavigationMessage_d1a41f9c303b600e], a0.this$));
              }

              jdouble Rtcm1045Data::getGalileoToc() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getGalileoToc_dff5885c2c873297]);
              }

              void Rtcm1045Data::setGalileoDataValidityStatus(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGalileoDataValidityStatus_99803b0791f320ff], a0);
              }

              void Rtcm1045Data::setGalileoNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGalileoNavigationMessage_4a80ac1fbe917041], a0.this$);
              }

              void Rtcm1045Data::setGalileoToc(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGalileoToc_17db3a65980d3441], a0);
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
              static PyObject *t_Rtcm1045Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1045Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Rtcm1045Data_init_(t_Rtcm1045Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1045Data_getGalileoDataValidityStatus(t_Rtcm1045Data *self);
              static PyObject *t_Rtcm1045Data_getGalileoNavigationMessage(t_Rtcm1045Data *self, PyObject *args);
              static PyObject *t_Rtcm1045Data_getGalileoToc(t_Rtcm1045Data *self);
              static PyObject *t_Rtcm1045Data_setGalileoDataValidityStatus(t_Rtcm1045Data *self, PyObject *arg);
              static PyObject *t_Rtcm1045Data_setGalileoNavigationMessage(t_Rtcm1045Data *self, PyObject *arg);
              static PyObject *t_Rtcm1045Data_setGalileoToc(t_Rtcm1045Data *self, PyObject *arg);
              static PyObject *t_Rtcm1045Data_get__galileoDataValidityStatus(t_Rtcm1045Data *self, void *data);
              static int t_Rtcm1045Data_set__galileoDataValidityStatus(t_Rtcm1045Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1045Data_get__galileoNavigationMessage(t_Rtcm1045Data *self, void *data);
              static int t_Rtcm1045Data_set__galileoNavigationMessage(t_Rtcm1045Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1045Data_get__galileoToc(t_Rtcm1045Data *self, void *data);
              static int t_Rtcm1045Data_set__galileoToc(t_Rtcm1045Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_Rtcm1045Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_Rtcm1045Data, galileoDataValidityStatus),
                DECLARE_GETSET_FIELD(t_Rtcm1045Data, galileoNavigationMessage),
                DECLARE_GETSET_FIELD(t_Rtcm1045Data, galileoToc),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1045Data__methods_[] = {
                DECLARE_METHOD(t_Rtcm1045Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1045Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1045Data, getGalileoDataValidityStatus, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1045Data, getGalileoNavigationMessage, METH_VARARGS),
                DECLARE_METHOD(t_Rtcm1045Data, getGalileoToc, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1045Data, setGalileoDataValidityStatus, METH_O),
                DECLARE_METHOD(t_Rtcm1045Data, setGalileoNavigationMessage, METH_O),
                DECLARE_METHOD(t_Rtcm1045Data, setGalileoToc, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1045Data)[] = {
                { Py_tp_methods, t_Rtcm1045Data__methods_ },
                { Py_tp_init, (void *) t_Rtcm1045Data_init_ },
                { Py_tp_getset, t_Rtcm1045Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1045Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData),
                NULL
              };

              DEFINE_TYPE(Rtcm1045Data, t_Rtcm1045Data, Rtcm1045Data);

              void t_Rtcm1045Data::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1045Data), &PY_TYPE_DEF(Rtcm1045Data), module, "Rtcm1045Data", 0);
              }

              void t_Rtcm1045Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1045Data), "class_", make_descriptor(Rtcm1045Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1045Data), "wrapfn_", make_descriptor(t_Rtcm1045Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1045Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1045Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1045Data::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1045Data::wrap_Object(Rtcm1045Data(((t_Rtcm1045Data *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1045Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1045Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Rtcm1045Data_init_(t_Rtcm1045Data *self, PyObject *args, PyObject *kwds)
              {
                Rtcm1045Data object((jobject) NULL);

                INT_CALL(object = Rtcm1045Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_Rtcm1045Data_getGalileoDataValidityStatus(t_Rtcm1045Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getGalileoDataValidityStatus());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1045Data_getGalileoNavigationMessage(t_Rtcm1045Data *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage result((jobject) NULL);
                    OBJ_CALL(result = self->object.getGalileoNavigationMessage());
                    return ::org::orekit::propagation::analytical::gnss::data::t_GalileoNavigationMessage::wrap_Object(result);
                  }
                  break;
                 case 1:
                  {
                    ::org::orekit::time::TimeScales a0((jobject) NULL);
                    ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage result((jobject) NULL);

                    if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
                    {
                      OBJ_CALL(result = self->object.getGalileoNavigationMessage(a0));
                      return ::org::orekit::propagation::analytical::gnss::data::t_GalileoNavigationMessage::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "getGalileoNavigationMessage", args);
                return NULL;
              }

              static PyObject *t_Rtcm1045Data_getGalileoToc(t_Rtcm1045Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getGalileoToc());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Rtcm1045Data_setGalileoDataValidityStatus(t_Rtcm1045Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setGalileoDataValidityStatus(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGalileoDataValidityStatus", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1045Data_setGalileoNavigationMessage(t_Rtcm1045Data *self, PyObject *arg)
              {
                ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setGalileoNavigationMessage(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGalileoNavigationMessage", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1045Data_setGalileoToc(t_Rtcm1045Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setGalileoToc(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGalileoToc", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1045Data_get__galileoDataValidityStatus(t_Rtcm1045Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getGalileoDataValidityStatus());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1045Data_set__galileoDataValidityStatus(t_Rtcm1045Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setGalileoDataValidityStatus(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "galileoDataValidityStatus", arg);
                return -1;
              }

              static PyObject *t_Rtcm1045Data_get__galileoNavigationMessage(t_Rtcm1045Data *self, void *data)
              {
                ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage value((jobject) NULL);
                OBJ_CALL(value = self->object.getGalileoNavigationMessage());
                return ::org::orekit::propagation::analytical::gnss::data::t_GalileoNavigationMessage::wrap_Object(value);
              }
              static int t_Rtcm1045Data_set__galileoNavigationMessage(t_Rtcm1045Data *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage::initializeClass, &value))
                  {
                    INT_CALL(self->object.setGalileoNavigationMessage(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "galileoNavigationMessage", arg);
                return -1;
              }

              static PyObject *t_Rtcm1045Data_get__galileoToc(t_Rtcm1045Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getGalileoToc());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Rtcm1045Data_set__galileoToc(t_Rtcm1045Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setGalileoToc(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "galileoToc", arg);
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
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/DoubleArrayDictionary.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/frames/StaticTransform.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/AbsolutePVCoordinates.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/frames/Transform.h"
#include "java/lang/Class.h"
#include "org/orekit/errors/OrekitIllegalStateException.h"
#include "java/lang/String.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/TimeShiftable.h"
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
          mids$[mid_init$_a834341b86d7c555] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/AbsolutePVCoordinates;)V");
          mids$[mid_init$_6219f6b430651d68] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;)V");
          mids$[mid_init$_2ec9afc2e47b338d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/AbsolutePVCoordinates;Lorg/orekit/attitudes/Attitude;)V");
          mids$[mid_init$_a7d560625cc2403d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/AbsolutePVCoordinates;Lorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_init$_91f7468bd00a89a5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/AbsolutePVCoordinates;D)V");
          mids$[mid_init$_41811c3e433fc06a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/Attitude;)V");
          mids$[mid_init$_0dd51dbd5e2936c0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_init$_6a752d664cb18d86] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;D)V");
          mids$[mid_init$_5348132fee043717] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/AbsolutePVCoordinates;Lorg/orekit/attitudes/Attitude;Lorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_init$_4d11e626785a9720] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/AbsolutePVCoordinates;DLorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_init$_381d44db988285bc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/AbsolutePVCoordinates;Lorg/orekit/attitudes/Attitude;D)V");
          mids$[mid_init$_15d74cc964e458b3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/Attitude;Lorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_init$_836d3066cd9c6f05] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/Attitude;D)V");
          mids$[mid_init$_0cc7979070d5c007] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;DLorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_init$_92918c7cfdd4eaaf] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/AbsolutePVCoordinates;Lorg/orekit/attitudes/Attitude;DLorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_init$_df1b78511c9c133f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/Attitude;DLorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_init$_4c91821601404e7a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/AbsolutePVCoordinates;Lorg/orekit/attitudes/Attitude;DLorg/orekit/utils/DoubleArrayDictionary;Lorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_init$_68f3c275a900e996] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/attitudes/Attitude;DLorg/orekit/utils/DoubleArrayDictionary;Lorg/orekit/utils/DoubleArrayDictionary;)V");
          mids$[mid_addAdditionalState_7a8e66b8670b4752] = env->getMethodID(cls, "addAdditionalState", "(Ljava/lang/String;[D)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_addAdditionalStateDerivative_7a8e66b8670b4752] = env->getMethodID(cls, "addAdditionalStateDerivative", "(Ljava/lang/String;[D)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_ensureCompatibleAdditionalStates_0ee5c56004643a2e] = env->getMethodID(cls, "ensureCompatibleAdditionalStates", "(Lorg/orekit/propagation/SpacecraftState;)V");
          mids$[mid_getA_dff5885c2c873297] = env->getMethodID(cls, "getA", "()D");
          mids$[mid_getAbsPVA_3484f681e5893171] = env->getMethodID(cls, "getAbsPVA", "()Lorg/orekit/utils/AbsolutePVCoordinates;");
          mids$[mid_getAdditionalState_f87e5f45128c2827] = env->getMethodID(cls, "getAdditionalState", "(Ljava/lang/String;)[D");
          mids$[mid_getAdditionalStateDerivative_f87e5f45128c2827] = env->getMethodID(cls, "getAdditionalStateDerivative", "(Ljava/lang/String;)[D");
          mids$[mid_getAdditionalStatesDerivatives_17e5408138fe3169] = env->getMethodID(cls, "getAdditionalStatesDerivatives", "()Lorg/orekit/utils/DoubleArrayDictionary;");
          mids$[mid_getAdditionalStatesValues_17e5408138fe3169] = env->getMethodID(cls, "getAdditionalStatesValues", "()Lorg/orekit/utils/DoubleArrayDictionary;");
          mids$[mid_getAttitude_bd12f6f74bd44dca] = env->getMethodID(cls, "getAttitude", "()Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getE_dff5885c2c873297] = env->getMethodID(cls, "getE", "()D");
          mids$[mid_getEquinoctialEx_dff5885c2c873297] = env->getMethodID(cls, "getEquinoctialEx", "()D");
          mids$[mid_getEquinoctialEy_dff5885c2c873297] = env->getMethodID(cls, "getEquinoctialEy", "()D");
          mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getHx_dff5885c2c873297] = env->getMethodID(cls, "getHx", "()D");
          mids$[mid_getHy_dff5885c2c873297] = env->getMethodID(cls, "getHy", "()D");
          mids$[mid_getI_dff5885c2c873297] = env->getMethodID(cls, "getI", "()D");
          mids$[mid_getKeplerianMeanMotion_dff5885c2c873297] = env->getMethodID(cls, "getKeplerianMeanMotion", "()D");
          mids$[mid_getKeplerianPeriod_dff5885c2c873297] = env->getMethodID(cls, "getKeplerianPeriod", "()D");
          mids$[mid_getLE_dff5885c2c873297] = env->getMethodID(cls, "getLE", "()D");
          mids$[mid_getLM_dff5885c2c873297] = env->getMethodID(cls, "getLM", "()D");
          mids$[mid_getLv_dff5885c2c873297] = env->getMethodID(cls, "getLv", "()D");
          mids$[mid_getMass_dff5885c2c873297] = env->getMethodID(cls, "getMass", "()D");
          mids$[mid_getMu_dff5885c2c873297] = env->getMethodID(cls, "getMu", "()D");
          mids$[mid_getOrbit_cde5690bfa4f9649] = env->getMethodID(cls, "getOrbit", "()Lorg/orekit/orbits/Orbit;");
          mids$[mid_getPVCoordinates_c204436deca11d94] = env->getMethodID(cls, "getPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPVCoordinates_d9ebf50b8aebcbf9] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPosition_d52645e0d4c07563] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getPosition_e91e859b879f3586] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_hasAdditionalState_7edad2c2f64f4d68] = env->getMethodID(cls, "hasAdditionalState", "(Ljava/lang/String;)Z");
          mids$[mid_hasAdditionalStateDerivative_7edad2c2f64f4d68] = env->getMethodID(cls, "hasAdditionalStateDerivative", "(Ljava/lang/String;)Z");
          mids$[mid_isOrbitDefined_b108b35ef48e27bd] = env->getMethodID(cls, "isOrbitDefined", "()Z");
          mids$[mid_shiftedBy_4c7d85f6fb7b5bef] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_toStaticTransform_892837e768e813bc] = env->getMethodID(cls, "toStaticTransform", "()Lorg/orekit/frames/StaticTransform;");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toTransform_09afc11266121652] = env->getMethodID(cls, "toTransform", "()Lorg/orekit/frames/Transform;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_MASS = env->getStaticDoubleField(cls, "DEFAULT_MASS");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SpacecraftState::SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a834341b86d7c555, a0.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::orbits::Orbit & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6219f6b430651d68, a0.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates & a0, const ::org::orekit::attitudes::Attitude & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2ec9afc2e47b338d, a0.this$, a1.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates & a0, const ::org::orekit::utils::DoubleArrayDictionary & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a7d560625cc2403d, a0.this$, a1.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_91f7468bd00a89a5, a0.this$, a1)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::Attitude & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_41811c3e433fc06a, a0.this$, a1.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::utils::DoubleArrayDictionary & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0dd51dbd5e2936c0, a0.this$, a1.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::orbits::Orbit & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6a752d664cb18d86, a0.this$, a1)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates & a0, const ::org::orekit::attitudes::Attitude & a1, const ::org::orekit::utils::DoubleArrayDictionary & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5348132fee043717, a0.this$, a1.this$, a2.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates & a0, jdouble a1, const ::org::orekit::utils::DoubleArrayDictionary & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4d11e626785a9720, a0.this$, a1, a2.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates & a0, const ::org::orekit::attitudes::Attitude & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_381d44db988285bc, a0.this$, a1.this$, a2)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::Attitude & a1, const ::org::orekit::utils::DoubleArrayDictionary & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_15d74cc964e458b3, a0.this$, a1.this$, a2.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::Attitude & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_836d3066cd9c6f05, a0.this$, a1.this$, a2)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::orbits::Orbit & a0, jdouble a1, const ::org::orekit::utils::DoubleArrayDictionary & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0cc7979070d5c007, a0.this$, a1, a2.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates & a0, const ::org::orekit::attitudes::Attitude & a1, jdouble a2, const ::org::orekit::utils::DoubleArrayDictionary & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_92918c7cfdd4eaaf, a0.this$, a1.this$, a2, a3.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::Attitude & a1, jdouble a2, const ::org::orekit::utils::DoubleArrayDictionary & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_df1b78511c9c133f, a0.this$, a1.this$, a2, a3.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::utils::AbsolutePVCoordinates & a0, const ::org::orekit::attitudes::Attitude & a1, jdouble a2, const ::org::orekit::utils::DoubleArrayDictionary & a3, const ::org::orekit::utils::DoubleArrayDictionary & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4c91821601404e7a, a0.this$, a1.this$, a2, a3.this$, a4.this$)) {}

      SpacecraftState::SpacecraftState(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::attitudes::Attitude & a1, jdouble a2, const ::org::orekit::utils::DoubleArrayDictionary & a3, const ::org::orekit::utils::DoubleArrayDictionary & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_68f3c275a900e996, a0.this$, a1.this$, a2, a3.this$, a4.this$)) {}

      SpacecraftState SpacecraftState::addAdditionalState(const ::java::lang::String & a0, const JArray< jdouble > & a1) const
      {
        return SpacecraftState(env->callObjectMethod(this$, mids$[mid_addAdditionalState_7a8e66b8670b4752], a0.this$, a1.this$));
      }

      SpacecraftState SpacecraftState::addAdditionalStateDerivative(const ::java::lang::String & a0, const JArray< jdouble > & a1) const
      {
        return SpacecraftState(env->callObjectMethod(this$, mids$[mid_addAdditionalStateDerivative_7a8e66b8670b4752], a0.this$, a1.this$));
      }

      void SpacecraftState::ensureCompatibleAdditionalStates(const SpacecraftState & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_ensureCompatibleAdditionalStates_0ee5c56004643a2e], a0.this$);
      }

      jdouble SpacecraftState::getA() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getA_dff5885c2c873297]);
      }

      ::org::orekit::utils::AbsolutePVCoordinates SpacecraftState::getAbsPVA() const
      {
        return ::org::orekit::utils::AbsolutePVCoordinates(env->callObjectMethod(this$, mids$[mid_getAbsPVA_3484f681e5893171]));
      }

      JArray< jdouble > SpacecraftState::getAdditionalState(const ::java::lang::String & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_f87e5f45128c2827], a0.this$));
      }

      JArray< jdouble > SpacecraftState::getAdditionalStateDerivative(const ::java::lang::String & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalStateDerivative_f87e5f45128c2827], a0.this$));
      }

      ::org::orekit::utils::DoubleArrayDictionary SpacecraftState::getAdditionalStatesDerivatives() const
      {
        return ::org::orekit::utils::DoubleArrayDictionary(env->callObjectMethod(this$, mids$[mid_getAdditionalStatesDerivatives_17e5408138fe3169]));
      }

      ::org::orekit::utils::DoubleArrayDictionary SpacecraftState::getAdditionalStatesValues() const
      {
        return ::org::orekit::utils::DoubleArrayDictionary(env->callObjectMethod(this$, mids$[mid_getAdditionalStatesValues_17e5408138fe3169]));
      }

      ::org::orekit::attitudes::Attitude SpacecraftState::getAttitude() const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_bd12f6f74bd44dca]));
      }

      ::org::orekit::time::AbsoluteDate SpacecraftState::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
      }

      jdouble SpacecraftState::getE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getE_dff5885c2c873297]);
      }

      jdouble SpacecraftState::getEquinoctialEx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEx_dff5885c2c873297]);
      }

      jdouble SpacecraftState::getEquinoctialEy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEy_dff5885c2c873297]);
      }

      ::org::orekit::frames::Frame SpacecraftState::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
      }

      jdouble SpacecraftState::getHx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHx_dff5885c2c873297]);
      }

      jdouble SpacecraftState::getHy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHy_dff5885c2c873297]);
      }

      jdouble SpacecraftState::getI() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getI_dff5885c2c873297]);
      }

      jdouble SpacecraftState::getKeplerianMeanMotion() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getKeplerianMeanMotion_dff5885c2c873297]);
      }

      jdouble SpacecraftState::getKeplerianPeriod() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getKeplerianPeriod_dff5885c2c873297]);
      }

      jdouble SpacecraftState::getLE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLE_dff5885c2c873297]);
      }

      jdouble SpacecraftState::getLM() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLM_dff5885c2c873297]);
      }

      jdouble SpacecraftState::getLv() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLv_dff5885c2c873297]);
      }

      jdouble SpacecraftState::getMass() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMass_dff5885c2c873297]);
      }

      jdouble SpacecraftState::getMu() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMu_dff5885c2c873297]);
      }

      ::org::orekit::orbits::Orbit SpacecraftState::getOrbit() const
      {
        return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_getOrbit_cde5690bfa4f9649]));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates SpacecraftState::getPVCoordinates() const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_c204436deca11d94]));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates SpacecraftState::getPVCoordinates(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_d9ebf50b8aebcbf9], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D SpacecraftState::getPosition() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_d52645e0d4c07563]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D SpacecraftState::getPosition(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_e91e859b879f3586], a0.this$));
      }

      jboolean SpacecraftState::hasAdditionalState(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasAdditionalState_7edad2c2f64f4d68], a0.this$);
      }

      jboolean SpacecraftState::hasAdditionalStateDerivative(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasAdditionalStateDerivative_7edad2c2f64f4d68], a0.this$);
      }

      jboolean SpacecraftState::isOrbitDefined() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isOrbitDefined_b108b35ef48e27bd]);
      }

      SpacecraftState SpacecraftState::shiftedBy(jdouble a0) const
      {
        return SpacecraftState(env->callObjectMethod(this$, mids$[mid_shiftedBy_4c7d85f6fb7b5bef], a0));
      }

      ::org::orekit::frames::StaticTransform SpacecraftState::toStaticTransform() const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_toStaticTransform_892837e768e813bc]));
      }

      ::java::lang::String SpacecraftState::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
      }

      ::org::orekit::frames::Transform SpacecraftState::toTransform() const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_toTransform_09afc11266121652]));
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
#include "org/orekit/files/ccsds/utils/parsing/AbstractMessageParser.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/util/Map.h"
#include "org/orekit/files/ccsds/utils/parsing/ProcessingState.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/MessageParser.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace parsing {

            ::java::lang::Class *AbstractMessageParser::class$ = NULL;
            jmethodID *AbstractMessageParser::mids$ = NULL;
            bool AbstractMessageParser::live$ = false;

            jclass AbstractMessageParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/parsing/AbstractMessageParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_anticipateNext_30e3b8a372059ddf] = env->getMethodID(cls, "anticipateNext", "(Lorg/orekit/files/ccsds/utils/parsing/ProcessingState;)V");
                mids$[mid_getCurrent_1dbed63d6789950e] = env->getMethodID(cls, "getCurrent", "()Lorg/orekit/files/ccsds/utils/parsing/ProcessingState;");
                mids$[mid_getFileFormat_66298c6188053be6] = env->getMethodID(cls, "getFileFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;");
                mids$[mid_getFormatVersionKey_11b109bd155ca898] = env->getMethodID(cls, "getFormatVersionKey", "()Ljava/lang/String;");
                mids$[mid_getSpecialXmlElementsBuilders_6f5a75ccd8c04465] = env->getMethodID(cls, "getSpecialXmlElementsBuilders", "()Ljava/util/Map;");
                mids$[mid_parseMessage_455adfd4ae4ab630] = env->getMethodID(cls, "parseMessage", "(Lorg/orekit/data/DataSource;)Ljava/lang/Object;");
                mids$[mid_process_60c6e06c33a7585b] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)V");
                mids$[mid_setEndTagSeen_bd04c9335fb9e4cf] = env->getMethodID(cls, "setEndTagSeen", "(Z)V");
                mids$[mid_setFallback_30e3b8a372059ddf] = env->getMethodID(cls, "setFallback", "(Lorg/orekit/files/ccsds/utils/parsing/ProcessingState;)V");
                mids$[mid_wasEndTagSeen_b108b35ef48e27bd] = env->getMethodID(cls, "wasEndTagSeen", "()Z");
                mids$[mid_reset_b2bb54cd2f7ebe7d] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;Lorg/orekit/files/ccsds/utils/parsing/ProcessingState;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void AbstractMessageParser::anticipateNext(const ::org::orekit::files::ccsds::utils::parsing::ProcessingState & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_anticipateNext_30e3b8a372059ddf], a0.this$);
            }

            ::org::orekit::files::ccsds::utils::parsing::ProcessingState AbstractMessageParser::getCurrent() const
            {
              return ::org::orekit::files::ccsds::utils::parsing::ProcessingState(env->callObjectMethod(this$, mids$[mid_getCurrent_1dbed63d6789950e]));
            }

            ::org::orekit::files::ccsds::utils::FileFormat AbstractMessageParser::getFileFormat() const
            {
              return ::org::orekit::files::ccsds::utils::FileFormat(env->callObjectMethod(this$, mids$[mid_getFileFormat_66298c6188053be6]));
            }

            ::java::lang::String AbstractMessageParser::getFormatVersionKey() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFormatVersionKey_11b109bd155ca898]));
            }

            ::java::util::Map AbstractMessageParser::getSpecialXmlElementsBuilders() const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSpecialXmlElementsBuilders_6f5a75ccd8c04465]));
            }

            ::java::lang::Object AbstractMessageParser::parseMessage(const ::org::orekit::data::DataSource & a0) const
            {
              return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_parseMessage_455adfd4ae4ab630], a0.this$));
            }

            void AbstractMessageParser::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_process_60c6e06c33a7585b], a0.this$);
            }

            void AbstractMessageParser::setEndTagSeen(jboolean a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setEndTagSeen_bd04c9335fb9e4cf], a0);
            }

            void AbstractMessageParser::setFallback(const ::org::orekit::files::ccsds::utils::parsing::ProcessingState & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setFallback_30e3b8a372059ddf], a0.this$);
            }

            jboolean AbstractMessageParser::wasEndTagSeen() const
            {
              return env->callBooleanMethod(this$, mids$[mid_wasEndTagSeen_b108b35ef48e27bd]);
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
          namespace parsing {
            static PyObject *t_AbstractMessageParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractMessageParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractMessageParser_of_(t_AbstractMessageParser *self, PyObject *args);
            static PyObject *t_AbstractMessageParser_anticipateNext(t_AbstractMessageParser *self, PyObject *arg);
            static PyObject *t_AbstractMessageParser_getCurrent(t_AbstractMessageParser *self);
            static PyObject *t_AbstractMessageParser_getFileFormat(t_AbstractMessageParser *self);
            static PyObject *t_AbstractMessageParser_getFormatVersionKey(t_AbstractMessageParser *self);
            static PyObject *t_AbstractMessageParser_getSpecialXmlElementsBuilders(t_AbstractMessageParser *self);
            static PyObject *t_AbstractMessageParser_parseMessage(t_AbstractMessageParser *self, PyObject *arg);
            static PyObject *t_AbstractMessageParser_process(t_AbstractMessageParser *self, PyObject *arg);
            static PyObject *t_AbstractMessageParser_setEndTagSeen(t_AbstractMessageParser *self, PyObject *arg);
            static PyObject *t_AbstractMessageParser_setFallback(t_AbstractMessageParser *self, PyObject *arg);
            static PyObject *t_AbstractMessageParser_wasEndTagSeen(t_AbstractMessageParser *self);
            static PyObject *t_AbstractMessageParser_get__current(t_AbstractMessageParser *self, void *data);
            static int t_AbstractMessageParser_set__endTagSeen(t_AbstractMessageParser *self, PyObject *arg, void *data);
            static int t_AbstractMessageParser_set__fallback(t_AbstractMessageParser *self, PyObject *arg, void *data);
            static PyObject *t_AbstractMessageParser_get__fileFormat(t_AbstractMessageParser *self, void *data);
            static PyObject *t_AbstractMessageParser_get__formatVersionKey(t_AbstractMessageParser *self, void *data);
            static PyObject *t_AbstractMessageParser_get__specialXmlElementsBuilders(t_AbstractMessageParser *self, void *data);
            static PyObject *t_AbstractMessageParser_get__parameters_(t_AbstractMessageParser *self, void *data);
            static PyGetSetDef t_AbstractMessageParser__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractMessageParser, current),
              DECLARE_SET_FIELD(t_AbstractMessageParser, endTagSeen),
              DECLARE_SET_FIELD(t_AbstractMessageParser, fallback),
              DECLARE_GET_FIELD(t_AbstractMessageParser, fileFormat),
              DECLARE_GET_FIELD(t_AbstractMessageParser, formatVersionKey),
              DECLARE_GET_FIELD(t_AbstractMessageParser, specialXmlElementsBuilders),
              DECLARE_GET_FIELD(t_AbstractMessageParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractMessageParser__methods_[] = {
              DECLARE_METHOD(t_AbstractMessageParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractMessageParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractMessageParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_AbstractMessageParser, anticipateNext, METH_O),
              DECLARE_METHOD(t_AbstractMessageParser, getCurrent, METH_NOARGS),
              DECLARE_METHOD(t_AbstractMessageParser, getFileFormat, METH_NOARGS),
              DECLARE_METHOD(t_AbstractMessageParser, getFormatVersionKey, METH_NOARGS),
              DECLARE_METHOD(t_AbstractMessageParser, getSpecialXmlElementsBuilders, METH_NOARGS),
              DECLARE_METHOD(t_AbstractMessageParser, parseMessage, METH_O),
              DECLARE_METHOD(t_AbstractMessageParser, process, METH_O),
              DECLARE_METHOD(t_AbstractMessageParser, setEndTagSeen, METH_O),
              DECLARE_METHOD(t_AbstractMessageParser, setFallback, METH_O),
              DECLARE_METHOD(t_AbstractMessageParser, wasEndTagSeen, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractMessageParser)[] = {
              { Py_tp_methods, t_AbstractMessageParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AbstractMessageParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractMessageParser)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractMessageParser, t_AbstractMessageParser, AbstractMessageParser);
            PyObject *t_AbstractMessageParser::wrap_Object(const AbstractMessageParser& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AbstractMessageParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractMessageParser *self = (t_AbstractMessageParser *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AbstractMessageParser::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AbstractMessageParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractMessageParser *self = (t_AbstractMessageParser *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AbstractMessageParser::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractMessageParser), &PY_TYPE_DEF(AbstractMessageParser), module, "AbstractMessageParser", 0);
            }

            void t_AbstractMessageParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMessageParser), "class_", make_descriptor(AbstractMessageParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMessageParser), "wrapfn_", make_descriptor(t_AbstractMessageParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMessageParser), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractMessageParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractMessageParser::initializeClass, 1)))
                return NULL;
              return t_AbstractMessageParser::wrap_Object(AbstractMessageParser(((t_AbstractMessageParser *) arg)->object.this$));
            }
            static PyObject *t_AbstractMessageParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractMessageParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractMessageParser_of_(t_AbstractMessageParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AbstractMessageParser_anticipateNext(t_AbstractMessageParser *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::parsing::ProcessingState a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::parsing::ProcessingState::initializeClass, &a0))
              {
                OBJ_CALL(self->object.anticipateNext(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "anticipateNext", arg);
              return NULL;
            }

            static PyObject *t_AbstractMessageParser_getCurrent(t_AbstractMessageParser *self)
            {
              ::org::orekit::files::ccsds::utils::parsing::ProcessingState result((jobject) NULL);
              OBJ_CALL(result = self->object.getCurrent());
              return ::org::orekit::files::ccsds::utils::parsing::t_ProcessingState::wrap_Object(result);
            }

            static PyObject *t_AbstractMessageParser_getFileFormat(t_AbstractMessageParser *self)
            {
              ::org::orekit::files::ccsds::utils::FileFormat result((jobject) NULL);
              OBJ_CALL(result = self->object.getFileFormat());
              return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(result);
            }

            static PyObject *t_AbstractMessageParser_getFormatVersionKey(t_AbstractMessageParser *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getFormatVersionKey());
              return j2p(result);
            }

            static PyObject *t_AbstractMessageParser_getSpecialXmlElementsBuilders(t_AbstractMessageParser *self)
            {
              ::java::util::Map result((jobject) NULL);
              OBJ_CALL(result = self->object.getSpecialXmlElementsBuilders());
              return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(XmlTokenBuilder));
            }

            static PyObject *t_AbstractMessageParser_parseMessage(t_AbstractMessageParser *self, PyObject *arg)
            {
              ::org::orekit::data::DataSource a0((jobject) NULL);
              ::java::lang::Object result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.parseMessage(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "parseMessage", arg);
              return NULL;
            }

            static PyObject *t_AbstractMessageParser_process(t_AbstractMessageParser *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, &a0))
              {
                OBJ_CALL(self->object.process(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "process", arg);
              return NULL;
            }

            static PyObject *t_AbstractMessageParser_setEndTagSeen(t_AbstractMessageParser *self, PyObject *arg)
            {
              jboolean a0;

              if (!parseArg(arg, "Z", &a0))
              {
                OBJ_CALL(self->object.setEndTagSeen(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setEndTagSeen", arg);
              return NULL;
            }

            static PyObject *t_AbstractMessageParser_setFallback(t_AbstractMessageParser *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::parsing::ProcessingState a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::parsing::ProcessingState::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setFallback(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setFallback", arg);
              return NULL;
            }

            static PyObject *t_AbstractMessageParser_wasEndTagSeen(t_AbstractMessageParser *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.wasEndTagSeen());
              Py_RETURN_BOOL(result);
            }
            static PyObject *t_AbstractMessageParser_get__parameters_(t_AbstractMessageParser *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_AbstractMessageParser_get__current(t_AbstractMessageParser *self, void *data)
            {
              ::org::orekit::files::ccsds::utils::parsing::ProcessingState value((jobject) NULL);
              OBJ_CALL(value = self->object.getCurrent());
              return ::org::orekit::files::ccsds::utils::parsing::t_ProcessingState::wrap_Object(value);
            }

            static int t_AbstractMessageParser_set__endTagSeen(t_AbstractMessageParser *self, PyObject *arg, void *data)
            {
              {
                jboolean value;
                if (!parseArg(arg, "Z", &value))
                {
                  INT_CALL(self->object.setEndTagSeen(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "endTagSeen", arg);
              return -1;
            }

            static int t_AbstractMessageParser_set__fallback(t_AbstractMessageParser *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::utils::parsing::ProcessingState value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::parsing::ProcessingState::initializeClass, &value))
                {
                  INT_CALL(self->object.setFallback(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "fallback", arg);
              return -1;
            }

            static PyObject *t_AbstractMessageParser_get__fileFormat(t_AbstractMessageParser *self, void *data)
            {
              ::org::orekit::files::ccsds::utils::FileFormat value((jobject) NULL);
              OBJ_CALL(value = self->object.getFileFormat());
              return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(value);
            }

            static PyObject *t_AbstractMessageParser_get__formatVersionKey(t_AbstractMessageParser *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getFormatVersionKey());
              return j2p(value);
            }

            static PyObject *t_AbstractMessageParser_get__specialXmlElementsBuilders(t_AbstractMessageParser *self, void *data)
            {
              ::java::util::Map value((jobject) NULL);
              OBJ_CALL(value = self->object.getSpecialXmlElementsBuilders());
              return ::java::util::t_Map::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmTleKey.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmTleKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmTle.h"
#include "java/lang/Class.h"
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
                  mids$[mid_process_e39ab38fcea2570f] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTle;)Z");
                  mids$[mid_valueOf_a91badf73e7c2c46] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;");
                  mids$[mid_values_c93389304b0e14f1] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/omm/OmmTleKey;");

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
                return env->callBooleanMethod(this$, mids$[mid_process_e39ab38fcea2570f], a0.this$, a1.this$, a2.this$);
              }

              OmmTleKey OmmTleKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OmmTleKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_a91badf73e7c2c46], a0.this$));
              }

              JArray< OmmTleKey > OmmTleKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OmmTleKey >(env->callStaticObjectMethod(cls, mids$[mid_values_c93389304b0e14f1]));
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
#include "org/orekit/files/ccsds/ndm/odm/KeplerianElementsKey.h"
#include "org/orekit/files/ccsds/ndm/odm/KeplerianElements.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/odm/KeplerianElementsKey.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *KeplerianElementsKey::class$ = NULL;
            jmethodID *KeplerianElementsKey::mids$ = NULL;
            bool KeplerianElementsKey::live$ = false;
            KeplerianElementsKey *KeplerianElementsKey::ARG_OF_PERICENTER = NULL;
            KeplerianElementsKey *KeplerianElementsKey::COMMENT = NULL;
            KeplerianElementsKey *KeplerianElementsKey::ECCENTRICITY = NULL;
            KeplerianElementsKey *KeplerianElementsKey::EPOCH = NULL;
            KeplerianElementsKey *KeplerianElementsKey::GM = NULL;
            KeplerianElementsKey *KeplerianElementsKey::INCLINATION = NULL;
            KeplerianElementsKey *KeplerianElementsKey::MEAN_ANOMALY = NULL;
            KeplerianElementsKey *KeplerianElementsKey::MEAN_MOTION = NULL;
            KeplerianElementsKey *KeplerianElementsKey::RA_OF_ASC_NODE = NULL;
            KeplerianElementsKey *KeplerianElementsKey::SEMI_MAJOR_AXIS = NULL;
            KeplerianElementsKey *KeplerianElementsKey::TRUE_ANOMALY = NULL;

            jclass KeplerianElementsKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/KeplerianElementsKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_653ce425526d59e5] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/KeplerianElements;)Z");
                mids$[mid_valueOf_384ec00c7080971c] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;");
                mids$[mid_values_b203c16db82c2cf7] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                ARG_OF_PERICENTER = new KeplerianElementsKey(env->getStaticObjectField(cls, "ARG_OF_PERICENTER", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                COMMENT = new KeplerianElementsKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                ECCENTRICITY = new KeplerianElementsKey(env->getStaticObjectField(cls, "ECCENTRICITY", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                EPOCH = new KeplerianElementsKey(env->getStaticObjectField(cls, "EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                GM = new KeplerianElementsKey(env->getStaticObjectField(cls, "GM", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                INCLINATION = new KeplerianElementsKey(env->getStaticObjectField(cls, "INCLINATION", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                MEAN_ANOMALY = new KeplerianElementsKey(env->getStaticObjectField(cls, "MEAN_ANOMALY", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                MEAN_MOTION = new KeplerianElementsKey(env->getStaticObjectField(cls, "MEAN_MOTION", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                RA_OF_ASC_NODE = new KeplerianElementsKey(env->getStaticObjectField(cls, "RA_OF_ASC_NODE", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                SEMI_MAJOR_AXIS = new KeplerianElementsKey(env->getStaticObjectField(cls, "SEMI_MAJOR_AXIS", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                TRUE_ANOMALY = new KeplerianElementsKey(env->getStaticObjectField(cls, "TRUE_ANOMALY", "Lorg/orekit/files/ccsds/ndm/odm/KeplerianElementsKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean KeplerianElementsKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::KeplerianElements & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_653ce425526d59e5], a0.this$, a1.this$, a2.this$);
            }

            KeplerianElementsKey KeplerianElementsKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return KeplerianElementsKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_384ec00c7080971c], a0.this$));
            }

            JArray< KeplerianElementsKey > KeplerianElementsKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< KeplerianElementsKey >(env->callStaticObjectMethod(cls, mids$[mid_values_b203c16db82c2cf7]));
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
            static PyObject *t_KeplerianElementsKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_KeplerianElementsKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_KeplerianElementsKey_of_(t_KeplerianElementsKey *self, PyObject *args);
            static PyObject *t_KeplerianElementsKey_process(t_KeplerianElementsKey *self, PyObject *args);
            static PyObject *t_KeplerianElementsKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_KeplerianElementsKey_values(PyTypeObject *type);
            static PyObject *t_KeplerianElementsKey_get__parameters_(t_KeplerianElementsKey *self, void *data);
            static PyGetSetDef t_KeplerianElementsKey__fields_[] = {
              DECLARE_GET_FIELD(t_KeplerianElementsKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_KeplerianElementsKey__methods_[] = {
              DECLARE_METHOD(t_KeplerianElementsKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_KeplerianElementsKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_KeplerianElementsKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_KeplerianElementsKey, process, METH_VARARGS),
              DECLARE_METHOD(t_KeplerianElementsKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_KeplerianElementsKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(KeplerianElementsKey)[] = {
              { Py_tp_methods, t_KeplerianElementsKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_KeplerianElementsKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(KeplerianElementsKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(KeplerianElementsKey, t_KeplerianElementsKey, KeplerianElementsKey);
            PyObject *t_KeplerianElementsKey::wrap_Object(const KeplerianElementsKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_KeplerianElementsKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_KeplerianElementsKey *self = (t_KeplerianElementsKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_KeplerianElementsKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_KeplerianElementsKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_KeplerianElementsKey *self = (t_KeplerianElementsKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_KeplerianElementsKey::install(PyObject *module)
            {
              installType(&PY_TYPE(KeplerianElementsKey), &PY_TYPE_DEF(KeplerianElementsKey), module, "KeplerianElementsKey", 0);
            }

            void t_KeplerianElementsKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "class_", make_descriptor(KeplerianElementsKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "wrapfn_", make_descriptor(t_KeplerianElementsKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(KeplerianElementsKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "ARG_OF_PERICENTER", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::ARG_OF_PERICENTER)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "COMMENT", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "ECCENTRICITY", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::ECCENTRICITY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "EPOCH", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::EPOCH)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "GM", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::GM)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "INCLINATION", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::INCLINATION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "MEAN_ANOMALY", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::MEAN_ANOMALY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "MEAN_MOTION", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::MEAN_MOTION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "RA_OF_ASC_NODE", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::RA_OF_ASC_NODE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "SEMI_MAJOR_AXIS", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::SEMI_MAJOR_AXIS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElementsKey), "TRUE_ANOMALY", make_descriptor(t_KeplerianElementsKey::wrap_Object(*KeplerianElementsKey::TRUE_ANOMALY)));
            }

            static PyObject *t_KeplerianElementsKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, KeplerianElementsKey::initializeClass, 1)))
                return NULL;
              return t_KeplerianElementsKey::wrap_Object(KeplerianElementsKey(((t_KeplerianElementsKey *) arg)->object.this$));
            }
            static PyObject *t_KeplerianElementsKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, KeplerianElementsKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_KeplerianElementsKey_of_(t_KeplerianElementsKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_KeplerianElementsKey_process(t_KeplerianElementsKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::odm::KeplerianElements a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::KeplerianElements::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_KeplerianElementsKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              KeplerianElementsKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::KeplerianElementsKey::valueOf(a0));
                return t_KeplerianElementsKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_KeplerianElementsKey_values(PyTypeObject *type)
            {
              JArray< KeplerianElementsKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::KeplerianElementsKey::values());
              return JArray<jobject>(result.this$).wrap(t_KeplerianElementsKey::wrap_jobject);
            }
            static PyObject *t_KeplerianElementsKey_get__parameters_(t_KeplerianElementsKey *self, void *data)
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
#include "org/orekit/errors/OrekitParseException.h"
#include "java/util/Locale.h"
#include "org/hipparchus/exception/Localizable.h"
#include "org/orekit/errors/LocalizedException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
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
          mids$[mid_init$_d0cf82c16a7e8751] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_getLocalizedMessage_11b109bd155ca898] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_11b109bd155ca898] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_3cd873bfb132c4fd] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_b93c730013ce64c6] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_517615caa9b88a24] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrekitParseException::OrekitParseException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::java::text::ParseException(env->newObject(initializeClass, &mids$, mid_init$_d0cf82c16a7e8751, a0.this$, a1.this$)) {}

      ::java::lang::String OrekitParseException::getLocalizedMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_11b109bd155ca898]));
      }

      ::java::lang::String OrekitParseException::getMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_11b109bd155ca898]));
      }

      ::java::lang::String OrekitParseException::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_3cd873bfb132c4fd], a0.this$));
      }

      JArray< ::java::lang::Object > OrekitParseException::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_b93c730013ce64c6]));
      }

      ::org::hipparchus::exception::Localizable OrekitParseException::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_517615caa9b88a24]));
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
