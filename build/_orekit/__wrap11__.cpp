#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/propulsion/PythonPropulsionModel.h"
#include "org/orekit/forces/maneuvers/propulsion/PropulsionModel.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *PythonPropulsionModel::class$ = NULL;
          jmethodID *PythonPropulsionModel::mids$ = NULL;
          bool PythonPropulsionModel::live$ = false;

          jclass PythonPropulsionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/PythonPropulsionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getAcceleration_be3781a72bd4ba13] = env->getMethodID(cls, "getAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/attitudes/FieldAttitude;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getAcceleration_64acd703c3b3c863] = env->getMethodID(cls, "getAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/attitudes/Attitude;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getControl3DVectorCostType_9fb96072e0d6dbf0] = env->getMethodID(cls, "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");
              mids$[mid_getMassDerivatives_4368a5d862927c08] = env->getMethodID(cls, "getMassDerivatives", "(Lorg/orekit/propagation/SpacecraftState;[D)D");
              mids$[mid_getMassDerivatives_79518d097c897d26] = env->getMethodID(cls, "getMassDerivatives", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_init_3d13474d79f5e7bc] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonPropulsionModel::PythonPropulsionModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void PythonPropulsionModel::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonPropulsionModel::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonPropulsionModel::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
          static PyObject *t_PythonPropulsionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonPropulsionModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonPropulsionModel_init_(t_PythonPropulsionModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonPropulsionModel_finalize(t_PythonPropulsionModel *self);
          static PyObject *t_PythonPropulsionModel_pythonExtension(t_PythonPropulsionModel *self, PyObject *args);
          static jobject JNICALL t_PythonPropulsionModel_getAcceleration0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static jobject JNICALL t_PythonPropulsionModel_getAcceleration1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static jobject JNICALL t_PythonPropulsionModel_getControl3DVectorCostType2(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonPropulsionModel_getMassDerivatives3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jdouble JNICALL t_PythonPropulsionModel_getMassDerivatives4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonPropulsionModel_getName5(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonPropulsionModel_getParametersDrivers6(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonPropulsionModel_init7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonPropulsionModel_pythonDecRef8(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonPropulsionModel_get__self(t_PythonPropulsionModel *self, void *data);
          static PyGetSetDef t_PythonPropulsionModel__fields_[] = {
            DECLARE_GET_FIELD(t_PythonPropulsionModel, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonPropulsionModel__methods_[] = {
            DECLARE_METHOD(t_PythonPropulsionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonPropulsionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonPropulsionModel, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonPropulsionModel, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonPropulsionModel)[] = {
            { Py_tp_methods, t_PythonPropulsionModel__methods_ },
            { Py_tp_init, (void *) t_PythonPropulsionModel_init_ },
            { Py_tp_getset, t_PythonPropulsionModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonPropulsionModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonPropulsionModel, t_PythonPropulsionModel, PythonPropulsionModel);

          void t_PythonPropulsionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonPropulsionModel), &PY_TYPE_DEF(PythonPropulsionModel), module, "PythonPropulsionModel", 1);
          }

          void t_PythonPropulsionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropulsionModel), "class_", make_descriptor(PythonPropulsionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropulsionModel), "wrapfn_", make_descriptor(t_PythonPropulsionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropulsionModel), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonPropulsionModel::initializeClass);
            JNINativeMethod methods[] = {
              { "getAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/attitudes/Attitude;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonPropulsionModel_getAcceleration0 },
              { "getAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/attitudes/FieldAttitude;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonPropulsionModel_getAcceleration1 },
              { "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;", (void *) t_PythonPropulsionModel_getControl3DVectorCostType2 },
              { "getMassDerivatives", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonPropulsionModel_getMassDerivatives3 },
              { "getMassDerivatives", "(Lorg/orekit/propagation/SpacecraftState;[D)D", (void *) t_PythonPropulsionModel_getMassDerivatives4 },
              { "getName", "()Ljava/lang/String;", (void *) t_PythonPropulsionModel_getName5 },
              { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonPropulsionModel_getParametersDrivers6 },
              { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonPropulsionModel_init7 },
              { "pythonDecRef", "()V", (void *) t_PythonPropulsionModel_pythonDecRef8 },
            };
            env->registerNatives(cls, methods, 9);
          }

          static PyObject *t_PythonPropulsionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonPropulsionModel::initializeClass, 1)))
              return NULL;
            return t_PythonPropulsionModel::wrap_Object(PythonPropulsionModel(((t_PythonPropulsionModel *) arg)->object.this$));
          }
          static PyObject *t_PythonPropulsionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonPropulsionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonPropulsionModel_init_(t_PythonPropulsionModel *self, PyObject *args, PyObject *kwds)
          {
            PythonPropulsionModel object((jobject) NULL);

            INT_CALL(object = PythonPropulsionModel());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonPropulsionModel_finalize(t_PythonPropulsionModel *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonPropulsionModel_pythonExtension(t_PythonPropulsionModel *self, PyObject *args)
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

          static jobject JNICALL t_PythonPropulsionModel_getAcceleration0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = ::org::orekit::attitudes::t_Attitude::wrap_Object(::org::orekit::attitudes::Attitude(a1));
            PyObject *o2 = JArray<jdouble>(a2).wrap();
            PyObject *result = PyObject_CallMethod(obj, "getAcceleration", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              throwTypeError("getAcceleration", result);
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

          static jobject JNICALL t_PythonPropulsionModel_getAcceleration1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
            PyObject *o1 = ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(::org::orekit::attitudes::FieldAttitude(a1));
            PyObject *o2 = JArray<jobject>(a2).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "getAcceleration", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
            {
              throwTypeError("getAcceleration", result);
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

          static jobject JNICALL t_PythonPropulsionModel_getControl3DVectorCostType2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::maneuvers::Control3DVectorCostType value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getControl3DVectorCostType", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::maneuvers::Control3DVectorCostType::initializeClass, &value))
            {
              throwTypeError("getControl3DVectorCostType", result);
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

          static jobject JNICALL t_PythonPropulsionModel_getMassDerivatives3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
            PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "getMassDerivatives", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("getMassDerivatives", result);
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

          static jdouble JNICALL t_PythonPropulsionModel_getMassDerivatives4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = JArray<jdouble>(a1).wrap();
            PyObject *result = PyObject_CallMethod(obj, "getMassDerivatives", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getMassDerivatives", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonPropulsionModel_getName5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::lang::String value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getName", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "s", &value))
            {
              throwTypeError("getName", result);
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

          static jobject JNICALL t_PythonPropulsionModel_getParametersDrivers6(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_a27fc9afd27e559d]);
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

          static void JNICALL t_PythonPropulsionModel_init7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
            PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonPropulsionModel_pythonDecRef8(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonPropulsionModel::mids$[PythonPropulsionModel::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonPropulsionModel_get__self(t_PythonPropulsionModel *self, void *data)
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
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IntegerArrayConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$IntegerArrayConsumer::class$ = NULL;
            jmethodID *ParseToken$IntegerArrayConsumer::mids$ = NULL;
            bool ParseToken$IntegerArrayConsumer::live$ = false;

            jclass ParseToken$IntegerArrayConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$IntegerArrayConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_3b603738d1eb3233] = env->getMethodID(cls, "accept", "([I)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$IntegerArrayConsumer::accept(const JArray< jint > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_3b603738d1eb3233], a0.this$);
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
            static PyObject *t_ParseToken$IntegerArrayConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IntegerArrayConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IntegerArrayConsumer_accept(t_ParseToken$IntegerArrayConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$IntegerArrayConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$IntegerArrayConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IntegerArrayConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IntegerArrayConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$IntegerArrayConsumer)[] = {
              { Py_tp_methods, t_ParseToken$IntegerArrayConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$IntegerArrayConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$IntegerArrayConsumer, t_ParseToken$IntegerArrayConsumer, ParseToken$IntegerArrayConsumer);

            void t_ParseToken$IntegerArrayConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$IntegerArrayConsumer), &PY_TYPE_DEF(ParseToken$IntegerArrayConsumer), module, "ParseToken$IntegerArrayConsumer", 0);
            }

            void t_ParseToken$IntegerArrayConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IntegerArrayConsumer), "class_", make_descriptor(ParseToken$IntegerArrayConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IntegerArrayConsumer), "wrapfn_", make_descriptor(t_ParseToken$IntegerArrayConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IntegerArrayConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$IntegerArrayConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$IntegerArrayConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$IntegerArrayConsumer::wrap_Object(ParseToken$IntegerArrayConsumer(((t_ParseToken$IntegerArrayConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$IntegerArrayConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$IntegerArrayConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$IntegerArrayConsumer_accept(t_ParseToken$IntegerArrayConsumer *self, PyObject *arg)
            {
              JArray< jint > a0((jobject) NULL);

              if (!parseArg(arg, "[I", &a0))
              {
                OBJ_CALL(self->object.accept(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", arg);
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
#include "org/hipparchus/analysis/function/Expm1.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Expm1::class$ = NULL;
        jmethodID *Expm1::mids$ = NULL;
        bool Expm1::live$ = false;

        jclass Expm1::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Expm1");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_1f22c1881e72229d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Expm1::Expm1() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble Expm1::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_0ba5fed9597b693e], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Expm1::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_1f22c1881e72229d], a0.this$));
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
        static PyObject *t_Expm1_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Expm1_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Expm1_init_(t_Expm1 *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Expm1_value(t_Expm1 *self, PyObject *args);

        static PyMethodDef t_Expm1__methods_[] = {
          DECLARE_METHOD(t_Expm1, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Expm1, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Expm1, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Expm1)[] = {
          { Py_tp_methods, t_Expm1__methods_ },
          { Py_tp_init, (void *) t_Expm1_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Expm1)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Expm1, t_Expm1, Expm1);

        void t_Expm1::install(PyObject *module)
        {
          installType(&PY_TYPE(Expm1), &PY_TYPE_DEF(Expm1), module, "Expm1", 0);
        }

        void t_Expm1::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Expm1), "class_", make_descriptor(Expm1::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Expm1), "wrapfn_", make_descriptor(t_Expm1::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Expm1), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Expm1_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Expm1::initializeClass, 1)))
            return NULL;
          return t_Expm1::wrap_Object(Expm1(((t_Expm1 *) arg)->object.this$));
        }
        static PyObject *t_Expm1_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Expm1::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Expm1_init_(t_Expm1 *self, PyObject *args, PyObject *kwds)
        {
          Expm1 object((jobject) NULL);

          INT_CALL(object = Expm1());
          self->object = object;

          return 0;
        }

        static PyObject *t_Expm1_value(t_Expm1 *self, PyObject *args)
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
#include "org/orekit/gnss/metric/ntrip/DataFormat.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/metric/ntrip/DataFormat.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *DataFormat::class$ = NULL;
          jmethodID *DataFormat::mids$ = NULL;
          bool DataFormat::live$ = false;
          DataFormat *DataFormat::BINEX = NULL;
          DataFormat *DataFormat::CMR = NULL;
          DataFormat *DataFormat::CMR_PLUS = NULL;
          DataFormat *DataFormat::RAW = NULL;
          DataFormat *DataFormat::RINEX = NULL;
          DataFormat *DataFormat::RTCA = NULL;
          DataFormat *DataFormat::RTCM_2 = NULL;
          DataFormat *DataFormat::RTCM_3 = NULL;
          DataFormat *DataFormat::RTCM_SAPOS = NULL;
          DataFormat *DataFormat::SAPOS_ADV = NULL;
          DataFormat *DataFormat::SP3 = NULL;

          jclass DataFormat::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/DataFormat");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDataFormat_9a83d3afd75fb722] = env->getStaticMethodID(cls, "getDataFormat", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/DataFormat;");
              mids$[mid_valueOf_9a83d3afd75fb722] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/DataFormat;");
              mids$[mid_values_b4d7732c2de3cc07] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/ntrip/DataFormat;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              BINEX = new DataFormat(env->getStaticObjectField(cls, "BINEX", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              CMR = new DataFormat(env->getStaticObjectField(cls, "CMR", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              CMR_PLUS = new DataFormat(env->getStaticObjectField(cls, "CMR_PLUS", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              RAW = new DataFormat(env->getStaticObjectField(cls, "RAW", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              RINEX = new DataFormat(env->getStaticObjectField(cls, "RINEX", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              RTCA = new DataFormat(env->getStaticObjectField(cls, "RTCA", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              RTCM_2 = new DataFormat(env->getStaticObjectField(cls, "RTCM_2", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              RTCM_3 = new DataFormat(env->getStaticObjectField(cls, "RTCM_3", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              RTCM_SAPOS = new DataFormat(env->getStaticObjectField(cls, "RTCM_SAPOS", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              SAPOS_ADV = new DataFormat(env->getStaticObjectField(cls, "SAPOS_ADV", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              SP3 = new DataFormat(env->getStaticObjectField(cls, "SP3", "Lorg/orekit/gnss/metric/ntrip/DataFormat;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DataFormat DataFormat::getDataFormat(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return DataFormat(env->callStaticObjectMethod(cls, mids$[mid_getDataFormat_9a83d3afd75fb722], a0.this$));
          }

          DataFormat DataFormat::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return DataFormat(env->callStaticObjectMethod(cls, mids$[mid_valueOf_9a83d3afd75fb722], a0.this$));
          }

          JArray< DataFormat > DataFormat::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< DataFormat >(env->callStaticObjectMethod(cls, mids$[mid_values_b4d7732c2de3cc07]));
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
          static PyObject *t_DataFormat_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DataFormat_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DataFormat_of_(t_DataFormat *self, PyObject *args);
          static PyObject *t_DataFormat_getDataFormat(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DataFormat_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_DataFormat_values(PyTypeObject *type);
          static PyObject *t_DataFormat_get__parameters_(t_DataFormat *self, void *data);
          static PyGetSetDef t_DataFormat__fields_[] = {
            DECLARE_GET_FIELD(t_DataFormat, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DataFormat__methods_[] = {
            DECLARE_METHOD(t_DataFormat, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DataFormat, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DataFormat, of_, METH_VARARGS),
            DECLARE_METHOD(t_DataFormat, getDataFormat, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DataFormat, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_DataFormat, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DataFormat)[] = {
            { Py_tp_methods, t_DataFormat__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_DataFormat__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DataFormat)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(DataFormat, t_DataFormat, DataFormat);
          PyObject *t_DataFormat::wrap_Object(const DataFormat& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DataFormat::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DataFormat *self = (t_DataFormat *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_DataFormat::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_DataFormat::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_DataFormat *self = (t_DataFormat *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_DataFormat::install(PyObject *module)
          {
            installType(&PY_TYPE(DataFormat), &PY_TYPE_DEF(DataFormat), module, "DataFormat", 0);
          }

          void t_DataFormat::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "class_", make_descriptor(DataFormat::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "wrapfn_", make_descriptor(t_DataFormat::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "boxfn_", make_descriptor(boxObject));
            env->getClass(DataFormat::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "BINEX", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::BINEX)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "CMR", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::CMR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "CMR_PLUS", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::CMR_PLUS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "RAW", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::RAW)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "RINEX", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::RINEX)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "RTCA", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::RTCA)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "RTCM_2", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::RTCM_2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "RTCM_3", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::RTCM_3)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "RTCM_SAPOS", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::RTCM_SAPOS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "SAPOS_ADV", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::SAPOS_ADV)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataFormat), "SP3", make_descriptor(t_DataFormat::wrap_Object(*DataFormat::SP3)));
          }

          static PyObject *t_DataFormat_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DataFormat::initializeClass, 1)))
              return NULL;
            return t_DataFormat::wrap_Object(DataFormat(((t_DataFormat *) arg)->object.this$));
          }
          static PyObject *t_DataFormat_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DataFormat::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DataFormat_of_(t_DataFormat *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_DataFormat_getDataFormat(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            DataFormat result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::DataFormat::getDataFormat(a0));
              return t_DataFormat::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getDataFormat", arg);
            return NULL;
          }

          static PyObject *t_DataFormat_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            DataFormat result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::DataFormat::valueOf(a0));
              return t_DataFormat::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_DataFormat_values(PyTypeObject *type)
          {
            JArray< DataFormat > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::DataFormat::values());
            return JArray<jobject>(result.this$).wrap(t_DataFormat::wrap_jobject);
          }
          static PyObject *t_DataFormat_get__parameters_(t_DataFormat *self, void *data)
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
            mids$[mid_init$_74efa9420cae4dd5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/units/Unit;Lorg/orekit/utils/units/Unit;)V");
            mids$[mid_convert_0ba5fed9597b693e] = env->getMethodID(cls, "convert", "(D)D");
            mids$[mid_getFrom_196b004fd4585106] = env->getMethodID(cls, "getFrom", "()Lorg/orekit/utils/units/Unit;");
            mids$[mid_getTo_196b004fd4585106] = env->getMethodID(cls, "getTo", "()Lorg/orekit/utils/units/Unit;");
            mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

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

        UnitsConverter::UnitsConverter(const ::org::orekit::utils::units::Unit & a0, const ::org::orekit::utils::units::Unit & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_74efa9420cae4dd5, a0.this$, a1.this$)) {}

        jdouble UnitsConverter::convert(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_convert_0ba5fed9597b693e], a0);
        }

        ::org::orekit::utils::units::Unit UnitsConverter::getFrom() const
        {
          return ::org::orekit::utils::units::Unit(env->callObjectMethod(this$, mids$[mid_getFrom_196b004fd4585106]));
        }

        ::org::orekit::utils::units::Unit UnitsConverter::getTo() const
        {
          return ::org::orekit::utils::units::Unit(env->callObjectMethod(this$, mids$[mid_getTo_196b004fd4585106]));
        }

        ::java::lang::String UnitsConverter::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
#include "org/orekit/propagation/events/ParameterDrivenDateIntervalDetector.h"
#include "org/orekit/propagation/events/ParameterDrivenDateIntervalDetector.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/DateDriver.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *ParameterDrivenDateIntervalDetector::class$ = NULL;
        jmethodID *ParameterDrivenDateIntervalDetector::mids$ = NULL;
        bool ParameterDrivenDateIntervalDetector::live$ = false;
        ::java::lang::String *ParameterDrivenDateIntervalDetector::DURATION_SUFFIX = NULL;
        ::java::lang::String *ParameterDrivenDateIntervalDetector::MEDIAN_SUFFIX = NULL;
        ::java::lang::String *ParameterDrivenDateIntervalDetector::START_SUFFIX = NULL;
        ::java::lang::String *ParameterDrivenDateIntervalDetector::STOP_SUFFIX = NULL;

        jclass ParameterDrivenDateIntervalDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/ParameterDrivenDateIntervalDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_30d9ee235a4c15b2] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_init$_44d04d6a1ac9a60f] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;D)V");
            mids$[mid_g_66a2f071e6ed0c06] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getDurationDriver_ac0e5f8f2fa86f4f] = env->getMethodID(cls, "getDurationDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getMedianDriver_bacf6e93022fe00a] = env->getMethodID(cls, "getMedianDriver", "()Lorg/orekit/utils/DateDriver;");
            mids$[mid_getStartDriver_bacf6e93022fe00a] = env->getMethodID(cls, "getStartDriver", "()Lorg/orekit/utils/DateDriver;");
            mids$[mid_getStopDriver_bacf6e93022fe00a] = env->getMethodID(cls, "getStopDriver", "()Lorg/orekit/utils/DateDriver;");
            mids$[mid_create_a41332ce18ee121c] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/ParameterDrivenDateIntervalDetector;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DURATION_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "DURATION_SUFFIX", "Ljava/lang/String;"));
            MEDIAN_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "MEDIAN_SUFFIX", "Ljava/lang/String;"));
            START_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "START_SUFFIX", "Ljava/lang/String;"));
            STOP_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "STOP_SUFFIX", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ParameterDrivenDateIntervalDetector::ParameterDrivenDateIntervalDetector(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::time::AbsoluteDate & a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_30d9ee235a4c15b2, a0.this$, a1.this$, a2.this$)) {}

        ParameterDrivenDateIntervalDetector::ParameterDrivenDateIntervalDetector(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_44d04d6a1ac9a60f, a0.this$, a1.this$, a2)) {}

        jdouble ParameterDrivenDateIntervalDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_66a2f071e6ed0c06], a0.this$);
        }

        ::org::orekit::utils::ParameterDriver ParameterDrivenDateIntervalDetector::getDurationDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getDurationDriver_ac0e5f8f2fa86f4f]));
        }

        ::org::orekit::utils::DateDriver ParameterDrivenDateIntervalDetector::getMedianDriver() const
        {
          return ::org::orekit::utils::DateDriver(env->callObjectMethod(this$, mids$[mid_getMedianDriver_bacf6e93022fe00a]));
        }

        ::org::orekit::utils::DateDriver ParameterDrivenDateIntervalDetector::getStartDriver() const
        {
          return ::org::orekit::utils::DateDriver(env->callObjectMethod(this$, mids$[mid_getStartDriver_bacf6e93022fe00a]));
        }

        ::org::orekit::utils::DateDriver ParameterDrivenDateIntervalDetector::getStopDriver() const
        {
          return ::org::orekit::utils::DateDriver(env->callObjectMethod(this$, mids$[mid_getStopDriver_bacf6e93022fe00a]));
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
        static PyObject *t_ParameterDrivenDateIntervalDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ParameterDrivenDateIntervalDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ParameterDrivenDateIntervalDetector_of_(t_ParameterDrivenDateIntervalDetector *self, PyObject *args);
        static int t_ParameterDrivenDateIntervalDetector_init_(t_ParameterDrivenDateIntervalDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ParameterDrivenDateIntervalDetector_g(t_ParameterDrivenDateIntervalDetector *self, PyObject *args);
        static PyObject *t_ParameterDrivenDateIntervalDetector_getDurationDriver(t_ParameterDrivenDateIntervalDetector *self);
        static PyObject *t_ParameterDrivenDateIntervalDetector_getMedianDriver(t_ParameterDrivenDateIntervalDetector *self);
        static PyObject *t_ParameterDrivenDateIntervalDetector_getStartDriver(t_ParameterDrivenDateIntervalDetector *self);
        static PyObject *t_ParameterDrivenDateIntervalDetector_getStopDriver(t_ParameterDrivenDateIntervalDetector *self);
        static PyObject *t_ParameterDrivenDateIntervalDetector_get__durationDriver(t_ParameterDrivenDateIntervalDetector *self, void *data);
        static PyObject *t_ParameterDrivenDateIntervalDetector_get__medianDriver(t_ParameterDrivenDateIntervalDetector *self, void *data);
        static PyObject *t_ParameterDrivenDateIntervalDetector_get__startDriver(t_ParameterDrivenDateIntervalDetector *self, void *data);
        static PyObject *t_ParameterDrivenDateIntervalDetector_get__stopDriver(t_ParameterDrivenDateIntervalDetector *self, void *data);
        static PyObject *t_ParameterDrivenDateIntervalDetector_get__parameters_(t_ParameterDrivenDateIntervalDetector *self, void *data);
        static PyGetSetDef t_ParameterDrivenDateIntervalDetector__fields_[] = {
          DECLARE_GET_FIELD(t_ParameterDrivenDateIntervalDetector, durationDriver),
          DECLARE_GET_FIELD(t_ParameterDrivenDateIntervalDetector, medianDriver),
          DECLARE_GET_FIELD(t_ParameterDrivenDateIntervalDetector, startDriver),
          DECLARE_GET_FIELD(t_ParameterDrivenDateIntervalDetector, stopDriver),
          DECLARE_GET_FIELD(t_ParameterDrivenDateIntervalDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ParameterDrivenDateIntervalDetector__methods_[] = {
          DECLARE_METHOD(t_ParameterDrivenDateIntervalDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ParameterDrivenDateIntervalDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ParameterDrivenDateIntervalDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_ParameterDrivenDateIntervalDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_ParameterDrivenDateIntervalDetector, getDurationDriver, METH_NOARGS),
          DECLARE_METHOD(t_ParameterDrivenDateIntervalDetector, getMedianDriver, METH_NOARGS),
          DECLARE_METHOD(t_ParameterDrivenDateIntervalDetector, getStartDriver, METH_NOARGS),
          DECLARE_METHOD(t_ParameterDrivenDateIntervalDetector, getStopDriver, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ParameterDrivenDateIntervalDetector)[] = {
          { Py_tp_methods, t_ParameterDrivenDateIntervalDetector__methods_ },
          { Py_tp_init, (void *) t_ParameterDrivenDateIntervalDetector_init_ },
          { Py_tp_getset, t_ParameterDrivenDateIntervalDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ParameterDrivenDateIntervalDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(ParameterDrivenDateIntervalDetector, t_ParameterDrivenDateIntervalDetector, ParameterDrivenDateIntervalDetector);
        PyObject *t_ParameterDrivenDateIntervalDetector::wrap_Object(const ParameterDrivenDateIntervalDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ParameterDrivenDateIntervalDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ParameterDrivenDateIntervalDetector *self = (t_ParameterDrivenDateIntervalDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ParameterDrivenDateIntervalDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ParameterDrivenDateIntervalDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ParameterDrivenDateIntervalDetector *self = (t_ParameterDrivenDateIntervalDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ParameterDrivenDateIntervalDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(ParameterDrivenDateIntervalDetector), &PY_TYPE_DEF(ParameterDrivenDateIntervalDetector), module, "ParameterDrivenDateIntervalDetector", 0);
        }

        void t_ParameterDrivenDateIntervalDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDrivenDateIntervalDetector), "class_", make_descriptor(ParameterDrivenDateIntervalDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDrivenDateIntervalDetector), "wrapfn_", make_descriptor(t_ParameterDrivenDateIntervalDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDrivenDateIntervalDetector), "boxfn_", make_descriptor(boxObject));
          env->getClass(ParameterDrivenDateIntervalDetector::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDrivenDateIntervalDetector), "DURATION_SUFFIX", make_descriptor(j2p(*ParameterDrivenDateIntervalDetector::DURATION_SUFFIX)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDrivenDateIntervalDetector), "MEDIAN_SUFFIX", make_descriptor(j2p(*ParameterDrivenDateIntervalDetector::MEDIAN_SUFFIX)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDrivenDateIntervalDetector), "START_SUFFIX", make_descriptor(j2p(*ParameterDrivenDateIntervalDetector::START_SUFFIX)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDrivenDateIntervalDetector), "STOP_SUFFIX", make_descriptor(j2p(*ParameterDrivenDateIntervalDetector::STOP_SUFFIX)));
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ParameterDrivenDateIntervalDetector::initializeClass, 1)))
            return NULL;
          return t_ParameterDrivenDateIntervalDetector::wrap_Object(ParameterDrivenDateIntervalDetector(((t_ParameterDrivenDateIntervalDetector *) arg)->object.this$));
        }
        static PyObject *t_ParameterDrivenDateIntervalDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ParameterDrivenDateIntervalDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_of_(t_ParameterDrivenDateIntervalDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ParameterDrivenDateIntervalDetector_init_(t_ParameterDrivenDateIntervalDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ParameterDrivenDateIntervalDetector object((jobject) NULL);

              if (!parseArgs(args, "skk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = ParameterDrivenDateIntervalDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ParameterDrivenDateIntervalDetector);
                break;
              }
            }
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              jdouble a2;
              ParameterDrivenDateIntervalDetector object((jobject) NULL);

              if (!parseArgs(args, "skD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = ParameterDrivenDateIntervalDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ParameterDrivenDateIntervalDetector);
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_g(t_ParameterDrivenDateIntervalDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ParameterDrivenDateIntervalDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_getDurationDriver(t_ParameterDrivenDateIntervalDetector *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getDurationDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_getMedianDriver(t_ParameterDrivenDateIntervalDetector *self)
        {
          ::org::orekit::utils::DateDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getMedianDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(result);
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_getStartDriver(t_ParameterDrivenDateIntervalDetector *self)
        {
          ::org::orekit::utils::DateDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getStartDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(result);
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_getStopDriver(t_ParameterDrivenDateIntervalDetector *self)
        {
          ::org::orekit::utils::DateDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getStopDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(result);
        }
        static PyObject *t_ParameterDrivenDateIntervalDetector_get__parameters_(t_ParameterDrivenDateIntervalDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_get__durationDriver(t_ParameterDrivenDateIntervalDetector *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getDurationDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_get__medianDriver(t_ParameterDrivenDateIntervalDetector *self, void *data)
        {
          ::org::orekit::utils::DateDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getMedianDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(value);
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_get__startDriver(t_ParameterDrivenDateIntervalDetector *self, void *data)
        {
          ::org::orekit::utils::DateDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getStartDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(value);
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_get__stopDriver(t_ParameterDrivenDateIntervalDetector *self, void *data)
        {
          ::org::orekit::utils::DateDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getStopDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/AbstractNavigationMessage.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSOrbitalElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *AbstractNavigationMessage::class$ = NULL;
            jmethodID *AbstractNavigationMessage::mids$ = NULL;
            bool AbstractNavigationMessage::live$ = false;

            jclass AbstractNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/AbstractNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_b05c288d5068eccb] = env->getMethodID(cls, "<init>", "(DDI)V");
                mids$[mid_getAf2_456d9a2f64d6b28d] = env->getMethodID(cls, "getAf2", "()D");
                mids$[mid_getCic_456d9a2f64d6b28d] = env->getMethodID(cls, "getCic", "()D");
                mids$[mid_getCis_456d9a2f64d6b28d] = env->getMethodID(cls, "getCis", "()D");
                mids$[mid_getCrc_456d9a2f64d6b28d] = env->getMethodID(cls, "getCrc", "()D");
                mids$[mid_getCrs_456d9a2f64d6b28d] = env->getMethodID(cls, "getCrs", "()D");
                mids$[mid_getCuc_456d9a2f64d6b28d] = env->getMethodID(cls, "getCuc", "()D");
                mids$[mid_getCus_456d9a2f64d6b28d] = env->getMethodID(cls, "getCus", "()D");
                mids$[mid_getDeltaN_456d9a2f64d6b28d] = env->getMethodID(cls, "getDeltaN", "()D");
                mids$[mid_getEpochToc_aaa854c403487cf3] = env->getMethodID(cls, "getEpochToc", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getIDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getIDot", "()D");
                mids$[mid_getMeanMotion_456d9a2f64d6b28d] = env->getMethodID(cls, "getMeanMotion", "()D");
                mids$[mid_getSqrtA_456d9a2f64d6b28d] = env->getMethodID(cls, "getSqrtA", "()D");
                mids$[mid_getTransmissionTime_456d9a2f64d6b28d] = env->getMethodID(cls, "getTransmissionTime", "()D");
                mids$[mid_setAf2_77e0f9a1f260e2e5] = env->getMethodID(cls, "setAf2", "(D)V");
                mids$[mid_setCic_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCic", "(D)V");
                mids$[mid_setCis_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCis", "(D)V");
                mids$[mid_setCrc_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCrc", "(D)V");
                mids$[mid_setCrs_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCrs", "(D)V");
                mids$[mid_setCuc_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCuc", "(D)V");
                mids$[mid_setCus_77e0f9a1f260e2e5] = env->getMethodID(cls, "setCus", "(D)V");
                mids$[mid_setDeltaN_77e0f9a1f260e2e5] = env->getMethodID(cls, "setDeltaN", "(D)V");
                mids$[mid_setEpochToc_e82d68cd9f886886] = env->getMethodID(cls, "setEpochToc", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setIDot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setIDot", "(D)V");
                mids$[mid_setSqrtA_77e0f9a1f260e2e5] = env->getMethodID(cls, "setSqrtA", "(D)V");
                mids$[mid_setTransmissionTime_77e0f9a1f260e2e5] = env->getMethodID(cls, "setTransmissionTime", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AbstractNavigationMessage::AbstractNavigationMessage(jdouble a0, jdouble a1, jint a2) : ::org::orekit::propagation::analytical::gnss::data::CommonGnssData(env->newObject(initializeClass, &mids$, mid_init$_b05c288d5068eccb, a0, a1, a2)) {}

            jdouble AbstractNavigationMessage::getAf2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAf2_456d9a2f64d6b28d]);
            }

            jdouble AbstractNavigationMessage::getCic() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCic_456d9a2f64d6b28d]);
            }

            jdouble AbstractNavigationMessage::getCis() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCis_456d9a2f64d6b28d]);
            }

            jdouble AbstractNavigationMessage::getCrc() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrc_456d9a2f64d6b28d]);
            }

            jdouble AbstractNavigationMessage::getCrs() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCrs_456d9a2f64d6b28d]);
            }

            jdouble AbstractNavigationMessage::getCuc() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCuc_456d9a2f64d6b28d]);
            }

            jdouble AbstractNavigationMessage::getCus() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCus_456d9a2f64d6b28d]);
            }

            jdouble AbstractNavigationMessage::getDeltaN() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaN_456d9a2f64d6b28d]);
            }

            ::org::orekit::time::AbsoluteDate AbstractNavigationMessage::getEpochToc() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpochToc_aaa854c403487cf3]));
            }

            jdouble AbstractNavigationMessage::getIDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIDot_456d9a2f64d6b28d]);
            }

            jdouble AbstractNavigationMessage::getMeanMotion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_456d9a2f64d6b28d]);
            }

            jdouble AbstractNavigationMessage::getSqrtA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSqrtA_456d9a2f64d6b28d]);
            }

            jdouble AbstractNavigationMessage::getTransmissionTime() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTransmissionTime_456d9a2f64d6b28d]);
            }

            void AbstractNavigationMessage::setAf2(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAf2_77e0f9a1f260e2e5], a0);
            }

            void AbstractNavigationMessage::setCic(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCic_77e0f9a1f260e2e5], a0);
            }

            void AbstractNavigationMessage::setCis(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCis_77e0f9a1f260e2e5], a0);
            }

            void AbstractNavigationMessage::setCrc(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCrc_77e0f9a1f260e2e5], a0);
            }

            void AbstractNavigationMessage::setCrs(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCrs_77e0f9a1f260e2e5], a0);
            }

            void AbstractNavigationMessage::setCuc(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCuc_77e0f9a1f260e2e5], a0);
            }

            void AbstractNavigationMessage::setCus(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCus_77e0f9a1f260e2e5], a0);
            }

            void AbstractNavigationMessage::setDeltaN(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDeltaN_77e0f9a1f260e2e5], a0);
            }

            void AbstractNavigationMessage::setEpochToc(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setEpochToc_e82d68cd9f886886], a0.this$);
            }

            void AbstractNavigationMessage::setIDot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIDot_77e0f9a1f260e2e5], a0);
            }

            void AbstractNavigationMessage::setSqrtA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSqrtA_77e0f9a1f260e2e5], a0);
            }

            void AbstractNavigationMessage::setTransmissionTime(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTransmissionTime_77e0f9a1f260e2e5], a0);
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
            static PyObject *t_AbstractNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AbstractNavigationMessage_init_(t_AbstractNavigationMessage *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AbstractNavigationMessage_getAf2(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getCic(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getCis(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getCrc(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getCrs(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getCuc(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getCus(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getDeltaN(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getEpochToc(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getIDot(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getMeanMotion(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getSqrtA(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_getTransmissionTime(t_AbstractNavigationMessage *self);
            static PyObject *t_AbstractNavigationMessage_setAf2(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setCic(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setCis(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setCrc(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setCrs(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setCuc(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setCus(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setDeltaN(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setEpochToc(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setIDot(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setSqrtA(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_setTransmissionTime(t_AbstractNavigationMessage *self, PyObject *arg);
            static PyObject *t_AbstractNavigationMessage_get__af2(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__af2(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__cic(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__cic(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__cis(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__cis(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__crc(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__crc(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__crs(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__crs(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__cuc(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__cuc(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__cus(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__cus(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__deltaN(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__deltaN(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__epochToc(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__epochToc(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__iDot(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__iDot(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__meanMotion(t_AbstractNavigationMessage *self, void *data);
            static PyObject *t_AbstractNavigationMessage_get__sqrtA(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__sqrtA(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_AbstractNavigationMessage_get__transmissionTime(t_AbstractNavigationMessage *self, void *data);
            static int t_AbstractNavigationMessage_set__transmissionTime(t_AbstractNavigationMessage *self, PyObject *arg, void *data);
            static PyGetSetDef t_AbstractNavigationMessage__fields_[] = {
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, af2),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, cic),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, cis),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, crc),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, crs),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, cuc),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, cus),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, deltaN),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, epochToc),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, iDot),
              DECLARE_GET_FIELD(t_AbstractNavigationMessage, meanMotion),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, sqrtA),
              DECLARE_GETSET_FIELD(t_AbstractNavigationMessage, transmissionTime),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_AbstractNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractNavigationMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getAf2, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getCic, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getCis, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getCrc, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getCrs, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getCuc, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getCus, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getDeltaN, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getEpochToc, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getIDot, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getSqrtA, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, getTransmissionTime, METH_NOARGS),
              DECLARE_METHOD(t_AbstractNavigationMessage, setAf2, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setCic, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setCis, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setCrc, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setCrs, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setCuc, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setCus, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setDeltaN, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setEpochToc, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setIDot, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setSqrtA, METH_O),
              DECLARE_METHOD(t_AbstractNavigationMessage, setTransmissionTime, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractNavigationMessage)[] = {
              { Py_tp_methods, t_AbstractNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_AbstractNavigationMessage_init_ },
              { Py_tp_getset, t_AbstractNavigationMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::CommonGnssData),
              NULL
            };

            DEFINE_TYPE(AbstractNavigationMessage, t_AbstractNavigationMessage, AbstractNavigationMessage);

            void t_AbstractNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractNavigationMessage), &PY_TYPE_DEF(AbstractNavigationMessage), module, "AbstractNavigationMessage", 0);
            }

            void t_AbstractNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractNavigationMessage), "class_", make_descriptor(AbstractNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractNavigationMessage), "wrapfn_", make_descriptor(t_AbstractNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractNavigationMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_AbstractNavigationMessage::wrap_Object(AbstractNavigationMessage(((t_AbstractNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_AbstractNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AbstractNavigationMessage_init_(t_AbstractNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              jdouble a1;
              jint a2;
              AbstractNavigationMessage object((jobject) NULL);

              if (!parseArgs(args, "DDI", &a0, &a1, &a2))
              {
                INT_CALL(object = AbstractNavigationMessage(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_AbstractNavigationMessage_getAf2(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAf2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getCic(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCic());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getCis(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCis());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getCrc(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrc());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getCrs(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCrs());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getCuc(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCuc());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getCus(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCus());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getDeltaN(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaN());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getEpochToc(t_AbstractNavigationMessage *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getEpochToc());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AbstractNavigationMessage_getIDot(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getMeanMotion(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getSqrtA(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSqrtA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_getTransmissionTime(t_AbstractNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTransmissionTime());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractNavigationMessage_setAf2(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAf2(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAf2", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setCic(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCic(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCic", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setCis(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCis(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCis", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setCrc(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCrc(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCrc", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setCrs(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCrs(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCrs", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setCuc(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCuc(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCuc", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setCus(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCus(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCus", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setDeltaN(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDeltaN(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDeltaN", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setEpochToc(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setEpochToc(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setEpochToc", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setIDot(t_AbstractNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIDot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIDot", arg);
              return NULL;
            }

            static PyObject *t_AbstractNavigationMessage_setSqrtA(t_AbstractNavigationMessage *self, PyObject *arg)
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

            static PyObject *t_AbstractNavigationMessage_setTransmissionTime(t_AbstractNavigationMessage *self, PyObject *arg)
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

            static PyObject *t_AbstractNavigationMessage_get__af2(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAf2());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__af2(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAf2(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "af2", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__cic(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCic());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__cic(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCic(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cic", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__cis(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCis());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__cis(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCis(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cis", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__crc(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrc());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__crc(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCrc(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "crc", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__crs(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCrs());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__crs(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCrs(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "crs", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__cuc(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCuc());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__cuc(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCuc(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cuc", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__cus(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCus());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__cus(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCus(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cus", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__deltaN(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaN());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__deltaN(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDeltaN(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "deltaN", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__epochToc(t_AbstractNavigationMessage *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getEpochToc());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_AbstractNavigationMessage_set__epochToc(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setEpochToc(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "epochToc", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__iDot(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIDot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__iDot(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIDot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iDot", arg);
              return -1;
            }

            static PyObject *t_AbstractNavigationMessage_get__meanMotion(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractNavigationMessage_get__sqrtA(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSqrtA());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__sqrtA(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
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

            static PyObject *t_AbstractNavigationMessage_get__transmissionTime(t_AbstractNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTransmissionTime());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AbstractNavigationMessage_set__transmissionTime(t_AbstractNavigationMessage *self, PyObject *arg, void *data)
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
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/MatricesHarvester.h"
#include "java/util/List.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/String.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *MatricesHarvester::class$ = NULL;
      jmethodID *MatricesHarvester::mids$ = NULL;
      bool MatricesHarvester::live$ = false;

      jclass MatricesHarvester::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/MatricesHarvester");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getJacobiansColumnsNames_a6156df500549a58] = env->getMethodID(cls, "getJacobiansColumnsNames", "()Ljava/util/List;");
          mids$[mid_getOrbitType_63ea5cd020bf7bf1] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_getParametersJacobian_63aee3ce1e412e46] = env->getMethodID(cls, "getParametersJacobian", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getPositionAngleType_2571e8fe1cede425] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_getStateTransitionMatrix_63aee3ce1e412e46] = env->getMethodID(cls, "getStateTransitionMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_setReferenceState_2b88003f931f70a7] = env->getMethodID(cls, "setReferenceState", "(Lorg/orekit/propagation/SpacecraftState;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::List MatricesHarvester::getJacobiansColumnsNames() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getJacobiansColumnsNames_a6156df500549a58]));
      }

      ::org::orekit::orbits::OrbitType MatricesHarvester::getOrbitType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_63ea5cd020bf7bf1]));
      }

      ::org::hipparchus::linear::RealMatrix MatricesHarvester::getParametersJacobian(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getParametersJacobian_63aee3ce1e412e46], a0.this$));
      }

      ::org::orekit::orbits::PositionAngleType MatricesHarvester::getPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_2571e8fe1cede425]));
      }

      ::org::hipparchus::linear::RealMatrix MatricesHarvester::getStateTransitionMatrix(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getStateTransitionMatrix_63aee3ce1e412e46], a0.this$));
      }

      void MatricesHarvester::setReferenceState(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setReferenceState_2b88003f931f70a7], a0.this$);
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
      static PyObject *t_MatricesHarvester_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatricesHarvester_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatricesHarvester_getJacobiansColumnsNames(t_MatricesHarvester *self);
      static PyObject *t_MatricesHarvester_getOrbitType(t_MatricesHarvester *self);
      static PyObject *t_MatricesHarvester_getParametersJacobian(t_MatricesHarvester *self, PyObject *arg);
      static PyObject *t_MatricesHarvester_getPositionAngleType(t_MatricesHarvester *self);
      static PyObject *t_MatricesHarvester_getStateTransitionMatrix(t_MatricesHarvester *self, PyObject *arg);
      static PyObject *t_MatricesHarvester_setReferenceState(t_MatricesHarvester *self, PyObject *arg);
      static PyObject *t_MatricesHarvester_get__jacobiansColumnsNames(t_MatricesHarvester *self, void *data);
      static PyObject *t_MatricesHarvester_get__orbitType(t_MatricesHarvester *self, void *data);
      static PyObject *t_MatricesHarvester_get__positionAngleType(t_MatricesHarvester *self, void *data);
      static int t_MatricesHarvester_set__referenceState(t_MatricesHarvester *self, PyObject *arg, void *data);
      static PyGetSetDef t_MatricesHarvester__fields_[] = {
        DECLARE_GET_FIELD(t_MatricesHarvester, jacobiansColumnsNames),
        DECLARE_GET_FIELD(t_MatricesHarvester, orbitType),
        DECLARE_GET_FIELD(t_MatricesHarvester, positionAngleType),
        DECLARE_SET_FIELD(t_MatricesHarvester, referenceState),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MatricesHarvester__methods_[] = {
        DECLARE_METHOD(t_MatricesHarvester, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatricesHarvester, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatricesHarvester, getJacobiansColumnsNames, METH_NOARGS),
        DECLARE_METHOD(t_MatricesHarvester, getOrbitType, METH_NOARGS),
        DECLARE_METHOD(t_MatricesHarvester, getParametersJacobian, METH_O),
        DECLARE_METHOD(t_MatricesHarvester, getPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_MatricesHarvester, getStateTransitionMatrix, METH_O),
        DECLARE_METHOD(t_MatricesHarvester, setReferenceState, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MatricesHarvester)[] = {
        { Py_tp_methods, t_MatricesHarvester__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_MatricesHarvester__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MatricesHarvester)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MatricesHarvester, t_MatricesHarvester, MatricesHarvester);

      void t_MatricesHarvester::install(PyObject *module)
      {
        installType(&PY_TYPE(MatricesHarvester), &PY_TYPE_DEF(MatricesHarvester), module, "MatricesHarvester", 0);
      }

      void t_MatricesHarvester::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatricesHarvester), "class_", make_descriptor(MatricesHarvester::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatricesHarvester), "wrapfn_", make_descriptor(t_MatricesHarvester::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatricesHarvester), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MatricesHarvester_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MatricesHarvester::initializeClass, 1)))
          return NULL;
        return t_MatricesHarvester::wrap_Object(MatricesHarvester(((t_MatricesHarvester *) arg)->object.this$));
      }
      static PyObject *t_MatricesHarvester_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MatricesHarvester::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MatricesHarvester_getJacobiansColumnsNames(t_MatricesHarvester *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getJacobiansColumnsNames());
        return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
      }

      static PyObject *t_MatricesHarvester_getOrbitType(t_MatricesHarvester *self)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrbitType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
      }

      static PyObject *t_MatricesHarvester_getParametersJacobian(t_MatricesHarvester *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getParametersJacobian(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getParametersJacobian", arg);
        return NULL;
      }

      static PyObject *t_MatricesHarvester_getPositionAngleType(t_MatricesHarvester *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_MatricesHarvester_getStateTransitionMatrix(t_MatricesHarvester *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getStateTransitionMatrix(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getStateTransitionMatrix", arg);
        return NULL;
      }

      static PyObject *t_MatricesHarvester_setReferenceState(t_MatricesHarvester *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(self->object.setReferenceState(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setReferenceState", arg);
        return NULL;
      }

      static PyObject *t_MatricesHarvester_get__jacobiansColumnsNames(t_MatricesHarvester *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getJacobiansColumnsNames());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_MatricesHarvester_get__orbitType(t_MatricesHarvester *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrbitType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }

      static PyObject *t_MatricesHarvester_get__positionAngleType(t_MatricesHarvester *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }

      static int t_MatricesHarvester_set__referenceState(t_MatricesHarvester *self, PyObject *arg, void *data)
      {
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
          {
            INT_CALL(self->object.setReferenceState(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "referenceState", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/DormandPrince54Integrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *DormandPrince54Integrator::class$ = NULL;
        jmethodID *DormandPrince54Integrator::mids$ = NULL;
        bool DormandPrince54Integrator::live$ = false;

        jclass DormandPrince54Integrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/DormandPrince54Integrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e5787c5177784e12] = env->getMethodID(cls, "<init>", "(DD[D[D)V");
            mids$[mid_init$_667a7965403ed91a] = env->getMethodID(cls, "<init>", "(DDDD)V");
            mids$[mid_getA_43de1192439efa92] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_7cdc325af0834901] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_7cdc325af0834901] = env->getMethodID(cls, "getC", "()[D");
            mids$[mid_getOrder_f2f64475e4580546] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_createInterpolator_94745c33528349a7] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/DormandPrince54StateInterpolator;");
            mids$[mid_estimateError_8ae23a975a0e5320] = env->getMethodID(cls, "estimateError", "([[D[D[DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DormandPrince54Integrator::DormandPrince54Integrator(jdouble a0, jdouble a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_e5787c5177784e12, a0, a1, a2.this$, a3.this$)) {}

        DormandPrince54Integrator::DormandPrince54Integrator(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_667a7965403ed91a, a0, a1, a2, a3)) {}

        JArray< JArray< jdouble > > DormandPrince54Integrator::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_43de1192439efa92]));
        }

        JArray< jdouble > DormandPrince54Integrator::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_7cdc325af0834901]));
        }

        JArray< jdouble > DormandPrince54Integrator::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_7cdc325af0834901]));
        }

        jint DormandPrince54Integrator::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_f2f64475e4580546]);
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
        static PyObject *t_DormandPrince54Integrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince54Integrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DormandPrince54Integrator_init_(t_DormandPrince54Integrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DormandPrince54Integrator_getA(t_DormandPrince54Integrator *self, PyObject *args);
        static PyObject *t_DormandPrince54Integrator_getB(t_DormandPrince54Integrator *self, PyObject *args);
        static PyObject *t_DormandPrince54Integrator_getC(t_DormandPrince54Integrator *self, PyObject *args);
        static PyObject *t_DormandPrince54Integrator_getOrder(t_DormandPrince54Integrator *self, PyObject *args);
        static PyObject *t_DormandPrince54Integrator_get__a(t_DormandPrince54Integrator *self, void *data);
        static PyObject *t_DormandPrince54Integrator_get__b(t_DormandPrince54Integrator *self, void *data);
        static PyObject *t_DormandPrince54Integrator_get__c(t_DormandPrince54Integrator *self, void *data);
        static PyObject *t_DormandPrince54Integrator_get__order(t_DormandPrince54Integrator *self, void *data);
        static PyGetSetDef t_DormandPrince54Integrator__fields_[] = {
          DECLARE_GET_FIELD(t_DormandPrince54Integrator, a),
          DECLARE_GET_FIELD(t_DormandPrince54Integrator, b),
          DECLARE_GET_FIELD(t_DormandPrince54Integrator, c),
          DECLARE_GET_FIELD(t_DormandPrince54Integrator, order),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DormandPrince54Integrator__methods_[] = {
          DECLARE_METHOD(t_DormandPrince54Integrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince54Integrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince54Integrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince54Integrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince54Integrator, getC, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince54Integrator, getOrder, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DormandPrince54Integrator)[] = {
          { Py_tp_methods, t_DormandPrince54Integrator__methods_ },
          { Py_tp_init, (void *) t_DormandPrince54Integrator_init_ },
          { Py_tp_getset, t_DormandPrince54Integrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DormandPrince54Integrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator),
          NULL
        };

        DEFINE_TYPE(DormandPrince54Integrator, t_DormandPrince54Integrator, DormandPrince54Integrator);

        void t_DormandPrince54Integrator::install(PyObject *module)
        {
          installType(&PY_TYPE(DormandPrince54Integrator), &PY_TYPE_DEF(DormandPrince54Integrator), module, "DormandPrince54Integrator", 0);
        }

        void t_DormandPrince54Integrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54Integrator), "class_", make_descriptor(DormandPrince54Integrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54Integrator), "wrapfn_", make_descriptor(t_DormandPrince54Integrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54Integrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DormandPrince54Integrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DormandPrince54Integrator::initializeClass, 1)))
            return NULL;
          return t_DormandPrince54Integrator::wrap_Object(DormandPrince54Integrator(((t_DormandPrince54Integrator *) arg)->object.this$));
        }
        static PyObject *t_DormandPrince54Integrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DormandPrince54Integrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DormandPrince54Integrator_init_(t_DormandPrince54Integrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jdouble a0;
              jdouble a1;
              JArray< jdouble > a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              DormandPrince54Integrator object((jobject) NULL);

              if (!parseArgs(args, "DD[D[D", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = DormandPrince54Integrator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              DormandPrince54Integrator object((jobject) NULL);

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = DormandPrince54Integrator(a0, a1, a2, a3));
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

        static PyObject *t_DormandPrince54Integrator_getA(t_DormandPrince54Integrator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(DormandPrince54Integrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_DormandPrince54Integrator_getB(t_DormandPrince54Integrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return result.wrap();
          }

          return callSuper(PY_TYPE(DormandPrince54Integrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_DormandPrince54Integrator_getC(t_DormandPrince54Integrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return result.wrap();
          }

          return callSuper(PY_TYPE(DormandPrince54Integrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_DormandPrince54Integrator_getOrder(t_DormandPrince54Integrator *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrder());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(DormandPrince54Integrator), (PyObject *) self, "getOrder", args, 2);
        }

        static PyObject *t_DormandPrince54Integrator_get__a(t_DormandPrince54Integrator *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_DormandPrince54Integrator_get__b(t_DormandPrince54Integrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_DormandPrince54Integrator_get__c(t_DormandPrince54Integrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return value.wrap();
        }

        static PyObject *t_DormandPrince54Integrator_get__order(t_DormandPrince54Integrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/OrbitRelativeFrame.h"
#include "org/orekit/files/ccsds/definitions/OrbitRelativeFrame.h"
#include "org/orekit/frames/LOFType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *OrbitRelativeFrame::class$ = NULL;
          jmethodID *OrbitRelativeFrame::mids$ = NULL;
          bool OrbitRelativeFrame::live$ = false;
          OrbitRelativeFrame *OrbitRelativeFrame::EQW_INERTIAL = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::LVLH = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::LVLH_INERTIAL = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::LVLH_ROTATING = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::NSW_INERTIAL = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::NSW_ROTATING = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::NTW_INERTIAL = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::NTW_ROTATING = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::PQW_INERTIAL = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::QSW = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::RIC = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::RSW = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::RSW_INERTIAL = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::RSW_ROTATING = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::RTN = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::SEZ_INERTIAL = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::SEZ_ROTATING = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::TNW = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::TNW_INERTIAL = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::TNW_ROTATING = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::VNC_INERTIAL = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::VNC_ROTATING = NULL;

          jclass OrbitRelativeFrame::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/OrbitRelativeFrame");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getLofType_c33b33ba21325973] = env->getMethodID(cls, "getLofType", "()Lorg/orekit/frames/LOFType;");
              mids$[mid_isQuasiInertial_e470b6d9e0d979db] = env->getMethodID(cls, "isQuasiInertial", "()Z");
              mids$[mid_valueOf_6f0e325aceb8b595] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;");
              mids$[mid_values_0fcde4b3cf6bd14d] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              EQW_INERTIAL = new OrbitRelativeFrame(env->getStaticObjectField(cls, "EQW_INERTIAL", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              LVLH = new OrbitRelativeFrame(env->getStaticObjectField(cls, "LVLH", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              LVLH_INERTIAL = new OrbitRelativeFrame(env->getStaticObjectField(cls, "LVLH_INERTIAL", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              LVLH_ROTATING = new OrbitRelativeFrame(env->getStaticObjectField(cls, "LVLH_ROTATING", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              NSW_INERTIAL = new OrbitRelativeFrame(env->getStaticObjectField(cls, "NSW_INERTIAL", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              NSW_ROTATING = new OrbitRelativeFrame(env->getStaticObjectField(cls, "NSW_ROTATING", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              NTW_INERTIAL = new OrbitRelativeFrame(env->getStaticObjectField(cls, "NTW_INERTIAL", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              NTW_ROTATING = new OrbitRelativeFrame(env->getStaticObjectField(cls, "NTW_ROTATING", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              PQW_INERTIAL = new OrbitRelativeFrame(env->getStaticObjectField(cls, "PQW_INERTIAL", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              QSW = new OrbitRelativeFrame(env->getStaticObjectField(cls, "QSW", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              RIC = new OrbitRelativeFrame(env->getStaticObjectField(cls, "RIC", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              RSW = new OrbitRelativeFrame(env->getStaticObjectField(cls, "RSW", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              RSW_INERTIAL = new OrbitRelativeFrame(env->getStaticObjectField(cls, "RSW_INERTIAL", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              RSW_ROTATING = new OrbitRelativeFrame(env->getStaticObjectField(cls, "RSW_ROTATING", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              RTN = new OrbitRelativeFrame(env->getStaticObjectField(cls, "RTN", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              SEZ_INERTIAL = new OrbitRelativeFrame(env->getStaticObjectField(cls, "SEZ_INERTIAL", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              SEZ_ROTATING = new OrbitRelativeFrame(env->getStaticObjectField(cls, "SEZ_ROTATING", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              TNW = new OrbitRelativeFrame(env->getStaticObjectField(cls, "TNW", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              TNW_INERTIAL = new OrbitRelativeFrame(env->getStaticObjectField(cls, "TNW_INERTIAL", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              TNW_ROTATING = new OrbitRelativeFrame(env->getStaticObjectField(cls, "TNW_ROTATING", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              VNC_INERTIAL = new OrbitRelativeFrame(env->getStaticObjectField(cls, "VNC_INERTIAL", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              VNC_ROTATING = new OrbitRelativeFrame(env->getStaticObjectField(cls, "VNC_ROTATING", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::frames::LOFType OrbitRelativeFrame::getLofType() const
          {
            return ::org::orekit::frames::LOFType(env->callObjectMethod(this$, mids$[mid_getLofType_c33b33ba21325973]));
          }

          jboolean OrbitRelativeFrame::isQuasiInertial() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isQuasiInertial_e470b6d9e0d979db]);
          }

          OrbitRelativeFrame OrbitRelativeFrame::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return OrbitRelativeFrame(env->callStaticObjectMethod(cls, mids$[mid_valueOf_6f0e325aceb8b595], a0.this$));
          }

          JArray< OrbitRelativeFrame > OrbitRelativeFrame::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< OrbitRelativeFrame >(env->callStaticObjectMethod(cls, mids$[mid_values_0fcde4b3cf6bd14d]));
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
          static PyObject *t_OrbitRelativeFrame_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OrbitRelativeFrame_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OrbitRelativeFrame_of_(t_OrbitRelativeFrame *self, PyObject *args);
          static PyObject *t_OrbitRelativeFrame_getLofType(t_OrbitRelativeFrame *self);
          static PyObject *t_OrbitRelativeFrame_isQuasiInertial(t_OrbitRelativeFrame *self);
          static PyObject *t_OrbitRelativeFrame_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_OrbitRelativeFrame_values(PyTypeObject *type);
          static PyObject *t_OrbitRelativeFrame_get__lofType(t_OrbitRelativeFrame *self, void *data);
          static PyObject *t_OrbitRelativeFrame_get__quasiInertial(t_OrbitRelativeFrame *self, void *data);
          static PyObject *t_OrbitRelativeFrame_get__parameters_(t_OrbitRelativeFrame *self, void *data);
          static PyGetSetDef t_OrbitRelativeFrame__fields_[] = {
            DECLARE_GET_FIELD(t_OrbitRelativeFrame, lofType),
            DECLARE_GET_FIELD(t_OrbitRelativeFrame, quasiInertial),
            DECLARE_GET_FIELD(t_OrbitRelativeFrame, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OrbitRelativeFrame__methods_[] = {
            DECLARE_METHOD(t_OrbitRelativeFrame, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OrbitRelativeFrame, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OrbitRelativeFrame, of_, METH_VARARGS),
            DECLARE_METHOD(t_OrbitRelativeFrame, getLofType, METH_NOARGS),
            DECLARE_METHOD(t_OrbitRelativeFrame, isQuasiInertial, METH_NOARGS),
            DECLARE_METHOD(t_OrbitRelativeFrame, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_OrbitRelativeFrame, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OrbitRelativeFrame)[] = {
            { Py_tp_methods, t_OrbitRelativeFrame__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_OrbitRelativeFrame__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OrbitRelativeFrame)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(OrbitRelativeFrame, t_OrbitRelativeFrame, OrbitRelativeFrame);
          PyObject *t_OrbitRelativeFrame::wrap_Object(const OrbitRelativeFrame& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OrbitRelativeFrame::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OrbitRelativeFrame *self = (t_OrbitRelativeFrame *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_OrbitRelativeFrame::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OrbitRelativeFrame::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OrbitRelativeFrame *self = (t_OrbitRelativeFrame *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_OrbitRelativeFrame::install(PyObject *module)
          {
            installType(&PY_TYPE(OrbitRelativeFrame), &PY_TYPE_DEF(OrbitRelativeFrame), module, "OrbitRelativeFrame", 0);
          }

          void t_OrbitRelativeFrame::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "class_", make_descriptor(OrbitRelativeFrame::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "wrapfn_", make_descriptor(t_OrbitRelativeFrame::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "boxfn_", make_descriptor(boxObject));
            env->getClass(OrbitRelativeFrame::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "EQW_INERTIAL", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::EQW_INERTIAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "LVLH", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::LVLH)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "LVLH_INERTIAL", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::LVLH_INERTIAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "LVLH_ROTATING", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::LVLH_ROTATING)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "NSW_INERTIAL", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::NSW_INERTIAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "NSW_ROTATING", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::NSW_ROTATING)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "NTW_INERTIAL", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::NTW_INERTIAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "NTW_ROTATING", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::NTW_ROTATING)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "PQW_INERTIAL", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::PQW_INERTIAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "QSW", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::QSW)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "RIC", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::RIC)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "RSW", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::RSW)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "RSW_INERTIAL", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::RSW_INERTIAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "RSW_ROTATING", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::RSW_ROTATING)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "RTN", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::RTN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "SEZ_INERTIAL", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::SEZ_INERTIAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "SEZ_ROTATING", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::SEZ_ROTATING)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "TNW", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::TNW)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "TNW_INERTIAL", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::TNW_INERTIAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "TNW_ROTATING", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::TNW_ROTATING)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "VNC_INERTIAL", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::VNC_INERTIAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "VNC_ROTATING", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::VNC_ROTATING)));
          }

          static PyObject *t_OrbitRelativeFrame_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OrbitRelativeFrame::initializeClass, 1)))
              return NULL;
            return t_OrbitRelativeFrame::wrap_Object(OrbitRelativeFrame(((t_OrbitRelativeFrame *) arg)->object.this$));
          }
          static PyObject *t_OrbitRelativeFrame_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OrbitRelativeFrame::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_OrbitRelativeFrame_of_(t_OrbitRelativeFrame *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_OrbitRelativeFrame_getLofType(t_OrbitRelativeFrame *self)
          {
            ::org::orekit::frames::LOFType result((jobject) NULL);
            OBJ_CALL(result = self->object.getLofType());
            return ::org::orekit::frames::t_LOFType::wrap_Object(result);
          }

          static PyObject *t_OrbitRelativeFrame_isQuasiInertial(t_OrbitRelativeFrame *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isQuasiInertial());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_OrbitRelativeFrame_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            OrbitRelativeFrame result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame::valueOf(a0));
              return t_OrbitRelativeFrame::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_OrbitRelativeFrame_values(PyTypeObject *type)
          {
            JArray< OrbitRelativeFrame > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame::values());
            return JArray<jobject>(result.this$).wrap(t_OrbitRelativeFrame::wrap_jobject);
          }
          static PyObject *t_OrbitRelativeFrame_get__parameters_(t_OrbitRelativeFrame *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_OrbitRelativeFrame_get__lofType(t_OrbitRelativeFrame *self, void *data)
          {
            ::org::orekit::frames::LOFType value((jobject) NULL);
            OBJ_CALL(value = self->object.getLofType());
            return ::org::orekit::frames::t_LOFType::wrap_Object(value);
          }

          static PyObject *t_OrbitRelativeFrame_get__quasiInertial(t_OrbitRelativeFrame *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isQuasiInertial());
            Py_RETURN_BOOL(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeMode.h"
#include "org/orekit/files/ccsds/ndm/tdm/RangeMode.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *RangeMode::class$ = NULL;
            jmethodID *RangeMode::mids$ = NULL;
            bool RangeMode::live$ = false;
            RangeMode *RangeMode::COHERENT = NULL;
            RangeMode *RangeMode::CONSTANT = NULL;
            RangeMode *RangeMode::ONE_WAY = NULL;

            jclass RangeMode::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/RangeMode");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_b5bb20dc8fb26b00] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/RangeMode;");
                mids$[mid_values_8df7b24a3f004a19] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/RangeMode;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                COHERENT = new RangeMode(env->getStaticObjectField(cls, "COHERENT", "Lorg/orekit/files/ccsds/ndm/tdm/RangeMode;"));
                CONSTANT = new RangeMode(env->getStaticObjectField(cls, "CONSTANT", "Lorg/orekit/files/ccsds/ndm/tdm/RangeMode;"));
                ONE_WAY = new RangeMode(env->getStaticObjectField(cls, "ONE_WAY", "Lorg/orekit/files/ccsds/ndm/tdm/RangeMode;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            RangeMode RangeMode::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return RangeMode(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b5bb20dc8fb26b00], a0.this$));
            }

            JArray< RangeMode > RangeMode::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< RangeMode >(env->callStaticObjectMethod(cls, mids$[mid_values_8df7b24a3f004a19]));
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
            static PyObject *t_RangeMode_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RangeMode_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RangeMode_of_(t_RangeMode *self, PyObject *args);
            static PyObject *t_RangeMode_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_RangeMode_values(PyTypeObject *type);
            static PyObject *t_RangeMode_get__parameters_(t_RangeMode *self, void *data);
            static PyGetSetDef t_RangeMode__fields_[] = {
              DECLARE_GET_FIELD(t_RangeMode, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_RangeMode__methods_[] = {
              DECLARE_METHOD(t_RangeMode, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RangeMode, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RangeMode, of_, METH_VARARGS),
              DECLARE_METHOD(t_RangeMode, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_RangeMode, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RangeMode)[] = {
              { Py_tp_methods, t_RangeMode__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_RangeMode__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RangeMode)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(RangeMode, t_RangeMode, RangeMode);
            PyObject *t_RangeMode::wrap_Object(const RangeMode& object, PyTypeObject *p0)
            {
              PyObject *obj = t_RangeMode::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_RangeMode *self = (t_RangeMode *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_RangeMode::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_RangeMode::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_RangeMode *self = (t_RangeMode *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_RangeMode::install(PyObject *module)
            {
              installType(&PY_TYPE(RangeMode), &PY_TYPE_DEF(RangeMode), module, "RangeMode", 0);
            }

            void t_RangeMode::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeMode), "class_", make_descriptor(RangeMode::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeMode), "wrapfn_", make_descriptor(t_RangeMode::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeMode), "boxfn_", make_descriptor(boxObject));
              env->getClass(RangeMode::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeMode), "COHERENT", make_descriptor(t_RangeMode::wrap_Object(*RangeMode::COHERENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeMode), "CONSTANT", make_descriptor(t_RangeMode::wrap_Object(*RangeMode::CONSTANT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RangeMode), "ONE_WAY", make_descriptor(t_RangeMode::wrap_Object(*RangeMode::ONE_WAY)));
            }

            static PyObject *t_RangeMode_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RangeMode::initializeClass, 1)))
                return NULL;
              return t_RangeMode::wrap_Object(RangeMode(((t_RangeMode *) arg)->object.this$));
            }
            static PyObject *t_RangeMode_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RangeMode::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_RangeMode_of_(t_RangeMode *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_RangeMode_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              RangeMode result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::RangeMode::valueOf(a0));
                return t_RangeMode::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_RangeMode_values(PyTypeObject *type)
            {
              JArray< RangeMode > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::RangeMode::values());
              return JArray<jobject>(result.this$).wrap(t_RangeMode::wrap_jobject);
            }
            static PyObject *t_RangeMode_get__parameters_(t_RangeMode *self, void *data)
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
#include "org/orekit/propagation/events/PythonEventDetector.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/AdaptableInterval.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PythonEventDetector::class$ = NULL;
        jmethodID *PythonEventDetector::mids$ = NULL;
        bool PythonEventDetector::live$ = false;

        jclass PythonEventDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PythonEventDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_g_66a2f071e6ed0c06] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getHandler_d450688ba8c3949b] = env->getMethodID(cls, "getHandler", "()Lorg/orekit/propagation/events/handlers/EventHandler;");
            mids$[mid_getMaxCheckInterval_5b5c68574977d620] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/orekit/propagation/events/AdaptableInterval;");
            mids$[mid_getMaxIterationCount_f2f64475e4580546] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getThreshold_456d9a2f64d6b28d] = env->getMethodID(cls, "getThreshold", "()D");
            mids$[mid_init_3d13474d79f5e7bc] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEventDetector::PythonEventDetector() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonEventDetector::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonEventDetector::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonEventDetector::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
        static PyObject *t_PythonEventDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEventDetector_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonEventDetector_init_(t_PythonEventDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEventDetector_finalize(t_PythonEventDetector *self);
        static PyObject *t_PythonEventDetector_pythonExtension(t_PythonEventDetector *self, PyObject *args);
        static jdouble JNICALL t_PythonEventDetector_g0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonEventDetector_getHandler1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonEventDetector_getMaxCheckInterval2(JNIEnv *jenv, jobject jobj);
        static jint JNICALL t_PythonEventDetector_getMaxIterationCount3(JNIEnv *jenv, jobject jobj);
        static jdouble JNICALL t_PythonEventDetector_getThreshold4(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonEventDetector_init5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonEventDetector_pythonDecRef6(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonEventDetector_get__self(t_PythonEventDetector *self, void *data);
        static PyGetSetDef t_PythonEventDetector__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEventDetector, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEventDetector__methods_[] = {
          DECLARE_METHOD(t_PythonEventDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEventDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEventDetector, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEventDetector, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEventDetector)[] = {
          { Py_tp_methods, t_PythonEventDetector__methods_ },
          { Py_tp_init, (void *) t_PythonEventDetector_init_ },
          { Py_tp_getset, t_PythonEventDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEventDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEventDetector, t_PythonEventDetector, PythonEventDetector);

        void t_PythonEventDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEventDetector), &PY_TYPE_DEF(PythonEventDetector), module, "PythonEventDetector", 1);
        }

        void t_PythonEventDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEventDetector), "class_", make_descriptor(PythonEventDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEventDetector), "wrapfn_", make_descriptor(t_PythonEventDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEventDetector), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEventDetector::initializeClass);
          JNINativeMethod methods[] = {
            { "g", "(Lorg/orekit/propagation/SpacecraftState;)D", (void *) t_PythonEventDetector_g0 },
            { "getHandler", "()Lorg/orekit/propagation/events/handlers/EventHandler;", (void *) t_PythonEventDetector_getHandler1 },
            { "getMaxCheckInterval", "()Lorg/orekit/propagation/events/AdaptableInterval;", (void *) t_PythonEventDetector_getMaxCheckInterval2 },
            { "getMaxIterationCount", "()I", (void *) t_PythonEventDetector_getMaxIterationCount3 },
            { "getThreshold", "()D", (void *) t_PythonEventDetector_getThreshold4 },
            { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonEventDetector_init5 },
            { "pythonDecRef", "()V", (void *) t_PythonEventDetector_pythonDecRef6 },
          };
          env->registerNatives(cls, methods, 7);
        }

        static PyObject *t_PythonEventDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEventDetector::initializeClass, 1)))
            return NULL;
          return t_PythonEventDetector::wrap_Object(PythonEventDetector(((t_PythonEventDetector *) arg)->object.this$));
        }
        static PyObject *t_PythonEventDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEventDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonEventDetector_init_(t_PythonEventDetector *self, PyObject *args, PyObject *kwds)
        {
          PythonEventDetector object((jobject) NULL);

          INT_CALL(object = PythonEventDetector());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEventDetector_finalize(t_PythonEventDetector *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEventDetector_pythonExtension(t_PythonEventDetector *self, PyObject *args)
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

        static jdouble JNICALL t_PythonEventDetector_g0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetector::mids$[PythonEventDetector::mid_pythonExtension_a27fc9afd27e559d]);
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

        static jobject JNICALL t_PythonEventDetector_getHandler1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetector::mids$[PythonEventDetector::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::events::handlers::EventHandler value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getHandler", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::events::handlers::EventHandler::initializeClass, &value))
          {
            throwTypeError("getHandler", result);
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

        static jobject JNICALL t_PythonEventDetector_getMaxCheckInterval2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetector::mids$[PythonEventDetector::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::events::AdaptableInterval value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getMaxCheckInterval", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::events::AdaptableInterval::initializeClass, &value))
          {
            throwTypeError("getMaxCheckInterval", result);
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

        static jint JNICALL t_PythonEventDetector_getMaxIterationCount3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetector::mids$[PythonEventDetector::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getMaxIterationCount", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getMaxIterationCount", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jdouble JNICALL t_PythonEventDetector_getThreshold4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetector::mids$[PythonEventDetector::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *result = PyObject_CallMethod(obj, "getThreshold", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("getThreshold", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static void JNICALL t_PythonEventDetector_init5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetector::mids$[PythonEventDetector::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
          PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonEventDetector_pythonDecRef6(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEventDetector::mids$[PythonEventDetector::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEventDetector::mids$[PythonEventDetector::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonEventDetector_get__self(t_PythonEventDetector *self, void *data)
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
#include "org/orekit/files/ccsds/utils/generation/KvnGenerator.h"
#include "java/io/IOException.h"
#include "java/util/List.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            ::java::lang::Class *KvnGenerator::class$ = NULL;
            jmethodID *KvnGenerator::mids$ = NULL;
            bool KvnGenerator::live$ = false;

            jclass KvnGenerator::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/KvnGenerator");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_e62ce894fe8f381e] = env->getMethodID(cls, "<init>", "(Ljava/lang/Appendable;ILjava/lang/String;DI)V");
                mids$[mid_endMessage_e939c6558ae8d313] = env->getMethodID(cls, "endMessage", "(Ljava/lang/String;)V");
                mids$[mid_enterSection_e939c6558ae8d313] = env->getMethodID(cls, "enterSection", "(Ljava/lang/String;)V");
                mids$[mid_exitSection_0090f7797e403f43] = env->getMethodID(cls, "exitSection", "()Ljava/lang/String;");
                mids$[mid_getFormat_b51f613f857a5e84] = env->getMethodID(cls, "getFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;");
                mids$[mid_startMessage_f7e4436e61826cb4] = env->getMethodID(cls, "startMessage", "(Ljava/lang/String;Ljava/lang/String;D)V");
                mids$[mid_writeComments_65de9727799c5641] = env->getMethodID(cls, "writeComments", "(Ljava/util/List;)V");
                mids$[mid_writeEntry_110375161a97bc67] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/utils/units/Unit;Z)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            KvnGenerator::KvnGenerator(const ::java::lang::Appendable & a0, jint a1, const ::java::lang::String & a2, jdouble a3, jint a4) : ::org::orekit::files::ccsds::utils::generation::AbstractGenerator(env->newObject(initializeClass, &mids$, mid_init$_e62ce894fe8f381e, a0.this$, a1, a2.this$, a3, a4)) {}

            void KvnGenerator::endMessage(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_endMessage_e939c6558ae8d313], a0.this$);
            }

            void KvnGenerator::enterSection(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_enterSection_e939c6558ae8d313], a0.this$);
            }

            ::java::lang::String KvnGenerator::exitSection() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_exitSection_0090f7797e403f43]));
            }

            ::org::orekit::files::ccsds::utils::FileFormat KvnGenerator::getFormat() const
            {
              return ::org::orekit::files::ccsds::utils::FileFormat(env->callObjectMethod(this$, mids$[mid_getFormat_b51f613f857a5e84]));
            }

            void KvnGenerator::startMessage(const ::java::lang::String & a0, const ::java::lang::String & a1, jdouble a2) const
            {
              env->callVoidMethod(this$, mids$[mid_startMessage_f7e4436e61826cb4], a0.this$, a1.this$, a2);
            }

            void KvnGenerator::writeComments(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeComments_65de9727799c5641], a0.this$);
            }

            void KvnGenerator::writeEntry(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::utils::units::Unit & a2, jboolean a3) const
            {
              env->callVoidMethod(this$, mids$[mid_writeEntry_110375161a97bc67], a0.this$, a1.this$, a2.this$, a3);
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
            static PyObject *t_KvnGenerator_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_KvnGenerator_instance_(PyTypeObject *type, PyObject *arg);
            static int t_KvnGenerator_init_(t_KvnGenerator *self, PyObject *args, PyObject *kwds);
            static PyObject *t_KvnGenerator_endMessage(t_KvnGenerator *self, PyObject *args);
            static PyObject *t_KvnGenerator_enterSection(t_KvnGenerator *self, PyObject *args);
            static PyObject *t_KvnGenerator_exitSection(t_KvnGenerator *self, PyObject *args);
            static PyObject *t_KvnGenerator_getFormat(t_KvnGenerator *self, PyObject *args);
            static PyObject *t_KvnGenerator_startMessage(t_KvnGenerator *self, PyObject *args);
            static PyObject *t_KvnGenerator_writeComments(t_KvnGenerator *self, PyObject *args);
            static PyObject *t_KvnGenerator_writeEntry(t_KvnGenerator *self, PyObject *args);
            static PyObject *t_KvnGenerator_get__format(t_KvnGenerator *self, void *data);
            static PyGetSetDef t_KvnGenerator__fields_[] = {
              DECLARE_GET_FIELD(t_KvnGenerator, format),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_KvnGenerator__methods_[] = {
              DECLARE_METHOD(t_KvnGenerator, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_KvnGenerator, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_KvnGenerator, endMessage, METH_VARARGS),
              DECLARE_METHOD(t_KvnGenerator, enterSection, METH_VARARGS),
              DECLARE_METHOD(t_KvnGenerator, exitSection, METH_VARARGS),
              DECLARE_METHOD(t_KvnGenerator, getFormat, METH_VARARGS),
              DECLARE_METHOD(t_KvnGenerator, startMessage, METH_VARARGS),
              DECLARE_METHOD(t_KvnGenerator, writeComments, METH_VARARGS),
              DECLARE_METHOD(t_KvnGenerator, writeEntry, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(KvnGenerator)[] = {
              { Py_tp_methods, t_KvnGenerator__methods_ },
              { Py_tp_init, (void *) t_KvnGenerator_init_ },
              { Py_tp_getset, t_KvnGenerator__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(KvnGenerator)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractGenerator),
              NULL
            };

            DEFINE_TYPE(KvnGenerator, t_KvnGenerator, KvnGenerator);

            void t_KvnGenerator::install(PyObject *module)
            {
              installType(&PY_TYPE(KvnGenerator), &PY_TYPE_DEF(KvnGenerator), module, "KvnGenerator", 0);
            }

            void t_KvnGenerator::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(KvnGenerator), "class_", make_descriptor(KvnGenerator::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KvnGenerator), "wrapfn_", make_descriptor(t_KvnGenerator::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KvnGenerator), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_KvnGenerator_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, KvnGenerator::initializeClass, 1)))
                return NULL;
              return t_KvnGenerator::wrap_Object(KvnGenerator(((t_KvnGenerator *) arg)->object.this$));
            }
            static PyObject *t_KvnGenerator_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, KvnGenerator::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_KvnGenerator_init_(t_KvnGenerator *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::Appendable a0((jobject) NULL);
              jint a1;
              ::java::lang::String a2((jobject) NULL);
              jdouble a3;
              jint a4;
              KvnGenerator object((jobject) NULL);

              if (!parseArgs(args, "kIsDI", ::java::lang::Appendable::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = KvnGenerator(a0, a1, a2, a3, a4));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_KvnGenerator_endMessage(t_KvnGenerator *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(self->object.endMessage(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(KvnGenerator), (PyObject *) self, "endMessage", args, 2);
            }

            static PyObject *t_KvnGenerator_enterSection(t_KvnGenerator *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(self->object.enterSection(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(KvnGenerator), (PyObject *) self, "enterSection", args, 2);
            }

            static PyObject *t_KvnGenerator_exitSection(t_KvnGenerator *self, PyObject *args)
            {
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.exitSection());
                return j2p(result);
              }

              return callSuper(PY_TYPE(KvnGenerator), (PyObject *) self, "exitSection", args, 2);
            }

            static PyObject *t_KvnGenerator_getFormat(t_KvnGenerator *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::FileFormat result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.getFormat());
                return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(result);
              }

              return callSuper(PY_TYPE(KvnGenerator), (PyObject *) self, "getFormat", args, 2);
            }

            static PyObject *t_KvnGenerator_startMessage(t_KvnGenerator *self, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;

              if (!parseArgs(args, "ssD", &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.startMessage(a0, a1, a2));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(KvnGenerator), (PyObject *) self, "startMessage", args, 2);
            }

            static PyObject *t_KvnGenerator_writeComments(t_KvnGenerator *self, PyObject *args)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(self->object.writeComments(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(KvnGenerator), (PyObject *) self, "writeComments", args, 2);
            }

            static PyObject *t_KvnGenerator_writeEntry(t_KvnGenerator *self, PyObject *args)
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

              return callSuper(PY_TYPE(KvnGenerator), (PyObject *) self, "writeEntry", args, 2);
            }

            static PyObject *t_KvnGenerator_get__format(t_KvnGenerator *self, void *data)
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
#include "org/hipparchus/distribution/continuous/CauchyDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *CauchyDistribution::class$ = NULL;
        jmethodID *CauchyDistribution::mids$ = NULL;
        bool CauchyDistribution::live$ = false;

        jclass CauchyDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/CauchyDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_0ba5fed9597b693e] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_0ba5fed9597b693e] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getMedian_456d9a2f64d6b28d] = env->getMethodID(cls, "getMedian", "()D");
            mids$[mid_getNumericalMean_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getScale_456d9a2f64d6b28d] = env->getMethodID(cls, "getScale", "()D");
            mids$[mid_getSupportLowerBound_456d9a2f64d6b28d] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_456d9a2f64d6b28d] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_0ba5fed9597b693e] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_e470b6d9e0d979db] = env->getMethodID(cls, "isSupportConnected", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CauchyDistribution::CauchyDistribution() : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        CauchyDistribution::CauchyDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

        jdouble CauchyDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_0ba5fed9597b693e], a0);
        }

        jdouble CauchyDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_0ba5fed9597b693e], a0);
        }

        jdouble CauchyDistribution::getMedian() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMedian_456d9a2f64d6b28d]);
        }

        jdouble CauchyDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_456d9a2f64d6b28d]);
        }

        jdouble CauchyDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_456d9a2f64d6b28d]);
        }

        jdouble CauchyDistribution::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_456d9a2f64d6b28d]);
        }

        jdouble CauchyDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_456d9a2f64d6b28d]);
        }

        jdouble CauchyDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_456d9a2f64d6b28d]);
        }

        jdouble CauchyDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_0ba5fed9597b693e], a0);
        }

        jboolean CauchyDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_e470b6d9e0d979db]);
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
        static PyObject *t_CauchyDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CauchyDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CauchyDistribution_init_(t_CauchyDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CauchyDistribution_cumulativeProbability(t_CauchyDistribution *self, PyObject *args);
        static PyObject *t_CauchyDistribution_density(t_CauchyDistribution *self, PyObject *args);
        static PyObject *t_CauchyDistribution_getMedian(t_CauchyDistribution *self);
        static PyObject *t_CauchyDistribution_getNumericalMean(t_CauchyDistribution *self, PyObject *args);
        static PyObject *t_CauchyDistribution_getNumericalVariance(t_CauchyDistribution *self, PyObject *args);
        static PyObject *t_CauchyDistribution_getScale(t_CauchyDistribution *self);
        static PyObject *t_CauchyDistribution_getSupportLowerBound(t_CauchyDistribution *self, PyObject *args);
        static PyObject *t_CauchyDistribution_getSupportUpperBound(t_CauchyDistribution *self, PyObject *args);
        static PyObject *t_CauchyDistribution_inverseCumulativeProbability(t_CauchyDistribution *self, PyObject *args);
        static PyObject *t_CauchyDistribution_isSupportConnected(t_CauchyDistribution *self, PyObject *args);
        static PyObject *t_CauchyDistribution_get__median(t_CauchyDistribution *self, void *data);
        static PyObject *t_CauchyDistribution_get__numericalMean(t_CauchyDistribution *self, void *data);
        static PyObject *t_CauchyDistribution_get__numericalVariance(t_CauchyDistribution *self, void *data);
        static PyObject *t_CauchyDistribution_get__scale(t_CauchyDistribution *self, void *data);
        static PyObject *t_CauchyDistribution_get__supportConnected(t_CauchyDistribution *self, void *data);
        static PyObject *t_CauchyDistribution_get__supportLowerBound(t_CauchyDistribution *self, void *data);
        static PyObject *t_CauchyDistribution_get__supportUpperBound(t_CauchyDistribution *self, void *data);
        static PyGetSetDef t_CauchyDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_CauchyDistribution, median),
          DECLARE_GET_FIELD(t_CauchyDistribution, numericalMean),
          DECLARE_GET_FIELD(t_CauchyDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_CauchyDistribution, scale),
          DECLARE_GET_FIELD(t_CauchyDistribution, supportConnected),
          DECLARE_GET_FIELD(t_CauchyDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_CauchyDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CauchyDistribution__methods_[] = {
          DECLARE_METHOD(t_CauchyDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CauchyDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CauchyDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_CauchyDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_CauchyDistribution, getMedian, METH_NOARGS),
          DECLARE_METHOD(t_CauchyDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_CauchyDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_CauchyDistribution, getScale, METH_NOARGS),
          DECLARE_METHOD(t_CauchyDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_CauchyDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_CauchyDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_CauchyDistribution, isSupportConnected, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CauchyDistribution)[] = {
          { Py_tp_methods, t_CauchyDistribution__methods_ },
          { Py_tp_init, (void *) t_CauchyDistribution_init_ },
          { Py_tp_getset, t_CauchyDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CauchyDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(CauchyDistribution, t_CauchyDistribution, CauchyDistribution);

        void t_CauchyDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(CauchyDistribution), &PY_TYPE_DEF(CauchyDistribution), module, "CauchyDistribution", 0);
        }

        void t_CauchyDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CauchyDistribution), "class_", make_descriptor(CauchyDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CauchyDistribution), "wrapfn_", make_descriptor(t_CauchyDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CauchyDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CauchyDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CauchyDistribution::initializeClass, 1)))
            return NULL;
          return t_CauchyDistribution::wrap_Object(CauchyDistribution(((t_CauchyDistribution *) arg)->object.this$));
        }
        static PyObject *t_CauchyDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CauchyDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CauchyDistribution_init_(t_CauchyDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              CauchyDistribution object((jobject) NULL);

              INT_CALL(object = CauchyDistribution());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jdouble a1;
              CauchyDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = CauchyDistribution(a0, a1));
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

        static PyObject *t_CauchyDistribution_cumulativeProbability(t_CauchyDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(CauchyDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_CauchyDistribution_density(t_CauchyDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(CauchyDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_CauchyDistribution_getMedian(t_CauchyDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMedian());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CauchyDistribution_getNumericalMean(t_CauchyDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(CauchyDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_CauchyDistribution_getNumericalVariance(t_CauchyDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(CauchyDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_CauchyDistribution_getScale(t_CauchyDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CauchyDistribution_getSupportLowerBound(t_CauchyDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(CauchyDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_CauchyDistribution_getSupportUpperBound(t_CauchyDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(CauchyDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_CauchyDistribution_inverseCumulativeProbability(t_CauchyDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(CauchyDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_CauchyDistribution_isSupportConnected(t_CauchyDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(CauchyDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_CauchyDistribution_get__median(t_CauchyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMedian());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CauchyDistribution_get__numericalMean(t_CauchyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CauchyDistribution_get__numericalVariance(t_CauchyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CauchyDistribution_get__scale(t_CauchyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CauchyDistribution_get__supportConnected(t_CauchyDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_CauchyDistribution_get__supportLowerBound(t_CauchyDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CauchyDistribution_get__supportUpperBound(t_CauchyDistribution *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmMetadata.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AcmMetadataKey::class$ = NULL;
              jmethodID *AcmMetadataKey::mids$ = NULL;
              bool AcmMetadataKey::live$ = false;
              AcmMetadataKey *AcmMetadataKey::ACM_DATA_ELEMENTS = NULL;
              AcmMetadataKey *AcmMetadataKey::CATALOG_NAME = NULL;
              AcmMetadataKey *AcmMetadataKey::EPOCH_TZERO = NULL;
              AcmMetadataKey *AcmMetadataKey::INTERNATIONAL_DESIGNATOR = NULL;
              AcmMetadataKey *AcmMetadataKey::NEXT_LEAP_EPOCH = NULL;
              AcmMetadataKey *AcmMetadataKey::NEXT_LEAP_TAIMUTC = NULL;
              AcmMetadataKey *AcmMetadataKey::OBJECT_DESIGNATOR = NULL;
              AcmMetadataKey *AcmMetadataKey::ODM_MSG_LINK = NULL;
              AcmMetadataKey *AcmMetadataKey::ORIGINATOR_ADDRESS = NULL;
              AcmMetadataKey *AcmMetadataKey::ORIGINATOR_EMAIL = NULL;
              AcmMetadataKey *AcmMetadataKey::ORIGINATOR_PHONE = NULL;
              AcmMetadataKey *AcmMetadataKey::ORIGINATOR_POC = NULL;
              AcmMetadataKey *AcmMetadataKey::ORIGINATOR_POSITION = NULL;
              AcmMetadataKey *AcmMetadataKey::START_TIME = NULL;
              AcmMetadataKey *AcmMetadataKey::STOP_TIME = NULL;
              AcmMetadataKey *AcmMetadataKey::TAIMUTC_AT_TZERO = NULL;

              jclass AcmMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_196a1b88556776cf] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadata;)Z");
                  mids$[mid_valueOf_87928577c751a1bf] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;");
                  mids$[mid_values_e3e7aa3cda9fbf92] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ACM_DATA_ELEMENTS = new AcmMetadataKey(env->getStaticObjectField(cls, "ACM_DATA_ELEMENTS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  CATALOG_NAME = new AcmMetadataKey(env->getStaticObjectField(cls, "CATALOG_NAME", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  EPOCH_TZERO = new AcmMetadataKey(env->getStaticObjectField(cls, "EPOCH_TZERO", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  INTERNATIONAL_DESIGNATOR = new AcmMetadataKey(env->getStaticObjectField(cls, "INTERNATIONAL_DESIGNATOR", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  NEXT_LEAP_EPOCH = new AcmMetadataKey(env->getStaticObjectField(cls, "NEXT_LEAP_EPOCH", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  NEXT_LEAP_TAIMUTC = new AcmMetadataKey(env->getStaticObjectField(cls, "NEXT_LEAP_TAIMUTC", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  OBJECT_DESIGNATOR = new AcmMetadataKey(env->getStaticObjectField(cls, "OBJECT_DESIGNATOR", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  ODM_MSG_LINK = new AcmMetadataKey(env->getStaticObjectField(cls, "ODM_MSG_LINK", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  ORIGINATOR_ADDRESS = new AcmMetadataKey(env->getStaticObjectField(cls, "ORIGINATOR_ADDRESS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  ORIGINATOR_EMAIL = new AcmMetadataKey(env->getStaticObjectField(cls, "ORIGINATOR_EMAIL", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  ORIGINATOR_PHONE = new AcmMetadataKey(env->getStaticObjectField(cls, "ORIGINATOR_PHONE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  ORIGINATOR_POC = new AcmMetadataKey(env->getStaticObjectField(cls, "ORIGINATOR_POC", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  ORIGINATOR_POSITION = new AcmMetadataKey(env->getStaticObjectField(cls, "ORIGINATOR_POSITION", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  START_TIME = new AcmMetadataKey(env->getStaticObjectField(cls, "START_TIME", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  STOP_TIME = new AcmMetadataKey(env->getStaticObjectField(cls, "STOP_TIME", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  TAIMUTC_AT_TZERO = new AcmMetadataKey(env->getStaticObjectField(cls, "TAIMUTC_AT_TZERO", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AcmMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::acm::AcmMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_196a1b88556776cf], a0.this$, a1.this$, a2.this$);
              }

              AcmMetadataKey AcmMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AcmMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_87928577c751a1bf], a0.this$));
              }

              JArray< AcmMetadataKey > AcmMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AcmMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_e3e7aa3cda9fbf92]));
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
              static PyObject *t_AcmMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmMetadataKey_of_(t_AcmMetadataKey *self, PyObject *args);
              static PyObject *t_AcmMetadataKey_process(t_AcmMetadataKey *self, PyObject *args);
              static PyObject *t_AcmMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AcmMetadataKey_values(PyTypeObject *type);
              static PyObject *t_AcmMetadataKey_get__parameters_(t_AcmMetadataKey *self, void *data);
              static PyGetSetDef t_AcmMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_AcmMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AcmMetadataKey__methods_[] = {
                DECLARE_METHOD(t_AcmMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AcmMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AcmMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AcmMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AcmMetadataKey)[] = {
                { Py_tp_methods, t_AcmMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AcmMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AcmMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AcmMetadataKey, t_AcmMetadataKey, AcmMetadataKey);
              PyObject *t_AcmMetadataKey::wrap_Object(const AcmMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AcmMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AcmMetadataKey *self = (t_AcmMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AcmMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AcmMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AcmMetadataKey *self = (t_AcmMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AcmMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AcmMetadataKey), &PY_TYPE_DEF(AcmMetadataKey), module, "AcmMetadataKey", 0);
              }

              void t_AcmMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "class_", make_descriptor(AcmMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "wrapfn_", make_descriptor(t_AcmMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AcmMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "ACM_DATA_ELEMENTS", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::ACM_DATA_ELEMENTS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "CATALOG_NAME", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::CATALOG_NAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "EPOCH_TZERO", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::EPOCH_TZERO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "INTERNATIONAL_DESIGNATOR", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::INTERNATIONAL_DESIGNATOR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "NEXT_LEAP_EPOCH", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::NEXT_LEAP_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "NEXT_LEAP_TAIMUTC", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::NEXT_LEAP_TAIMUTC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "OBJECT_DESIGNATOR", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::OBJECT_DESIGNATOR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "ODM_MSG_LINK", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::ODM_MSG_LINK)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "ORIGINATOR_ADDRESS", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::ORIGINATOR_ADDRESS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "ORIGINATOR_EMAIL", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::ORIGINATOR_EMAIL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "ORIGINATOR_PHONE", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::ORIGINATOR_PHONE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "ORIGINATOR_POC", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::ORIGINATOR_POC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "ORIGINATOR_POSITION", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::ORIGINATOR_POSITION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "START_TIME", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::START_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "STOP_TIME", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::STOP_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmMetadataKey), "TAIMUTC_AT_TZERO", make_descriptor(t_AcmMetadataKey::wrap_Object(*AcmMetadataKey::TAIMUTC_AT_TZERO)));
              }

              static PyObject *t_AcmMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AcmMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_AcmMetadataKey::wrap_Object(AcmMetadataKey(((t_AcmMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_AcmMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AcmMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AcmMetadataKey_of_(t_AcmMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AcmMetadataKey_process(t_AcmMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::AcmMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AcmMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AcmMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AcmMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AcmMetadataKey::valueOf(a0));
                  return t_AcmMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AcmMetadataKey_values(PyTypeObject *type)
              {
                JArray< AcmMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AcmMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_AcmMetadataKey::wrap_jobject);
              }
              static PyObject *t_AcmMetadataKey_get__parameters_(t_AcmMetadataKey *self, void *data)
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
#include "org/hipparchus/geometry/partitioning/BSPTreeVisitor.h"
#include "org/hipparchus/geometry/partitioning/BSPTreeVisitor$Order.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
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
            mids$[mid_visitInternalNode_d174f4dc4d22a6b4] = env->getMethodID(cls, "visitInternalNode", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)V");
            mids$[mid_visitLeafNode_d174f4dc4d22a6b4] = env->getMethodID(cls, "visitLeafNode", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)V");
            mids$[mid_visitOrder_73f7b6c4b9295dd0] = env->getMethodID(cls, "visitOrder", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor$Order;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void BSPTreeVisitor::visitInternalNode(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_visitInternalNode_d174f4dc4d22a6b4], a0.this$);
        }

        void BSPTreeVisitor::visitLeafNode(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_visitLeafNode_d174f4dc4d22a6b4], a0.this$);
        }

        ::org::hipparchus::geometry::partitioning::BSPTreeVisitor$Order BSPTreeVisitor::visitOrder(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::BSPTreeVisitor$Order(env->callObjectMethod(this$, mids$[mid_visitOrder_73f7b6c4b9295dd0], a0.this$));
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
#include "org/orekit/files/ccsds/ndm/adm/acm/RateElementsType.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "java/util/List.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/RateElementsType.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *RateElementsType::class$ = NULL;
              jmethodID *RateElementsType::mids$ = NULL;
              bool RateElementsType::live$ = false;
              RateElementsType *RateElementsType::ANGVEL = NULL;
              RateElementsType *RateElementsType::EULER_RATE = NULL;
              RateElementsType *RateElementsType::GYRO_BIAS = NULL;
              RateElementsType *RateElementsType::NONE = NULL;
              RateElementsType *RateElementsType::Q_DOT = NULL;

              jclass RateElementsType::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/RateElementsType");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_getUnits_a6156df500549a58] = env->getMethodID(cls, "getUnits", "()Ljava/util/List;");
                  mids$[mid_toAngular_8d80b15b51b04d84] = env->getMethodID(cls, "toAngular", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;Lorg/hipparchus/geometry/euclidean/threed/Rotation;I[D)Lorg/orekit/utils/TimeStampedAngularCoordinates;");
                  mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
                  mids$[mid_valueOf_ade7a79fe881422f] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;");
                  mids$[mid_values_553073a1d30f05d4] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ANGVEL = new RateElementsType(env->getStaticObjectField(cls, "ANGVEL", "Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;"));
                  EULER_RATE = new RateElementsType(env->getStaticObjectField(cls, "EULER_RATE", "Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;"));
                  GYRO_BIAS = new RateElementsType(env->getStaticObjectField(cls, "GYRO_BIAS", "Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;"));
                  NONE = new RateElementsType(env->getStaticObjectField(cls, "NONE", "Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;"));
                  Q_DOT = new RateElementsType(env->getStaticObjectField(cls, "Q_DOT", "Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::java::util::List RateElementsType::getUnits() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getUnits_a6156df500549a58]));
              }

              ::org::orekit::utils::TimeStampedAngularCoordinates RateElementsType::toAngular(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a1, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a2, jint a3, const JArray< jdouble > & a4) const
              {
                return ::org::orekit::utils::TimeStampedAngularCoordinates(env->callObjectMethod(this$, mids$[mid_toAngular_8d80b15b51b04d84], a0.this$, a1.this$, a2.this$, a3, a4.this$));
              }

              ::java::lang::String RateElementsType::toString() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
              }

              RateElementsType RateElementsType::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return RateElementsType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ade7a79fe881422f], a0.this$));
              }

              JArray< RateElementsType > RateElementsType::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< RateElementsType >(env->callStaticObjectMethod(cls, mids$[mid_values_553073a1d30f05d4]));
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
              static PyObject *t_RateElementsType_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RateElementsType_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RateElementsType_of_(t_RateElementsType *self, PyObject *args);
              static PyObject *t_RateElementsType_getUnits(t_RateElementsType *self);
              static PyObject *t_RateElementsType_toAngular(t_RateElementsType *self, PyObject *args);
              static PyObject *t_RateElementsType_toString(t_RateElementsType *self, PyObject *args);
              static PyObject *t_RateElementsType_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_RateElementsType_values(PyTypeObject *type);
              static PyObject *t_RateElementsType_get__units(t_RateElementsType *self, void *data);
              static PyObject *t_RateElementsType_get__parameters_(t_RateElementsType *self, void *data);
              static PyGetSetDef t_RateElementsType__fields_[] = {
                DECLARE_GET_FIELD(t_RateElementsType, units),
                DECLARE_GET_FIELD(t_RateElementsType, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RateElementsType__methods_[] = {
                DECLARE_METHOD(t_RateElementsType, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RateElementsType, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RateElementsType, of_, METH_VARARGS),
                DECLARE_METHOD(t_RateElementsType, getUnits, METH_NOARGS),
                DECLARE_METHOD(t_RateElementsType, toAngular, METH_VARARGS),
                DECLARE_METHOD(t_RateElementsType, toString, METH_VARARGS),
                DECLARE_METHOD(t_RateElementsType, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_RateElementsType, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RateElementsType)[] = {
                { Py_tp_methods, t_RateElementsType__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_RateElementsType__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RateElementsType)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(RateElementsType, t_RateElementsType, RateElementsType);
              PyObject *t_RateElementsType::wrap_Object(const RateElementsType& object, PyTypeObject *p0)
              {
                PyObject *obj = t_RateElementsType::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_RateElementsType *self = (t_RateElementsType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_RateElementsType::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_RateElementsType::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_RateElementsType *self = (t_RateElementsType *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_RateElementsType::install(PyObject *module)
              {
                installType(&PY_TYPE(RateElementsType), &PY_TYPE_DEF(RateElementsType), module, "RateElementsType", 0);
              }

              void t_RateElementsType::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RateElementsType), "class_", make_descriptor(RateElementsType::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RateElementsType), "wrapfn_", make_descriptor(t_RateElementsType::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RateElementsType), "boxfn_", make_descriptor(boxObject));
                env->getClass(RateElementsType::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(RateElementsType), "ANGVEL", make_descriptor(t_RateElementsType::wrap_Object(*RateElementsType::ANGVEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RateElementsType), "EULER_RATE", make_descriptor(t_RateElementsType::wrap_Object(*RateElementsType::EULER_RATE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RateElementsType), "GYRO_BIAS", make_descriptor(t_RateElementsType::wrap_Object(*RateElementsType::GYRO_BIAS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RateElementsType), "NONE", make_descriptor(t_RateElementsType::wrap_Object(*RateElementsType::NONE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RateElementsType), "Q_DOT", make_descriptor(t_RateElementsType::wrap_Object(*RateElementsType::Q_DOT)));
              }

              static PyObject *t_RateElementsType_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RateElementsType::initializeClass, 1)))
                  return NULL;
                return t_RateElementsType::wrap_Object(RateElementsType(((t_RateElementsType *) arg)->object.this$));
              }
              static PyObject *t_RateElementsType_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RateElementsType::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_RateElementsType_of_(t_RateElementsType *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_RateElementsType_getUnits(t_RateElementsType *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getUnits());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::units::PY_TYPE(Unit));
              }

              static PyObject *t_RateElementsType_toAngular(t_RateElementsType *self, PyObject *args)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::geometry::euclidean::threed::Rotation a2((jobject) NULL);
                jint a3;
                JArray< jdouble > a4((jobject) NULL);
                ::org::orekit::utils::TimeStampedAngularCoordinates result((jobject) NULL);

                if (!parseArgs(args, "kKkI[D", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a2, &a3, &a4))
                {
                  OBJ_CALL(result = self->object.toAngular(a0, a1, a2, a3, a4));
                  return ::org::orekit::utils::t_TimeStampedAngularCoordinates::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "toAngular", args);
                return NULL;
              }

              static PyObject *t_RateElementsType_toString(t_RateElementsType *self, PyObject *args)
              {
                ::java::lang::String result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.toString());
                  return j2p(result);
                }

                return callSuper(PY_TYPE(RateElementsType), (PyObject *) self, "toString", args, 2);
              }

              static PyObject *t_RateElementsType_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                RateElementsType result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType::valueOf(a0));
                  return t_RateElementsType::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_RateElementsType_values(PyTypeObject *type)
              {
                JArray< RateElementsType > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType::values());
                return JArray<jobject>(result.this$).wrap(t_RateElementsType::wrap_jobject);
              }
              static PyObject *t_RateElementsType_get__parameters_(t_RateElementsType *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_RateElementsType_get__units(t_RateElementsType *self, void *data)
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
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldPVCoordinatesProvider::class$ = NULL;
      jmethodID *FieldPVCoordinatesProvider::mids$ = NULL;
      bool FieldPVCoordinatesProvider::live$ = false;

      jclass FieldPVCoordinatesProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldPVCoordinatesProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getPVCoordinates_0e277b7d6a64b75a] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPosition_2ef0da8117530bf5] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldPVCoordinatesProvider::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_0e277b7d6a64b75a], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinatesProvider::getPosition(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getPosition_2ef0da8117530bf5], a0.this$, a1.this$));
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
      static PyObject *t_FieldPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldPVCoordinatesProvider_of_(t_FieldPVCoordinatesProvider *self, PyObject *args);
      static PyObject *t_FieldPVCoordinatesProvider_getPVCoordinates(t_FieldPVCoordinatesProvider *self, PyObject *args);
      static PyObject *t_FieldPVCoordinatesProvider_getPosition(t_FieldPVCoordinatesProvider *self, PyObject *args);
      static PyObject *t_FieldPVCoordinatesProvider_get__parameters_(t_FieldPVCoordinatesProvider *self, void *data);
      static PyGetSetDef t_FieldPVCoordinatesProvider__fields_[] = {
        DECLARE_GET_FIELD(t_FieldPVCoordinatesProvider, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldPVCoordinatesProvider__methods_[] = {
        DECLARE_METHOD(t_FieldPVCoordinatesProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldPVCoordinatesProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldPVCoordinatesProvider, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldPVCoordinatesProvider, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_FieldPVCoordinatesProvider, getPosition, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldPVCoordinatesProvider)[] = {
        { Py_tp_methods, t_FieldPVCoordinatesProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldPVCoordinatesProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldPVCoordinatesProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldPVCoordinatesProvider, t_FieldPVCoordinatesProvider, FieldPVCoordinatesProvider);
      PyObject *t_FieldPVCoordinatesProvider::wrap_Object(const FieldPVCoordinatesProvider& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldPVCoordinatesProvider::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldPVCoordinatesProvider *self = (t_FieldPVCoordinatesProvider *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldPVCoordinatesProvider::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldPVCoordinatesProvider::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldPVCoordinatesProvider *self = (t_FieldPVCoordinatesProvider *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldPVCoordinatesProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldPVCoordinatesProvider), &PY_TYPE_DEF(FieldPVCoordinatesProvider), module, "FieldPVCoordinatesProvider", 0);
      }

      void t_FieldPVCoordinatesProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPVCoordinatesProvider), "class_", make_descriptor(FieldPVCoordinatesProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPVCoordinatesProvider), "wrapfn_", make_descriptor(t_FieldPVCoordinatesProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPVCoordinatesProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldPVCoordinatesProvider::initializeClass, 1)))
          return NULL;
        return t_FieldPVCoordinatesProvider::wrap_Object(FieldPVCoordinatesProvider(((t_FieldPVCoordinatesProvider *) arg)->object.this$));
      }
      static PyObject *t_FieldPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldPVCoordinatesProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldPVCoordinatesProvider_of_(t_FieldPVCoordinatesProvider *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldPVCoordinatesProvider_getPVCoordinates(t_FieldPVCoordinatesProvider *self, PyObject *args)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
          return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_FieldPVCoordinatesProvider_getPosition(t_FieldPVCoordinatesProvider *self, PyObject *args)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getPosition(a0, a1));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getPosition", args);
        return NULL;
      }
      static PyObject *t_FieldPVCoordinatesProvider_get__parameters_(t_FieldPVCoordinatesProvider *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
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
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_openOnce_eafcb03912e8859c] = env->getMethodID(cls, "openOnce", "()Ljava/io/InputStream;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonStreamOpener::PythonStreamOpener() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonStreamOpener::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonStreamOpener::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonStreamOpener::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonStreamOpener::mids$[PythonStreamOpener::mid_pythonExtension_a27fc9afd27e559d]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonStreamOpener::mids$[PythonStreamOpener::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonStreamOpener::mids$[PythonStreamOpener::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
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
#include "org/orekit/files/ccsds/ndm/odm/oem/OemSegment.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemMetadata.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemData.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/files/general/EphemerisFile$EphemerisSegment.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovariance.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *OemSegment::class$ = NULL;
              jmethodID *OemSegment::mids$ = NULL;
              bool OemSegment::live$ = false;

              jclass OemSegment::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/OemSegment");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a6673f64aad509d7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadata;Lorg/orekit/files/ccsds/ndm/odm/oem/OemData;D)V");
                  mids$[mid_getAvailableDerivatives_237181d932324188] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
                  mids$[mid_getCoordinates_a6156df500549a58] = env->getMethodID(cls, "getCoordinates", "()Ljava/util/List;");
                  mids$[mid_getCovarianceMatrices_a6156df500549a58] = env->getMethodID(cls, "getCovarianceMatrices", "()Ljava/util/List;");
                  mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
                  mids$[mid_getInertialFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getInertialFrame", "()Lorg/orekit/frames/Frame;");
                  mids$[mid_getInterpolationSamples_f2f64475e4580546] = env->getMethodID(cls, "getInterpolationSamples", "()I");
                  mids$[mid_getMu_456d9a2f64d6b28d] = env->getMethodID(cls, "getMu", "()D");
                  mids$[mid_getStart_aaa854c403487cf3] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStop_aaa854c403487cf3] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OemSegment::OemSegment(const ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata & a0, const ::org::orekit::files::ccsds::ndm::odm::oem::OemData & a1, jdouble a2) : ::org::orekit::files::ccsds::section::Segment(env->newObject(initializeClass, &mids$, mid_init$_a6673f64aad509d7, a0.this$, a1.this$, a2)) {}

              ::org::orekit::utils::CartesianDerivativesFilter OemSegment::getAvailableDerivatives() const
              {
                return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_237181d932324188]));
              }

              ::java::util::List OemSegment::getCoordinates() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCoordinates_a6156df500549a58]));
              }

              ::java::util::List OemSegment::getCovarianceMatrices() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCovarianceMatrices_a6156df500549a58]));
              }

              ::org::orekit::frames::Frame OemSegment::getFrame() const
              {
                return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
              }

              ::org::orekit::frames::Frame OemSegment::getInertialFrame() const
              {
                return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getInertialFrame_c8fe21bcdac65bf6]));
              }

              jint OemSegment::getInterpolationSamples() const
              {
                return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_f2f64475e4580546]);
              }

              jdouble OemSegment::getMu() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMu_456d9a2f64d6b28d]);
              }

              ::org::orekit::time::AbsoluteDate OemSegment::getStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_aaa854c403487cf3]));
              }

              ::org::orekit::time::AbsoluteDate OemSegment::getStop() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_aaa854c403487cf3]));
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
            namespace oem {
              static PyObject *t_OemSegment_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemSegment_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemSegment_of_(t_OemSegment *self, PyObject *args);
              static int t_OemSegment_init_(t_OemSegment *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OemSegment_getAvailableDerivatives(t_OemSegment *self);
              static PyObject *t_OemSegment_getCoordinates(t_OemSegment *self);
              static PyObject *t_OemSegment_getCovarianceMatrices(t_OemSegment *self);
              static PyObject *t_OemSegment_getFrame(t_OemSegment *self);
              static PyObject *t_OemSegment_getInertialFrame(t_OemSegment *self);
              static PyObject *t_OemSegment_getInterpolationSamples(t_OemSegment *self);
              static PyObject *t_OemSegment_getMu(t_OemSegment *self);
              static PyObject *t_OemSegment_getStart(t_OemSegment *self);
              static PyObject *t_OemSegment_getStop(t_OemSegment *self);
              static PyObject *t_OemSegment_get__availableDerivatives(t_OemSegment *self, void *data);
              static PyObject *t_OemSegment_get__coordinates(t_OemSegment *self, void *data);
              static PyObject *t_OemSegment_get__covarianceMatrices(t_OemSegment *self, void *data);
              static PyObject *t_OemSegment_get__frame(t_OemSegment *self, void *data);
              static PyObject *t_OemSegment_get__inertialFrame(t_OemSegment *self, void *data);
              static PyObject *t_OemSegment_get__interpolationSamples(t_OemSegment *self, void *data);
              static PyObject *t_OemSegment_get__mu(t_OemSegment *self, void *data);
              static PyObject *t_OemSegment_get__start(t_OemSegment *self, void *data);
              static PyObject *t_OemSegment_get__stop(t_OemSegment *self, void *data);
              static PyObject *t_OemSegment_get__parameters_(t_OemSegment *self, void *data);
              static PyGetSetDef t_OemSegment__fields_[] = {
                DECLARE_GET_FIELD(t_OemSegment, availableDerivatives),
                DECLARE_GET_FIELD(t_OemSegment, coordinates),
                DECLARE_GET_FIELD(t_OemSegment, covarianceMatrices),
                DECLARE_GET_FIELD(t_OemSegment, frame),
                DECLARE_GET_FIELD(t_OemSegment, inertialFrame),
                DECLARE_GET_FIELD(t_OemSegment, interpolationSamples),
                DECLARE_GET_FIELD(t_OemSegment, mu),
                DECLARE_GET_FIELD(t_OemSegment, start),
                DECLARE_GET_FIELD(t_OemSegment, stop),
                DECLARE_GET_FIELD(t_OemSegment, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OemSegment__methods_[] = {
                DECLARE_METHOD(t_OemSegment, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemSegment, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemSegment, of_, METH_VARARGS),
                DECLARE_METHOD(t_OemSegment, getAvailableDerivatives, METH_NOARGS),
                DECLARE_METHOD(t_OemSegment, getCoordinates, METH_NOARGS),
                DECLARE_METHOD(t_OemSegment, getCovarianceMatrices, METH_NOARGS),
                DECLARE_METHOD(t_OemSegment, getFrame, METH_NOARGS),
                DECLARE_METHOD(t_OemSegment, getInertialFrame, METH_NOARGS),
                DECLARE_METHOD(t_OemSegment, getInterpolationSamples, METH_NOARGS),
                DECLARE_METHOD(t_OemSegment, getMu, METH_NOARGS),
                DECLARE_METHOD(t_OemSegment, getStart, METH_NOARGS),
                DECLARE_METHOD(t_OemSegment, getStop, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OemSegment)[] = {
                { Py_tp_methods, t_OemSegment__methods_ },
                { Py_tp_init, (void *) t_OemSegment_init_ },
                { Py_tp_getset, t_OemSegment__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OemSegment)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Segment),
                NULL
              };

              DEFINE_TYPE(OemSegment, t_OemSegment, OemSegment);
              PyObject *t_OemSegment::wrap_Object(const OemSegment& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_OemSegment::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OemSegment *self = (t_OemSegment *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_OemSegment::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_OemSegment::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OemSegment *self = (t_OemSegment *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_OemSegment::install(PyObject *module)
              {
                installType(&PY_TYPE(OemSegment), &PY_TYPE_DEF(OemSegment), module, "OemSegment", 0);
              }

              void t_OemSegment::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemSegment), "class_", make_descriptor(OemSegment::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemSegment), "wrapfn_", make_descriptor(t_OemSegment::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemSegment), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OemSegment_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OemSegment::initializeClass, 1)))
                  return NULL;
                return t_OemSegment::wrap_Object(OemSegment(((t_OemSegment *) arg)->object.this$));
              }
              static PyObject *t_OemSegment_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OemSegment::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OemSegment_of_(t_OemSegment *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_OemSegment_init_(t_OemSegment *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::oem::OemData a1((jobject) NULL);
                jdouble a2;
                OemSegment object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata::initializeClass, ::org::orekit::files::ccsds::ndm::odm::oem::OemData::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = OemSegment(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::odm::oem::PY_TYPE(OemMetadata);
                  self->parameters[1] = ::org::orekit::files::ccsds::ndm::odm::oem::PY_TYPE(OemData);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OemSegment_getAvailableDerivatives(t_OemSegment *self)
              {
                ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
                OBJ_CALL(result = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
              }

              static PyObject *t_OemSegment_getCoordinates(t_OemSegment *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCoordinates());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates));
              }

              static PyObject *t_OemSegment_getCovarianceMatrices(t_OemSegment *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovarianceMatrices());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::PY_TYPE(CartesianCovariance));
              }

              static PyObject *t_OemSegment_getFrame(t_OemSegment *self)
              {
                ::org::orekit::frames::Frame result((jobject) NULL);
                OBJ_CALL(result = self->object.getFrame());
                return ::org::orekit::frames::t_Frame::wrap_Object(result);
              }

              static PyObject *t_OemSegment_getInertialFrame(t_OemSegment *self)
              {
                ::org::orekit::frames::Frame result((jobject) NULL);
                OBJ_CALL(result = self->object.getInertialFrame());
                return ::org::orekit::frames::t_Frame::wrap_Object(result);
              }

              static PyObject *t_OemSegment_getInterpolationSamples(t_OemSegment *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getInterpolationSamples());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OemSegment_getMu(t_OemSegment *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMu());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OemSegment_getStart(t_OemSegment *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OemSegment_getStop(t_OemSegment *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
              static PyObject *t_OemSegment_get__parameters_(t_OemSegment *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_OemSegment_get__availableDerivatives(t_OemSegment *self, void *data)
              {
                ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
                OBJ_CALL(value = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
              }

              static PyObject *t_OemSegment_get__coordinates(t_OemSegment *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCoordinates());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OemSegment_get__covarianceMatrices(t_OemSegment *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovarianceMatrices());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OemSegment_get__frame(t_OemSegment *self, void *data)
              {
                ::org::orekit::frames::Frame value((jobject) NULL);
                OBJ_CALL(value = self->object.getFrame());
                return ::org::orekit::frames::t_Frame::wrap_Object(value);
              }

              static PyObject *t_OemSegment_get__inertialFrame(t_OemSegment *self, void *data)
              {
                ::org::orekit::frames::Frame value((jobject) NULL);
                OBJ_CALL(value = self->object.getInertialFrame());
                return ::org::orekit::frames::t_Frame::wrap_Object(value);
              }

              static PyObject *t_OemSegment_get__interpolationSamples(t_OemSegment *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getInterpolationSamples());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_OemSegment_get__mu(t_OemSegment *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMu());
                return PyFloat_FromDouble((double) value);
              }

              static PyObject *t_OemSegment_get__start(t_OemSegment *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_OemSegment_get__stop(t_OemSegment *self, void *data)
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
#include "org/orekit/files/ilrs/CRDHeader$DataType.h"
#include "org/orekit/files/ilrs/CRDHeader$DataType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDHeader$DataType::class$ = NULL;
        jmethodID *CRDHeader$DataType::mids$ = NULL;
        bool CRDHeader$DataType::live$ = false;
        CRDHeader$DataType *CRDHeader$DataType::FULL_RATE = NULL;
        CRDHeader$DataType *CRDHeader$DataType::NORMAL_POINT = NULL;
        CRDHeader$DataType *CRDHeader$DataType::SAMPLED_ENGIEERING = NULL;

        jclass CRDHeader$DataType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDHeader$DataType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getDataType_7dcb5780a9e3164c] = env->getStaticMethodID(cls, "getDataType", "(I)Lorg/orekit/files/ilrs/CRDHeader$DataType;");
            mids$[mid_getIndicator_f2f64475e4580546] = env->getMethodID(cls, "getIndicator", "()I");
            mids$[mid_valueOf_f16805151c4ef66e] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ilrs/CRDHeader$DataType;");
            mids$[mid_values_b8e90658c7107b7f] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ilrs/CRDHeader$DataType;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            FULL_RATE = new CRDHeader$DataType(env->getStaticObjectField(cls, "FULL_RATE", "Lorg/orekit/files/ilrs/CRDHeader$DataType;"));
            NORMAL_POINT = new CRDHeader$DataType(env->getStaticObjectField(cls, "NORMAL_POINT", "Lorg/orekit/files/ilrs/CRDHeader$DataType;"));
            SAMPLED_ENGIEERING = new CRDHeader$DataType(env->getStaticObjectField(cls, "SAMPLED_ENGIEERING", "Lorg/orekit/files/ilrs/CRDHeader$DataType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDHeader$DataType CRDHeader$DataType::getDataType(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return CRDHeader$DataType(env->callStaticObjectMethod(cls, mids$[mid_getDataType_7dcb5780a9e3164c], a0));
        }

        jint CRDHeader$DataType::getIndicator() const
        {
          return env->callIntMethod(this$, mids$[mid_getIndicator_f2f64475e4580546]);
        }

        CRDHeader$DataType CRDHeader$DataType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return CRDHeader$DataType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f16805151c4ef66e], a0.this$));
        }

        JArray< CRDHeader$DataType > CRDHeader$DataType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< CRDHeader$DataType >(env->callStaticObjectMethod(cls, mids$[mid_values_b8e90658c7107b7f]));
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
        static PyObject *t_CRDHeader$DataType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDHeader$DataType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDHeader$DataType_of_(t_CRDHeader$DataType *self, PyObject *args);
        static PyObject *t_CRDHeader$DataType_getDataType(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDHeader$DataType_getIndicator(t_CRDHeader$DataType *self);
        static PyObject *t_CRDHeader$DataType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_CRDHeader$DataType_values(PyTypeObject *type);
        static PyObject *t_CRDHeader$DataType_get__indicator(t_CRDHeader$DataType *self, void *data);
        static PyObject *t_CRDHeader$DataType_get__parameters_(t_CRDHeader$DataType *self, void *data);
        static PyGetSetDef t_CRDHeader$DataType__fields_[] = {
          DECLARE_GET_FIELD(t_CRDHeader$DataType, indicator),
          DECLARE_GET_FIELD(t_CRDHeader$DataType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDHeader$DataType__methods_[] = {
          DECLARE_METHOD(t_CRDHeader$DataType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDHeader$DataType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDHeader$DataType, of_, METH_VARARGS),
          DECLARE_METHOD(t_CRDHeader$DataType, getDataType, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDHeader$DataType, getIndicator, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader$DataType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_CRDHeader$DataType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDHeader$DataType)[] = {
          { Py_tp_methods, t_CRDHeader$DataType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_CRDHeader$DataType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDHeader$DataType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(CRDHeader$DataType, t_CRDHeader$DataType, CRDHeader$DataType);
        PyObject *t_CRDHeader$DataType::wrap_Object(const CRDHeader$DataType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_CRDHeader$DataType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_CRDHeader$DataType *self = (t_CRDHeader$DataType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_CRDHeader$DataType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_CRDHeader$DataType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_CRDHeader$DataType *self = (t_CRDHeader$DataType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_CRDHeader$DataType::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDHeader$DataType), &PY_TYPE_DEF(CRDHeader$DataType), module, "CRDHeader$DataType", 0);
        }

        void t_CRDHeader$DataType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$DataType), "class_", make_descriptor(CRDHeader$DataType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$DataType), "wrapfn_", make_descriptor(t_CRDHeader$DataType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$DataType), "boxfn_", make_descriptor(boxObject));
          env->getClass(CRDHeader$DataType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$DataType), "FULL_RATE", make_descriptor(t_CRDHeader$DataType::wrap_Object(*CRDHeader$DataType::FULL_RATE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$DataType), "NORMAL_POINT", make_descriptor(t_CRDHeader$DataType::wrap_Object(*CRDHeader$DataType::NORMAL_POINT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader$DataType), "SAMPLED_ENGIEERING", make_descriptor(t_CRDHeader$DataType::wrap_Object(*CRDHeader$DataType::SAMPLED_ENGIEERING)));
        }

        static PyObject *t_CRDHeader$DataType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDHeader$DataType::initializeClass, 1)))
            return NULL;
          return t_CRDHeader$DataType::wrap_Object(CRDHeader$DataType(((t_CRDHeader$DataType *) arg)->object.this$));
        }
        static PyObject *t_CRDHeader$DataType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDHeader$DataType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_CRDHeader$DataType_of_(t_CRDHeader$DataType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_CRDHeader$DataType_getDataType(PyTypeObject *type, PyObject *arg)
        {
          jint a0;
          CRDHeader$DataType result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::ilrs::CRDHeader$DataType::getDataType(a0));
            return t_CRDHeader$DataType::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getDataType", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader$DataType_getIndicator(t_CRDHeader$DataType *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getIndicator());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDHeader$DataType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          CRDHeader$DataType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::ilrs::CRDHeader$DataType::valueOf(a0));
            return t_CRDHeader$DataType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_CRDHeader$DataType_values(PyTypeObject *type)
        {
          JArray< CRDHeader$DataType > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::files::ilrs::CRDHeader$DataType::values());
          return JArray<jobject>(result.this$).wrap(t_CRDHeader$DataType::wrap_jobject);
        }
        static PyObject *t_CRDHeader$DataType_get__parameters_(t_CRDHeader$DataType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_CRDHeader$DataType_get__indicator(t_CRDHeader$DataType *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getIndicator());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/Beta.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {

      ::java::lang::Class *Beta::class$ = NULL;
      jmethodID *Beta::mids$ = NULL;
      bool Beta::live$ = false;

      jclass Beta::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/special/Beta");

          mids$ = new jmethodID[max_mid];
          mids$[mid_logBeta_824133ce4aec3505] = env->getStaticMethodID(cls, "logBeta", "(DD)D");
          mids$[mid_regularizedBeta_c564d6ace53a5934] = env->getStaticMethodID(cls, "regularizedBeta", "(DDD)D");
          mids$[mid_regularizedBeta_04175aacb25dae17] = env->getStaticMethodID(cls, "regularizedBeta", "(DDDD)D");
          mids$[mid_regularizedBeta_804ca0a620991588] = env->getStaticMethodID(cls, "regularizedBeta", "(DDDI)D");
          mids$[mid_regularizedBeta_255d891dcad039a7] = env->getStaticMethodID(cls, "regularizedBeta", "(DDDDI)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble Beta::logBeta(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_logBeta_824133ce4aec3505], a0, a1);
      }

      jdouble Beta::regularizedBeta(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_regularizedBeta_c564d6ace53a5934], a0, a1, a2);
      }

      jdouble Beta::regularizedBeta(jdouble a0, jdouble a1, jdouble a2, jdouble a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_regularizedBeta_04175aacb25dae17], a0, a1, a2, a3);
      }

      jdouble Beta::regularizedBeta(jdouble a0, jdouble a1, jdouble a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_regularizedBeta_804ca0a620991588], a0, a1, a2, a3);
      }

      jdouble Beta::regularizedBeta(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jint a4)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_regularizedBeta_255d891dcad039a7], a0, a1, a2, a3, a4);
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
      static PyObject *t_Beta_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Beta_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Beta_logBeta(PyTypeObject *type, PyObject *args);
      static PyObject *t_Beta_regularizedBeta(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_Beta__methods_[] = {
        DECLARE_METHOD(t_Beta, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Beta, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Beta, logBeta, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Beta, regularizedBeta, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Beta)[] = {
        { Py_tp_methods, t_Beta__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Beta)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Beta, t_Beta, Beta);

      void t_Beta::install(PyObject *module)
      {
        installType(&PY_TYPE(Beta), &PY_TYPE_DEF(Beta), module, "Beta", 0);
      }

      void t_Beta::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Beta), "class_", make_descriptor(Beta::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Beta), "wrapfn_", make_descriptor(t_Beta::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Beta), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Beta_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Beta::initializeClass, 1)))
          return NULL;
        return t_Beta::wrap_Object(Beta(((t_Beta *) arg)->object.this$));
      }
      static PyObject *t_Beta_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Beta::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Beta_logBeta(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::special::Beta::logBeta(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "logBeta", args);
        return NULL;
      }

      static PyObject *t_Beta_regularizedBeta(PyTypeObject *type, PyObject *args)
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
              OBJ_CALL(result = ::org::hipparchus::special::Beta::regularizedBeta(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 4:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble result;

            if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Beta::regularizedBeta(a0, a1, a2, a3));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jint a3;
            jdouble result;

            if (!parseArgs(args, "DDDI", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Beta::regularizedBeta(a0, a1, a2, a3));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 5:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "DDDDI", &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Beta::regularizedBeta(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "regularizedBeta", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovarianceKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovariance.h"
#include "org/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovarianceKey.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *SigmaEigenvectorsCovarianceKey::class$ = NULL;
            jmethodID *SigmaEigenvectorsCovarianceKey::mids$ = NULL;
            bool SigmaEigenvectorsCovarianceKey::live$ = false;
            SigmaEigenvectorsCovarianceKey *SigmaEigenvectorsCovarianceKey::COMMENT = NULL;
            SigmaEigenvectorsCovarianceKey *SigmaEigenvectorsCovarianceKey::CSIG3EIGVEC3 = NULL;

            jclass SigmaEigenvectorsCovarianceKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovarianceKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_5f8131a06e185f49] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovariance;)Z");
                mids$[mid_valueOf_7a2bddddfb2bfaf3] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovarianceKey;");
                mids$[mid_values_4d58d7c18eb97df4] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovarianceKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                COMMENT = new SigmaEigenvectorsCovarianceKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovarianceKey;"));
                CSIG3EIGVEC3 = new SigmaEigenvectorsCovarianceKey(env->getStaticObjectField(cls, "CSIG3EIGVEC3", "Lorg/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovarianceKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean SigmaEigenvectorsCovarianceKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_5f8131a06e185f49], a0.this$, a1.this$, a2.this$);
            }

            SigmaEigenvectorsCovarianceKey SigmaEigenvectorsCovarianceKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return SigmaEigenvectorsCovarianceKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7a2bddddfb2bfaf3], a0.this$));
            }

            JArray< SigmaEigenvectorsCovarianceKey > SigmaEigenvectorsCovarianceKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< SigmaEigenvectorsCovarianceKey >(env->callStaticObjectMethod(cls, mids$[mid_values_4d58d7c18eb97df4]));
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
            static PyObject *t_SigmaEigenvectorsCovarianceKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SigmaEigenvectorsCovarianceKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SigmaEigenvectorsCovarianceKey_of_(t_SigmaEigenvectorsCovarianceKey *self, PyObject *args);
            static PyObject *t_SigmaEigenvectorsCovarianceKey_process(t_SigmaEigenvectorsCovarianceKey *self, PyObject *args);
            static PyObject *t_SigmaEigenvectorsCovarianceKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_SigmaEigenvectorsCovarianceKey_values(PyTypeObject *type);
            static PyObject *t_SigmaEigenvectorsCovarianceKey_get__parameters_(t_SigmaEigenvectorsCovarianceKey *self, void *data);
            static PyGetSetDef t_SigmaEigenvectorsCovarianceKey__fields_[] = {
              DECLARE_GET_FIELD(t_SigmaEigenvectorsCovarianceKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SigmaEigenvectorsCovarianceKey__methods_[] = {
              DECLARE_METHOD(t_SigmaEigenvectorsCovarianceKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SigmaEigenvectorsCovarianceKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SigmaEigenvectorsCovarianceKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_SigmaEigenvectorsCovarianceKey, process, METH_VARARGS),
              DECLARE_METHOD(t_SigmaEigenvectorsCovarianceKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_SigmaEigenvectorsCovarianceKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SigmaEigenvectorsCovarianceKey)[] = {
              { Py_tp_methods, t_SigmaEigenvectorsCovarianceKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_SigmaEigenvectorsCovarianceKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SigmaEigenvectorsCovarianceKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(SigmaEigenvectorsCovarianceKey, t_SigmaEigenvectorsCovarianceKey, SigmaEigenvectorsCovarianceKey);
            PyObject *t_SigmaEigenvectorsCovarianceKey::wrap_Object(const SigmaEigenvectorsCovarianceKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_SigmaEigenvectorsCovarianceKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_SigmaEigenvectorsCovarianceKey *self = (t_SigmaEigenvectorsCovarianceKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_SigmaEigenvectorsCovarianceKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_SigmaEigenvectorsCovarianceKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_SigmaEigenvectorsCovarianceKey *self = (t_SigmaEigenvectorsCovarianceKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_SigmaEigenvectorsCovarianceKey::install(PyObject *module)
            {
              installType(&PY_TYPE(SigmaEigenvectorsCovarianceKey), &PY_TYPE_DEF(SigmaEigenvectorsCovarianceKey), module, "SigmaEigenvectorsCovarianceKey", 0);
            }

            void t_SigmaEigenvectorsCovarianceKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SigmaEigenvectorsCovarianceKey), "class_", make_descriptor(SigmaEigenvectorsCovarianceKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SigmaEigenvectorsCovarianceKey), "wrapfn_", make_descriptor(t_SigmaEigenvectorsCovarianceKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SigmaEigenvectorsCovarianceKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(SigmaEigenvectorsCovarianceKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(SigmaEigenvectorsCovarianceKey), "COMMENT", make_descriptor(t_SigmaEigenvectorsCovarianceKey::wrap_Object(*SigmaEigenvectorsCovarianceKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SigmaEigenvectorsCovarianceKey), "CSIG3EIGVEC3", make_descriptor(t_SigmaEigenvectorsCovarianceKey::wrap_Object(*SigmaEigenvectorsCovarianceKey::CSIG3EIGVEC3)));
            }

            static PyObject *t_SigmaEigenvectorsCovarianceKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SigmaEigenvectorsCovarianceKey::initializeClass, 1)))
                return NULL;
              return t_SigmaEigenvectorsCovarianceKey::wrap_Object(SigmaEigenvectorsCovarianceKey(((t_SigmaEigenvectorsCovarianceKey *) arg)->object.this$));
            }
            static PyObject *t_SigmaEigenvectorsCovarianceKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SigmaEigenvectorsCovarianceKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_SigmaEigenvectorsCovarianceKey_of_(t_SigmaEigenvectorsCovarianceKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_SigmaEigenvectorsCovarianceKey_process(t_SigmaEigenvectorsCovarianceKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_SigmaEigenvectorsCovarianceKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              SigmaEigenvectorsCovarianceKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovarianceKey::valueOf(a0));
                return t_SigmaEigenvectorsCovarianceKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_SigmaEigenvectorsCovarianceKey_values(PyTypeObject *type)
            {
              JArray< SigmaEigenvectorsCovarianceKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovarianceKey::values());
              return JArray<jobject>(result.this$).wrap(t_SigmaEigenvectorsCovarianceKey::wrap_jobject);
            }
            static PyObject *t_SigmaEigenvectorsCovarianceKey_get__parameters_(t_SigmaEigenvectorsCovarianceKey *self, void *data)
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
#include "org/orekit/frames/FramesFactory.h"
#include "org/orekit/time/UTCScale.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/frames/LazyLoadedFrames.h"
#include "org/orekit/frames/FactoryManagedFrame.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/Predefined.h"
#include "org/orekit/frames/EopHistoryLoader.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/frames/VersionedITRF.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "java/lang/String.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Transform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *FramesFactory::class$ = NULL;
      jmethodID *FramesFactory::mids$ = NULL;
      bool FramesFactory::live$ = false;
      ::java::lang::String *FramesFactory::BULLETINA_FILENAME = NULL;
      ::java::lang::String *FramesFactory::BULLETINB_1980_FILENAME = NULL;
      ::java::lang::String *FramesFactory::BULLETINB_2000_FILENAME = NULL;
      ::java::lang::String *FramesFactory::CSV_FILENAME = NULL;
      ::java::lang::String *FramesFactory::EOPC04_1980_FILENAME = NULL;
      ::java::lang::String *FramesFactory::EOPC04_2000_FILENAME = NULL;
      ::java::lang::String *FramesFactory::RAPID_DATA_PREDICTION_COLUMNS_1980_FILENAME = NULL;
      ::java::lang::String *FramesFactory::RAPID_DATA_PREDICTION_COLUMNS_2000_FILENAME = NULL;
      ::java::lang::String *FramesFactory::XML_1980_FILENAME = NULL;
      ::java::lang::String *FramesFactory::XML_2000_FILENAME = NULL;

      jclass FramesFactory::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/FramesFactory");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addDefaultEOP1980HistoryLoaders_0ed06339391372ae] = env->getStaticMethodID(cls, "addDefaultEOP1980HistoryLoaders", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
          mids$[mid_addDefaultEOP2000HistoryLoaders_0ed06339391372ae] = env->getStaticMethodID(cls, "addDefaultEOP2000HistoryLoaders", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
          mids$[mid_addEOPHistoryLoader_e1571b88fce42eed] = env->getStaticMethodID(cls, "addEOPHistoryLoader", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/frames/EopHistoryLoader;)V");
          mids$[mid_buildUncachedITRF_296f2dfe44c24f3b] = env->getStaticMethodID(cls, "buildUncachedITRF", "(Lorg/orekit/frames/EOPHistory;Lorg/orekit/time/UTCScale;)Lorg/orekit/frames/Frame;");
          mids$[mid_clearEOPHistoryLoaders_7ae3461a92a43152] = env->getStaticMethodID(cls, "clearEOPHistoryLoaders", "()V");
          mids$[mid_findEOP_2bf5a2d03e3322a9] = env->getStaticMethodID(cls, "findEOP", "(Lorg/orekit/frames/Frame;)Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getCIRF_7a43fbb334938fb6] = env->getStaticMethodID(cls, "getCIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getEME2000_238e1a1a48ce9b9b] = env->getStaticMethodID(cls, "getEME2000", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getEOPHistory_7544a283da003d74] = env->getStaticMethodID(cls, "getEOPHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getEcliptic_951ab15b750ec500] = env->getStaticMethodID(cls, "getEcliptic", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/Frame;");
          mids$[mid_getFrame_1d8cb946d8760b58] = env->getStaticMethodID(cls, "getFrame", "(Lorg/orekit/frames/Predefined;)Lorg/orekit/frames/Frame;");
          mids$[mid_getFrames_279cf148ff8a6939] = env->getStaticMethodID(cls, "getFrames", "()Lorg/orekit/frames/LazyLoadedFrames;");
          mids$[mid_getGCRF_c8fe21bcdac65bf6] = env->getStaticMethodID(cls, "getGCRF", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getGTOD_e0bf161d9af50163] = env->getStaticMethodID(cls, "getGTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getGTOD_7a43fbb334938fb6] = env->getStaticMethodID(cls, "getGTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getICRF_c8fe21bcdac65bf6] = env->getStaticMethodID(cls, "getICRF", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getITRF_7a43fbb334938fb6] = env->getStaticMethodID(cls, "getITRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getITRF_604147dabe0b6681] = env->getStaticMethodID(cls, "getITRF", "(Lorg/orekit/frames/ITRFVersion;Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/VersionedITRF;");
          mids$[mid_getITRFEquinox_7a43fbb334938fb6] = env->getStaticMethodID(cls, "getITRFEquinox", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getMOD_f41281a5e34c0279] = env->getStaticMethodID(cls, "getMOD", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getMOD_e0bf161d9af50163] = env->getStaticMethodID(cls, "getMOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getNonInterpolatingTransform_209aefbcc00c6b9b] = env->getStaticMethodID(cls, "getNonInterpolatingTransform", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getNonInterpolatingTransform_18e2b2bb1e74d830] = env->getStaticMethodID(cls, "getNonInterpolatingTransform", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_getPZ9011_7a43fbb334938fb6] = env->getStaticMethodID(cls, "getPZ9011", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTEME_238e1a1a48ce9b9b] = env->getStaticMethodID(cls, "getTEME", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTIRF_f41281a5e34c0279] = env->getStaticMethodID(cls, "getTIRF", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTIRF_7a43fbb334938fb6] = env->getStaticMethodID(cls, "getTIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTOD_e0bf161d9af50163] = env->getStaticMethodID(cls, "getTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTOD_7a43fbb334938fb6] = env->getStaticMethodID(cls, "getTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getVeis1950_238e1a1a48ce9b9b] = env->getStaticMethodID(cls, "getVeis1950", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_setEOPContinuityThreshold_77e0f9a1f260e2e5] = env->getStaticMethodID(cls, "setEOPContinuityThreshold", "(D)V");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          BULLETINA_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "BULLETINA_FILENAME", "Ljava/lang/String;"));
          BULLETINB_1980_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "BULLETINB_1980_FILENAME", "Ljava/lang/String;"));
          BULLETINB_2000_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "BULLETINB_2000_FILENAME", "Ljava/lang/String;"));
          CSV_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "CSV_FILENAME", "Ljava/lang/String;"));
          EOPC04_1980_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "EOPC04_1980_FILENAME", "Ljava/lang/String;"));
          EOPC04_2000_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "EOPC04_2000_FILENAME", "Ljava/lang/String;"));
          RAPID_DATA_PREDICTION_COLUMNS_1980_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "RAPID_DATA_PREDICTION_COLUMNS_1980_FILENAME", "Ljava/lang/String;"));
          RAPID_DATA_PREDICTION_COLUMNS_2000_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "RAPID_DATA_PREDICTION_COLUMNS_2000_FILENAME", "Ljava/lang/String;"));
          XML_1980_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "XML_1980_FILENAME", "Ljava/lang/String;"));
          XML_2000_FILENAME = new ::java::lang::String(env->getStaticObjectField(cls, "XML_2000_FILENAME", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void FramesFactory::addDefaultEOP1980HistoryLoaders(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_addDefaultEOP1980HistoryLoaders_0ed06339391372ae], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$);
      }

      void FramesFactory::addDefaultEOP2000HistoryLoaders(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::lang::String & a4, const ::java::lang::String & a5)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_addDefaultEOP2000HistoryLoaders_0ed06339391372ae], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$);
      }

      void FramesFactory::addEOPHistoryLoader(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::frames::EopHistoryLoader & a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_addEOPHistoryLoader_e1571b88fce42eed], a0.this$, a1.this$);
      }

      ::org::orekit::frames::Frame FramesFactory::buildUncachedITRF(const ::org::orekit::frames::EOPHistory & a0, const ::org::orekit::time::UTCScale & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::Frame(env->callStaticObjectMethod(cls, mids$[mid_buildUncachedITRF_296f2dfe44c24f3b], a0.this$, a1.this$));
      }

      void FramesFactory::clearEOPHistoryLoaders()
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_clearEOPHistoryLoaders_7ae3461a92a43152]);
      }

      ::org::orekit::frames::EOPHistory FramesFactory::findEOP(const ::org::orekit::frames::Frame & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::EOPHistory(env->callStaticObjectMethod(cls, mids$[mid_findEOP_2bf5a2d03e3322a9], a0.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getCIRF(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getCIRF_7a43fbb334938fb6], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getEME2000()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getEME2000_238e1a1a48ce9b9b]));
      }

      ::org::orekit::frames::EOPHistory FramesFactory::getEOPHistory(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::EOPHistory(env->callStaticObjectMethod(cls, mids$[mid_getEOPHistory_7544a283da003d74], a0.this$, a1));
      }

      ::org::orekit::frames::Frame FramesFactory::getEcliptic(const ::org::orekit::utils::IERSConventions & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::Frame(env->callStaticObjectMethod(cls, mids$[mid_getEcliptic_951ab15b750ec500], a0.this$));
      }

      ::org::orekit::frames::Frame FramesFactory::getFrame(const ::org::orekit::frames::Predefined & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::Frame(env->callStaticObjectMethod(cls, mids$[mid_getFrame_1d8cb946d8760b58], a0.this$));
      }

      ::org::orekit::frames::LazyLoadedFrames FramesFactory::getFrames()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::LazyLoadedFrames(env->callStaticObjectMethod(cls, mids$[mid_getFrames_279cf148ff8a6939]));
      }

      ::org::orekit::frames::Frame FramesFactory::getGCRF()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::Frame(env->callStaticObjectMethod(cls, mids$[mid_getGCRF_c8fe21bcdac65bf6]));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getGTOD(jboolean a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getGTOD_e0bf161d9af50163], a0));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getGTOD(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getGTOD_7a43fbb334938fb6], a0.this$, a1));
      }

      ::org::orekit::frames::Frame FramesFactory::getICRF()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::Frame(env->callStaticObjectMethod(cls, mids$[mid_getICRF_c8fe21bcdac65bf6]));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getITRF(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getITRF_7a43fbb334938fb6], a0.this$, a1));
      }

      ::org::orekit::frames::VersionedITRF FramesFactory::getITRF(const ::org::orekit::frames::ITRFVersion & a0, const ::org::orekit::utils::IERSConventions & a1, jboolean a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::VersionedITRF(env->callStaticObjectMethod(cls, mids$[mid_getITRF_604147dabe0b6681], a0.this$, a1.this$, a2));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getITRFEquinox(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getITRFEquinox_7a43fbb334938fb6], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getMOD(const ::org::orekit::utils::IERSConventions & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getMOD_f41281a5e34c0279], a0.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getMOD(jboolean a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getMOD_e0bf161d9af50163], a0));
      }

      ::org::orekit::frames::Transform FramesFactory::getNonInterpolatingTransform(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::Transform(env->callStaticObjectMethod(cls, mids$[mid_getNonInterpolatingTransform_209aefbcc00c6b9b], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::frames::FieldTransform FramesFactory::getNonInterpolatingTransform(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FieldTransform(env->callStaticObjectMethod(cls, mids$[mid_getNonInterpolatingTransform_18e2b2bb1e74d830], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getPZ9011(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getPZ9011_7a43fbb334938fb6], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getTEME()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getTEME_238e1a1a48ce9b9b]));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getTIRF(const ::org::orekit::utils::IERSConventions & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getTIRF_f41281a5e34c0279], a0.this$));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getTIRF(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getTIRF_7a43fbb334938fb6], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getTOD(jboolean a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getTOD_e0bf161d9af50163], a0));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getTOD(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getTOD_7a43fbb334938fb6], a0.this$, a1));
      }

      ::org::orekit::frames::FactoryManagedFrame FramesFactory::getVeis1950()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FactoryManagedFrame(env->callStaticObjectMethod(cls, mids$[mid_getVeis1950_238e1a1a48ce9b9b]));
      }

      void FramesFactory::setEOPContinuityThreshold(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_setEOPContinuityThreshold_77e0f9a1f260e2e5], a0);
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
      static PyObject *t_FramesFactory_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FramesFactory_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FramesFactory_addDefaultEOP1980HistoryLoaders(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_addDefaultEOP2000HistoryLoaders(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_addEOPHistoryLoader(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_buildUncachedITRF(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_clearEOPHistoryLoaders(PyTypeObject *type);
      static PyObject *t_FramesFactory_findEOP(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FramesFactory_getCIRF(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getEME2000(PyTypeObject *type);
      static PyObject *t_FramesFactory_getEOPHistory(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getEcliptic(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FramesFactory_getFrame(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FramesFactory_getFrames(PyTypeObject *type);
      static PyObject *t_FramesFactory_getGCRF(PyTypeObject *type);
      static PyObject *t_FramesFactory_getGTOD(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getICRF(PyTypeObject *type);
      static PyObject *t_FramesFactory_getITRF(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getITRFEquinox(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getMOD(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getNonInterpolatingTransform(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getPZ9011(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getTEME(PyTypeObject *type);
      static PyObject *t_FramesFactory_getTIRF(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getTOD(PyTypeObject *type, PyObject *args);
      static PyObject *t_FramesFactory_getVeis1950(PyTypeObject *type);
      static PyObject *t_FramesFactory_setEOPContinuityThreshold(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FramesFactory_get__eME2000(t_FramesFactory *self, void *data);
      static int t_FramesFactory_set__eOPContinuityThreshold(t_FramesFactory *self, PyObject *arg, void *data);
      static PyObject *t_FramesFactory_get__frames(t_FramesFactory *self, void *data);
      static PyObject *t_FramesFactory_get__gCRF(t_FramesFactory *self, void *data);
      static PyObject *t_FramesFactory_get__iCRF(t_FramesFactory *self, void *data);
      static PyObject *t_FramesFactory_get__tEME(t_FramesFactory *self, void *data);
      static PyObject *t_FramesFactory_get__veis1950(t_FramesFactory *self, void *data);
      static PyGetSetDef t_FramesFactory__fields_[] = {
        DECLARE_GET_FIELD(t_FramesFactory, eME2000),
        DECLARE_SET_FIELD(t_FramesFactory, eOPContinuityThreshold),
        DECLARE_GET_FIELD(t_FramesFactory, frames),
        DECLARE_GET_FIELD(t_FramesFactory, gCRF),
        DECLARE_GET_FIELD(t_FramesFactory, iCRF),
        DECLARE_GET_FIELD(t_FramesFactory, tEME),
        DECLARE_GET_FIELD(t_FramesFactory, veis1950),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FramesFactory__methods_[] = {
        DECLARE_METHOD(t_FramesFactory, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, addDefaultEOP1980HistoryLoaders, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, addDefaultEOP2000HistoryLoaders, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, addEOPHistoryLoader, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, buildUncachedITRF, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, clearEOPHistoryLoaders, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, findEOP, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getCIRF, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getEME2000, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getEOPHistory, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getEcliptic, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getFrame, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getFrames, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getGCRF, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getGTOD, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getICRF, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getITRF, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getITRFEquinox, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getMOD, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getNonInterpolatingTransform, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getPZ9011, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getTEME, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getTIRF, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getTOD, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, getVeis1950, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_FramesFactory, setEOPContinuityThreshold, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FramesFactory)[] = {
        { Py_tp_methods, t_FramesFactory__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FramesFactory__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FramesFactory)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FramesFactory, t_FramesFactory, FramesFactory);

      void t_FramesFactory::install(PyObject *module)
      {
        installType(&PY_TYPE(FramesFactory), &PY_TYPE_DEF(FramesFactory), module, "FramesFactory", 0);
      }

      void t_FramesFactory::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "class_", make_descriptor(FramesFactory::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "wrapfn_", make_descriptor(t_FramesFactory::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "boxfn_", make_descriptor(boxObject));
        env->getClass(FramesFactory::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "BULLETINA_FILENAME", make_descriptor(j2p(*FramesFactory::BULLETINA_FILENAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "BULLETINB_1980_FILENAME", make_descriptor(j2p(*FramesFactory::BULLETINB_1980_FILENAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "BULLETINB_2000_FILENAME", make_descriptor(j2p(*FramesFactory::BULLETINB_2000_FILENAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "CSV_FILENAME", make_descriptor(j2p(*FramesFactory::CSV_FILENAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "EOPC04_1980_FILENAME", make_descriptor(j2p(*FramesFactory::EOPC04_1980_FILENAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "EOPC04_2000_FILENAME", make_descriptor(j2p(*FramesFactory::EOPC04_2000_FILENAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "RAPID_DATA_PREDICTION_COLUMNS_1980_FILENAME", make_descriptor(j2p(*FramesFactory::RAPID_DATA_PREDICTION_COLUMNS_1980_FILENAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "RAPID_DATA_PREDICTION_COLUMNS_2000_FILENAME", make_descriptor(j2p(*FramesFactory::RAPID_DATA_PREDICTION_COLUMNS_2000_FILENAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "XML_1980_FILENAME", make_descriptor(j2p(*FramesFactory::XML_1980_FILENAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FramesFactory), "XML_2000_FILENAME", make_descriptor(j2p(*FramesFactory::XML_2000_FILENAME)));
      }

      static PyObject *t_FramesFactory_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FramesFactory::initializeClass, 1)))
          return NULL;
        return t_FramesFactory::wrap_Object(FramesFactory(((t_FramesFactory *) arg)->object.this$));
      }
      static PyObject *t_FramesFactory_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FramesFactory::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FramesFactory_addDefaultEOP1980HistoryLoaders(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::lang::String a2((jobject) NULL);
        ::java::lang::String a3((jobject) NULL);
        ::java::lang::String a4((jobject) NULL);
        ::java::lang::String a5((jobject) NULL);

        if (!parseArgs(args, "ssssss", &a0, &a1, &a2, &a3, &a4, &a5))
        {
          OBJ_CALL(::org::orekit::frames::FramesFactory::addDefaultEOP1980HistoryLoaders(a0, a1, a2, a3, a4, a5));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "addDefaultEOP1980HistoryLoaders", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_addDefaultEOP2000HistoryLoaders(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::lang::String a2((jobject) NULL);
        ::java::lang::String a3((jobject) NULL);
        ::java::lang::String a4((jobject) NULL);
        ::java::lang::String a5((jobject) NULL);

        if (!parseArgs(args, "ssssss", &a0, &a1, &a2, &a3, &a4, &a5))
        {
          OBJ_CALL(::org::orekit::frames::FramesFactory::addDefaultEOP2000HistoryLoaders(a0, a1, a2, a3, a4, a5));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "addDefaultEOP2000HistoryLoaders", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_addEOPHistoryLoader(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::EopHistoryLoader a1((jobject) NULL);

        if (!parseArgs(args, "Kk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::frames::EopHistoryLoader::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(::org::orekit::frames::FramesFactory::addEOPHistoryLoader(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "addEOPHistoryLoader", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_buildUncachedITRF(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::frames::EOPHistory a0((jobject) NULL);
        ::org::orekit::time::UTCScale a1((jobject) NULL);
        ::org::orekit::frames::Frame result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::frames::EOPHistory::initializeClass, ::org::orekit::time::UTCScale::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::frames::FramesFactory::buildUncachedITRF(a0, a1));
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "buildUncachedITRF", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_clearEOPHistoryLoaders(PyTypeObject *type)
      {
        OBJ_CALL(::org::orekit::frames::FramesFactory::clearEOPHistoryLoaders());
        Py_RETURN_NONE;
      }

      static PyObject *t_FramesFactory_findEOP(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::frames::EOPHistory result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::orekit::frames::FramesFactory::findEOP(a0));
          return ::org::orekit::frames::t_EOPHistory::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "findEOP", arg);
        return NULL;
      }

      static PyObject *t_FramesFactory_getCIRF(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getCIRF(a0, a1));
          return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getCIRF", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getEME2000(PyTypeObject *type)
      {
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getEME2000());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
      }

      static PyObject *t_FramesFactory_getEOPHistory(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::EOPHistory result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getEOPHistory(a0, a1));
          return ::org::orekit::frames::t_EOPHistory::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getEOPHistory", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getEcliptic(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::Frame result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getEcliptic(a0));
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getEcliptic", arg);
        return NULL;
      }

      static PyObject *t_FramesFactory_getFrame(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::frames::Predefined a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::Frame result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::frames::Predefined::initializeClass, &a0, &p0, ::org::orekit::frames::t_Predefined::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getFrame(a0));
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getFrame", arg);
        return NULL;
      }

      static PyObject *t_FramesFactory_getFrames(PyTypeObject *type)
      {
        ::org::orekit::frames::LazyLoadedFrames result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getFrames());
        return ::org::orekit::frames::t_LazyLoadedFrames::wrap_Object(result);
      }

      static PyObject *t_FramesFactory_getGCRF(PyTypeObject *type)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getGCRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FramesFactory_getGTOD(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jboolean a0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "Z", &a0))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getGTOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getGTOD(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getGTOD", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getICRF(PyTypeObject *type)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getICRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FramesFactory_getITRF(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getITRF(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::orekit::frames::ITRFVersion a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::IERSConventions a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            ::org::orekit::frames::VersionedITRF result((jobject) NULL);

            if (!parseArgs(args, "KKZ", ::org::orekit::frames::ITRFVersion::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::frames::t_ITRFVersion::parameters_, &a1, &p1, ::org::orekit::utils::t_IERSConventions::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getITRF(a0, a1, a2));
              return ::org::orekit::frames::t_VersionedITRF::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getITRF", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getITRFEquinox(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getITRFEquinox(a0, a1));
          return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getITRFEquinox", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getMOD(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getMOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          {
            jboolean a0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "Z", &a0))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getMOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getMOD", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getNonInterpolatingTransform(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getNonInterpolatingTransform(a0, a1, a2));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "kkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getNonInterpolatingTransform(a0, a1, a2));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getNonInterpolatingTransform", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getPZ9011(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getPZ9011(a0, a1));
          return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getPZ9011", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getTEME(PyTypeObject *type)
      {
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getTEME());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
      }

      static PyObject *t_FramesFactory_getTIRF(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getTIRF(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getTIRF(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getTIRF", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getTOD(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jboolean a0;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "Z", &a0))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getTOD(a0));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getTOD(a0, a1));
              return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getTOD", args);
        return NULL;
      }

      static PyObject *t_FramesFactory_getVeis1950(PyTypeObject *type)
      {
        ::org::orekit::frames::FactoryManagedFrame result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::FramesFactory::getVeis1950());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(result);
      }

      static PyObject *t_FramesFactory_setEOPContinuityThreshold(PyTypeObject *type, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(::org::orekit::frames::FramesFactory::setEOPContinuityThreshold(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "setEOPContinuityThreshold", arg);
        return NULL;
      }

      static PyObject *t_FramesFactory_get__eME2000(t_FramesFactory *self, void *data)
      {
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        OBJ_CALL(value = self->object.getEME2000());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(value);
      }

      static int t_FramesFactory_set__eOPContinuityThreshold(t_FramesFactory *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setEOPContinuityThreshold(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "eOPContinuityThreshold", arg);
        return -1;
      }

      static PyObject *t_FramesFactory_get__frames(t_FramesFactory *self, void *data)
      {
        ::org::orekit::frames::LazyLoadedFrames value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrames());
        return ::org::orekit::frames::t_LazyLoadedFrames::wrap_Object(value);
      }

      static PyObject *t_FramesFactory_get__gCRF(t_FramesFactory *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getGCRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FramesFactory_get__iCRF(t_FramesFactory *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getICRF());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FramesFactory_get__tEME(t_FramesFactory *self, void *data)
      {
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        OBJ_CALL(value = self->object.getTEME());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(value);
      }

      static PyObject *t_FramesFactory_get__veis1950(t_FramesFactory *self, void *data)
      {
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        OBJ_CALL(value = self->object.getVeis1950());
        return ::org::orekit::frames::t_FactoryManagedFrame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmQuaternion.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DateConsumer.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *ApmQuaternionKey::class$ = NULL;
              jmethodID *ApmQuaternionKey::mids$ = NULL;
              bool ApmQuaternionKey::live$ = false;
              ApmQuaternionKey *ApmQuaternionKey::COMMENT = NULL;
              ApmQuaternionKey *ApmQuaternionKey::EPOCH = NULL;
              ApmQuaternionKey *ApmQuaternionKey::Q1 = NULL;
              ApmQuaternionKey *ApmQuaternionKey::Q1_DOT = NULL;
              ApmQuaternionKey *ApmQuaternionKey::Q2 = NULL;
              ApmQuaternionKey *ApmQuaternionKey::Q2_DOT = NULL;
              ApmQuaternionKey *ApmQuaternionKey::Q3 = NULL;
              ApmQuaternionKey *ApmQuaternionKey::Q3_DOT = NULL;
              ApmQuaternionKey *ApmQuaternionKey::QC = NULL;
              ApmQuaternionKey *ApmQuaternionKey::QC_DOT = NULL;
              ApmQuaternionKey *ApmQuaternionKey::Q_DIR = NULL;
              ApmQuaternionKey *ApmQuaternionKey::Q_FRAME_A = NULL;
              ApmQuaternionKey *ApmQuaternionKey::Q_FRAME_B = NULL;
              ApmQuaternionKey *ApmQuaternionKey::REF_FRAME_A = NULL;
              ApmQuaternionKey *ApmQuaternionKey::REF_FRAME_B = NULL;
              ApmQuaternionKey *ApmQuaternionKey::quaternion = NULL;
              ApmQuaternionKey *ApmQuaternionKey::quaternionDot = NULL;
              ApmQuaternionKey *ApmQuaternionKey::quaternionRate = NULL;

              jclass ApmQuaternionKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_7976765135466d6f] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternion;Lorg/orekit/files/ccsds/utils/lexical/ParseToken$DateConsumer;)Z");
                  mids$[mid_valueOf_5d20e5d2a0041db3] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;");
                  mids$[mid_values_7deca71ed01baa95] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COMMENT = new ApmQuaternionKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  EPOCH = new ApmQuaternionKey(env->getStaticObjectField(cls, "EPOCH", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  Q1 = new ApmQuaternionKey(env->getStaticObjectField(cls, "Q1", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  Q1_DOT = new ApmQuaternionKey(env->getStaticObjectField(cls, "Q1_DOT", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  Q2 = new ApmQuaternionKey(env->getStaticObjectField(cls, "Q2", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  Q2_DOT = new ApmQuaternionKey(env->getStaticObjectField(cls, "Q2_DOT", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  Q3 = new ApmQuaternionKey(env->getStaticObjectField(cls, "Q3", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  Q3_DOT = new ApmQuaternionKey(env->getStaticObjectField(cls, "Q3_DOT", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  QC = new ApmQuaternionKey(env->getStaticObjectField(cls, "QC", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  QC_DOT = new ApmQuaternionKey(env->getStaticObjectField(cls, "QC_DOT", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  Q_DIR = new ApmQuaternionKey(env->getStaticObjectField(cls, "Q_DIR", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  Q_FRAME_A = new ApmQuaternionKey(env->getStaticObjectField(cls, "Q_FRAME_A", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  Q_FRAME_B = new ApmQuaternionKey(env->getStaticObjectField(cls, "Q_FRAME_B", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  REF_FRAME_A = new ApmQuaternionKey(env->getStaticObjectField(cls, "REF_FRAME_A", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  REF_FRAME_B = new ApmQuaternionKey(env->getStaticObjectField(cls, "REF_FRAME_B", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  quaternion = new ApmQuaternionKey(env->getStaticObjectField(cls, "quaternion", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  quaternionDot = new ApmQuaternionKey(env->getStaticObjectField(cls, "quaternionDot", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  quaternionRate = new ApmQuaternionKey(env->getStaticObjectField(cls, "quaternionRate", "Lorg/orekit/files/ccsds/ndm/adm/apm/ApmQuaternionKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean ApmQuaternionKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion & a2, const ::org::orekit::files::ccsds::utils::lexical::ParseToken$DateConsumer & a3) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_7976765135466d6f], a0.this$, a1.this$, a2.this$, a3.this$);
              }

              ApmQuaternionKey ApmQuaternionKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return ApmQuaternionKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_5d20e5d2a0041db3], a0.this$));
              }

              JArray< ApmQuaternionKey > ApmQuaternionKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< ApmQuaternionKey >(env->callStaticObjectMethod(cls, mids$[mid_values_7deca71ed01baa95]));
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
              static PyObject *t_ApmQuaternionKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ApmQuaternionKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ApmQuaternionKey_of_(t_ApmQuaternionKey *self, PyObject *args);
              static PyObject *t_ApmQuaternionKey_process(t_ApmQuaternionKey *self, PyObject *args);
              static PyObject *t_ApmQuaternionKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_ApmQuaternionKey_values(PyTypeObject *type);
              static PyObject *t_ApmQuaternionKey_get__parameters_(t_ApmQuaternionKey *self, void *data);
              static PyGetSetDef t_ApmQuaternionKey__fields_[] = {
                DECLARE_GET_FIELD(t_ApmQuaternionKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ApmQuaternionKey__methods_[] = {
                DECLARE_METHOD(t_ApmQuaternionKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmQuaternionKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ApmQuaternionKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_ApmQuaternionKey, process, METH_VARARGS),
                DECLARE_METHOD(t_ApmQuaternionKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_ApmQuaternionKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ApmQuaternionKey)[] = {
                { Py_tp_methods, t_ApmQuaternionKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_ApmQuaternionKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ApmQuaternionKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(ApmQuaternionKey, t_ApmQuaternionKey, ApmQuaternionKey);
              PyObject *t_ApmQuaternionKey::wrap_Object(const ApmQuaternionKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ApmQuaternionKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ApmQuaternionKey *self = (t_ApmQuaternionKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_ApmQuaternionKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ApmQuaternionKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ApmQuaternionKey *self = (t_ApmQuaternionKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_ApmQuaternionKey::install(PyObject *module)
              {
                installType(&PY_TYPE(ApmQuaternionKey), &PY_TYPE_DEF(ApmQuaternionKey), module, "ApmQuaternionKey", 0);
              }

              void t_ApmQuaternionKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "class_", make_descriptor(ApmQuaternionKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "wrapfn_", make_descriptor(t_ApmQuaternionKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(ApmQuaternionKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "COMMENT", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "EPOCH", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "Q1", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::Q1)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "Q1_DOT", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::Q1_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "Q2", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::Q2)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "Q2_DOT", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::Q2_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "Q3", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::Q3)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "Q3_DOT", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::Q3_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "QC", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::QC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "QC_DOT", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::QC_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "Q_DIR", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::Q_DIR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "Q_FRAME_A", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::Q_FRAME_A)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "Q_FRAME_B", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::Q_FRAME_B)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "REF_FRAME_A", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::REF_FRAME_A)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "REF_FRAME_B", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::REF_FRAME_B)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "quaternion", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::quaternion)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "quaternionDot", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::quaternionDot)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ApmQuaternionKey), "quaternionRate", make_descriptor(t_ApmQuaternionKey::wrap_Object(*ApmQuaternionKey::quaternionRate)));
              }

              static PyObject *t_ApmQuaternionKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ApmQuaternionKey::initializeClass, 1)))
                  return NULL;
                return t_ApmQuaternionKey::wrap_Object(ApmQuaternionKey(((t_ApmQuaternionKey *) arg)->object.this$));
              }
              static PyObject *t_ApmQuaternionKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ApmQuaternionKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ApmQuaternionKey_of_(t_ApmQuaternionKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_ApmQuaternionKey_process(t_ApmQuaternionKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion a2((jobject) NULL);
                ::org::orekit::files::ccsds::utils::lexical::ParseToken$DateConsumer a3((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternion::initializeClass, ::org::orekit::files::ccsds::utils::lexical::ParseToken$DateConsumer::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2, a3));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_ApmQuaternionKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                ApmQuaternionKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternionKey::valueOf(a0));
                  return t_ApmQuaternionKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_ApmQuaternionKey_values(PyTypeObject *type)
              {
                JArray< ApmQuaternionKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::ApmQuaternionKey::values());
                return JArray<jobject>(result.this$).wrap(t_ApmQuaternionKey::wrap_jobject);
              }
              static PyObject *t_ApmQuaternionKey_get__parameters_(t_ApmQuaternionKey *self, void *data)
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
#include "org/orekit/estimation/measurements/RangeRate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/RangeRate.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *RangeRate::class$ = NULL;
        jmethodID *RangeRate::mids$ = NULL;
        bool RangeRate::live$ = false;
        ::java::lang::String *RangeRate::MEASUREMENT_TYPE = NULL;

        jclass RangeRate::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/RangeRate");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_971d5a3ddd07805d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;DDDZLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_c188a3b50efa39a5] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_9d5a7270ffb14a9e] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RangeRate::RangeRate(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2, jdouble a3, jdouble a4, jboolean a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_971d5a3ddd07805d, a0.this$, a1.this$, a2, a3, a4, a5, a6.this$)) {}
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
        static PyObject *t_RangeRate_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RangeRate_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RangeRate_of_(t_RangeRate *self, PyObject *args);
        static int t_RangeRate_init_(t_RangeRate *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RangeRate_get__parameters_(t_RangeRate *self, void *data);
        static PyGetSetDef t_RangeRate__fields_[] = {
          DECLARE_GET_FIELD(t_RangeRate, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RangeRate__methods_[] = {
          DECLARE_METHOD(t_RangeRate, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RangeRate, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RangeRate, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RangeRate)[] = {
          { Py_tp_methods, t_RangeRate__methods_ },
          { Py_tp_init, (void *) t_RangeRate_init_ },
          { Py_tp_getset, t_RangeRate__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RangeRate)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
          NULL
        };

        DEFINE_TYPE(RangeRate, t_RangeRate, RangeRate);
        PyObject *t_RangeRate::wrap_Object(const RangeRate& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RangeRate::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RangeRate *self = (t_RangeRate *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_RangeRate::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RangeRate::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RangeRate *self = (t_RangeRate *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_RangeRate::install(PyObject *module)
        {
          installType(&PY_TYPE(RangeRate), &PY_TYPE_DEF(RangeRate), module, "RangeRate", 0);
        }

        void t_RangeRate::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRate), "class_", make_descriptor(RangeRate::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRate), "wrapfn_", make_descriptor(t_RangeRate::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRate), "boxfn_", make_descriptor(boxObject));
          env->getClass(RangeRate::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRate), "MEASUREMENT_TYPE", make_descriptor(j2p(*RangeRate::MEASUREMENT_TYPE)));
        }

        static PyObject *t_RangeRate_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RangeRate::initializeClass, 1)))
            return NULL;
          return t_RangeRate::wrap_Object(RangeRate(((t_RangeRate *) arg)->object.this$));
        }
        static PyObject *t_RangeRate_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RangeRate::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RangeRate_of_(t_RangeRate *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_RangeRate_init_(t_RangeRate *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          jdouble a2;
          jdouble a3;
          jdouble a4;
          jboolean a5;
          ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
          RangeRate object((jobject) NULL);

          if (!parseArgs(args, "kkDDDZk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = RangeRate(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(RangeRate);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }
        static PyObject *t_RangeRate_get__parameters_(t_RangeRate *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
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
            mids$[mid_addKeplerContribution_77e0f9a1f260e2e5] = env->getMethodID(cls, "addKeplerContribution", "(D)V");
            mids$[mid_addMassDerivative_77e0f9a1f260e2e5] = env->getMethodID(cls, "addMassDerivative", "(D)V");
            mids$[mid_addNonKeplerianAcceleration_a94622407b723689] = env->getMethodID(cls, "addNonKeplerianAcceleration", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void TimeDerivativesEquations::addKeplerContribution(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addKeplerContribution_77e0f9a1f260e2e5], a0);
        }

        void TimeDerivativesEquations::addMassDerivative(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addMassDerivative_77e0f9a1f260e2e5], a0);
        }

        void TimeDerivativesEquations::addNonKeplerianAcceleration(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addNonKeplerianAcceleration_a94622407b723689], a0.this$);
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
#include "org/hipparchus/analysis/differentiation/UnivariateVectorFunctionDifferentiator.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableVectorFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/UnivariateVectorFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateVectorFunctionDifferentiator::class$ = NULL;
        jmethodID *UnivariateVectorFunctionDifferentiator::mids$ = NULL;
        bool UnivariateVectorFunctionDifferentiator::live$ = false;

        jclass UnivariateVectorFunctionDifferentiator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateVectorFunctionDifferentiator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_differentiate_b23ddbdee3e84f5e] = env->getMethodID(cls, "differentiate", "(Lorg/hipparchus/analysis/UnivariateVectorFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableVectorFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableVectorFunction UnivariateVectorFunctionDifferentiator::differentiate(const ::org::hipparchus::analysis::UnivariateVectorFunction & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableVectorFunction(env->callObjectMethod(this$, mids$[mid_differentiate_b23ddbdee3e84f5e], a0.this$));
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
        static PyObject *t_UnivariateVectorFunctionDifferentiator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateVectorFunctionDifferentiator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateVectorFunctionDifferentiator_differentiate(t_UnivariateVectorFunctionDifferentiator *self, PyObject *arg);

        static PyMethodDef t_UnivariateVectorFunctionDifferentiator__methods_[] = {
          DECLARE_METHOD(t_UnivariateVectorFunctionDifferentiator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateVectorFunctionDifferentiator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateVectorFunctionDifferentiator, differentiate, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateVectorFunctionDifferentiator)[] = {
          { Py_tp_methods, t_UnivariateVectorFunctionDifferentiator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateVectorFunctionDifferentiator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateVectorFunctionDifferentiator, t_UnivariateVectorFunctionDifferentiator, UnivariateVectorFunctionDifferentiator);

        void t_UnivariateVectorFunctionDifferentiator::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateVectorFunctionDifferentiator), &PY_TYPE_DEF(UnivariateVectorFunctionDifferentiator), module, "UnivariateVectorFunctionDifferentiator", 0);
        }

        void t_UnivariateVectorFunctionDifferentiator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateVectorFunctionDifferentiator), "class_", make_descriptor(UnivariateVectorFunctionDifferentiator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateVectorFunctionDifferentiator), "wrapfn_", make_descriptor(t_UnivariateVectorFunctionDifferentiator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateVectorFunctionDifferentiator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateVectorFunctionDifferentiator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateVectorFunctionDifferentiator::initializeClass, 1)))
            return NULL;
          return t_UnivariateVectorFunctionDifferentiator::wrap_Object(UnivariateVectorFunctionDifferentiator(((t_UnivariateVectorFunctionDifferentiator *) arg)->object.this$));
        }
        static PyObject *t_UnivariateVectorFunctionDifferentiator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateVectorFunctionDifferentiator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateVectorFunctionDifferentiator_differentiate(t_UnivariateVectorFunctionDifferentiator *self, PyObject *arg)
        {
          ::org::hipparchus::analysis::UnivariateVectorFunction a0((jobject) NULL);
          ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableVectorFunction result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::analysis::UnivariateVectorFunction::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.differentiate(a0));
            return ::org::hipparchus::analysis::differentiation::t_UnivariateDifferentiableVectorFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "differentiate", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/ZipJarCrawler.h"
#include "java/io/File.h"
#include "org/orekit/data/DataProvider.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/net/URL.h"
#include "java/lang/ClassLoader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *ZipJarCrawler::class$ = NULL;
      jmethodID *ZipJarCrawler::mids$ = NULL;
      bool ZipJarCrawler::live$ = false;

      jclass ZipJarCrawler::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/ZipJarCrawler");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_46e66c77c82c9a6b] = env->getMethodID(cls, "<init>", "(Ljava/io/File;)V");
          mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_466101f788d70aca] = env->getMethodID(cls, "<init>", "(Ljava/net/URL;)V");
          mids$[mid_init$_c66945ecc28a98ae] = env->getMethodID(cls, "<init>", "(Ljava/lang/ClassLoader;Ljava/lang/String;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ZipJarCrawler::ZipJarCrawler(const ::java::io::File & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_46e66c77c82c9a6b, a0.this$)) {}

      ZipJarCrawler::ZipJarCrawler(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

      ZipJarCrawler::ZipJarCrawler(const ::java::net::URL & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_466101f788d70aca, a0.this$)) {}

      ZipJarCrawler::ZipJarCrawler(const ::java::lang::ClassLoader & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c66945ecc28a98ae, a0.this$, a1.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_ZipJarCrawler_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ZipJarCrawler_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ZipJarCrawler_init_(t_ZipJarCrawler *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_ZipJarCrawler__methods_[] = {
        DECLARE_METHOD(t_ZipJarCrawler, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ZipJarCrawler, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ZipJarCrawler)[] = {
        { Py_tp_methods, t_ZipJarCrawler__methods_ },
        { Py_tp_init, (void *) t_ZipJarCrawler_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ZipJarCrawler)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ZipJarCrawler, t_ZipJarCrawler, ZipJarCrawler);

      void t_ZipJarCrawler::install(PyObject *module)
      {
        installType(&PY_TYPE(ZipJarCrawler), &PY_TYPE_DEF(ZipJarCrawler), module, "ZipJarCrawler", 0);
      }

      void t_ZipJarCrawler::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ZipJarCrawler), "class_", make_descriptor(ZipJarCrawler::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ZipJarCrawler), "wrapfn_", make_descriptor(t_ZipJarCrawler::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ZipJarCrawler), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ZipJarCrawler_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ZipJarCrawler::initializeClass, 1)))
          return NULL;
        return t_ZipJarCrawler::wrap_Object(ZipJarCrawler(((t_ZipJarCrawler *) arg)->object.this$));
      }
      static PyObject *t_ZipJarCrawler_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ZipJarCrawler::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ZipJarCrawler_init_(t_ZipJarCrawler *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::io::File a0((jobject) NULL);
            ZipJarCrawler object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::io::File::initializeClass, &a0))
            {
              INT_CALL(object = ZipJarCrawler(a0));
              self->object = object;
              break;
            }
          }
          {
            ::java::lang::String a0((jobject) NULL);
            ZipJarCrawler object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = ZipJarCrawler(a0));
              self->object = object;
              break;
            }
          }
          {
            ::java::net::URL a0((jobject) NULL);
            ZipJarCrawler object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::net::URL::initializeClass, &a0))
            {
              INT_CALL(object = ZipJarCrawler(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::lang::ClassLoader a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ZipJarCrawler object((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::lang::ClassLoader::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ZipJarCrawler(a0, a1));
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
