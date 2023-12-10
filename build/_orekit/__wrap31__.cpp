#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/empirical/PythonAccelerationModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/forces/empirical/AccelerationModel.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace empirical {

        ::java::lang::Class *PythonAccelerationModel::class$ = NULL;
        jmethodID *PythonAccelerationModel::mids$ = NULL;
        bool PythonAccelerationModel::live$ = false;

        jclass PythonAccelerationModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/empirical/PythonAccelerationModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_signedAmplitude_0b7191d207b9680f] = env->getMethodID(cls, "signedAmplitude", "(Lorg/orekit/propagation/SpacecraftState;[D)D");
            mids$[mid_signedAmplitude_8bdf60d5551eceaf] = env->getMethodID(cls, "signedAmplitude", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAccelerationModel::PythonAccelerationModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonAccelerationModel::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonAccelerationModel::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonAccelerationModel::pythonExtension(jlong a0) const
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
    namespace forces {
      namespace empirical {
        static PyObject *t_PythonAccelerationModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAccelerationModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAccelerationModel_init_(t_PythonAccelerationModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAccelerationModel_finalize(t_PythonAccelerationModel *self);
        static PyObject *t_PythonAccelerationModel_pythonExtension(t_PythonAccelerationModel *self, PyObject *args);
        static jobject JNICALL t_PythonAccelerationModel_getParametersDrivers0(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAccelerationModel_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAccelerationModel_signedAmplitude2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static jdouble JNICALL t_PythonAccelerationModel_signedAmplitude3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static PyObject *t_PythonAccelerationModel_get__self(t_PythonAccelerationModel *self, void *data);
        static PyGetSetDef t_PythonAccelerationModel__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAccelerationModel, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAccelerationModel__methods_[] = {
          DECLARE_METHOD(t_PythonAccelerationModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAccelerationModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAccelerationModel, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAccelerationModel, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAccelerationModel)[] = {
          { Py_tp_methods, t_PythonAccelerationModel__methods_ },
          { Py_tp_init, (void *) t_PythonAccelerationModel_init_ },
          { Py_tp_getset, t_PythonAccelerationModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAccelerationModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonAccelerationModel, t_PythonAccelerationModel, PythonAccelerationModel);

        void t_PythonAccelerationModel::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAccelerationModel), &PY_TYPE_DEF(PythonAccelerationModel), module, "PythonAccelerationModel", 1);
        }

        void t_PythonAccelerationModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAccelerationModel), "class_", make_descriptor(PythonAccelerationModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAccelerationModel), "wrapfn_", make_descriptor(t_PythonAccelerationModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAccelerationModel), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAccelerationModel::initializeClass);
          JNINativeMethod methods[] = {
            { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonAccelerationModel_getParametersDrivers0 },
            { "pythonDecRef", "()V", (void *) t_PythonAccelerationModel_pythonDecRef1 },
            { "signedAmplitude", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonAccelerationModel_signedAmplitude2 },
            { "signedAmplitude", "(Lorg/orekit/propagation/SpacecraftState;[D)D", (void *) t_PythonAccelerationModel_signedAmplitude3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonAccelerationModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAccelerationModel::initializeClass, 1)))
            return NULL;
          return t_PythonAccelerationModel::wrap_Object(PythonAccelerationModel(((t_PythonAccelerationModel *) arg)->object.this$));
        }
        static PyObject *t_PythonAccelerationModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAccelerationModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAccelerationModel_init_(t_PythonAccelerationModel *self, PyObject *args, PyObject *kwds)
        {
          PythonAccelerationModel object((jobject) NULL);

          INT_CALL(object = PythonAccelerationModel());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonAccelerationModel_finalize(t_PythonAccelerationModel *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAccelerationModel_pythonExtension(t_PythonAccelerationModel *self, PyObject *args)
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

        static jobject JNICALL t_PythonAccelerationModel_getParametersDrivers0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAccelerationModel::mids$[PythonAccelerationModel::mid_pythonExtension_492808a339bfa35f]);
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

        static void JNICALL t_PythonAccelerationModel_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAccelerationModel::mids$[PythonAccelerationModel::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAccelerationModel::mids$[PythonAccelerationModel::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonAccelerationModel_signedAmplitude2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAccelerationModel::mids$[PythonAccelerationModel::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "signedAmplitude", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
          {
            throwTypeError("signedAmplitude", result);
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

        static jdouble JNICALL t_PythonAccelerationModel_signedAmplitude3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAccelerationModel::mids$[PythonAccelerationModel::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = JArray<jdouble>(a1).wrap();
          PyObject *result = PyObject_CallMethod(obj, "signedAmplitude", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("signedAmplitude", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static PyObject *t_PythonAccelerationModel_get__self(t_PythonAccelerationModel *self, void *data)
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
#include "org/orekit/utils/IERSConventions$NutationCorrectionConverter.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *IERSConventions$NutationCorrectionConverter::class$ = NULL;
      jmethodID *IERSConventions$NutationCorrectionConverter::mids$ = NULL;
      bool IERSConventions$NutationCorrectionConverter::live$ = false;

      jclass IERSConventions$NutationCorrectionConverter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/IERSConventions$NutationCorrectionConverter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_toEquinox_94992fc53ba06f18] = env->getMethodID(cls, "toEquinox", "(Lorg/orekit/time/AbsoluteDate;DD)[D");
          mids$[mid_toNonRotating_94992fc53ba06f18] = env->getMethodID(cls, "toNonRotating", "(Lorg/orekit/time/AbsoluteDate;DD)[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > IERSConventions$NutationCorrectionConverter::toEquinox(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toEquinox_94992fc53ba06f18], a0.this$, a1, a2));
      }

      JArray< jdouble > IERSConventions$NutationCorrectionConverter::toNonRotating(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toNonRotating_94992fc53ba06f18], a0.this$, a1, a2));
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
      static PyObject *t_IERSConventions$NutationCorrectionConverter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IERSConventions$NutationCorrectionConverter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IERSConventions$NutationCorrectionConverter_of_(t_IERSConventions$NutationCorrectionConverter *self, PyObject *args);
      static PyObject *t_IERSConventions$NutationCorrectionConverter_toEquinox(t_IERSConventions$NutationCorrectionConverter *self, PyObject *args);
      static PyObject *t_IERSConventions$NutationCorrectionConverter_toNonRotating(t_IERSConventions$NutationCorrectionConverter *self, PyObject *args);
      static PyObject *t_IERSConventions$NutationCorrectionConverter_get__parameters_(t_IERSConventions$NutationCorrectionConverter *self, void *data);
      static PyGetSetDef t_IERSConventions$NutationCorrectionConverter__fields_[] = {
        DECLARE_GET_FIELD(t_IERSConventions$NutationCorrectionConverter, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_IERSConventions$NutationCorrectionConverter__methods_[] = {
        DECLARE_METHOD(t_IERSConventions$NutationCorrectionConverter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IERSConventions$NutationCorrectionConverter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IERSConventions$NutationCorrectionConverter, of_, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions$NutationCorrectionConverter, toEquinox, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions$NutationCorrectionConverter, toNonRotating, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IERSConventions$NutationCorrectionConverter)[] = {
        { Py_tp_methods, t_IERSConventions$NutationCorrectionConverter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_IERSConventions$NutationCorrectionConverter__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IERSConventions$NutationCorrectionConverter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(IERSConventions$NutationCorrectionConverter, t_IERSConventions$NutationCorrectionConverter, IERSConventions$NutationCorrectionConverter);
      PyObject *t_IERSConventions$NutationCorrectionConverter::wrap_Object(const IERSConventions$NutationCorrectionConverter& object, PyTypeObject *p0)
      {
        PyObject *obj = t_IERSConventions$NutationCorrectionConverter::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_IERSConventions$NutationCorrectionConverter *self = (t_IERSConventions$NutationCorrectionConverter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_IERSConventions$NutationCorrectionConverter::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_IERSConventions$NutationCorrectionConverter::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_IERSConventions$NutationCorrectionConverter *self = (t_IERSConventions$NutationCorrectionConverter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_IERSConventions$NutationCorrectionConverter::install(PyObject *module)
      {
        installType(&PY_TYPE(IERSConventions$NutationCorrectionConverter), &PY_TYPE_DEF(IERSConventions$NutationCorrectionConverter), module, "IERSConventions$NutationCorrectionConverter", 0);
      }

      void t_IERSConventions$NutationCorrectionConverter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions$NutationCorrectionConverter), "class_", make_descriptor(IERSConventions$NutationCorrectionConverter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions$NutationCorrectionConverter), "wrapfn_", make_descriptor(t_IERSConventions$NutationCorrectionConverter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions$NutationCorrectionConverter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IERSConventions$NutationCorrectionConverter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IERSConventions$NutationCorrectionConverter::initializeClass, 1)))
          return NULL;
        return t_IERSConventions$NutationCorrectionConverter::wrap_Object(IERSConventions$NutationCorrectionConverter(((t_IERSConventions$NutationCorrectionConverter *) arg)->object.this$));
      }
      static PyObject *t_IERSConventions$NutationCorrectionConverter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IERSConventions$NutationCorrectionConverter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_IERSConventions$NutationCorrectionConverter_of_(t_IERSConventions$NutationCorrectionConverter *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_IERSConventions$NutationCorrectionConverter_toEquinox(t_IERSConventions$NutationCorrectionConverter *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble a1;
        jdouble a2;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "kDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.toEquinox(a0, a1, a2));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "toEquinox", args);
        return NULL;
      }

      static PyObject *t_IERSConventions$NutationCorrectionConverter_toNonRotating(t_IERSConventions$NutationCorrectionConverter *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble a1;
        jdouble a2;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "kDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.toNonRotating(a0, a1, a2));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "toNonRotating", args);
        return NULL;
      }
      static PyObject *t_IERSConventions$NutationCorrectionConverter_get__parameters_(t_IERSConventions$NutationCorrectionConverter *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/util/FieldBlendable.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "java/lang/String.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldPVCoordinates::class$ = NULL;
      jmethodID *FieldPVCoordinates::mids$ = NULL;
      bool FieldPVCoordinates::live$ = false;

      jclass FieldPVCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldPVCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_c79ed286e3615fed] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_67d015490dd313e3] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_d2f8fd42fbe1e9ea] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_cdf7d14da933bd6b] = env->getMethodID(cls, "<init>", "(DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_a332f4d4d1886b45] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_d80830cf996d9780] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_454f513ba9b358cd] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_b1d60cb8a86b8e8f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_1a8058b4e5da5f9c] = env->getMethodID(cls, "<init>", "(DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_c736ce6ed833c56f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_071961305ea9c152] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_2354f35a5c328f24] = env->getMethodID(cls, "<init>", "(DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_3d3d027e88bc533f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_a33ecdc3aa7fc877] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_c1a8203e73d2a149] = env->getMethodID(cls, "<init>", "(DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_b4660af81e942f37] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_6d6f7878f920f885] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_blendArithmeticallyWith_b31c79033500d4c2] = env->getMethodID(cls, "blendArithmeticallyWith", "(Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_crossProduct_f76646e67e6a0632] = env->getMethodID(cls, "crossProduct", "(Lorg/orekit/utils/FieldPVCoordinates;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_estimateVelocity_314ed37c51b9736a] = env->getStaticMethodID(cls, "estimateVelocity", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;D)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getAcceleration_716f50c86ffc8da7] = env->getMethodID(cls, "getAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getAngularVelocity_716f50c86ffc8da7] = env->getMethodID(cls, "getAngularVelocity", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getMomentum_716f50c86ffc8da7] = env->getMethodID(cls, "getMomentum", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getPosition_716f50c86ffc8da7] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getVelocity_716f50c86ffc8da7] = env->getMethodID(cls, "getVelocity", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getZero_90f77345373c3eb7] = env->getStaticMethodID(cls, "getZero", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_negate_aae6180d70913ad4] = env->getMethodID(cls, "negate", "()Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_normalize_aae6180d70913ad4] = env->getMethodID(cls, "normalize", "()Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_positionShiftedBy_e0e563985265c470] = env->getMethodID(cls, "positionShiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_shiftedBy_390e24fc3a0bcb9d] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_shiftedBy_82b950f4b8998a4c] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_toDerivativeStructurePV_4727d8c8b638c5ff] = env->getMethodID(cls, "toDerivativeStructurePV", "(I)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_toDerivativeStructureVector_7c26e03bd80d6bb3] = env->getMethodID(cls, "toDerivativeStructureVector", "(I)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_toPVCoordinates_9b7c658c14883c84] = env->getMethodID(cls, "toPVCoordinates", "()Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toUnivariateDerivative1PV_aae6180d70913ad4] = env->getMethodID(cls, "toUnivariateDerivative1PV", "()Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_toUnivariateDerivative1Vector_716f50c86ffc8da7] = env->getMethodID(cls, "toUnivariateDerivative1Vector", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_toUnivariateDerivative2PV_aae6180d70913ad4] = env->getMethodID(cls, "toUnivariateDerivative2PV", "()Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_toUnivariateDerivative2Vector_716f50c86ffc8da7] = env->getMethodID(cls, "toUnivariateDerivative2Vector", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c79ed286e3615fed, a0.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_67d015490dd313e3, a0.this$, a1.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const FieldPVCoordinates & a0, const FieldPVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d2f8fd42fbe1e9ea, a0.this$, a1.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(jdouble a0, const FieldPVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cdf7d14da933bd6b, a0, a1.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement & a0, const FieldPVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a332f4d4d1886b45, a0.this$, a1.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::utils::PVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d80830cf996d9780, a0.this$, a1.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::PVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_454f513ba9b358cd, a0.this$, a1.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b1d60cb8a86b8e8f, a0.this$, a1.this$, a2.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(jdouble a0, const FieldPVCoordinates & a1, jdouble a2, const FieldPVCoordinates & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1a8058b4e5da5f9c, a0, a1.this$, a2, a3.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement & a0, const FieldPVCoordinates & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldPVCoordinates & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c736ce6ed833c56f, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::utils::PVCoordinates & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::utils::PVCoordinates & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_071961305ea9c152, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(jdouble a0, const FieldPVCoordinates & a1, jdouble a2, const FieldPVCoordinates & a3, jdouble a4, const FieldPVCoordinates & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2354f35a5c328f24, a0, a1.this$, a2, a3.this$, a4, a5.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement & a0, const FieldPVCoordinates & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldPVCoordinates & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldPVCoordinates & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3d3d027e88bc533f, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::utils::PVCoordinates & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::utils::PVCoordinates & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::orekit::utils::PVCoordinates & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a33ecdc3aa7fc877, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(jdouble a0, const FieldPVCoordinates & a1, jdouble a2, const FieldPVCoordinates & a3, jdouble a4, const FieldPVCoordinates & a5, jdouble a6, const FieldPVCoordinates & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c1a8203e73d2a149, a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement & a0, const FieldPVCoordinates & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldPVCoordinates & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldPVCoordinates & a5, const ::org::hipparchus::CalculusFieldElement & a6, const FieldPVCoordinates & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b4660af81e942f37, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::utils::PVCoordinates & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::utils::PVCoordinates & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::orekit::utils::PVCoordinates & a5, const ::org::hipparchus::CalculusFieldElement & a6, const ::org::orekit::utils::PVCoordinates & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6d6f7878f920f885, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$)) {}

      FieldPVCoordinates FieldPVCoordinates::blendArithmeticallyWith(const FieldPVCoordinates & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
      {
        return FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_blendArithmeticallyWith_b31c79033500d4c2], a0.this$, a1.this$));
      }

      FieldPVCoordinates FieldPVCoordinates::crossProduct(const FieldPVCoordinates & a0) const
      {
        return FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_crossProduct_f76646e67e6a0632], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::estimateVelocity(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_estimateVelocity_314ed37c51b9736a], a0.this$, a1.this$, a2));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::getAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getAcceleration_716f50c86ffc8da7]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::getAngularVelocity() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getAngularVelocity_716f50c86ffc8da7]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::getMomentum() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getMomentum_716f50c86ffc8da7]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::getPosition() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getPosition_716f50c86ffc8da7]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::getVelocity() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getVelocity_716f50c86ffc8da7]));
      }

      FieldPVCoordinates FieldPVCoordinates::getZero(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldPVCoordinates(env->callStaticObjectMethod(cls, mids$[mid_getZero_90f77345373c3eb7], a0.this$));
      }

      FieldPVCoordinates FieldPVCoordinates::negate() const
      {
        return FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_negate_aae6180d70913ad4]));
      }

      FieldPVCoordinates FieldPVCoordinates::normalize() const
      {
        return FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_normalize_aae6180d70913ad4]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::positionShiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_positionShiftedBy_e0e563985265c470], a0.this$));
      }

      FieldPVCoordinates FieldPVCoordinates::shiftedBy(jdouble a0) const
      {
        return FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_390e24fc3a0bcb9d], a0));
      }

      FieldPVCoordinates FieldPVCoordinates::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_82b950f4b8998a4c], a0.this$));
      }

      FieldPVCoordinates FieldPVCoordinates::toDerivativeStructurePV(jint a0) const
      {
        return FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_toDerivativeStructurePV_4727d8c8b638c5ff], a0));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::toDerivativeStructureVector(jint a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_toDerivativeStructureVector_7c26e03bd80d6bb3], a0));
      }

      ::org::orekit::utils::PVCoordinates FieldPVCoordinates::toPVCoordinates() const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_toPVCoordinates_9b7c658c14883c84]));
      }

      ::java::lang::String FieldPVCoordinates::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
      }

      FieldPVCoordinates FieldPVCoordinates::toUnivariateDerivative1PV() const
      {
        return FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative1PV_aae6180d70913ad4]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::toUnivariateDerivative1Vector() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative1Vector_716f50c86ffc8da7]));
      }

      FieldPVCoordinates FieldPVCoordinates::toUnivariateDerivative2PV() const
      {
        return FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative2PV_aae6180d70913ad4]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::toUnivariateDerivative2Vector() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative2Vector_716f50c86ffc8da7]));
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
      static PyObject *t_FieldPVCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldPVCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldPVCoordinates_of_(t_FieldPVCoordinates *self, PyObject *args);
      static int t_FieldPVCoordinates_init_(t_FieldPVCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldPVCoordinates_blendArithmeticallyWith(t_FieldPVCoordinates *self, PyObject *args);
      static PyObject *t_FieldPVCoordinates_crossProduct(t_FieldPVCoordinates *self, PyObject *arg);
      static PyObject *t_FieldPVCoordinates_estimateVelocity(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldPVCoordinates_getAcceleration(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_getAngularVelocity(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_getMomentum(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_getPosition(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_getVelocity(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_getZero(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldPVCoordinates_negate(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_normalize(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_positionShiftedBy(t_FieldPVCoordinates *self, PyObject *arg);
      static PyObject *t_FieldPVCoordinates_shiftedBy(t_FieldPVCoordinates *self, PyObject *args);
      static PyObject *t_FieldPVCoordinates_toDerivativeStructurePV(t_FieldPVCoordinates *self, PyObject *arg);
      static PyObject *t_FieldPVCoordinates_toDerivativeStructureVector(t_FieldPVCoordinates *self, PyObject *arg);
      static PyObject *t_FieldPVCoordinates_toPVCoordinates(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_toString(t_FieldPVCoordinates *self, PyObject *args);
      static PyObject *t_FieldPVCoordinates_toUnivariateDerivative1PV(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_toUnivariateDerivative1Vector(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_toUnivariateDerivative2PV(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_toUnivariateDerivative2Vector(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_get__acceleration(t_FieldPVCoordinates *self, void *data);
      static PyObject *t_FieldPVCoordinates_get__angularVelocity(t_FieldPVCoordinates *self, void *data);
      static PyObject *t_FieldPVCoordinates_get__momentum(t_FieldPVCoordinates *self, void *data);
      static PyObject *t_FieldPVCoordinates_get__position(t_FieldPVCoordinates *self, void *data);
      static PyObject *t_FieldPVCoordinates_get__velocity(t_FieldPVCoordinates *self, void *data);
      static PyObject *t_FieldPVCoordinates_get__parameters_(t_FieldPVCoordinates *self, void *data);
      static PyGetSetDef t_FieldPVCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_FieldPVCoordinates, acceleration),
        DECLARE_GET_FIELD(t_FieldPVCoordinates, angularVelocity),
        DECLARE_GET_FIELD(t_FieldPVCoordinates, momentum),
        DECLARE_GET_FIELD(t_FieldPVCoordinates, position),
        DECLARE_GET_FIELD(t_FieldPVCoordinates, velocity),
        DECLARE_GET_FIELD(t_FieldPVCoordinates, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldPVCoordinates__methods_[] = {
        DECLARE_METHOD(t_FieldPVCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldPVCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldPVCoordinates, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, blendArithmeticallyWith, METH_VARARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, crossProduct, METH_O),
        DECLARE_METHOD(t_FieldPVCoordinates, estimateVelocity, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldPVCoordinates, getAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, getAngularVelocity, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, getMomentum, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, getPosition, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, getVelocity, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, getZero, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldPVCoordinates, negate, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, normalize, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, positionShiftedBy, METH_O),
        DECLARE_METHOD(t_FieldPVCoordinates, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, toDerivativeStructurePV, METH_O),
        DECLARE_METHOD(t_FieldPVCoordinates, toDerivativeStructureVector, METH_O),
        DECLARE_METHOD(t_FieldPVCoordinates, toPVCoordinates, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, toString, METH_VARARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, toUnivariateDerivative1PV, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, toUnivariateDerivative1Vector, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, toUnivariateDerivative2PV, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, toUnivariateDerivative2Vector, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldPVCoordinates)[] = {
        { Py_tp_methods, t_FieldPVCoordinates__methods_ },
        { Py_tp_init, (void *) t_FieldPVCoordinates_init_ },
        { Py_tp_getset, t_FieldPVCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldPVCoordinates)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldPVCoordinates, t_FieldPVCoordinates, FieldPVCoordinates);
      PyObject *t_FieldPVCoordinates::wrap_Object(const FieldPVCoordinates& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldPVCoordinates::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldPVCoordinates *self = (t_FieldPVCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldPVCoordinates::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldPVCoordinates::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldPVCoordinates *self = (t_FieldPVCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldPVCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldPVCoordinates), &PY_TYPE_DEF(FieldPVCoordinates), module, "FieldPVCoordinates", 0);
      }

      void t_FieldPVCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPVCoordinates), "class_", make_descriptor(FieldPVCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPVCoordinates), "wrapfn_", make_descriptor(t_FieldPVCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPVCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldPVCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldPVCoordinates::initializeClass, 1)))
          return NULL;
        return t_FieldPVCoordinates::wrap_Object(FieldPVCoordinates(((t_FieldPVCoordinates *) arg)->object.this$));
      }
      static PyObject *t_FieldPVCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldPVCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldPVCoordinates_of_(t_FieldPVCoordinates *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldPVCoordinates_init_(t_FieldPVCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KK", FieldPVCoordinates::initializeClass, FieldPVCoordinates::initializeClass, &a0, &p0, t_FieldPVCoordinates::parameters_, &a1, &p1, t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jdouble a0;
            FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "DK", FieldPVCoordinates::initializeClass, &a0, &a1, &p1, t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jdouble a0;
            FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "DKDK", FieldPVCoordinates::initializeClass, FieldPVCoordinates::initializeClass, &a0, &a1, &p1, t_FieldPVCoordinates::parameters_, &a2, &a3, &p3, t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::PVCoordinates a3((jobject) NULL);
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KkKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            jdouble a0;
            FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            jdouble a4;
            FieldPVCoordinates a5((jobject) NULL);
            PyTypeObject **p5;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "DKDKDK", FieldPVCoordinates::initializeClass, FieldPVCoordinates::initializeClass, FieldPVCoordinates::initializeClass, &a0, &a1, &p1, t_FieldPVCoordinates::parameters_, &a2, &a3, &p3, t_FieldPVCoordinates::parameters_, &a4, &a5, &p5, t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
            PyTypeObject **p4;
            FieldPVCoordinates a5((jobject) NULL);
            PyTypeObject **p5;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldPVCoordinates::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::PVCoordinates a3((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::utils::PVCoordinates a5((jobject) NULL);
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KkKkKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
          goto err;
         case 8:
          {
            jdouble a0;
            FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            jdouble a4;
            FieldPVCoordinates a5((jobject) NULL);
            PyTypeObject **p5;
            jdouble a6;
            FieldPVCoordinates a7((jobject) NULL);
            PyTypeObject **p7;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "DKDKDKDK", FieldPVCoordinates::initializeClass, FieldPVCoordinates::initializeClass, FieldPVCoordinates::initializeClass, FieldPVCoordinates::initializeClass, &a0, &a1, &p1, t_FieldPVCoordinates::parameters_, &a2, &a3, &p3, t_FieldPVCoordinates::parameters_, &a4, &a5, &p5, t_FieldPVCoordinates::parameters_, &a6, &a7, &p7, t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
            PyTypeObject **p4;
            FieldPVCoordinates a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
            PyTypeObject **p6;
            FieldPVCoordinates a7((jobject) NULL);
            PyTypeObject **p7;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldPVCoordinates::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldPVCoordinates::parameters_, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::PVCoordinates a3((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::utils::PVCoordinates a5((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::orekit::utils::PVCoordinates a7((jobject) NULL);
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KkKkKkKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7));
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

      static PyObject *t_FieldPVCoordinates_blendArithmeticallyWith(t_FieldPVCoordinates *self, PyObject *args)
      {
        FieldPVCoordinates a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        FieldPVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "KK", FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, t_FieldPVCoordinates::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.blendArithmeticallyWith(a0, a1));
          return t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "blendArithmeticallyWith", args);
        return NULL;
      }

      static PyObject *t_FieldPVCoordinates_crossProduct(t_FieldPVCoordinates *self, PyObject *arg)
      {
        FieldPVCoordinates a0((jobject) NULL);
        PyTypeObject **p0;
        FieldPVCoordinates result((jobject) NULL);

        if (!parseArg(arg, "K", FieldPVCoordinates::initializeClass, &a0, &p0, t_FieldPVCoordinates::parameters_))
        {
          OBJ_CALL(result = self->object.crossProduct(a0));
          return t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "crossProduct", arg);
        return NULL;
      }

      static PyObject *t_FieldPVCoordinates_estimateVelocity(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
        PyTypeObject **p1;
        jdouble a2;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArgs(args, "KKD", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2))
        {
          OBJ_CALL(result = ::org::orekit::utils::FieldPVCoordinates::estimateVelocity(a0, a1, a2));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "estimateVelocity", args);
        return NULL;
      }

      static PyObject *t_FieldPVCoordinates_getAcceleration(t_FieldPVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPVCoordinates_getAngularVelocity(t_FieldPVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getAngularVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPVCoordinates_getMomentum(t_FieldPVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getMomentum());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPVCoordinates_getPosition(t_FieldPVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getPosition());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPVCoordinates_getVelocity(t_FieldPVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPVCoordinates_getZero(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldPVCoordinates result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::utils::FieldPVCoordinates::getZero(a0));
          return t_FieldPVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getZero", arg);
        return NULL;
      }

      static PyObject *t_FieldPVCoordinates_negate(t_FieldPVCoordinates *self)
      {
        FieldPVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPVCoordinates_normalize(t_FieldPVCoordinates *self)
      {
        FieldPVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.normalize());
        return t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPVCoordinates_positionShiftedBy(t_FieldPVCoordinates *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.positionShiftedBy(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "positionShiftedBy", arg);
        return NULL;
      }

      static PyObject *t_FieldPVCoordinates_shiftedBy(t_FieldPVCoordinates *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", args);
        return NULL;
      }

      static PyObject *t_FieldPVCoordinates_toDerivativeStructurePV(t_FieldPVCoordinates *self, PyObject *arg)
      {
        jint a0;
        FieldPVCoordinates result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.toDerivativeStructurePV(a0));
          return t_FieldPVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toDerivativeStructurePV", arg);
        return NULL;
      }

      static PyObject *t_FieldPVCoordinates_toDerivativeStructureVector(t_FieldPVCoordinates *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.toDerivativeStructureVector(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toDerivativeStructureVector", arg);
        return NULL;
      }

      static PyObject *t_FieldPVCoordinates_toPVCoordinates(t_FieldPVCoordinates *self)
      {
        ::org::orekit::utils::PVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.toPVCoordinates());
        return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
      }

      static PyObject *t_FieldPVCoordinates_toString(t_FieldPVCoordinates *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(FieldPVCoordinates), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_FieldPVCoordinates_toUnivariateDerivative1PV(t_FieldPVCoordinates *self)
      {
        FieldPVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative1PV());
        return t_FieldPVCoordinates::wrap_Object(result);
      }

      static PyObject *t_FieldPVCoordinates_toUnivariateDerivative1Vector(t_FieldPVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative1Vector());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
      }

      static PyObject *t_FieldPVCoordinates_toUnivariateDerivative2PV(t_FieldPVCoordinates *self)
      {
        FieldPVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative2PV());
        return t_FieldPVCoordinates::wrap_Object(result);
      }

      static PyObject *t_FieldPVCoordinates_toUnivariateDerivative2Vector(t_FieldPVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative2Vector());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
      }
      static PyObject *t_FieldPVCoordinates_get__parameters_(t_FieldPVCoordinates *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldPVCoordinates_get__acceleration(t_FieldPVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldPVCoordinates_get__angularVelocity(t_FieldPVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getAngularVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldPVCoordinates_get__momentum(t_FieldPVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getMomentum());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldPVCoordinates_get__position(t_FieldPVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getPosition());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldPVCoordinates_get__velocity(t_FieldPVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/AbstractVariableStepFieldIntegratorBuilder.h"
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

        ::java::lang::Class *AbstractVariableStepFieldIntegratorBuilder::class$ = NULL;
        jmethodID *AbstractVariableStepFieldIntegratorBuilder::mids$ = NULL;
        bool AbstractVariableStepFieldIntegratorBuilder::live$ = false;

        jclass AbstractVariableStepFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/AbstractVariableStepFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_buildIntegrator_048f7039a7622a2b] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::AbstractFieldIntegrator AbstractVariableStepFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
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
        static PyObject *t_AbstractVariableStepFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractVariableStepFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractVariableStepFieldIntegratorBuilder_of_(t_AbstractVariableStepFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_AbstractVariableStepFieldIntegratorBuilder_buildIntegrator(t_AbstractVariableStepFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_AbstractVariableStepFieldIntegratorBuilder_get__parameters_(t_AbstractVariableStepFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_AbstractVariableStepFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractVariableStepFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractVariableStepFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_AbstractVariableStepFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractVariableStepFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractVariableStepFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractVariableStepFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractVariableStepFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_AbstractVariableStepFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractVariableStepFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractVariableStepFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(AbstractVariableStepFieldIntegratorBuilder, t_AbstractVariableStepFieldIntegratorBuilder, AbstractVariableStepFieldIntegratorBuilder);
        PyObject *t_AbstractVariableStepFieldIntegratorBuilder::wrap_Object(const AbstractVariableStepFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractVariableStepFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractVariableStepFieldIntegratorBuilder *self = (t_AbstractVariableStepFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractVariableStepFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractVariableStepFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractVariableStepFieldIntegratorBuilder *self = (t_AbstractVariableStepFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractVariableStepFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractVariableStepFieldIntegratorBuilder), &PY_TYPE_DEF(AbstractVariableStepFieldIntegratorBuilder), module, "AbstractVariableStepFieldIntegratorBuilder", 0);
        }

        void t_AbstractVariableStepFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractVariableStepFieldIntegratorBuilder), "class_", make_descriptor(AbstractVariableStepFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractVariableStepFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_AbstractVariableStepFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractVariableStepFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractVariableStepFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractVariableStepFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_AbstractVariableStepFieldIntegratorBuilder::wrap_Object(AbstractVariableStepFieldIntegratorBuilder(((t_AbstractVariableStepFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_AbstractVariableStepFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractVariableStepFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractVariableStepFieldIntegratorBuilder_of_(t_AbstractVariableStepFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AbstractVariableStepFieldIntegratorBuilder_buildIntegrator(t_AbstractVariableStepFieldIntegratorBuilder *self, PyObject *args)
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

          return callSuper(PY_TYPE(AbstractVariableStepFieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_AbstractVariableStepFieldIntegratorBuilder_get__parameters_(t_AbstractVariableStepFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/PythonCovarianceMatrixProvider.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/sequential/CovarianceMatrixProvider.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *PythonCovarianceMatrixProvider::class$ = NULL;
        jmethodID *PythonCovarianceMatrixProvider::mids$ = NULL;
        bool PythonCovarianceMatrixProvider::live$ = false;

        jclass PythonCovarianceMatrixProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/PythonCovarianceMatrixProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getInitialCovarianceMatrix_9483b2ac438718ce] = env->getMethodID(cls, "getInitialCovarianceMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getProcessNoiseMatrix_26148f4ae87f73a3] = env->getMethodID(cls, "getProcessNoiseMatrix", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonCovarianceMatrixProvider::PythonCovarianceMatrixProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonCovarianceMatrixProvider::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonCovarianceMatrixProvider::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonCovarianceMatrixProvider::pythonExtension(jlong a0) const
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
        static PyObject *t_PythonCovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonCovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonCovarianceMatrixProvider_init_(t_PythonCovarianceMatrixProvider *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonCovarianceMatrixProvider_finalize(t_PythonCovarianceMatrixProvider *self);
        static PyObject *t_PythonCovarianceMatrixProvider_pythonExtension(t_PythonCovarianceMatrixProvider *self, PyObject *args);
        static jobject JNICALL t_PythonCovarianceMatrixProvider_getInitialCovarianceMatrix0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonCovarianceMatrixProvider_getProcessNoiseMatrix1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonCovarianceMatrixProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonCovarianceMatrixProvider_get__self(t_PythonCovarianceMatrixProvider *self, void *data);
        static PyGetSetDef t_PythonCovarianceMatrixProvider__fields_[] = {
          DECLARE_GET_FIELD(t_PythonCovarianceMatrixProvider, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonCovarianceMatrixProvider__methods_[] = {
          DECLARE_METHOD(t_PythonCovarianceMatrixProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonCovarianceMatrixProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonCovarianceMatrixProvider, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonCovarianceMatrixProvider, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonCovarianceMatrixProvider)[] = {
          { Py_tp_methods, t_PythonCovarianceMatrixProvider__methods_ },
          { Py_tp_init, (void *) t_PythonCovarianceMatrixProvider_init_ },
          { Py_tp_getset, t_PythonCovarianceMatrixProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonCovarianceMatrixProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonCovarianceMatrixProvider, t_PythonCovarianceMatrixProvider, PythonCovarianceMatrixProvider);

        void t_PythonCovarianceMatrixProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonCovarianceMatrixProvider), &PY_TYPE_DEF(PythonCovarianceMatrixProvider), module, "PythonCovarianceMatrixProvider", 1);
        }

        void t_PythonCovarianceMatrixProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCovarianceMatrixProvider), "class_", make_descriptor(PythonCovarianceMatrixProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCovarianceMatrixProvider), "wrapfn_", make_descriptor(t_PythonCovarianceMatrixProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCovarianceMatrixProvider), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonCovarianceMatrixProvider::initializeClass);
          JNINativeMethod methods[] = {
            { "getInitialCovarianceMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;", (void *) t_PythonCovarianceMatrixProvider_getInitialCovarianceMatrix0 },
            { "getProcessNoiseMatrix", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;", (void *) t_PythonCovarianceMatrixProvider_getProcessNoiseMatrix1 },
            { "pythonDecRef", "()V", (void *) t_PythonCovarianceMatrixProvider_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonCovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonCovarianceMatrixProvider::initializeClass, 1)))
            return NULL;
          return t_PythonCovarianceMatrixProvider::wrap_Object(PythonCovarianceMatrixProvider(((t_PythonCovarianceMatrixProvider *) arg)->object.this$));
        }
        static PyObject *t_PythonCovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonCovarianceMatrixProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonCovarianceMatrixProvider_init_(t_PythonCovarianceMatrixProvider *self, PyObject *args, PyObject *kwds)
        {
          PythonCovarianceMatrixProvider object((jobject) NULL);

          INT_CALL(object = PythonCovarianceMatrixProvider());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonCovarianceMatrixProvider_finalize(t_PythonCovarianceMatrixProvider *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonCovarianceMatrixProvider_pythonExtension(t_PythonCovarianceMatrixProvider *self, PyObject *args)
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

        static jobject JNICALL t_PythonCovarianceMatrixProvider_getInitialCovarianceMatrix0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonCovarianceMatrixProvider::mids$[PythonCovarianceMatrixProvider::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "getInitialCovarianceMatrix", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &value))
          {
            throwTypeError("getInitialCovarianceMatrix", result);
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

        static jobject JNICALL t_PythonCovarianceMatrixProvider_getProcessNoiseMatrix1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonCovarianceMatrixProvider::mids$[PythonCovarianceMatrixProvider::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a1));
          PyObject *result = PyObject_CallMethod(obj, "getProcessNoiseMatrix", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &value))
          {
            throwTypeError("getProcessNoiseMatrix", result);
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

        static void JNICALL t_PythonCovarianceMatrixProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonCovarianceMatrixProvider::mids$[PythonCovarianceMatrixProvider::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonCovarianceMatrixProvider::mids$[PythonCovarianceMatrixProvider::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonCovarianceMatrixProvider_get__self(t_PythonCovarianceMatrixProvider *self, void *data)
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
#include "org/hipparchus/optim/nonlinear/scalar/ObjectiveFunctionGradient.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/MultivariateVectorFunction.h"
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
              mids$[mid_init$_d33899f2761a81f4] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/MultivariateVectorFunction;)V");
              mids$[mid_getObjectiveFunctionGradient_18d8e6aab2238577] = env->getMethodID(cls, "getObjectiveFunctionGradient", "()Lorg/hipparchus/analysis/MultivariateVectorFunction;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ObjectiveFunctionGradient::ObjectiveFunctionGradient(const ::org::hipparchus::analysis::MultivariateVectorFunction & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d33899f2761a81f4, a0.this$)) {}

          ::org::hipparchus::analysis::MultivariateVectorFunction ObjectiveFunctionGradient::getObjectiveFunctionGradient() const
          {
            return ::org::hipparchus::analysis::MultivariateVectorFunction(env->callObjectMethod(this$, mids$[mid_getObjectiveFunctionGradient_18d8e6aab2238577]));
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
#include "org/orekit/data/PolynomialParser$Unit.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/data/PolynomialParser$Unit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PolynomialParser$Unit::class$ = NULL;
      jmethodID *PolynomialParser$Unit::mids$ = NULL;
      bool PolynomialParser$Unit::live$ = false;
      PolynomialParser$Unit *PolynomialParser$Unit::ARC_SECONDS = NULL;
      PolynomialParser$Unit *PolynomialParser$Unit::DEGREES = NULL;
      PolynomialParser$Unit *PolynomialParser$Unit::MICRO_ARC_SECONDS = NULL;
      PolynomialParser$Unit *PolynomialParser$Unit::MILLI_ARC_SECONDS = NULL;
      PolynomialParser$Unit *PolynomialParser$Unit::NO_UNITS = NULL;
      PolynomialParser$Unit *PolynomialParser$Unit::RADIANS = NULL;

      jclass PolynomialParser$Unit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PolynomialParser$Unit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_toSI_dcbc7ce2902fa136] = env->getMethodID(cls, "toSI", "(D)D");
          mids$[mid_valueOf_295ebe7d477bd62c] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/data/PolynomialParser$Unit;");
          mids$[mid_values_c293dbd803eafdf5] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/data/PolynomialParser$Unit;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ARC_SECONDS = new PolynomialParser$Unit(env->getStaticObjectField(cls, "ARC_SECONDS", "Lorg/orekit/data/PolynomialParser$Unit;"));
          DEGREES = new PolynomialParser$Unit(env->getStaticObjectField(cls, "DEGREES", "Lorg/orekit/data/PolynomialParser$Unit;"));
          MICRO_ARC_SECONDS = new PolynomialParser$Unit(env->getStaticObjectField(cls, "MICRO_ARC_SECONDS", "Lorg/orekit/data/PolynomialParser$Unit;"));
          MILLI_ARC_SECONDS = new PolynomialParser$Unit(env->getStaticObjectField(cls, "MILLI_ARC_SECONDS", "Lorg/orekit/data/PolynomialParser$Unit;"));
          NO_UNITS = new PolynomialParser$Unit(env->getStaticObjectField(cls, "NO_UNITS", "Lorg/orekit/data/PolynomialParser$Unit;"));
          RADIANS = new PolynomialParser$Unit(env->getStaticObjectField(cls, "RADIANS", "Lorg/orekit/data/PolynomialParser$Unit;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble PolynomialParser$Unit::toSI(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_toSI_dcbc7ce2902fa136], a0);
      }

      PolynomialParser$Unit PolynomialParser$Unit::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return PolynomialParser$Unit(env->callStaticObjectMethod(cls, mids$[mid_valueOf_295ebe7d477bd62c], a0.this$));
      }

      JArray< PolynomialParser$Unit > PolynomialParser$Unit::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< PolynomialParser$Unit >(env->callStaticObjectMethod(cls, mids$[mid_values_c293dbd803eafdf5]));
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
      static PyObject *t_PolynomialParser$Unit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PolynomialParser$Unit_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PolynomialParser$Unit_of_(t_PolynomialParser$Unit *self, PyObject *args);
      static PyObject *t_PolynomialParser$Unit_toSI(t_PolynomialParser$Unit *self, PyObject *arg);
      static PyObject *t_PolynomialParser$Unit_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_PolynomialParser$Unit_values(PyTypeObject *type);
      static PyObject *t_PolynomialParser$Unit_get__parameters_(t_PolynomialParser$Unit *self, void *data);
      static PyGetSetDef t_PolynomialParser$Unit__fields_[] = {
        DECLARE_GET_FIELD(t_PolynomialParser$Unit, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PolynomialParser$Unit__methods_[] = {
        DECLARE_METHOD(t_PolynomialParser$Unit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PolynomialParser$Unit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PolynomialParser$Unit, of_, METH_VARARGS),
        DECLARE_METHOD(t_PolynomialParser$Unit, toSI, METH_O),
        DECLARE_METHOD(t_PolynomialParser$Unit, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_PolynomialParser$Unit, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PolynomialParser$Unit)[] = {
        { Py_tp_methods, t_PolynomialParser$Unit__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_PolynomialParser$Unit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PolynomialParser$Unit)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(PolynomialParser$Unit, t_PolynomialParser$Unit, PolynomialParser$Unit);
      PyObject *t_PolynomialParser$Unit::wrap_Object(const PolynomialParser$Unit& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PolynomialParser$Unit::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PolynomialParser$Unit *self = (t_PolynomialParser$Unit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PolynomialParser$Unit::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PolynomialParser$Unit::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PolynomialParser$Unit *self = (t_PolynomialParser$Unit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PolynomialParser$Unit::install(PyObject *module)
      {
        installType(&PY_TYPE(PolynomialParser$Unit), &PY_TYPE_DEF(PolynomialParser$Unit), module, "PolynomialParser$Unit", 0);
      }

      void t_PolynomialParser$Unit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser$Unit), "class_", make_descriptor(PolynomialParser$Unit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser$Unit), "wrapfn_", make_descriptor(t_PolynomialParser$Unit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser$Unit), "boxfn_", make_descriptor(boxObject));
        env->getClass(PolynomialParser$Unit::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser$Unit), "ARC_SECONDS", make_descriptor(t_PolynomialParser$Unit::wrap_Object(*PolynomialParser$Unit::ARC_SECONDS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser$Unit), "DEGREES", make_descriptor(t_PolynomialParser$Unit::wrap_Object(*PolynomialParser$Unit::DEGREES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser$Unit), "MICRO_ARC_SECONDS", make_descriptor(t_PolynomialParser$Unit::wrap_Object(*PolynomialParser$Unit::MICRO_ARC_SECONDS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser$Unit), "MILLI_ARC_SECONDS", make_descriptor(t_PolynomialParser$Unit::wrap_Object(*PolynomialParser$Unit::MILLI_ARC_SECONDS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser$Unit), "NO_UNITS", make_descriptor(t_PolynomialParser$Unit::wrap_Object(*PolynomialParser$Unit::NO_UNITS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser$Unit), "RADIANS", make_descriptor(t_PolynomialParser$Unit::wrap_Object(*PolynomialParser$Unit::RADIANS)));
      }

      static PyObject *t_PolynomialParser$Unit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PolynomialParser$Unit::initializeClass, 1)))
          return NULL;
        return t_PolynomialParser$Unit::wrap_Object(PolynomialParser$Unit(((t_PolynomialParser$Unit *) arg)->object.this$));
      }
      static PyObject *t_PolynomialParser$Unit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PolynomialParser$Unit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PolynomialParser$Unit_of_(t_PolynomialParser$Unit *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_PolynomialParser$Unit_toSI(t_PolynomialParser$Unit *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.toSI(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "toSI", arg);
        return NULL;
      }

      static PyObject *t_PolynomialParser$Unit_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        PolynomialParser$Unit result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::data::PolynomialParser$Unit::valueOf(a0));
          return t_PolynomialParser$Unit::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_PolynomialParser$Unit_values(PyTypeObject *type)
      {
        JArray< PolynomialParser$Unit > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::data::PolynomialParser$Unit::values());
        return JArray<jobject>(result.this$).wrap(t_PolynomialParser$Unit::wrap_jobject);
      }
      static PyObject *t_PolynomialParser$Unit_get__parameters_(t_PolynomialParser$Unit *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/FieldUnivariateInterpolator.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *FieldUnivariateInterpolator::class$ = NULL;
        jmethodID *FieldUnivariateInterpolator::mids$ = NULL;
        bool FieldUnivariateInterpolator::live$ = false;

        jclass FieldUnivariateInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/FieldUnivariateInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_interpolate_2a0316cf5108925d] = env->getMethodID(cls, "interpolate", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/CalculusFieldUnivariateFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::CalculusFieldUnivariateFunction FieldUnivariateInterpolator::interpolate(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::analysis::CalculusFieldUnivariateFunction(env->callObjectMethod(this$, mids$[mid_interpolate_2a0316cf5108925d], a0.this$, a1.this$));
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
        static PyObject *t_FieldUnivariateInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateInterpolator_interpolate(t_FieldUnivariateInterpolator *self, PyObject *args);

        static PyMethodDef t_FieldUnivariateInterpolator__methods_[] = {
          DECLARE_METHOD(t_FieldUnivariateInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateInterpolator)[] = {
          { Py_tp_methods, t_FieldUnivariateInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldUnivariateInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldUnivariateInterpolator, t_FieldUnivariateInterpolator, FieldUnivariateInterpolator);

        void t_FieldUnivariateInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldUnivariateInterpolator), &PY_TYPE_DEF(FieldUnivariateInterpolator), module, "FieldUnivariateInterpolator", 0);
        }

        void t_FieldUnivariateInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateInterpolator), "class_", make_descriptor(FieldUnivariateInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateInterpolator), "wrapfn_", make_descriptor(t_FieldUnivariateInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldUnivariateInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldUnivariateInterpolator::initializeClass, 1)))
            return NULL;
          return t_FieldUnivariateInterpolator::wrap_Object(FieldUnivariateInterpolator(((t_FieldUnivariateInterpolator *) arg)->object.this$));
        }
        static PyObject *t_FieldUnivariateInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldUnivariateInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldUnivariateInterpolator_interpolate(t_FieldUnivariateInterpolator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::analysis::CalculusFieldUnivariateFunction result((jobject) NULL);

          if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1));
            return ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/linear/SolutionCallback.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {

        ::java::lang::Class *SolutionCallback::class$ = NULL;
        jmethodID *SolutionCallback::mids$ = NULL;
        bool SolutionCallback::live$ = false;

        jclass SolutionCallback::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/linear/SolutionCallback");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getSolution_4ae915e35f441d39] = env->getMethodID(cls, "getSolution", "()Lorg/hipparchus/optim/PointValuePair;");
            mids$[mid_isSolutionOptimal_b108b35ef48e27bd] = env->getMethodID(cls, "isSolutionOptimal", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SolutionCallback::SolutionCallback() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        ::org::hipparchus::optim::PointValuePair SolutionCallback::getSolution() const
        {
          return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_getSolution_4ae915e35f441d39]));
        }

        jboolean SolutionCallback::isSolutionOptimal() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSolutionOptimal_b108b35ef48e27bd]);
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
        static PyObject *t_SolutionCallback_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SolutionCallback_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SolutionCallback_init_(t_SolutionCallback *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SolutionCallback_getSolution(t_SolutionCallback *self);
        static PyObject *t_SolutionCallback_isSolutionOptimal(t_SolutionCallback *self);
        static PyObject *t_SolutionCallback_get__solution(t_SolutionCallback *self, void *data);
        static PyObject *t_SolutionCallback_get__solutionOptimal(t_SolutionCallback *self, void *data);
        static PyGetSetDef t_SolutionCallback__fields_[] = {
          DECLARE_GET_FIELD(t_SolutionCallback, solution),
          DECLARE_GET_FIELD(t_SolutionCallback, solutionOptimal),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SolutionCallback__methods_[] = {
          DECLARE_METHOD(t_SolutionCallback, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SolutionCallback, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SolutionCallback, getSolution, METH_NOARGS),
          DECLARE_METHOD(t_SolutionCallback, isSolutionOptimal, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SolutionCallback)[] = {
          { Py_tp_methods, t_SolutionCallback__methods_ },
          { Py_tp_init, (void *) t_SolutionCallback_init_ },
          { Py_tp_getset, t_SolutionCallback__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SolutionCallback)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SolutionCallback, t_SolutionCallback, SolutionCallback);

        void t_SolutionCallback::install(PyObject *module)
        {
          installType(&PY_TYPE(SolutionCallback), &PY_TYPE_DEF(SolutionCallback), module, "SolutionCallback", 0);
        }

        void t_SolutionCallback::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolutionCallback), "class_", make_descriptor(SolutionCallback::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolutionCallback), "wrapfn_", make_descriptor(t_SolutionCallback::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SolutionCallback), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SolutionCallback_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SolutionCallback::initializeClass, 1)))
            return NULL;
          return t_SolutionCallback::wrap_Object(SolutionCallback(((t_SolutionCallback *) arg)->object.this$));
        }
        static PyObject *t_SolutionCallback_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SolutionCallback::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SolutionCallback_init_(t_SolutionCallback *self, PyObject *args, PyObject *kwds)
        {
          SolutionCallback object((jobject) NULL);

          INT_CALL(object = SolutionCallback());
          self->object = object;

          return 0;
        }

        static PyObject *t_SolutionCallback_getSolution(t_SolutionCallback *self)
        {
          ::org::hipparchus::optim::PointValuePair result((jobject) NULL);
          OBJ_CALL(result = self->object.getSolution());
          return ::org::hipparchus::optim::t_PointValuePair::wrap_Object(result);
        }

        static PyObject *t_SolutionCallback_isSolutionOptimal(t_SolutionCallback *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isSolutionOptimal());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SolutionCallback_get__solution(t_SolutionCallback *self, void *data)
        {
          ::org::hipparchus::optim::PointValuePair value((jobject) NULL);
          OBJ_CALL(value = self->object.getSolution());
          return ::org::hipparchus::optim::t_PointValuePair::wrap_Object(value);
        }

        static PyObject *t_SolutionCallback_get__solutionOptimal(t_SolutionCallback *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSolutionOptimal());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/util/List.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/hipparchus/util/Incrementor.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction.h"
#include "org/hipparchus/util/Pair.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        ::java::lang::Class *AbstractBatchLSModel::class$ = NULL;
        jmethodID *AbstractBatchLSModel::mids$ = NULL;
        bool AbstractBatchLSModel::live$ = false;

        jclass AbstractBatchLSModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/leastsquares/AbstractBatchLSModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_013b9b75e2d29096] = env->getMethodID(cls, "<init>", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)V");
            mids$[mid_createPropagators_47cc2992b4c6c152] = env->getMethodID(cls, "createPropagators", "(Lorg/hipparchus/linear/RealVector;)[Lorg/orekit/propagation/Propagator;");
            mids$[mid_fetchEvaluatedMeasurement_de3fd4c2c4a341a7] = env->getMethodID(cls, "fetchEvaluatedMeasurement", "(ILorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
            mids$[mid_getEvaluationsCount_570ce0828f81a2c1] = env->getMethodID(cls, "getEvaluationsCount", "()I");
            mids$[mid_getIterationsCount_570ce0828f81a2c1] = env->getMethodID(cls, "getIterationsCount", "()I");
            mids$[mid_getSelectedOrbitalParametersDriversForBuilder_e970077e9411a499] = env->getMethodID(cls, "getSelectedOrbitalParametersDriversForBuilder", "(I)Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getSelectedPropagationDriversForBuilder_e970077e9411a499] = env->getMethodID(cls, "getSelectedPropagationDriversForBuilder", "(I)Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_isForwardPropagation_b108b35ef48e27bd] = env->getMethodID(cls, "isForwardPropagation", "()Z");
            mids$[mid_setEvaluationsCounter_97761a13d2e9faa2] = env->getMethodID(cls, "setEvaluationsCounter", "(Lorg/hipparchus/util/Incrementor;)V");
            mids$[mid_setIterationsCounter_97761a13d2e9faa2] = env->getMethodID(cls, "setIterationsCounter", "(Lorg/hipparchus/util/Incrementor;)V");
            mids$[mid_value_f3b8dd3e226035d1] = env->getMethodID(cls, "value", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/util/Pair;");
            mids$[mid_configureHarvester_e80966db3f120c01] = env->getMethodID(cls, "configureHarvester", "(Lorg/orekit/propagation/Propagator;)Lorg/orekit/propagation/MatricesHarvester;");
            mids$[mid_configureOrbits_e5faaf40266e83a3] = env->getMethodID(cls, "configureOrbits", "(Lorg/orekit/propagation/MatricesHarvester;Lorg/orekit/propagation/Propagator;)Lorg/orekit/orbits/Orbit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AbstractBatchLSModel::AbstractBatchLSModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_013b9b75e2d29096, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        JArray< ::org::orekit::propagation::Propagator > AbstractBatchLSModel::createPropagators(const ::org::hipparchus::linear::RealVector & a0) const
        {
          return JArray< ::org::orekit::propagation::Propagator >(env->callObjectMethod(this$, mids$[mid_createPropagators_47cc2992b4c6c152], a0.this$));
        }

        void AbstractBatchLSModel::fetchEvaluatedMeasurement(jint a0, const ::org::orekit::estimation::measurements::EstimatedMeasurement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_fetchEvaluatedMeasurement_de3fd4c2c4a341a7], a0, a1.this$);
        }

        jint AbstractBatchLSModel::getEvaluationsCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluationsCount_570ce0828f81a2c1]);
        }

        jint AbstractBatchLSModel::getIterationsCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getIterationsCount_570ce0828f81a2c1]);
        }

        ::org::orekit::utils::ParameterDriversList AbstractBatchLSModel::getSelectedOrbitalParametersDriversForBuilder(jint a0) const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getSelectedOrbitalParametersDriversForBuilder_e970077e9411a499], a0));
        }

        ::org::orekit::utils::ParameterDriversList AbstractBatchLSModel::getSelectedPropagationDriversForBuilder(jint a0) const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getSelectedPropagationDriversForBuilder_e970077e9411a499], a0));
        }

        jboolean AbstractBatchLSModel::isForwardPropagation() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForwardPropagation_b108b35ef48e27bd]);
        }

        void AbstractBatchLSModel::setEvaluationsCounter(const ::org::hipparchus::util::Incrementor & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEvaluationsCounter_97761a13d2e9faa2], a0.this$);
        }

        void AbstractBatchLSModel::setIterationsCounter(const ::org::hipparchus::util::Incrementor & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIterationsCounter_97761a13d2e9faa2], a0.this$);
        }

        ::org::hipparchus::util::Pair AbstractBatchLSModel::value(const ::org::hipparchus::linear::RealVector & a0) const
        {
          return ::org::hipparchus::util::Pair(env->callObjectMethod(this$, mids$[mid_value_f3b8dd3e226035d1], a0.this$));
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
        static PyObject *t_AbstractBatchLSModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractBatchLSModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AbstractBatchLSModel_init_(t_AbstractBatchLSModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AbstractBatchLSModel_createPropagators(t_AbstractBatchLSModel *self, PyObject *arg);
        static PyObject *t_AbstractBatchLSModel_fetchEvaluatedMeasurement(t_AbstractBatchLSModel *self, PyObject *args);
        static PyObject *t_AbstractBatchLSModel_getEvaluationsCount(t_AbstractBatchLSModel *self);
        static PyObject *t_AbstractBatchLSModel_getIterationsCount(t_AbstractBatchLSModel *self);
        static PyObject *t_AbstractBatchLSModel_getSelectedOrbitalParametersDriversForBuilder(t_AbstractBatchLSModel *self, PyObject *arg);
        static PyObject *t_AbstractBatchLSModel_getSelectedPropagationDriversForBuilder(t_AbstractBatchLSModel *self, PyObject *arg);
        static PyObject *t_AbstractBatchLSModel_isForwardPropagation(t_AbstractBatchLSModel *self);
        static PyObject *t_AbstractBatchLSModel_setEvaluationsCounter(t_AbstractBatchLSModel *self, PyObject *arg);
        static PyObject *t_AbstractBatchLSModel_setIterationsCounter(t_AbstractBatchLSModel *self, PyObject *arg);
        static PyObject *t_AbstractBatchLSModel_value(t_AbstractBatchLSModel *self, PyObject *arg);
        static PyObject *t_AbstractBatchLSModel_get__evaluationsCount(t_AbstractBatchLSModel *self, void *data);
        static int t_AbstractBatchLSModel_set__evaluationsCounter(t_AbstractBatchLSModel *self, PyObject *arg, void *data);
        static PyObject *t_AbstractBatchLSModel_get__forwardPropagation(t_AbstractBatchLSModel *self, void *data);
        static PyObject *t_AbstractBatchLSModel_get__iterationsCount(t_AbstractBatchLSModel *self, void *data);
        static int t_AbstractBatchLSModel_set__iterationsCounter(t_AbstractBatchLSModel *self, PyObject *arg, void *data);
        static PyGetSetDef t_AbstractBatchLSModel__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractBatchLSModel, evaluationsCount),
          DECLARE_SET_FIELD(t_AbstractBatchLSModel, evaluationsCounter),
          DECLARE_GET_FIELD(t_AbstractBatchLSModel, forwardPropagation),
          DECLARE_GET_FIELD(t_AbstractBatchLSModel, iterationsCount),
          DECLARE_SET_FIELD(t_AbstractBatchLSModel, iterationsCounter),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractBatchLSModel__methods_[] = {
          DECLARE_METHOD(t_AbstractBatchLSModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractBatchLSModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractBatchLSModel, createPropagators, METH_O),
          DECLARE_METHOD(t_AbstractBatchLSModel, fetchEvaluatedMeasurement, METH_VARARGS),
          DECLARE_METHOD(t_AbstractBatchLSModel, getEvaluationsCount, METH_NOARGS),
          DECLARE_METHOD(t_AbstractBatchLSModel, getIterationsCount, METH_NOARGS),
          DECLARE_METHOD(t_AbstractBatchLSModel, getSelectedOrbitalParametersDriversForBuilder, METH_O),
          DECLARE_METHOD(t_AbstractBatchLSModel, getSelectedPropagationDriversForBuilder, METH_O),
          DECLARE_METHOD(t_AbstractBatchLSModel, isForwardPropagation, METH_NOARGS),
          DECLARE_METHOD(t_AbstractBatchLSModel, setEvaluationsCounter, METH_O),
          DECLARE_METHOD(t_AbstractBatchLSModel, setIterationsCounter, METH_O),
          DECLARE_METHOD(t_AbstractBatchLSModel, value, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractBatchLSModel)[] = {
          { Py_tp_methods, t_AbstractBatchLSModel__methods_ },
          { Py_tp_init, (void *) t_AbstractBatchLSModel_init_ },
          { Py_tp_getset, t_AbstractBatchLSModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractBatchLSModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractBatchLSModel, t_AbstractBatchLSModel, AbstractBatchLSModel);

        void t_AbstractBatchLSModel::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractBatchLSModel), &PY_TYPE_DEF(AbstractBatchLSModel), module, "AbstractBatchLSModel", 0);
        }

        void t_AbstractBatchLSModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractBatchLSModel), "class_", make_descriptor(AbstractBatchLSModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractBatchLSModel), "wrapfn_", make_descriptor(t_AbstractBatchLSModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractBatchLSModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractBatchLSModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractBatchLSModel::initializeClass, 1)))
            return NULL;
          return t_AbstractBatchLSModel::wrap_Object(AbstractBatchLSModel(((t_AbstractBatchLSModel *) arg)->object.this$));
        }
        static PyObject *t_AbstractBatchLSModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractBatchLSModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AbstractBatchLSModel_init_(t_AbstractBatchLSModel *self, PyObject *args, PyObject *kwds)
        {
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          AbstractBatchLSModel object((jobject) NULL);

          if (!parseArgs(args, "[kKkk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            INT_CALL(object = AbstractBatchLSModel(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AbstractBatchLSModel_createPropagators(t_AbstractBatchLSModel *self, PyObject *arg)
        {
          ::org::hipparchus::linear::RealVector a0((jobject) NULL);
          JArray< ::org::orekit::propagation::Propagator > result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.createPropagators(a0));
            return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "createPropagators", arg);
          return NULL;
        }

        static PyObject *t_AbstractBatchLSModel_fetchEvaluatedMeasurement(t_AbstractBatchLSModel *self, PyObject *args)
        {
          jint a0;
          ::org::orekit::estimation::measurements::EstimatedMeasurement a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "IK", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
          {
            OBJ_CALL(self->object.fetchEvaluatedMeasurement(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "fetchEvaluatedMeasurement", args);
          return NULL;
        }

        static PyObject *t_AbstractBatchLSModel_getEvaluationsCount(t_AbstractBatchLSModel *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluationsCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractBatchLSModel_getIterationsCount(t_AbstractBatchLSModel *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getIterationsCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractBatchLSModel_getSelectedOrbitalParametersDriversForBuilder(t_AbstractBatchLSModel *self, PyObject *arg)
        {
          jint a0;
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getSelectedOrbitalParametersDriversForBuilder(a0));
            return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getSelectedOrbitalParametersDriversForBuilder", arg);
          return NULL;
        }

        static PyObject *t_AbstractBatchLSModel_getSelectedPropagationDriversForBuilder(t_AbstractBatchLSModel *self, PyObject *arg)
        {
          jint a0;
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getSelectedPropagationDriversForBuilder(a0));
            return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getSelectedPropagationDriversForBuilder", arg);
          return NULL;
        }

        static PyObject *t_AbstractBatchLSModel_isForwardPropagation(t_AbstractBatchLSModel *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForwardPropagation());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractBatchLSModel_setEvaluationsCounter(t_AbstractBatchLSModel *self, PyObject *arg)
        {
          ::org::hipparchus::util::Incrementor a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::util::Incrementor::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setEvaluationsCounter(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEvaluationsCounter", arg);
          return NULL;
        }

        static PyObject *t_AbstractBatchLSModel_setIterationsCounter(t_AbstractBatchLSModel *self, PyObject *arg)
        {
          ::org::hipparchus::util::Incrementor a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::util::Incrementor::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setIterationsCounter(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setIterationsCounter", arg);
          return NULL;
        }

        static PyObject *t_AbstractBatchLSModel_value(t_AbstractBatchLSModel *self, PyObject *arg)
        {
          ::org::hipparchus::linear::RealVector a0((jobject) NULL);
          ::org::hipparchus::util::Pair result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.value(a0));
            return ::org::hipparchus::util::t_Pair::wrap_Object(result, ::org::hipparchus::linear::PY_TYPE(RealVector), ::org::hipparchus::linear::PY_TYPE(RealMatrix));
          }

          PyErr_SetArgsError((PyObject *) self, "value", arg);
          return NULL;
        }

        static PyObject *t_AbstractBatchLSModel_get__evaluationsCount(t_AbstractBatchLSModel *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluationsCount());
          return PyLong_FromLong((long) value);
        }

        static int t_AbstractBatchLSModel_set__evaluationsCounter(t_AbstractBatchLSModel *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::util::Incrementor value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::util::Incrementor::initializeClass, &value))
            {
              INT_CALL(self->object.setEvaluationsCounter(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "evaluationsCounter", arg);
          return -1;
        }

        static PyObject *t_AbstractBatchLSModel_get__forwardPropagation(t_AbstractBatchLSModel *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForwardPropagation());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractBatchLSModel_get__iterationsCount(t_AbstractBatchLSModel *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getIterationsCount());
          return PyLong_FromLong((long) value);
        }

        static int t_AbstractBatchLSModel_set__iterationsCounter(t_AbstractBatchLSModel *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::util::Incrementor value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::util::Incrementor::initializeClass, &value))
            {
              INT_CALL(self->object.setIterationsCounter(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "iterationsCounter", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *RtcmCorrectionData::class$ = NULL;
              jmethodID *RtcmCorrectionData::mids$ = NULL;
              bool RtcmCorrectionData::live$ = false;

              jclass RtcmCorrectionData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getSatelliteID_570ce0828f81a2c1] = env->getMethodID(cls, "getSatelliteID", "()I");
                  mids$[mid_setSatelliteID_99803b0791f320ff] = env->getMethodID(cls, "setSatelliteID", "(I)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              RtcmCorrectionData::RtcmCorrectionData() : ::org::orekit::gnss::metric::messages::rtcm::RtcmData(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              jint RtcmCorrectionData::getSatelliteID() const
              {
                return env->callIntMethod(this$, mids$[mid_getSatelliteID_570ce0828f81a2c1]);
              }

              void RtcmCorrectionData::setSatelliteID(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSatelliteID_99803b0791f320ff], a0);
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
            namespace correction {
              static PyObject *t_RtcmCorrectionData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmCorrectionData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_RtcmCorrectionData_init_(t_RtcmCorrectionData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_RtcmCorrectionData_getSatelliteID(t_RtcmCorrectionData *self);
              static PyObject *t_RtcmCorrectionData_setSatelliteID(t_RtcmCorrectionData *self, PyObject *arg);
              static PyObject *t_RtcmCorrectionData_get__satelliteID(t_RtcmCorrectionData *self, void *data);
              static int t_RtcmCorrectionData_set__satelliteID(t_RtcmCorrectionData *self, PyObject *arg, void *data);
              static PyGetSetDef t_RtcmCorrectionData__fields_[] = {
                DECLARE_GETSET_FIELD(t_RtcmCorrectionData, satelliteID),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RtcmCorrectionData__methods_[] = {
                DECLARE_METHOD(t_RtcmCorrectionData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmCorrectionData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmCorrectionData, getSatelliteID, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionData, setSatelliteID, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RtcmCorrectionData)[] = {
                { Py_tp_methods, t_RtcmCorrectionData__methods_ },
                { Py_tp_init, (void *) t_RtcmCorrectionData_init_ },
                { Py_tp_getset, t_RtcmCorrectionData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RtcmCorrectionData)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::RtcmData),
                NULL
              };

              DEFINE_TYPE(RtcmCorrectionData, t_RtcmCorrectionData, RtcmCorrectionData);

              void t_RtcmCorrectionData::install(PyObject *module)
              {
                installType(&PY_TYPE(RtcmCorrectionData), &PY_TYPE_DEF(RtcmCorrectionData), module, "RtcmCorrectionData", 0);
              }

              void t_RtcmCorrectionData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCorrectionData), "class_", make_descriptor(RtcmCorrectionData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCorrectionData), "wrapfn_", make_descriptor(t_RtcmCorrectionData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCorrectionData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_RtcmCorrectionData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RtcmCorrectionData::initializeClass, 1)))
                  return NULL;
                return t_RtcmCorrectionData::wrap_Object(RtcmCorrectionData(((t_RtcmCorrectionData *) arg)->object.this$));
              }
              static PyObject *t_RtcmCorrectionData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RtcmCorrectionData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_RtcmCorrectionData_init_(t_RtcmCorrectionData *self, PyObject *args, PyObject *kwds)
              {
                RtcmCorrectionData object((jobject) NULL);

                INT_CALL(object = RtcmCorrectionData());
                self->object = object;

                return 0;
              }

              static PyObject *t_RtcmCorrectionData_getSatelliteID(t_RtcmCorrectionData *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSatelliteID());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmCorrectionData_setSatelliteID(t_RtcmCorrectionData *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setSatelliteID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSatelliteID", arg);
                return NULL;
              }

              static PyObject *t_RtcmCorrectionData_get__satelliteID(t_RtcmCorrectionData *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSatelliteID());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmCorrectionData_set__satelliteID(t_RtcmCorrectionData *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setSatelliteID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "satelliteID", arg);
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
#include "org/orekit/estimation/sequential/SemiAnalyticalKalmanEstimatorBuilder.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalKalmanEstimator.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalKalmanEstimatorBuilder.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/conversion/DSSTPropagatorBuilder.h"
#include "org/orekit/estimation/sequential/CovarianceMatrixProvider.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *SemiAnalyticalKalmanEstimatorBuilder::class$ = NULL;
        jmethodID *SemiAnalyticalKalmanEstimatorBuilder::mids$ = NULL;
        bool SemiAnalyticalKalmanEstimatorBuilder::live$ = false;

        jclass SemiAnalyticalKalmanEstimatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/SemiAnalyticalKalmanEstimatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addPropagationConfiguration_796471e986ca1c14] = env->getMethodID(cls, "addPropagationConfiguration", "(Lorg/orekit/propagation/conversion/DSSTPropagatorBuilder;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)Lorg/orekit/estimation/sequential/SemiAnalyticalKalmanEstimatorBuilder;");
            mids$[mid_build_0a252603a3d25efa] = env->getMethodID(cls, "build", "()Lorg/orekit/estimation/sequential/SemiAnalyticalKalmanEstimator;");
            mids$[mid_decomposer_c8db4b68fd9ed991] = env->getMethodID(cls, "decomposer", "(Lorg/hipparchus/linear/MatrixDecomposer;)Lorg/orekit/estimation/sequential/SemiAnalyticalKalmanEstimatorBuilder;");
            mids$[mid_estimatedMeasurementsParameters_217f0bbd89c92250] = env->getMethodID(cls, "estimatedMeasurementsParameters", "(Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)Lorg/orekit/estimation/sequential/SemiAnalyticalKalmanEstimatorBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SemiAnalyticalKalmanEstimatorBuilder::SemiAnalyticalKalmanEstimatorBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        SemiAnalyticalKalmanEstimatorBuilder SemiAnalyticalKalmanEstimatorBuilder::addPropagationConfiguration(const ::org::orekit::propagation::conversion::DSSTPropagatorBuilder & a0, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a1) const
        {
          return SemiAnalyticalKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_addPropagationConfiguration_796471e986ca1c14], a0.this$, a1.this$));
        }

        ::org::orekit::estimation::sequential::SemiAnalyticalKalmanEstimator SemiAnalyticalKalmanEstimatorBuilder::build() const
        {
          return ::org::orekit::estimation::sequential::SemiAnalyticalKalmanEstimator(env->callObjectMethod(this$, mids$[mid_build_0a252603a3d25efa]));
        }

        SemiAnalyticalKalmanEstimatorBuilder SemiAnalyticalKalmanEstimatorBuilder::decomposer(const ::org::hipparchus::linear::MatrixDecomposer & a0) const
        {
          return SemiAnalyticalKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_decomposer_c8db4b68fd9ed991], a0.this$));
        }

        SemiAnalyticalKalmanEstimatorBuilder SemiAnalyticalKalmanEstimatorBuilder::estimatedMeasurementsParameters(const ::org::orekit::utils::ParameterDriversList & a0, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a1) const
        {
          return SemiAnalyticalKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_estimatedMeasurementsParameters_217f0bbd89c92250], a0.this$, a1.this$));
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
        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SemiAnalyticalKalmanEstimatorBuilder_init_(t_SemiAnalyticalKalmanEstimatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_addPropagationConfiguration(t_SemiAnalyticalKalmanEstimatorBuilder *self, PyObject *args);
        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_build(t_SemiAnalyticalKalmanEstimatorBuilder *self);
        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_decomposer(t_SemiAnalyticalKalmanEstimatorBuilder *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_estimatedMeasurementsParameters(t_SemiAnalyticalKalmanEstimatorBuilder *self, PyObject *args);

        static PyMethodDef t_SemiAnalyticalKalmanEstimatorBuilder__methods_[] = {
          DECLARE_METHOD(t_SemiAnalyticalKalmanEstimatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanEstimatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanEstimatorBuilder, addPropagationConfiguration, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanEstimatorBuilder, build, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalKalmanEstimatorBuilder, decomposer, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalKalmanEstimatorBuilder, estimatedMeasurementsParameters, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SemiAnalyticalKalmanEstimatorBuilder)[] = {
          { Py_tp_methods, t_SemiAnalyticalKalmanEstimatorBuilder__methods_ },
          { Py_tp_init, (void *) t_SemiAnalyticalKalmanEstimatorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SemiAnalyticalKalmanEstimatorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SemiAnalyticalKalmanEstimatorBuilder, t_SemiAnalyticalKalmanEstimatorBuilder, SemiAnalyticalKalmanEstimatorBuilder);

        void t_SemiAnalyticalKalmanEstimatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(SemiAnalyticalKalmanEstimatorBuilder), &PY_TYPE_DEF(SemiAnalyticalKalmanEstimatorBuilder), module, "SemiAnalyticalKalmanEstimatorBuilder", 0);
        }

        void t_SemiAnalyticalKalmanEstimatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalKalmanEstimatorBuilder), "class_", make_descriptor(SemiAnalyticalKalmanEstimatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalKalmanEstimatorBuilder), "wrapfn_", make_descriptor(t_SemiAnalyticalKalmanEstimatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalKalmanEstimatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SemiAnalyticalKalmanEstimatorBuilder::initializeClass, 1)))
            return NULL;
          return t_SemiAnalyticalKalmanEstimatorBuilder::wrap_Object(SemiAnalyticalKalmanEstimatorBuilder(((t_SemiAnalyticalKalmanEstimatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SemiAnalyticalKalmanEstimatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SemiAnalyticalKalmanEstimatorBuilder_init_(t_SemiAnalyticalKalmanEstimatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          SemiAnalyticalKalmanEstimatorBuilder object((jobject) NULL);

          INT_CALL(object = SemiAnalyticalKalmanEstimatorBuilder());
          self->object = object;

          return 0;
        }

        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_addPropagationConfiguration(t_SemiAnalyticalKalmanEstimatorBuilder *self, PyObject *args)
        {
          ::org::orekit::propagation::conversion::DSSTPropagatorBuilder a0((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a1((jobject) NULL);
          SemiAnalyticalKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::conversion::DSSTPropagatorBuilder::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.addPropagationConfiguration(a0, a1));
            return t_SemiAnalyticalKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "addPropagationConfiguration", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_build(t_SemiAnalyticalKalmanEstimatorBuilder *self)
        {
          ::org::orekit::estimation::sequential::SemiAnalyticalKalmanEstimator result((jobject) NULL);
          OBJ_CALL(result = self->object.build());
          return ::org::orekit::estimation::sequential::t_SemiAnalyticalKalmanEstimator::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_decomposer(t_SemiAnalyticalKalmanEstimatorBuilder *self, PyObject *arg)
        {
          ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
          SemiAnalyticalKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.decomposer(a0));
            return t_SemiAnalyticalKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "decomposer", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalKalmanEstimatorBuilder_estimatedMeasurementsParameters(t_SemiAnalyticalKalmanEstimatorBuilder *self, PyObject *args)
        {
          ::org::orekit::utils::ParameterDriversList a0((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a1((jobject) NULL);
          SemiAnalyticalKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.estimatedMeasurementsParameters(a0, a1));
            return t_SemiAnalyticalKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "estimatedMeasurementsParameters", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalParametersWriter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *AdditionalParametersWriter::class$ = NULL;
            jmethodID *AdditionalParametersWriter::mids$ = NULL;
            bool AdditionalParametersWriter::live$ = false;

            jclass AdditionalParametersWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/AdditionalParametersWriter");

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
            static PyObject *t_AdditionalParametersWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdditionalParametersWriter_instance_(PyTypeObject *type, PyObject *arg);

            static PyMethodDef t_AdditionalParametersWriter__methods_[] = {
              DECLARE_METHOD(t_AdditionalParametersWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdditionalParametersWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdditionalParametersWriter)[] = {
              { Py_tp_methods, t_AdditionalParametersWriter__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdditionalParametersWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(AdditionalParametersWriter, t_AdditionalParametersWriter, AdditionalParametersWriter);

            void t_AdditionalParametersWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(AdditionalParametersWriter), &PY_TYPE_DEF(AdditionalParametersWriter), module, "AdditionalParametersWriter", 0);
            }

            void t_AdditionalParametersWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersWriter), "class_", make_descriptor(AdditionalParametersWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersWriter), "wrapfn_", make_descriptor(t_AdditionalParametersWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AdditionalParametersWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdditionalParametersWriter::initializeClass, 1)))
                return NULL;
              return t_AdditionalParametersWriter::wrap_Object(AdditionalParametersWriter(((t_AdditionalParametersWriter *) arg)->object.this$));
            }
            static PyObject *t_AdditionalParametersWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdditionalParametersWriter::initializeClass, 0))
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
#include "org/orekit/propagation/conversion/EulerFieldIntegratorBuilder.h"
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

        ::java::lang::Class *EulerFieldIntegratorBuilder::class$ = NULL;
        jmethodID *EulerFieldIntegratorBuilder::mids$ = NULL;
        bool EulerFieldIntegratorBuilder::live$ = false;

        jclass EulerFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/EulerFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_072c8635f2164db9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_buildIntegrator_048f7039a7622a2b] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EulerFieldIntegratorBuilder::EulerFieldIntegratorBuilder(jdouble a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        EulerFieldIntegratorBuilder::EulerFieldIntegratorBuilder(const ::org::hipparchus::CalculusFieldElement & a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_072c8635f2164db9, a0.this$)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator EulerFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
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
        static PyObject *t_EulerFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EulerFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EulerFieldIntegratorBuilder_of_(t_EulerFieldIntegratorBuilder *self, PyObject *args);
        static int t_EulerFieldIntegratorBuilder_init_(t_EulerFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EulerFieldIntegratorBuilder_buildIntegrator(t_EulerFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_EulerFieldIntegratorBuilder_get__parameters_(t_EulerFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_EulerFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_EulerFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EulerFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_EulerFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EulerFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EulerFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_EulerFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EulerFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_EulerFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_EulerFieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_EulerFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EulerFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(EulerFieldIntegratorBuilder, t_EulerFieldIntegratorBuilder, EulerFieldIntegratorBuilder);
        PyObject *t_EulerFieldIntegratorBuilder::wrap_Object(const EulerFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EulerFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EulerFieldIntegratorBuilder *self = (t_EulerFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EulerFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EulerFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EulerFieldIntegratorBuilder *self = (t_EulerFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EulerFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(EulerFieldIntegratorBuilder), &PY_TYPE_DEF(EulerFieldIntegratorBuilder), module, "EulerFieldIntegratorBuilder", 0);
        }

        void t_EulerFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerFieldIntegratorBuilder), "class_", make_descriptor(EulerFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_EulerFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EulerFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EulerFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_EulerFieldIntegratorBuilder::wrap_Object(EulerFieldIntegratorBuilder(((t_EulerFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_EulerFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EulerFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EulerFieldIntegratorBuilder_of_(t_EulerFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EulerFieldIntegratorBuilder_init_(t_EulerFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              EulerFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = EulerFieldIntegratorBuilder(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              EulerFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = EulerFieldIntegratorBuilder(a0));
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

        static PyObject *t_EulerFieldIntegratorBuilder_buildIntegrator(t_EulerFieldIntegratorBuilder *self, PyObject *args)
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

          return callSuper(PY_TYPE(EulerFieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_EulerFieldIntegratorBuilder_get__parameters_(t_EulerFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/EclipseDetector.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/utils/OccultationEngine.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EclipseDetector.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EclipseDetector::class$ = NULL;
        jmethodID *EclipseDetector::mids$ = NULL;
        bool EclipseDetector::live$ = false;

        jclass EclipseDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EclipseDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e2f8d857b11c9024] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/OccultationEngine;)V");
            mids$[mid_init$_1718479cc62dba49] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/ExtendedPVCoordinatesProvider;DLorg/orekit/bodies/OneAxisEllipsoid;)V");
            mids$[mid_g_432f3d328c15ec82] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getMargin_dff5885c2c873297] = env->getMethodID(cls, "getMargin", "()D");
            mids$[mid_getOccultationEngine_a79c04d8e5243995] = env->getMethodID(cls, "getOccultationEngine", "()Lorg/orekit/utils/OccultationEngine;");
            mids$[mid_getTotalEclipse_b108b35ef48e27bd] = env->getMethodID(cls, "getTotalEclipse", "()Z");
            mids$[mid_withMargin_7ac491b8edb69a1e] = env->getMethodID(cls, "withMargin", "(D)Lorg/orekit/propagation/events/EclipseDetector;");
            mids$[mid_withPenumbra_6b92ae008e2e8637] = env->getMethodID(cls, "withPenumbra", "()Lorg/orekit/propagation/events/EclipseDetector;");
            mids$[mid_withUmbra_6b92ae008e2e8637] = env->getMethodID(cls, "withUmbra", "()Lorg/orekit/propagation/events/EclipseDetector;");
            mids$[mid_create_0007ba63619445b3] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/EclipseDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EclipseDetector::EclipseDetector(const ::org::orekit::utils::OccultationEngine & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_e2f8d857b11c9024, a0.this$)) {}

        EclipseDetector::EclipseDetector(const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a0, jdouble a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_1718479cc62dba49, a0.this$, a1, a2.this$)) {}

        jdouble EclipseDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_432f3d328c15ec82], a0.this$);
        }

        jdouble EclipseDetector::getMargin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMargin_dff5885c2c873297]);
        }

        ::org::orekit::utils::OccultationEngine EclipseDetector::getOccultationEngine() const
        {
          return ::org::orekit::utils::OccultationEngine(env->callObjectMethod(this$, mids$[mid_getOccultationEngine_a79c04d8e5243995]));
        }

        jboolean EclipseDetector::getTotalEclipse() const
        {
          return env->callBooleanMethod(this$, mids$[mid_getTotalEclipse_b108b35ef48e27bd]);
        }

        EclipseDetector EclipseDetector::withMargin(jdouble a0) const
        {
          return EclipseDetector(env->callObjectMethod(this$, mids$[mid_withMargin_7ac491b8edb69a1e], a0));
        }

        EclipseDetector EclipseDetector::withPenumbra() const
        {
          return EclipseDetector(env->callObjectMethod(this$, mids$[mid_withPenumbra_6b92ae008e2e8637]));
        }

        EclipseDetector EclipseDetector::withUmbra() const
        {
          return EclipseDetector(env->callObjectMethod(this$, mids$[mid_withUmbra_6b92ae008e2e8637]));
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
        static PyObject *t_EclipseDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EclipseDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EclipseDetector_of_(t_EclipseDetector *self, PyObject *args);
        static int t_EclipseDetector_init_(t_EclipseDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EclipseDetector_g(t_EclipseDetector *self, PyObject *args);
        static PyObject *t_EclipseDetector_getMargin(t_EclipseDetector *self);
        static PyObject *t_EclipseDetector_getOccultationEngine(t_EclipseDetector *self);
        static PyObject *t_EclipseDetector_getTotalEclipse(t_EclipseDetector *self);
        static PyObject *t_EclipseDetector_withMargin(t_EclipseDetector *self, PyObject *arg);
        static PyObject *t_EclipseDetector_withPenumbra(t_EclipseDetector *self);
        static PyObject *t_EclipseDetector_withUmbra(t_EclipseDetector *self);
        static PyObject *t_EclipseDetector_get__margin(t_EclipseDetector *self, void *data);
        static PyObject *t_EclipseDetector_get__occultationEngine(t_EclipseDetector *self, void *data);
        static PyObject *t_EclipseDetector_get__totalEclipse(t_EclipseDetector *self, void *data);
        static PyObject *t_EclipseDetector_get__parameters_(t_EclipseDetector *self, void *data);
        static PyGetSetDef t_EclipseDetector__fields_[] = {
          DECLARE_GET_FIELD(t_EclipseDetector, margin),
          DECLARE_GET_FIELD(t_EclipseDetector, occultationEngine),
          DECLARE_GET_FIELD(t_EclipseDetector, totalEclipse),
          DECLARE_GET_FIELD(t_EclipseDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EclipseDetector__methods_[] = {
          DECLARE_METHOD(t_EclipseDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EclipseDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EclipseDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_EclipseDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_EclipseDetector, getMargin, METH_NOARGS),
          DECLARE_METHOD(t_EclipseDetector, getOccultationEngine, METH_NOARGS),
          DECLARE_METHOD(t_EclipseDetector, getTotalEclipse, METH_NOARGS),
          DECLARE_METHOD(t_EclipseDetector, withMargin, METH_O),
          DECLARE_METHOD(t_EclipseDetector, withPenumbra, METH_NOARGS),
          DECLARE_METHOD(t_EclipseDetector, withUmbra, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EclipseDetector)[] = {
          { Py_tp_methods, t_EclipseDetector__methods_ },
          { Py_tp_init, (void *) t_EclipseDetector_init_ },
          { Py_tp_getset, t_EclipseDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EclipseDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(EclipseDetector, t_EclipseDetector, EclipseDetector);
        PyObject *t_EclipseDetector::wrap_Object(const EclipseDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EclipseDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EclipseDetector *self = (t_EclipseDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EclipseDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EclipseDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EclipseDetector *self = (t_EclipseDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EclipseDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(EclipseDetector), &PY_TYPE_DEF(EclipseDetector), module, "EclipseDetector", 0);
        }

        void t_EclipseDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EclipseDetector), "class_", make_descriptor(EclipseDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EclipseDetector), "wrapfn_", make_descriptor(t_EclipseDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EclipseDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EclipseDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EclipseDetector::initializeClass, 1)))
            return NULL;
          return t_EclipseDetector::wrap_Object(EclipseDetector(((t_EclipseDetector *) arg)->object.this$));
        }
        static PyObject *t_EclipseDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EclipseDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EclipseDetector_of_(t_EclipseDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EclipseDetector_init_(t_EclipseDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::utils::OccultationEngine a0((jobject) NULL);
              EclipseDetector object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::utils::OccultationEngine::initializeClass, &a0))
              {
                INT_CALL(object = EclipseDetector(a0));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(EclipseDetector);
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::orekit::utils::ExtendedPVCoordinatesProvider a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
              EclipseDetector object((jobject) NULL);

              if (!parseArgs(args, "kDk", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = EclipseDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(EclipseDetector);
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

        static PyObject *t_EclipseDetector_g(t_EclipseDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EclipseDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_EclipseDetector_getMargin(t_EclipseDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMargin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EclipseDetector_getOccultationEngine(t_EclipseDetector *self)
        {
          ::org::orekit::utils::OccultationEngine result((jobject) NULL);
          OBJ_CALL(result = self->object.getOccultationEngine());
          return ::org::orekit::utils::t_OccultationEngine::wrap_Object(result);
        }

        static PyObject *t_EclipseDetector_getTotalEclipse(t_EclipseDetector *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.getTotalEclipse());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_EclipseDetector_withMargin(t_EclipseDetector *self, PyObject *arg)
        {
          jdouble a0;
          EclipseDetector result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.withMargin(a0));
            return t_EclipseDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withMargin", arg);
          return NULL;
        }

        static PyObject *t_EclipseDetector_withPenumbra(t_EclipseDetector *self)
        {
          EclipseDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.withPenumbra());
          return t_EclipseDetector::wrap_Object(result);
        }

        static PyObject *t_EclipseDetector_withUmbra(t_EclipseDetector *self)
        {
          EclipseDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.withUmbra());
          return t_EclipseDetector::wrap_Object(result);
        }
        static PyObject *t_EclipseDetector_get__parameters_(t_EclipseDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EclipseDetector_get__margin(t_EclipseDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMargin());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EclipseDetector_get__occultationEngine(t_EclipseDetector *self, void *data)
        {
          ::org::orekit::utils::OccultationEngine value((jobject) NULL);
          OBJ_CALL(value = self->object.getOccultationEngine());
          return ::org::orekit::utils::t_OccultationEngine::wrap_Object(value);
        }

        static PyObject *t_EclipseDetector_get__totalEclipse(t_EclipseDetector *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.getTotalEclipse());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/SlewingPanel.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {

      ::java::lang::Class *SlewingPanel::class$ = NULL;
      jmethodID *SlewingPanel::mids$ = NULL;
      bool SlewingPanel::live$ = false;

      jclass SlewingPanel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/forces/SlewingPanel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_1a125af387d435b2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DDDDD)V");
          mids$[mid_getNormal_e6f00ace1decd27c] = env->getMethodID(cls, "getNormal", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getNormal_abc43395638fd218] = env->getMethodID(cls, "getNormal", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SlewingPanel::SlewingPanel(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::org::orekit::forces::Panel(env->newObject(initializeClass, &mids$, mid_init$_1a125af387d435b2, a0.this$, a1, a2.this$, a3.this$, a4, a5, a6, a7, a8)) {}

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D SlewingPanel::getNormal(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getNormal_e6f00ace1decd27c], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D SlewingPanel::getNormal(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNormal_abc43395638fd218], a0.this$));
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
      static PyObject *t_SlewingPanel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SlewingPanel_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SlewingPanel_init_(t_SlewingPanel *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SlewingPanel_getNormal(t_SlewingPanel *self, PyObject *args);

      static PyMethodDef t_SlewingPanel__methods_[] = {
        DECLARE_METHOD(t_SlewingPanel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SlewingPanel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SlewingPanel, getNormal, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SlewingPanel)[] = {
        { Py_tp_methods, t_SlewingPanel__methods_ },
        { Py_tp_init, (void *) t_SlewingPanel_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SlewingPanel)[] = {
        &PY_TYPE_DEF(::org::orekit::forces::Panel),
        NULL
      };

      DEFINE_TYPE(SlewingPanel, t_SlewingPanel, SlewingPanel);

      void t_SlewingPanel::install(PyObject *module)
      {
        installType(&PY_TYPE(SlewingPanel), &PY_TYPE_DEF(SlewingPanel), module, "SlewingPanel", 0);
      }

      void t_SlewingPanel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SlewingPanel), "class_", make_descriptor(SlewingPanel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SlewingPanel), "wrapfn_", make_descriptor(t_SlewingPanel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SlewingPanel), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SlewingPanel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SlewingPanel::initializeClass, 1)))
          return NULL;
        return t_SlewingPanel::wrap_Object(SlewingPanel(((t_SlewingPanel *) arg)->object.this$));
      }
      static PyObject *t_SlewingPanel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SlewingPanel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SlewingPanel_init_(t_SlewingPanel *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
        jdouble a1;
        ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
        jdouble a4;
        jdouble a5;
        jdouble a6;
        jdouble a7;
        jdouble a8;
        SlewingPanel object((jobject) NULL);

        if (!parseArgs(args, "kDkkDDDDD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
        {
          INT_CALL(object = SlewingPanel(a0, a1, a2, a3, a4, a5, a6, a7, a8));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SlewingPanel_getNormal(t_SlewingPanel *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
            {
              OBJ_CALL(result = self->object.getNormal(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNormal(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(SlewingPanel), (PyObject *) self, "getNormal", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/CR3BPSystem.h"
#include "org/orekit/utils/LagrangianPoints.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/AbsolutePVCoordinates.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/String.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *CR3BPSystem::class$ = NULL;
      jmethodID *CR3BPSystem::mids$ = NULL;
      bool CR3BPSystem::live$ = false;

      jclass CR3BPSystem::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/CR3BPSystem");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d11347034ed276da] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;Lorg/orekit/bodies/CelestialBody;D)V");
          mids$[mid_init$_6d86c9a7f988a510] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;Lorg/orekit/bodies/CelestialBody;DD)V");
          mids$[mid_getDdim_dff5885c2c873297] = env->getMethodID(cls, "getDdim", "()D");
          mids$[mid_getGamma_a6014739f6940e4d] = env->getMethodID(cls, "getGamma", "(Lorg/orekit/utils/LagrangianPoints;)D");
          mids$[mid_getLPosition_acea59134d6f8e06] = env->getMethodID(cls, "getLPosition", "(Lorg/orekit/utils/LagrangianPoints;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getMassRatio_dff5885c2c873297] = env->getMethodID(cls, "getMassRatio", "()D");
          mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getPrimary_624686a38a6b107c] = env->getMethodID(cls, "getPrimary", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getRealAPV_3e18b13cf889f713] = env->getMethodID(cls, "getRealAPV", "(Lorg/orekit/utils/AbsolutePVCoordinates;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/AbsolutePVCoordinates;");
          mids$[mid_getRotatingFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getRotatingFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getSecondary_624686a38a6b107c] = env->getMethodID(cls, "getSecondary", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getTdim_dff5885c2c873297] = env->getMethodID(cls, "getTdim", "()D");
          mids$[mid_getVdim_dff5885c2c873297] = env->getMethodID(cls, "getVdim", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CR3BPSystem::CR3BPSystem(const ::org::orekit::bodies::CelestialBody & a0, const ::org::orekit::bodies::CelestialBody & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d11347034ed276da, a0.this$, a1.this$, a2)) {}

      CR3BPSystem::CR3BPSystem(const ::org::orekit::bodies::CelestialBody & a0, const ::org::orekit::bodies::CelestialBody & a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6d86c9a7f988a510, a0.this$, a1.this$, a2, a3)) {}

      jdouble CR3BPSystem::getDdim() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDdim_dff5885c2c873297]);
      }

      jdouble CR3BPSystem::getGamma(const ::org::orekit::utils::LagrangianPoints & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getGamma_a6014739f6940e4d], a0.this$);
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D CR3BPSystem::getLPosition(const ::org::orekit::utils::LagrangianPoints & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getLPosition_acea59134d6f8e06], a0.this$));
      }

      jdouble CR3BPSystem::getMassRatio() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMassRatio_dff5885c2c873297]);
      }

      ::java::lang::String CR3BPSystem::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
      }

      ::org::orekit::bodies::CelestialBody CR3BPSystem::getPrimary() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getPrimary_624686a38a6b107c]));
      }

      ::org::orekit::utils::AbsolutePVCoordinates CR3BPSystem::getRealAPV(const ::org::orekit::utils::AbsolutePVCoordinates & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::AbsolutePVCoordinates(env->callObjectMethod(this$, mids$[mid_getRealAPV_3e18b13cf889f713], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::frames::Frame CR3BPSystem::getRotatingFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getRotatingFrame_b86f9f61d97a7244]));
      }

      ::org::orekit::bodies::CelestialBody CR3BPSystem::getSecondary() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getSecondary_624686a38a6b107c]));
      }

      jdouble CR3BPSystem::getTdim() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getTdim_dff5885c2c873297]);
      }

      jdouble CR3BPSystem::getVdim() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getVdim_dff5885c2c873297]);
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
      static PyObject *t_CR3BPSystem_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CR3BPSystem_instance_(PyTypeObject *type, PyObject *arg);
      static int t_CR3BPSystem_init_(t_CR3BPSystem *self, PyObject *args, PyObject *kwds);
      static PyObject *t_CR3BPSystem_getDdim(t_CR3BPSystem *self);
      static PyObject *t_CR3BPSystem_getGamma(t_CR3BPSystem *self, PyObject *arg);
      static PyObject *t_CR3BPSystem_getLPosition(t_CR3BPSystem *self, PyObject *arg);
      static PyObject *t_CR3BPSystem_getMassRatio(t_CR3BPSystem *self);
      static PyObject *t_CR3BPSystem_getName(t_CR3BPSystem *self);
      static PyObject *t_CR3BPSystem_getPrimary(t_CR3BPSystem *self);
      static PyObject *t_CR3BPSystem_getRealAPV(t_CR3BPSystem *self, PyObject *args);
      static PyObject *t_CR3BPSystem_getRotatingFrame(t_CR3BPSystem *self);
      static PyObject *t_CR3BPSystem_getSecondary(t_CR3BPSystem *self);
      static PyObject *t_CR3BPSystem_getTdim(t_CR3BPSystem *self);
      static PyObject *t_CR3BPSystem_getVdim(t_CR3BPSystem *self);
      static PyObject *t_CR3BPSystem_get__ddim(t_CR3BPSystem *self, void *data);
      static PyObject *t_CR3BPSystem_get__massRatio(t_CR3BPSystem *self, void *data);
      static PyObject *t_CR3BPSystem_get__name(t_CR3BPSystem *self, void *data);
      static PyObject *t_CR3BPSystem_get__primary(t_CR3BPSystem *self, void *data);
      static PyObject *t_CR3BPSystem_get__rotatingFrame(t_CR3BPSystem *self, void *data);
      static PyObject *t_CR3BPSystem_get__secondary(t_CR3BPSystem *self, void *data);
      static PyObject *t_CR3BPSystem_get__tdim(t_CR3BPSystem *self, void *data);
      static PyObject *t_CR3BPSystem_get__vdim(t_CR3BPSystem *self, void *data);
      static PyGetSetDef t_CR3BPSystem__fields_[] = {
        DECLARE_GET_FIELD(t_CR3BPSystem, ddim),
        DECLARE_GET_FIELD(t_CR3BPSystem, massRatio),
        DECLARE_GET_FIELD(t_CR3BPSystem, name),
        DECLARE_GET_FIELD(t_CR3BPSystem, primary),
        DECLARE_GET_FIELD(t_CR3BPSystem, rotatingFrame),
        DECLARE_GET_FIELD(t_CR3BPSystem, secondary),
        DECLARE_GET_FIELD(t_CR3BPSystem, tdim),
        DECLARE_GET_FIELD(t_CR3BPSystem, vdim),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CR3BPSystem__methods_[] = {
        DECLARE_METHOD(t_CR3BPSystem, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CR3BPSystem, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CR3BPSystem, getDdim, METH_NOARGS),
        DECLARE_METHOD(t_CR3BPSystem, getGamma, METH_O),
        DECLARE_METHOD(t_CR3BPSystem, getLPosition, METH_O),
        DECLARE_METHOD(t_CR3BPSystem, getMassRatio, METH_NOARGS),
        DECLARE_METHOD(t_CR3BPSystem, getName, METH_NOARGS),
        DECLARE_METHOD(t_CR3BPSystem, getPrimary, METH_NOARGS),
        DECLARE_METHOD(t_CR3BPSystem, getRealAPV, METH_VARARGS),
        DECLARE_METHOD(t_CR3BPSystem, getRotatingFrame, METH_NOARGS),
        DECLARE_METHOD(t_CR3BPSystem, getSecondary, METH_NOARGS),
        DECLARE_METHOD(t_CR3BPSystem, getTdim, METH_NOARGS),
        DECLARE_METHOD(t_CR3BPSystem, getVdim, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CR3BPSystem)[] = {
        { Py_tp_methods, t_CR3BPSystem__methods_ },
        { Py_tp_init, (void *) t_CR3BPSystem_init_ },
        { Py_tp_getset, t_CR3BPSystem__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CR3BPSystem)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CR3BPSystem, t_CR3BPSystem, CR3BPSystem);

      void t_CR3BPSystem::install(PyObject *module)
      {
        installType(&PY_TYPE(CR3BPSystem), &PY_TYPE_DEF(CR3BPSystem), module, "CR3BPSystem", 0);
      }

      void t_CR3BPSystem::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPSystem), "class_", make_descriptor(CR3BPSystem::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPSystem), "wrapfn_", make_descriptor(t_CR3BPSystem::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPSystem), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CR3BPSystem_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CR3BPSystem::initializeClass, 1)))
          return NULL;
        return t_CR3BPSystem::wrap_Object(CR3BPSystem(((t_CR3BPSystem *) arg)->object.this$));
      }
      static PyObject *t_CR3BPSystem_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CR3BPSystem::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_CR3BPSystem_init_(t_CR3BPSystem *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
            ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
            jdouble a2;
            CR3BPSystem object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = CR3BPSystem(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
            ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
            jdouble a2;
            jdouble a3;
            CR3BPSystem object((jobject) NULL);

            if (!parseArgs(args, "kkDD", ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = CR3BPSystem(a0, a1, a2, a3));
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

      static PyObject *t_CR3BPSystem_getDdim(t_CR3BPSystem *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDdim());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CR3BPSystem_getGamma(t_CR3BPSystem *self, PyObject *arg)
      {
        ::org::orekit::utils::LagrangianPoints a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::org::orekit::utils::LagrangianPoints::initializeClass, &a0, &p0, ::org::orekit::utils::t_LagrangianPoints::parameters_))
        {
          OBJ_CALL(result = self->object.getGamma(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getGamma", arg);
        return NULL;
      }

      static PyObject *t_CR3BPSystem_getLPosition(t_CR3BPSystem *self, PyObject *arg)
      {
        ::org::orekit::utils::LagrangianPoints a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::utils::LagrangianPoints::initializeClass, &a0, &p0, ::org::orekit::utils::t_LagrangianPoints::parameters_))
        {
          OBJ_CALL(result = self->object.getLPosition(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLPosition", arg);
        return NULL;
      }

      static PyObject *t_CR3BPSystem_getMassRatio(t_CR3BPSystem *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMassRatio());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CR3BPSystem_getName(t_CR3BPSystem *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_CR3BPSystem_getPrimary(t_CR3BPSystem *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrimary());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CR3BPSystem_getRealAPV(t_CR3BPSystem *self, PyObject *args)
      {
        ::org::orekit::utils::AbsolutePVCoordinates a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::org::orekit::frames::Frame a2((jobject) NULL);
        ::org::orekit::utils::AbsolutePVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::orekit::utils::AbsolutePVCoordinates::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.getRealAPV(a0, a1, a2));
          return ::org::orekit::utils::t_AbsolutePVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getRealAPV", args);
        return NULL;
      }

      static PyObject *t_CR3BPSystem_getRotatingFrame(t_CR3BPSystem *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotatingFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_CR3BPSystem_getSecondary(t_CR3BPSystem *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getSecondary());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CR3BPSystem_getTdim(t_CR3BPSystem *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getTdim());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CR3BPSystem_getVdim(t_CR3BPSystem *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getVdim());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CR3BPSystem_get__ddim(t_CR3BPSystem *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDdim());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CR3BPSystem_get__massRatio(t_CR3BPSystem *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMassRatio());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CR3BPSystem_get__name(t_CR3BPSystem *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_CR3BPSystem_get__primary(t_CR3BPSystem *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrimary());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CR3BPSystem_get__rotatingFrame(t_CR3BPSystem *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotatingFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_CR3BPSystem_get__secondary(t_CR3BPSystem *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSecondary());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CR3BPSystem_get__tdim(t_CR3BPSystem *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getTdim());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CR3BPSystem_get__vdim(t_CR3BPSystem *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getVdim());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/leastsquares/PythonModelObserver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/util/Map.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
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
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_modelCalled_098d286a550578c0] = env->getMethodID(cls, "modelCalled", "([Lorg/orekit/orbits/Orbit;Ljava/util/Map;)V");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonModelObserver::PythonModelObserver() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonModelObserver::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonModelObserver::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonModelObserver::pythonExtension(jlong a0) const
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonModelObserver::mids$[PythonModelObserver::mid_pythonExtension_492808a339bfa35f]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonModelObserver::mids$[PythonModelObserver::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonModelObserver::mids$[PythonModelObserver::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
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
#include "org/orekit/time/AbstractTimeInterpolator$InterpolationData.h"
#include "org/orekit/utils/ImmutableTimeStampedCache.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *AbstractTimeInterpolator$InterpolationData::class$ = NULL;
      jmethodID *AbstractTimeInterpolator$InterpolationData::mids$ = NULL;
      bool AbstractTimeInterpolator$InterpolationData::live$ = false;

      jclass AbstractTimeInterpolator$InterpolationData::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/AbstractTimeInterpolator$InterpolationData");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getCachedSamples_6750a7a81e7b6495] = env->getMethodID(cls, "getCachedSamples", "()Lorg/orekit/utils/ImmutableTimeStampedCache;");
          mids$[mid_getInterpolationDate_85703d13e302437e] = env->getMethodID(cls, "getInterpolationDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getNeighborList_2afa36052df4765d] = env->getMethodID(cls, "getNeighborList", "()Ljava/util/List;");
          mids$[mid_getCentralDate_359d74440de34909] = env->getMethodID(cls, "getCentralDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/time/AbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::utils::ImmutableTimeStampedCache AbstractTimeInterpolator$InterpolationData::getCachedSamples() const
      {
        return ::org::orekit::utils::ImmutableTimeStampedCache(env->callObjectMethod(this$, mids$[mid_getCachedSamples_6750a7a81e7b6495]));
      }

      ::org::orekit::time::AbsoluteDate AbstractTimeInterpolator$InterpolationData::getInterpolationDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getInterpolationDate_85703d13e302437e]));
      }

      ::java::util::List AbstractTimeInterpolator$InterpolationData::getNeighborList() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getNeighborList_2afa36052df4765d]));
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
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_of_(t_AbstractTimeInterpolator$InterpolationData *self, PyObject *args);
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_getCachedSamples(t_AbstractTimeInterpolator$InterpolationData *self);
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_getInterpolationDate(t_AbstractTimeInterpolator$InterpolationData *self);
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_getNeighborList(t_AbstractTimeInterpolator$InterpolationData *self);
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_get__cachedSamples(t_AbstractTimeInterpolator$InterpolationData *self, void *data);
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_get__interpolationDate(t_AbstractTimeInterpolator$InterpolationData *self, void *data);
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_get__neighborList(t_AbstractTimeInterpolator$InterpolationData *self, void *data);
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_get__parameters_(t_AbstractTimeInterpolator$InterpolationData *self, void *data);
      static PyGetSetDef t_AbstractTimeInterpolator$InterpolationData__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractTimeInterpolator$InterpolationData, cachedSamples),
        DECLARE_GET_FIELD(t_AbstractTimeInterpolator$InterpolationData, interpolationDate),
        DECLARE_GET_FIELD(t_AbstractTimeInterpolator$InterpolationData, neighborList),
        DECLARE_GET_FIELD(t_AbstractTimeInterpolator$InterpolationData, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractTimeInterpolator$InterpolationData__methods_[] = {
        DECLARE_METHOD(t_AbstractTimeInterpolator$InterpolationData, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractTimeInterpolator$InterpolationData, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractTimeInterpolator$InterpolationData, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractTimeInterpolator$InterpolationData, getCachedSamples, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeInterpolator$InterpolationData, getInterpolationDate, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeInterpolator$InterpolationData, getNeighborList, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractTimeInterpolator$InterpolationData)[] = {
        { Py_tp_methods, t_AbstractTimeInterpolator$InterpolationData__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractTimeInterpolator$InterpolationData__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractTimeInterpolator$InterpolationData)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractTimeInterpolator$InterpolationData, t_AbstractTimeInterpolator$InterpolationData, AbstractTimeInterpolator$InterpolationData);
      PyObject *t_AbstractTimeInterpolator$InterpolationData::wrap_Object(const AbstractTimeInterpolator$InterpolationData& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractTimeInterpolator$InterpolationData::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractTimeInterpolator$InterpolationData *self = (t_AbstractTimeInterpolator$InterpolationData *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbstractTimeInterpolator$InterpolationData::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractTimeInterpolator$InterpolationData::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractTimeInterpolator$InterpolationData *self = (t_AbstractTimeInterpolator$InterpolationData *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbstractTimeInterpolator$InterpolationData::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractTimeInterpolator$InterpolationData), &PY_TYPE_DEF(AbstractTimeInterpolator$InterpolationData), module, "AbstractTimeInterpolator$InterpolationData", 0);
      }

      void t_AbstractTimeInterpolator$InterpolationData::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeInterpolator$InterpolationData), "class_", make_descriptor(AbstractTimeInterpolator$InterpolationData::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeInterpolator$InterpolationData), "wrapfn_", make_descriptor(t_AbstractTimeInterpolator$InterpolationData::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeInterpolator$InterpolationData), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractTimeInterpolator$InterpolationData_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractTimeInterpolator$InterpolationData::initializeClass, 1)))
          return NULL;
        return t_AbstractTimeInterpolator$InterpolationData::wrap_Object(AbstractTimeInterpolator$InterpolationData(((t_AbstractTimeInterpolator$InterpolationData *) arg)->object.this$));
      }
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractTimeInterpolator$InterpolationData::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractTimeInterpolator$InterpolationData_of_(t_AbstractTimeInterpolator$InterpolationData *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_AbstractTimeInterpolator$InterpolationData_getCachedSamples(t_AbstractTimeInterpolator$InterpolationData *self)
      {
        ::org::orekit::utils::ImmutableTimeStampedCache result((jobject) NULL);
        OBJ_CALL(result = self->object.getCachedSamples());
        return ::org::orekit::utils::t_ImmutableTimeStampedCache::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_AbstractTimeInterpolator$InterpolationData_getInterpolationDate(t_AbstractTimeInterpolator$InterpolationData *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getInterpolationDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeInterpolator$InterpolationData_getNeighborList(t_AbstractTimeInterpolator$InterpolationData *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getNeighborList());
        return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_AbstractTimeInterpolator$InterpolationData_get__parameters_(t_AbstractTimeInterpolator$InterpolationData *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractTimeInterpolator$InterpolationData_get__cachedSamples(t_AbstractTimeInterpolator$InterpolationData *self, void *data)
      {
        ::org::orekit::utils::ImmutableTimeStampedCache value((jobject) NULL);
        OBJ_CALL(value = self->object.getCachedSamples());
        return ::org::orekit::utils::t_ImmutableTimeStampedCache::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeInterpolator$InterpolationData_get__interpolationDate(t_AbstractTimeInterpolator$InterpolationData *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getInterpolationDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractTimeInterpolator$InterpolationData_get__neighborList(t_AbstractTimeInterpolator$InterpolationData *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getNeighborList());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/ObjectiveFunction.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          ::java::lang::Class *ObjectiveFunction::class$ = NULL;
          jmethodID *ObjectiveFunction::mids$ = NULL;
          bool ObjectiveFunction::live$ = false;

          jclass ObjectiveFunction::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/ObjectiveFunction");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a65ffe78808d336c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/MultivariateFunction;)V");
              mids$[mid_getObjectiveFunction_c98c22837f53cc6d] = env->getMethodID(cls, "getObjectiveFunction", "()Lorg/hipparchus/analysis/MultivariateFunction;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ObjectiveFunction::ObjectiveFunction(const ::org::hipparchus::analysis::MultivariateFunction & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a65ffe78808d336c, a0.this$)) {}

          ::org::hipparchus::analysis::MultivariateFunction ObjectiveFunction::getObjectiveFunction() const
          {
            return ::org::hipparchus::analysis::MultivariateFunction(env->callObjectMethod(this$, mids$[mid_getObjectiveFunction_c98c22837f53cc6d]));
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
          static PyObject *t_ObjectiveFunction_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ObjectiveFunction_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ObjectiveFunction_init_(t_ObjectiveFunction *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ObjectiveFunction_getObjectiveFunction(t_ObjectiveFunction *self);
          static PyObject *t_ObjectiveFunction_get__objectiveFunction(t_ObjectiveFunction *self, void *data);
          static PyGetSetDef t_ObjectiveFunction__fields_[] = {
            DECLARE_GET_FIELD(t_ObjectiveFunction, objectiveFunction),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ObjectiveFunction__methods_[] = {
            DECLARE_METHOD(t_ObjectiveFunction, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ObjectiveFunction, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ObjectiveFunction, getObjectiveFunction, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ObjectiveFunction)[] = {
            { Py_tp_methods, t_ObjectiveFunction__methods_ },
            { Py_tp_init, (void *) t_ObjectiveFunction_init_ },
            { Py_tp_getset, t_ObjectiveFunction__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ObjectiveFunction)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ObjectiveFunction, t_ObjectiveFunction, ObjectiveFunction);

          void t_ObjectiveFunction::install(PyObject *module)
          {
            installType(&PY_TYPE(ObjectiveFunction), &PY_TYPE_DEF(ObjectiveFunction), module, "ObjectiveFunction", 0);
          }

          void t_ObjectiveFunction::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectiveFunction), "class_", make_descriptor(ObjectiveFunction::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectiveFunction), "wrapfn_", make_descriptor(t_ObjectiveFunction::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectiveFunction), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ObjectiveFunction_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ObjectiveFunction::initializeClass, 1)))
              return NULL;
            return t_ObjectiveFunction::wrap_Object(ObjectiveFunction(((t_ObjectiveFunction *) arg)->object.this$));
          }
          static PyObject *t_ObjectiveFunction_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ObjectiveFunction::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ObjectiveFunction_init_(t_ObjectiveFunction *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::analysis::MultivariateFunction a0((jobject) NULL);
            ObjectiveFunction object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::analysis::MultivariateFunction::initializeClass, &a0))
            {
              INT_CALL(object = ObjectiveFunction(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ObjectiveFunction_getObjectiveFunction(t_ObjectiveFunction *self)
          {
            ::org::hipparchus::analysis::MultivariateFunction result((jobject) NULL);
            OBJ_CALL(result = self->object.getObjectiveFunction());
            return ::org::hipparchus::analysis::t_MultivariateFunction::wrap_Object(result);
          }

          static PyObject *t_ObjectiveFunction_get__objectiveFunction(t_ObjectiveFunction *self, void *data)
          {
            ::org::hipparchus::analysis::MultivariateFunction value((jobject) NULL);
            OBJ_CALL(value = self->object.getObjectiveFunction());
            return ::org::hipparchus::analysis::t_MultivariateFunction::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/stream/Stream.h"
#include "java/util/Comparator.h"
#include "java/util/function/Supplier.h"
#include "java/util/stream/Stream.h"
#include "java/util/Optional.h"
#include "java/lang/Class.h"
#include "java/util/stream/DoubleStream.h"
#include "JArray.h"

namespace java {
  namespace util {
    namespace stream {

      ::java::lang::Class *Stream::class$ = NULL;
      jmethodID *Stream::mids$ = NULL;
      bool Stream::live$ = false;

      jclass Stream::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("java/util/stream/Stream");

          mids$ = new jmethodID[max_mid];
          mids$[mid_concat_0b92fe9e9f9acef1] = env->getStaticMethodID(cls, "concat", "(Ljava/util/stream/Stream;Ljava/util/stream/Stream;)Ljava/util/stream/Stream;");
          mids$[mid_count_492808a339bfa35f] = env->getMethodID(cls, "count", "()J");
          mids$[mid_distinct_20f6d2b462aaef4b] = env->getMethodID(cls, "distinct", "()Ljava/util/stream/Stream;");
          mids$[mid_empty_20f6d2b462aaef4b] = env->getStaticMethodID(cls, "empty", "()Ljava/util/stream/Stream;");
          mids$[mid_findAny_c5e311a9e5531e7d] = env->getMethodID(cls, "findAny", "()Ljava/util/Optional;");
          mids$[mid_findFirst_c5e311a9e5531e7d] = env->getMethodID(cls, "findFirst", "()Ljava/util/Optional;");
          mids$[mid_generate_8be855f490d09fce] = env->getStaticMethodID(cls, "generate", "(Ljava/util/function/Supplier;)Ljava/util/stream/Stream;");
          mids$[mid_limit_e15865d9d042e9f4] = env->getMethodID(cls, "limit", "(J)Ljava/util/stream/Stream;");
          mids$[mid_max_d7a4493c96ea432e] = env->getMethodID(cls, "max", "(Ljava/util/Comparator;)Ljava/util/Optional;");
          mids$[mid_min_d7a4493c96ea432e] = env->getMethodID(cls, "min", "(Ljava/util/Comparator;)Ljava/util/Optional;");
          mids$[mid_of_fcdf5e804d048ff5] = env->getStaticMethodID(cls, "of", "([Ljava/lang/Object;)Ljava/util/stream/Stream;");
          mids$[mid_of_5ec77a47066bac4a] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;)Ljava/util/stream/Stream;");
          mids$[mid_ofNullable_5ec77a47066bac4a] = env->getStaticMethodID(cls, "ofNullable", "(Ljava/lang/Object;)Ljava/util/stream/Stream;");
          mids$[mid_skip_e15865d9d042e9f4] = env->getMethodID(cls, "skip", "(J)Ljava/util/stream/Stream;");
          mids$[mid_sorted_20f6d2b462aaef4b] = env->getMethodID(cls, "sorted", "()Ljava/util/stream/Stream;");
          mids$[mid_sorted_f1a7c968203f8263] = env->getMethodID(cls, "sorted", "(Ljava/util/Comparator;)Ljava/util/stream/Stream;");
          mids$[mid_toArray_b93c730013ce64c6] = env->getMethodID(cls, "toArray", "()[Ljava/lang/Object;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Stream Stream::concat(const Stream & a0, const Stream & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Stream(env->callStaticObjectMethod(cls, mids$[mid_concat_0b92fe9e9f9acef1], a0.this$, a1.this$));
      }

      jlong Stream::count() const
      {
        return env->callLongMethod(this$, mids$[mid_count_492808a339bfa35f]);
      }

      Stream Stream::distinct() const
      {
        return Stream(env->callObjectMethod(this$, mids$[mid_distinct_20f6d2b462aaef4b]));
      }

      Stream Stream::empty()
      {
        jclass cls = env->getClass(initializeClass);
        return Stream(env->callStaticObjectMethod(cls, mids$[mid_empty_20f6d2b462aaef4b]));
      }

      ::java::util::Optional Stream::findAny() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_findAny_c5e311a9e5531e7d]));
      }

      ::java::util::Optional Stream::findFirst() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_findFirst_c5e311a9e5531e7d]));
      }

      Stream Stream::generate(const ::java::util::function::Supplier & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Stream(env->callStaticObjectMethod(cls, mids$[mid_generate_8be855f490d09fce], a0.this$));
      }

      Stream Stream::limit(jlong a0) const
      {
        return Stream(env->callObjectMethod(this$, mids$[mid_limit_e15865d9d042e9f4], a0));
      }

      ::java::util::Optional Stream::max$(const ::java::util::Comparator & a0) const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_max_d7a4493c96ea432e], a0.this$));
      }

      ::java::util::Optional Stream::min$(const ::java::util::Comparator & a0) const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_min_d7a4493c96ea432e], a0.this$));
      }

      Stream Stream::of(const JArray< ::java::lang::Object > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Stream(env->callStaticObjectMethod(cls, mids$[mid_of_fcdf5e804d048ff5], a0.this$));
      }

      Stream Stream::of(const ::java::lang::Object & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Stream(env->callStaticObjectMethod(cls, mids$[mid_of_5ec77a47066bac4a], a0.this$));
      }

      Stream Stream::ofNullable(const ::java::lang::Object & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Stream(env->callStaticObjectMethod(cls, mids$[mid_ofNullable_5ec77a47066bac4a], a0.this$));
      }

      Stream Stream::skip(jlong a0) const
      {
        return Stream(env->callObjectMethod(this$, mids$[mid_skip_e15865d9d042e9f4], a0));
      }

      Stream Stream::sorted() const
      {
        return Stream(env->callObjectMethod(this$, mids$[mid_sorted_20f6d2b462aaef4b]));
      }

      Stream Stream::sorted(const ::java::util::Comparator & a0) const
      {
        return Stream(env->callObjectMethod(this$, mids$[mid_sorted_f1a7c968203f8263], a0.this$));
      }

      JArray< ::java::lang::Object > Stream::toArray() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_b93c730013ce64c6]));
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
      static PyObject *t_Stream_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Stream_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Stream_of_(t_Stream *self, PyObject *args);
      static PyObject *t_Stream_concat(PyTypeObject *type, PyObject *args);
      static PyObject *t_Stream_count(t_Stream *self);
      static PyObject *t_Stream_distinct(t_Stream *self);
      static PyObject *t_Stream_empty(PyTypeObject *type);
      static PyObject *t_Stream_findAny(t_Stream *self);
      static PyObject *t_Stream_findFirst(t_Stream *self);
      static PyObject *t_Stream_generate(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Stream_limit(t_Stream *self, PyObject *arg);
      static PyObject *t_Stream_max(t_Stream *self, PyObject *arg);
      static PyObject *t_Stream_min(t_Stream *self, PyObject *arg);
      static PyObject *t_Stream_of(PyTypeObject *type, PyObject *args);
      static PyObject *t_Stream_ofNullable(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Stream_skip(t_Stream *self, PyObject *arg);
      static PyObject *t_Stream_sorted(t_Stream *self, PyObject *args);
      static PyObject *t_Stream_toArray(t_Stream *self);
      static PyObject *t_Stream_get__parameters_(t_Stream *self, void *data);
      static PyGetSetDef t_Stream__fields_[] = {
        DECLARE_GET_FIELD(t_Stream, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Stream__methods_[] = {
        DECLARE_METHOD(t_Stream, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Stream, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Stream, of_, METH_VARARGS),
        DECLARE_METHOD(t_Stream, concat, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Stream, count, METH_NOARGS),
        DECLARE_METHOD(t_Stream, distinct, METH_NOARGS),
        DECLARE_METHOD(t_Stream, empty, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_Stream, findAny, METH_NOARGS),
        DECLARE_METHOD(t_Stream, findFirst, METH_NOARGS),
        DECLARE_METHOD(t_Stream, generate, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Stream, limit, METH_O),
        DECLARE_METHOD(t_Stream, max, METH_O),
        DECLARE_METHOD(t_Stream, min, METH_O),
        DECLARE_METHOD(t_Stream, of, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Stream, ofNullable, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Stream, skip, METH_O),
        DECLARE_METHOD(t_Stream, sorted, METH_VARARGS),
        DECLARE_METHOD(t_Stream, toArray, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Stream)[] = {
        { Py_tp_methods, t_Stream__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Stream__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Stream)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Stream, t_Stream, Stream);
      PyObject *t_Stream::wrap_Object(const Stream& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Stream::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Stream *self = (t_Stream *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_Stream::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Stream::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Stream *self = (t_Stream *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_Stream::install(PyObject *module)
      {
        installType(&PY_TYPE(Stream), &PY_TYPE_DEF(Stream), module, "Stream", 0);
      }

      void t_Stream::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Stream), "class_", make_descriptor(Stream::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Stream), "wrapfn_", make_descriptor(t_Stream::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Stream), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Stream_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Stream::initializeClass, 1)))
          return NULL;
        return t_Stream::wrap_Object(Stream(((t_Stream *) arg)->object.this$));
      }
      static PyObject *t_Stream_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Stream::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Stream_of_(t_Stream *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_Stream_concat(PyTypeObject *type, PyObject *args)
      {
        Stream a0((jobject) NULL);
        PyTypeObject **p0;
        Stream a1((jobject) NULL);
        PyTypeObject **p1;
        Stream result((jobject) NULL);

        if (!parseArgs(args, "KK", Stream::initializeClass, Stream::initializeClass, &a0, &p0, t_Stream::parameters_, &a1, &p1, t_Stream::parameters_))
        {
          OBJ_CALL(result = ::java::util::stream::Stream::concat(a0, a1));
          return t_Stream::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "concat", args);
        return NULL;
      }

      static PyObject *t_Stream_count(t_Stream *self)
      {
        jlong result;
        OBJ_CALL(result = self->object.count());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      static PyObject *t_Stream_distinct(t_Stream *self)
      {
        Stream result((jobject) NULL);
        OBJ_CALL(result = self->object.distinct());
        return t_Stream::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_Stream_empty(PyTypeObject *type)
      {
        Stream result((jobject) NULL);
        OBJ_CALL(result = ::java::util::stream::Stream::empty());
        return t_Stream::wrap_Object(result);
      }

      static PyObject *t_Stream_findAny(t_Stream *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.findAny());
        return ::java::util::t_Optional::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_Stream_findFirst(t_Stream *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.findFirst());
        return ::java::util::t_Optional::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_Stream_generate(PyTypeObject *type, PyObject *arg)
      {
        ::java::util::function::Supplier a0((jobject) NULL);
        PyTypeObject **p0;
        Stream result((jobject) NULL);

        if (!parseArg(arg, "K", ::java::util::function::Supplier::initializeClass, &a0, &p0, ::java::util::function::t_Supplier::parameters_))
        {
          OBJ_CALL(result = ::java::util::stream::Stream::generate(a0));
          return t_Stream::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "generate", arg);
        return NULL;
      }

      static PyObject *t_Stream_limit(t_Stream *self, PyObject *arg)
      {
        jlong a0;
        Stream result((jobject) NULL);

        if (!parseArg(arg, "J", &a0))
        {
          OBJ_CALL(result = self->object.limit(a0));
          return t_Stream::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "limit", arg);
        return NULL;
      }

      static PyObject *t_Stream_max(t_Stream *self, PyObject *arg)
      {
        ::java::util::Comparator a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::Optional result((jobject) NULL);

        if (!parseArg(arg, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
        {
          OBJ_CALL(result = self->object.max$(a0));
          return ::java::util::t_Optional::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "max", arg);
        return NULL;
      }

      static PyObject *t_Stream_min(t_Stream *self, PyObject *arg)
      {
        ::java::util::Comparator a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::Optional result((jobject) NULL);

        if (!parseArg(arg, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
        {
          OBJ_CALL(result = self->object.min$(a0));
          return ::java::util::t_Optional::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "min", arg);
        return NULL;
      }

      static PyObject *t_Stream_of(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::java::lang::Object > a0((jobject) NULL);
            Stream result((jobject) NULL);

            if (!parseArgs(args, "[o", &a0))
            {
              OBJ_CALL(result = ::java::util::stream::Stream::of(a0));
              return t_Stream::wrap_Object(result);
            }
          }
          {
            ::java::lang::Object a0((jobject) NULL);
            Stream result((jobject) NULL);

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = ::java::util::stream::Stream::of(a0));
              return t_Stream::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "of", args);
        return NULL;
      }

      static PyObject *t_Stream_ofNullable(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::Object a0((jobject) NULL);
        Stream result((jobject) NULL);

        if (!parseArg(arg, "o", &a0))
        {
          OBJ_CALL(result = ::java::util::stream::Stream::ofNullable(a0));
          return t_Stream::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "ofNullable", arg);
        return NULL;
      }

      static PyObject *t_Stream_skip(t_Stream *self, PyObject *arg)
      {
        jlong a0;
        Stream result((jobject) NULL);

        if (!parseArg(arg, "J", &a0))
        {
          OBJ_CALL(result = self->object.skip(a0));
          return t_Stream::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "skip", arg);
        return NULL;
      }

      static PyObject *t_Stream_sorted(t_Stream *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Stream result((jobject) NULL);
            OBJ_CALL(result = self->object.sorted());
            return t_Stream::wrap_Object(result, self->parameters[0]);
          }
          break;
         case 1:
          {
            ::java::util::Comparator a0((jobject) NULL);
            PyTypeObject **p0;
            Stream result((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
            {
              OBJ_CALL(result = self->object.sorted(a0));
              return t_Stream::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "sorted", args);
        return NULL;
      }

      static PyObject *t_Stream_toArray(t_Stream *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.toArray());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }
      static PyObject *t_Stream_get__parameters_(t_Stream *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace exception {

      ::java::lang::Class *MathIllegalStateException::class$ = NULL;
      jmethodID *MathIllegalStateException::mids$ = NULL;
      bool MathIllegalStateException::live$ = false;

      jclass MathIllegalStateException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/exception/MathIllegalStateException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d0cf82c16a7e8751] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_init$_6ecc3fd6067c266c] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MathIllegalStateException::MathIllegalStateException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::org::hipparchus::exception::MathRuntimeException(env->newObject(initializeClass, &mids$, mid_init$_d0cf82c16a7e8751, a0.this$, a1.this$)) {}

      MathIllegalStateException::MathIllegalStateException(const ::java::lang::Throwable & a0, const ::org::hipparchus::exception::Localizable & a1, const JArray< ::java::lang::Object > & a2) : ::org::hipparchus::exception::MathRuntimeException(env->newObject(initializeClass, &mids$, mid_init$_6ecc3fd6067c266c, a0.this$, a1.this$, a2.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      static PyObject *t_MathIllegalStateException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathIllegalStateException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_MathIllegalStateException_init_(t_MathIllegalStateException *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_MathIllegalStateException__methods_[] = {
        DECLARE_METHOD(t_MathIllegalStateException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathIllegalStateException, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathIllegalStateException)[] = {
        { Py_tp_methods, t_MathIllegalStateException__methods_ },
        { Py_tp_init, (void *) t_MathIllegalStateException_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathIllegalStateException)[] = {
        &PY_TYPE_DEF(::org::hipparchus::exception::MathRuntimeException),
        NULL
      };

      DEFINE_TYPE(MathIllegalStateException, t_MathIllegalStateException, MathIllegalStateException);

      void t_MathIllegalStateException::install(PyObject *module)
      {
        installType(&PY_TYPE(MathIllegalStateException), &PY_TYPE_DEF(MathIllegalStateException), module, "MathIllegalStateException", 0);
      }

      void t_MathIllegalStateException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathIllegalStateException), "class_", make_descriptor(MathIllegalStateException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathIllegalStateException), "wrapfn_", make_descriptor(t_MathIllegalStateException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathIllegalStateException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MathIllegalStateException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathIllegalStateException::initializeClass, 1)))
          return NULL;
        return t_MathIllegalStateException::wrap_Object(MathIllegalStateException(((t_MathIllegalStateException *) arg)->object.this$));
      }
      static PyObject *t_MathIllegalStateException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathIllegalStateException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_MathIllegalStateException_init_(t_MathIllegalStateException *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::exception::Localizable a0((jobject) NULL);
            JArray< ::java::lang::Object > a1((jobject) NULL);
            MathIllegalStateException object((jobject) NULL);

            if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
            {
              INT_CALL(object = MathIllegalStateException(a0, a1));
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
            MathIllegalStateException object((jobject) NULL);

            if (!parseArgs(args, "kk[o", ::java::lang::Throwable::initializeClass, ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = MathIllegalStateException(a0, a1, a2));
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
#include "org/hipparchus/ode/events/AbstractODEDetector.h"
#include "org/hipparchus/ode/events/ODEEventHandler.h"
#include "org/hipparchus/ode/events/AbstractODEDetector.h"
#include "org/hipparchus/ode/events/AdaptableInterval.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "org/hipparchus/ode/events/ODEEventDetector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *AbstractODEDetector::class$ = NULL;
        jmethodID *AbstractODEDetector::mids$ = NULL;
        bool AbstractODEDetector::live$ = false;
        jdouble AbstractODEDetector::DEFAULT_MAXCHECK = (jdouble) 0;
        jint AbstractODEDetector::DEFAULT_MAX_ITER = (jint) 0;
        jdouble AbstractODEDetector::DEFAULT_THRESHOLD = (jdouble) 0;

        jclass AbstractODEDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/AbstractODEDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_g_021b54f582f9e537] = env->getMethodID(cls, "g", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)D");
            mids$[mid_getHandler_7247a44d56e4e7e1] = env->getMethodID(cls, "getHandler", "()Lorg/hipparchus/ode/events/ODEEventHandler;");
            mids$[mid_getMaxCheckInterval_9a5537b770a5986b] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/hipparchus/ode/events/AdaptableInterval;");
            mids$[mid_getMaxIterationCount_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getSolver_4150c30eabb0f330] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver;");
            mids$[mid_init_5aaadc62bce8a394] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");
            mids$[mid_isForward_b108b35ef48e27bd] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_withHandler_39c51a5079c7c678] = env->getMethodID(cls, "withHandler", "(Lorg/hipparchus/ode/events/ODEEventHandler;)Lorg/hipparchus/ode/events/AbstractODEDetector;");
            mids$[mid_withMaxCheck_3d613fe0e4e80078] = env->getMethodID(cls, "withMaxCheck", "(D)Lorg/hipparchus/ode/events/AbstractODEDetector;");
            mids$[mid_withMaxCheck_b9a374b3c1f511a1] = env->getMethodID(cls, "withMaxCheck", "(Lorg/hipparchus/ode/events/AdaptableInterval;)Lorg/hipparchus/ode/events/AbstractODEDetector;");
            mids$[mid_withMaxIter_ef53f6276a11357c] = env->getMethodID(cls, "withMaxIter", "(I)Lorg/hipparchus/ode/events/AbstractODEDetector;");
            mids$[mid_withSolver_2e720daa75c69c32] = env->getMethodID(cls, "withSolver", "(Lorg/hipparchus/analysis/solvers/BracketedUnivariateSolver;)Lorg/hipparchus/ode/events/AbstractODEDetector;");
            mids$[mid_withThreshold_3d613fe0e4e80078] = env->getMethodID(cls, "withThreshold", "(D)Lorg/hipparchus/ode/events/AbstractODEDetector;");
            mids$[mid_create_af9ea80f6fc355a3] = env->getMethodID(cls, "create", "(Lorg/hipparchus/ode/events/AdaptableInterval;ILorg/hipparchus/analysis/solvers/BracketedUnivariateSolver;Lorg/hipparchus/ode/events/ODEEventHandler;)Lorg/hipparchus/ode/events/AbstractODEDetector;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_MAXCHECK = env->getStaticDoubleField(cls, "DEFAULT_MAXCHECK");
            DEFAULT_MAX_ITER = env->getStaticIntField(cls, "DEFAULT_MAX_ITER");
            DEFAULT_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_THRESHOLD");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble AbstractODEDetector::g(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_021b54f582f9e537], a0.this$);
        }

        ::org::hipparchus::ode::events::ODEEventHandler AbstractODEDetector::getHandler() const
        {
          return ::org::hipparchus::ode::events::ODEEventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_7247a44d56e4e7e1]));
        }

        ::org::hipparchus::ode::events::AdaptableInterval AbstractODEDetector::getMaxCheckInterval() const
        {
          return ::org::hipparchus::ode::events::AdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_9a5537b770a5986b]));
        }

        jint AbstractODEDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_570ce0828f81a2c1]);
        }

        ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver AbstractODEDetector::getSolver() const
        {
          return ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver(env->callObjectMethod(this$, mids$[mid_getSolver_4150c30eabb0f330]));
        }

        void AbstractODEDetector::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_5aaadc62bce8a394], a0.this$, a1);
        }

        jboolean AbstractODEDetector::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_b108b35ef48e27bd]);
        }

        AbstractODEDetector AbstractODEDetector::withHandler(const ::org::hipparchus::ode::events::ODEEventHandler & a0) const
        {
          return AbstractODEDetector(env->callObjectMethod(this$, mids$[mid_withHandler_39c51a5079c7c678], a0.this$));
        }

        AbstractODEDetector AbstractODEDetector::withMaxCheck(jdouble a0) const
        {
          return AbstractODEDetector(env->callObjectMethod(this$, mids$[mid_withMaxCheck_3d613fe0e4e80078], a0));
        }

        AbstractODEDetector AbstractODEDetector::withMaxCheck(const ::org::hipparchus::ode::events::AdaptableInterval & a0) const
        {
          return AbstractODEDetector(env->callObjectMethod(this$, mids$[mid_withMaxCheck_b9a374b3c1f511a1], a0.this$));
        }

        AbstractODEDetector AbstractODEDetector::withMaxIter(jint a0) const
        {
          return AbstractODEDetector(env->callObjectMethod(this$, mids$[mid_withMaxIter_ef53f6276a11357c], a0));
        }

        AbstractODEDetector AbstractODEDetector::withSolver(const ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver & a0) const
        {
          return AbstractODEDetector(env->callObjectMethod(this$, mids$[mid_withSolver_2e720daa75c69c32], a0.this$));
        }

        AbstractODEDetector AbstractODEDetector::withThreshold(jdouble a0) const
        {
          return AbstractODEDetector(env->callObjectMethod(this$, mids$[mid_withThreshold_3d613fe0e4e80078], a0));
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
        static PyObject *t_AbstractODEDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractODEDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractODEDetector_of_(t_AbstractODEDetector *self, PyObject *args);
        static PyObject *t_AbstractODEDetector_g(t_AbstractODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractODEDetector_getHandler(t_AbstractODEDetector *self);
        static PyObject *t_AbstractODEDetector_getMaxCheckInterval(t_AbstractODEDetector *self);
        static PyObject *t_AbstractODEDetector_getMaxIterationCount(t_AbstractODEDetector *self);
        static PyObject *t_AbstractODEDetector_getSolver(t_AbstractODEDetector *self);
        static PyObject *t_AbstractODEDetector_init(t_AbstractODEDetector *self, PyObject *args);
        static PyObject *t_AbstractODEDetector_isForward(t_AbstractODEDetector *self);
        static PyObject *t_AbstractODEDetector_withHandler(t_AbstractODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractODEDetector_withMaxCheck(t_AbstractODEDetector *self, PyObject *args);
        static PyObject *t_AbstractODEDetector_withMaxIter(t_AbstractODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractODEDetector_withSolver(t_AbstractODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractODEDetector_withThreshold(t_AbstractODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractODEDetector_get__forward(t_AbstractODEDetector *self, void *data);
        static PyObject *t_AbstractODEDetector_get__handler(t_AbstractODEDetector *self, void *data);
        static PyObject *t_AbstractODEDetector_get__maxCheckInterval(t_AbstractODEDetector *self, void *data);
        static PyObject *t_AbstractODEDetector_get__maxIterationCount(t_AbstractODEDetector *self, void *data);
        static PyObject *t_AbstractODEDetector_get__solver(t_AbstractODEDetector *self, void *data);
        static PyObject *t_AbstractODEDetector_get__parameters_(t_AbstractODEDetector *self, void *data);
        static PyGetSetDef t_AbstractODEDetector__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractODEDetector, forward),
          DECLARE_GET_FIELD(t_AbstractODEDetector, handler),
          DECLARE_GET_FIELD(t_AbstractODEDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_AbstractODEDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_AbstractODEDetector, solver),
          DECLARE_GET_FIELD(t_AbstractODEDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractODEDetector__methods_[] = {
          DECLARE_METHOD(t_AbstractODEDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractODEDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractODEDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractODEDetector, g, METH_O),
          DECLARE_METHOD(t_AbstractODEDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEDetector, getSolver, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEDetector, init, METH_VARARGS),
          DECLARE_METHOD(t_AbstractODEDetector, isForward, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEDetector, withHandler, METH_O),
          DECLARE_METHOD(t_AbstractODEDetector, withMaxCheck, METH_VARARGS),
          DECLARE_METHOD(t_AbstractODEDetector, withMaxIter, METH_O),
          DECLARE_METHOD(t_AbstractODEDetector, withSolver, METH_O),
          DECLARE_METHOD(t_AbstractODEDetector, withThreshold, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractODEDetector)[] = {
          { Py_tp_methods, t_AbstractODEDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractODEDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractODEDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractODEDetector, t_AbstractODEDetector, AbstractODEDetector);
        PyObject *t_AbstractODEDetector::wrap_Object(const AbstractODEDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractODEDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractODEDetector *self = (t_AbstractODEDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractODEDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractODEDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractODEDetector *self = (t_AbstractODEDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractODEDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractODEDetector), &PY_TYPE_DEF(AbstractODEDetector), module, "AbstractODEDetector", 0);
        }

        void t_AbstractODEDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractODEDetector), "class_", make_descriptor(AbstractODEDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractODEDetector), "wrapfn_", make_descriptor(t_AbstractODEDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractODEDetector), "boxfn_", make_descriptor(boxObject));
          env->getClass(AbstractODEDetector::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractODEDetector), "DEFAULT_MAXCHECK", make_descriptor(AbstractODEDetector::DEFAULT_MAXCHECK));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractODEDetector), "DEFAULT_MAX_ITER", make_descriptor(AbstractODEDetector::DEFAULT_MAX_ITER));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractODEDetector), "DEFAULT_THRESHOLD", make_descriptor(AbstractODEDetector::DEFAULT_THRESHOLD));
        }

        static PyObject *t_AbstractODEDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractODEDetector::initializeClass, 1)))
            return NULL;
          return t_AbstractODEDetector::wrap_Object(AbstractODEDetector(((t_AbstractODEDetector *) arg)->object.this$));
        }
        static PyObject *t_AbstractODEDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractODEDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractODEDetector_of_(t_AbstractODEDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AbstractODEDetector_g(t_AbstractODEDetector *self, PyObject *arg)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_AbstractODEDetector_getHandler(t_AbstractODEDetector *self)
        {
          ::org::hipparchus::ode::events::ODEEventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_ODEEventHandler::wrap_Object(result);
        }

        static PyObject *t_AbstractODEDetector_getMaxCheckInterval(t_AbstractODEDetector *self)
        {
          ::org::hipparchus::ode::events::AdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::hipparchus::ode::events::t_AdaptableInterval::wrap_Object(result);
        }

        static PyObject *t_AbstractODEDetector_getMaxIterationCount(t_AbstractODEDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractODEDetector_getSolver(t_AbstractODEDetector *self)
        {
          ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver result((jobject) NULL);
          OBJ_CALL(result = self->object.getSolver());
          return ::org::hipparchus::analysis::solvers::t_BracketedUnivariateSolver::wrap_Object(result, ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction));
        }

        static PyObject *t_AbstractODEDetector_init(t_AbstractODEDetector *self, PyObject *args)
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

        static PyObject *t_AbstractODEDetector_isForward(t_AbstractODEDetector *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractODEDetector_withHandler(t_AbstractODEDetector *self, PyObject *arg)
        {
          ::org::hipparchus::ode::events::ODEEventHandler a0((jobject) NULL);
          AbstractODEDetector result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::ode::events::ODEEventHandler::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.withHandler(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractODEDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withHandler", arg);
          return NULL;
        }

        static PyObject *t_AbstractODEDetector_withMaxCheck(t_AbstractODEDetector *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              AbstractODEDetector result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.withMaxCheck(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractODEDetector::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::ode::events::AdaptableInterval a0((jobject) NULL);
              AbstractODEDetector result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::ode::events::AdaptableInterval::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.withMaxCheck(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractODEDetector::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "withMaxCheck", args);
          return NULL;
        }

        static PyObject *t_AbstractODEDetector_withMaxIter(t_AbstractODEDetector *self, PyObject *arg)
        {
          jint a0;
          AbstractODEDetector result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.withMaxIter(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractODEDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withMaxIter", arg);
          return NULL;
        }

        static PyObject *t_AbstractODEDetector_withSolver(t_AbstractODEDetector *self, PyObject *arg)
        {
          ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver a0((jobject) NULL);
          PyTypeObject **p0;
          AbstractODEDetector result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver::initializeClass, &a0, &p0, ::org::hipparchus::analysis::solvers::t_BracketedUnivariateSolver::parameters_))
          {
            OBJ_CALL(result = self->object.withSolver(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractODEDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withSolver", arg);
          return NULL;
        }

        static PyObject *t_AbstractODEDetector_withThreshold(t_AbstractODEDetector *self, PyObject *arg)
        {
          jdouble a0;
          AbstractODEDetector result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.withThreshold(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractODEDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withThreshold", arg);
          return NULL;
        }
        static PyObject *t_AbstractODEDetector_get__parameters_(t_AbstractODEDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AbstractODEDetector_get__forward(t_AbstractODEDetector *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractODEDetector_get__handler(t_AbstractODEDetector *self, void *data)
        {
          ::org::hipparchus::ode::events::ODEEventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_ODEEventHandler::wrap_Object(value);
        }

        static PyObject *t_AbstractODEDetector_get__maxCheckInterval(t_AbstractODEDetector *self, void *data)
        {
          ::org::hipparchus::ode::events::AdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::hipparchus::ode::events::t_AdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_AbstractODEDetector_get__maxIterationCount(t_AbstractODEDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AbstractODEDetector_get__solver(t_AbstractODEDetector *self, void *data)
        {
          ::org::hipparchus::analysis::solvers::BracketedUnivariateSolver value((jobject) NULL);
          OBJ_CALL(value = self->object.getSolver());
          return ::org::hipparchus::analysis::solvers::t_BracketedUnivariateSolver::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldEventSlopeFilter.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/FilterType.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldEventSlopeFilter::class$ = NULL;
        jmethodID *FieldEventSlopeFilter::mids$ = NULL;
        bool FieldEventSlopeFilter::live$ = false;

        jclass FieldEventSlopeFilter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldEventSlopeFilter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_47727962149965b7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/FieldEventDetector;Lorg/orekit/propagation/events/FilterType;)V");
            mids$[mid_g_41a008afe53da855] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getDetector_4fe06ecc019ea51d] = env->getMethodID(cls, "getDetector", "()Lorg/orekit/propagation/events/FieldEventDetector;");
            mids$[mid_init_8e8de2be1664674a] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_create_442fd2ba5cb06b9d] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldEventSlopeFilter;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldEventSlopeFilter::FieldEventSlopeFilter(const ::org::orekit::propagation::events::FieldEventDetector & a0, const ::org::orekit::propagation::events::FilterType & a1) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_47727962149965b7, a0.this$, a1.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldEventSlopeFilter::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_41a008afe53da855], a0.this$));
        }

        ::org::orekit::propagation::events::FieldEventDetector FieldEventSlopeFilter::getDetector() const
        {
          return ::org::orekit::propagation::events::FieldEventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_4fe06ecc019ea51d]));
        }

        void FieldEventSlopeFilter::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_8e8de2be1664674a], a0.this$, a1.this$);
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
        static PyObject *t_FieldEventSlopeFilter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventSlopeFilter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventSlopeFilter_of_(t_FieldEventSlopeFilter *self, PyObject *args);
        static int t_FieldEventSlopeFilter_init_(t_FieldEventSlopeFilter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldEventSlopeFilter_g(t_FieldEventSlopeFilter *self, PyObject *args);
        static PyObject *t_FieldEventSlopeFilter_getDetector(t_FieldEventSlopeFilter *self);
        static PyObject *t_FieldEventSlopeFilter_init(t_FieldEventSlopeFilter *self, PyObject *args);
        static PyObject *t_FieldEventSlopeFilter_get__detector(t_FieldEventSlopeFilter *self, void *data);
        static PyObject *t_FieldEventSlopeFilter_get__parameters_(t_FieldEventSlopeFilter *self, void *data);
        static PyGetSetDef t_FieldEventSlopeFilter__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventSlopeFilter, detector),
          DECLARE_GET_FIELD(t_FieldEventSlopeFilter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventSlopeFilter__methods_[] = {
          DECLARE_METHOD(t_FieldEventSlopeFilter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventSlopeFilter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventSlopeFilter, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventSlopeFilter, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventSlopeFilter, getDetector, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventSlopeFilter, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventSlopeFilter)[] = {
          { Py_tp_methods, t_FieldEventSlopeFilter__methods_ },
          { Py_tp_init, (void *) t_FieldEventSlopeFilter_init_ },
          { Py_tp_getset, t_FieldEventSlopeFilter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventSlopeFilter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldEventSlopeFilter, t_FieldEventSlopeFilter, FieldEventSlopeFilter);
        PyObject *t_FieldEventSlopeFilter::wrap_Object(const FieldEventSlopeFilter& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldEventSlopeFilter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventSlopeFilter *self = (t_FieldEventSlopeFilter *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_FieldEventSlopeFilter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldEventSlopeFilter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventSlopeFilter *self = (t_FieldEventSlopeFilter *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_FieldEventSlopeFilter::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventSlopeFilter), &PY_TYPE_DEF(FieldEventSlopeFilter), module, "FieldEventSlopeFilter", 0);
        }

        void t_FieldEventSlopeFilter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventSlopeFilter), "class_", make_descriptor(FieldEventSlopeFilter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventSlopeFilter), "wrapfn_", make_descriptor(t_FieldEventSlopeFilter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventSlopeFilter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventSlopeFilter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventSlopeFilter::initializeClass, 1)))
            return NULL;
          return t_FieldEventSlopeFilter::wrap_Object(FieldEventSlopeFilter(((t_FieldEventSlopeFilter *) arg)->object.this$));
        }
        static PyObject *t_FieldEventSlopeFilter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventSlopeFilter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventSlopeFilter_of_(t_FieldEventSlopeFilter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldEventSlopeFilter_init_(t_FieldEventSlopeFilter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::events::FilterType a1((jobject) NULL);
          PyTypeObject **p1;
          FieldEventSlopeFilter object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, ::org::orekit::propagation::events::FilterType::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a1, &p1, ::org::orekit::propagation::events::t_FilterType::parameters_))
          {
            INT_CALL(object = FieldEventSlopeFilter(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldEventSlopeFilter_g(t_FieldEventSlopeFilter *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldEventSlopeFilter), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldEventSlopeFilter_getDetector(t_FieldEventSlopeFilter *self)
        {
          ::org::orekit::propagation::events::FieldEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetector());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(result);
        }

        static PyObject *t_FieldEventSlopeFilter_init(t_FieldEventSlopeFilter *self, PyObject *args)
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

          return callSuper(PY_TYPE(FieldEventSlopeFilter), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_FieldEventSlopeFilter_get__parameters_(t_FieldEventSlopeFilter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventSlopeFilter_get__detector(t_FieldEventSlopeFilter *self, void *data)
        {
          ::org::orekit::propagation::events::FieldEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetector());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fraction/ProperFractionFormat.h"
#include "java/text/NumberFormat.h"
#include "org/hipparchus/fraction/Fraction.h"
#include "java/lang/StringBuffer.h"
#include "java/text/ParsePosition.h"
#include "java/text/FieldPosition.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *ProperFractionFormat::class$ = NULL;
      jmethodID *ProperFractionFormat::mids$ = NULL;
      bool ProperFractionFormat::live$ = false;

      jclass ProperFractionFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/ProperFractionFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_256f36a22c0d0f55] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
          mids$[mid_init$_2af517d7a6ef01c6] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;Ljava/text/NumberFormat;Ljava/text/NumberFormat;)V");
          mids$[mid_format_44821f0beb3a37bc] = env->getMethodID(cls, "format", "(Lorg/hipparchus/fraction/Fraction;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_getWholeFormat_24f83dea4a8657b1] = env->getMethodID(cls, "getWholeFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_parse_32af1cad14e4c6d5] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/fraction/Fraction;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ProperFractionFormat::ProperFractionFormat() : ::org::hipparchus::fraction::FractionFormat(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      ProperFractionFormat::ProperFractionFormat(const ::java::text::NumberFormat & a0) : ::org::hipparchus::fraction::FractionFormat(env->newObject(initializeClass, &mids$, mid_init$_256f36a22c0d0f55, a0.this$)) {}

      ProperFractionFormat::ProperFractionFormat(const ::java::text::NumberFormat & a0, const ::java::text::NumberFormat & a1, const ::java::text::NumberFormat & a2) : ::org::hipparchus::fraction::FractionFormat(env->newObject(initializeClass, &mids$, mid_init$_2af517d7a6ef01c6, a0.this$, a1.this$, a2.this$)) {}

      ::java::lang::StringBuffer ProperFractionFormat::format(const ::org::hipparchus::fraction::Fraction & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_44821f0beb3a37bc], a0.this$, a1.this$, a2.this$));
      }

      ::java::text::NumberFormat ProperFractionFormat::getWholeFormat() const
      {
        return ::java::text::NumberFormat(env->callObjectMethod(this$, mids$[mid_getWholeFormat_24f83dea4a8657b1]));
      }

      ::org::hipparchus::fraction::Fraction ProperFractionFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
      {
        return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_parse_32af1cad14e4c6d5], a0.this$, a1.this$));
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
      static PyObject *t_ProperFractionFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ProperFractionFormat_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ProperFractionFormat_init_(t_ProperFractionFormat *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ProperFractionFormat_format(t_ProperFractionFormat *self, PyObject *args);
      static PyObject *t_ProperFractionFormat_getWholeFormat(t_ProperFractionFormat *self);
      static PyObject *t_ProperFractionFormat_parse(t_ProperFractionFormat *self, PyObject *args);
      static PyObject *t_ProperFractionFormat_get__wholeFormat(t_ProperFractionFormat *self, void *data);
      static PyGetSetDef t_ProperFractionFormat__fields_[] = {
        DECLARE_GET_FIELD(t_ProperFractionFormat, wholeFormat),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ProperFractionFormat__methods_[] = {
        DECLARE_METHOD(t_ProperFractionFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ProperFractionFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ProperFractionFormat, format, METH_VARARGS),
        DECLARE_METHOD(t_ProperFractionFormat, getWholeFormat, METH_NOARGS),
        DECLARE_METHOD(t_ProperFractionFormat, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ProperFractionFormat)[] = {
        { Py_tp_methods, t_ProperFractionFormat__methods_ },
        { Py_tp_init, (void *) t_ProperFractionFormat_init_ },
        { Py_tp_getset, t_ProperFractionFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ProperFractionFormat)[] = {
        &PY_TYPE_DEF(::org::hipparchus::fraction::FractionFormat),
        NULL
      };

      DEFINE_TYPE(ProperFractionFormat, t_ProperFractionFormat, ProperFractionFormat);

      void t_ProperFractionFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(ProperFractionFormat), &PY_TYPE_DEF(ProperFractionFormat), module, "ProperFractionFormat", 0);
      }

      void t_ProperFractionFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ProperFractionFormat), "class_", make_descriptor(ProperFractionFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ProperFractionFormat), "wrapfn_", make_descriptor(t_ProperFractionFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ProperFractionFormat), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ProperFractionFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ProperFractionFormat::initializeClass, 1)))
          return NULL;
        return t_ProperFractionFormat::wrap_Object(ProperFractionFormat(((t_ProperFractionFormat *) arg)->object.this$));
      }
      static PyObject *t_ProperFractionFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ProperFractionFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ProperFractionFormat_init_(t_ProperFractionFormat *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ProperFractionFormat object((jobject) NULL);

            INT_CALL(object = ProperFractionFormat());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            ProperFractionFormat object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
            {
              INT_CALL(object = ProperFractionFormat(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            ::java::text::NumberFormat a1((jobject) NULL);
            ::java::text::NumberFormat a2((jobject) NULL);
            ProperFractionFormat object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::java::text::NumberFormat::initializeClass, ::java::text::NumberFormat::initializeClass, ::java::text::NumberFormat::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = ProperFractionFormat(a0, a1, a2));
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

      static PyObject *t_ProperFractionFormat_format(t_ProperFractionFormat *self, PyObject *args)
      {
        ::org::hipparchus::fraction::Fraction a0((jobject) NULL);
        ::java::lang::StringBuffer a1((jobject) NULL);
        ::java::text::FieldPosition a2((jobject) NULL);
        ::java::lang::StringBuffer result((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::hipparchus::fraction::Fraction::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.format(a0, a1, a2));
          return ::java::lang::t_StringBuffer::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ProperFractionFormat), (PyObject *) self, "format", args, 2);
      }

      static PyObject *t_ProperFractionFormat_getWholeFormat(t_ProperFractionFormat *self)
      {
        ::java::text::NumberFormat result((jobject) NULL);
        OBJ_CALL(result = self->object.getWholeFormat());
        return ::java::text::t_NumberFormat::wrap_Object(result);
      }

      static PyObject *t_ProperFractionFormat_parse(t_ProperFractionFormat *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::text::ParsePosition a1((jobject) NULL);
        ::org::hipparchus::fraction::Fraction result((jobject) NULL);

        if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.parse(a0, a1));
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ProperFractionFormat), (PyObject *) self, "parse", args, 2);
      }

      static PyObject *t_ProperFractionFormat_get__wholeFormat(t_ProperFractionFormat *self, void *data)
      {
        ::java::text::NumberFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getWholeFormat());
        return ::java::text::t_NumberFormat::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/NRLMSISE00.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/models/earth/atmosphere/NRLMSISE00.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/models/earth/atmosphere/NRLMSISE00InputParameters.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
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
              mids$[mid_init$_95485d1ebb7911a0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/NRLMSISE00InputParameters;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/BodyShape;)V");
              mids$[mid_init$_3782e04c41242f72] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/NRLMSISE00InputParameters;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/BodyShape;Lorg/orekit/time/TimeScale;)V");
              mids$[mid_getDensity_f7d7785230311c38] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)D");
              mids$[mid_getDensity_b79d75c1a8af7374] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_withSwitch_61652ce4abe178ec] = env->getMethodID(cls, "withSwitch", "(II)Lorg/orekit/models/earth/atmosphere/NRLMSISE00;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          NRLMSISE00::NRLMSISE00(const ::org::orekit::models::earth::atmosphere::NRLMSISE00InputParameters & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::orekit::bodies::BodyShape & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_95485d1ebb7911a0, a0.this$, a1.this$, a2.this$)) {}

          NRLMSISE00::NRLMSISE00(const ::org::orekit::models::earth::atmosphere::NRLMSISE00InputParameters & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::orekit::bodies::BodyShape & a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3782e04c41242f72, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          jdouble NRLMSISE00::getDensity(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDensity_f7d7785230311c38], a0.this$, a1.this$, a2.this$);
          }

          ::org::hipparchus::CalculusFieldElement NRLMSISE00::getDensity(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_b79d75c1a8af7374], a0.this$, a1.this$, a2.this$));
          }

          ::org::orekit::frames::Frame NRLMSISE00::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
          }

          NRLMSISE00 NRLMSISE00::withSwitch(jint a0, jint a1) const
          {
            return NRLMSISE00(env->callObjectMethod(this$, mids$[mid_withSwitch_61652ce4abe178ec], a0, a1));
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
#include "org/orekit/files/sp3/SP3Ephemeris.h"
#include "java/util/List.h"
#include "org/orekit/files/general/EphemerisFile$SatelliteEphemeris.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/files/sp3/SP3Segment.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "java/lang/String.h"
#include "org/orekit/files/sp3/SP3Coordinate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3Ephemeris::class$ = NULL;
        jmethodID *SP3Ephemeris::mids$ = NULL;
        bool SP3Ephemeris::live$ = false;

        jclass SP3Ephemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3Ephemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c8f7ccb4be2c9aa7] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DLorg/orekit/frames/Frame;ILorg/orekit/utils/CartesianDerivativesFilter;)V");
            mids$[mid_addCoordinate_ee2ec20169ef45b1] = env->getMethodID(cls, "addCoordinate", "(Lorg/orekit/files/sp3/SP3Coordinate;D)V");
            mids$[mid_getAvailableDerivatives_16e9a7b5414faf2d] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
            mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getId_11b109bd155ca898] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
            mids$[mid_getInterpolationSamples_570ce0828f81a2c1] = env->getMethodID(cls, "getInterpolationSamples", "()I");
            mids$[mid_getMu_dff5885c2c873297] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getSegments_2afa36052df4765d] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
            mids$[mid_getStart_85703d13e302437e] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_85703d13e302437e] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SP3Ephemeris::SP3Ephemeris(const ::java::lang::String & a0, jdouble a1, const ::org::orekit::frames::Frame & a2, jint a3, const ::org::orekit::utils::CartesianDerivativesFilter & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c8f7ccb4be2c9aa7, a0.this$, a1, a2.this$, a3, a4.this$)) {}

        void SP3Ephemeris::addCoordinate(const ::org::orekit::files::sp3::SP3Coordinate & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addCoordinate_ee2ec20169ef45b1], a0.this$, a1);
        }

        ::org::orekit::utils::CartesianDerivativesFilter SP3Ephemeris::getAvailableDerivatives() const
        {
          return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_16e9a7b5414faf2d]));
        }

        ::org::orekit::frames::Frame SP3Ephemeris::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
        }

        ::java::lang::String SP3Ephemeris::getId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_11b109bd155ca898]));
        }

        jint SP3Ephemeris::getInterpolationSamples() const
        {
          return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_570ce0828f81a2c1]);
        }

        jdouble SP3Ephemeris::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_dff5885c2c873297]);
        }

        ::java::util::List SP3Ephemeris::getSegments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_2afa36052df4765d]));
        }

        ::org::orekit::time::AbsoluteDate SP3Ephemeris::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_85703d13e302437e]));
        }

        ::org::orekit::time::AbsoluteDate SP3Ephemeris::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_85703d13e302437e]));
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
        static PyObject *t_SP3Ephemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3Ephemeris_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SP3Ephemeris_init_(t_SP3Ephemeris *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SP3Ephemeris_addCoordinate(t_SP3Ephemeris *self, PyObject *args);
        static PyObject *t_SP3Ephemeris_getAvailableDerivatives(t_SP3Ephemeris *self);
        static PyObject *t_SP3Ephemeris_getFrame(t_SP3Ephemeris *self);
        static PyObject *t_SP3Ephemeris_getId(t_SP3Ephemeris *self);
        static PyObject *t_SP3Ephemeris_getInterpolationSamples(t_SP3Ephemeris *self);
        static PyObject *t_SP3Ephemeris_getMu(t_SP3Ephemeris *self);
        static PyObject *t_SP3Ephemeris_getSegments(t_SP3Ephemeris *self);
        static PyObject *t_SP3Ephemeris_getStart(t_SP3Ephemeris *self);
        static PyObject *t_SP3Ephemeris_getStop(t_SP3Ephemeris *self);
        static PyObject *t_SP3Ephemeris_get__availableDerivatives(t_SP3Ephemeris *self, void *data);
        static PyObject *t_SP3Ephemeris_get__frame(t_SP3Ephemeris *self, void *data);
        static PyObject *t_SP3Ephemeris_get__id(t_SP3Ephemeris *self, void *data);
        static PyObject *t_SP3Ephemeris_get__interpolationSamples(t_SP3Ephemeris *self, void *data);
        static PyObject *t_SP3Ephemeris_get__mu(t_SP3Ephemeris *self, void *data);
        static PyObject *t_SP3Ephemeris_get__segments(t_SP3Ephemeris *self, void *data);
        static PyObject *t_SP3Ephemeris_get__start(t_SP3Ephemeris *self, void *data);
        static PyObject *t_SP3Ephemeris_get__stop(t_SP3Ephemeris *self, void *data);
        static PyGetSetDef t_SP3Ephemeris__fields_[] = {
          DECLARE_GET_FIELD(t_SP3Ephemeris, availableDerivatives),
          DECLARE_GET_FIELD(t_SP3Ephemeris, frame),
          DECLARE_GET_FIELD(t_SP3Ephemeris, id),
          DECLARE_GET_FIELD(t_SP3Ephemeris, interpolationSamples),
          DECLARE_GET_FIELD(t_SP3Ephemeris, mu),
          DECLARE_GET_FIELD(t_SP3Ephemeris, segments),
          DECLARE_GET_FIELD(t_SP3Ephemeris, start),
          DECLARE_GET_FIELD(t_SP3Ephemeris, stop),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SP3Ephemeris__methods_[] = {
          DECLARE_METHOD(t_SP3Ephemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Ephemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Ephemeris, addCoordinate, METH_VARARGS),
          DECLARE_METHOD(t_SP3Ephemeris, getAvailableDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_SP3Ephemeris, getFrame, METH_NOARGS),
          DECLARE_METHOD(t_SP3Ephemeris, getId, METH_NOARGS),
          DECLARE_METHOD(t_SP3Ephemeris, getInterpolationSamples, METH_NOARGS),
          DECLARE_METHOD(t_SP3Ephemeris, getMu, METH_NOARGS),
          DECLARE_METHOD(t_SP3Ephemeris, getSegments, METH_NOARGS),
          DECLARE_METHOD(t_SP3Ephemeris, getStart, METH_NOARGS),
          DECLARE_METHOD(t_SP3Ephemeris, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3Ephemeris)[] = {
          { Py_tp_methods, t_SP3Ephemeris__methods_ },
          { Py_tp_init, (void *) t_SP3Ephemeris_init_ },
          { Py_tp_getset, t_SP3Ephemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3Ephemeris)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SP3Ephemeris, t_SP3Ephemeris, SP3Ephemeris);

        void t_SP3Ephemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3Ephemeris), &PY_TYPE_DEF(SP3Ephemeris), module, "SP3Ephemeris", 0);
        }

        void t_SP3Ephemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Ephemeris), "class_", make_descriptor(SP3Ephemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Ephemeris), "wrapfn_", make_descriptor(t_SP3Ephemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Ephemeris), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SP3Ephemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3Ephemeris::initializeClass, 1)))
            return NULL;
          return t_SP3Ephemeris::wrap_Object(SP3Ephemeris(((t_SP3Ephemeris *) arg)->object.this$));
        }
        static PyObject *t_SP3Ephemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3Ephemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SP3Ephemeris_init_(t_SP3Ephemeris *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          jdouble a1;
          ::org::orekit::frames::Frame a2((jobject) NULL);
          jint a3;
          ::org::orekit::utils::CartesianDerivativesFilter a4((jobject) NULL);
          PyTypeObject **p4;
          SP3Ephemeris object((jobject) NULL);

          if (!parseArgs(args, "sDkIK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
          {
            INT_CALL(object = SP3Ephemeris(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SP3Ephemeris_addCoordinate(t_SP3Ephemeris *self, PyObject *args)
        {
          ::org::orekit::files::sp3::SP3Coordinate a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "kD", ::org::orekit::files::sp3::SP3Coordinate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addCoordinate(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addCoordinate", args);
          return NULL;
        }

        static PyObject *t_SP3Ephemeris_getAvailableDerivatives(t_SP3Ephemeris *self)
        {
          ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
          OBJ_CALL(result = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
        }

        static PyObject *t_SP3Ephemeris_getFrame(t_SP3Ephemeris *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_SP3Ephemeris_getId(t_SP3Ephemeris *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getId());
          return j2p(result);
        }

        static PyObject *t_SP3Ephemeris_getInterpolationSamples(t_SP3Ephemeris *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SP3Ephemeris_getMu(t_SP3Ephemeris *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Ephemeris_getSegments(t_SP3Ephemeris *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::sp3::PY_TYPE(SP3Segment));
        }

        static PyObject *t_SP3Ephemeris_getStart(t_SP3Ephemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SP3Ephemeris_getStop(t_SP3Ephemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SP3Ephemeris_get__availableDerivatives(t_SP3Ephemeris *self, void *data)
        {
          ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
          OBJ_CALL(value = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
        }

        static PyObject *t_SP3Ephemeris_get__frame(t_SP3Ephemeris *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_SP3Ephemeris_get__id(t_SP3Ephemeris *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getId());
          return j2p(value);
        }

        static PyObject *t_SP3Ephemeris_get__interpolationSamples(t_SP3Ephemeris *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SP3Ephemeris_get__mu(t_SP3Ephemeris *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SP3Ephemeris_get__segments(t_SP3Ephemeris *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_SP3Ephemeris_get__start(t_SP3Ephemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SP3Ephemeris_get__stop(t_SP3Ephemeris *self, void *data)
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
#include "org/orekit/propagation/events/PythonAbstractDetector.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/AdaptableInterval.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PythonAbstractDetector::class$ = NULL;
        jmethodID *PythonAbstractDetector::mids$ = NULL;
        bool PythonAbstractDetector::live$ = false;

        jclass PythonAbstractDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PythonAbstractDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_12f6a19557b7d4b4] = env->getMethodID(cls, "<init>", "(DDILorg/orekit/propagation/events/handlers/EventHandler;)V");
            mids$[mid_create_913a6d04c3b6bf64] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/AbstractDetector;");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_g_432f3d328c15ec82] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractDetector::PythonAbstractDetector(jdouble a0, jdouble a1, jint a2, const ::org::orekit::propagation::events::handlers::EventHandler & a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_12f6a19557b7d4b4, a0, a1, a2, a3.this$)) {}

        void PythonAbstractDetector::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonAbstractDetector::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonAbstractDetector::pythonExtension(jlong a0) const
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
      namespace events {
        static PyObject *t_PythonAbstractDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractDetector_of_(t_PythonAbstractDetector *self, PyObject *args);
        static int t_PythonAbstractDetector_init_(t_PythonAbstractDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractDetector_finalize(t_PythonAbstractDetector *self);
        static PyObject *t_PythonAbstractDetector_pythonExtension(t_PythonAbstractDetector *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractDetector_create0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jint a2, jobject a3);
        static jdouble JNICALL t_PythonAbstractDetector_g1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonAbstractDetector_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractDetector_get__self(t_PythonAbstractDetector *self, void *data);
        static PyObject *t_PythonAbstractDetector_get__parameters_(t_PythonAbstractDetector *self, void *data);
        static PyGetSetDef t_PythonAbstractDetector__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractDetector, self),
          DECLARE_GET_FIELD(t_PythonAbstractDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractDetector__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractDetector, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractDetector, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractDetector)[] = {
          { Py_tp_methods, t_PythonAbstractDetector__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractDetector_init_ },
          { Py_tp_getset, t_PythonAbstractDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(PythonAbstractDetector, t_PythonAbstractDetector, PythonAbstractDetector);
        PyObject *t_PythonAbstractDetector::wrap_Object(const PythonAbstractDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonAbstractDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonAbstractDetector *self = (t_PythonAbstractDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonAbstractDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonAbstractDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonAbstractDetector *self = (t_PythonAbstractDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonAbstractDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractDetector), &PY_TYPE_DEF(PythonAbstractDetector), module, "PythonAbstractDetector", 1);
        }

        void t_PythonAbstractDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractDetector), "class_", make_descriptor(PythonAbstractDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractDetector), "wrapfn_", make_descriptor(t_PythonAbstractDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractDetector), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractDetector::initializeClass);
          JNINativeMethod methods[] = {
            { "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/AbstractDetector;", (void *) t_PythonAbstractDetector_create0 },
            { "g", "(Lorg/orekit/propagation/SpacecraftState;)D", (void *) t_PythonAbstractDetector_g1 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractDetector_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonAbstractDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractDetector::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractDetector::wrap_Object(PythonAbstractDetector(((t_PythonAbstractDetector *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonAbstractDetector_of_(t_PythonAbstractDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonAbstractDetector_init_(t_PythonAbstractDetector *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jint a2;
          ::org::orekit::propagation::events::handlers::EventHandler a3((jobject) NULL);
          PythonAbstractDetector object((jobject) NULL);

          if (!parseArgs(args, "DDIk", ::org::orekit::propagation::events::handlers::EventHandler::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = PythonAbstractDetector(a0, a1, a2, a3));
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

        static PyObject *t_PythonAbstractDetector_finalize(t_PythonAbstractDetector *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractDetector_pythonExtension(t_PythonAbstractDetector *self, PyObject *args)
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

        static jobject JNICALL t_PythonAbstractDetector_create0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jint a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDetector::mids$[PythonAbstractDetector::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::events::AbstractDetector value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::events::t_AdaptableInterval::wrap_Object(::org::orekit::propagation::events::AdaptableInterval(a0));
          PyObject *o3 = ::org::orekit::propagation::events::handlers::t_EventHandler::wrap_Object(::org::orekit::propagation::events::handlers::EventHandler(a3));
          PyObject *result = PyObject_CallMethod(obj, "create", "OdiO", o0, (double) a1, (int) a2, o3);
          Py_DECREF(o0);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::events::AbstractDetector::initializeClass, &value))
          {
            throwTypeError("create", result);
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

        static jdouble JNICALL t_PythonAbstractDetector_g1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDetector::mids$[PythonAbstractDetector::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "g", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("g", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static void JNICALL t_PythonAbstractDetector_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDetector::mids$[PythonAbstractDetector::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractDetector::mids$[PythonAbstractDetector::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractDetector_get__self(t_PythonAbstractDetector *self, void *data)
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
        static PyObject *t_PythonAbstractDetector_get__parameters_(t_PythonAbstractDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/EarthOrientationParameterMessage.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *EarthOrientationParameterMessage::class$ = NULL;
          jmethodID *EarthOrientationParameterMessage::mids$ = NULL;
          bool EarthOrientationParameterMessage::live$ = false;

          jclass EarthOrientationParameterMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/EarthOrientationParameterMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a82ff7a18fa6993f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;ILjava/lang/String;)V");
              mids$[mid_getDut1_dff5885c2c873297] = env->getMethodID(cls, "getDut1", "()D");
              mids$[mid_getDut1Dot_dff5885c2c873297] = env->getMethodID(cls, "getDut1Dot", "()D");
              mids$[mid_getDut1DotDot_dff5885c2c873297] = env->getMethodID(cls, "getDut1DotDot", "()D");
              mids$[mid_getReferenceEpoch_85703d13e302437e] = env->getMethodID(cls, "getReferenceEpoch", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTransmissionTime_dff5885c2c873297] = env->getMethodID(cls, "getTransmissionTime", "()D");
              mids$[mid_getXp_dff5885c2c873297] = env->getMethodID(cls, "getXp", "()D");
              mids$[mid_getXpDot_dff5885c2c873297] = env->getMethodID(cls, "getXpDot", "()D");
              mids$[mid_getXpDotDot_dff5885c2c873297] = env->getMethodID(cls, "getXpDotDot", "()D");
              mids$[mid_getYp_dff5885c2c873297] = env->getMethodID(cls, "getYp", "()D");
              mids$[mid_getYpDot_dff5885c2c873297] = env->getMethodID(cls, "getYpDot", "()D");
              mids$[mid_getYpDotDot_dff5885c2c873297] = env->getMethodID(cls, "getYpDotDot", "()D");
              mids$[mid_setDut1_17db3a65980d3441] = env->getMethodID(cls, "setDut1", "(D)V");
              mids$[mid_setDut1Dot_17db3a65980d3441] = env->getMethodID(cls, "setDut1Dot", "(D)V");
              mids$[mid_setDut1DotDot_17db3a65980d3441] = env->getMethodID(cls, "setDut1DotDot", "(D)V");
              mids$[mid_setReferenceEpoch_600a2a61652bc473] = env->getMethodID(cls, "setReferenceEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_setTransmissionTime_17db3a65980d3441] = env->getMethodID(cls, "setTransmissionTime", "(D)V");
              mids$[mid_setXp_17db3a65980d3441] = env->getMethodID(cls, "setXp", "(D)V");
              mids$[mid_setXpDot_17db3a65980d3441] = env->getMethodID(cls, "setXpDot", "(D)V");
              mids$[mid_setXpDotDot_17db3a65980d3441] = env->getMethodID(cls, "setXpDotDot", "(D)V");
              mids$[mid_setYp_17db3a65980d3441] = env->getMethodID(cls, "setYp", "(D)V");
              mids$[mid_setYpDot_17db3a65980d3441] = env->getMethodID(cls, "setYpDot", "(D)V");
              mids$[mid_setYpDotDot_17db3a65980d3441] = env->getMethodID(cls, "setYpDotDot", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          EarthOrientationParameterMessage::EarthOrientationParameterMessage(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1, const ::java::lang::String & a2) : ::org::orekit::files::rinex::navigation::TypeSvMessage(env->newObject(initializeClass, &mids$, mid_init$_a82ff7a18fa6993f, a0.this$, a1, a2.this$)) {}

          jdouble EarthOrientationParameterMessage::getDut1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDut1_dff5885c2c873297]);
          }

          jdouble EarthOrientationParameterMessage::getDut1Dot() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDut1Dot_dff5885c2c873297]);
          }

          jdouble EarthOrientationParameterMessage::getDut1DotDot() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDut1DotDot_dff5885c2c873297]);
          }

          ::org::orekit::time::AbsoluteDate EarthOrientationParameterMessage::getReferenceEpoch() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceEpoch_85703d13e302437e]));
          }

          jdouble EarthOrientationParameterMessage::getTransmissionTime() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTransmissionTime_dff5885c2c873297]);
          }

          jdouble EarthOrientationParameterMessage::getXp() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getXp_dff5885c2c873297]);
          }

          jdouble EarthOrientationParameterMessage::getXpDot() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getXpDot_dff5885c2c873297]);
          }

          jdouble EarthOrientationParameterMessage::getXpDotDot() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getXpDotDot_dff5885c2c873297]);
          }

          jdouble EarthOrientationParameterMessage::getYp() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getYp_dff5885c2c873297]);
          }

          jdouble EarthOrientationParameterMessage::getYpDot() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getYpDot_dff5885c2c873297]);
          }

          jdouble EarthOrientationParameterMessage::getYpDotDot() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getYpDotDot_dff5885c2c873297]);
          }

          void EarthOrientationParameterMessage::setDut1(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setDut1_17db3a65980d3441], a0);
          }

          void EarthOrientationParameterMessage::setDut1Dot(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setDut1Dot_17db3a65980d3441], a0);
          }

          void EarthOrientationParameterMessage::setDut1DotDot(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setDut1DotDot_17db3a65980d3441], a0);
          }

          void EarthOrientationParameterMessage::setReferenceEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setReferenceEpoch_600a2a61652bc473], a0.this$);
          }

          void EarthOrientationParameterMessage::setTransmissionTime(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setTransmissionTime_17db3a65980d3441], a0);
          }

          void EarthOrientationParameterMessage::setXp(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setXp_17db3a65980d3441], a0);
          }

          void EarthOrientationParameterMessage::setXpDot(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setXpDot_17db3a65980d3441], a0);
          }

          void EarthOrientationParameterMessage::setXpDotDot(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setXpDotDot_17db3a65980d3441], a0);
          }

          void EarthOrientationParameterMessage::setYp(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setYp_17db3a65980d3441], a0);
          }

          void EarthOrientationParameterMessage::setYpDot(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setYpDot_17db3a65980d3441], a0);
          }

          void EarthOrientationParameterMessage::setYpDotDot(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setYpDotDot_17db3a65980d3441], a0);
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
          static PyObject *t_EarthOrientationParameterMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_EarthOrientationParameterMessage_init_(t_EarthOrientationParameterMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_EarthOrientationParameterMessage_getDut1(t_EarthOrientationParameterMessage *self);
          static PyObject *t_EarthOrientationParameterMessage_getDut1Dot(t_EarthOrientationParameterMessage *self);
          static PyObject *t_EarthOrientationParameterMessage_getDut1DotDot(t_EarthOrientationParameterMessage *self);
          static PyObject *t_EarthOrientationParameterMessage_getReferenceEpoch(t_EarthOrientationParameterMessage *self);
          static PyObject *t_EarthOrientationParameterMessage_getTransmissionTime(t_EarthOrientationParameterMessage *self);
          static PyObject *t_EarthOrientationParameterMessage_getXp(t_EarthOrientationParameterMessage *self);
          static PyObject *t_EarthOrientationParameterMessage_getXpDot(t_EarthOrientationParameterMessage *self);
          static PyObject *t_EarthOrientationParameterMessage_getXpDotDot(t_EarthOrientationParameterMessage *self);
          static PyObject *t_EarthOrientationParameterMessage_getYp(t_EarthOrientationParameterMessage *self);
          static PyObject *t_EarthOrientationParameterMessage_getYpDot(t_EarthOrientationParameterMessage *self);
          static PyObject *t_EarthOrientationParameterMessage_getYpDotDot(t_EarthOrientationParameterMessage *self);
          static PyObject *t_EarthOrientationParameterMessage_setDut1(t_EarthOrientationParameterMessage *self, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_setDut1Dot(t_EarthOrientationParameterMessage *self, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_setDut1DotDot(t_EarthOrientationParameterMessage *self, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_setReferenceEpoch(t_EarthOrientationParameterMessage *self, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_setTransmissionTime(t_EarthOrientationParameterMessage *self, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_setXp(t_EarthOrientationParameterMessage *self, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_setXpDot(t_EarthOrientationParameterMessage *self, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_setXpDotDot(t_EarthOrientationParameterMessage *self, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_setYp(t_EarthOrientationParameterMessage *self, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_setYpDot(t_EarthOrientationParameterMessage *self, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_setYpDotDot(t_EarthOrientationParameterMessage *self, PyObject *arg);
          static PyObject *t_EarthOrientationParameterMessage_get__dut1(t_EarthOrientationParameterMessage *self, void *data);
          static int t_EarthOrientationParameterMessage_set__dut1(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data);
          static PyObject *t_EarthOrientationParameterMessage_get__dut1Dot(t_EarthOrientationParameterMessage *self, void *data);
          static int t_EarthOrientationParameterMessage_set__dut1Dot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data);
          static PyObject *t_EarthOrientationParameterMessage_get__dut1DotDot(t_EarthOrientationParameterMessage *self, void *data);
          static int t_EarthOrientationParameterMessage_set__dut1DotDot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data);
          static PyObject *t_EarthOrientationParameterMessage_get__referenceEpoch(t_EarthOrientationParameterMessage *self, void *data);
          static int t_EarthOrientationParameterMessage_set__referenceEpoch(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data);
          static PyObject *t_EarthOrientationParameterMessage_get__transmissionTime(t_EarthOrientationParameterMessage *self, void *data);
          static int t_EarthOrientationParameterMessage_set__transmissionTime(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data);
          static PyObject *t_EarthOrientationParameterMessage_get__xp(t_EarthOrientationParameterMessage *self, void *data);
          static int t_EarthOrientationParameterMessage_set__xp(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data);
          static PyObject *t_EarthOrientationParameterMessage_get__xpDot(t_EarthOrientationParameterMessage *self, void *data);
          static int t_EarthOrientationParameterMessage_set__xpDot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data);
          static PyObject *t_EarthOrientationParameterMessage_get__xpDotDot(t_EarthOrientationParameterMessage *self, void *data);
          static int t_EarthOrientationParameterMessage_set__xpDotDot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data);
          static PyObject *t_EarthOrientationParameterMessage_get__yp(t_EarthOrientationParameterMessage *self, void *data);
          static int t_EarthOrientationParameterMessage_set__yp(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data);
          static PyObject *t_EarthOrientationParameterMessage_get__ypDot(t_EarthOrientationParameterMessage *self, void *data);
          static int t_EarthOrientationParameterMessage_set__ypDot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data);
          static PyObject *t_EarthOrientationParameterMessage_get__ypDotDot(t_EarthOrientationParameterMessage *self, void *data);
          static int t_EarthOrientationParameterMessage_set__ypDotDot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data);
          static PyGetSetDef t_EarthOrientationParameterMessage__fields_[] = {
            DECLARE_GETSET_FIELD(t_EarthOrientationParameterMessage, dut1),
            DECLARE_GETSET_FIELD(t_EarthOrientationParameterMessage, dut1Dot),
            DECLARE_GETSET_FIELD(t_EarthOrientationParameterMessage, dut1DotDot),
            DECLARE_GETSET_FIELD(t_EarthOrientationParameterMessage, referenceEpoch),
            DECLARE_GETSET_FIELD(t_EarthOrientationParameterMessage, transmissionTime),
            DECLARE_GETSET_FIELD(t_EarthOrientationParameterMessage, xp),
            DECLARE_GETSET_FIELD(t_EarthOrientationParameterMessage, xpDot),
            DECLARE_GETSET_FIELD(t_EarthOrientationParameterMessage, xpDotDot),
            DECLARE_GETSET_FIELD(t_EarthOrientationParameterMessage, yp),
            DECLARE_GETSET_FIELD(t_EarthOrientationParameterMessage, ypDot),
            DECLARE_GETSET_FIELD(t_EarthOrientationParameterMessage, ypDotDot),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_EarthOrientationParameterMessage__methods_[] = {
            DECLARE_METHOD(t_EarthOrientationParameterMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, getDut1, METH_NOARGS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, getDut1Dot, METH_NOARGS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, getDut1DotDot, METH_NOARGS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, getReferenceEpoch, METH_NOARGS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, getTransmissionTime, METH_NOARGS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, getXp, METH_NOARGS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, getXpDot, METH_NOARGS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, getXpDotDot, METH_NOARGS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, getYp, METH_NOARGS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, getYpDot, METH_NOARGS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, getYpDotDot, METH_NOARGS),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, setDut1, METH_O),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, setDut1Dot, METH_O),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, setDut1DotDot, METH_O),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, setReferenceEpoch, METH_O),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, setTransmissionTime, METH_O),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, setXp, METH_O),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, setXpDot, METH_O),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, setXpDotDot, METH_O),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, setYp, METH_O),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, setYpDot, METH_O),
            DECLARE_METHOD(t_EarthOrientationParameterMessage, setYpDotDot, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(EarthOrientationParameterMessage)[] = {
            { Py_tp_methods, t_EarthOrientationParameterMessage__methods_ },
            { Py_tp_init, (void *) t_EarthOrientationParameterMessage_init_ },
            { Py_tp_getset, t_EarthOrientationParameterMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(EarthOrientationParameterMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::navigation::TypeSvMessage),
            NULL
          };

          DEFINE_TYPE(EarthOrientationParameterMessage, t_EarthOrientationParameterMessage, EarthOrientationParameterMessage);

          void t_EarthOrientationParameterMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(EarthOrientationParameterMessage), &PY_TYPE_DEF(EarthOrientationParameterMessage), module, "EarthOrientationParameterMessage", 0);
          }

          void t_EarthOrientationParameterMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(EarthOrientationParameterMessage), "class_", make_descriptor(EarthOrientationParameterMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EarthOrientationParameterMessage), "wrapfn_", make_descriptor(t_EarthOrientationParameterMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EarthOrientationParameterMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_EarthOrientationParameterMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, EarthOrientationParameterMessage::initializeClass, 1)))
              return NULL;
            return t_EarthOrientationParameterMessage::wrap_Object(EarthOrientationParameterMessage(((t_EarthOrientationParameterMessage *) arg)->object.this$));
          }
          static PyObject *t_EarthOrientationParameterMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, EarthOrientationParameterMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_EarthOrientationParameterMessage_init_(t_EarthOrientationParameterMessage *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::java::lang::String a2((jobject) NULL);
            EarthOrientationParameterMessage object((jobject) NULL);

            if (!parseArgs(args, "KIs", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2))
            {
              INT_CALL(object = EarthOrientationParameterMessage(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_EarthOrientationParameterMessage_getDut1(t_EarthOrientationParameterMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getDut1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_EarthOrientationParameterMessage_getDut1Dot(t_EarthOrientationParameterMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getDut1Dot());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_EarthOrientationParameterMessage_getDut1DotDot(t_EarthOrientationParameterMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getDut1DotDot());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_EarthOrientationParameterMessage_getReferenceEpoch(t_EarthOrientationParameterMessage *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceEpoch());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_EarthOrientationParameterMessage_getTransmissionTime(t_EarthOrientationParameterMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTransmissionTime());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_EarthOrientationParameterMessage_getXp(t_EarthOrientationParameterMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getXp());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_EarthOrientationParameterMessage_getXpDot(t_EarthOrientationParameterMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getXpDot());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_EarthOrientationParameterMessage_getXpDotDot(t_EarthOrientationParameterMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getXpDotDot());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_EarthOrientationParameterMessage_getYp(t_EarthOrientationParameterMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getYp());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_EarthOrientationParameterMessage_getYpDot(t_EarthOrientationParameterMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getYpDot());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_EarthOrientationParameterMessage_getYpDotDot(t_EarthOrientationParameterMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getYpDotDot());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_EarthOrientationParameterMessage_setDut1(t_EarthOrientationParameterMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setDut1(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setDut1", arg);
            return NULL;
          }

          static PyObject *t_EarthOrientationParameterMessage_setDut1Dot(t_EarthOrientationParameterMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setDut1Dot(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setDut1Dot", arg);
            return NULL;
          }

          static PyObject *t_EarthOrientationParameterMessage_setDut1DotDot(t_EarthOrientationParameterMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setDut1DotDot(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setDut1DotDot", arg);
            return NULL;
          }

          static PyObject *t_EarthOrientationParameterMessage_setReferenceEpoch(t_EarthOrientationParameterMessage *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setReferenceEpoch(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setReferenceEpoch", arg);
            return NULL;
          }

          static PyObject *t_EarthOrientationParameterMessage_setTransmissionTime(t_EarthOrientationParameterMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setTransmissionTime(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTransmissionTime", arg);
            return NULL;
          }

          static PyObject *t_EarthOrientationParameterMessage_setXp(t_EarthOrientationParameterMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setXp(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setXp", arg);
            return NULL;
          }

          static PyObject *t_EarthOrientationParameterMessage_setXpDot(t_EarthOrientationParameterMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setXpDot(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setXpDot", arg);
            return NULL;
          }

          static PyObject *t_EarthOrientationParameterMessage_setXpDotDot(t_EarthOrientationParameterMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setXpDotDot(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setXpDotDot", arg);
            return NULL;
          }

          static PyObject *t_EarthOrientationParameterMessage_setYp(t_EarthOrientationParameterMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setYp(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setYp", arg);
            return NULL;
          }

          static PyObject *t_EarthOrientationParameterMessage_setYpDot(t_EarthOrientationParameterMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setYpDot(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setYpDot", arg);
            return NULL;
          }

          static PyObject *t_EarthOrientationParameterMessage_setYpDotDot(t_EarthOrientationParameterMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setYpDotDot(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setYpDotDot", arg);
            return NULL;
          }

          static PyObject *t_EarthOrientationParameterMessage_get__dut1(t_EarthOrientationParameterMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getDut1());
            return PyFloat_FromDouble((double) value);
          }
          static int t_EarthOrientationParameterMessage_set__dut1(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setDut1(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "dut1", arg);
            return -1;
          }

          static PyObject *t_EarthOrientationParameterMessage_get__dut1Dot(t_EarthOrientationParameterMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getDut1Dot());
            return PyFloat_FromDouble((double) value);
          }
          static int t_EarthOrientationParameterMessage_set__dut1Dot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setDut1Dot(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "dut1Dot", arg);
            return -1;
          }

          static PyObject *t_EarthOrientationParameterMessage_get__dut1DotDot(t_EarthOrientationParameterMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getDut1DotDot());
            return PyFloat_FromDouble((double) value);
          }
          static int t_EarthOrientationParameterMessage_set__dut1DotDot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setDut1DotDot(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "dut1DotDot", arg);
            return -1;
          }

          static PyObject *t_EarthOrientationParameterMessage_get__referenceEpoch(t_EarthOrientationParameterMessage *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceEpoch());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
          static int t_EarthOrientationParameterMessage_set__referenceEpoch(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
              {
                INT_CALL(self->object.setReferenceEpoch(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "referenceEpoch", arg);
            return -1;
          }

          static PyObject *t_EarthOrientationParameterMessage_get__transmissionTime(t_EarthOrientationParameterMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTransmissionTime());
            return PyFloat_FromDouble((double) value);
          }
          static int t_EarthOrientationParameterMessage_set__transmissionTime(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setTransmissionTime(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "transmissionTime", arg);
            return -1;
          }

          static PyObject *t_EarthOrientationParameterMessage_get__xp(t_EarthOrientationParameterMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getXp());
            return PyFloat_FromDouble((double) value);
          }
          static int t_EarthOrientationParameterMessage_set__xp(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setXp(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "xp", arg);
            return -1;
          }

          static PyObject *t_EarthOrientationParameterMessage_get__xpDot(t_EarthOrientationParameterMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getXpDot());
            return PyFloat_FromDouble((double) value);
          }
          static int t_EarthOrientationParameterMessage_set__xpDot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setXpDot(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "xpDot", arg);
            return -1;
          }

          static PyObject *t_EarthOrientationParameterMessage_get__xpDotDot(t_EarthOrientationParameterMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getXpDotDot());
            return PyFloat_FromDouble((double) value);
          }
          static int t_EarthOrientationParameterMessage_set__xpDotDot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setXpDotDot(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "xpDotDot", arg);
            return -1;
          }

          static PyObject *t_EarthOrientationParameterMessage_get__yp(t_EarthOrientationParameterMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getYp());
            return PyFloat_FromDouble((double) value);
          }
          static int t_EarthOrientationParameterMessage_set__yp(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setYp(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "yp", arg);
            return -1;
          }

          static PyObject *t_EarthOrientationParameterMessage_get__ypDot(t_EarthOrientationParameterMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getYpDot());
            return PyFloat_FromDouble((double) value);
          }
          static int t_EarthOrientationParameterMessage_set__ypDot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setYpDot(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "ypDot", arg);
            return -1;
          }

          static PyObject *t_EarthOrientationParameterMessage_get__ypDotDot(t_EarthOrientationParameterMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getYpDotDot());
            return PyFloat_FromDouble((double) value);
          }
          static int t_EarthOrientationParameterMessage_set__ypDotDot(t_EarthOrientationParameterMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setYpDotDot(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "ypDotDot", arg);
            return -1;
          }
        }
      }
    }
  }
}
